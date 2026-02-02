#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C3D4F0"))) PPC_WEAK_FUNC(sub_82C3D4F0);
PPC_FUNC_IMPL(__imp__sub_82C3D4F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C3D4F8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d10
	ctx.lr = 0x82C3D500;
	__savefpr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r10,r7,29
	ctx.r10.u64 = ctx.r7.u32 & 0x7;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c3d528
	if (ctx.cr6.eq) goto loc_82C3D528;
loc_82C3D514:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d5c
	ctx.lr = 0x82C3D524;
	__restfpr_22(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C3D528:
	// cmpwi cr6,r7,320
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 320, ctx.xer);
	// bne cr6,0x82c3d514
	if (!ctx.cr6.eq) goto loc_82C3D514;
	// lis r7,-31961
	ctx.r7.s64 = -2094596096;
	// lfs f8,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// li r28,39
	ctx.r28.s64 = 39;
	// lfs f7,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// addi r9,r7,-23296
	ctx.r9.s64 = ctx.r7.s64 + -23296;
	// lfs f6,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r29,r5,1276
	ctx.r29.s64 = ctx.r5.s64 + 1276;
	// lfs f31,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// addi r10,r8,640
	ctx.r10.s64 = ctx.r8.s64 + 640;
	// lfs f5,1276(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1276);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,-23296(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23296);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r9,1264
	ctx.r31.s64 = ctx.r9.s64 + 1264;
	// lfs f4,1272(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1272);
	ctx.f4.f64 = double(temp.f32);
	// addi r11,r11,636
	ctx.r11.s64 = ctx.r11.s64 + 636;
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r10,-4
	ctx.r7.s64 = ctx.r10.s64 + -4;
	// lfs f12,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r5,12
	ctx.r30.s64 = ctx.r5.s64 + 12;
	// lfs f2,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r29,-12
	ctx.r29.s64 = ctx.r29.s64 + -12;
	// lfs f11,1276(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1276);
	ctx.f11.f64 = double(temp.f32);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lfs f10,1272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1272);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,1268(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1268);
	ctx.f9.f64 = double(temp.f32);
	// lfs f1,1264(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 1264);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r9,12
	ctx.r9.s64 = ctx.r9.s64 + 12;
	// lfs f3,1268(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1268);
	ctx.f3.f64 = double(temp.f32);
	// lfs f30,1264(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 1264);
	ctx.f30.f64 = double(temp.f32);
loc_82C3D5A0:
	// fmuls f29,f5,f0
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f4,f13
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f26,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f24,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f22,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f22,0(r7)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f23,f30,f2
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// stfs f28,-4(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f26,-8(r7)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fmuls f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// stfs f24,-12(r7)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// addi r7,r7,-16
	ctx.r7.s64 = ctx.r7.s64 + -16;
	// fmsubs f8,f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f29.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f7,f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f27.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f6,f6,f9,f25
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f25.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f7,f5,f11,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fmadds f6,f4,f10,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmsubs f8,f31,f1,f23
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 - ctx.f23.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f5,f3,f9,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f30,f1,f2
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lfs f0,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,-4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,-8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -8);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,-12(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -12);
	ctx.f3.f64 = double(temp.f32);
	// lfsu f2,16(r9)
	ea = 16 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f2.f64 = double(temp.f32);
	// lfsu f1,-16(r31)
	ea = -16 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	ctx.f1.f64 = double(temp.f32);
	// lfsu f31,16(r30)
	ea = 16 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f31.f64 = double(temp.f32);
	// lfsu f30,-16(r29)
	ea = -16 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	ctx.f30.f64 = double(temp.f32);
	// bdnz 0x82c3d5a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3D5A0;
	// fmuls f29,f5,f0
	ctx.f29.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// lfs f28,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f27,f4,f13
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f26,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f25,f3,f12
	ctx.f25.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// lfs f24,-12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f22,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f22,0(r7)
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f23,f30,f2
	ctx.f23.f64 = double(float(ctx.f30.f64 * ctx.f2.f64));
	// stfs f28,-4(r7)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r7.u32 + -4, temp.u32);
	// fmuls f12,f6,f12
	ctx.f12.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// stfs f26,-8(r7)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r7.u32 + -8, temp.u32);
	// fmuls f2,f31,f2
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f2.f64));
	// stfs f24,-12(r7)
	temp.f32 = float(ctx.f24.f64);
	PPC_STORE_U32(ctx.r7.u32 + -12, temp.u32);
	// li r7,320
	ctx.r7.s64 = 320;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fmsubs f8,f8,f11,f29
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f29.f64));
	// stfs f8,0(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// fmsubs f7,f7,f10,f27
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f10.f64 - ctx.f27.f64));
	// stfs f7,4(r10)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fmsubs f6,f6,f9,f25
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f9.f64 - ctx.f25.f64));
	// stfs f6,8(r10)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fmadds f7,f5,f11,f0
	ctx.f7.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f0.f64));
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// fmadds f6,f4,f10,f13
	ctx.f6.f64 = double(float(ctx.f4.f64 * ctx.f10.f64 + ctx.f13.f64));
	// fmsubs f8,f31,f1,f23
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f1.f64 - ctx.f23.f64));
	// stfs f8,12(r10)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fmadds f5,f3,f9,f12
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f12.f64));
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f4,f30,f1,f2
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f6,-4(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// stfs f5,-8(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -8, temp.u32);
	// stfs f4,-12(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -12, temp.u32);
	// bl 0x82c40e08
	ctx.lr = 0x82C3D700;
	sub_82C40E08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d5c
	ctx.lr = 0x82C3D710;
	__restfpr_22(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D714"))) PPC_WEAK_FUNC(sub_82C3D714);
PPC_FUNC_IMPL(__imp__sub_82C3D714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D718"))) PPC_WEAK_FUNC(sub_82C3D718);
PPC_FUNC_IMPL(__imp__sub_82C3D718) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C3D720;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d0c
	ctx.lr = 0x82C3D728;
	__savefpr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r7,29
	ctx.r11.u64 = ctx.r7.u32 & 0x7;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3d754
	if (ctx.cr6.eq) goto loc_82C3D754;
loc_82C3D740:
	// li r3,4
	ctx.r3.s64 = 4;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d58
	ctx.lr = 0x82C3D750;
	__restfpr_21(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82C3D754:
	// cmpwi cr6,r7,320
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 320, ctx.xer);
	// bne cr6,0x82c3d740
	if (!ctx.cr6.eq) goto loc_82C3D740;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82c40e08
	ctx.lr = 0x82C3D764;
	sub_82C40E08(ctx, base);
	// addi r5,r31,640
	ctx.r5.s64 = ctx.r31.s64 + 640;
	// lis r8,-31961
	ctx.r8.s64 = -2094596096;
	// li r10,40
	ctx.r10.s64 = 40;
	// subf r9,r31,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r31.s64;
	// addi r11,r8,-23296
	ctx.r11.s64 = ctx.r8.s64 + -23296;
	// addi r7,r31,1276
	ctx.r7.s64 = ctx.r31.s64 + 1276;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lfs f11,-23296(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23296);
	ctx.f11.f64 = double(temp.f32);
	// subf r27,r7,r28
	ctx.r27.s64 = ctx.r28.s64 - ctx.r7.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// addi r29,r9,-648
	ctx.r29.s64 = ctx.r9.s64 + -648;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r5,-636
	ctx.r10.s64 = ctx.r5.s64 + -636;
	// lfs f13,636(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 636);
	ctx.f13.f64 = double(temp.f32);
	// subf r6,r31,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lfs f9,632(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 632);
	ctx.f9.f64 = double(temp.f32);
	// lfs f12,640(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 640);
	ctx.f12.f64 = double(temp.f32);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lfs f8,644(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 644);
	ctx.f8.f64 = double(temp.f32);
	// addi r4,r11,632
	ctx.r4.s64 = ctx.r11.s64 + 632;
	// lfs f10,1276(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1276);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r11,644
	ctx.r3.s64 = ctx.r11.s64 + 644;
	// lfs f7,1272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1272);
	ctx.f7.f64 = double(temp.f32);
	// addi r30,r11,1272
	ctx.r30.s64 = ctx.r11.s64 + 1272;
	// addi r9,r7,-644
	ctx.r9.s64 = ctx.r7.s64 + -644;
	// subf r5,r26,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r26.s64;
	// addi r31,r27,636
	ctx.r31.s64 = ctx.r27.s64 + 636;
loc_82C3D7D4:
	// lfsx f5,r31,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	ctx.f5.f64 = double(temp.f32);
	// lfsx f3,r6,r9
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// lfs f1,-4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f31,f3,f8
	ctx.f31.f64 = double(float(ctx.f3.f64 * ctx.f8.f64));
	// lfsx f6,r6,r10
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f29,f1,f13
	ctx.f29.f64 = double(float(ctx.f1.f64 * ctx.f13.f64));
	// lfs f30,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// fmuls f28,f30,f10
	ctx.f28.f64 = double(float(ctx.f30.f64 * ctx.f10.f64));
	// lfs f27,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// fmuls f3,f3,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// lfs f26,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f26.f64 = double(temp.f32);
	// fmuls f30,f30,f11
	ctx.f30.f64 = double(float(ctx.f30.f64 * ctx.f11.f64));
	// lfs f25,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f25.f64 = double(temp.f32);
	// fmuls f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lfsx f24,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,640(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 640);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f22.f64 = double(temp.f32);
	// fmsubs f2,f1,f12,f2
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 - ctx.f2.f64));
	// lfs f21,640(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 640);
	ctx.f21.f64 = double(temp.f32);
	// fmadds f1,f27,f9,f31
	ctx.f1.f64 = double(float(ctx.f27.f64 * ctx.f9.f64 + ctx.f31.f64));
	// lfs f13,-4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f5,f12,f29
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f29.f64));
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f4,f25,f0,f4
	ctx.f4.f64 = double(float(ctx.f25.f64 * ctx.f0.f64 + ctx.f4.f64));
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f5,f26,f11,f28
	ctx.f5.f64 = double(float(ctx.f26.f64 * ctx.f11.f64 + ctx.f28.f64));
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmsubs f3,f27,f8,f3
	ctx.f3.f64 = double(float(ctx.f27.f64 * ctx.f8.f64 - ctx.f3.f64));
	// stfs f9,4(r9)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// fmsubs f8,f26,f10,f30
	ctx.f8.f64 = double(float(ctx.f26.f64 * ctx.f10.f64 - ctx.f30.f64));
	// lfs f10,-4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f7,f25,f7,f6
	ctx.f7.f64 = double(float(ctx.f25.f64 * ctx.f7.f64 - ctx.f6.f64));
	// stfs f8,0(r7)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// stfs f7,640(r9)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r9.u32 + 640, temp.u32);
	// stfsx f23,r6,r10
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// stfsx f22,r31,r7
	temp.f32 = float(ctx.f22.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, temp.u32);
	// addi r7,r7,-8
	ctx.r7.s64 = ctx.r7.s64 + -8;
	// stfsx f21,r6,r9
	temp.f32 = float(ctx.f21.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r9.u32, temp.u32);
	// stfs f5,-4(r10)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r10.u32 + -4, temp.u32);
	// stfs f4,0(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfs f1,0(r9)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// stfsx f2,r5,r8
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, temp.u32);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// stfs f3,640(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 640, temp.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// lfsu f9,-8(r4)
	ea = -8 + ctx.r4.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// lfsu f8,8(r3)
	ea = 8 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	ctx.f8.f64 = double(temp.f32);
	// lfsu f7,-8(r30)
	ea = -8 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f7.f64 = double(temp.f32);
	// stfsu f24,8(r29)
	temp.f32 = float(ctx.f24.f64);
	ea = 8 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bdnz 0x82c3d7d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3D7D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d58
	ctx.lr = 0x82C3D8B8;
	__restfpr_21(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D8BC"))) PPC_WEAK_FUNC(sub_82C3D8BC);
PPC_FUNC_IMPL(__imp__sub_82C3D8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D8C0"))) PPC_WEAK_FUNC(sub_82C3D8C0);
PPC_FUNC_IMPL(__imp__sub_82C3D8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82C3D8C8;
	__savegprlr_14(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,5
	ctx.r26.s64 = 5;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c3d9f0
	if (!ctx.cr6.gt) goto loc_82C3D9F0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lis r4,-31954
	ctx.r4.s64 = -2094137344;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r27,r7,-4
	ctx.r27.s64 = ctx.r7.s64 + -4;
	// lfs f11,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lfs f12,-3392(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -3392);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r11,-3904
	ctx.r31.s64 = ctx.r11.s64 + -3904;
	// lwz r28,-3968(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + -3968);
loc_82C3D904:
	// fmr f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82c3d950
	if (!ctx.cr6.gt) goto loc_82C3D950;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// divwu r11,r11,r26
	ctx.r11.u32 = ctx.r11.u32 / ctx.r26.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C3D920:
	// lfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f10,f13,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// lfsu f13,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fmadds f9,f0,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lfsu f0,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fmadds f8,f13,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64));
	// lfsu f13,4(r30)
	ea = 4 + ctx.r30.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// fmadds f7,f0,f0,f8
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f8.f64));
	// fmadds f0,f13,f13,f7
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// bdnz 0x82c3d920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3D920;
loc_82C3D950:
	// li r9,2
	ctx.r9.s64 = 2;
	// fmuls f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,64
	ctx.r10.s64 = 64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C3D964:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3d988
	if (!ctx.cr6.lt) goto loc_82C3D988;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82c3d98c
	goto loc_82C3D98C;
loc_82C3D988:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C3D98C:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3d9b0
	if (!ctx.cr6.lt) goto loc_82C3D9B0;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82c3d9b4
	goto loc_82C3D9B4;
loc_82C3D9B0:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C3D9B4:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lfs f13,-4(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3d9d8
	if (!ctx.cr6.lt) goto loc_82C3D9D8;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// b 0x82c3d9dc
	goto loc_82C3D9DC;
loc_82C3D9D8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C3D9DC:
	// bdnz 0x82c3d964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3D964;
	// addi r11,r11,-24
	ctx.r11.s64 = ctx.r11.s64 + -24;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r27.u32 = ea;
	// bne 0x82c3d904
	if (!ctx.cr0.eq) goto loc_82C3D904;
loc_82C3D9F0:
	// addic. r11,r16,-2
	ctx.xer.ca = ctx.r16.u32 > 1;
	ctx.r11.s64 = ctx.r16.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82c3da28
	if (ctx.cr0.lt) goto loc_82C3DA28;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3DA08:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r10,r10,-11
	ctx.r10.s64 = ctx.r10.s64 + -11;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c3da20
	if (!ctx.cr6.lt) goto loc_82C3DA20;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C3DA20:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// bdnz 0x82c3da08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3DA08;
loc_82C3DA28:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r11,r8,1
	ctx.xer.ca = ctx.r8.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r8.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82c3da3c
	if (!ctx.cr6.lt) goto loc_82C3DA3C;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82C3DA3C:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r4,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r4.s64 = 31 - ctx.r8.s64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82c3da50
	if (!ctx.cr6.gt) goto loc_82C3DA50;
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
loc_82C3DA50:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subfic r9,r8,-8
	ctx.xer.ca = ctx.r8.u32 <= 4294967288;
	ctx.r9.s64 = -8 - ctx.r8.s64;
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r26,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r26.u32);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// stw r11,-208(r1)
	PPC_STORE_U32(ctx.r1.u32 + -208, ctx.r11.u32);
	// bge cr6,0x82c3da7c
	if (!ctx.cr6.lt) goto loc_82C3DA7C;
	// stw r9,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r9.u32);
loc_82C3DA7C:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82c3da8c
	if (!ctx.cr6.gt) goto loc_82C3DA8C;
	// stw r4,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r4.u32);
loc_82C3DA8C:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// ble cr6,0x82c3daf0
	if (!ctx.cr6.gt) goto loc_82C3DAF0;
	// addi r10,r16,-3
	ctx.r10.s64 = ctx.r16.s64 + -3;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3DAA8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c3dab8
	if (!ctx.cr6.lt) goto loc_82C3DAB8;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
loc_82C3DAB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82c3dac8
	if (!ctx.cr6.gt) goto loc_82C3DAC8;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
loc_82C3DAC8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c3dad8
	if (!ctx.cr6.lt) goto loc_82C3DAD8;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82C3DAD8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// ble cr6,0x82c3dae8
	if (!ctx.cr6.gt) goto loc_82C3DAE8;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
loc_82C3DAE8:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82c3daa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3DAA8;
loc_82C3DAF0:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// ble cr6,0x82c3dd48
	if (!ctx.cr6.gt) goto loc_82C3DD48;
	// addi r18,r16,-1
	ctx.r18.s64 = ctx.r16.s64 + -1;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// addi r27,r11,19200
	ctx.r27.s64 = ctx.r11.s64 + 19200;
	// addi r26,r10,18992
	ctx.r26.s64 = ctx.r10.s64 + 18992;
	// blt cr6,0x82c3dc94
	if (ctx.cr6.lt) goto loc_82C3DC94;
	// addi r10,r1,-208
	ctx.r10.s64 = ctx.r1.s64 + -208;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// addi r8,r5,4
	ctx.r8.s64 = ctx.r5.s64 + 4;
	// addi r11,r7,8
	ctx.r11.s64 = ctx.r7.s64 + 8;
	// subf r21,r7,r5
	ctx.r21.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r20,r7,r6
	ctx.r20.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r19,r7,r10
	ctx.r19.s64 = ctx.r10.s64 - ctx.r7.s64;
	// subf r24,r5,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r5.s64;
	// subf r23,r5,r6
	ctx.r23.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_82C3DB44:
	// addi r25,r4,1
	ctx.r25.s64 = ctx.r4.s64 + 1;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// addi r9,r25,-2
	ctx.r9.s64 = ctx.r25.s64 + -2;
	// ble cr6,0x82c3db58
	if (!ctx.cr6.gt) goto loc_82C3DB58;
	// li r9,12
	ctx.r9.s64 = 12;
loc_82C3DB58:
	// lwz r28,-8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// cmpwi cr6,r10,-12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12, ctx.xer);
	// bge cr6,0x82c3db70
	if (!ctx.cr6.lt) goto loc_82C3DB70;
	// li r10,-12
	ctx.r10.s64 = -12;
loc_82C3DB70:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r30,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 3;
	// stwx r10,r24,r8
	PPC_STORE_U32(ctx.r24.u32 + ctx.r8.u32, ctx.r10.u32);
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r29,r9,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// rlwinm r14,r31,2,0,29
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r10,4,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x10;
	// rlwinm r15,r10,2,27,29
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// stw r31,-224(r1)
	PPC_STORE_U32(ctx.r1.u32 + -224, ctx.r31.u32);
	// add r31,r28,r10
	ctx.r31.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r30,r9,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r14,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r26.u32);
	// addi r31,r31,-12
	ctx.r31.s64 = ctx.r31.s64 + -12;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// sraw r29,r29,r15
	temp.u32 = ctx.r15.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r29.s32 < 0) & (((ctx.r29.s32 >> temp.u32) << temp.u32) != ctx.r29.s32);
	ctx.r29.s64 = ctx.r29.s32 >> temp.u32;
	// stw r31,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r31.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// lwz r15,-224(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// clrlwi r29,r29,28
	ctx.r29.u64 = ctx.r29.u32 & 0xF;
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r10,r29,1
	ctx.r10.s64 = ctx.r29.s64 + 1;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r22,r22,r10
	ctx.r22.u64 = ctx.r22.u64 + ctx.r10.u64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r25,13
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 13, ctx.xer);
	// lwzx r10,r30,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// sraw r10,r10,r15
	temp.u32 = ctx.r15.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stwx r10,r23,r8
	PPC_STORE_U32(ctx.r23.u32 + ctx.r8.u32, ctx.r10.u32);
	// ble cr6,0x82c3dbf8
	if (!ctx.cr6.gt) goto loc_82C3DBF8;
	// li r9,12
	ctx.r9.s64 = 12;
loc_82C3DBF8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r31,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r31.s64;
	// cmpwi cr6,r10,-12
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12, ctx.xer);
	// bge cr6,0x82c3dc0c
	if (!ctx.cr6.lt) goto loc_82C3DC0C;
	// li r10,-12
	ctx.r10.s64 = -12;
loc_82C3DC0C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// lwz r31,-4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r28,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r10.s32 >> 3;
	// stwx r10,r19,r11
	PPC_STORE_U32(ctx.r19.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r30,r9,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// rlwinm r31,r10,2,27,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x1C;
	// addi r9,r9,-12
	ctx.r9.s64 = ctx.r9.s64 + -12;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r29,r29,r26
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r26.u32);
	// rlwinm r28,r10,4,27,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x10;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// sraw r31,r29,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r29.s32 < 0) & (((ctx.r29.s32 >> temp.u32) << temp.u32) != ctx.r29.s32);
	ctx.r31.s64 = ctx.r29.s32 >> temp.u32;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// clrlwi r10,r31,28
	ctx.r10.u64 = ctx.r31.u32 & 0xF;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r21,r11
	PPC_STORE_U32(ctx.r21.u32 + ctx.r11.u32, ctx.r10.u32);
	// add r17,r17,r10
	ctx.r17.u64 = ctx.r17.u64 + ctx.r10.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmpw cr6,r4,r18
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r18.s32, ctx.xer);
	// lwzx r10,r9,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r27.u32);
	// sraw r9,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// stwx r10,r20,r11
	PPC_STORE_U32(ctx.r20.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// blt cr6,0x82c3db44
	if (ctx.cr6.lt) goto loc_82C3DB44;
loc_82C3DC94:
	// cmpw cr6,r4,r16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r16.s32, ctx.xer);
	// bge cr6,0x82c3dd40
	if (!ctx.cr6.lt) goto loc_82C3DD40;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// ble cr6,0x82c3dcac
	if (!ctx.cr6.gt) goto loc_82C3DCAC;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82C3DCAC:
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r9,r7
	ctx.r31.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// cmpwi cr6,r11,-12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -12, ctx.xer);
	// bge cr6,0x82c3dccc
	if (!ctx.cr6.lt) goto loc_82C3DCCC;
	// li r11,-12
	ctx.r11.s64 = -12;
loc_82C3DCCC:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r4,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 3;
	// add r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// rlwinm r4,r11,2,27,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r30,r1,-208
	ctx.r30.s64 = ctx.r1.s64 + -208;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// rlwinm r29,r11,4,27,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// sraw r4,r7,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r4.s64 = ctx.r7.s32 >> temp.u32;
	// stwx r11,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r11.u32);
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r4,28
	ctx.r11.u64 = ctx.r4.u32 & 0xF;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r3,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r5
	PPC_STORE_U32(ctx.r9.u32 + ctx.r5.u32, ctx.r11.u32);
	// addi r3,r11,5
	ctx.r3.s64 = ctx.r11.s64 + 5;
	// addi r7,r10,-12
	ctx.r7.s64 = ctx.r10.s64 + -12;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lwzx r5,r8,r27
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r27.u32);
	// sraw r4,r5,r29
	temp.u32 = ctx.r29.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stwx r11,r9,r6
	PPC_STORE_U32(ctx.r9.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82C3DD40:
	// add r11,r17,r22
	ctx.r11.u64 = ctx.r17.u64 + ctx.r22.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
loc_82C3DD48:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3DD4C"))) PPC_WEAK_FUNC(sub_82C3DD4C);
PPC_FUNC_IMPL(__imp__sub_82C3DD4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3DD50"))) PPC_WEAK_FUNC(sub_82C3DD50);
PPC_FUNC_IMPL(__imp__sub_82C3DD50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82C3DD58;
	__savegprlr_24(ctx, base);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lis r8,-31974
	ctx.r8.s64 = -2095448064;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,24752
	ctx.r9.s64 = ctx.r11.s64 + 24752;
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// lis r3,-31954
	ctx.r3.s64 = -2094137344;
	// addi r11,r8,24688
	ctx.r11.s64 = ctx.r8.s64 + 24688;
	// lis r29,-31974
	ctx.r29.s64 = -2095448064;
	// lis r30,-31974
	ctx.r30.s64 = -2095448064;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lis r8,-31974
	ctx.r8.s64 = -2095448064;
	// lis r31,-31974
	ctx.r31.s64 = -2095448064;
	// addi r3,r3,-4256
	ctx.r3.s64 = ctx.r3.s64 + -4256;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r7,r7,-4224
	ctx.r7.s64 = ctx.r7.s64 + -4224;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r29,24784
	ctx.r29.s64 = ctx.r29.s64 + 24784;
	// addi r26,r30,22036
	ctx.r26.s64 = ctx.r30.s64 + 22036;
	// addi r8,r8,24656
	ctx.r8.s64 = ctx.r8.s64 + 24656;
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r31,21692
	ctx.r31.s64 = ctx.r31.s64 + 21692;
	// extsh r30,r9
	ctx.r30.s64 = ctx.r9.s16;
	// lfsx f13,r4,r7
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r10,r29
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	ctx.f12.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwzx r26,r10,r26
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r26.u32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lwzx r25,r10,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// addi r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 1;
	// lwzx r27,r10,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// li r29,32
	ctx.r29.s64 = 32;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3e040
	if (!ctx.cr6.gt) goto loc_82C3E040;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f11,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
loc_82C3DDEC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r25,4
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 4, ctx.xer);
	// blt cr6,0x82c3df58
	if (ctx.cr6.lt) goto loc_82C3DF58;
	// addi r31,r25,-3
	ctx.r31.s64 = ctx.r25.s64 + -3;
loc_82C3DE08:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r10,-76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c3de50
	if (ctx.cr6.eq) goto loc_82C3DE50;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82c3de3c
	if (!ctx.cr6.gt) goto loc_82C3DE3C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82C3DE3C:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82c3de4c
	if (ctx.cr6.gt) goto loc_82C3DE4C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82c3de50
	if (!ctx.cr6.lt) goto loc_82C3DE50;
loc_82C3DE4C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82C3DE50:
	// lfs f0,4(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3dea0
	if (ctx.cr6.eq) goto loc_82C3DEA0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82c3de8c
	if (!ctx.cr6.gt) goto loc_82C3DE8C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82C3DE8C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82c3de9c
	if (ctx.cr6.gt) goto loc_82C3DE9C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3dea0
	if (!ctx.cr6.lt) goto loc_82C3DEA0;
loc_82C3DE9C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C3DEA0:
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3def0
	if (ctx.cr6.eq) goto loc_82C3DEF0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82c3dedc
	if (!ctx.cr6.gt) goto loc_82C3DEDC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82C3DEDC:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82c3deec
	if (ctx.cr6.gt) goto loc_82C3DEEC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3def0
	if (!ctx.cr6.lt) goto loc_82C3DEF0;
loc_82C3DEEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C3DEF0:
	// lfs f0,12(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r11,-76(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3df40
	if (ctx.cr6.eq) goto loc_82C3DF40;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82c3df2c
	if (!ctx.cr6.gt) goto loc_82C3DF2C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82C3DF2C:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82c3df3c
	if (ctx.cr6.gt) goto loc_82C3DF3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3df40
	if (!ctx.cr6.lt) goto loc_82C3DF40;
loc_82C3DF3C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C3DF40:
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82c3de08
	if (ctx.cr6.lt) goto loc_82C3DE08;
loc_82C3DF58:
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82c3dfc0
	if (!ctx.cr6.lt) goto loc_82C3DFC0;
	// subf r10,r7,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r7.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3DF68:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fabs f10,f0
	ctx.f10.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmadd f9,f10,f13,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64;
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f8.u64);
	// lwz r10,-76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c3dfb0
	if (ctx.cr6.eq) goto loc_82C3DFB0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82c3df9c
	if (!ctx.cr6.gt) goto loc_82C3DF9C;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_82C3DF9C:
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bgt cr6,0x82c3dfac
	if (ctx.cr6.gt) goto loc_82C3DFAC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82c3dfb0
	if (!ctx.cr6.lt) goto loc_82C3DFB0;
loc_82C3DFAC:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82C3DFB0:
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82c3df68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3DF68;
loc_82C3DFC0:
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// rlwinm r7,r11,2,27,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1C;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r11,4,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// lwzx r10,r10,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// sraw r7,r10,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r7.s64 = ctx.r10.s32 >> temp.u32;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r11,r7,28
	ctx.r11.u64 = ctx.r7.u32 & 0xF;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r26
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r26.u32);
	// subf. r11,r10,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sraw r10,r7,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r7.s32 < 0) & (((ctx.r7.s32 >> temp.u32) << temp.u32) != ctx.r7.s32);
	ctx.r10.s64 = ctx.r7.s32 >> temp.u32;
	// clrlwi r7,r10,16
	ctx.r7.u64 = ctx.r10.u32 & 0xFFFF;
	// slw r10,r7,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r4.u8 & 0x3F));
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// blt 0x82c3e01c
	if (ctx.cr0.lt) goto loc_82C3E01C;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// b 0x82c3e038
	goto loc_82C3E038;
loc_82C3E01C:
	// neg r8,r11
	ctx.r8.s64 = -ctx.r11.s64;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// subfic r29,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r29.s64 = 32 - ctx.r8.s64;
	// stw r7,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r7.u32);
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// slw r28,r10,r29
	ctx.r28.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
loc_82C3E038:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82c3ddec
	if (!ctx.cr0.eq) goto loc_82C3DDEC;
loc_82C3E040:
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3E048"))) PPC_WEAK_FUNC(sub_82C3E048);
PPC_FUNC_IMPL(__imp__sub_82C3E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82C3E050;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// stw r4,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r4.u32);
	// li r14,0
	ctx.r14.s64 = 0;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r17,r6
	ctx.r17.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// stw r14,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r14.u32);
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r16,r9
	ctx.r16.u64 = ctx.r9.u64;
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r29,r14
	ctx.r29.u64 = ctx.r14.u64;
	// ble 0x82c3e0b8
	if (!ctx.cr0.gt) goto loc_82C3E0B8;
loc_82C3E088:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// stw r8,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r8.u32);
	// lwzx r6,r9,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r16.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stwx r5,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r5.u32);
	// blt cr6,0x82c3e088
	if (ctx.cr6.lt) goto loc_82C3E088;
loc_82C3E0B8:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r18,332(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r30,324(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r19,-3968(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + -3968);
	// ble cr6,0x82c3e13c
	if (!ctx.cr6.gt) goto loc_82C3E13C;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// rlwinm r25,r19,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// subf r23,r20,r24
	ctx.r23.s64 = ctx.r24.s64 - ctx.r20.s64;
	// subf r22,r30,r20
	ctx.r22.s64 = ctx.r20.s64 - ctx.r30.s64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82C3E0EC:
	// add r11,r22,r31
	ctx.r11.u64 = ctx.r22.u64 + ctx.r31.u64;
	// lwzx r3,r11,r23
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bge cr6,0x82c3e11c
	if (!ctx.cr6.lt) goto loc_82C3E11C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c3e11c
	if (ctx.cr6.lt) goto loc_82C3E11C;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82c3dd50
	ctx.lr = 0x82C3E114;
	sub_82C3DD50(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82c3e120
	goto loc_82C3E120;
loc_82C3E11C:
	// stw r14,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r14.u32);
loc_82C3E120:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c3e0ec
	if (!ctx.cr0.eq) goto loc_82C3E0EC;
loc_82C3E13C:
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x82c3e1d0
	if (!ctx.cr6.lt) goto loc_82C3E1D0;
loc_82C3E144:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3e1cc
	if (!ctx.cr6.gt) goto loc_82C3E1CC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwzx r11,r10,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r16.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r31,r24
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// addic. r10,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r10.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r10.u32);
	// bge 0x82c3e178
	if (!ctx.cr0.lt) goto loc_82C3E178;
	// stwx r14,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r14.u32);
loc_82C3E178:
	// lwzx r3,r31,r24
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r10,r31,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// bge cr6,0x82c3e1b8
	if (!ctx.cr6.lt) goto loc_82C3E1B8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c3e1b8
	if (ctx.cr6.lt) goto loc_82C3E1B8;
	// mullw r10,r19,r11
	ctx.r10.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r11.s32);
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r17
	ctx.r5.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82c3dd50
	ctx.lr = 0x82C3E1B0;
	sub_82C3DD50(ctx, base);
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x82c3e1bc
	goto loc_82C3E1BC;
loc_82C3E1B8:
	// stwx r14,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r14.u32);
loc_82C3E1BC:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x82c3e144
	if (ctx.cr6.lt) goto loc_82C3E144;
loc_82C3E1CC:
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
loc_82C3E1D0:
	// ble cr6,0x82c3e254
	if (!ctx.cr6.gt) goto loc_82C3E254;
loc_82C3E1D4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r10,268(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// addi r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82c3e254
	if (!ctx.cr6.lt) goto loc_82C3E254;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r3,r10,1
	ctx.r3.s64 = ctx.r10.s64 + 1;
	// subf r29,r9,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r9.s64;
	// stwx r3,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r3.u32);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// bge cr6,0x82c3e23c
	if (!ctx.cr6.lt) goto loc_82C3E23C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c3e23c
	if (ctx.cr6.lt) goto loc_82C3E23C;
	// mullw r10,r19,r11
	ctx.r10.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r11.s32);
	// lwzx r4,r31,r20
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r20.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r5,r10,r17
	ctx.r5.u64 = ctx.r10.u64 + ctx.r17.u64;
	// add r6,r11,r18
	ctx.r6.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82c3dd50
	ctx.lr = 0x82C3E234;
	sub_82C3DD50(ctx, base);
	// stwx r3,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x82c3e240
	goto loc_82C3E240;
loc_82C3E23C:
	// stwx r14,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r14.u32);
loc_82C3E240:
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// stw r28,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r28.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmpw cr6,r29,r15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r15.s32, ctx.xer);
	// bgt cr6,0x82c3e1d4
	if (ctx.cr6.gt) goto loc_82C3E1D4;
loc_82C3E254:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3E25C"))) PPC_WEAK_FUNC(sub_82C3E25C);
PPC_FUNC_IMPL(__imp__sub_82C3E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3E260"))) PPC_WEAK_FUNC(sub_82C3E260);
PPC_FUNC_IMPL(__imp__sub_82C3E260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C3E268;
	__savegprlr_22(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addi r10,r1,132
	ctx.r10.s64 = ctx.r1.s64 + 132;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,120
	ctx.r7.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3fcc0
	ctx.lr = 0x82C3E2A4;
	sub_82C3FCC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3e734
	if (!ctx.cr6.eq) goto loc_82C3E734;
	// addi r7,r1,108
	ctx.r7.s64 = ctx.r1.s64 + 108;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3fd70
	ctx.lr = 0x82C3E2C4;
	sub_82C3FD70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3e734
	if (!ctx.cr6.eq) goto loc_82C3E734;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r31,320
	ctx.r25.s64 = ctx.r31.s64 + 320;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// addi r5,r31,256
	ctx.r5.s64 = ctx.r31.s64 + 256;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c3d8c0
	ctx.lr = 0x82C3E2F0;
	sub_82C3D8C0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// subf r4,r9,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// subf r11,r5,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// subf r27,r3,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c40458
	ctx.lr = 0x82C3E330;
	sub_82C40458(ctx, base);
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82c3e36c
	if (!ctx.cr6.gt) goto loc_82C3E36C;
	// addi r10,r23,-1
	ctx.r10.s64 = ctx.r23.s64 + -1;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3E350:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// addi r9,r9,24
	ctx.r9.s64 = ctx.r9.s64 + 24;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3e350
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3E350;
loc_82C3E36C:
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r24,r31,384
	ctx.r24.s64 = ctx.r31.s64 + 384;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r24,-8
	ctx.r11.s64 = ctx.r24.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3E380:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3e380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3E380;
	// addi r30,r31,448
	ctx.r30.s64 = ctx.r31.s64 + 448;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82c3e048
	ctx.lr = 0x82C3E3B8;
	sub_82C3E048(ctx, base);
	// addi r11,r23,64
	ctx.r11.s64 = ctx.r23.s64 + 64;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r9,r23,80
	ctx.r9.s64 = ctx.r23.s64 + 80;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subfic r11,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r10.s64;
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r10,r6,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// stwx r8,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r5,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r5.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82c3e488
	if (ctx.cr6.lt) goto loc_82C3E488;
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// addi r4,r22,-2
	ctx.r4.s64 = ctx.r22.s64 + -2;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82C3E410:
	// lwz r5,-64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -64);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf. r8,r11,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt 0x82c3e46c
	if (ctx.cr0.lt) goto loc_82C3E46C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r8.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// clrlwi r29,r5,16
	ctx.r29.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r5,2(r4)
	ea = 2 + ctx.r4.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r4.u32 = ea;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// slw r10,r29,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// subfe r9,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r5.s64 = 16 - ctx.r8.s64;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// slw r11,r7,r5
	ctx.r11.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// subfic r11,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r8.s64;
	// b 0x82c3e480
	goto loc_82C3E480;
loc_82C3E46C:
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// slw r8,r7,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
loc_82C3E480:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bdnz 0x82c3e410
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3E410;
loc_82C3E488:
	// lwz r27,108(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82c3e570
	if (!ctx.cr6.gt) goto loc_82C3E570;
loc_82C3E498:
	// rlwinm r4,r6,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82c3e570
	if (!ctx.cr6.lt) goto loc_82C3E570;
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,32
	ctx.r8.s64 = 32;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bgt cr6,0x82c3e4b8
	if (ctx.cr6.gt) goto loc_82C3E4B8;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82C3E4B8:
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82c3e55c
	if (!ctx.cr6.gt) goto loc_82C3E55C;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r28,r31,-4
	ctx.r28.s64 = ctx.r31.s64 + -4;
	// add r5,r5,r22
	ctx.r5.u64 = ctx.r5.u64 + ctx.r22.u64;
	// addi r31,r5,-2
	ctx.r31.s64 = ctx.r5.s64 + -2;
loc_82C3E4D8:
	// cmpw cr6,r4,r27
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82c3e55c
	if (!ctx.cr6.lt) goto loc_82C3E55C;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c3e73c
	if (ctx.cr6.lt) goto loc_82C3E73C;
	// subfic r5,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r11.s64;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srw r5,r7,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// add r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 + ctx.r10.u64;
	// slw r7,r7,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r5,r10
	ctx.r5.s64 = ctx.r10.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	// sthu r5,2(r31)
	ea = 2 + ctx.r31.u32;
	PPC_STORE_U16(ea, ctx.r5.u16);
	ctx.r31.u32 = ea;
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// slw r10,r11,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// addi r11,r9,-15
	ctx.r11.s64 = ctx.r9.s64 + -15;
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfe r5,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r11,16
	ctx.r11.s64 = 16;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// bne cr6,0x82c3e554
	if (!ctx.cr6.eq) goto loc_82C3E554;
loc_82C3E53C:
	// addi r29,r29,-32
	ctx.r29.s64 = ctx.r29.s64 + -32;
	// lwzu r7,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// li r8,32
	ctx.r8.s64 = 32;
	// cmpwi cr6,r29,32
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 32, ctx.xer);
	// bgt cr6,0x82c3e554
	if (ctx.cr6.gt) goto loc_82C3E554;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
loc_82C3E554:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bgt cr6,0x82c3e4d8
	if (ctx.cr6.gt) goto loc_82C3E4D8;
loc_82C3E55C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r26,r23
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82c3e498
	if (ctx.cr6.lt) goto loc_82C3E498;
loc_82C3E570:
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82c3e5e0
	if (!ctx.cr6.lt) goto loc_82C3E5E0;
	// rlwinm r7,r6,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r5,0
	ctx.r5.s64 = 0;
	// add r7,r7,r22
	ctx.r7.u64 = ctx.r7.u64 + ctx.r22.u64;
	// ori r4,r5,65535
	ctx.r4.u64 = ctx.r5.u64 | 65535;
	// addi r7,r7,-2
	ctx.r7.s64 = ctx.r7.s64 + -2;
loc_82C3E590:
	// subfic r5,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r5.s64 = 16 - ctx.r11.s64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// srw r10,r4,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r5.u8 & 0x3F));
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// clrlwi r5,r10,16
	ctx.r5.u64 = ctx.r10.u32 & 0xFFFF;
	// sthu r10,2(r7)
	ea = 2 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r7.u32 = ea;
	// li r10,0
	ctx.r10.s64 = 0;
	// slw r11,r5,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// xor r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// addi r5,r9,-15
	ctx.r5.s64 = ctx.r9.s64 + -15;
	// li r11,16
	ctx.r11.s64 = 16;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// cmpw cr6,r8,r27
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r27.s32, ctx.xer);
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// blt cr6,0x82c3e590
	if (ctx.cr6.lt) goto loc_82C3E590;
loc_82C3E5E0:
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c3e730
	if (!ctx.cr6.gt) goto loc_82C3E730;
	// addi r10,r6,-1
	ctx.r10.s64 = ctx.r6.s64 + -1;
	// li r11,-1
	ctx.r11.s64 = -1;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// slw r7,r11,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r5.u8 & 0x3F));
	// lhzx r6,r8,r22
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r22.u32);
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// extsh r10,r6
	ctx.r10.s64 = ctx.r6.s16;
	// and r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 & ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sthx r9,r8,r22
	PPC_STORE_U16(ctx.r8.u32 + ctx.r22.u32, ctx.r9.u16);
	// bge 0x82c3e620
	if (!ctx.cr0.lt) goto loc_82C3E620;
	// li r11,14
	ctx.r11.s64 = 14;
loc_82C3E620:
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lis r8,-31974
	ctx.r8.s64 = -2095448064;
	// xor r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// addi r6,r8,13628
	ctx.r6.s64 = ctx.r8.s64 + 13628;
	// slw r11,r7,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// xor r7,r11,r3
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r3.u64;
	// lwz r10,13628(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 13628);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// srawi r4,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 15;
	// lwz r8,8(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// clrlwi r3,r7,17
	ctx.r3.u64 = ctx.r7.u32 & 0x7FFF;
	// lwz r7,12(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// xor r6,r4,r3
	ctx.r6.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// and r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 & ctx.r6.u64;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// lhzx r31,r11,r22
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r22.u32);
	// and r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 & ctx.r6.u64;
	// xor r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// slw r6,r4,r5
	ctx.r6.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r5.u8 & 0x3F));
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r4,r6,-1
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// srawi r9,r10,8
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 8;
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// xor r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// rlwinm r10,r5,1,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x2;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// srawi r3,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r8.s32 >> 8;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// xor r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r8.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r3,r5,r8
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r9,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 2;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// srawi r3,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 8;
	// xor r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r8,r3,r7
	ctx.r8.u64 = ctx.r3.u64 ^ ctx.r7.u64;
	// clrlwi r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	// srawi r7,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 4;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// xor r5,r7,r8
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 2;
	// xor r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// xor r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// clrlwi r9,r7,31
	ctx.r9.u64 = ctx.r7.u32 & 0x1;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// and r5,r4,r10
	ctx.r5.u64 = ctx.r4.u64 & ctx.r10.u64;
	// or r4,r5,r31
	ctx.r4.u64 = ctx.r5.u64 | ctx.r31.u64;
	// sthx r4,r11,r22
	PPC_STORE_U16(ctx.r11.u32 + ctx.r22.u32, ctx.r4.u16);
loc_82C3E730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3E734:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C3E73C:
	// subfic r5,r8,32
	ctx.xer.ca = ctx.r8.u32 <= 32;
	ctx.r5.s64 = 32 - ctx.r8.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// srw r8,r7,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// b 0x82c3e53c
	goto loc_82C3E53C;
}

__attribute__((alias("__imp__sub_82C3E758"))) PPC_WEAK_FUNC(sub_82C3E758);
PPC_FUNC_IMPL(__imp__sub_82C3E758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C3E760;
	__savegprlr_27(ctx, base);
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// li r27,16
	ctx.r27.s64 = 16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3e78c
	if (!ctx.cr6.eq) goto loc_82C3E78C;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r8,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r8.u32);
loc_82C3E78C:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lwz r10,320(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// bne 0x82c3e7c8
	if (!ctx.cr0.eq) goto loc_82C3E7C8;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
loc_82C3E7C8:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82c3e80c
	if (!ctx.cr0.eq) goto loc_82C3E80C;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
loc_82C3E80C:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82c3e850
	if (!ctx.cr0.eq) goto loc_82C3E850;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r10,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r10.u32);
loc_82C3E850:
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addic. r11,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r11.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sraw r10,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bne 0x82c3e894
	if (!ctx.cr0.eq) goto loc_82C3E894;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r9.u32);
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r11,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r11.u32);
loc_82C3E894:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,320(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stw r11,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,312(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// subf r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r11,r10,-5
	ctx.r11.s64 = ctx.r10.s64 + -5;
	// stw r9,-112(r1)
	PPC_STORE_U32(ctx.r1.u32 + -112, ctx.r9.u32);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// ble cr6,0x82c3e9a0
	if (!ctx.cr6.gt) goto loc_82C3E9A0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lwz r8,324(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lwz r31,320(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// addi r28,r1,-112
	ctx.r28.s64 = ctx.r1.s64 + -112;
	// addi r7,r11,19824
	ctx.r7.s64 = ctx.r11.s64 + 19824;
loc_82C3E8F0:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// addi r10,r30,-1
	ctx.r10.s64 = ctx.r30.s64 + -1;
	// blt cr6,0x82c3e904
	if (ctx.cr6.lt) goto loc_82C3E904;
	// li r10,12
	ctx.r10.s64 = 12;
loc_82C3E904:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C3E910:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82c3e938
	if (!ctx.cr6.eq) goto loc_82C3E938;
	// lwz r10,328(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r31,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r31.u32);
	// extsh r31,r10
	ctx.r31.s64 = ctx.r10.s16;
	// stw r27,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r27.u32);
	// stw r31,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r31.u32);
loc_82C3E938:
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// stw r8,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r8.u32);
	// sraw r10,r31,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r10.s64 = ctx.r31.s32 >> temp.u32;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// stw r10,316(r3)
	PPC_STORE_U32(ctx.r3.u32 + 316, ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,4,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// beq cr6,0x82c3e96c
	if (ctx.cr6.eq) goto loc_82C3E96C;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82C3E96C:
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
	// stw r29,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r29.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82c3e910
	if (ctx.cr6.gt) goto loc_82C3E910;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82c3e8f0
	if (ctx.cr6.lt) goto loc_82C3E8F0;
	// lwz r9,-112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -112);
loc_82C3E9A0:
	// lwz r11,-108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// ble cr6,0x82c3ea08
	if (!ctx.cr6.gt) goto loc_82C3EA08;
	// addi r11,r4,-3
	ctx.r11.s64 = ctx.r4.s64 + -3;
	// addi r8,r1,-112
	ctx.r8.s64 = ctx.r1.s64 + -112;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// subf r3,r6,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r6.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3E9DC:
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lwzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,-12
	ctx.r10.s64 = ctx.r10.s64 + -12;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// addi r10,r8,-12
	ctx.r10.s64 = ctx.r8.s64 + -12;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82c3e9dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3E9DC;
loc_82C3EA08:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82c3eacc
	if (!ctx.cr6.gt) goto loc_82C3EACC;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// divwu r9,r11,r9
	ctx.r9.u32 = ctx.r11.u32 / ctx.r9.u32;
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subf r7,r5,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// addi r9,r9,-3648
	ctx.r9.s64 = ctx.r9.s64 + -3648;
loc_82C3EA38:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r6,r9,96
	ctx.r6.s64 = ctx.r9.s64 + 96;
	// addi r5,r9,96
	ctx.r5.s64 = ctx.r9.s64 + 96;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r9,96
	ctx.r3.s64 = ctx.r9.s64 + 96;
	// addi r8,r9,96
	ctx.r8.s64 = ctx.r9.s64 + 96;
	// addi r31,r9,96
	ctx.r31.s64 = ctx.r9.s64 + 96;
	// addi r30,r9,96
	ctx.r30.s64 = ctx.r9.s64 + 96;
	// lfsx f0,r4,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r9,96
	ctx.r6.s64 = ctx.r9.s64 + 96;
	// stfs f0,-4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -4, temp.u32);
	// lwzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r4,r3
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r5,r8
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// lwz r4,20(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f10,r3,r31
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,12(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f9,r5,r30
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lwzu r8,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f8,r4,r6
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,20(r11)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82c3ea38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3EA38;
loc_82C3EACC:
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3EAD0"))) PPC_WEAK_FUNC(sub_82C3EAD0);
PPC_FUNC_IMPL(__imp__sub_82C3EAD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82C3EAD8;
	__savegprlr_14(ctx, base);
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r9,332(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 332);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// std r10,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.r10.u64);
	// lfd f0,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// frsp f9,f13
	ctx.f9.f64 = double(float(ctx.f13.f64));
	// li r16,1
	ctx.r16.s64 = 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c3eb20
	if (!ctx.cr6.eq) goto loc_82C3EB20;
	// stw r16,332(r3)
	PPC_STORE_U32(ctx.r3.u32 + 332, ctx.r16.u32);
	// stw r16,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r16.u32);
	// stw r16,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r16.u32);
	// stw r16,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r16.u32);
	// stw r16,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r16.u32);
loc_82C3EB20:
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r19,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r19.u32);
	// ble cr6,0x82c3f328
	if (!ctx.cr6.gt) goto loc_82C3F328;
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r18,-31954
	ctx.r18.s64 = -2094137344;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lfd f8,-4696(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r8.u32 + -4696);
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// lis r9,-31974
	ctx.r9.s64 = -2095448064;
	// lfd f7,11528(r6)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r6.u32 + 11528);
	// lis r8,-31974
	ctx.r8.s64 = -2095448064;
	// lfs f10,5184(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f10.f64 = double(temp.f32);
	// lis r31,-31974
	ctx.r31.s64 = -2095448064;
	// lwz r29,-3968(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3968);
	// lis r30,-31974
	ctx.r30.s64 = -2095448064;
	// addi r11,r11,18800
	ctx.r11.s64 = ctx.r11.s64 + 18800;
	// addi r17,r10,20448
	ctx.r17.s64 = ctx.r10.s64 + 20448;
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// addi r15,r9,13644
	ctx.r15.s64 = ctx.r9.s64 + 13644;
	// addi r14,r8,24688
	ctx.r14.s64 = ctx.r8.s64 + 24688;
	// addi r6,r31,24656
	ctx.r6.s64 = ctx.r31.s64 + 24656;
	// addi r5,r30,18764
	ctx.r5.s64 = ctx.r30.s64 + 18764;
loc_82C3EB84:
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r11,r19,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r9,r29,r19
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// lwzx r20,r11,r4
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lfsx f11,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f12,f11
	ctx.f12.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r20,7
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 7, ctx.xer);
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bge cr6,0x82c3ef28
	if (!ctx.cr6.lt) goto loc_82C3EF28;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// blt cr6,0x82c3ef28
	if (ctx.cr6.lt) goto loc_82C3EF28;
	// rlwinm r10,r20,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwzx r24,r10,r15
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r15.u32);
	// lwzx r22,r10,r14
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r14.u32);
	// slw r11,r16,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r16.u32 << (ctx.r24.u8 & 0x3F));
	// lwzx r28,r10,r5
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// lwzx r23,r10,r6
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82c3eec8
	if (!ctx.cr6.gt) goto loc_82C3EEC8;
loc_82C3EBDC:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82C3EBE0:
	// lwz r27,328(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,15
	ctx.r11.s64 = 15;
	// lwz r10,324(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// subfic r9,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r10.s64;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r31,-2(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + -2);
	// lhz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// slw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r9.u8 & 0x3F));
	// srw r10,r30,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r10.u8 & 0x3F));
	// or r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r30,r31,18,30,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0x2;
loc_82C3EC0C:
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lhzx r10,r30,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r8.u32);
	// addi r30,r9,-1
	ctx.r30.s64 = ctx.r9.s64 + -1;
	// srw r29,r31,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// stw r30,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r30.u32);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ecd8
	if (!ctx.cr6.eq) goto loc_82C3ECD8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r29,r9,31
	ctx.r29.u64 = ctx.r9.u32 & 0x1;
	// stw r30,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ecd8
	if (!ctx.cr6.eq) goto loc_82C3ECD8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// srw r9,r31,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r29,r9,31
	ctx.r29.u64 = ctx.r9.u32 & 0x1;
	// stw r30,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r30.u32);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ecd8
	if (!ctx.cr6.eq) goto loc_82C3ECD8;
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r30,-1
	ctx.r9.s64 = ctx.r30.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// srw r30,r31,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r11.u8 & 0x3F));
	// lhzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r8.u32);
	// clrlwi r30,r30,31
	ctx.r30.u64 = ctx.r30.u32 & 0x1;
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ecd8
	if (!ctx.cr6.eq) goto loc_82C3ECD8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// bge cr6,0x82c3ec0c
	if (!ctx.cr6.lt) goto loc_82C3EC0C;
loc_82C3ECD8:
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r11,r11,-15
	ctx.xer.ca = ctx.r11.u32 > 14;
	ctx.r11.s64 = ctx.r11.s64 + -15;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// bge 0x82c3ed08
	if (!ctx.cr0.lt) goto loc_82C3ED08;
	// lhz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// stw r30,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r30.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r31,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r31.u32);
loc_82C3ED08:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ed1c
	if (!ctx.cr6.eq) goto loc_82C3ED1C;
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82c3ebe0
	if (ctx.cr6.gt) goto loc_82C3EBE0;
loc_82C3ED1C:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c3ef1c
	if (ctx.cr6.lt) goto loc_82C3EF1C;
	// lwz r29,328(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r9,324(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mulli r10,r20,56
	ctx.r10.s64 = ctx.r20.s64 * 56;
	// lhz r8,-2(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + -2);
	// lhz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// subfic r30,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r30.s64 = 16 - ctx.r9.s64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// and r27,r11,r25
	ctx.r27.u64 = ctx.r11.u64 & ctx.r25.u64;
	// slw r8,r8,r30
	ctx.r8.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r30.u8 & 0x3F));
	// srw r9,r31,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// rlwinm r30,r27,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r17
	ctx.r10.u64 = ctx.r10.u64 + ctx.r17.u64;
	// or r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 | ctx.r9.u64;
	// clrlwi r27,r23,31
	ctx.r27.u64 = ctx.r23.u32 & 0x1;
	// li r9,15
	ctx.r9.s64 = 15;
	// rlwinm r8,r31,17,15,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 17) & 0x1FFFF;
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c3edc4
	if (ctx.cr6.eq) goto loc_82C3EDC4;
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3ed88
	if (!ctx.cr6.eq) goto loc_82C3ED88;
	// stfs f10,0(r26)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// b 0x82c3edac
	goto loc_82C3EDAC;
loc_82C3ED88:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c3ed9c
	if (!ctx.cr6.eq) goto loc_82C3ED9C;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82c3eda0
	goto loc_82C3EDA0;
loc_82C3ED9C:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82C3EDA0:
	// fmuls f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// li r9,14
	ctx.r9.s64 = 14;
loc_82C3EDAC:
	// srw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r24.u8 & 0x3F));
	// and r30,r11,r25
	ctx.r30.u64 = ctx.r11.u64 & ctx.r25.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lfsx f0,r30,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82C3EDC4:
	// rlwinm r30,r23,0,16,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0xFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82c3ee78
	if (!ctx.cr6.gt) goto loc_82C3EE78;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82C3EDE0:
	// fcmpu cr6,f0,f10
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3edf0
	if (!ctx.cr6.eq) goto loc_82C3EDF0;
	// fmr f13,f10
	ctx.f13.f64 = ctx.f10.f64;
	// b 0x82c3ee0c
	goto loc_82C3EE0C;
loc_82C3EDF0:
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c3ee04
	if (!ctx.cr6.eq) goto loc_82C3EE04;
	// fmuls f13,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82c3ee08
	goto loc_82C3EE08;
loc_82C3EE04:
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82C3EE08:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82C3EE0C:
	// srw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r24.u8 & 0x3F));
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & ctx.r25.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3ee2c
	if (!ctx.cr6.eq) goto loc_82C3EE2C;
	// fmr f0,f10
	ctx.f0.f64 = ctx.f10.f64;
	// b 0x82c3ee4c
	goto loc_82C3EE4C;
loc_82C3EE2C:
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c3ee44
	if (!ctx.cr6.eq) goto loc_82C3EE44;
	// fmuls f0,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// b 0x82c3ee48
	goto loc_82C3EE48;
loc_82C3EE44:
	// fmuls f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
loc_82C3EE48:
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_82C3EE4C:
	// srw r11,r11,r24
	ctx.r11.u64 = ctx.r24.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r24.u8 & 0x3F));
	// fmuls f13,f13,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// and r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 & ctx.r25.u64;
	// stfs f13,0(r26)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fmuls f6,f0,f9
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// stfsu f6,4(r26)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// rlwinm r30,r8,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// srw r8,r31,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r9.u8 & 0x3F));
	// lfsx f0,r30,r10
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// bdnz 0x82c3ede0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3EDE0;
loc_82C3EE78:
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// subfic r10,r9,15
	ctx.xer.ca = ctx.r9.u32 <= 15;
	ctx.r10.s64 = 15 - ctx.r9.s64;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// bge 0x82c3eea8
	if (!ctx.cr0.lt) goto loc_82C3EEA8;
	// lhz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r8,r29,2
	ctx.r8.s64 = ctx.r29.s64 + 2;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// stw r8,328(r3)
	PPC_STORE_U32(ctx.r3.u32 + 328, ctx.r8.u32);
	// stw r11,324(r3)
	PPC_STORE_U32(ctx.r3.u32 + 324, ctx.r11.u32);
	// stw r9,320(r3)
	PPC_STORE_U32(ctx.r3.u32 + 320, ctx.r9.u32);
loc_82C3EEA8:
	// lwz r11,312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r10.u32);
	// blt 0x82c3ef1c
	if (ctx.cr0.lt) goto loc_82C3EF1C;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82c3ebdc
	if (ctx.cr6.lt) goto loc_82C3EBDC;
	// lwz r29,-3968(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3968);
loc_82C3EEC8:
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c3ef28
	if (!ctx.cr6.eq) goto loc_82C3EF28;
loc_82C3EED4:
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// addi r11,r19,1
	ctx.r11.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c3ef0c
	if (!ctx.cr6.lt) goto loc_82C3EF0C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// beq 0x82c3ef0c
	if (ctx.cr0.eq) goto loc_82C3EF0C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C3EF00:
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c3ef00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3EF00;
	// lwz r29,-3968(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3968);
loc_82C3EF0C:
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82c3f20c
	goto loc_82C3F20C;
loc_82C3EF1C:
	// lwz r29,-3968(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3968);
	// stw r16,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r16.u32);
	// b 0x82c3eed4
	goto loc_82C3EED4;
loc_82C3EF28:
	// cmpwi cr6,r20,5
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 5, ctx.xer);
	// beq cr6,0x82c3ef38
	if (ctx.cr6.eq) goto loc_82C3EF38;
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 6, ctx.xer);
	// bne cr6,0x82c3f204
	if (!ctx.cr6.eq) goto loc_82C3F204;
loc_82C3EF38:
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r20,6
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 6, ctx.xer);
	// bne cr6,0x82c3eff4
	if (!ctx.cr6.eq) goto loc_82C3EFF4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82c3efe0
	if (!ctx.cr6.gt) goto loc_82C3EFE0;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C3EF6C:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c3ef84
	if (!ctx.cr6.eq) goto loc_82C3EF84;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C3EF84:
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// bne cr6,0x82c3efa0
	if (!ctx.cr6.eq) goto loc_82C3EFA0;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C3EFA0:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r9,r16
	ctx.r9.u64 = ctx.r16.u64;
	// bne cr6,0x82c3efbc
	if (!ctx.cr6.eq) goto loc_82C3EFBC;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82C3EFBC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bdnz 0x82c3ef6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3EF6C;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82c3efe0
	if (ctx.cr6.lt) goto loc_82C3EFE0;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82C3EFE0:
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
	// lfsx f0,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c3f0d4
	goto loc_82C3F0D4;
loc_82C3EFF4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// fmul f0,f11,f7
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64 * ctx.f7.f64;
	// ble cr6,0x82c3f0c8
	if (!ctx.cr6.gt) goto loc_82C3F0C8;
	// addi r9,r29,-1
	ctx.r9.s64 = ctx.r29.s64 + -1;
	// addi r8,r10,8
	ctx.r8.s64 = ctx.r10.s64 + 8;
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C3F018:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3f040
	if (ctx.cr6.eq) goto loc_82C3F040;
	// lfs f13,-8(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82c3f040
	if (!ctx.cr6.gt) goto loc_82C3F040;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82C3F040:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3f068
	if (ctx.cr6.eq) goto loc_82C3F068;
	// lfs f13,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82c3f068
	if (!ctx.cr6.gt) goto loc_82C3F068;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82C3F068:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3f090
	if (ctx.cr6.eq) goto loc_82C3F090;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82c3f090
	if (!ctx.cr6.gt) goto loc_82C3F090;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82C3F090:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3f0b4
	if (ctx.cr6.eq) goto loc_82C3F0B4;
	// lfs f13,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82c3f0b4
	if (!ctx.cr6.gt) goto loc_82C3F0B4;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
loc_82C3F0B4:
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// bdnz 0x82c3f018
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F018;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82c3f0c8
	if (ctx.cr6.lt) goto loc_82C3F0C8;
	// li r11,19
	ctx.r11.s64 = 19;
loc_82C3F0C8:
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
loc_82C3F0D4:
	// fmuls f13,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r11,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x82c3f0f8
	if (ctx.cr6.eq) goto loc_82C3F0F8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C3F0F8:
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r31,340(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r10,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r10.u32);
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r9.u32);
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// stw r31,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r31.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c3f12c
	if (ctx.cr6.eq) goto loc_82C3F12C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C3F12C:
	// lwz r29,336(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r31,344(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r30,340(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r29,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r29.u32);
	// stw r31,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// lwz r29,-3968(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3968);
	// mullw r11,r29,r19
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r19.s32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
loc_82C3F164:
	// lfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3f188
	if (!ctx.cr6.eq) goto loc_82C3F188;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f184
	if (!ctx.cr6.eq) goto loc_82C3F184;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F184:
	// stfs f0,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82C3F188:
	// lfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3f1ac
	if (!ctx.cr6.eq) goto loc_82C3F1AC;
	// clrlwi r11,r9,31
	ctx.r11.u64 = ctx.r9.u32 & 0x1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f1a8
	if (!ctx.cr6.eq) goto loc_82C3F1A8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F1A8:
	// stfs f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 4, temp.u32);
loc_82C3F1AC:
	// lfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3f1d0
	if (!ctx.cr6.eq) goto loc_82C3F1D0;
	// rlwinm r11,r8,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f1cc
	if (!ctx.cr6.eq) goto loc_82C3F1CC;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F1CC:
	// stfs f0,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 8, temp.u32);
loc_82C3F1D0:
	// lfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bne cr6,0x82c3f1f4
	if (!ctx.cr6.eq) goto loc_82C3F1F4;
	// rlwinm r11,r9,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f1f0
	if (!ctx.cr6.eq) goto loc_82C3F1F0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F1F0:
	// stfs f0,12(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 12, temp.u32);
loc_82C3F1F4:
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// bdnz 0x82c3f164
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F164;
loc_82C3F204:
	// cmpwi cr6,r20,7
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 7, ctx.xer);
	// bne cr6,0x82c3f304
	if (!ctx.cr6.eq) goto loc_82C3F304;
loc_82C3F20C:
	// fmul f0,f11,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f11.f64 * ctx.f8.f64;
	// lwz r10,336(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// beq cr6,0x82c3f234
	if (ctx.cr6.eq) goto loc_82C3F234;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82C3F234:
	// lwz r10,344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r9,336(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r31,340(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// stw r11,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r11.u32);
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stw r9,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r9.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r31,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r31.u32);
	// rlwinm r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3f26c
	if (ctx.cr6.eq) goto loc_82C3F26C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82C3F26C:
	// lwz r31,344(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r30,340(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// lwz r29,336(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// stw r10,336(r3)
	PPC_STORE_U32(ctx.r3.u32 + 336, ctx.r10.u32);
	// stw r31,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// stw r29,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r29.u32);
loc_82C3F294:
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// fmr f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c3f2a8
	if (!ctx.cr6.eq) goto loc_82C3F2A8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F2A8:
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c3f2c0
	if (!ctx.cr6.eq) goto loc_82C3F2C0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F2C0:
	// rlwinm r9,r8,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c3f2d8
	if (!ctx.cr6.eq) goto loc_82C3F2D8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F2D8:
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stfs f0,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82c3f2f0
	if (!ctx.cr6.eq) goto loc_82C3F2F0;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
loc_82C3F2F0:
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// stfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bdnz 0x82c3f294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F294;
	// lwz r29,-3968(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + -3968);
loc_82C3F304:
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpw cr6,r19,r11
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c3eb84
	if (ctx.cr6.lt) goto loc_82C3EB84;
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3f328
	if (ctx.cr6.eq) goto loc_82C3F328;
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
loc_82C3F328:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3F32C"))) PPC_WEAK_FUNC(sub_82C3F32C);
PPC_FUNC_IMPL(__imp__sub_82C3F32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3F330"))) PPC_WEAK_FUNC(sub_82C3F330);
PPC_FUNC_IMPL(__imp__sub_82C3F330) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82c3f560
	if (ctx.cr6.eq) {
		sub_82C3F560(ctx, base);
		return;
	}
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82c3f53c
	if (ctx.cr6.eq) {
		sub_82C3F53C(ctx, base);
		return;
	}
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82c3f350
	if (ctx.cr6.eq) goto loc_82C3F350;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82C3F350:
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bgt cr6,0x82c3f578
	if (ctx.cr6.gt) {
		// ERROR 82C3F578
		return;
	}
	// lis r12,-32241
	ctx.r12.s64 = -2112946176;
	// addi r12,r12,-4688
	ctx.r12.s64 = ctx.r12.s64 + -4688;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32060
	ctx.r12.s64 = -2101084160;
	// nop 
	// addi r12,r12,-3196
	ctx.r12.s64 = ctx.r12.s64 + -3196;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82C3F38C
		return;
	case 1:
		// ERROR: 0x82C3F3BC
		return;
	case 2:
		// ERROR: 0x82C3F3EC
		return;
	case 3:
		// ERROR: 0x82C3F414
		return;
	case 4:
		// ERROR: 0x82C3F444
		return;
	case 5:
		// ERROR: 0x82C3F474
		return;
	case 6:
		// ERROR: 0x82C3F588
		return;
	case 7:
		// ERROR: 0x82C3F4CC
		return;
	case 8:
		// ERROR: 0x82C3F4FC
		return;
	case 9:
		// ERROR: 0x82C3F52C
		return;
	case 10:
		// ERROR: 0x82C3F578
		return;
	case 11:
		// ERROR: 0x82C3F394
		return;
	case 12:
		// ERROR: 0x82C3F39C
		return;
	case 13:
		// ERROR: 0x82C3F3A4
		return;
	case 14:
		// ERROR: 0x82C3F3AC
		return;
	case 15:
		// ERROR: 0x82C3F3B4
		return;
	case 16:
		// ERROR: 0x82C3F3C4
		return;
	case 17:
		// ERROR: 0x82C3F3CC
		return;
	case 18:
		// ERROR: 0x82C3F3D4
		return;
	case 19:
		// ERROR: 0x82C3F3DC
		return;
	case 20:
		// ERROR: 0x82C3F3E4
		return;
	case 21:
		// ERROR: 0x82C3F3F4
		return;
	case 22:
		// ERROR: 0x82C3F3FC
		return;
	case 23:
		// ERROR: 0x82C3F404
		return;
	case 24:
		// ERROR: 0x82C3F590
		return;
	case 25:
		// ERROR: 0x82C3F40C
		return;
	case 26:
		// ERROR: 0x82C3F41C
		return;
	case 27:
		// ERROR: 0x82C3F424
		return;
	case 28:
		// ERROR: 0x82C3F42C
		return;
	case 29:
		// ERROR: 0x82C3F434
		return;
	case 30:
		// ERROR: 0x82C3F43C
		return;
	case 31:
		// ERROR: 0x82C3F44C
		return;
	case 32:
		// ERROR: 0x82C3F454
		return;
	case 33:
		// ERROR: 0x82C3F45C
		return;
	case 34:
		// ERROR: 0x82C3F464
		return;
	case 35:
		// ERROR: 0x82C3F46C
		return;
	case 36:
		// ERROR: 0x82C3F47C
		return;
	case 37:
		// ERROR: 0x82C3F484
		return;
	case 38:
		// ERROR: 0x82C3F48C
		return;
	case 39:
		// ERROR: 0x82C3F494
		return;
	case 40:
		// ERROR: 0x82C3F49C
		return;
	case 41:
		// ERROR: 0x82C3F4A4
		return;
	case 42:
		// ERROR: 0x82C3F4AC
		return;
	case 43:
		// ERROR: 0x82C3F4B4
		return;
	case 44:
		// ERROR: 0x82C3F4BC
		return;
	case 45:
		// ERROR: 0x82C3F4C4
		return;
	case 46:
		// ERROR: 0x82C3F4D4
		return;
	case 47:
		// ERROR: 0x82C3F4DC
		return;
	case 48:
		// ERROR: 0x82C3F4E4
		return;
	case 49:
		// ERROR: 0x82C3F4EC
		return;
	case 50:
		// ERROR: 0x82C3F4F4
		return;
	case 51:
		// ERROR: 0x82C3F504
		return;
	case 52:
		// ERROR: 0x82C3F50C
		return;
	case 53:
		// ERROR: 0x82C3F514
		return;
	case 54:
		// ERROR: 0x82C3F51C
		return;
	case 55:
		// ERROR: 0x82C3F524
		return;
	case 56:
		// ERROR: 0x82C3F534
		return;
	case 57:
		// ERROR: 0x82C3F580
		return;
	case 58:
		// ERROR: 0x82C3F384
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82C3F384"))) PPC_WEAK_FUNC(sub_82C3F384);
PPC_FUNC_IMPL(__imp__sub_82C3F384) {
	PPC_FUNC_PROLOGUE();
	// li r11,8800
	ctx.r11.s64 = 8800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F38C"))) PPC_WEAK_FUNC(sub_82C3F38C);
PPC_FUNC_IMPL(__imp__sub_82C3F38C) {
	PPC_FUNC_PROLOGUE();
	// li r11,9600
	ctx.r11.s64 = 9600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F394"))) PPC_WEAK_FUNC(sub_82C3F394);
PPC_FUNC_IMPL(__imp__sub_82C3F394) {
	PPC_FUNC_PROLOGUE();
	// li r11,10000
	ctx.r11.s64 = 10000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F39C"))) PPC_WEAK_FUNC(sub_82C3F39C);
PPC_FUNC_IMPL(__imp__sub_82C3F39C) {
	PPC_FUNC_PROLOGUE();
	// li r11,10400
	ctx.r11.s64 = 10400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3A4"))) PPC_WEAK_FUNC(sub_82C3F3A4);
PPC_FUNC_IMPL(__imp__sub_82C3F3A4) {
	PPC_FUNC_PROLOGUE();
	// li r11,10800
	ctx.r11.s64 = 10800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3AC"))) PPC_WEAK_FUNC(sub_82C3F3AC);
PPC_FUNC_IMPL(__imp__sub_82C3F3AC) {
	PPC_FUNC_PROLOGUE();
	// li r11,11200
	ctx.r11.s64 = 11200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3B4"))) PPC_WEAK_FUNC(sub_82C3F3B4);
PPC_FUNC_IMPL(__imp__sub_82C3F3B4) {
	PPC_FUNC_PROLOGUE();
	// li r11,11600
	ctx.r11.s64 = 11600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3BC"))) PPC_WEAK_FUNC(sub_82C3F3BC);
PPC_FUNC_IMPL(__imp__sub_82C3F3BC) {
	PPC_FUNC_PROLOGUE();
	// li r11,12000
	ctx.r11.s64 = 12000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3C4"))) PPC_WEAK_FUNC(sub_82C3F3C4);
PPC_FUNC_IMPL(__imp__sub_82C3F3C4) {
	PPC_FUNC_PROLOGUE();
	// li r11,12400
	ctx.r11.s64 = 12400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3CC"))) PPC_WEAK_FUNC(sub_82C3F3CC);
PPC_FUNC_IMPL(__imp__sub_82C3F3CC) {
	PPC_FUNC_PROLOGUE();
	// li r11,12800
	ctx.r11.s64 = 12800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3D4"))) PPC_WEAK_FUNC(sub_82C3F3D4);
PPC_FUNC_IMPL(__imp__sub_82C3F3D4) {
	PPC_FUNC_PROLOGUE();
	// li r11,13200
	ctx.r11.s64 = 13200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3DC"))) PPC_WEAK_FUNC(sub_82C3F3DC);
PPC_FUNC_IMPL(__imp__sub_82C3F3DC) {
	PPC_FUNC_PROLOGUE();
	// li r11,13600
	ctx.r11.s64 = 13600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3E4"))) PPC_WEAK_FUNC(sub_82C3F3E4);
PPC_FUNC_IMPL(__imp__sub_82C3F3E4) {
	PPC_FUNC_PROLOGUE();
	// li r11,14000
	ctx.r11.s64 = 14000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3EC"))) PPC_WEAK_FUNC(sub_82C3F3EC);
PPC_FUNC_IMPL(__imp__sub_82C3F3EC) {
	PPC_FUNC_PROLOGUE();
	// li r11,14400
	ctx.r11.s64 = 14400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3F4"))) PPC_WEAK_FUNC(sub_82C3F3F4);
PPC_FUNC_IMPL(__imp__sub_82C3F3F4) {
	PPC_FUNC_PROLOGUE();
	// li r11,14800
	ctx.r11.s64 = 14800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F3FC"))) PPC_WEAK_FUNC(sub_82C3F3FC);
PPC_FUNC_IMPL(__imp__sub_82C3F3FC) {
	PPC_FUNC_PROLOGUE();
	// li r11,15200
	ctx.r11.s64 = 15200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F404"))) PPC_WEAK_FUNC(sub_82C3F404);
PPC_FUNC_IMPL(__imp__sub_82C3F404) {
	PPC_FUNC_PROLOGUE();
	// li r11,15600
	ctx.r11.s64 = 15600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F40C"))) PPC_WEAK_FUNC(sub_82C3F40C);
PPC_FUNC_IMPL(__imp__sub_82C3F40C) {
	PPC_FUNC_PROLOGUE();
	// li r11,16400
	ctx.r11.s64 = 16400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F414"))) PPC_WEAK_FUNC(sub_82C3F414);
PPC_FUNC_IMPL(__imp__sub_82C3F414) {
	PPC_FUNC_PROLOGUE();
	// li r11,16800
	ctx.r11.s64 = 16800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F41C"))) PPC_WEAK_FUNC(sub_82C3F41C);
PPC_FUNC_IMPL(__imp__sub_82C3F41C) {
	PPC_FUNC_PROLOGUE();
	// li r11,17200
	ctx.r11.s64 = 17200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F424"))) PPC_WEAK_FUNC(sub_82C3F424);
PPC_FUNC_IMPL(__imp__sub_82C3F424) {
	PPC_FUNC_PROLOGUE();
	// li r11,17600
	ctx.r11.s64 = 17600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F42C"))) PPC_WEAK_FUNC(sub_82C3F42C);
PPC_FUNC_IMPL(__imp__sub_82C3F42C) {
	PPC_FUNC_PROLOGUE();
	// li r11,18000
	ctx.r11.s64 = 18000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F434"))) PPC_WEAK_FUNC(sub_82C3F434);
PPC_FUNC_IMPL(__imp__sub_82C3F434) {
	PPC_FUNC_PROLOGUE();
	// li r11,18400
	ctx.r11.s64 = 18400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F43C"))) PPC_WEAK_FUNC(sub_82C3F43C);
PPC_FUNC_IMPL(__imp__sub_82C3F43C) {
	PPC_FUNC_PROLOGUE();
	// li r11,18800
	ctx.r11.s64 = 18800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F444"))) PPC_WEAK_FUNC(sub_82C3F444);
PPC_FUNC_IMPL(__imp__sub_82C3F444) {
	PPC_FUNC_PROLOGUE();
	// li r11,19200
	ctx.r11.s64 = 19200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F44C"))) PPC_WEAK_FUNC(sub_82C3F44C);
PPC_FUNC_IMPL(__imp__sub_82C3F44C) {
	PPC_FUNC_PROLOGUE();
	// li r11,19600
	ctx.r11.s64 = 19600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F454"))) PPC_WEAK_FUNC(sub_82C3F454);
PPC_FUNC_IMPL(__imp__sub_82C3F454) {
	PPC_FUNC_PROLOGUE();
	// li r11,20000
	ctx.r11.s64 = 20000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F45C"))) PPC_WEAK_FUNC(sub_82C3F45C);
PPC_FUNC_IMPL(__imp__sub_82C3F45C) {
	PPC_FUNC_PROLOGUE();
	// li r11,20400
	ctx.r11.s64 = 20400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F464"))) PPC_WEAK_FUNC(sub_82C3F464);
PPC_FUNC_IMPL(__imp__sub_82C3F464) {
	PPC_FUNC_PROLOGUE();
	// li r11,20800
	ctx.r11.s64 = 20800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F46C"))) PPC_WEAK_FUNC(sub_82C3F46C);
PPC_FUNC_IMPL(__imp__sub_82C3F46C) {
	PPC_FUNC_PROLOGUE();
	// li r11,21200
	ctx.r11.s64 = 21200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F474"))) PPC_WEAK_FUNC(sub_82C3F474);
PPC_FUNC_IMPL(__imp__sub_82C3F474) {
	PPC_FUNC_PROLOGUE();
	// li r11,21600
	ctx.r11.s64 = 21600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F47C"))) PPC_WEAK_FUNC(sub_82C3F47C);
PPC_FUNC_IMPL(__imp__sub_82C3F47C) {
	PPC_FUNC_PROLOGUE();
	// li r11,22000
	ctx.r11.s64 = 22000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F484"))) PPC_WEAK_FUNC(sub_82C3F484);
PPC_FUNC_IMPL(__imp__sub_82C3F484) {
	PPC_FUNC_PROLOGUE();
	// li r11,22400
	ctx.r11.s64 = 22400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F48C"))) PPC_WEAK_FUNC(sub_82C3F48C);
PPC_FUNC_IMPL(__imp__sub_82C3F48C) {
	PPC_FUNC_PROLOGUE();
	// li r11,22800
	ctx.r11.s64 = 22800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F494"))) PPC_WEAK_FUNC(sub_82C3F494);
PPC_FUNC_IMPL(__imp__sub_82C3F494) {
	PPC_FUNC_PROLOGUE();
	// li r11,23200
	ctx.r11.s64 = 23200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F49C"))) PPC_WEAK_FUNC(sub_82C3F49C);
PPC_FUNC_IMPL(__imp__sub_82C3F49C) {
	PPC_FUNC_PROLOGUE();
	// li r11,23600
	ctx.r11.s64 = 23600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4A4"))) PPC_WEAK_FUNC(sub_82C3F4A4);
PPC_FUNC_IMPL(__imp__sub_82C3F4A4) {
	PPC_FUNC_PROLOGUE();
	// li r11,24400
	ctx.r11.s64 = 24400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4AC"))) PPC_WEAK_FUNC(sub_82C3F4AC);
PPC_FUNC_IMPL(__imp__sub_82C3F4AC) {
	PPC_FUNC_PROLOGUE();
	// li r11,24800
	ctx.r11.s64 = 24800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4B4"))) PPC_WEAK_FUNC(sub_82C3F4B4);
PPC_FUNC_IMPL(__imp__sub_82C3F4B4) {
	PPC_FUNC_PROLOGUE();
	// li r11,25200
	ctx.r11.s64 = 25200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4BC"))) PPC_WEAK_FUNC(sub_82C3F4BC);
PPC_FUNC_IMPL(__imp__sub_82C3F4BC) {
	PPC_FUNC_PROLOGUE();
	// li r11,25600
	ctx.r11.s64 = 25600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4C4"))) PPC_WEAK_FUNC(sub_82C3F4C4);
PPC_FUNC_IMPL(__imp__sub_82C3F4C4) {
	PPC_FUNC_PROLOGUE();
	// li r11,26000
	ctx.r11.s64 = 26000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4CC"))) PPC_WEAK_FUNC(sub_82C3F4CC);
PPC_FUNC_IMPL(__imp__sub_82C3F4CC) {
	PPC_FUNC_PROLOGUE();
	// li r11,26400
	ctx.r11.s64 = 26400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4D4"))) PPC_WEAK_FUNC(sub_82C3F4D4);
PPC_FUNC_IMPL(__imp__sub_82C3F4D4) {
	PPC_FUNC_PROLOGUE();
	// li r11,26800
	ctx.r11.s64 = 26800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4DC"))) PPC_WEAK_FUNC(sub_82C3F4DC);
PPC_FUNC_IMPL(__imp__sub_82C3F4DC) {
	PPC_FUNC_PROLOGUE();
	// li r11,27200
	ctx.r11.s64 = 27200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4E4"))) PPC_WEAK_FUNC(sub_82C3F4E4);
PPC_FUNC_IMPL(__imp__sub_82C3F4E4) {
	PPC_FUNC_PROLOGUE();
	// li r11,27600
	ctx.r11.s64 = 27600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4EC"))) PPC_WEAK_FUNC(sub_82C3F4EC);
PPC_FUNC_IMPL(__imp__sub_82C3F4EC) {
	PPC_FUNC_PROLOGUE();
	// li r11,28000
	ctx.r11.s64 = 28000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4F4"))) PPC_WEAK_FUNC(sub_82C3F4F4);
PPC_FUNC_IMPL(__imp__sub_82C3F4F4) {
	PPC_FUNC_PROLOGUE();
	// li r11,28400
	ctx.r11.s64 = 28400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F4FC"))) PPC_WEAK_FUNC(sub_82C3F4FC);
PPC_FUNC_IMPL(__imp__sub_82C3F4FC) {
	PPC_FUNC_PROLOGUE();
	// li r11,28800
	ctx.r11.s64 = 28800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F504"))) PPC_WEAK_FUNC(sub_82C3F504);
PPC_FUNC_IMPL(__imp__sub_82C3F504) {
	PPC_FUNC_PROLOGUE();
	// li r11,29200
	ctx.r11.s64 = 29200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F50C"))) PPC_WEAK_FUNC(sub_82C3F50C);
PPC_FUNC_IMPL(__imp__sub_82C3F50C) {
	PPC_FUNC_PROLOGUE();
	// li r11,29600
	ctx.r11.s64 = 29600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F514"))) PPC_WEAK_FUNC(sub_82C3F514);
PPC_FUNC_IMPL(__imp__sub_82C3F514) {
	PPC_FUNC_PROLOGUE();
	// li r11,30000
	ctx.r11.s64 = 30000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F51C"))) PPC_WEAK_FUNC(sub_82C3F51C);
PPC_FUNC_IMPL(__imp__sub_82C3F51C) {
	PPC_FUNC_PROLOGUE();
	// li r11,30400
	ctx.r11.s64 = 30400;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F524"))) PPC_WEAK_FUNC(sub_82C3F524);
PPC_FUNC_IMPL(__imp__sub_82C3F524) {
	PPC_FUNC_PROLOGUE();
	// li r11,30800
	ctx.r11.s64 = 30800;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F52C"))) PPC_WEAK_FUNC(sub_82C3F52C);
PPC_FUNC_IMPL(__imp__sub_82C3F52C) {
	PPC_FUNC_PROLOGUE();
	// li r11,31200
	ctx.r11.s64 = 31200;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F534"))) PPC_WEAK_FUNC(sub_82C3F534);
PPC_FUNC_IMPL(__imp__sub_82C3F534) {
	PPC_FUNC_PROLOGUE();
	// li r11,31600
	ctx.r11.s64 = 31600;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F53C"))) PPC_WEAK_FUNC(sub_82C3F53C);
PPC_FUNC_IMPL(__imp__sub_82C3F53C) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82c3f588
	if (ctx.cr6.eq) {
		// ERROR 82C3F588
		return;
	}
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82c3f580
	if (ctx.cr6.eq) {
		// ERROR 82C3F580
		return;
	}
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82c3f578
	if (!ctx.cr6.eq) {
		// ERROR 82C3F578
		return;
	}
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,48000
	ctx.r11.u64 = ctx.r11.u64 | 48000;
	// b 0x82c3f594
	// ERROR 82C3F594
	return;
}

__attribute__((alias("__imp__sub_82C3F560"))) PPC_WEAK_FUNC(sub_82C3F560);
PPC_FUNC_IMPL(__imp__sub_82C3F560) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82c3f590
	if (ctx.cr6.eq) goto loc_82C3F590;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// beq cr6,0x82c3f588
	if (ctx.cr6.eq) goto loc_82C3F588;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// beq cr6,0x82c3f580
	if (ctx.cr6.eq) goto loc_82C3F580;
	// li r3,5
	ctx.r3.s64 = 5;
	// blr 
	return;
loc_82C3F580:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x82c3f594
	goto loc_82C3F594;
loc_82C3F588:
	// li r11,24000
	ctx.r11.s64 = 24000;
	// b 0x82c3f594
	goto loc_82C3F594;
loc_82C3F590:
	// li r11,16000
	ctx.r11.s64 = 16000;
loc_82C3F594:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3F5A0"))) PPC_WEAK_FUNC(sub_82C3F5A0);
PPC_FUNC_IMPL(__imp__sub_82C3F5A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C3F5A8;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82c3f5cc
	if (!ctx.cr6.eq) goto loc_82C3F5CC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82C3F5CC:
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fcc0
	ctx.lr = 0x82C3F5F0;
	sub_82C3FCC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3fcb4
	if (!ctx.cr6.eq) goto loc_82C3FCB4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,16
	ctx.r24.s64 = 16;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r10.u32);
	// ble cr6,0x82c3f6a8
	if (!ctx.cr6.gt) goto loc_82C3F6A8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C3F61C:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f644
	if (!ctx.cr6.eq) goto loc_82C3F644;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
loc_82C3F644:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// or r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 | ctx.r7.u64;
	// bdnz 0x82c3f61c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F61C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3f330
	ctx.lr = 0x82C3F678;
	sub_82C3F330(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3fcb4
	if (!ctx.cr6.eq) goto loc_82C3FCB4;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82c3f690
	if (ctx.cr6.eq) goto loc_82C3F690;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bne cr6,0x82c3f6b0
	if (!ctx.cr6.eq) goto loc_82C3F6B0;
loc_82C3F690:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82c3f6b4
	if (ctx.cr6.eq) goto loc_82C3F6B4;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C3F6A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// b 0x82c3f6b4
	goto loc_82C3F6B4;
loc_82C3F6B0:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C3F6B4:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3fd70
	ctx.lr = 0x82C3F6C8;
	sub_82C3FD70(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3fcb4
	if (!ctx.cr6.eq) goto loc_82C3FCB4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r25,r31,256
	ctx.r25.s64 = ctx.r31.s64 + 256;
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// subf r4,r11,r9
	ctx.r4.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// subf r9,r8,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r8.s64;
	// lwz r11,-3968(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -3968);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r9.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mullw r23,r11,r26
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// bl 0x82c3e758
	ctx.lr = 0x82C3F714;
	sub_82C3E758(ctx, base);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82c3f778
	if (!ctx.cr6.gt) goto loc_82C3F778;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C3F728:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f750
	if (!ctx.cr6.eq) goto loc_82C3F750;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_82C3F750:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,320(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r7,r8,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r7.s64 = ctx.r8.s32 >> temp.u32;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi r11,r7,31
	ctx.r11.u64 = ctx.r7.u32 & 0x1;
	// stw r11,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r11.u32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bdnz 0x82c3f728
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F728;
loc_82C3F778:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r27,r31,128
	ctx.r27.s64 = ctx.r31.s64 + 128;
	// addi r29,r31,64
	ctx.r29.s64 = ctx.r31.s64 + 64;
	// subf r4,r9,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// stw r4,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r4.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c40458
	ctx.lr = 0x82C3F7A0;
	sub_82C40458(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82c3f7c8
	if (!ctx.cr6.gt) goto loc_82C3F7C8;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_82C3F7B0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwx r9,r11,r29
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, ctx.r9.u32);
	// bdnz 0x82c3f7b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F7B0;
loc_82C3F7C8:
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3ead0
	ctx.lr = 0x82C3F7E4;
	sub_82C3EAD0(ctx, base);
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3f85c
	if (!ctx.cr6.gt) goto loc_82C3F85C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82C3F7F8:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3f820
	if (!ctx.cr6.eq) goto loc_82C3F820;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r9,r11,2
	ctx.r9.s64 = ctx.r11.s64 + 2;
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// stw r24,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r24.u32);
	// stw r7,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r7.u32);
loc_82C3F820:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r9,320(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// stw r7,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r7.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82c3f848
	if (!ctx.cr6.eq) goto loc_82C3F848;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82C3F848:
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c3f7f8
	if (ctx.cr6.lt) goto loc_82C3F7F8;
	// b 0x82c3f878
	goto loc_82C3F878;
loc_82C3F85C:
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r28,r9
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c3f878
	if (!ctx.cr6.lt) goto loc_82C3F878;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3f878
	if (!ctx.cr6.lt) goto loc_82C3F878;
	// li r6,2
	ctx.r6.s64 = 2;
loc_82C3F878:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3f94c
	if (!ctx.cr6.gt) goto loc_82C3F94C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C3F89C:
	// lwz r11,-8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f8b0
	if (ctx.cr6.gt) goto loc_82C3F8B0;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f8b4
	if (!ctx.cr6.lt) goto loc_82C3F8B4;
loc_82C3F8B0:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F8B4:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f8c8
	if (ctx.cr6.gt) goto loc_82C3F8C8;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f8cc
	if (!ctx.cr6.lt) goto loc_82C3F8CC;
loc_82C3F8C8:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F8CC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f8e0
	if (ctx.cr6.gt) goto loc_82C3F8E0;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f8e4
	if (!ctx.cr6.lt) goto loc_82C3F8E4;
loc_82C3F8E0:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F8E4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f8f8
	if (ctx.cr6.gt) goto loc_82C3F8F8;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f8fc
	if (!ctx.cr6.lt) goto loc_82C3F8FC;
loc_82C3F8F8:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F8FC:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f910
	if (ctx.cr6.gt) goto loc_82C3F910;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f914
	if (!ctx.cr6.lt) goto loc_82C3F914;
loc_82C3F910:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F914:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f928
	if (ctx.cr6.gt) goto loc_82C3F928;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f92c
	if (!ctx.cr6.lt) goto loc_82C3F92C;
loc_82C3F928:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F92C:
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r11,33
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 33, ctx.xer);
	// bgt cr6,0x82c3f940
	if (ctx.cr6.gt) goto loc_82C3F940;
	// cmpwi cr6,r11,-31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -31, ctx.xer);
	// bge cr6,0x82c3f944
	if (!ctx.cr6.lt) goto loc_82C3F944;
loc_82C3F940:
	// ori r6,r6,4
	ctx.r6.u64 = ctx.r6.u64 | 4;
loc_82C3F944:
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// bdnz 0x82c3f89c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3F89C;
loc_82C3F94C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3fc68
	if (!ctx.cr6.gt) goto loc_82C3FC68;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// srawi r11,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 4;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmpwi cr6,r11,20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 20, ctx.xer);
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// lhz r4,-2(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -2);
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// stw r30,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r30.u32);
	// and r7,r3,r8
	ctx.r7.u64 = ctx.r3.u64 & ctx.r8.u64;
	// bne cr6,0x82c3fb24
	if (!ctx.cr6.eq) goto loc_82C3FB24;
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r5,2(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// rotlwi r4,r5,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// xor r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// lhz r5,6(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// rotlwi r4,r3,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// xor r4,r4,r9
	ctx.r4.u64 = ctx.r4.u64 ^ ctx.r9.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r29,10(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 10);
	// rotlwi r5,r5,3
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 12);
	// xor r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r28,14(r30)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r30.u32 + 14);
	// rotlwi r3,r3,4
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// xor r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r27,18(r30)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// rotlwi r29,r29,5
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 5);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 20);
	// xor r3,r29,r3
	ctx.r3.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r26,22(r30)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r30.u32 + 22);
	// rotlwi r9,r9,6
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 6);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r29,24(r30)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// xor r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// lhz r25,26(r30)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// rotlwi r28,r28,7
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 7);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lhz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 28);
	// xor r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 ^ ctx.r9.u64;
	// rotlwi r11,r4,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// lhz r4,30(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 30);
	// rotlwi r28,r27,9
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r27.u32, 9);
	// rotlwi r9,r5,10
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 10);
	// xor r5,r28,r11
	ctx.r5.u64 = ctx.r28.u64 ^ ctx.r11.u64;
	// xor r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// rotlwi r11,r26,11
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 11);
	// rotlwi r5,r29,12
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 12);
	// xor r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// xor r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// rotlwi r10,r25,13
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r25.u32, 13);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// rotlwi r5,r3,14
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 14);
	// lhz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// xor r9,r5,r4
	ctx.r9.u64 = ctx.r5.u64 ^ ctx.r4.u64;
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// xor r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lhz r4,34(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// rotlwi r3,r3,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// lhz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// rotlwi r9,r4,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// xor r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// lhz r3,38(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 38);
	// rotlwi r4,r11,3
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// xor r11,r9,r5
	ctx.r11.u64 = ctx.r9.u64 ^ ctx.r5.u64;
	// andc r9,r3,r8
	ctx.r9.u64 = ctx.r3.u64 & ~ctx.r8.u64;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// xor r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r11.u64;
	// rlwinm r5,r9,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r10,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r10.u32);
	// xor r11,r5,r8
	ctx.r11.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// b 0x82c3fb84
	goto loc_82C3FB84;
loc_82C3FB24:
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ble 0x82c3fb68
	if (!ctx.cr0.gt) goto loc_82C3FB68;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C3FB38:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r5,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r5.u32);
	// slw r3,r4,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// xor r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 ^ ctx.r9.u64;
	// addi r10,r11,-15
	ctx.r10.s64 = ctx.r11.s64 + -15;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// bdnz 0x82c3fb38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3FB38;
loc_82C3FB68:
	// lwz r10,328(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// lhz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r5,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r5.u32);
	// andc r3,r4,r8
	ctx.r3.u64 = ctx.r4.u64 & ~ctx.r8.u64;
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// xor r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r9.u64;
loc_82C3FB84:
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// clrlwi r8,r11,17
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFF;
	// addi r5,r10,18960
	ctx.r5.s64 = ctx.r10.s64 + 18960;
	// xor r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// lwz r11,18960(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 18960);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// and r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// xor r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// and r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 & ctx.r4.u64;
	// srawi r10,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 4;
	// and r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 & ctx.r4.u64;
	// xor r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// xor r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 ^ ctx.r5.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// xor r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r11,r4,1,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// srawi r5,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 4;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// srawi r10,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 2;
	// xor r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r4.u64;
	// srawi r5,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 1;
	// srawi r4,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 8;
	// xor r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// xor r8,r4,r3
	ctx.r8.u64 = ctx.r4.u64 ^ ctx.r3.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// srawi r5,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// srawi r5,r9,8
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 8;
	// xor r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r10.u64;
	// xor r3,r5,r9
	ctx.r3.u64 = ctx.r5.u64 ^ ctx.r9.u64;
	// clrlwi r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	// srawi r9,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 4;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 ^ ctx.r3.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r5,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 2;
	// xor r4,r5,r8
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// srawi r3,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 1;
	// xor r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r4.u64;
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf. r9,r7,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82c3fc68
	if (ctx.cr0.eq) goto loc_82C3FC68;
	// ori r6,r6,8
	ctx.r6.u64 = ctx.r6.u64 | 8;
loc_82C3FC68:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82c3fc94
	if (ctx.cr6.eq) goto loc_82C3FC94;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82c3fc94
	if (!ctx.cr6.gt) goto loc_82C3FC94;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c3fc94
	if (ctx.cr6.eq) goto loc_82C3FC94;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_82C3FC8C:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3fc8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3FC8C;
loc_82C3FC94:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r23,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r23.s64;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa7cf0
	ctx.lr = 0x82C3FCB0;
	sub_82FA7CF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3FCB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3FCBC"))) PPC_WEAK_FUNC(sub_82C3FCBC);
PPC_FUNC_IMPL(__imp__sub_82C3FCBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FCC0"))) PPC_WEAK_FUNC(sub_82C3FCC0);
PPC_FUNC_IMPL(__imp__sub_82C3FCC0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C3FCC8;
	__savegprlr_26(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c3fd2c
	if (ctx.cr6.lt) goto loc_82C3FD2C;
	// beq cr6,0x82c3fd0c
	if (ctx.cr6.eq) goto loc_82C3FD0C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82c3fd04
	if (ctx.cr6.lt) goto loc_82C3FD04;
	// beq cr6,0x82c3fce8
	if (ctx.cr6.eq) goto loc_82C3FCE8;
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82c3fd68
	goto loc_82C3FD68;
loc_82C3FCE8:
	// li r31,6
	ctx.r31.s64 = 6;
loc_82C3FCEC:
	// li r11,640
	ctx.r11.s64 = 640;
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r26,33
	ctx.r26.s64 = 33;
	// b 0x82c3fd44
	goto loc_82C3FD44;
loc_82C3FD04:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82c3fcec
	goto loc_82C3FCEC;
loc_82C3FD0C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,2
	ctx.r31.s64 = 2;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,4
	ctx.r28.s64 = 4;
	// li r27,-2
	ctx.r27.s64 = -2;
	// li r26,1
	ctx.r26.s64 = 1;
	// b 0x82c3fd48
	goto loc_82C3FD48;
loc_82C3FD2C:
	// li r11,320
	ctx.r11.s64 = 320;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,22
	ctx.r26.s64 = 22;
loc_82C3FD44:
	// li r27,7
	ctx.r27.s64 = 7;
loc_82C3FD48:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// stw r28,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r28.u32);
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
loc_82C3FD68:
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3FD6C"))) PPC_WEAK_FUNC(sub_82C3FD6C);
PPC_FUNC_IMPL(__imp__sub_82C3FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3FD70"))) PPC_WEAK_FUNC(sub_82C3FD70);
PPC_FUNC_IMPL(__imp__sub_82C3FD70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82c40288
	if (ctx.cr6.lt) goto loc_82C40288;
	// beq cr6,0x82c4025c
	if (ctx.cr6.eq) goto loc_82C4025C;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82c40238
	if (ctx.cr6.lt) goto loc_82C40238;
	// beq cr6,0x82c3fd90
	if (ctx.cr6.eq) goto loc_82C3FD90;
	// li r3,6
	ctx.r3.s64 = 6;
	// blr 
	return;
loc_82C3FD90:
	// li r11,50
	ctx.r11.s64 = 50;
	// cmplwi cr6,r4,20800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20800, ctx.xer);
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// bgt cr6,0x82c40000
	if (ctx.cr6.gt) goto loc_82C40000;
	// beq cr6,0x82c3fff4
	if (ctx.cr6.eq) goto loc_82C3FFF4;
	// cmplwi cr6,r4,14800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14800, ctx.xer);
	// bgt cr6,0x82c3fed8
	if (ctx.cr6.gt) goto loc_82C3FED8;
	// beq cr6,0x82c3fecc
	if (ctx.cr6.eq) goto loc_82C3FECC;
	// cmplwi cr6,r4,12000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12000, ctx.xer);
	// bgt cr6,0x82c3fe54
	if (ctx.cr6.gt) goto loc_82C3FE54;
	// beq cr6,0x82c3fe48
	if (ctx.cr6.eq) goto loc_82C3FE48;
	// cmplwi cr6,r4,8800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 8800, ctx.xer);
	// beq cr6,0x82c3fe3c
	if (ctx.cr6.eq) goto loc_82C3FE3C;
	// cmplwi cr6,r4,9600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9600, ctx.xer);
	// beq cr6,0x82c3fe30
	if (ctx.cr6.eq) goto loc_82C3FE30;
	// cmplwi cr6,r4,10000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10000, ctx.xer);
	// beq cr6,0x82c3fe24
	if (ctx.cr6.eq) goto loc_82C3FE24;
	// cmplwi cr6,r4,10400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10400, ctx.xer);
	// beq cr6,0x82c3fe18
	if (ctx.cr6.eq) goto loc_82C3FE18;
	// cmplwi cr6,r4,10800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 10800, ctx.xer);
	// beq cr6,0x82c3fe0c
	if (ctx.cr6.eq) goto loc_82C3FE0C;
	// cmplwi cr6,r4,11200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11200, ctx.xer);
	// beq cr6,0x82c3fe00
	if (ctx.cr6.eq) goto loc_82C3FE00;
	// cmplwi cr6,r4,11600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11600, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE00:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE0C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE18:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE24:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE30:
	// li r10,12
	ctx.r10.s64 = 12;
loc_82C3FE34:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE3C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,59
	ctx.r11.s64 = 59;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE48:
	// li r10,12
	ctx.r10.s64 = 12;
loc_82C3FE4C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE54:
	// cmplwi cr6,r4,12400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12400, ctx.xer);
	// beq cr6,0x82c3fec0
	if (ctx.cr6.eq) goto loc_82C3FEC0;
	// cmplwi cr6,r4,12800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 12800, ctx.xer);
	// beq cr6,0x82c3feb4
	if (ctx.cr6.eq) goto loc_82C3FEB4;
	// cmplwi cr6,r4,13200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13200, ctx.xer);
	// beq cr6,0x82c3fea8
	if (ctx.cr6.eq) goto loc_82C3FEA8;
	// cmplwi cr6,r4,13600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13600, ctx.xer);
	// beq cr6,0x82c3fe9c
	if (ctx.cr6.eq) goto loc_82C3FE9C;
	// cmplwi cr6,r4,14000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14000, ctx.xer);
	// beq cr6,0x82c3fe90
	if (ctx.cr6.eq) goto loc_82C3FE90;
	// cmplwi cr6,r4,14400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 14400, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,16
	ctx.r10.s64 = 16;
loc_82C3FE88:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE90:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FE9C:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,20
	ctx.r11.s64 = 20;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FEA8:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,19
	ctx.r11.s64 = 19;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FEB4:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,18
	ctx.r11.s64 = 18;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FEC0:
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FECC:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,22
	ctx.r11.s64 = 22;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FED8:
	// cmplwi cr6,r4,18000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18000, ctx.xer);
	// bgt cr6,0x82c3ff7c
	if (ctx.cr6.gt) goto loc_82C3FF7C;
	// beq cr6,0x82c3ff70
	if (ctx.cr6.eq) goto loc_82C3FF70;
	// cmplwi cr6,r4,15200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15200, ctx.xer);
	// beq cr6,0x82c3ff64
	if (ctx.cr6.eq) goto loc_82C3FF64;
	// cmplwi cr6,r4,15600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15600, ctx.xer);
	// beq cr6,0x82c3ff58
	if (ctx.cr6.eq) goto loc_82C3FF58;
	// cmplwi cr6,r4,16000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16000, ctx.xer);
	// beq cr6,0x82c3ff4c
	if (ctx.cr6.eq) goto loc_82C3FF4C;
	// cmplwi cr6,r4,16400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16400, ctx.xer);
	// beq cr6,0x82c3ff40
	if (ctx.cr6.eq) goto loc_82C3FF40;
	// cmplwi cr6,r4,16800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16800, ctx.xer);
	// beq cr6,0x82c3ff34
	if (ctx.cr6.eq) goto loc_82C3FF34;
	// cmplwi cr6,r4,17200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17200, ctx.xer);
	// beq cr6,0x82c3ff28
	if (ctx.cr6.eq) goto loc_82C3FF28;
	// cmplwi cr6,r4,17600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17600, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,28
	ctx.r11.s64 = 28;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF28:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF34:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF40:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,26
	ctx.r11.s64 = 26;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF4C:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,25
	ctx.r11.s64 = 25;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF58:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,24
	ctx.r11.s64 = 24;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF64:
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF70:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,29
	ctx.r11.s64 = 29;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FF7C:
	// cmplwi cr6,r4,18400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18400, ctx.xer);
	// beq cr6,0x82c3ffe8
	if (ctx.cr6.eq) goto loc_82C3FFE8;
	// cmplwi cr6,r4,18800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 18800, ctx.xer);
	// beq cr6,0x82c3ffdc
	if (ctx.cr6.eq) goto loc_82C3FFDC;
	// cmplwi cr6,r4,19200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19200, ctx.xer);
	// beq cr6,0x82c3ffd0
	if (ctx.cr6.eq) goto loc_82C3FFD0;
	// cmplwi cr6,r4,19600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 19600, ctx.xer);
	// beq cr6,0x82c3ffc4
	if (ctx.cr6.eq) goto loc_82C3FFC4;
	// cmplwi cr6,r4,20000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20000, ctx.xer);
	// beq cr6,0x82c3ffb8
	if (ctx.cr6.eq) goto loc_82C3FFB8;
	// cmplwi cr6,r4,20400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 20400, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,34
	ctx.r11.s64 = 34;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FFB8:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,33
	ctx.r11.s64 = 33;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FFC4:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FFD0:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FFDC:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,31
	ctx.r11.s64 = 31;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FFE8:
	// li r10,18
	ctx.r10.s64 = 18;
	// li r11,30
	ctx.r11.s64 = 30;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C3FFF4:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,35
	ctx.r11.s64 = 35;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40000:
	// cmplwi cr6,r4,26800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 26800, ctx.xer);
	// bgt cr6,0x82c40134
	if (ctx.cr6.gt) goto loc_82C40134;
	// beq cr6,0x82c40128
	if (ctx.cr6.eq) goto loc_82C40128;
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// bgt cr6,0x82c400b0
	if (ctx.cr6.gt) goto loc_82C400B0;
	// beq cr6,0x82c400a4
	if (ctx.cr6.eq) goto loc_82C400A4;
	// cmplwi cr6,r4,21200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21200, ctx.xer);
	// beq cr6,0x82c40098
	if (ctx.cr6.eq) goto loc_82C40098;
	// cmplwi cr6,r4,21600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 21600, ctx.xer);
	// beq cr6,0x82c4008c
	if (ctx.cr6.eq) goto loc_82C4008C;
	// cmplwi cr6,r4,22000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22000, ctx.xer);
	// beq cr6,0x82c40080
	if (ctx.cr6.eq) goto loc_82C40080;
	// cmplwi cr6,r4,22400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22400, ctx.xer);
	// beq cr6,0x82c40074
	if (ctx.cr6.eq) goto loc_82C40074;
	// cmplwi cr6,r4,22800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 22800, ctx.xer);
	// beq cr6,0x82c40068
	if (ctx.cr6.eq) goto loc_82C40068;
	// cmplwi cr6,r4,23200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23200, ctx.xer);
	// beq cr6,0x82c4005c
	if (ctx.cr6.eq) goto loc_82C4005C;
	// cmplwi cr6,r4,23600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 23600, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,41
	ctx.r11.s64 = 41;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C4005C:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,40
	ctx.r11.s64 = 40;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40068:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,39
	ctx.r11.s64 = 39;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40074:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,38
	ctx.r11.s64 = 38;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40080:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,37
	ctx.r11.s64 = 37;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C4008C:
	// li r10,22
	ctx.r10.s64 = 22;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40098:
	// li r10,20
	ctx.r10.s64 = 20;
	// li r11,36
	ctx.r11.s64 = 36;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C400A4:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C400B0:
	// cmplwi cr6,r4,24400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24400, ctx.xer);
	// beq cr6,0x82c4011c
	if (ctx.cr6.eq) goto loc_82C4011C;
	// cmplwi cr6,r4,24800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24800, ctx.xer);
	// beq cr6,0x82c40110
	if (ctx.cr6.eq) goto loc_82C40110;
	// cmplwi cr6,r4,25200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 25200, ctx.xer);
	// beq cr6,0x82c40104
	if (ctx.cr6.eq) goto loc_82C40104;
	// cmplwi cr6,r4,25600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 25600, ctx.xer);
	// beq cr6,0x82c400f8
	if (ctx.cr6.eq) goto loc_82C400F8;
	// cmplwi cr6,r4,26000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 26000, ctx.xer);
	// beq cr6,0x82c400ec
	if (ctx.cr6.eq) goto loc_82C400EC;
	// cmplwi cr6,r4,26400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 26400, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C400EC:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,46
	ctx.r11.s64 = 46;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C400F8:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40104:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,44
	ctx.r11.s64 = 44;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40110:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,43
	ctx.r11.s64 = 43;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C4011C:
	// li r10,24
	ctx.r10.s64 = 24;
	// li r11,42
	ctx.r11.s64 = 42;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40128:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,47
	ctx.r11.s64 = 47;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40134:
	// cmplwi cr6,r4,29600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 29600, ctx.xer);
	// bgt cr6,0x82c401c0
	if (ctx.cr6.gt) goto loc_82C401C0;
	// beq cr6,0x82c401b4
	if (ctx.cr6.eq) goto loc_82C401B4;
	// cmplwi cr6,r4,27200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 27200, ctx.xer);
	// beq cr6,0x82c401a8
	if (ctx.cr6.eq) goto loc_82C401A8;
	// cmplwi cr6,r4,27600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 27600, ctx.xer);
	// beq cr6,0x82c4019c
	if (ctx.cr6.eq) goto loc_82C4019C;
	// cmplwi cr6,r4,28000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28000, ctx.xer);
	// beq cr6,0x82c40194
	if (ctx.cr6.eq) goto loc_82C40194;
	// cmplwi cr6,r4,28400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28400, ctx.xer);
	// beq cr6,0x82c40188
	if (ctx.cr6.eq) goto loc_82C40188;
	// cmplwi cr6,r4,28800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 28800, ctx.xer);
	// beq cr6,0x82c4017c
	if (ctx.cr6.eq) goto loc_82C4017C;
	// cmplwi cr6,r4,29200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 29200, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,52
	ctx.r11.s64 = 52;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C4017C:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40188:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,51
	ctx.r11.s64 = 51;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40194:
	// li r10,26
	ctx.r10.s64 = 26;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C4019C:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,49
	ctx.r11.s64 = 49;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C401A8:
	// li r10,26
	ctx.r10.s64 = 26;
	// li r11,48
	ctx.r11.s64 = 48;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C401B4:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,53
	ctx.r11.s64 = 53;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C401C0:
	// cmplwi cr6,r4,30000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30000, ctx.xer);
	// beq cr6,0x82c4022c
	if (ctx.cr6.eq) goto loc_82C4022C;
	// cmplwi cr6,r4,30400
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30400, ctx.xer);
	// beq cr6,0x82c40220
	if (ctx.cr6.eq) goto loc_82C40220;
	// cmplwi cr6,r4,30800
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 30800, ctx.xer);
	// beq cr6,0x82c40214
	if (ctx.cr6.eq) goto loc_82C40214;
	// cmplwi cr6,r4,31200
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31200, ctx.xer);
	// beq cr6,0x82c40208
	if (ctx.cr6.eq) goto loc_82C40208;
	// cmplwi cr6,r4,31600
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 31600, ctx.xer);
	// beq cr6,0x82c401fc
	if (ctx.cr6.eq) goto loc_82C401FC;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
	// bne cr6,0x82c40280
	if (!ctx.cr6.eq) goto loc_82C40280;
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,58
	ctx.r11.s64 = 58;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C401FC:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,57
	ctx.r11.s64 = 57;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40208:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40214:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,56
	ctx.r11.s64 = 56;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40220:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,55
	ctx.r11.s64 = 55;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C4022C:
	// li r10,28
	ctx.r10.s64 = 28;
	// li r11,54
	ctx.r11.s64 = 54;
	// b 0x82c40298
	goto loc_82C40298;
loc_82C40238:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,28
	ctx.r10.s64 = 28;
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// beq cr6,0x82c3fe34
	if (ctx.cr6.eq) goto loc_82C3FE34;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
	// beq cr6,0x82c3fe4c
	if (ctx.cr6.eq) goto loc_82C3FE4C;
	// cmplwi cr6,r4,48000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 48000, ctx.xer);
	// b 0x82c4027c
	goto loc_82C4027C;
loc_82C4025C:
	// li r11,50
	ctx.r11.s64 = 50;
	// li r10,14
	ctx.r10.s64 = 14;
	// divwu r9,r4,r11
	ctx.r9.u32 = ctx.r4.u32 / ctx.r11.u32;
	// cmplwi cr6,r4,16000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 16000, ctx.xer);
	// beq cr6,0x82c3fe34
	if (ctx.cr6.eq) goto loc_82C3FE34;
	// cmplwi cr6,r4,24000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24000, ctx.xer);
	// beq cr6,0x82c3fe4c
	if (ctx.cr6.eq) goto loc_82C3FE4C;
	// cmplwi cr6,r4,32000
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32000, ctx.xer);
loc_82C4027C:
	// beq cr6,0x82c3fe88
	if (ctx.cr6.eq) goto loc_82C3FE88;
loc_82C40280:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82C40288:
	// li r9,50
	ctx.r9.s64 = 50;
	// li r10,14
	ctx.r10.s64 = 14;
	// li r11,0
	ctx.r11.s64 = 0;
	// divwu r9,r4,r9
	ctx.r9.u32 = ctx.r4.u32 / ctx.r9.u32;
loc_82C40298:
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C402AC"))) PPC_WEAK_FUNC(sub_82C402AC);
PPC_FUNC_IMPL(__imp__sub_82C402AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C402B0"))) PPC_WEAK_FUNC(sub_82C402B0);
PPC_FUNC_IMPL(__imp__sub_82C402B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C402B8;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d28
	ctx.lr = 0x82C402C0;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfs f0,-27108(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32241
	ctx.r6.s64 = -2112946176;
	// stfs f0,-3392(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -3392, temp.u32);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// stw r11,-3968(r9)
	PPC_STORE_U32(ctx.r9.u32 + -3968, ctx.r11.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// lfd f30,22080(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22080);
	// lfd f31,-4624(r6)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r6.u32 + -4624);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f29,22528(r8)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22528);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-4224
	ctx.r29.s64 = ctx.r11.s64 + -4224;
	// addi r28,r10,-3648
	ctx.r28.s64 = ctx.r10.s64 + -3648;
	// addi r27,r9,-3360
	ctx.r27.s64 = ctx.r9.s64 + -3360;
loc_82C40318:
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82C4033C;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfsx f0,r31,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, temp.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// stfsx f0,r31,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r28.u32, temp.u32);
	// fdiv f0,f29,f0
	ctx.f0.f64 = ctx.f29.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r31,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r31,256
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 256, ctx.xer);
	// blt cr6,0x82c40318
	if (ctx.cr6.lt) goto loc_82C40318;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-3904
	ctx.r29.s64 = ctx.r11.s64 + -3904;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// lfd f28,22496(r11)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22496);
loc_82C40380:
	// addi r11,r30,-24
	ctx.r11.s64 = ctx.r30.s64 + -24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadd f0,f0,f28
	ctx.f0.f64 = ctx.f0.f64 + ctx.f28.f64;
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82C403A8;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,252
	ctx.r11.s64 = ctx.r29.s64 + 252;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c40380
	if (ctx.cr6.lt) goto loc_82C40380;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r8,-32245
	ctx.r8.s64 = -2113208320;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-3936
	ctx.r9.s64 = ctx.r9.s64 + -3936;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// lfd f0,-15184(r8)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -15184);
	// addi r10,r10,24752
	ctx.r10.s64 = ctx.r10.s64 + 24752;
loc_82C403E8:
	// lwax r8,r11,r10
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32));
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fadd f13,f13,f29
	ctx.f13.f64 = ctx.f13.f64 + ctx.f29.f64;
	// fdiv f13,f0,f13
	ctx.f13.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fadd f13,f13,f29
	ctx.f13.f64 = ctx.f13.f64 + ctx.f29.f64;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f13,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.f13.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82c403e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C403E8;
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r9,-4256
	ctx.r9.s64 = ctx.r9.s64 + -4256;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// addi r10,r10,24720
	ctx.r10.s64 = ctx.r10.s64 + 24720;
loc_82C40430:
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// fdiv f0,f29,f0
	ctx.f0.f64 = ctx.f29.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r11,r9
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82c40430
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40430;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d74
	ctx.lr = 0x82C40454;
	__restfpr_28(ctx, base);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40458"))) PPC_WEAK_FUNC(sub_82C40458);
PPC_FUNC_IMPL(__imp__sub_82C40458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82C40460;
	__savegprlr_14(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,660(r1)
	PPC_STORE_U32(ctx.r1.u32 + 660, ctx.r3.u32);
	// cmpwi cr6,r3,14
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 14, ctx.xer);
	// stw r4,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
	// stw r5,676(r1)
	PPC_STORE_U32(ctx.r1.u32 + 676, ctx.r5.u32);
	// stw r7,692(r1)
	PPC_STORE_U32(ctx.r1.u32 + 692, ctx.r7.u32);
	// bne cr6,0x82c404a4
	if (!ctx.cr6.eq) goto loc_82C404A4;
	// li r17,16
	ctx.r17.s64 = 16;
	// cmpwi cr6,r4,320
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 320, ctx.xer);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// ble cr6,0x82c404d4
	if (!ctx.cr6.gt) goto loc_82C404D4;
	// addi r11,r4,-320
	ctx.r11.s64 = ctx.r4.s64 + -320;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r11,320
	ctx.r4.s64 = ctx.r11.s64 + 320;
	// b 0x82c404d0
	goto loc_82C404D0;
loc_82C404A4:
	// li r17,32
	ctx.r17.s64 = 32;
	// cmpwi cr6,r3,28
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 28, ctx.xer);
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// bne cr6,0x82c404d4
	if (!ctx.cr6.eq) goto loc_82C404D4;
	// cmpwi cr6,r4,640
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 640, ctx.xer);
	// ble cr6,0x82c404d4
	if (!ctx.cr6.gt) goto loc_82C404D4;
	// addi r11,r4,-640
	ctx.r11.s64 = ctx.r4.s64 + -640;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// addi r4,r11,640
	ctx.r4.s64 = ctx.r11.s64 + 640;
loc_82C404D0:
	// stw r4,668(r1)
	PPC_STORE_U32(ctx.r1.u32 + 668, ctx.r4.u32);
loc_82C404D4:
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// li r21,-32
	ctx.r21.s64 = -32;
	// addi r22,r11,20840
	ctx.r22.s64 = ctx.r11.s64 + 20840;
	// li r24,32
	ctx.r24.s64 = 32;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r23,r4,-32
	ctx.r23.s64 = ctx.r4.s64 + -32;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
loc_82C404F0:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// add r26,r24,r21
	ctx.r26.u64 = ctx.r24.u64 + ctx.r21.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82c40598
	if (ctx.cr6.lt) goto loc_82C40598;
	// addi r30,r3,-1
	ctx.r30.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// subf r29,r6,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_82C4051C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c40534
	if (!ctx.cr0.lt) goto loc_82C40534;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c40540
	goto loc_82C40540;
loc_82C40534:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82c40540
	if (!ctx.cr6.gt) goto loc_82C40540;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C40540:
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// subf r11,r9,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r9.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r9,r20,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r22.u32);
	// add r27,r9,r27
	ctx.r27.u64 = ctx.r9.u64 + ctx.r27.u64;
	// bge 0x82c40568
	if (!ctx.cr0.lt) goto loc_82C40568;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c40574
	goto loc_82C40574;
loc_82C40568:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82c40574
	if (!ctx.cr6.gt) goto loc_82C40574;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C40574:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r8,r30
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r30.s32, ctx.xer);
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// blt cr6,0x82c4051c
	if (ctx.cr6.lt) goto loc_82C4051C;
loc_82C40598:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82c405d4
	if (!ctx.cr6.lt) goto loc_82C405D4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c405bc
	if (!ctx.cr0.lt) goto loc_82C405BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c405c8
	goto loc_82C405C8;
loc_82C405BC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82c405c8
	if (!ctx.cr6.gt) goto loc_82C405C8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C405C8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r25,r9,r22
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
loc_82C405D4:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82c405e8
	if (ctx.cr6.lt) goto loc_82C405E8;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
loc_82C405E8:
	// srawi. r24,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r24.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt 0x82c404f0
	if (ctx.cr0.gt) goto loc_82C404F0;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82c40698
	if (ctx.cr6.lt) goto loc_82C40698;
	// addi r28,r3,-1
	ctx.r28.s64 = ctx.r3.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// subf r27,r6,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r6.s64;
loc_82C4061C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r11,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r11.s64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c40634
	if (!ctx.cr0.lt) goto loc_82C40634;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c40640
	goto loc_82C40640;
loc_82C40634:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82c40640
	if (!ctx.cr6.gt) goto loc_82C40640;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C40640:
	// rlwinm r25,r11,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// stw r11,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r11.u32);
	// subf r11,r9,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r9.s64;
	// srawi. r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwzx r9,r25,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r22.u32);
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// bge 0x82c40668
	if (!ctx.cr0.lt) goto loc_82C40668;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c40674
	goto loc_82C40674;
loc_82C40668:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82c40674
	if (!ctx.cr6.gt) goto loc_82C40674;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C40674:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmpw cr6,r8,r28
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r28.s32, ctx.xer);
	// lwzx r11,r9,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// blt cr6,0x82c4061c
	if (ctx.cr6.lt) goto loc_82C4061C;
loc_82C40698:
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82c406d4
	if (!ctx.cr6.lt) goto loc_82C406D4;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// subf r9,r11,r21
	ctx.r9.s64 = ctx.r21.s64 - ctx.r11.s64;
	// srawi. r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c406bc
	if (!ctx.cr0.lt) goto loc_82C406BC;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82c406c8
	goto loc_82C406C8;
loc_82C406BC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// ble cr6,0x82c406c8
	if (!ctx.cr6.gt) goto loc_82C406C8;
	// li r11,7
	ctx.r11.s64 = 7;
loc_82C406C8:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwzx r26,r9,r22
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r22.u32);
loc_82C406D4:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// li r18,0
	ctx.r18.s64 = 0;
	// add r20,r11,r26
	ctx.r20.u64 = ctx.r11.u64 + ctx.r26.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c407e4
	if (!ctx.cr6.gt) goto loc_82C407E4;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r26,r1,172
	ctx.r26.s64 = ctx.r1.s64 + 172;
	// addi r25,r1,112
	ctx.r25.s64 = ctx.r1.s64 + 112;
	// addi r24,r1,176
	ctx.r24.s64 = ctx.r1.s64 + 176;
	// subf r27,r6,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r6.s64;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r8,r6,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r6.s64;
	// subf r31,r6,r7
	ctx.r31.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subf r30,r6,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r29,r6,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r28,r6,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r26,r6,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r6.s64;
	// subf r25,r6,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r6.s64;
	// subf r24,r6,r24
	ctx.r24.s64 = ctx.r24.s64 - ctx.r6.s64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// addi r22,r1,160
	ctx.r22.s64 = ctx.r1.s64 + 160;
	// addi r21,r1,100
	ctx.r21.s64 = ctx.r1.s64 + 100;
loc_82C40764:
	// lwz r7,-8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// lwz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r17,4(r11)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r16,8(r11)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r15,12(r11)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r14,16(r11)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stwx r7,r10,r23
	PPC_STORE_U32(ctx.r10.u32 + ctx.r23.u32, ctx.r7.u32);
	// stwx r7,r10,r22
	PPC_STORE_U32(ctx.r10.u32 + ctx.r22.u32, ctx.r7.u32);
	// stwx r4,r10,r21
	PPC_STORE_U32(ctx.r10.u32 + ctx.r21.u32, ctx.r4.u32);
	// stwx r4,r10,r5
	PPC_STORE_U32(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u32);
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// stwx r3,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r3.u32);
	// stwx r3,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r3.u32);
	// stwx r17,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r17.u32);
	// stwx r17,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r17.u32);
	// stwx r16,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r16.u32);
	// stwx r16,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r16.u32);
	// stwx r15,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r15.u32);
	// stwx r15,r26,r11
	PPC_STORE_U32(ctx.r26.u32 + ctx.r11.u32, ctx.r15.u32);
	// stwx r14,r25,r11
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, ctx.r14.u32);
	// stwx r14,r24,r11
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, ctx.r14.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82c40764
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40764;
	// lwz r7,692(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r5,676(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// lwz r4,668(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lwz r3,660(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r17,80(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82C407E4:
	// addic. r24,r17,-1
	ctx.xer.ca = ctx.r17.u32 > 0;
	ctx.r24.s64 = ctx.r17.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// ble 0x82c409d4
	if (!ctx.cr0.gt) goto loc_82C409D4;
	// rlwinm r10,r17,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82C40810:
	// add r11,r20,r29
	ctx.r11.u64 = ctx.r20.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82c408f0
	if (ctx.cr6.gt) goto loc_82C408F0;
	// li r9,99
	ctx.r9.s64 = 99;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c408b8
	if (!ctx.cr6.gt) goto loc_82C408B8;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r31,r5,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r5.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C40850:
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82c4087c
	if (!ctx.cr6.gt) goto loc_82C4087C;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,0(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r10,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r10.s64;
	// subf r10,r23,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r23.s64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c4087c
	if (!ctx.cr6.lt) goto loc_82C4087C;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
loc_82C4087C:
	// lwzx r10,r4,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82c408ac
	if (!ctx.cr6.gt) goto loc_82C408AC;
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// lwz r23,4(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r10,r23,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r23.s64;
	// add r10,r10,r21
	ctx.r10.u64 = ctx.r10.u64 + ctx.r21.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c408ac
	if (!ctx.cr6.lt) goto loc_82C408AC;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r19,r8,1
	ctx.r19.s64 = ctx.r8.s64 + 1;
loc_82C408AC:
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82c40850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40850;
loc_82C408B8:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stwu r19,-4(r30)
	ea = -4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r30.u32 = ea;
	// rlwinm r9,r19,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r8,-1
	ctx.r11.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u32);
	// lwzx r11,r8,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r22.u32);
	// lwzx r10,r4,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82c409cc
	goto loc_82C409CC;
loc_82C408F0:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addic. r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r10,-99
	ctx.r10.s64 = -99;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// blt 0x82c4099c
	if (ctx.cr0.lt) goto loc_82C4099C;
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r23,r4,31,1,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_82C4092C:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82c4095c
	if (!ctx.cr6.lt) goto loc_82C4095C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// lwzx r23,r31,r9
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82c4095c
	if (!ctx.cr6.gt) goto loc_82C4095C;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
loc_82C4095C:
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bge cr6,0x82c40990
	if (!ctx.cr6.lt) goto loc_82C40990;
	// add r23,r4,r9
	ctx.r23.u64 = ctx.r4.u64 + ctx.r9.u64;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r23,-4(r23)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r23.u32 + -4);
	// subf r11,r23,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r23.s64;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82c40990
	if (!ctx.cr6.gt) goto loc_82C40990;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r18,r8,-1
	ctx.r18.s64 = ctx.r8.s64 + -1;
loc_82C40990:
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// bdnz 0x82c4092c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C4092C;
loc_82C4099C:
	// rlwinm r9,r18,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// stwu r18,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r18.u32);
	ctx.r28.u32 = ea;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwzx r10,r10,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// lwzx r11,r4,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r22.u32);
	// subf r10,r10,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r10.s64;
	// add r20,r11,r10
	ctx.r20.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C409CC:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82c40810
	if (!ctx.cr0.eq) goto loc_82C40810;
loc_82C409D4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c40a60
	if (!ctx.cr6.gt) goto loc_82C40A60;
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// subf r8,r6,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r4,r6,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r6.s64;
	// subf r3,r6,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r6.s64;
	// subf r6,r6,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r6.s64;
loc_82C40A20:
	// lwz r31,24(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwzx r30,r8,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r29,r5,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r28,r4,r11
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r26,r3,r11
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lwzx r25,r6,r11
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzu r9,28(r10)
	ea = 28 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stw r31,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r31.u32);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stw r25,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r25.u32);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82c40a20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40A20;
loc_82C40A60:
	// addic. r11,r17,-4
	ctx.xer.ca = ctx.r17.u32 > 3;
	ctx.r11.s64 = ctx.r17.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// ble 0x82c40abc
	if (!ctx.cr0.gt) goto loc_82C40ABC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C40A90:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwzu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stwu r6,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c40a90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40A90;
loc_82C40ABC:
	// cmpw cr6,r5,r24
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82c40ae4
	if (!ctx.cr6.lt) goto loc_82C40AE4;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r11,r5,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r5.s64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa7c48
	ctx.lr = 0x82C40AE4;
	sub_82FA7C48(ctx, base);
loc_82C40AE4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40AEC"))) PPC_WEAK_FUNC(sub_82C40AEC);
PPC_FUNC_IMPL(__imp__sub_82C40AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C40AF0"))) PPC_WEAK_FUNC(sub_82C40AF0);
PPC_FUNC_IMPL(__imp__sub_82C40AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C40AF8;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fa8d28
	ctx.lr = 0x82C40B00;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,-4544(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4544);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfd f29,22496(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22496);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// fdiv f30,f0,f13
	ctx.f30.f64 = ctx.f0.f64 / ctx.f13.f64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82c40b90
	if (!ctx.cr6.gt) goto loc_82C40B90;
	// addi r30,r3,-4
	ctx.r30.s64 = ctx.r3.s64 + -4;
loc_82C40B48:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 + ctx.f29.f64;
	// fmul f31,f0,f30
	ctx.f31.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x82C40B68;
	sub_82FA29B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x82C40B78;
	sub_82FA28D0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r27
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r27.s32, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	ea = 8 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// blt cr6,0x82c40b48
	if (ctx.cr6.lt) goto loc_82C40B48;
loc_82C40B90:
	// li r29,0
	ctx.r29.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x82c40ca8
	if (!ctx.cr6.gt) goto loc_82C40CA8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82C40BB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82c40c08
	if (ctx.cr6.eq) goto loc_82C40C08;
	// li r11,10
	ctx.r11.s64 = 10;
	// divw r11,r28,r11
	ctx.r11.s32 = ctx.r28.s32 / ctx.r11.s32;
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// subf. r11,r11,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c40c08
	if (!ctx.cr0.eq) goto loc_82C40C08;
	// stfs f31,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r29,r29,6
	ctx.r29.s64 = ctx.r29.s64 + 6;
	// stfs f31,0(r30)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfsu f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// stfsu f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// stfsu f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// stfsu f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// stfsu f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// stfsu f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// stfsu f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// stfsu f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// stfsu f31,4(r31)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r31.u32 = ea;
	// stfsu f31,4(r30)
	temp.f32 = float(ctx.f31.f64);
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r30.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82C40C08:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 + ctx.f29.f64;
	// fmul f28,f0,f30
	ctx.f28.f64 = ctx.f0.f64 * ctx.f30.f64;
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x82C40C28;
	sub_82FA29B0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmr f1,f28
	ctx.f1.f64 = ctx.f28.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x82C40C38;
	sub_82FA28D0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// blt cr6,0x82c40bb0
	if (ctx.cr6.lt) goto loc_82C40BB0;
	// cmpwi cr6,r29,9
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 9, ctx.xer);
	// ble cr6,0x82c40ca8
	if (!ctx.cr6.gt) goto loc_82C40CA8;
	// srawi r11,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c40ca8
	if (ctx.cr0.eq) goto loc_82C40CA8;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r26,r25
	ctx.r10.s64 = ctx.r25.s64 - ctx.r26.s64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
loc_82C40C84:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stfsx f31,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r9,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 4;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// subf. r9,r9,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82c40c84
	if (!ctx.cr0.eq) goto loc_82C40C84;
loc_82C40CA8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fa8d74
	ctx.lr = 0x82C40CB4;
	__restfpr_28(ctx, base);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40CB8"))) PPC_WEAK_FUNC(sub_82C40CB8);
PPC_FUNC_IMPL(__imp__sub_82C40CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C40CC0;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d1c
	ctx.lr = 0x82C40CC8;
	__savefpr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r28,0
	ctx.r28.s64 = 0;
	// lfd f13,-4520(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -4520);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,-4528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4528);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lfd f30,-4536(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + -4536);
	// li r29,0
	ctx.r29.s64 = 0;
	// lfd f29,22496(r8)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22496);
	// fsqrt f28,f0
	ctx.f28.f64 = sqrt(ctx.f0.f64);
	// addi r30,r11,816
	ctx.r30.s64 = ctx.r11.s64 + 816;
	// lfs f26,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f26.f64 = double(temp.f32);
	// fsqrt f27,f13
	ctx.f27.f64 = sqrt(ctx.f13.f64);
loc_82C40D0C:
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// li r31,0
	ctx.r31.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f31,f0,f29
	ctx.f31.f64 = ctx.f0.f64 + ctx.f29.f64;
loc_82C40D24:
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// add r10,r29,r31
	ctx.r10.u64 = ctx.r29.u64 + ctx.r31.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f25,f0,f29
	ctx.f25.f64 = ctx.f0.f64 + ctx.f29.f64;
	// fmul f0,f31,f25
	ctx.f0.f64 = ctx.f31.f64 * ctx.f25.f64;
	// fmul f1,f0,f30
	ctx.f1.f64 = ctx.f0.f64 * ctx.f30.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x82C40D4C;
	sub_82FA29B0(ctx, base);
	// fmul f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f28.f64;
	// addi r11,r30,-6912
	ctx.r11.s64 = ctx.r30.s64 + -6912;
	// fmul f13,f31,f25
	ctx.f13.f64 = ctx.f31.f64 * ctx.f25.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r27,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, temp.u32);
	// fmul f1,f13,f30
	ctx.f1.f64 = ctx.f13.f64 * ctx.f30.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x82C40D68;
	sub_82FA29B0(ctx, base);
	// fmul f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f1.f64 * ctx.f27.f64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r27,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, temp.u32);
	// blt cr6,0x82c40d24
	if (ctx.cr6.lt) goto loc_82C40D24;
	// li r10,5
	ctx.r10.s64 = 5;
	// li r11,11
	ctx.r11.s64 = 11;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C40D8C:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r9,r30,-6912
	ctx.r9.s64 = ctx.r30.s64 + -6912;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stfsx f26,r10,r9
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, temp.u32);
	// stfsx f26,r10,r30
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// bdnz 0x82c40d8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40D8C;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r29,160
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 160, ctx.xer);
	// blt cr6,0x82c40d0c
	if (ctx.cr6.lt) goto loc_82C40D0C;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,24816
	ctx.r30.s64 = ctx.r11.s64 + 24816;
loc_82C40DC8:
	// addi r11,r30,64
	ctx.r11.s64 = ctx.r30.s64 + 64;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// li r9,5
	ctx.r9.s64 = 5;
	// slw r6,r9,r29
	ctx.r6.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r29.u8 & 0x3F));
	// lwzx r5,r31,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwzx r4,r31,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// bl 0x82c40af0
	ctx.lr = 0x82C40DE8;
	sub_82C40AF0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// blt cr6,0x82c40dc8
	if (ctx.cr6.lt) goto loc_82C40DC8;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d68
	ctx.lr = 0x82C40E04;
	__restfpr_25(ctx, base);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C40E08"))) PPC_WEAK_FUNC(sub_82C40E08);
PPC_FUNC_IMPL(__imp__sub_82C40E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82C40E10;
	__savegprlr_18(ctx, base);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// cmplwi cr6,r7,320
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 320, ctx.xer);
	// addi r10,r10,816
	ctx.r10.s64 = ctx.r10.s64 + 816;
	// bne cr6,0x82c40e3c
	if (!ctx.cr6.eq) goto loc_82C40E3C;
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// addi r10,r10,-6912
	ctx.r10.s64 = ctx.r10.s64 + -6912;
	// b 0x82c40e40
	goto loc_82C40E40;
loc_82C40E3C:
	// li r19,5
	ctx.r19.s64 = 5;
loc_82C40E40:
	// lis r9,-32241
	ctx.r9.s64 = -2112946176;
	// stw r10,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r10.u32);
	// stw r19,-140(r1)
	PPC_STORE_U32(ctx.r1.u32 + -140, ctx.r19.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// addi r21,r9,-4608
	ctx.r21.s64 = ctx.r9.s64 + -4608;
	// stw r4,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r4.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// li r10,16
	ctx.r10.s64 = 16;
	// stw r21,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r21.u32);
	// li r24,32
	ctx.r24.s64 = 32;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82c410f4
	if (ctx.cr6.lt) goto loc_82C410F4;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r19,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r19.u32);
	// li r8,48
	ctx.r8.s64 = 48;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// li r26,48
	ctx.r26.s64 = 48;
	// li r27,64
	ctx.r27.s64 = 64;
	// lvx128 v0,r21,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r21.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r21,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r21.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82C40E98:
	// slw. r6,r18,r28
	ctx.r6.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r28.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srw r9,r7,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r28.u8 & 0x3F));
	// slw r25,r18,r3
	ctx.r25.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r3.u8 & 0x3F));
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// ble 0x82c410d0
	if (!ctx.cr0.gt) goto loc_82C410D0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r9.u32);
loc_82C40EB4:
	// lwz r9,-128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// add r29,r9,r29
	ctx.r29.u64 = ctx.r9.u64 + ctx.r29.u64;
	// beq cr6,0x82c4103c
	if (ctx.cr6.eq) goto loc_82C4103C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x82c410c8
	if (!ctx.cr6.gt) goto loc_82C410C8;
	// addi r8,r25,-1
	ctx.r8.s64 = ctx.r25.s64 + -1;
	// addi r9,r5,40
	ctx.r9.s64 = ctx.r5.s64 + 40;
	// rlwinm r4,r8,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r29,24
	ctx.r8.s64 = ctx.r29.s64 + 24;
	// addi r5,r4,1
	ctx.r5.s64 = ctx.r4.s64 + 1;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82C40EE8:
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v62,r11,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r4,112
	ctx.r4.s64 = 112;
	// lvx128 v61,r11,r24
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// li r3,128
	ctx.r3.s64 = 128;
	// lvx128 v60,r11,r26
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vperm128 v57,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r22,-40
	ctx.r22.s64 = -40;
	// vperm128 v58,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v59,r11,r7
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r11,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vperm128 v56,v61,v60,v0
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v61,v60,v7
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v62,r11,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r11,r3
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vperm128 v55,v59,v63,v0
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v59,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r7,-24
	ctx.r7.s64 = -24;
	// vperm128 v59,v62,v61,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r8,r8,-80
	ctx.r8.s64 = ctx.r8.s64 + -80;
	// vperm128 v62,v62,v61,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubfp128 v61,v58,v57
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vsubfp128 v54,v56,v60
	_mm_store_ps(ctx.v54.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v60.f32)));
	// addi r5,r9,16
	ctx.r5.s64 = ctx.r9.s64 + 16;
	// vaddfp128 v58,v58,v57
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// addi r4,r8,24
	ctx.r4.s64 = ctx.r8.s64 + 24;
	// vsubfp128 v57,v55,v63
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r3,r8,-16
	ctx.r3.s64 = ctx.r8.s64 + -16;
	// vaddfp128 v60,v56,v60
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v60.f32)));
	// li r21,144
	ctx.r21.s64 = 144;
	// vsubfp128 v56,v59,v62
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r31,r9,-8
	ctx.r31.s64 = ctx.r9.s64 + -8;
	// vaddfp128 v63,v55,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v62,v59,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vpermwi128 v61,v61,228
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x1B));
	// vpermwi128 v59,v54,228
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0x1B));
	// stvx128 v58,r9,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v58,v57,228
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0x1B));
	// stvx128 v60,r9,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v60,v56,228
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0x1B));
	// stvlx128 v63,r0,r9
	ea = ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r9,r10
	ea = ctx.r9.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// stvlx128 v62,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// addi r5,r8,16
	ctx.r5.s64 = ctx.r8.s64 + 16;
	// stvx128 v61,r4,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r9,32
	ctx.r4.s64 = ctx.r9.s64 + 32;
	// stvlx128 v58,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v58.u8[15 - i]);
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// stvrx128 v58,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v58.u8[i]);
	// stvlx128 v60,r0,r3
	ea = ctx.r3.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v60.u8[15 - i]);
	// stvrx128 v60,r3,r10
	ea = ctx.r3.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v60.u8[i]);
	// addi r3,r8,-24
	ctx.r3.s64 = ctx.r8.s64 + -24;
	// lvx128 v63,r11,r21
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r11,r27
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v61,v62,34
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xDD));
	// vpermwi128 v62,v62,119
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x88));
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// vpermwi128 v60,v63,34
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xDD));
	// vpermwi128 v63,v63,119
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x88));
	// vsubfp128 v59,v61,v62
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v62,v61,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v61,v60,v63
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// vsubfp128 v63,v60,v63
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v63.f32)));
	// vpermwi128 v60,v59,68
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xBB));
	// stvewx128 v62,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// vpermwi128 v63,v63,68
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xBB));
	// stvewx128 v60,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r5,r30
	ea = (ctx.r5.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r3,r30
	ea = (ctx.r3.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82c40ee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C40EE8;
	// lwz r3,-136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r7,52(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r19,-140(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r22,-144(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// lwz r21,-124(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// b 0x82c410c8
	goto loc_82C410C8;
loc_82C4103C:
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r29,-40
	ctx.r9.s64 = ctx.r29.s64 + -40;
	// lvx128 v62,r11,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r5,32
	ctx.r8.s64 = ctx.r5.s64 + 32;
	// lvx128 v61,r11,r24
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r4,r9,24
	ctx.r4.s64 = ctx.r9.s64 + 24;
	// vperm128 v60,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v62,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v63,r11,r26
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vperm128 v59,v61,v63,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubfp128 v61,v60,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v62,v60,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v60,v59,v63
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v63,v59,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// vpermwi128 v61,v61,228
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x1B));
	// stvx128 v62,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v62,v60,228
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x1B));
	// stvlx128 v61,r0,r4
	ea = ctx.r4.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r4,r10
	ea = ctx.r4.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// stvx128 v63,r5,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r9,8
	ctx.r5.s64 = ctx.r9.s64 + 8;
	// stvlx128 v62,r0,r5
	ea = ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r5,r10
	ea = ctx.r5.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// lvx128 v63,r11,r27
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v62,v63,34
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xDD));
	// vpermwi128 v63,v63,119
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x88));
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// vsubfp128 v61,v62,v63
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vpermwi128 v62,v61,68
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xBB));
	// stvewx128 v63,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v63,r8,r30
	ea = (ctx.r8.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v62,r9,r30
	ea = (ctx.r9.u32 + ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v62.u32[3 - ((ea & 0xF) >> 2)]);
loc_82C410C8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt 0x82c40eb4
	if (ctx.cr0.gt) goto loc_82C40EB4;
loc_82C410D0:
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// stw r11,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r11.u32);
	// mr r23,r22
	ctx.r23.u64 = ctx.r22.u64;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
	// stw r3,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r3.u32);
	// cmpw cr6,r28,r19
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r19.s32, ctx.xer);
	// ble cr6,0x82c40e98
	if (!ctx.cr6.gt) goto loc_82C40E98;
loc_82C410F4:
	// slw. r29,r18,r19
	ctx.r29.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r19.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble 0x82c411a0
	if (!ctx.cr0.gt) goto loc_82C411A0;
	// lwz r9,-132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r30,r9,32
	ctx.r30.s64 = ctx.r9.s64 + 32;
	// li r31,-32
	ctx.r31.s64 = -32;
	// li r3,-16
	ctx.r3.s64 = -16;
loc_82C41114:
	// li r5,10
	ctx.r5.s64 = 10;
	// lvx128 v62,r11,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r11,r24
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// vsldoi128 v60,v62,v58,8
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 8));
	// lvx128 v61,r11,r31
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r11,r3
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v62,v63,v62,8
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 8));
	// vsldoi128 v58,v58,v58,8
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 8));
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82C41144:
	// lvx128 v57,r9,r31
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r6,40
	ctx.r6.s64 = 40;
	// lvx128 v56,r9,r3
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v55,v61,v57
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v54,v59,v56
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// lvx128 v53,r0,r9
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v56,v60,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// vmsum4fp128 v57,v62,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v52,v63,v53
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vmsum4fp128 v53,v58,v53
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vaddfp128 v55,v55,v54
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v57,v57,v56
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v56,v55,v52
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v52.f32)));
	// vaddfp128 v57,v57,v53
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32)));
	// stvewx128 v56,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r8,r6
	ea = (ctx.r8.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82c41144
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C41144;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// addi r4,r4,80
	ctx.r4.s64 = ctx.r4.s64 + 80;
	// bgt 0x82c41114
	if (ctx.cr0.gt) goto loc_82C41114;
loc_82C411A0:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r23,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r23.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// stw r22,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r22.u32);
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// stw r19,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r19.u32);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// blt cr6,0x82c413e8
	if (ctx.cr6.lt) goto loc_82C413E8;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v63,r0,r21
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r22,r11,24880
	ctx.r22.s64 = ctx.r11.s64 + 24880;
	// lvx128 v62,r21,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r21.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82C411D8:
	// subf r8,r6,r19
	ctx.r8.s64 = ctx.r19.s64 - ctx.r6.s64;
	// lwz r31,44(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// srw r11,r7,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r6.u8 & 0x3F));
	// slw r24,r18,r8
	ctx.r24.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r8.u8 & 0x3F));
	// slw r8,r18,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r6.u8 & 0x3F));
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82c411f8
	if (ctx.cr6.eq) goto loc_82C411F8;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82C411F8:
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// stw r8,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r8.u32);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c413cc
	if (!ctx.cr6.gt) goto loc_82C413CC;
	// addi r8,r22,-32
	ctx.r8.s64 = ctx.r22.s64 + -32;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// rlwinm r20,r11,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r4,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,-124(r1)
	PPC_STORE_U32(ctx.r1.u32 + -124, ctx.r9.u32);
	// lwzx r25,r23,r8
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r8.u32);
loc_82C41228:
	// lwz r11,-124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r31,r20,r31
	ctx.r31.u64 = ctx.r20.u64 + ctx.r31.u64;
	// add r9,r11,r21
	ctx.r9.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x82c413c0
	if (!ctx.cr6.gt) goto loc_82C413C0;
	// lwzx r8,r23,r22
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r22.u32);
	// subf r30,r3,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r5,r11,36
	ctx.r5.s64 = ctx.r11.s64 + 36;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r11,r25,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r25.s64;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// add r29,r11,r25
	ctx.r29.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
loc_82C41274:
	// addi r29,r9,-36
	ctx.r29.s64 = ctx.r9.s64 + -36;
	// lvlx128 v61,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r30,r11
	ctx.r27.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r7,-36
	ctx.r7.s64 = -36;
	// addi r8,r8,-40
	ctx.r8.s64 = ctx.r8.s64 + -40;
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// lvrx128 v59,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r26,r9,-20
	ctx.r26.s64 = ctx.r9.s64 + -20;
	// lvlx128 v60,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r8,16
	ctx.r29.s64 = ctx.r8.s64 + 16;
	// vor128 v60,v60,v59
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// lvrx128 v59,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v12,v61,v59
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v59.u8)));
	// lvx128 v13,r3,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r7,-20
	ctx.r7.s64 = -20;
	// addi r27,r5,-20
	ctx.r27.s64 = ctx.r5.s64 + -20;
	// vmulfp128 v61,v0,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v60.f32)));
	// vmulfp128 v60,v13,v60
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vxor128 v11,v61,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vxor128 v10,v60,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vmaddfp v13,v13,v12,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v12,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v61,v13,228
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x1B));
	// stvlx v0,0,r28
	ea = ctx.r28.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r28,r10
	ea = ctx.r28.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx128 v61,r0,r29
	ea = ctx.r29.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r29,r10
	ea = ctx.r29.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// lvlx128 v61,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r3,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvlx128 v59,r0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v60,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v13,v59,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// lvrx128 v60,r10,r26
	temp.u32 = ctx.r10.u32 + ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v61,v61,v60
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8)));
	// vmulfp128 v60,v0,v61
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v61.f32)));
	// vmulfp128 v61,v12,v61
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v61.f32)));
	// vxor128 v11,v60,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// vxor128 v10,v61,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vmaddfp v12,v12,v13,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v13,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v61,v12,228
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x1B));
	// stvlx v0,0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v0.u8[15 - i]);
	// stvrx v0,r11,r10
	ea = ctx.r11.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v0.u8[i]);
	// stvlx128 v61,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// stvrx128 v61,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// lfs f0,-4(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmsubs f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64));
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lfs f9,36(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// lfs f0,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// lfs f10,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmadds f0,f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f10.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lfs f10,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// fmsubs f0,f0,f12,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 - ctx.f10.f64));
	// stfs f0,-8(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -8, temp.u32);
	// lfs f0,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lfs f12,-4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
	// addi r5,r5,40
	ctx.r5.s64 = ctx.r5.s64 + 40;
	// bdnz 0x82c41274
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C41274;
	// lwz r5,-132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -132);
	// li r18,1
	ctx.r18.s64 = 1;
	// lwz r6,-136(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -136);
	// lwz r19,-140(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// lwz r7,52(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// lwz r30,-128(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -128);
loc_82C413C0:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,-132(r1)
	PPC_STORE_U32(ctx.r1.u32 + -132, ctx.r5.u32);
	// bgt 0x82c41228
	if (ctx.cr0.gt) goto loc_82C41228;
loc_82C413CC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// lwz r30,-144(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stw r9,-144(r1)
	PPC_STORE_U32(ctx.r1.u32 + -144, ctx.r9.u32);
	// stw r6,-136(r1)
	PPC_STORE_U32(ctx.r1.u32 + -136, ctx.r6.u32);
	// stw r30,-128(r1)
	PPC_STORE_U32(ctx.r1.u32 + -128, ctx.r30.u32);
	// bge 0x82c411d8
	if (!ctx.cr0.lt) goto loc_82C411D8;
loc_82C413E8:
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C413EC"))) PPC_WEAK_FUNC(sub_82C413EC);
PPC_FUNC_IMPL(__imp__sub_82C413EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C413F0"))) PPC_WEAK_FUNC(sub_82C413F0);
PPC_FUNC_IMPL(__imp__sub_82C413F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C413F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bgt cr6,0x82c41418
	if (ctx.cr6.gt) goto loc_82C41418;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C41418:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41468
	if (ctx.cr6.eq) goto loc_82C41468;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C41434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c414c4
	if (ctx.cr6.eq) goto loc_82C414C4;
loc_82C41440:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// stwcx. r10,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41440
	if (!ctx.cr0.eq) goto loc_82C41440;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C41468:
	// bl 0x82a831b0
	ctx.lr = 0x82C4146C;
	sub_82A831B0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82a81490
	ctx.lr = 0x82C4147C;
	sub_82A81490(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c414c4
	if (ctx.cr6.eq) goto loc_82C414C4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c414c4
	if (ctx.cr6.eq) goto loc_82C414C4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a80708
	ctx.lr = 0x82C414A0;
	sub_82A80708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c414c4
	if (!ctx.cr6.gt) goto loc_82C414C4;
loc_82C414A8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r10,r3,r11
	ctx.r10.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stwcx. r10,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c414a8
	if (!ctx.cr0.eq) goto loc_82C414A8;
loc_82C414C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C414D0"))) PPC_WEAK_FUNC(sub_82C414D0);
PPC_FUNC_IMPL(__imp__sub_82C414D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41508
	if (ctx.cr6.eq) goto loc_82C41508;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C41504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c41558
	goto loc_82C41558;
loc_82C41508:
	// bl 0x82a831b0
	ctx.lr = 0x82C4150C;
	sub_82A831B0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c41548
	if (ctx.cr6.eq) goto loc_82C41548;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a80708
	ctx.lr = 0x82C41520;
	sub_82A80708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c41548
	if (!ctx.cr6.gt) goto loc_82C41548;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82C4152C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4152c
	if (!ctx.cr0.eq) goto loc_82C4152C;
loc_82C41548:
	// bl 0x82a831b0
	ctx.lr = 0x82C4154C;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82C41558;
	sub_82A81D88(ctx, base);
loc_82C41558:
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

__attribute__((alias("__imp__sub_82C41570"))) PPC_WEAK_FUNC(sub_82C41570);
PPC_FUNC_IMPL(__imp__sub_82C41570) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c41608
	if (!ctx.cr6.gt) goto loc_82C41608;
	// li r31,128
	ctx.r31.s64 = 128;
	// cmplwi cr6,r5,64
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 64, ctx.xer);
	// bgt cr6,0x82c415b4
	if (ctx.cr6.gt) goto loc_82C415B4;
	// li r11,64
	ctx.r11.s64 = 64;
loc_82C415A4:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c415a4
	if (!ctx.cr6.gt) goto loc_82C415A4;
loc_82C415B4:
	// li r11,8
	ctx.r11.s64 = 8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c415c4
	if (ctx.cr6.eq) goto loc_82C415C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82C415C4:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82c415d0
	if (ctx.cr6.gt) goto loc_82C415D0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C415D0:
	// add r11,r31,r10
	ctx.r11.u64 = ctx.r31.u64 + ctx.r10.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82c41608
	if (!ctx.cr6.gt) goto loc_82C41608;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82c41608
	if (!ctx.cr6.gt) goto loc_82C41608;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// bl 0x82c413f0
	ctx.lr = 0x82C415F0;
	sub_82C413F0(ctx, base);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// b 0x82c41614
	goto loc_82C41614;
loc_82C41608:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82C41614:
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

__attribute__((alias("__imp__sub_82C4162C"))) PPC_WEAK_FUNC(sub_82C4162C);
PPC_FUNC_IMPL(__imp__sub_82C4162C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41630"))) PPC_WEAK_FUNC(sub_82C41630);
PPC_FUNC_IMPL(__imp__sub_82C41630) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82c416e0
	if (!ctx.cr6.gt) goto loc_82C416E0;
	// addic. r5,r5,8
	ctx.xer.ca = ctx.r5.u32 > 4294967287;
	ctx.r5.s64 = ctx.r5.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82c416e0
	if (ctx.cr0.eq) goto loc_82C416E0;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82c416e0
	if (ctx.cr6.lt) goto loc_82C416E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c41570
	ctx.lr = 0x82C4166C;
	sub_82C41570(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c416e0
	if (ctx.cr6.eq) goto loc_82C416E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r3,r30
	ctx.r9.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82C41684:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82C416A4:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c416c8
	if (!ctx.cr6.eq) goto loc_82C416C8;
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c416a4
	if (!ctx.cr0.eq) goto loc_82C416A4;
	// b 0x82c416d0
	goto loc_82C416D0;
loc_82C416C8:
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C416D0:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41684
	if (!ctx.cr6.eq) goto loc_82C41684;
	// b 0x82c416e4
	goto loc_82C416E4;
loc_82C416E0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C416E4:
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

__attribute__((alias("__imp__sub_82C416FC"))) PPC_WEAK_FUNC(sub_82C416FC);
PPC_FUNC_IMPL(__imp__sub_82C416FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41700"))) PPC_WEAK_FUNC(sub_82C41700);
PPC_FUNC_IMPL(__imp__sub_82C41700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C41708;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
loc_82C41718:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c417f4
	if (ctx.cr6.eq) goto loc_82C417F4;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C41744:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41768
	if (!ctx.cr6.eq) goto loc_82C41768;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41744
	if (!ctx.cr0.eq) goto loc_82C41744;
	// b 0x82c41770
	goto loc_82C41770;
loc_82C41768:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41770:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41718
	if (!ctx.cr6.eq) goto loc_82C41718;
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c417a0
	if (ctx.cr6.eq) goto loc_82C417A0;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4179C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c41718
	goto loc_82C41718;
loc_82C417A0:
	// bl 0x82a831b0
	ctx.lr = 0x82C417A4;
	sub_82A831B0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c417e0
	if (ctx.cr6.eq) goto loc_82C417E0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a80708
	ctx.lr = 0x82C417B8;
	sub_82A80708(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c417e0
	if (!ctx.cr6.gt) goto loc_82C417E0;
	// neg r11,r3
	ctx.r11.s64 = -ctx.r3.s64;
loc_82C417C4:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwcx. r9,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c417c4
	if (!ctx.cr0.eq) goto loc_82C417C4;
loc_82C417E0:
	// bl 0x82a831b0
	ctx.lr = 0x82C417E4;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82C417F0;
	sub_82A81D88(ctx, base);
	// b 0x82c41718
	goto loc_82C41718;
loc_82C417F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C417FC"))) PPC_WEAK_FUNC(sub_82C417FC);
PPC_FUNC_IMPL(__imp__sub_82C417FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41800"))) PPC_WEAK_FUNC(sub_82C41800);
PPC_FUNC_IMPL(__imp__sub_82C41800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C41808;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,40(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r28,r3,44
	ctx.r28.s64 = ctx.r3.s64 + 44;
loc_82C41818:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c41874
	if (ctx.cr6.lt) goto loc_82C41874;
	// beq cr6,0x82c418a4
	if (ctx.cr6.eq) goto loc_82C418A4;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c41834
	if (!ctx.cr6.gt) goto loc_82C41834;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82C41834:
	// lwsync 
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
loc_82C4183C:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r28
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r28.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c41860
	if (!ctx.cr6.eq) goto loc_82C41860;
	// stwcx. r10,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4183c
	if (!ctx.cr0.eq) goto loc_82C4183C;
	// b 0x82c41868
	goto loc_82C41868;
loc_82C41860:
	// stwcx. r9,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r28.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41868:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c41818
	if (!ctx.cr6.eq) goto loc_82C41818;
loc_82C41874:
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r6,r31,52
	ctx.r6.s64 = ctx.r31.s64 + 52;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// bl 0x82c41630
	ctx.lr = 0x82C4188C;
	sub_82C41630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c418b0
	if (!ctx.cr6.eq) goto loc_82C418B0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C418A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C418B0:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
loc_82C418B4:
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
	// bne 0x82c418b4
	if (!ctx.cr0.eq) goto loc_82C418B4;
	// addi r8,r29,-1
	ctx.r8.s64 = ctx.r29.s64 + -1;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c41950
	if (ctx.cr6.eq) goto loc_82C41950;
loc_82C418E8:
	// rldicr r9,r30,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
loc_82C418EC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r6,33
	ctx.r10.u64 = ctx.r6.u64 & 0x7FFFFFFF;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C4190C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41930
	if (!ctx.cr6.eq) goto loc_82C41930;
	// stdcx. r3,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r3.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4190c
	if (!ctx.cr0.eq) goto loc_82C4190C;
	// b 0x82c41938
	goto loc_82C41938;
loc_82C41930:
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41938:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c418ec
	if (!ctx.cr6.eq) goto loc_82C418EC;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r30,r30,-8
	ctx.r30.s64 = ctx.r30.s64 + -8;
	// bne 0x82c418e8
	if (!ctx.cr0.eq) goto loc_82C418E8;
loc_82C41950:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c419ac
	if (ctx.cr6.eq) goto loc_82C419AC;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
loc_82C41960:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
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
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41960
	if (!ctx.cr0.eq) goto loc_82C41960;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x82c419ac
	if (!ctx.cr6.lt) goto loc_82C419AC;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82c419ac
	if (!ctx.cr6.gt) goto loc_82C419AC;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82c419a0
	if (!ctx.cr6.gt) goto loc_82C419A0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_82C419A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a83468
	ctx.lr = 0x82C419AC;
	sub_82A83468(ctx, base);
loc_82C419AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C419B8"))) PPC_WEAK_FUNC(sub_82C419B8);
PPC_FUNC_IMPL(__imp__sub_82C419B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C419C0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// li r9,16
	ctx.r9.s64 = 16;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// and r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 & ctx.r9.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// addi r5,r11,72
	ctx.r5.s64 = ctx.r11.s64 + 72;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82c41570
	ctx.lr = 0x82C41A0C;
	sub_82C41570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41b60
	if (ctx.cr6.eq) goto loc_82C41B60;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C41A28:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c41a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C41A28;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r23,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r23.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// bne cr6,0x82c41a5c
	if (!ctx.cr6.eq) goto loc_82C41A5C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
	// beq cr6,0x82c41a94
	if (ctx.cr6.eq) goto loc_82C41A94;
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// b 0x82c41a90
	goto loc_82C41A90;
loc_82C41A5C:
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// beq cr6,0x82c41a94
	if (ctx.cr6.eq) goto loc_82C41A94;
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
loc_82C41A90:
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
loc_82C41A94:
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// bge cr6,0x82c41aa4
	if (!ctx.cr6.lt) goto loc_82C41AA4;
	// li r28,16
	ctx.r28.s64 = 16;
	// b 0x82c41ab4
	goto loc_82C41AB4;
loc_82C41AA4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c41ab4
	if (!ctx.cr6.gt) goto loc_82C41AB4;
	// lis r28,256
	ctx.r28.s64 = 16777216;
loc_82C41AB4:
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c41b38
	if (ctx.cr6.lt) goto loc_82C41B38;
	// lis r27,4095
	ctx.r27.s64 = 268369920;
	// ori r27,r27,65534
	ctx.r27.u64 = ctx.r27.u64 | 65534;
loc_82C41ACC:
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82c41ad8
	if (!ctx.cr6.gt) goto loc_82C41AD8;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82C41AD8:
	// stw r28,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r28.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// beq cr6,0x82c41b6c
	if (ctx.cr6.eq) goto loc_82C41B6C;
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
	ctx.lr = 0x82C41B00;
	sub_82A833D0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41b6c
	if (!ctx.cr6.eq) goto loc_82C41B6C;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41b4c
	if (ctx.cr6.eq) goto loc_82C41B4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41B2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C41B38:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bgt cr6,0x82c41acc
	if (ctx.cr6.gt) goto loc_82C41ACC;
	// li r27,-1
	ctx.r27.s64 = -1;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// b 0x82c41ad8
	goto loc_82C41AD8;
loc_82C41B4C:
	// bl 0x82a831b0
	ctx.lr = 0x82C41B50;
	sub_82A831B0(ctx, base);
	// bl 0x82a831b0
	ctx.lr = 0x82C41B54;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82C41B60;
	sub_82A81D88(ctx, base);
loc_82C41B60:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C41B6C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82c41bd4
	if (ctx.cr6.eq) goto loc_82C41BD4;
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
	ctx.lr = 0x82C41B8C;
	sub_82A833D0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41bd4
	if (!ctx.cr6.eq) goto loc_82C41BD4;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41ba8
	if (ctx.cr6.eq) goto loc_82C41BA8;
	// bl 0x82a756a0
	ctx.lr = 0x82C41BA8;
	sub_82A756A0(ctx, base);
loc_82C41BA8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41b4c
	if (ctx.cr6.eq) goto loc_82C41B4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41BC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C41BD4:
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r11,21364
	ctx.r10.u64 = ctx.r11.u64 | 21364;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x82c41800
	ctx.lr = 0x82C41BE8;
	sub_82C41800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41c3c
	if (!ctx.cr6.eq) goto loc_82C41C3C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41c00
	if (ctx.cr6.eq) goto loc_82C41C00;
	// bl 0x82a756a0
	ctx.lr = 0x82C41C00;
	sub_82A756A0(ctx, base);
loc_82C41C00:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41c10
	if (ctx.cr6.eq) goto loc_82C41C10;
	// bl 0x82a756a0
	ctx.lr = 0x82C41C10;
	sub_82A756A0(ctx, base);
loc_82C41C10:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41b4c
	if (ctx.cr6.eq) goto loc_82C41B4C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C41C30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C41C3C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c41c54
	if (ctx.cr6.eq) goto loc_82C41C54;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82C41C54:
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
loc_82C41C58:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C41C78:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41c9c
	if (!ctx.cr6.eq) goto loc_82C41C9C;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41c78
	if (!ctx.cr0.eq) goto loc_82C41C78;
	// b 0x82c41ca4
	goto loc_82C41CA4;
loc_82C41C9C:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41CA4:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41c58
	if (!ctx.cr6.eq) goto loc_82C41C58;
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C41CC0"))) PPC_WEAK_FUNC(sub_82C41CC0);
PPC_FUNC_IMPL(__imp__sub_82C41CC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C41CC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c41dc0
	if (!ctx.cr6.eq) goto loc_82C41DC0;
loc_82C41CE0:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41d98
	if (ctx.cr6.eq) goto loc_82C41D98;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C41D10:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41d34
	if (!ctx.cr6.eq) goto loc_82C41D34;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41d10
	if (!ctx.cr0.eq) goto loc_82C41D10;
	// b 0x82c41d3c
	goto loc_82C41D3C;
loc_82C41D34:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41D3C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41ce0
	if (!ctx.cr6.eq) goto loc_82C41CE0;
loc_82C41D48:
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// rldicr r8,r3,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_82C41D54:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r7,33
	ctx.r9.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82C41D74:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r10
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r10.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41e98
	if (!ctx.cr6.eq) goto loc_82C41E98;
	// stdcx. r4,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r10.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41d74
	if (!ctx.cr0.eq) goto loc_82C41D74;
	// b 0x82c41ea0
	goto loc_82C41EA0;
loc_82C41D98:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c41db4
	if (ctx.cr6.eq) goto loc_82C41DB4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41800
	ctx.lr = 0x82C41DAC;
	sub_82C41800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41d48
	if (!ctx.cr6.eq) goto loc_82C41D48;
loc_82C41DB4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C41DC0:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_82C41DC4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41dc4
	if (!ctx.cr0.eq) goto loc_82C41DC4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c41e54
	if (ctx.cr6.lt) goto loc_82C41E54;
loc_82C41DE8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41e54
	if (ctx.cr6.eq) goto loc_82C41E54;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C41E18:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41e3c
	if (!ctx.cr6.eq) goto loc_82C41E3C;
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41e18
	if (!ctx.cr0.eq) goto loc_82C41E18;
	// b 0x82c41e44
	goto loc_82C41E44;
loc_82C41E3C:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41E44:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41de8
	if (!ctx.cr6.eq) goto loc_82C41DE8;
	// b 0x82c41d48
	goto loc_82C41D48;
loc_82C41E54:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c41e70
	if (ctx.cr6.eq) goto loc_82C41E70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41800
	ctx.lr = 0x82C41E68;
	sub_82C41800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41d48
	if (!ctx.cr6.eq) goto loc_82C41D48;
loc_82C41E70:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41e70
	if (!ctx.cr0.eq) goto loc_82C41E70;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C41E98:
	// stdcx. r6,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r10.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41EA0:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41d54
	if (!ctx.cr6.eq) goto loc_82C41D54;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c41ed0
	if (ctx.cr6.eq) goto loc_82C41ED0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c41ed0
	if (!ctx.cr6.gt) goto loc_82C41ED0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a83468
	ctx.lr = 0x82C41ED0;
	sub_82A83468(ctx, base);
loc_82C41ED0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C41EDC"))) PPC_WEAK_FUNC(sub_82C41EDC);
PPC_FUNC_IMPL(__imp__sub_82C41EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C41EE0"))) PPC_WEAK_FUNC(sub_82C41EE0);
PPC_FUNC_IMPL(__imp__sub_82C41EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C41EE8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c41ff8
	if (!ctx.cr6.eq) goto loc_82C41FF8;
loc_82C41F18:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c41fd0
	if (ctx.cr6.eq) goto loc_82C41FD0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C41F48:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41f6c
	if (!ctx.cr6.eq) goto loc_82C41F6C;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41f48
	if (!ctx.cr0.eq) goto loc_82C41F48;
	// b 0x82c41f74
	goto loc_82C41F74;
loc_82C41F6C:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C41F74:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41f18
	if (!ctx.cr6.eq) goto loc_82C41F18;
loc_82C41F80:
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// rldicr r8,r3,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
loc_82C41F8C:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r7,33
	ctx.r9.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82C41FAC:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r10
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r10.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42268
	if (!ctx.cr6.eq) goto loc_82C42268;
	// stdcx. r4,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r10.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c41fac
	if (!ctx.cr0.eq) goto loc_82C41FAC;
	// b 0x82c42270
	goto loc_82C42270;
loc_82C41FD0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c41fec
	if (ctx.cr6.eq) goto loc_82C41FEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41800
	ctx.lr = 0x82C41FE4;
	sub_82C41800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41f80
	if (!ctx.cr6.eq) goto loc_82C41F80;
loc_82C41FEC:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C41FF8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
loc_82C42000:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42000
	if (!ctx.cr0.eq) goto loc_82C42000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c42090
	if (ctx.cr6.lt) goto loc_82C42090;
loc_82C42024:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42090
	if (ctx.cr6.eq) goto loc_82C42090;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C42054:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42078
	if (!ctx.cr6.eq) goto loc_82C42078;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42054
	if (!ctx.cr0.eq) goto loc_82C42054;
	// b 0x82c42080
	goto loc_82C42080;
loc_82C42078:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42080:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42024
	if (!ctx.cr6.eq) goto loc_82C42024;
	// b 0x82c41f80
	goto loc_82C41F80;
loc_82C42090:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c420ac
	if (ctx.cr6.eq) goto loc_82C420AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c41800
	ctx.lr = 0x82C420A4;
	sub_82C41800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41f80
	if (!ctx.cr6.eq) goto loc_82C41F80;
loc_82C420AC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82c42154
	if (ctx.cr6.eq) goto loc_82C42154;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_82C420B8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C420C0:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c420c0
	if (!ctx.cr0.lt) goto loc_82C420C0;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82c420dc
	if (ctx.cr6.gt) goto loc_82C420DC;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C420DC:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C420E0:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4214c
	if (ctx.cr6.eq) goto loc_82C4214C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C42110:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42134
	if (!ctx.cr6.eq) goto loc_82C42134;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42110
	if (!ctx.cr0.eq) goto loc_82C42110;
	// b 0x82c4213c
	goto loc_82C4213C;
loc_82C42134:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C4213C:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c420e0
	if (!ctx.cr6.eq) goto loc_82C420E0;
	// b 0x82c41f80
	goto loc_82C41F80;
loc_82C4214C:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82c420b8
	if (!ctx.cr0.eq) goto loc_82C420B8;
loc_82C42154:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c41f80
	if (!ctx.cr6.eq) goto loc_82C41F80;
loc_82C4215C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82c4218c
	if (ctx.cr6.eq) goto loc_82C4218C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C4216C:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c4216c
	if (!ctx.cr0.lt) goto loc_82C4216C;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82c42188
	if (ctx.cr6.gt) goto loc_82C42188;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C42188:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C4218C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c421b8
	if (!ctx.cr6.eq) goto loc_82C421B8;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c421a8
	if (!ctx.cr6.eq) goto loc_82C421A8;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82c421d0
	goto loc_82C421D0;
loc_82C421A8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c44748
	ctx.lr = 0x82C421B4;
	sub_82C44748(ctx, base);
	// b 0x82c421d0
	goto loc_82C421D0;
loc_82C421B8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82C421D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C421D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42244
	if (!ctx.cr6.eq) goto loc_82C42244;
loc_82C421D8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4215c
	if (ctx.cr6.eq) goto loc_82C4215C;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C42208:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4222c
	if (!ctx.cr6.eq) goto loc_82C4222C;
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42208
	if (!ctx.cr0.eq) goto loc_82C42208;
	// b 0x82c42234
	goto loc_82C42234;
loc_82C4222C:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42234:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c421d8
	if (!ctx.cr6.eq) goto loc_82C421D8;
	// b 0x82c41f80
	goto loc_82C41F80;
loc_82C42244:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42244
	if (!ctx.cr0.eq) goto loc_82C42244;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C42268:
	// stdcx. r6,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r10.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42270:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c41f8c
	if (!ctx.cr6.eq) goto loc_82C41F8C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c422a0
	if (ctx.cr6.eq) goto loc_82C422A0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c422a0
	if (!ctx.cr6.gt) goto loc_82C422A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a83468
	ctx.lr = 0x82C422A0;
	sub_82A83468(ctx, base);
loc_82C422A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C422AC"))) PPC_WEAK_FUNC(sub_82C422AC);
PPC_FUNC_IMPL(__imp__sub_82C422AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C422B0"))) PPC_WEAK_FUNC(sub_82C422B0);
PPC_FUNC_IMPL(__imp__sub_82C422B0) {
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
	// addi r7,r3,8
	ctx.r7.s64 = ctx.r3.s64 + 8;
loc_82C422C4:
	// ld r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42374
	if (ctx.cr6.eq) goto loc_82C42374;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r9,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82C422F0:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42314
	if (!ctx.cr6.eq) goto loc_82C42314;
	// stdcx. r4,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c422f0
	if (!ctx.cr0.eq) goto loc_82C422F0;
	// b 0x82c4231c
	goto loc_82C4231C;
loc_82C42314:
	// stdcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C4231C:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c422c4
	if (!ctx.cr6.eq) goto loc_82C422C4;
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rldicr r8,r10,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
loc_82C42330:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// clrldi r9,r7,33
	ctx.r9.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_82C42350:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4238c
	if (!ctx.cr6.eq) goto loc_82C4238C;
	// stdcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42350
	if (!ctx.cr0.eq) goto loc_82C42350;
	// b 0x82c42394
	goto loc_82C42394;
loc_82C42374:
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
loc_82C4238C:
	// stdcx. r6,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42394:
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42330
	if (!ctx.cr6.eq) goto loc_82C42330;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c423e8
	if (ctx.cr6.eq) goto loc_82C423E8;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_82C423B0:
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
	// bne 0x82c423b0
	if (!ctx.cr0.eq) goto loc_82C423B0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82c423e8
	if (ctx.cr6.gt) goto loc_82C423E8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a83468
	ctx.lr = 0x82C423E8;
	sub_82A83468(ctx, base);
loc_82C423E8:
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

__attribute__((alias("__imp__sub_82C42400"))) PPC_WEAK_FUNC(sub_82C42400);
PPC_FUNC_IMPL(__imp__sub_82C42400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C42408;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c424b4
	if (!ctx.cr6.eq) goto loc_82C424B4;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82C4243C:
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c424a8
	if (ctx.cr6.eq) goto loc_82C424A8;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r6,33
	ctx.r10.u64 = ctx.r6.u64 & 0x7FFFFFFF;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C4246C:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r8
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r8.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42490
	if (!ctx.cr6.eq) goto loc_82C42490;
	// stdcx. r3,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r3.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4246c
	if (!ctx.cr0.eq) goto loc_82C4246C;
	// b 0x82c42498
	goto loc_82C42498;
loc_82C42490:
	// stdcx. r5,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42498:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4243c
	if (!ctx.cr6.eq) goto loc_82C4243C;
	// b 0x82c42670
	goto loc_82C42670;
loc_82C424A8:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C424B4:
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
loc_82C424B8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42524
	if (ctx.cr6.eq) goto loc_82C42524;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r9,r10
	ctx.r4.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C424E8:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4250c
	if (!ctx.cr6.eq) goto loc_82C4250C;
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c424e8
	if (!ctx.cr0.eq) goto loc_82C424E8;
	// b 0x82c42514
	goto loc_82C42514;
loc_82C4250C:
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42514:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c424b8
	if (!ctx.cr6.eq) goto loc_82C424B8;
	// b 0x82c42670
	goto loc_82C42670;
loc_82C42524:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82c425cc
	if (ctx.cr6.eq) goto loc_82C425CC;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_82C42530:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C42538:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c42538
	if (!ctx.cr0.lt) goto loc_82C42538;
	// cmpwi cr6,r29,511
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 511, ctx.xer);
	// bgt cr6,0x82c42554
	if (ctx.cr6.gt) goto loc_82C42554;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C42554:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82C42558:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c425c4
	if (ctx.cr6.eq) goto loc_82C425C4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r6,33
	ctx.r10.u64 = ctx.r6.u64 & 0x7FFFFFFF;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C42588:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c425ac
	if (!ctx.cr6.eq) goto loc_82C425AC;
	// stdcx. r3,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r3.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42588
	if (!ctx.cr0.eq) goto loc_82C42588;
	// b 0x82c425b4
	goto loc_82C425B4;
loc_82C425AC:
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C425B4:
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42558
	if (!ctx.cr6.eq) goto loc_82C42558;
	// b 0x82c42670
	goto loc_82C42670;
loc_82C425C4:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82c42530
	if (!ctx.cr0.eq) goto loc_82C42530;
loc_82C425CC:
	// addi r30,r28,24
	ctx.r30.s64 = ctx.r28.s64 + 24;
loc_82C425D0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c425d0
	if (!ctx.cr0.eq) goto loc_82C425D0;
loc_82C425EC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c426c0
	if (ctx.cr6.eq) goto loc_82C426C0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C4261C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42640
	if (!ctx.cr6.eq) goto loc_82C42640;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4261c
	if (!ctx.cr0.eq) goto loc_82C4261C;
	// b 0x82c42648
	goto loc_82C42648;
loc_82C42640:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42648:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c425ec
	if (!ctx.cr6.eq) goto loc_82C425EC;
loc_82C42654:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42654
	if (!ctx.cr0.eq) goto loc_82C42654;
loc_82C42670:
	// lwz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rldicr r9,r7,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82C4267C:
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C4269C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r28
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r28.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c427cc
	if (!ctx.cr6.eq) goto loc_82C427CC;
	// stdcx. r4,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r28.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4269c
	if (!ctx.cr0.eq) goto loc_82C4269C;
	// b 0x82c427d4
	goto loc_82C427D4;
loc_82C426C0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82c426f0
	if (ctx.cr6.eq) goto loc_82C426F0;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C426D0:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c426d0
	if (!ctx.cr0.lt) goto loc_82C426D0;
	// cmpwi cr6,r29,511
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 511, ctx.xer);
	// bgt cr6,0x82c426ec
	if (ctx.cr6.gt) goto loc_82C426EC;
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C426EC:
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82C426F0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82c4271c
	if (!ctx.cr6.eq) goto loc_82C4271C;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c4270c
	if (!ctx.cr6.eq) goto loc_82C4270C;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82c42734
	goto loc_82C42734;
loc_82C4270C:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82c44748
	ctx.lr = 0x82C42718;
	sub_82C44748(ctx, base);
	// b 0x82c42734
	goto loc_82C42734;
loc_82C4271C:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,28(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82C42734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C42734:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c427a8
	if (!ctx.cr6.eq) goto loc_82C427A8;
loc_82C4273C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c426c0
	if (ctx.cr6.eq) goto loc_82C426C0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C4276C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42790
	if (!ctx.cr6.eq) goto loc_82C42790;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4276c
	if (!ctx.cr0.eq) goto loc_82C4276C;
	// b 0x82c42798
	goto loc_82C42798;
loc_82C42790:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42798:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4273c
	if (!ctx.cr6.eq) goto loc_82C4273C;
	// b 0x82c42654
	goto loc_82C42654;
loc_82C427A8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c427a8
	if (!ctx.cr0.eq) goto loc_82C427A8;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C427CC:
	// stdcx. r6,0,r28
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r28.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C427D4:
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4267c
	if (!ctx.cr6.eq) goto loc_82C4267C;
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42828
	if (ctx.cr6.eq) goto loc_82C42828;
	// addi r11,r28,16
	ctx.r11.s64 = ctx.r28.s64 + 16;
loc_82C427F0:
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
	// bne 0x82c427f0
	if (!ctx.cr0.eq) goto loc_82C427F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82c42828
	if (ctx.cr6.gt) goto loc_82C42828;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,20(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a83468
	ctx.lr = 0x82C42828;
	sub_82A83468(ctx, base);
loc_82C42828:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C42834"))) PPC_WEAK_FUNC(sub_82C42834);
PPC_FUNC_IMPL(__imp__sub_82C42834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C42838"))) PPC_WEAK_FUNC(sub_82C42838);
PPC_FUNC_IMPL(__imp__sub_82C42838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C42840;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,52
	ctx.r29.s64 = ctx.r3.s64 + 52;
loc_82C42850:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c428ac
	if (ctx.cr6.lt) goto loc_82C428AC;
	// beq cr6,0x82c428d8
	if (ctx.cr6.eq) goto loc_82C428D8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c4286c
	if (!ctx.cr6.gt) goto loc_82C4286C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82C4286C:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82C42874:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c42898
	if (!ctx.cr6.eq) goto loc_82C42898;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42874
	if (!ctx.cr0.eq) goto loc_82C42874;
	// b 0x82c428a0
	goto loc_82C428A0;
loc_82C42898:
	// stwcx. r9,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C428A0:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c42850
	if (!ctx.cr6.eq) goto loc_82C42850;
loc_82C428AC:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r6,r31,60
	ctx.r6.s64 = ctx.r31.s64 + 60;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82c41630
	ctx.lr = 0x82C428C4;
	sub_82C41630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c428e4
	if (!ctx.cr6.eq) goto loc_82C428E4;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C428D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C428E4:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_82C428E8:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c428e8
	if (!ctx.cr0.eq) goto loc_82C428E8;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c42980
	if (ctx.cr6.eq) goto loc_82C42980;
loc_82C42918:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_82C42920:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82C42940:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r4,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42964
	if (!ctx.cr6.eq) goto loc_82C42964;
	// stdcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42940
	if (!ctx.cr0.eq) goto loc_82C42940;
	// b 0x82c4296c
	goto loc_82C4296C;
loc_82C42964:
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C4296C:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42920
	if (!ctx.cr6.eq) goto loc_82C42920;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82c42918
	if (!ctx.cr0.eq) goto loc_82C42918;
loc_82C42980:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c429dc
	if (ctx.cr6.eq) goto loc_82C429DC;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_82C42994:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42994
	if (!ctx.cr0.eq) goto loc_82C42994;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x82c429dc
	if (!ctx.cr6.lt) goto loc_82C429DC;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82c429dc
	if (!ctx.cr6.gt) goto loc_82C429DC;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82c429d4
	if (!ctx.cr6.gt) goto loc_82C429D4;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_82C429D4:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c446f0
	ctx.lr = 0x82C429DC;
	sub_82C446F0(ctx, base);
loc_82C429DC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C429E8"))) PPC_WEAK_FUNC(sub_82C429E8);
PPC_FUNC_IMPL(__imp__sub_82C429E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C429F0;
	__savegprlr_23(ctx, base);
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c42a14
	if (!ctx.cr6.eq) goto loc_82C42A14;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C42A14:
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x82c42a44
	if (ctx.cr6.eq) goto loc_82C42A44;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42a44
	if (ctx.cr6.eq) goto loc_82C42A44;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c42a50
	if (ctx.cr6.eq) goto loc_82C42A50;
loc_82C42A44:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C42A50:
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// bl 0x82c41570
	ctx.lr = 0x82C42A70;
	sub_82C41570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42b94
	if (ctx.cr6.eq) goto loc_82C42B94;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C42A8C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c42a8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C42A8C;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r24,88(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r25,r31,60
	ctx.r25.s64 = ctx.r31.s64 + 60;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r24,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r24.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// bge cr6,0x82c42ae4
	if (!ctx.cr6.lt) goto loc_82C42AE4;
	// li r30,16
	ctx.r30.s64 = 16;
	// b 0x82c42af4
	goto loc_82C42AF4;
loc_82C42AE4:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c42af4
	if (!ctx.cr6.gt) goto loc_82C42AF4;
	// lis r30,256
	ctx.r30.s64 = 16777216;
loc_82C42AF4:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c42b6c
	if (ctx.cr6.lt) goto loc_82C42B6C;
	// lis r28,2047
	ctx.r28.s64 = 134152192;
	// ori r28,r28,65534
	ctx.r28.u64 = ctx.r28.u64 | 65534;
loc_82C42B0C:
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82c42b18
	if (!ctx.cr6.gt) goto loc_82C42B18;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82C42B18:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x82c42ba0
	if (ctx.cr6.eq) goto loc_82C42BA0;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82c446d0
	ctx.lr = 0x82C42B34;
	sub_82C446D0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42ba0
	if (!ctx.cr6.eq) goto loc_82C42BA0;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42b80
	if (ctx.cr6.eq) goto loc_82C42B80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C42B6C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82c42b0c
	if (ctx.cr6.gt) goto loc_82C42B0C;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// b 0x82c42b18
	goto loc_82C42B18;
loc_82C42B80:
	// bl 0x82a831b0
	ctx.lr = 0x82C42B84;
	sub_82A831B0(ctx, base);
	// bl 0x82a831b0
	ctx.lr = 0x82C42B88;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82C42B94;
	sub_82A81D88(ctx, base);
loc_82C42B94:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C42BA0:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c42bf8
	if (ctx.cr6.eq) goto loc_82C42BF8;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c446d0
	ctx.lr = 0x82C42BB0;
	sub_82C446D0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42bf8
	if (!ctx.cr6.eq) goto loc_82C42BF8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42bcc
	if (ctx.cr6.eq) goto loc_82C42BCC;
	// bl 0x82c446e8
	ctx.lr = 0x82C42BCC;
	sub_82C446E8(ctx, base);
loc_82C42BCC:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42b80
	if (ctx.cr6.eq) goto loc_82C42B80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C42BF8:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82C42BFC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c42c58
	if (ctx.cr6.lt) goto loc_82C42C58;
	// beq cr6,0x82c42d80
	if (ctx.cr6.eq) goto loc_82C42D80;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c42c18
	if (!ctx.cr6.gt) goto loc_82C42C18;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82C42C18:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82C42C20:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c42c44
	if (!ctx.cr6.eq) goto loc_82C42C44;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42c20
	if (!ctx.cr0.eq) goto loc_82C42C20;
	// b 0x82c42c4c
	goto loc_82C42C4C;
loc_82C42C44:
	// stwcx. r9,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42C4C:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c42bfc
	if (!ctx.cr6.eq) goto loc_82C42BFC;
loc_82C42C58:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82c41630
	ctx.lr = 0x82C42C70;
	sub_82C41630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42c80
	if (!ctx.cr6.eq) goto loc_82C42C80;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
	// b 0x82c42d80
	goto loc_82C42D80;
loc_82C42C80:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_82C42C84:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42c84
	if (!ctx.cr0.eq) goto loc_82C42C84;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c42d1c
	if (ctx.cr6.eq) goto loc_82C42D1C;
loc_82C42CB4:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_82C42CBC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82C42CDC:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r4,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42d00
	if (!ctx.cr6.eq) goto loc_82C42D00;
	// stdcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42cdc
	if (!ctx.cr0.eq) goto loc_82C42CDC;
	// b 0x82c42d08
	goto loc_82C42D08;
loc_82C42D00:
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C42D08:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c42cbc
	if (!ctx.cr6.eq) goto loc_82C42CBC;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82c42cb4
	if (!ctx.cr0.eq) goto loc_82C42CB4;
loc_82C42D1C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42d78
	if (ctx.cr6.eq) goto loc_82C42D78;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_82C42D30:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c42d30
	if (!ctx.cr0.eq) goto loc_82C42D30;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x82c42d78
	if (!ctx.cr6.lt) goto loc_82C42D78;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82c42d78
	if (!ctx.cr6.gt) goto loc_82C42D78;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82c42d70
	if (!ctx.cr6.gt) goto loc_82C42D70;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_82C42D70:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c446f0
	ctx.lr = 0x82C42D78;
	sub_82C446F0(ctx, base);
loc_82C42D78:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c42dcc
	if (!ctx.cr6.eq) goto loc_82C42DCC;
loc_82C42D80:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42d90
	if (ctx.cr6.eq) goto loc_82C42D90;
	// bl 0x82c446e8
	ctx.lr = 0x82C42D90;
	sub_82C446E8(ctx, base);
loc_82C42D90:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42da0
	if (ctx.cr6.eq) goto loc_82C42DA0;
	// bl 0x82c446e8
	ctx.lr = 0x82C42DA0;
	sub_82C446E8(ctx, base);
loc_82C42DA0:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42b80
	if (ctx.cr6.eq) goto loc_82C42B80;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C42DCC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42de4
	if (ctx.cr6.eq) goto loc_82C42DE4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82C42DE4:
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r23,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r23.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r23,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r23.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C42E18"))) PPC_WEAK_FUNC(sub_82C42E18);
PPC_FUNC_IMPL(__imp__sub_82C42E18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C42E20;
	__savegprlr_22(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c42e44
	if (!ctx.cr6.eq) goto loc_82C42E44;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C42E44:
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// beq cr6,0x82c42e74
	if (ctx.cr6.eq) goto loc_82C42E74;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c42e74
	if (ctx.cr6.eq) goto loc_82C42E74;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// and r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c42e80
	if (ctx.cr6.eq) goto loc_82C42E80;
loc_82C42E74:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C42E80:
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r30,292(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
	// bl 0x82c41570
	ctx.lr = 0x82C42EA8;
	sub_82C41570(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c42fdc
	if (ctx.cr6.eq) goto loc_82C42FDC;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r3,-8
	ctx.r11.s64 = ctx.r3.s64 + -8;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C42EC4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c42ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C42EC4;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r23,88(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// addi r24,r31,60
	ctx.r24.s64 = ctx.r31.s64 + 60;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r23,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r23.u32);
	// lwz r6,12(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r5,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r5.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// stw r7,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r7.u32);
	// stw r6,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r6.u32);
	// beq cr6,0x82c42f1c
	if (ctx.cr6.eq) goto loc_82C42F1C;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82C42F1C:
	// cmpwi cr6,r29,16
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 16, ctx.xer);
	// bge cr6,0x82c42f2c
	if (!ctx.cr6.lt) goto loc_82C42F2C;
	// li r27,16
	ctx.r27.s64 = 16;
	// b 0x82c42f3c
	goto loc_82C42F3C;
loc_82C42F2C:
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c42f3c
	if (!ctx.cr6.gt) goto loc_82C42F3C;
	// lis r27,256
	ctx.r27.s64 = 16777216;
loc_82C42F3C:
	// lis r11,2047
	ctx.r11.s64 = 134152192;
	// ori r10,r11,65535
	ctx.r10.u64 = ctx.r11.u64 | 65535;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82c42fb4
	if (ctx.cr6.lt) goto loc_82C42FB4;
	// lis r28,2047
	ctx.r28.s64 = 134152192;
	// ori r28,r28,65534
	ctx.r28.u64 = ctx.r28.u64 | 65534;
loc_82C42F54:
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82c42f60
	if (!ctx.cr6.gt) goto loc_82C42F60;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82C42F60:
	// addi r29,r31,52
	ctx.r29.s64 = ctx.r31.s64 + 52;
	// stw r27,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r27.u32);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
	// beq cr6,0x82c42fe8
	if (ctx.cr6.eq) goto loc_82C42FE8;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x82c446d0
	ctx.lr = 0x82C42F7C;
	sub_82C446D0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c42fe8
	if (!ctx.cr6.eq) goto loc_82C42FE8;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42fc8
	if (ctx.cr6.eq) goto loc_82C42FC8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C42FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C42FB4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bgt cr6,0x82c42f54
	if (ctx.cr6.gt) goto loc_82C42F54;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// b 0x82c42f60
	goto loc_82C42F60;
loc_82C42FC8:
	// bl 0x82a831b0
	ctx.lr = 0x82C42FCC;
	sub_82A831B0(ctx, base);
	// bl 0x82a831b0
	ctx.lr = 0x82C42FD0;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82C42FDC;
	sub_82A81D88(ctx, base);
loc_82C42FDC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C42FE8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82c43040
	if (ctx.cr6.eq) goto loc_82C43040;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c446d0
	ctx.lr = 0x82C42FF8;
	sub_82C446D0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c43040
	if (!ctx.cr6.eq) goto loc_82C43040;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c43014
	if (ctx.cr6.eq) goto loc_82C43014;
	// bl 0x82c446e8
	ctx.lr = 0x82C43014;
	sub_82C446E8(ctx, base);
loc_82C43014:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42fc8
	if (ctx.cr6.eq) goto loc_82C42FC8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C43040:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
loc_82C43044:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c430a0
	if (ctx.cr6.lt) goto loc_82C430A0;
	// beq cr6,0x82c431c8
	if (ctx.cr6.eq) goto loc_82C431C8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82c43060
	if (!ctx.cr6.gt) goto loc_82C43060;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82C43060:
	// lwsync 
	// subf r10,r28,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r28.s64;
loc_82C43068:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c4308c
	if (!ctx.cr6.eq) goto loc_82C4308C;
	// stwcx. r10,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43068
	if (!ctx.cr0.eq) goto loc_82C43068;
	// b 0x82c43094
	goto loc_82C43094;
loc_82C4308C:
	// stwcx. r9,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43094:
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c43044
	if (!ctx.cr6.eq) goto loc_82C43044;
loc_82C430A0:
	// rlwinm r30,r28,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82c41630
	ctx.lr = 0x82C430B8;
	sub_82C41630(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c430c8
	if (!ctx.cr6.eq) goto loc_82C430C8;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
	// b 0x82c431c8
	goto loc_82C431C8;
loc_82C430C8:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
loc_82C430CC:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c430cc
	if (!ctx.cr0.eq) goto loc_82C430CC;
	// addi r7,r28,-1
	ctx.r7.s64 = ctx.r28.s64 + -1;
	// add r9,r30,r3
	ctx.r9.u64 = ctx.r30.u64 + ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82c43164
	if (ctx.cr6.eq) goto loc_82C43164;
loc_82C430FC:
	// addi r9,r9,-16
	ctx.r9.s64 = ctx.r9.s64 + -16;
	// rldicr r8,r9,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
loc_82C43104:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r5,33
	ctx.r10.u64 = ctx.r5.u64 & 0x7FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
loc_82C43124:
	// mfmsr r3
	ctx.r3.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r4,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r4.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43148
	if (!ctx.cr6.eq) goto loc_82C43148;
	// stdcx. r10,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43124
	if (!ctx.cr0.eq) goto loc_82C43124;
	// b 0x82c43150
	goto loc_82C43150;
loc_82C43148:
	// stdcx. r4,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r3,1
	ctx.msr = (ctx.r3.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43150:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpd cr6,r4,r11
	ctx.cr6.compare<int64_t>(ctx.r4.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43104
	if (!ctx.cr6.eq) goto loc_82C43104;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82c430fc
	if (!ctx.cr0.eq) goto loc_82C430FC;
loc_82C43164:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r30,r9,-16
	ctx.r30.s64 = ctx.r9.s64 + -16;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c431c0
	if (ctx.cr6.eq) goto loc_82C431C0;
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
loc_82C43178:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// add r9,r28,r10
	ctx.r9.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stwcx. r9,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43178
	if (!ctx.cr0.eq) goto loc_82C43178;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bge cr6,0x82c431c0
	if (!ctx.cr6.lt) goto loc_82C431C0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82c431c0
	if (!ctx.cr6.gt) goto loc_82C431C0;
	// not r4,r10
	ctx.r4.u64 = ~ctx.r10.u64;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82c431b8
	if (!ctx.cr6.gt) goto loc_82C431B8;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
loc_82C431B8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82c446f0
	ctx.lr = 0x82C431C0;
	sub_82C446F0(ctx, base);
loc_82C431C0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c43214
	if (!ctx.cr6.eq) goto loc_82C43214;
loc_82C431C8:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c431d8
	if (ctx.cr6.eq) goto loc_82C431D8;
	// bl 0x82c446e8
	ctx.lr = 0x82C431D8;
	sub_82C446E8(ctx, base);
loc_82C431D8:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c431e8
	if (ctx.cr6.eq) goto loc_82C431E8;
	// bl 0x82c446e8
	ctx.lr = 0x82C431E8;
	sub_82C446E8(ctx, base);
loc_82C431E8:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c42fc8
	if (ctx.cr6.eq) goto loc_82C42FC8;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C43208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82C43214:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c4322c
	if (ctx.cr6.eq) goto loc_82C4322C;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82C4322C:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// ori r10,r11,20853
	ctx.r10.u64 = ctx.r11.u64 | 20853;
	// stw r22,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r22.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// lwsync 
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43260"))) PPC_WEAK_FUNC(sub_82C43260);
PPC_FUNC_IMPL(__imp__sub_82C43260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C43268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c43394
	if (!ctx.cr6.eq) goto loc_82C43394;
loc_82C43280:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4336c
	if (ctx.cr6.eq) goto loc_82C4336C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C432B0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c432d4
	if (!ctx.cr6.eq) goto loc_82C432D4;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c432b0
	if (!ctx.cr0.eq) goto loc_82C432B0;
	// b 0x82c432dc
	goto loc_82C432DC;
loc_82C432D4:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C432DC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43280
	if (!ctx.cr6.eq) goto loc_82C43280;
loc_82C432E8:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r29,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r29.u64);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82C43308:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82c43308
	if (!ctx.cr6.eq) goto loc_82C43308;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x82c434b4
	if (!ctx.cr6.eq) goto loc_82C434B4;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82C43348:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r6
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r6.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4346c
	if (!ctx.cr6.eq) goto loc_82C4346C;
	// stdcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43348
	if (!ctx.cr0.eq) goto loc_82C43348;
	// b 0x82c43474
	goto loc_82C43474;
loc_82C4336C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c43388
	if (ctx.cr6.eq) goto loc_82C43388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42838
	ctx.lr = 0x82C43380;
	sub_82C42838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c432e8
	if (!ctx.cr6.eq) goto loc_82C432E8;
loc_82C43388:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C43394:
	// addi r30,r31,24
	ctx.r30.s64 = ctx.r31.s64 + 24;
loc_82C43398:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43398
	if (!ctx.cr0.eq) goto loc_82C43398;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c43428
	if (ctx.cr6.lt) goto loc_82C43428;
loc_82C433BC:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43428
	if (ctx.cr6.eq) goto loc_82C43428;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C433EC:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43410
	if (!ctx.cr6.eq) goto loc_82C43410;
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c433ec
	if (!ctx.cr0.eq) goto loc_82C433EC;
	// b 0x82c43418
	goto loc_82C43418;
loc_82C43410:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43418:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c433bc
	if (!ctx.cr6.eq) goto loc_82C433BC;
	// b 0x82c432e8
	goto loc_82C432E8;
loc_82C43428:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c43444
	if (ctx.cr6.eq) goto loc_82C43444;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42838
	ctx.lr = 0x82C4343C;
	sub_82C42838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c432e8
	if (!ctx.cr6.eq) goto loc_82C432E8;
loc_82C43444:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43444
	if (!ctx.cr0.eq) goto loc_82C43444;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C4346C:
	// stdcx. r5,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43474:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43308
	if (!ctx.cr6.eq) goto loc_82C43308;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82C43490:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82c434f4
	if (!ctx.cr6.eq) goto loc_82C434F4;
	// stdcx. r5,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43490
	if (!ctx.cr0.eq) goto loc_82C43490;
	// b 0x82c434fc
	goto loc_82C434FC;
loc_82C434B4:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82C434C4:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82c434e8
	if (!ctx.cr6.eq) goto loc_82C434E8;
	// stdcx. r4,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c434c4
	if (!ctx.cr0.eq) goto loc_82C434C4;
	// b 0x82c43308
	goto loc_82C43308;
loc_82C434E8:
	// stdcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82c43308
	goto loc_82C43308;
loc_82C434F4:
	// stdcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C434FC:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4351c
	if (ctx.cr6.eq) goto loc_82C4351C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c4351c
	if (!ctx.cr6.gt) goto loc_82C4351C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c446f0
	ctx.lr = 0x82C4351C;
	sub_82C446F0(ctx, base);
loc_82C4351C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43528"))) PPC_WEAK_FUNC(sub_82C43528);
PPC_FUNC_IMPL(__imp__sub_82C43528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C43530;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c43670
	if (!ctx.cr6.eq) goto loc_82C43670;
loc_82C4355C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43648
	if (ctx.cr6.eq) goto loc_82C43648;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C4358C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c435b0
	if (!ctx.cr6.eq) goto loc_82C435B0;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4358c
	if (!ctx.cr0.eq) goto loc_82C4358C;
	// b 0x82c435b8
	goto loc_82C435B8;
loc_82C435B0:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C435B8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4355c
	if (!ctx.cr6.eq) goto loc_82C4355C;
loc_82C435C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// std r23,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r23.u64);
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r11,r10,1
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
loc_82C435E4:
	// ld r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// ld r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 0);
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// cmpd cr6,r10,r9
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r9.s64, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bne cr6,0x82c435e4
	if (!ctx.cr6.eq) goto loc_82C435E4;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwsync 
	// bne cr6,0x82c4392c
	if (!ctx.cr6.eq) goto loc_82C4392C;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r3,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
loc_82C43624:
	// mfmsr r4
	ctx.r4.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r5,0,r6
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r6.u32);
	ctx.r5.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c438e4
	if (!ctx.cr6.eq) goto loc_82C438E4;
	// stdcx. r8,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43624
	if (!ctx.cr0.eq) goto loc_82C43624;
	// b 0x82c438ec
	goto loc_82C438EC;
loc_82C43648:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c43664
	if (ctx.cr6.eq) goto loc_82C43664;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42838
	ctx.lr = 0x82C4365C;
	sub_82C42838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c435c4
	if (!ctx.cr6.eq) goto loc_82C435C4;
loc_82C43664:
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C43670:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r25,r31,24
	ctx.r25.s64 = ctx.r31.s64 + 24;
loc_82C4367C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4367c
	if (!ctx.cr0.eq) goto loc_82C4367C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82c4370c
	if (ctx.cr6.lt) goto loc_82C4370C;
loc_82C436A0:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4370c
	if (ctx.cr6.eq) goto loc_82C4370C;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// rldicr r9,r10,32,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82C436D0:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c436f4
	if (!ctx.cr6.eq) goto loc_82C436F4;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c436d0
	if (!ctx.cr0.eq) goto loc_82C436D0;
	// b 0x82c436fc
	goto loc_82C436FC;
loc_82C436F4:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C436FC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c436a0
	if (!ctx.cr6.eq) goto loc_82C436A0;
	// b 0x82c435c4
	goto loc_82C435C4;
loc_82C4370C:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c43728
	if (ctx.cr6.eq) goto loc_82C43728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c42838
	ctx.lr = 0x82C43720;
	sub_82C42838(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c435c4
	if (!ctx.cr6.eq) goto loc_82C435C4;
loc_82C43728:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82c437d0
	if (ctx.cr6.eq) goto loc_82C437D0;
	// li r8,1000
	ctx.r8.s64 = 1000;
loc_82C43734:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C4373C:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c4373c
	if (!ctx.cr0.lt) goto loc_82C4373C;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82c43758
	if (ctx.cr6.gt) goto loc_82C43758;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C43758:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C4375C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c437c8
	if (ctx.cr6.eq) goto loc_82C437C8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C4378C:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c437b0
	if (!ctx.cr6.eq) goto loc_82C437B0;
	// stdcx. r5,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4378c
	if (!ctx.cr0.eq) goto loc_82C4378C;
	// b 0x82c437b8
	goto loc_82C437B8;
loc_82C437B0:
	// stdcx. r7,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C437B8:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c4375c
	if (!ctx.cr6.eq) goto loc_82C4375C;
	// b 0x82c435c4
	goto loc_82C435C4;
loc_82C437C8:
	// addic. r8,r8,-1
	ctx.xer.ca = ctx.r8.u32 > 0;
	ctx.r8.s64 = ctx.r8.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82c43734
	if (!ctx.cr0.eq) goto loc_82C43734;
loc_82C437D0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c435c4
	if (!ctx.cr6.eq) goto loc_82C435C4;
loc_82C437D8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82c43808
	if (ctx.cr6.eq) goto loc_82C43808;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C437E8:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c437e8
	if (!ctx.cr0.lt) goto loc_82C437E8;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82c43804
	if (ctx.cr6.gt) goto loc_82C43804;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C43804:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C43808:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c43834
	if (!ctx.cr6.eq) goto loc_82C43834;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c43824
	if (!ctx.cr6.eq) goto loc_82C43824;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82c4384c
	goto loc_82C4384C;
loc_82C43824:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c44748
	ctx.lr = 0x82C43830;
	sub_82C44748(ctx, base);
	// b 0x82c4384c
	goto loc_82C4384C;
loc_82C43834:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x82C4384C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4384C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c438c0
	if (!ctx.cr6.eq) goto loc_82C438C0;
loc_82C43854:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c437d8
	if (ctx.cr6.eq) goto loc_82C437D8;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C43884:
	// mfmsr r7
	ctx.r7.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r31
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r31.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c438a8
	if (!ctx.cr6.eq) goto loc_82C438A8;
	// stdcx. r6,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43884
	if (!ctx.cr0.eq) goto loc_82C43884;
	// b 0x82c438b0
	goto loc_82C438B0;
loc_82C438A8:
	// stdcx. r8,0,r31
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r31.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r7,1
	ctx.msr = (ctx.r7.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C438B0:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// cmpd cr6,r8,r11
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43854
	if (!ctx.cr6.eq) goto loc_82C43854;
	// b 0x82c435c4
	goto loc_82C435C4;
loc_82C438C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r25
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r25.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r25
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r25.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c438c0
	if (!ctx.cr0.eq) goto loc_82C438C0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C438E4:
	// stdcx. r5,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r6.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r4,1
	ctx.msr = (ctx.r4.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C438EC:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// cmpd cr6,r5,r11
	ctx.cr6.compare<int64_t>(ctx.r5.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c435e4
	if (!ctx.cr6.eq) goto loc_82C435E4;
	// lwsync 
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrldi r11,r11,33
	ctx.r11.u64 = ctx.r11.u64 & 0x7FFFFFFF;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82C43908:
	// mfmsr r6
	ctx.r6.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r8,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r8.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r8,r10
	ctx.cr6.compare<int64_t>(ctx.r8.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82c4396c
	if (!ctx.cr6.eq) goto loc_82C4396C;
	// stdcx. r5,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r5.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43908
	if (!ctx.cr0.eq) goto loc_82C43908;
	// b 0x82c43974
	goto loc_82C43974;
loc_82C4392C:
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// rldicr r11,r9,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r8,33
	ctx.r9.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82C4393C:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r7
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r7.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r10
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r10.s64, ctx.xer);
	// bne cr6,0x82c43960
	if (!ctx.cr6.eq) goto loc_82C43960;
	// stdcx. r4,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c4393c
	if (!ctx.cr0.eq) goto loc_82C4393C;
	// b 0x82c435e4
	goto loc_82C435E4;
loc_82C43960:
	// stdcx. r6,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82c435e4
	goto loc_82C435E4;
loc_82C4396C:
	// stdcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r7.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r8.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r6,1
	ctx.msr = (ctx.r6.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43974:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c43994
	if (ctx.cr6.eq) goto loc_82C43994;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c43994
	if (!ctx.cr6.gt) goto loc_82C43994;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82c446f0
	ctx.lr = 0x82C43994;
	sub_82C446F0(ctx, base);
loc_82C43994:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C439A0"))) PPC_WEAK_FUNC(sub_82C439A0);
PPC_FUNC_IMPL(__imp__sub_82C439A0) {
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
	// addi r5,r3,8
	ctx.r5.s64 = ctx.r3.s64 + 8;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
loc_82C439BC:
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// ld r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// ld r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// cmpd cr6,r11,r7
	ctx.cr6.compare<int64_t>(ctx.r11.s64, ctx.r7.s64, ctx.xer);
	// bne cr6,0x82c439bc
	if (!ctx.cr6.eq) goto loc_82C439BC;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82c43a38
	if (!ctx.cr6.eq) goto loc_82C43A38;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43adc
	if (ctx.cr6.eq) goto loc_82C43ADC;
	// lwsync 
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// rldicr r11,r10,32,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r10,r7,33
	ctx.r10.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C43A08:
	// mfmsr r31
	ctx.r31.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r5
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r5.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r9
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r9.s64, ctx.xer);
	// bne cr6,0x82c43a2c
	if (!ctx.cr6.eq) goto loc_82C43A2C;
	// stdcx. r11,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r11.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43a08
	if (!ctx.cr0.eq) goto loc_82C43A08;
	// b 0x82c439bc
	goto loc_82C439BC;
loc_82C43A2C:
	// stdcx. r6,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r5.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r31,1
	ctx.msr = (ctx.r31.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82c439bc
	goto loc_82C439BC;
loc_82C43A38:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c439bc
	if (ctx.cr6.eq) goto loc_82C439BC;
	// ld r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// lwsync 
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r10,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 & 0x7FFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C43A58:
	// mfmsr r30
	ctx.r30.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r31,0,r8
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r8.u32);
	ctx.r31.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43a7c
	if (!ctx.cr6.eq) goto loc_82C43A7C;
	// stdcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r10.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	ctx.msr = (ctx.r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43a58
	if (!ctx.cr0.eq) goto loc_82C43A58;
	// b 0x82c43a84
	goto loc_82C43A84;
loc_82C43A7C:
	// stdcx. r31,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r31.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r30,1
	ctx.msr = (ctx.r30.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43A84:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// cmpd cr6,r31,r11
	ctx.cr6.compare<int64_t>(ctx.r31.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c439bc
	if (!ctx.cr6.eq) goto loc_82C439BC;
	// std r7,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r7.u64);
	// rldicr r9,r6,32,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000;
loc_82C43A98:
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r10.u32);
	// lwsync 
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrldi r10,r8,33
	ctx.r10.u64 = ctx.r8.u64 & 0x7FFFFFFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C43AB8:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r7,0,r3
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r3.u32);
	ctx.r7.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43ae4
	if (!ctx.cr6.eq) goto loc_82C43AE4;
	// stdcx. r4,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43ab8
	if (!ctx.cr0.eq) goto loc_82C43AB8;
	// b 0x82c43aec
	goto loc_82C43AEC;
loc_82C43ADC:
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82c43b40
	goto loc_82C43B40;
loc_82C43AE4:
	// stdcx. r7,0,r3
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r3.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r7.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C43AEC:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// cmpd cr6,r7,r11
	ctx.cr6.compare<int64_t>(ctx.r7.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c43a98
	if (!ctx.cr6.eq) goto loc_82C43A98;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43b3c
	if (ctx.cr6.eq) goto loc_82C43B3C;
	// addi r11,r3,24
	ctx.r11.s64 = ctx.r3.s64 + 24;
loc_82C43B08:
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
	// bne 0x82c43b08
	if (!ctx.cr0.eq) goto loc_82C43B08;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bgt cr6,0x82c43b3c
	if (ctx.cr6.gt) goto loc_82C43B3C;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x82c446f0
	ctx.lr = 0x82C43B3C;
	sub_82C446F0(ctx, base);
loc_82C43B3C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C43B40:
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

__attribute__((alias("__imp__sub_82C43B58"))) PPC_WEAK_FUNC(sub_82C43B58);
PPC_FUNC_IMPL(__imp__sub_82C43B58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C43B60;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c43b9c
	if (!ctx.cr6.eq) goto loc_82C43B9C;
	// bl 0x82c439a0
	ctx.lr = 0x82C43B94;
	sub_82C439A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C43B9C:
	// bl 0x82c439a0
	ctx.lr = 0x82C43BA0;
	sub_82C439A0(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82c43cd8
	if (!ctx.cr6.eq) goto loc_82C43CD8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82c43bf8
	if (ctx.cr6.eq) goto loc_82C43BF8;
	// li r29,1000
	ctx.r29.s64 = 1000;
loc_82C43BB4:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C43BBC:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c43bbc
	if (!ctx.cr0.lt) goto loc_82C43BBC;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82c43bd8
	if (ctx.cr6.gt) goto loc_82C43BD8;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C43BD8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82c439a0
	ctx.lr = 0x82C43BE8;
	sub_82C439A0(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82c43cd8
	if (!ctx.cr6.eq) goto loc_82C43CD8;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82c43bb4
	if (!ctx.cr0.eq) goto loc_82C43BB4;
loc_82C43BF8:
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_82C43BFC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43bfc
	if (!ctx.cr0.eq) goto loc_82C43BFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c439a0
	ctx.lr = 0x82C43C24;
	sub_82C439A0(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// bne cr6,0x82c43cbc
	if (!ctx.cr6.eq) goto loc_82C43CBC;
loc_82C43C2C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82c43c5c
	if (ctx.cr6.eq) goto loc_82C43C5C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82C43C3C:
	// db16cyc 
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82c43c3c
	if (!ctx.cr0.lt) goto loc_82C43C3C;
	// cmpwi cr6,r30,511
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 511, ctx.xer);
	// bgt cr6,0x82c43c58
	if (ctx.cr6.gt) goto loc_82C43C58;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
loc_82C43C58:
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_82C43C5C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82c43c88
	if (!ctx.cr6.eq) goto loc_82C43C88;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c43c78
	if (!ctx.cr6.eq) goto loc_82C43C78;
	// li r3,258
	ctx.r3.s64 = 258;
	// b 0x82c43ca0
	goto loc_82C43CA0;
loc_82C43C78:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c44748
	ctx.lr = 0x82C43C84;
	sub_82C44748(ctx, base);
	// b 0x82c43ca0
	goto loc_82C43CA0;
loc_82C43C88:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82C43CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C43CA0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c43ce0
	if (!ctx.cr6.eq) goto loc_82C43CE0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c439a0
	ctx.lr = 0x82C43CB4;
	sub_82C439A0(ctx, base);
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82c43c2c
	if (ctx.cr6.eq) goto loc_82C43C2C;
loc_82C43CBC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43cbc
	if (!ctx.cr0.eq) goto loc_82C43CBC;
loc_82C43CD8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82C43CE0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r29
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r29.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r29
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r29.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43ce0
	if (!ctx.cr0.eq) goto loc_82C43CE0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43D04"))) PPC_WEAK_FUNC(sub_82C43D04);
PPC_FUNC_IMPL(__imp__sub_82C43D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43D08"))) PPC_WEAK_FUNC(sub_82C43D08);
PPC_FUNC_IMPL(__imp__sub_82C43D08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,24960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24960);
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43D18"))) PPC_WEAK_FUNC(sub_82C43D18);
PPC_FUNC_IMPL(__imp__sub_82C43D18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,24960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24960);
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43D28"))) PPC_WEAK_FUNC(sub_82C43D28);
PPC_FUNC_IMPL(__imp__sub_82C43D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lwz r4,24960(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24960);
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43D34"))) PPC_WEAK_FUNC(sub_82C43D34);
PPC_FUNC_IMPL(__imp__sub_82C43D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43D38"))) PPC_WEAK_FUNC(sub_82C43D38);
PPC_FUNC_IMPL(__imp__sub_82C43D38) {
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
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// beq cr6,0x82c43e24
	if (ctx.cr6.eq) goto loc_82C43E24;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c43e24
	if (!ctx.cr6.eq) goto loc_82C43E24;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43df8
	if (ctx.cr6.eq) goto loc_82C43DF8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c43df8
	if (ctx.cr6.eq) goto loc_82C43DF8;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c43528
	ctx.lr = 0x82C43DAC;
	sub_82C43528(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c43dc8
	if (ctx.cr6.eq) goto loc_82C43DC8;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82c43dec
	if (ctx.cr6.eq) goto loc_82C43DEC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82c43de0
	if (ctx.cr6.gt) goto loc_82C43DE0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C43DC8:
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
loc_82C43DE0:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82c43dc8
	goto loc_82C43DC8;
loc_82C43DEC:
	// lis r31,-32719
	ctx.r31.s64 = -2144272384;
	// ori r31,r31,1
	ctx.r31.u64 = ctx.r31.u64 | 1;
	// b 0x82c43dc8
	goto loc_82C43DC8;
loc_82C43DF8:
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c43260
	ctx.lr = 0x82C43E00;
	sub_82C43260(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c43dc8
	if (!ctx.cr6.eq) goto loc_82C43DC8;
	// lis r3,-32719
	ctx.r3.s64 = -2144272384;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
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
loc_82C43E24:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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

__attribute__((alias("__imp__sub_82C43E40"))) PPC_WEAK_FUNC(sub_82C43E40);
PPC_FUNC_IMPL(__imp__sub_82C43E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C43E48;
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
	// bne cr6,0x82c43e6c
	if (!ctx.cr6.eq) goto loc_82C43E6C;
loc_82C43E5C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C43E6C:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r7,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82c43f64
	if (ctx.cr6.eq) goto loc_82C43F64;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x82c43e5c
	if (!ctx.cr6.eq) goto loc_82C43E5C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r9,-32060
	ctx.r9.s64 = -2101084160;
	// lis r10,-32060
	ctx.r10.s64 = -2101084160;
	// addi r9,r9,15624
	ctx.r9.s64 = ctx.r9.s64 + 15624;
	// addi r10,r10,15640
	ctx.r10.s64 = ctx.r10.s64 + 15640;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c43eb8
	if (ctx.cr6.eq) goto loc_82C43EB8;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c43e5c
	if (ctx.cr6.eq) goto loc_82C43E5C;
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82C43EB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r8,r11,0,23,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c43f10
	if (!ctx.cr6.eq) goto loc_82C43F10;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c43f10
	if (!ctx.cr6.eq) goto loc_82C43F10;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c43f10
	if (!ctx.cr6.eq) goto loc_82C43F10;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c43f10
	if (!ctx.cr6.eq) goto loc_82C43F10;
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c43f10
	if (!ctx.cr6.eq) goto loc_82C43F10;
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82c43f10
	if (!ctx.cr6.eq) goto loc_82C43F10;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c43f50
	if (ctx.cr6.eq) goto loc_82C43F50;
loc_82C43F10:
	// li r8,28
	ctx.r8.s64 = 28;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// bl 0x82c42e18
	ctx.lr = 0x82C43F30;
	sub_82C42E18(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c43f9c
	if (ctx.cr6.eq) goto loc_82C43F9C;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C43F4C;
	sub_82FA77C0(ctx, base);
	// b 0x82c43f94
	goto loc_82C43F94;
loc_82C43F50:
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// rlwinm r6,r11,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r5,r11,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// b 0x82c43f88
	goto loc_82C43F88;
loc_82C43F64:
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// lis r9,-32060
	ctx.r9.s64 = -2101084160;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// addi r9,r9,15624
	ctx.r9.s64 = ctx.r9.s64 + 15624;
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
loc_82C43F88:
	// li r8,16
	ctx.r8.s64 = 16;
	// bl 0x82c429e8
	ctx.lr = 0x82C43F90;
	sub_82C429E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C43F94:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c43fac
	if (!ctx.cr6.eq) goto loc_82C43FAC;
loc_82C43F9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C43FAC:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C43FBC"))) PPC_WEAK_FUNC(sub_82C43FBC);
PPC_FUNC_IMPL(__imp__sub_82C43FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C43FC0"))) PPC_WEAK_FUNC(sub_82C43FC0);
PPC_FUNC_IMPL(__imp__sub_82C43FC0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4405c
	if (ctx.cr6.eq) goto loc_82C4405C;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,64
	ctx.r8.s64 = ctx.r3.s64 + 64;
loc_82C43FE4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c43fe4
	if (!ctx.cr0.eq) goto loc_82C43FE4;
	// lis r7,19558
	ctx.r7.s64 = 1281753088;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r6,r7,20853
	ctx.r6.u64 = ctx.r7.u64 | 20853;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c4405c
	if (!ctx.cr6.eq) goto loc_82C4405C;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44020
	if (ctx.cr6.eq) goto loc_82C44020;
	// bl 0x82c446e8
	ctx.lr = 0x82C44020;
	sub_82C446E8(ctx, base);
loc_82C44020:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44030
	if (ctx.cr6.eq) goto loc_82C44030;
	// bl 0x82c446e8
	ctx.lr = 0x82C44030;
	sub_82C446E8(ctx, base);
loc_82C44030:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c41700
	ctx.lr = 0x82C44048;
	sub_82C41700(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82c414d0
	ctx.lr = 0x82C44058;
	sub_82C414D0(ctx, base);
	// lwsync 
loc_82C4405C:
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

__attribute__((alias("__imp__sub_82C44070"))) PPC_WEAK_FUNC(sub_82C44070);
PPC_FUNC_IMPL(__imp__sub_82C44070) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44134
	if (ctx.cr6.eq) goto loc_82C44134;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c44134
	if (!ctx.cr6.eq) goto loc_82C44134;
	// addi r8,r3,8
	ctx.r8.s64 = ctx.r3.s64 + 8;
loc_82C44090:
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// ld r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwz r7,-16(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// lwz r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// ld r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// cmpd cr6,r10,r6
	ctx.cr6.compare<int64_t>(ctx.r10.s64, ctx.r6.s64, ctx.xer);
	// bne cr6,0x82c44090
	if (!ctx.cr6.eq) goto loc_82C44090;
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c4410c
	if (!ctx.cr6.eq) goto loc_82C4410C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c44120
	if (ctx.cr6.eq) goto loc_82C44120;
	// lwsync 
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// rldicr r10,r9,32,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000;
	// clrldi r9,r7,33
	ctx.r9.u64 = ctx.r7.u64 & 0x7FFFFFFF;
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82C440DC:
	// mfmsr r5
	ctx.r5.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// ldarx r6,0,r8
	ctx.reserved.u64 = *(uint64_t*)(base + ctx.r8.u32);
	ctx.r6.u64 = __builtin_bswap64(ctx.reserved.u64);
	// cmpd cr6,r6,r11
	ctx.cr6.compare<int64_t>(ctx.r6.s64, ctx.r11.s64, ctx.xer);
	// bne cr6,0x82c44100
	if (!ctx.cr6.eq) goto loc_82C44100;
	// stdcx. r4,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r4.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c440dc
	if (!ctx.cr0.eq) goto loc_82C440DC;
	// b 0x82c44090
	goto loc_82C44090;
loc_82C44100:
	// stdcx. r6,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint64_t*>(base + ctx.r8.u32), ctx.reserved.s64, __builtin_bswap64(ctx.r6.s64));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r5,1
	ctx.msr = (ctx.r5.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82c44090
	goto loc_82C44090;
loc_82C4410C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r11,r11,-258
	ctx.r11.s64 = ctx.r11.s64 + -258;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82C44120:
	// li r11,258
	ctx.r11.s64 = 258;
	// addi r11,r11,-258
	ctx.r11.s64 = ctx.r11.s64 + -258;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r10,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_82C44134:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4413C"))) PPC_WEAK_FUNC(sub_82C4413C);
PPC_FUNC_IMPL(__imp__sub_82C4413C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C44140"))) PPC_WEAK_FUNC(sub_82C44140);
PPC_FUNC_IMPL(__imp__sub_82C44140) {
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
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82c44224
	if (ctx.cr6.eq) goto loc_82C44224;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// ori r9,r11,20853
	ctx.r9.u64 = ctx.r11.u64 | 20853;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c44224
	if (!ctx.cr6.eq) goto loc_82C44224;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c441c4
	if (ctx.cr6.eq) goto loc_82C441C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c441c4
	if (ctx.cr6.eq) goto loc_82C441C4;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c43b58
	ctx.lr = 0x82C441C0;
	sub_82C43B58(ctx, base);
	// b 0x82c441cc
	goto loc_82C441CC;
loc_82C441C4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c439a0
	ctx.lr = 0x82C441CC;
	sub_82C439A0(ctx, base);
loc_82C441CC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c441f0
	if (ctx.cr6.eq) goto loc_82C441F0;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82c44214
	if (ctx.cr6.eq) goto loc_82C44214;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82c44208
	if (ctx.cr6.gt) goto loc_82C44208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C441E8:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c44200
	if (ctx.cr6.lt) goto loc_82C44200;
loc_82C441F0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c44200
	if (ctx.cr6.eq) goto loc_82C44200;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82C44200:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c4422c
	goto loc_82C4422C;
loc_82C44208:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82c441e8
	goto loc_82C441E8;
loc_82C44214:
	// lis r31,-32719
	ctx.r31.s64 = -2144272384;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c4422c
	goto loc_82C4422C;
loc_82C44224:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82C4422C:
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

__attribute__((alias("__imp__sub_82C44244"))) PPC_WEAK_FUNC(sub_82C44244);
PPC_FUNC_IMPL(__imp__sub_82C44244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C44248"))) PPC_WEAK_FUNC(sub_82C44248);
PPC_FUNC_IMPL(__imp__sub_82C44248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C44250;
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
	// bne cr6,0x82c44274
	if (!ctx.cr6.eq) goto loc_82C44274;
loc_82C44264:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C44274:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// beq cr6,0x82c443b0
	if (ctx.cr6.eq) goto loc_82C443B0;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,52
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 52, ctx.xer);
	// bne cr6,0x82c44264
	if (!ctx.cr6.eq) goto loc_82C44264;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// lis r9,-32060
	ctx.r9.s64 = -2101084160;
	// addi r11,r11,15624
	ctx.r11.s64 = ctx.r11.s64 + 15624;
	// addi r9,r9,15640
	ctx.r9.s64 = ctx.r9.s64 + 15640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c442c0
	if (ctx.cr6.eq) goto loc_82C442C0;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c44264
	if (ctx.cr6.eq) goto loc_82C44264;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82C442C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r7,r10,0,23,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c44318
	if (!ctx.cr6.eq) goto loc_82C44318;
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c44318
	if (!ctx.cr6.eq) goto loc_82C44318;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c44318
	if (!ctx.cr6.eq) goto loc_82C44318;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c44318
	if (!ctx.cr6.eq) goto loc_82C44318;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c44318
	if (!ctx.cr6.eq) goto loc_82C44318;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82c44318
	if (!ctx.cr6.eq) goto loc_82C44318;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c44378
	if (ctx.cr6.eq) goto loc_82C44378;
loc_82C44318:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r10,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// rlwinm r5,r10,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// li r8,28
	ctx.r8.s64 = 28;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82c419b8
	ctx.lr = 0x82C44358;
	sub_82C419B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r3,68(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C44374;
	sub_82FA77C0(ctx, base);
	// b 0x82c44414
	goto loc_82C44414;
loc_82C44378:
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r6,r10,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// rlwinm r5,r10,29,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// b 0x82c44404
	goto loc_82C44404;
loc_82C443B0:
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lis r10,-32060
	ctx.r10.s64 = -2101084160;
	// lis r9,-32060
	ctx.r9.s64 = -2101084160;
	// addi r8,r11,15624
	ctx.r8.s64 = ctx.r11.s64 + 15624;
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r10,15624
	ctx.r6.s64 = ctx.r10.s64 + 15624;
	// addi r5,r9,15640
	ctx.r5.s64 = ctx.r9.s64 + 15640;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// lis r11,-32060
	ctx.r11.s64 = -2101084160;
	// addi r10,r11,15640
	ctx.r10.s64 = ctx.r11.s64 + 15640;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4441c
	if (ctx.cr6.eq) goto loc_82C4441C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C44404:
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82c419b8
	ctx.lr = 0x82C44410;
	sub_82C419B8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44414:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c4442c
	if (!ctx.cr6.eq) goto loc_82C4442C;
loc_82C4441C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,8
	ctx.r3.u64 = ctx.r3.u64 | 8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C4442C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4443C"))) PPC_WEAK_FUNC(sub_82C4443C);
PPC_FUNC_IMPL(__imp__sub_82C4443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C44440"))) PPC_WEAK_FUNC(sub_82C44440);
PPC_FUNC_IMPL(__imp__sub_82C44440) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c444dc
	if (ctx.cr6.eq) goto loc_82C444DC;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r3,56
	ctx.r8.s64 = ctx.r3.s64 + 56;
loc_82C44464:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c44464
	if (!ctx.cr0.eq) goto loc_82C44464;
	// lis r7,19558
	ctx.r7.s64 = 1281753088;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// ori r6,r7,21364
	ctx.r6.u64 = ctx.r7.u64 | 21364;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82c444dc
	if (!ctx.cr6.eq) goto loc_82C444DC;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c444a0
	if (ctx.cr6.eq) goto loc_82C444A0;
	// bl 0x82a756a0
	ctx.lr = 0x82C444A0;
	sub_82A756A0(ctx, base);
loc_82C444A0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c444b0
	if (ctx.cr6.eq) goto loc_82C444B0;
	// bl 0x82a756a0
	ctx.lr = 0x82C444B0;
	sub_82A756A0(ctx, base);
loc_82C444B0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82c41700
	ctx.lr = 0x82C444C8;
	sub_82C41700(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x82c414d0
	ctx.lr = 0x82C444D8;
	sub_82C414D0(ctx, base);
	// lwsync 
loc_82C444DC:
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

__attribute__((alias("__imp__sub_82C444F0"))) PPC_WEAK_FUNC(sub_82C444F0);
PPC_FUNC_IMPL(__imp__sub_82C444F0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82c445c8
	if (ctx.cr6.eq) goto loc_82C445C8;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r9,r11,21364
	ctx.r9.u64 = ctx.r11.u64 | 21364;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c445c8
	if (!ctx.cr6.eq) goto loc_82C445C8;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c445ac
	if (ctx.cr6.eq) goto loc_82C445AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c445ac
	if (ctx.cr6.eq) goto loc_82C445AC;
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r10,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwz r6,24(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82c42400
	ctx.lr = 0x82C44564;
	sub_82C42400(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44588
	if (ctx.cr6.eq) goto loc_82C44588;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82c445b8
	if (ctx.cr6.eq) goto loc_82C445B8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82c445a0
	if (ctx.cr6.gt) goto loc_82C445A0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C44580:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c44598
	if (ctx.cr6.lt) goto loc_82C44598;
loc_82C44588:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C4458C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c44598
	if (ctx.cr6.eq) goto loc_82C44598;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
loc_82C44598:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c445d0
	goto loc_82C445D0;
loc_82C445A0:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82c44580
	goto loc_82C44580;
loc_82C445AC:
	// bl 0x82c422b0
	ctx.lr = 0x82C445B0;
	sub_82C422B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c4458c
	if (!ctx.cr6.eq) goto loc_82C4458C;
loc_82C445B8:
	// lis r31,-32719
	ctx.r31.s64 = -2144272384;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82c445d0
	goto loc_82C445D0;
loc_82C445C8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82C445D0:
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

__attribute__((alias("__imp__sub_82C445E8"))) PPC_WEAK_FUNC(sub_82C445E8);
PPC_FUNC_IMPL(__imp__sub_82C445E8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c446b4
	if (ctx.cr6.eq) goto loc_82C446B4;
	// lis r11,19558
	ctx.r11.s64 = 1281753088;
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// ori r9,r11,21364
	ctx.r9.u64 = ctx.r11.u64 | 21364;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82c446b4
	if (!ctx.cr6.eq) goto loc_82C446B4;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c4468c
	if (ctx.cr6.eq) goto loc_82C4468C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4468c
	if (ctx.cr6.eq) goto loc_82C4468C;
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,28,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// lwz r6,20(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82c41ee0
	ctx.lr = 0x82C4464C;
	sub_82C41EE0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44668
	if (ctx.cr6.eq) goto loc_82C44668;
	// cmplwi cr6,r3,258
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 258, ctx.xer);
	// beq cr6,0x82c44698
	if (ctx.cr6.eq) goto loc_82C44698;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82c44680
	if (ctx.cr6.gt) goto loc_82C44680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C44668:
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
loc_82C44680:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x82c44668
	goto loc_82C44668;
loc_82C4468C:
	// bl 0x82c41cc0
	ctx.lr = 0x82C44690;
	sub_82C41CC0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c44668
	if (!ctx.cr6.eq) goto loc_82C44668;
loc_82C44698:
	// lis r3,-32719
	ctx.r3.s64 = -2144272384;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
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
loc_82C446B4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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

__attribute__((alias("__imp__sub_82C446D0"))) PPC_WEAK_FUNC(sub_82C446D0);
PPC_FUNC_IMPL(__imp__sub_82C446D0) {
	PPC_FUNC_PROLOGUE();
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
	// b 0x82a833d0
	sub_82A833D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C446E8"))) PPC_WEAK_FUNC(sub_82C446E8);
PPC_FUNC_IMPL(__imp__sub_82C446E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a756a0
	sub_82A756A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C446EC"))) PPC_WEAK_FUNC(sub_82C446EC);
PPC_FUNC_IMPL(__imp__sub_82C446EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C446F0"))) PPC_WEAK_FUNC(sub_82C446F0);
PPC_FUNC_IMPL(__imp__sub_82C446F0) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82a83468
	ctx.lr = 0x82C44704;
	sub_82A83468(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c44730
	if (!ctx.cr6.eq) goto loc_82C44730;
	// bl 0x82a78478
	ctx.lr = 0x82C44710;
	sub_82A78478(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c44734
	if (!ctx.cr6.gt) goto loc_82C44734;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C44730:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C44734:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C44744"))) PPC_WEAK_FUNC(sub_82C44744);
PPC_FUNC_IMPL(__imp__sub_82C44744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C44748"))) PPC_WEAK_FUNC(sub_82C44748);
PPC_FUNC_IMPL(__imp__sub_82C44748) {
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
	// bne cr6,0x82c44770
	if (!ctx.cr6.eq) goto loc_82C44770;
	// li r3,258
	ctx.r3.s64 = 258;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82C44770:
	// bl 0x82a84140
	ctx.lr = 0x82C44774;
	sub_82A84140(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82c44784
	if (!ctx.cr6.gt) goto loc_82C44784;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_82C44784:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C44794"))) PPC_WEAK_FUNC(sub_82C44794);
PPC_FUNC_IMPL(__imp__sub_82C44794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C44798"))) PPC_WEAK_FUNC(sub_82C44798);
PPC_FUNC_IMPL(__imp__sub_82C44798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C447A8"))) PPC_WEAK_FUNC(sub_82C447A8);
PPC_FUNC_IMPL(__imp__sub_82C447A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C447B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C447D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c44840
	if (ctx.cr6.lt) goto loc_82C44840;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c44818
	if (ctx.cr6.eq) goto loc_82C44818;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C44818:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82c44844
	if (ctx.cr6.lt) goto loc_82C44844;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c44844
	if (ctx.cr6.eq) goto loc_82C44844;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82c45c68
	ctx.lr = 0x82C44838;
	sub_82C45C68(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C44840:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C44844:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c44868
	if (ctx.cr6.eq) goto loc_82C44868;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44860;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82C44868:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c44884
	if (ctx.cr6.eq) goto loc_82C44884;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C44884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44884:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C44890"))) PPC_WEAK_FUNC(sub_82C44890);
PPC_FUNC_IMPL(__imp__sub_82C44890) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C44898;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C448D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c44990
	if (ctx.cr6.lt) goto loc_82C44990;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c44914
	if (ctx.cr6.eq) goto loc_82C44914;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4490C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82C44914:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82c44994
	if (ctx.cr6.lt) goto loc_82C44994;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c4494c
	if (ctx.cr6.eq) goto loc_82C4494C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C44940;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C4494C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82c44994
	if (ctx.cr6.lt) goto loc_82C44994;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44994
	if (ctx.cr6.eq) goto loc_82C44994;
	// bl 0x82c46238
	ctx.lr = 0x82C44964;
	sub_82C46238(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82c46240
	ctx.lr = 0x82C44970;
	sub_82C46240(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82c460c0
	ctx.lr = 0x82C4497C;
	sub_82C460C0(ctx, base);
	// stfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82c460b8
	ctx.lr = 0x82C44988;
	sub_82C460B8(ctx, base);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_82C44990:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82C44994:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c449b8
	if (ctx.cr6.eq) goto loc_82C449B8;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C449B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_82C449B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c449d4
	if (ctx.cr6.eq) goto loc_82C449D4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C449D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C449D4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C449E0"))) PPC_WEAK_FUNC(sub_82C449E0);
PPC_FUNC_IMPL(__imp__sub_82C449E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C449F0"))) PPC_WEAK_FUNC(sub_82C449F0);
PPC_FUNC_IMPL(__imp__sub_82C449F0) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c44a44
	if (ctx.cr6.lt) goto loc_82C44A44;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c44a38
	if (!ctx.cr6.eq) goto loc_82C44A38;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82C44A38:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82C44A44:
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

__attribute__((alias("__imp__sub_82C44A58"))) PPC_WEAK_FUNC(sub_82C44A58);
PPC_FUNC_IMPL(__imp__sub_82C44A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C44A68"))) PPC_WEAK_FUNC(sub_82C44A68);
PPC_FUNC_IMPL(__imp__sub_82C44A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82C44A70;
	__savegprlr_17(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,296
	ctx.r3.s64 = 296;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// bl 0x82c4a520
	ctx.lr = 0x82C44A9C;
	sub_82C4A520(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44ab0
	if (ctx.cr6.eq) goto loc_82C44AB0;
	// bl 0x82c4a530
	ctx.lr = 0x82C44AA8;
	sub_82C4A530(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x82c44ab4
	goto loc_82C44AB4;
loc_82C44AB0:
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
loc_82C44AB4:
	// li r3,344
	ctx.r3.s64 = 344;
	// bl 0x82c49808
	ctx.lr = 0x82C44ABC;
	sub_82C49808(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44ad0
	if (ctx.cr6.eq) goto loc_82C44AD0;
	// bl 0x82c49f38
	ctx.lr = 0x82C44AC8;
	sub_82C49F38(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// b 0x82c44ad4
	goto loc_82C44AD4;
loc_82C44AD0:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
loc_82C44AD4:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// ori r29,r11,14
	ctx.r29.u64 = ctx.r11.u64 | 14;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82c44b04
	if (ctx.cr6.eq) goto loc_82C44B04;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82c44b08
	if (!ctx.cr6.eq) goto loc_82C44B08;
loc_82C44B04:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82C44B08:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c44b6c
	if (ctx.cr6.eq) goto loc_82C44B6C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44b6c
	if (ctx.cr6.lt) goto loc_82C44B6C;
	// li r3,680
	ctx.r3.s64 = 680;
	// bl 0x82c485b0
	ctx.lr = 0x82C44B20;
	sub_82C485B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44b34
	if (ctx.cr6.eq) goto loc_82C44B34;
	// bl 0x82c49708
	ctx.lr = 0x82C44B2C;
	sub_82C49708(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82c44b38
	goto loc_82C44B38;
loc_82C44B34:
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
loc_82C44B38:
	// li r3,664
	ctx.r3.s64 = 664;
	// bl 0x82c46328
	ctx.lr = 0x82C44B40;
	sub_82C46328(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44b54
	if (ctx.cr6.eq) goto loc_82C44B54;
	// bl 0x82c469e8
	ctx.lr = 0x82C44B4C;
	sub_82C469E8(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// b 0x82c44b58
	goto loc_82C44B58;
loc_82C44B54:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
loc_82C44B58:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c44b68
	if (ctx.cr6.eq) goto loc_82C44B68;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82c44b6c
	if (!ctx.cr6.eq) goto loc_82C44B6C;
loc_82C44B68:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82C44B6C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c44bd0
	if (ctx.cr6.eq) goto loc_82C44BD0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44bd0
	if (ctx.cr6.lt) goto loc_82C44BD0;
	// li r3,552
	ctx.r3.s64 = 552;
	// bl 0x82c47800
	ctx.lr = 0x82C44B84;
	sub_82C47800(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44b98
	if (ctx.cr6.eq) goto loc_82C44B98;
	// bl 0x82c484a0
	ctx.lr = 0x82C44B90;
	sub_82C484A0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// b 0x82c44b9c
	goto loc_82C44B9C;
loc_82C44B98:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
loc_82C44B9C:
	// li r3,376
	ctx.r3.s64 = 376;
	// bl 0x82c46e20
	ctx.lr = 0x82C44BA4;
	sub_82C46E20(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44bb8
	if (ctx.cr6.eq) goto loc_82C44BB8;
	// bl 0x82c46f88
	ctx.lr = 0x82C44BB0;
	sub_82C46F88(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x82c44bbc
	goto loc_82C44BBC;
loc_82C44BB8:
	// mr r19,r31
	ctx.r19.u64 = ctx.r31.u64;
loc_82C44BBC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c44bcc
	if (ctx.cr6.eq) goto loc_82C44BCC;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82c44bd0
	if (!ctx.cr6.eq) goto loc_82C44BD0;
loc_82C44BCC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82C44BD0:
	// li r29,8
	ctx.r29.s64 = 8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c44c30
	if (ctx.cr6.eq) goto loc_82C44C30;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44c30
	if (ctx.cr6.lt) goto loc_82C44C30;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r10,24(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// subf r9,r25,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r25.s64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r29,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r29.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,44(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C44C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44C30:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c44c8c
	if (ctx.cr6.eq) goto loc_82C44C8C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44c8c
	if (ctx.cr6.lt) goto loc_82C44C8C;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lwz r10,28(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// subf r9,r25,r23
	ctx.r9.s64 = ctx.r23.s64 - ctx.r25.s64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// cntlzw r8,r9
	ctx.r8.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r7,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r7.u32);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r5,44(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82C44C88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44C8C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c44cd0
	if (ctx.cr6.eq) goto loc_82C44CD0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44cd0
	if (ctx.cr6.lt) goto loc_82C44CD0;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r9,3
	ctx.r9.s64 = 3;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// bl 0x82c46a68
	ctx.lr = 0x82C44CCC;
	sub_82C46A68(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44CD0:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c44cf0
	if (ctx.cr6.eq) goto loc_82C44CF0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44d98
	if (ctx.cr6.lt) goto loc_82C44D98;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82c45fe0
	ctx.lr = 0x82C44CEC;
	sub_82C45FE0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44CF0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44d98
	if (ctx.cr6.lt) goto loc_82C44D98;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c44d98
	if (ctx.cr6.lt) goto loc_82C44D98;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lwz r8,12(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// rlwinm r7,r10,31,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// lwz r6,16(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// stw r31,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r31.u32);
	// stw r20,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r20.u32);
	// stw r9,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r9.u32);
	// stw r22,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r22.u32);
	// stw r8,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r8.u32);
	// stw r7,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r7.u32);
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r5,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r5.u32);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44D98:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c44dc4
	if (ctx.cr6.eq) goto loc_82C44DC4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44dc4
	if (ctx.cr6.lt) goto loc_82C44DC4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44DC4:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c44df0
	if (ctx.cr6.eq) goto loc_82C44DF0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44df0
	if (ctx.cr6.lt) goto loc_82C44DF0;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44DEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44DF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c44e1c
	if (ctx.cr6.eq) goto loc_82C44E1C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44e1c
	if (ctx.cr6.lt) goto loc_82C44E1C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44E1C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c44e48
	if (ctx.cr6.eq) goto loc_82C44E48;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44e74
	if (ctx.cr6.lt) goto loc_82C44E74;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44E44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44E48:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44e74
	if (ctx.cr6.lt) goto loc_82C44E74;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C44E74:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c44e90
	if (ctx.cr6.eq) goto loc_82C44E90;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44E90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44E90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c44eac
	if (ctx.cr6.eq) goto loc_82C44EAC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44EAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44EAC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82c44ec8
	if (ctx.cr6.eq) goto loc_82C44EC8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44EC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44EC8:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82c44ee4
	if (ctx.cr6.eq) goto loc_82C44EE4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44EE4:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82c44f00
	if (ctx.cr6.eq) goto loc_82C44F00;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44F00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44F00:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82c44f18
	if (ctx.cr6.lt) goto loc_82C44F18;
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82C44F18:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82c44f34
	if (ctx.cr6.eq) goto loc_82C44F34;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C44F34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C44F34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C44F40"))) PPC_WEAK_FUNC(sub_82C44F40);
PPC_FUNC_IMPL(__imp__sub_82C44F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82C44F48;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// stw r20,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r20.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r20,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r20.u32);
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r25,r20
	ctx.r25.u64 = ctx.r20.u64;
	// mr r23,r20
	ctx.r23.u64 = ctx.r20.u64;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82c45344
	if (ctx.cr6.gt) goto loc_82C45344;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c45344
	if (ctx.cr6.eq) goto loc_82C45344;
	// bdz 0x82c44f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82C44F9C;
	// bdz 0x82c45198
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82C45198;
	// b 0x82c45238
	goto loc_82C45238;
loc_82C44F9C:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c44fd8
	if (ctx.cr6.eq) goto loc_82C44FD8;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82c4ab58
	ctx.lr = 0x82C44FB0;
	sub_82C4AB58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
	// bl 0x82c4beb0
	ctx.lr = 0x82C44FBC;
	sub_82C4BEB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c44fd8
	if (!ctx.cr6.eq) goto loc_82C44FD8;
loc_82C44FC8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82C44FD8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c4500c
	if (ctx.cr6.eq) goto loc_82C4500C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c45050
	if (ctx.cr6.eq) goto loc_82C45050;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4500C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4500C:
	// lwz r28,56(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r27,64(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c45030
	if (!ctx.cr6.eq) goto loc_82C45030;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_82C45030:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c450a0
	if (!ctx.cr6.eq) goto loc_82C450A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c4508c
	if (ctx.cr6.eq) goto loc_82C4508C;
	// li r29,64
	ctx.r29.s64 = 64;
	// b 0x82c450a0
	goto loc_82C450A0;
loc_82C45050:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82c4ab58
	ctx.lr = 0x82C45058;
	sub_82C4AB58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4507c
	if (ctx.cr6.eq) goto loc_82C4507C;
	// bl 0x82c4beb0
	ctx.lr = 0x82C45064;
	sub_82C4BEB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c4500c
	if (!ctx.cr6.eq) goto loc_82C4500C;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C4507C:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C4508C:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_82C450A0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c450c0
	if (!ctx.cr6.eq) goto loc_82C450C0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82C450C0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,4
	ctx.r30.s64 = 4;
	// li r26,12
	ctx.r26.s64 = 12;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c4514c
	if (ctx.cr6.eq) goto loc_82C4514C;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C450E4:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c450e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C450E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// ld r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// beq cr6,0x82c45128
	if (ctx.cr6.eq) goto loc_82C45128;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82C45128:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C45140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c4557c
	if (ctx.cr6.lt) goto loc_82C4557C;
loc_82C4514C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C45170:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c45170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C45170;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// ld r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// rlwinm r8,r11,0,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// std r7,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r7.u64);
	// b 0x82c45514
	goto loc_82C45514;
loc_82C45198:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c451dc
	if (ctx.cr6.eq) goto loc_82C451DC;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82c4a820
	ctx.lr = 0x82C451AC;
	sub_82C4A820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
	// bl 0x82c4aa98
	ctx.lr = 0x82C451B8;
	sub_82C4AA98(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82c4a840
	ctx.lr = 0x82C451D0;
	sub_82C4A840(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c4557c
	if (ctx.cr6.lt) goto loc_82C4557C;
loc_82C451DC:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82c4a820
	ctx.lr = 0x82C451F0;
	sub_82C4A820(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45214
	if (ctx.cr6.eq) goto loc_82C45214;
	// bl 0x82c4aa98
	ctx.lr = 0x82C451FC;
	sub_82C4AA98(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c45224
	if (!ctx.cr6.eq) goto loc_82C45224;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C45214:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C45224:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82c4a840
	ctx.lr = 0x82C45234;
	sub_82C4A840(ctx, base);
	// b 0x82c4554c
	goto loc_82C4554C;
loc_82C45238:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c45288
	if (ctx.cr6.eq) goto loc_82C45288;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82c4a5d8
	ctx.lr = 0x82C4524C;
	sub_82C4A5D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
	// bl 0x82c4a750
	ctx.lr = 0x82C45258;
	sub_82C4A750(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4527C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c4557c
	if (ctx.cr6.lt) goto loc_82C4557C;
loc_82C45288:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c452e0
	if (ctx.cr6.eq) goto loc_82C452E0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c452e0
	if (!ctx.cr6.eq) goto loc_82C452E0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c452e0
	if (!ctx.cr6.eq) goto loc_82C452E0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C452DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c45550
	goto loc_82C45550;
loc_82C452E0:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82c4a5d8
	ctx.lr = 0x82C452E8;
	sub_82C4A5D8(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4530c
	if (ctx.cr6.eq) goto loc_82C4530C;
	// bl 0x82c4a750
	ctx.lr = 0x82C452F4;
	sub_82C4A750(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c4531c
	if (!ctx.cr6.eq) goto loc_82C4531C;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C4530C:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C4531C:
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,36(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C45340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c4554c
	goto loc_82C4554C;
loc_82C45344:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c45370
	if (ctx.cr6.eq) goto loc_82C45370;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82c4ab58
	ctx.lr = 0x82C45358;
	sub_82C4AB58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
	// bl 0x82c4beb0
	ctx.lr = 0x82C45364;
	sub_82C4BEB0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c44fc8
	if (ctx.cr6.eq) goto loc_82C44FC8;
loc_82C45370:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c453a4
	if (ctx.cr6.eq) goto loc_82C453A4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c453e8
	if (ctx.cr6.eq) goto loc_82C453E8;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C453A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C453A4:
	// lwz r28,36(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r29,40(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r27,44(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c453c8
	if (!ctx.cr6.eq) goto loc_82C453C8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r28,2
	ctx.r28.s64 = 131072;
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
loc_82C453C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c45438
	if (!ctx.cr6.eq) goto loc_82C45438;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c45424
	if (ctx.cr6.eq) goto loc_82C45424;
	// li r29,64
	ctx.r29.s64 = 64;
	// b 0x82c45438
	goto loc_82C45438;
loc_82C453E8:
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82c4ab58
	ctx.lr = 0x82C453F0;
	sub_82C4AB58(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45414
	if (ctx.cr6.eq) goto loc_82C45414;
	// bl 0x82c4beb0
	ctx.lr = 0x82C453FC;
	sub_82C4BEB0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c453a4
	if (!ctx.cr6.eq) goto loc_82C453A4;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C45414:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r24,r20
	ctx.r24.u64 = ctx.r20.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82c4557c
	goto loc_82C4557C;
loc_82C45424:
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// subfic r10,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r11.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r9,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x18;
	// addi r29,r11,8
	ctx.r29.s64 = ctx.r11.s64 + 8;
loc_82C45438:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c45458
	if (!ctx.cr6.eq) goto loc_82C45458;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r8,27
	ctx.r11.u64 = ctx.r8.u32 & 0x1F;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
loc_82C45458:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r26,9
	ctx.r26.s64 = 9;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c454d8
	if (ctx.cr6.eq) goto loc_82C454D8;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C4547C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c4547c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C4547C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// beq cr6,0x82c454b4
	if (ctx.cr6.eq) goto loc_82C454B4;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82C454B4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C454CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c4557c
	if (ctx.cr6.lt) goto loc_82C4557C;
loc_82C454D8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// cmplw cr6,r23,r24
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r24.u32, ctx.xer);
	// beq cr6,0x82c45550
	if (ctx.cr6.eq) goto loc_82C45550;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C454FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c454fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C454FC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
loc_82C45514:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r27,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r27.u32);
	// stw r29,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r29.u32);
	// stw r28,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r28.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// beq cr6,0x82c45534
	if (ctx.cr6.eq) goto loc_82C45534;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
loc_82C45534:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4554C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4554C:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82C45550:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82c4557c
	if (ctx.cr6.lt) goto loc_82C4557C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c44a68
	ctx.lr = 0x82C45574;
	sub_82C44A68(ctx, base);
	// lwz r20,80(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82C4557C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c45598
	if (ctx.cr6.eq) goto loc_82C45598;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C45598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C45598:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c455b4
	if (ctx.cr6.eq) goto loc_82C455B4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C455B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C455B4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82c455cc
	if (ctx.cr6.lt) goto loc_82C455CC;
	// stw r20,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r20.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82C455CC:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82c455e8
	if (ctx.cr6.eq) goto loc_82C455E8;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C455E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C455E8:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C455F4"))) PPC_WEAK_FUNC(sub_82C455F4);
PPC_FUNC_IMPL(__imp__sub_82C455F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C455F8"))) PPC_WEAK_FUNC(sub_82C455F8);
PPC_FUNC_IMPL(__imp__sub_82C455F8) {
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
	// bl 0x82c4c200
	ctx.lr = 0x82C45610;
	sub_82C4C200(ctx, base);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-4512(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -4512);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lfs f13,19068(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19068);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f12,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f12.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stfs f13,136(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r7,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r7.u32);
	// li r5,120
	ctx.r5.s64 = 120;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 264, ctx.r11.u32);
	// stw r11,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r11.u32);
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// stw r11,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r11.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stw r11,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r11.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82C456B0;
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

__attribute__((alias("__imp__sub_82C456C4"))) PPC_WEAK_FUNC(sub_82C456C4);
PPC_FUNC_IMPL(__imp__sub_82C456C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C456C8"))) PPC_WEAK_FUNC(sub_82C456C8);
PPC_FUNC_IMPL(__imp__sub_82C456C8) {
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
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C456EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c456fc
	if (ctx.cr6.lt) goto loc_82C456FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r11.u32);
loc_82C456FC:
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

__attribute__((alias("__imp__sub_82C45710"))) PPC_WEAK_FUNC(sub_82C45710);
PPC_FUNC_IMPL(__imp__sub_82C45710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C45724"))) PPC_WEAK_FUNC(sub_82C45724);
PPC_FUNC_IMPL(__imp__sub_82C45724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C45728"))) PPC_WEAK_FUNC(sub_82C45728);
PPC_FUNC_IMPL(__imp__sub_82C45728) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82c45764
	if (ctx.cr6.eq) goto loc_82C45764;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82c45754
	if (ctx.cr6.eq) goto loc_82C45754;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x82c45754
	if (!ctx.cr6.eq) goto loc_82C45754;
	// stw r5,268(r3)
	PPC_STORE_U32(ctx.r3.u32 + 268, ctx.r5.u32);
	// stw r6,280(r3)
	PPC_STORE_U32(ctx.r3.u32 + 280, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82C45754:
	// stw r5,264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 264, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,276(r11)
	PPC_STORE_U32(ctx.r11.u32 + 276, ctx.r6.u32);
	// blr 
	return;
loc_82C45764:
	// stw r5,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r5.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r6,284(r11)
	PPC_STORE_U32(ctx.r11.u32 + 284, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C45774"))) PPC_WEAK_FUNC(sub_82C45774);
PPC_FUNC_IMPL(__imp__sub_82C45774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C45778"))) PPC_WEAK_FUNC(sub_82C45778);
PPC_FUNC_IMPL(__imp__sub_82C45778) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C457A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C457BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C457DC"))) PPC_WEAK_FUNC(sub_82C457DC);
PPC_FUNC_IMPL(__imp__sub_82C457DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C457E0"))) PPC_WEAK_FUNC(sub_82C457E0);
PPC_FUNC_IMPL(__imp__sub_82C457E0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45818
	if (ctx.cr6.eq) goto loc_82C45818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C45810;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
loc_82C45818:
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

__attribute__((alias("__imp__sub_82C45830"))) PPC_WEAK_FUNC(sub_82C45830);
PPC_FUNC_IMPL(__imp__sub_82C45830) {
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
	// bl 0x82c4bfa8
	ctx.lr = 0x82C45848;
	sub_82C4BFA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c455f8
	ctx.lr = 0x82C45850;
	sub_82C455F8(ctx, base);
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

__attribute__((alias("__imp__sub_82C45868"))) PPC_WEAK_FUNC(sub_82C45868);
PPC_FUNC_IMPL(__imp__sub_82C45868) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45914
	if (ctx.cr6.eq) goto loc_82C45914;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82665f50
	ctx.lr = 0x82C458A4;
	sub_82665F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668790
	ctx.lr = 0x82C458B0;
	sub_82668790(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668b38
	ctx.lr = 0x82C458BC;
	sub_82668B38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668d08
	ctx.lr = 0x82C458C8;
	sub_82668D08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x826660f8
	ctx.lr = 0x82C458D4;
	sub_826660F8(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826631f0
	ctx.lr = 0x82C458EC;
	sub_826631F0(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826631f0
	ctx.lr = 0x82C45900;
	sub_826631F0(ctx, base);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x826631f0
	ctx.lr = 0x82C45914;
	sub_826631F0(ctx, base);
loc_82C45914:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4592c
	if (ctx.cr6.eq) goto loc_82C4592C;
	// bl 0x8266eed8
	ctx.lr = 0x82C45928;
	sub_8266EED8(ctx, base);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
loc_82C4592C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45940
	if (ctx.cr6.eq) goto loc_82C45940;
	// bl 0x8266eed8
	ctx.lr = 0x82C4593C;
	sub_8266EED8(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_82C45940:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45954
	if (ctx.cr6.eq) goto loc_82C45954;
	// bl 0x8266eed8
	ctx.lr = 0x82C45950;
	sub_8266EED8(ctx, base);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82C45954:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45968
	if (ctx.cr6.eq) goto loc_82C45968;
	// bl 0x8266eed8
	ctx.lr = 0x82C45964;
	sub_8266EED8(ctx, base);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82C45968:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4597c
	if (ctx.cr6.eq) goto loc_82C4597C;
	// bl 0x8266eed8
	ctx.lr = 0x82C45978;
	sub_8266EED8(ctx, base);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82C4597C:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45990
	if (ctx.cr6.eq) goto loc_82C45990;
	// bl 0x826791a0
	ctx.lr = 0x82C4598C;
	sub_826791A0(ctx, base);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82C45990:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C459A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C459B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82C459D4"))) PPC_WEAK_FUNC(sub_82C459D4);
PPC_FUNC_IMPL(__imp__sub_82C459D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C459D8"))) PPC_WEAK_FUNC(sub_82C459D8);
PPC_FUNC_IMPL(__imp__sub_82C459D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C459E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C459FC:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c459fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C459FC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x83178ca4
	ctx.lr = 0x82C45A0C;
	__imp__XGetVideoMode(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// bl 0x8267db00
	ctx.lr = 0x82C45A28;
	sub_8267DB00(ctx, base);
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r7,124(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// frsp f13,f12
	ctx.f13.f64 = double(float(ctx.f12.f64));
	// stfs f13,132(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// stfs f12,136(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 136, temp.u32);
	// beq cr6,0x82c45a70
	if (ctx.cr6.eq) goto loc_82C45A70;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-4504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4504);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c45a78
	goto loc_82C45A78;
loc_82C45A70:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-4508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4508);
	ctx.f0.f64 = double(temp.f32);
loc_82C45A78:
	// fdivs f13,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,12
	ctx.r3.s64 = 12;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,140(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 140, temp.u32);
	// bl 0x8266f188
	ctx.lr = 0x82C45A98;
	sub_8266F188(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c45b60
	if (ctx.cr6.lt) goto loc_82C45B60;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8266f238
	ctx.lr = 0x82C45ACC;
	sub_8266F238(ctx, base);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r29,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r29.u16);
	// li r10,3
	ctx.r10.s64 = 3;
	// sth r9,10(r3)
	PPC_STORE_U16(ctx.r3.u32 + 10, ctx.r9.u16);
	// li r8,2
	ctx.r8.s64 = 2;
	// sth r11,2(r3)
	PPC_STORE_U16(ctx.r3.u32 + 2, ctx.r11.u16);
	// li r7,4
	ctx.r7.s64 = 4;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// sth r8,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r8.u16);
	// sth r7,8(r3)
	PPC_STORE_U16(ctx.r3.u32 + 8, ctx.r7.u16);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8266f280
	ctx.lr = 0x82C45B00;
	sub_8266F280(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x8266f060
	ctx.lr = 0x82C45B10;
	sub_8266F060(ctx, base);
	// addic r6,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// stw r3,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r3.u32);
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r30
	ctx.r3.u64 = ctx.r4.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c45b60
	if (ctx.cr6.lt) goto loc_82C45B60;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r3,r11,24964
	ctx.r3.s64 = ctx.r11.s64 + 24964;
	// bl 0x82668e10
	ctx.lr = 0x82C45B34;
	sub_82668E10(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c45b60
	if (ctx.cr6.lt) goto loc_82C45B60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C45B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C45B60:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C45B68"))) PPC_WEAK_FUNC(sub_82C45B68);
PPC_FUNC_IMPL(__imp__sub_82C45B68) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c45c10
	if (ctx.cr6.eq) goto loc_82C45C10;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82666070
	ctx.lr = 0x82C45B9C;
	sub_82666070(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665f50
	ctx.lr = 0x82C45BBC;
	sub_82665F50(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,120
	ctx.r5.s64 = 120;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8266f128
	ctx.lr = 0x82C45BD0;
	sub_8266F128(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// li r5,120
	ctx.r5.s64 = 120;
	// bl 0x82fa77c0
	ctx.lr = 0x82C45BDC;
	sub_82FA77C0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8266f178
	ctx.lr = 0x82C45BE4;
	sub_8266F178(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82665f50
	ctx.lr = 0x82C45C00;
	sub_82665F50(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c45c10
	if (ctx.cr6.eq) goto loc_82C45C10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82C45C10;
	sub_8266EED8(ctx, base);
loc_82C45C10:
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

__attribute__((alias("__imp__sub_82C45C2C"))) PPC_WEAK_FUNC(sub_82C45C2C);
PPC_FUNC_IMPL(__imp__sub_82C45C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C45C30"))) PPC_WEAK_FUNC(sub_82C45C30);
PPC_FUNC_IMPL(__imp__sub_82C45C30) {
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
	// bl 0x82c45868
	ctx.lr = 0x82C45C48;
	sub_82C45868(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4bff0
	ctx.lr = 0x82C45C50;
	sub_82C4BFF0(ctx, base);
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

__attribute__((alias("__imp__sub_82C45C64"))) PPC_WEAK_FUNC(sub_82C45C64);
PPC_FUNC_IMPL(__imp__sub_82C45C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C45C68"))) PPC_WEAK_FUNC(sub_82C45C68);
PPC_FUNC_IMPL(__imp__sub_82C45C68) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82c45c8c
	if (!ctx.cr6.eq) goto loc_82C45C8C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r4,r3,96
	ctx.r4.s64 = ctx.r3.s64 + 96;
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// b 0x82c45cb8
	goto loc_82C45CB8;
loc_82C45C8C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,80
	ctx.r11.s64 = ctx.r3.s64 + 80;
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r7.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r6.u32);
loc_82C45CB8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
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
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// stfs f9,148(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f8,80(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// frsp f6,f7
	ctx.f6.f64 = double(float(ctx.f7.f64));
	// stfs f6,164(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f5,80(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f4,f5
	ctx.f4.f64 = double(ctx.f5.s64);
	// frsp f3,f4
	ctx.f3.f64 = double(float(ctx.f4.f64));
	// stfs f3,168(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f2,80(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f2
	ctx.f1.f64 = double(ctx.f2.s64);
	// frsp f0,f1
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,184(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stfs f11,188(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// stfs f8,204(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f6,f7
	ctx.f6.f64 = double(ctx.f7.s64);
	// frsp f5,f6
	ctx.f5.f64 = double(float(ctx.f6.f64));
	// stfs f5,208(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f4,80(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// frsp f2,f3
	ctx.f2.f64 = double(float(ctx.f3.f64));
	// stfs f2,224(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f1,80(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// stfs f13,228(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// lwz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// stfs f10,244(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f9,80(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f7,f8
	ctx.f7.f64 = double(float(ctx.f8.f64));
	// stfs f7,248(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// bl 0x82c45b68
	ctx.lr = 0x82C45E0C;
	sub_82C45B68(ctx, base);
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

__attribute__((alias("__imp__sub_82C45E20"))) PPC_WEAK_FUNC(sub_82C45E20);
PPC_FUNC_IMPL(__imp__sub_82C45E20) {
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
	// lwz r9,128(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lfs f9,140(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f9.f64 = double(temp.f32);
	// lwz r8,124(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lfs f12,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f9
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f13,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addi r11,r11,5184
	ctx.r11.s64 = ctx.r11.s64 + 5184;
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// fdivs f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// frsp f11,f8
	ctx.f11.f64 = double(float(ctx.f8.f64));
	// frsp f10,f7
	ctx.f10.f64 = double(float(ctx.f7.f64));
	// fdivs f5,f11,f10
	ctx.f5.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// ble cr6,0x82c45ea8
	if (!ctx.cr6.gt) goto loc_82C45EA8;
	// fmuls f7,f11,f13
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f8,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f8.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fdivs f6,f7,f10
	ctx.f6.f64 = double(float(ctx.f7.f64 / ctx.f10.f64));
	// fdivs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// fsubs f4,f12,f5
	ctx.f4.f64 = double(float(ctx.f12.f64 - ctx.f5.f64));
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// fadds f10,f12,f5
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// b 0x82c45ecc
	goto loc_82C45ECC;
loc_82C45EA8:
	// fmuls f8,f10,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f9,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f10,f12
	ctx.f10.f64 = ctx.f12.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// fdivs f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f11.f64));
	// fsubs f6,f13,f7
	ctx.f6.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fmuls f11,f6,f9
	ctx.f11.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
loc_82C45ECC:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f11,f11
	ctx.f11.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f11.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f10,f10
	ctx.f10.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f10.u64);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// extsw r5,r10
	ctx.r5.s64 = ctx.r10.s32;
	// stfs f0,156(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 156, temp.u32);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// stfs f0,160(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stfs f0,180(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 180, temp.u32);
	// stw r9,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r9.u32);
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// stfs f0,196(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 196, temp.u32);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// stfs f0,216(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 216, temp.u32);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r6,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r6.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f7,88(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f5,88(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// fcfid f4,f8
	ctx.f4.f64 = double(ctx.f8.s64);
	// lfs f13,24436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f2,f7
	ctx.f2.f64 = double(ctx.f7.s64);
	// stfs f13,176(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 176, temp.u32);
	// fcfid f3,f5
	ctx.f3.f64 = double(ctx.f5.s64);
	// stfs f13,200(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 200, temp.u32);
	// frsp f1,f6
	ctx.f1.f64 = double(float(ctx.f6.f64));
	// stfs f1,164(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f1,224(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 224, temp.u32);
	// stw r8,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r8.u32);
	// stfs f1,244(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 244, temp.u32);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stfs f13,220(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 220, temp.u32);
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stfs f13,236(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 236, temp.u32);
	// stfs f0,240(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 240, temp.u32);
	// stfs f13,256(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 256, temp.u32);
	// frsp f12,f4
	ctx.f12.f64 = double(float(ctx.f4.f64));
	// stfs f12,144(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 144, temp.u32);
	// frsp f10,f2
	ctx.f10.f64 = double(float(ctx.f2.f64));
	// stfs f12,184(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 184, temp.u32);
	// frsp f11,f3
	ctx.f11.f64 = double(float(ctx.f3.f64));
	// stfs f11,148(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 148, temp.u32);
	// stfs f11,168(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// stfs f10,188(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 188, temp.u32);
	// stfs f12,204(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 204, temp.u32);
	// stfs f10,208(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 208, temp.u32);
	// stfs f11,228(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 228, temp.u32);
	// stfs f10,248(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 248, temp.u32);
	// stfs f13,260(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 260, temp.u32);
	// bl 0x82c45b68
	ctx.lr = 0x82C45FC8;
	sub_82C45B68(ctx, base);
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

__attribute__((alias("__imp__sub_82C45FDC"))) PPC_WEAK_FUNC(sub_82C45FDC);
PPC_FUNC_IMPL(__imp__sub_82C45FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C45FE0"))) PPC_WEAK_FUNC(sub_82C45FE0);
PPC_FUNC_IMPL(__imp__sub_82C45FE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C45FE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46004;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c46030
	if (ctx.cr6.lt) goto loc_82C46030;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82679178
	ctx.lr = 0x82C46018;
	sub_82679178(ctx, base);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c459d8
	ctx.lr = 0x82C46024;
	sub_82C459D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82c46044
	if (!ctx.cr6.lt) goto loc_82C46044;
loc_82C46030:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C46044:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C46050"))) PPC_WEAK_FUNC(sub_82C46050);
PPC_FUNC_IMPL(__imp__sub_82C46050) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,-4496
	ctx.r10.s64 = ctx.r11.s64 + -4496;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82c4c218
	sub_82C4C218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C46060"))) PPC_WEAK_FUNC(sub_82C46060);
PPC_FUNC_IMPL(__imp__sub_82C46060) {
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
	// bl 0x82c4c228
	ctx.lr = 0x82C46078;
	sub_82C4C228(ctx, base);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,23392(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23392);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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

__attribute__((alias("__imp__sub_82C460AC"))) PPC_WEAK_FUNC(sub_82C460AC);
PPC_FUNC_IMPL(__imp__sub_82C460AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C460B0"))) PPC_WEAK_FUNC(sub_82C460B0);
PPC_FUNC_IMPL(__imp__sub_82C460B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 72, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C460B8"))) PPC_WEAK_FUNC(sub_82C460B8);
PPC_FUNC_IMPL(__imp__sub_82C460B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C460C0"))) PPC_WEAK_FUNC(sub_82C460C0);
PPC_FUNC_IMPL(__imp__sub_82C460C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,72(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C460C8"))) PPC_WEAK_FUNC(sub_82C460C8);
PPC_FUNC_IMPL(__imp__sub_82C460C8) {
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
	// bl 0x82c4c258
	ctx.lr = 0x82C460E0;
	sub_82C4C258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4496
	ctx.r10.s64 = ctx.r11.s64 + -4496;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c4c228
	ctx.lr = 0x82C460F4;
	sub_82C4C228(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,23392(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23392);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
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

__attribute__((alias("__imp__sub_82C4612C"))) PPC_WEAK_FUNC(sub_82C4612C);
PPC_FUNC_IMPL(__imp__sub_82C4612C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46130"))) PPC_WEAK_FUNC(sub_82C46130);
PPC_FUNC_IMPL(__imp__sub_82C46130) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4496
	ctx.r10.s64 = ctx.r11.s64 + -4496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82c4c218
	ctx.lr = 0x82C4615C;
	sub_82C4C218(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4617c
	if (ctx.cr6.eq) goto loc_82C4617C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x82691460
	ctx.lr = 0x82C46178;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C4617C:
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

__attribute__((alias("__imp__sub_82C46194"))) PPC_WEAK_FUNC(sub_82C46194);
PPC_FUNC_IMPL(__imp__sub_82C46194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46198"))) PPC_WEAK_FUNC(sub_82C46198);
PPC_FUNC_IMPL(__imp__sub_82C46198) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r10,r11,-4432
	ctx.r10.s64 = ctx.r11.s64 + -4432;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82c4c218
	sub_82C4C218(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C461A8"))) PPC_WEAK_FUNC(sub_82C461A8);
PPC_FUNC_IMPL(__imp__sub_82C461A8) {
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
	// bl 0x82c4c228
	ctx.lr = 0x82C461C0;
	sub_82C4C228(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C461FC"))) PPC_WEAK_FUNC(sub_82C461FC);
PPC_FUNC_IMPL(__imp__sub_82C461FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46200"))) PPC_WEAK_FUNC(sub_82C46200);
PPC_FUNC_IMPL(__imp__sub_82C46200) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46208"))) PPC_WEAK_FUNC(sub_82C46208);
PPC_FUNC_IMPL(__imp__sub_82C46208) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46210"))) PPC_WEAK_FUNC(sub_82C46210);
PPC_FUNC_IMPL(__imp__sub_82C46210) {
	PPC_FUNC_PROLOGUE();
	// stw r4,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46218"))) PPC_WEAK_FUNC(sub_82C46218);
PPC_FUNC_IMPL(__imp__sub_82C46218) {
	PPC_FUNC_PROLOGUE();
	// stw r4,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46220"))) PPC_WEAK_FUNC(sub_82C46220);
PPC_FUNC_IMPL(__imp__sub_82C46220) {
	PPC_FUNC_PROLOGUE();
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46228"))) PPC_WEAK_FUNC(sub_82C46228);
PPC_FUNC_IMPL(__imp__sub_82C46228) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46230"))) PPC_WEAK_FUNC(sub_82C46230);
PPC_FUNC_IMPL(__imp__sub_82C46230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,80(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46238"))) PPC_WEAK_FUNC(sub_82C46238);
PPC_FUNC_IMPL(__imp__sub_82C46238) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46240"))) PPC_WEAK_FUNC(sub_82C46240);
PPC_FUNC_IMPL(__imp__sub_82C46240) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46248"))) PPC_WEAK_FUNC(sub_82C46248);
PPC_FUNC_IMPL(__imp__sub_82C46248) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46250"))) PPC_WEAK_FUNC(sub_82C46250);
PPC_FUNC_IMPL(__imp__sub_82C46250) {
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
	// bl 0x82c4c258
	ctx.lr = 0x82C46268;
	sub_82C4C258(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4432
	ctx.r10.s64 = ctx.r11.s64 + -4432;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c4c228
	ctx.lr = 0x82C4627C;
	sub_82C4C228(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C462BC"))) PPC_WEAK_FUNC(sub_82C462BC);
PPC_FUNC_IMPL(__imp__sub_82C462BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C462C0"))) PPC_WEAK_FUNC(sub_82C462C0);
PPC_FUNC_IMPL(__imp__sub_82C462C0) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4432
	ctx.r10.s64 = ctx.r11.s64 + -4432;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82c4c218
	ctx.lr = 0x82C462EC;
	sub_82C4C218(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c4630c
	if (ctx.cr6.eq) goto loc_82C4630C;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32772
	ctx.r4.u64 = ctx.r4.u64 | 32772;
	// bl 0x82691460
	ctx.lr = 0x82C46308;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C4630C:
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

__attribute__((alias("__imp__sub_82C46324"))) PPC_WEAK_FUNC(sub_82C46324);
PPC_FUNC_IMPL(__imp__sub_82C46324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46328"))) PPC_WEAK_FUNC(sub_82C46328);
PPC_FUNC_IMPL(__imp__sub_82C46328) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C46334"))) PPC_WEAK_FUNC(sub_82C46334);
PPC_FUNC_IMPL(__imp__sub_82C46334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46338"))) PPC_WEAK_FUNC(sub_82C46338);
PPC_FUNC_IMPL(__imp__sub_82C46338) {
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
	// bl 0x82c4c200
	ctx.lr = 0x82C46354;
	sub_82C4C200(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,576
	ctx.r5.s64 = 576;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82C46380;
	sub_82FA7CF0(ctx, base);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C463A0"))) PPC_WEAK_FUNC(sub_82C463A0);
PPC_FUNC_IMPL(__imp__sub_82C463A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C463A8"))) PPC_WEAK_FUNC(sub_82C463A8);
PPC_FUNC_IMPL(__imp__sub_82C463A8) {
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
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C463D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c463f8
	if (ctx.cr6.eq) goto loc_82C463F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C463F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_82C463F8:
	// lwz r11,652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 652);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c46428
	if (ctx.cr6.eq) goto loc_82C46428;
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c46424
	if (ctx.cr6.eq) goto loc_82C46424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
loc_82C46424:
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
loc_82C46428:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4643C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C46450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82C4646C"))) PPC_WEAK_FUNC(sub_82C4646C);
PPC_FUNC_IMPL(__imp__sub_82C4646C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46470"))) PPC_WEAK_FUNC(sub_82C46470);
PPC_FUNC_IMPL(__imp__sub_82C46470) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// stw r5,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r5.u32);
	// stw r6,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4648C"))) PPC_WEAK_FUNC(sub_82C4648C);
PPC_FUNC_IMPL(__imp__sub_82C4648C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46490"))) PPC_WEAK_FUNC(sub_82C46490);
PPC_FUNC_IMPL(__imp__sub_82C46490) {
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
	// beq cr6,0x82c464c8
	if (ctx.cr6.eq) goto loc_82C464C8;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C464C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C464C8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C464DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C464FC"))) PPC_WEAK_FUNC(sub_82C464FC);
PPC_FUNC_IMPL(__imp__sub_82C464FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46500"))) PPC_WEAK_FUNC(sub_82C46500);
PPC_FUNC_IMPL(__imp__sub_82C46500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C46510"))) PPC_WEAK_FUNC(sub_82C46510);
PPC_FUNC_IMPL(__imp__sub_82C46510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C46518;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,640(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 640);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,636(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 636);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r30,r3,640
	ctx.r30.s64 = ctx.r3.s64 + 640;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c46578
	if (ctx.cr6.lt) goto loc_82C46578;
	// lwz r11,648(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c46568
	if (!ctx.cr6.eq) goto loc_82C46568;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
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
	// bctrl 
	ctx.lr = 0x82C46560;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r9.u32);
loc_82C46568:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C46578:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c46578
	if (!ctx.cr0.eq) goto loc_82C46578;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C465A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r3,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r3.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r31,92(r10)
	PPC_STORE_U32(ctx.r10.u32 + 92, ctx.r31.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,84(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 84);
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C46620;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c46664
	if (ctx.cr6.lt) goto loc_82C46664;
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c46650
	if (!ctx.cr6.eq) goto loc_82C46650;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
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
	// bctrl 
	ctx.lr = 0x82C46650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C46650:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c466c0
	if (ctx.cr6.lt) goto loc_82C466C0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r11.u32);
	// b 0x82c46680
	goto loc_82C46680;
loc_82C46664:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c46664
	if (!ctx.cr0.eq) goto loc_82C46664;
loc_82C46680:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c466c0
	if (ctx.cr6.lt) goto loc_82C466C0;
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// lwz r10,636(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 636);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c466a8
	if (ctx.cr6.lt) goto loc_82C466A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
loc_82C466A8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrldi r4,r29,32
	ctx.r4.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C466C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C466C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C466C8"))) PPC_WEAK_FUNC(sub_82C466C8);
PPC_FUNC_IMPL(__imp__sub_82C466C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C466D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bne cr6,0x82c466f4
	if (!ctx.cr6.eq) goto loc_82C466F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C466F4:
	// lwz r11,648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c46788
	if (!ctx.cr6.eq) goto loc_82C46788;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82c468c4
	if (ctx.cr6.eq) goto loc_82C468C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,88(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,56(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r7,100(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 100);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C4673C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c46778
	if (ctx.cr6.eq) goto loc_82C46778;
loc_82C46748:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82a77720
	ctx.lr = 0x82C46750;
	sub_82A77720(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C4676C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c46748
	if (!ctx.cr6.eq) goto loc_82C46748;
loc_82C46778:
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C46788:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82c46868
	if (ctx.cr6.eq) goto loc_82C46868;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82c46840
	if (ctx.cr6.eq) goto loc_82C46840;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// bne cr6,0x82c46868
	if (!ctx.cr6.eq) goto loc_82C46868;
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
	ctx.lr = 0x82C467B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,88(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C467CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r6,0(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,100(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 100);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C467F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c468bc
	if (ctx.cr6.eq) goto loc_82C468BC;
loc_82C467FC:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82a77720
	ctx.lr = 0x82C46804;
	sub_82A77720(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c467fc
	if (!ctx.cr6.eq) goto loc_82C467FC;
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C46840:
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
	ctx.lr = 0x82C46858;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r29.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82C46868:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c468bc
	if (ctx.cr6.eq) goto loc_82C468BC;
loc_82C4688C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82a77720
	ctx.lr = 0x82C46894;
	sub_82A77720(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C468B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c4688c
	if (!ctx.cr6.eq) goto loc_82C4688C;
loc_82C468BC:
	// stw r29,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r29.u32);
	// stw r29,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r29.u32);
loc_82C468C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C468D0"))) PPC_WEAK_FUNC(sub_82C468D0);
PPC_FUNC_IMPL(__imp__sub_82C468D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C468D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,18
	ctx.r5.s64 = 18;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82C46900;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82c46960
	if (ctx.cr6.lt) goto loc_82C46960;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// bgt cr6,0x82c46960
	if (ctx.cr6.gt) goto loc_82C46960;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// sth r11,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r11.u16);
	// beq cr6,0x82c46960
	if (ctx.cr6.eq) goto loc_82C46960;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// cmplwi cr6,r29,24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 24, ctx.xer);
	// bgt cr6,0x82c46970
	if (ctx.cr6.gt) goto loc_82C46970;
	// beq cr6,0x82c46978
	if (ctx.cr6.eq) goto loc_82C46978;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// beq cr6,0x82c46940
	if (ctx.cr6.eq) goto loc_82C46940;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// bne cr6,0x82c46960
	if (!ctx.cr6.eq) goto loc_82C46960;
loc_82C46940:
	// rlwinm r10,r29,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 29) & 0x1FFFFFFF;
	// sth r29,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r29.u16);
	// clrlwi r9,r11,16
	ctx.r9.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// mullw r7,r10,r9
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// sth r8,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r8.u16);
	// sth r7,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r7.u16);
	// b 0x82c46990
	goto loc_82C46990;
loc_82C46960:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82C46970:
	// cmplwi cr6,r29,32
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 32, ctx.xer);
	// bne cr6,0x82c46960
	if (!ctx.cr6.eq) goto loc_82C46960;
loc_82C46978:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,32
	ctx.r9.s64 = 32;
	// rlwinm r8,r11,2,16,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFC;
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// sth r9,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r9.u16);
	// sth r8,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r8.u16);
loc_82C46990:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r10,r11,r28
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C469A8"))) PPC_WEAK_FUNC(sub_82C469A8);
PPC_FUNC_IMPL(__imp__sub_82C469A8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,640
	ctx.r11.s64 = ctx.r4.s64 + 640;
loc_82C469AC:
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
	// bne 0x82c469ac
	if (!ctx.cr0.eq) goto loc_82C469AC;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C469E0"))) PPC_WEAK_FUNC(sub_82C469E0);
PPC_FUNC_IMPL(__imp__sub_82C469E0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C469E4"))) PPC_WEAK_FUNC(sub_82C469E4);
PPC_FUNC_IMPL(__imp__sub_82C469E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C469E8"))) PPC_WEAK_FUNC(sub_82C469E8);
PPC_FUNC_IMPL(__imp__sub_82C469E8) {
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
	// bl 0x82c4bfa8
	ctx.lr = 0x82C46A04;
	sub_82C4BFA8(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-4336
	ctx.r10.s64 = ctx.r11.s64 + -4336;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c4c200
	ctx.lr = 0x82C46A18;
	sub_82C4C200(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// li r5,576
	ctx.r5.s64 = 576;
	// stw r30,640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 640, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// stw r30,648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 648, ctx.r30.u32);
	// stw r30,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82C46A44;
	sub_82FA7CF0(ctx, base);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C46A68"))) PPC_WEAK_FUNC(sub_82C46A68);
PPC_FUNC_IMPL(__imp__sub_82C46A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C46A70;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82C46A98:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82c46a98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C46A98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46AB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// blt cr6,0x82c46bc8
	if (ctx.cr6.lt) goto loc_82C46BC8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c46be8
	if (ctx.cr6.eq) goto loc_82C46BE8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r28,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r28.u32);
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// ori r5,r9,44100
	ctx.r5.u64 = ctx.r9.u64 | 44100;
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// ori r3,r8,45328
	ctx.r3.u64 = ctx.r8.u64 | 45328;
	// sth r30,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r30.u16);
	// stw r10,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r10.u32);
	// sth r6,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r7,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r7.u16);
	// sth r4,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r4.u16);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c46b4c
	if (!ctx.cr6.eq) goto loc_82C46B4C;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
loc_82C46B4C:
	// stw r11,636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 636, ctx.r11.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r6,660(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// lis r9,-31974
	ctx.r9.s64 = -2095448064;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// addi r8,r9,25000
	ctx.r8.s64 = ctx.r9.s64 + 25000;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfs f1,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f1.f64 = double(temp.f32);
	// li r9,0
	ctx.r9.s64 = 0;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,56
	ctx.r4.s64 = ctx.r31.s64 + 56;
	// ori r6,r11,2
	ctx.r6.u64 = ctx.r11.u64 | 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C46B98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c46bc8
	if (ctx.cr6.lt) goto loc_82C46BC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46BBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82c46bdc
	if (!ctx.cr6.lt) goto loc_82C46BDC;
loc_82C46BC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C46BDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82C46BE8:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// b 0x82c46bc8
	goto loc_82C46BC8;
}

__attribute__((alias("__imp__sub_82C46BF4"))) PPC_WEAK_FUNC(sub_82C46BF4);
PPC_FUNC_IMPL(__imp__sub_82C46BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46BF8"))) PPC_WEAK_FUNC(sub_82C46BF8);
PPC_FUNC_IMPL(__imp__sub_82C46BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C46C00;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C46C24:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82c46c24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C46C24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c46d04
	if (ctx.cr6.lt) goto loc_82C46D04;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c46240
	ctx.lr = 0x82C46C54;
	sub_82C46240(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c46238
	ctx.lr = 0x82C46C60;
	sub_82C46238(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c46248
	ctx.lr = 0x82C46C6C;
	sub_82C46248(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bl 0x82c468d0
	ctx.lr = 0x82C46C84;
	sub_82C468D0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c46d04
	if (ctx.cr6.lt) goto loc_82C46D04;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c46d04
	if (ctx.cr6.eq) goto loc_82C46D04;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C46CB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lwz r3,660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 660);
	// li r6,16
	ctx.r6.s64 = 16;
	// lwz r11,656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// lis r5,-31974
	ctx.r5.s64 = -2095448064;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r5,25000
	ctx.r8.s64 = ctx.r5.s64 + 25000;
	// lfs f1,24436(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24436);
	ctx.f1.f64 = double(temp.f32);
	// subfic r7,r3,0
	ctx.xer.ca = ctx.r3.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r3.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// subfe r7,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// and r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ctx.r6.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C46D04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C46D04:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C46D0C"))) PPC_WEAK_FUNC(sub_82C46D0C);
PPC_FUNC_IMPL(__imp__sub_82C46D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46D10"))) PPC_WEAK_FUNC(sub_82C46D10);
PPC_FUNC_IMPL(__imp__sub_82C46D10) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-4336
	ctx.r10.s64 = ctx.r11.s64 + -4336;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82c463a8
	ctx.lr = 0x82C46D3C;
	sub_82C463A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c4bff0
	ctx.lr = 0x82C46D44;
	sub_82C4BFF0(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c46d64
	if (ctx.cr6.eq) goto loc_82C46D64;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32808
	ctx.r4.u64 = ctx.r4.u64 | 32808;
	// bl 0x82691460
	ctx.lr = 0x82C46D60;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C46D64:
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

__attribute__((alias("__imp__sub_82C46D7C"))) PPC_WEAK_FUNC(sub_82C46D7C);
PPC_FUNC_IMPL(__imp__sub_82C46D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46D80"))) PPC_WEAK_FUNC(sub_82C46D80);
PPC_FUNC_IMPL(__imp__sub_82C46D80) {
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
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// sth r11,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r11.u16);
	// std r11,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r11.u64);
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C46DB8:
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82c46db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C46DB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r9,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r9.u32);
	// blt cr6,0x82c46df0
	if (ctx.cr6.lt) goto loc_82C46DF0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_82C46DF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C46E04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82C46E20"))) PPC_WEAK_FUNC(sub_82C46E20);
PPC_FUNC_IMPL(__imp__sub_82C46E20) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C46E2C"))) PPC_WEAK_FUNC(sub_82C46E2C);
PPC_FUNC_IMPL(__imp__sub_82C46E2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46E30"))) PPC_WEAK_FUNC(sub_82C46E30);
PPC_FUNC_IMPL(__imp__sub_82C46E30) {
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
	// bl 0x82c455f8
	ctx.lr = 0x82C46E48;
	sub_82C455F8(ctx, base);
	// li r9,9
	ctx.r9.s64 = 9;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,284
	ctx.r10.s64 = ctx.r31.s64 + 284;
	// stw r11,368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 368, ctx.r11.u32);
	// stw r11,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r11.u32);
	// stw r11,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82C46E68:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c46e68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C46E68;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r11,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C46EA8"))) PPC_WEAK_FUNC(sub_82C46EA8);
PPC_FUNC_IMPL(__imp__sub_82C46EA8) {
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
	// lwz r11,368(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c46edc
	if (ctx.cr6.eq) goto loc_82C46EDC;
loc_82C46EC8:
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x82a77720
	ctx.lr = 0x82C46ED0;
	sub_82A77720(ctx, base);
	// lwz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c46ec8
	if (!ctx.cr6.eq) goto loc_82C46EC8;
loc_82C46EDC:
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

__attribute__((alias("__imp__sub_82C46EF4"))) PPC_WEAK_FUNC(sub_82C46EF4);
PPC_FUNC_IMPL(__imp__sub_82C46EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46EF8"))) PPC_WEAK_FUNC(sub_82C46EF8);
PPC_FUNC_IMPL(__imp__sub_82C46EF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r4,r7,31,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x1FFFFFFF;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C46F20"))) PPC_WEAK_FUNC(sub_82C46F20);
PPC_FUNC_IMPL(__imp__sub_82C46F20) {
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
	// lwz r30,124(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,1440
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1440, ctx.xer);
	// bne cr6,0x82c46f58
	if (!ctx.cr6.eq) goto loc_82C46F58;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// cmplwi cr6,r11,1080
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1080, ctx.xer);
	// bne cr6,0x82c46f58
	if (!ctx.cr6.eq) goto loc_82C46F58;
	// li r11,1920
	ctx.r11.s64 = 1920;
	// stw r11,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r11.u32);
loc_82C46F58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c45e20
	ctx.lr = 0x82C46F60;
	sub_82C45E20(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c46f70
	if (ctx.cr6.eq) goto loc_82C46F70;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_82C46F70:
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

__attribute__((alias("__imp__sub_82C46F88"))) PPC_WEAK_FUNC(sub_82C46F88);
PPC_FUNC_IMPL(__imp__sub_82C46F88) {
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
	// bl 0x82c45830
	ctx.lr = 0x82C46FA0;
	sub_82C45830(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,-3040
	ctx.r10.s64 = ctx.r11.s64 + -3040;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82c46e30
	ctx.lr = 0x82C46FB4;
	sub_82C46E30(ctx, base);
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

__attribute__((alias("__imp__sub_82C46FCC"))) PPC_WEAK_FUNC(sub_82C46FCC);
PPC_FUNC_IMPL(__imp__sub_82C46FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C46FD0"))) PPC_WEAK_FUNC(sub_82C46FD0);
PPC_FUNC_IMPL(__imp__sub_82C46FD0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
loc_82C46FD4:
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
	// bne 0x82c46fd4
	if (!ctx.cr0.eq) goto loc_82C46FD4;
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r3,284(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 284);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C47008"))) PPC_WEAK_FUNC(sub_82C47008);
PPC_FUNC_IMPL(__imp__sub_82C47008) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4700C"))) PPC_WEAK_FUNC(sub_82C4700C);
PPC_FUNC_IMPL(__imp__sub_82C4700C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47010"))) PPC_WEAK_FUNC(sub_82C47010);
PPC_FUNC_IMPL(__imp__sub_82C47010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C47018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c470ac
	if (ctx.cr6.eq) goto loc_82C470AC;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82665f50
	ctx.lr = 0x82C47048;
	sub_82665F50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668790
	ctx.lr = 0x82C47054;
	sub_82668790(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668b38
	ctx.lr = 0x82C47060;
	sub_82668B38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668d08
	ctx.lr = 0x82C4706C;
	sub_82668D08(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x826660f8
	ctx.lr = 0x82C47078;
	sub_826660F8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82C47084:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x826631f0
	ctx.lr = 0x82C470A0;
	sub_826631F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82c47084
	if (ctx.cr6.lt) goto loc_82C47084;
loc_82C470AC:
	// li r28,72
	ctx.r28.s64 = 72;
loc_82C470B0:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82C470B4:
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c470d0
	if (ctx.cr6.eq) goto loc_82C470D0;
	// bl 0x8266eed8
	ctx.lr = 0x82C470CC;
	sub_8266EED8(ctx, base);
	// stwx r27,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r27.u32);
loc_82C470D0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x82c470b4
	if (ctx.cr6.lt) goto loc_82C470B4;
	// addi r28,r28,3
	ctx.r28.s64 = ctx.r28.s64 + 3;
	// cmplwi cr6,r28,81
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 81, ctx.xer);
	// blt cr6,0x82c470b0
	if (ctx.cr6.lt) goto loc_82C470B0;
	// lwz r3,324(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c470fc
	if (ctx.cr6.eq) goto loc_82C470FC;
	// bl 0x8266eed8
	ctx.lr = 0x82C470F8;
	sub_8266EED8(ctx, base);
	// stw r27,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r27.u32);
loc_82C470FC:
	// lwz r3,328(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c47110
	if (ctx.cr6.eq) goto loc_82C47110;
	// bl 0x8266eed8
	ctx.lr = 0x82C4710C;
	sub_8266EED8(ctx, base);
	// stw r27,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r27.u32);
loc_82C47110:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c45868
	ctx.lr = 0x82C47118;
	sub_82C45868(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C47120"))) PPC_WEAK_FUNC(sub_82C47120);
PPC_FUNC_IMPL(__imp__sub_82C47120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C47128;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// bl 0x82c46238
	ctx.lr = 0x82C47144;
	sub_82C46238(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bne cr6,0x82c47164
	if (!ctx.cr6.eq) goto loc_82C47164;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c46240
	ctx.lr = 0x82C47158;
	sub_82C46240(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c4730c
	if (ctx.cr6.eq) goto loc_82C4730C;
loc_82C47164:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c46238
	ctx.lr = 0x82C4716C;
	sub_82C46238(ctx, base);
	// stw r3,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c46240
	ctx.lr = 0x82C47178;
	sub_82C46240(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// rlwinm r9,r3,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// addi r23,r31,332
	ctx.r23.s64 = ctx.r31.s64 + 332;
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r11,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r11.u32);
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// rldicr r29,r11,63,63
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r9,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r9.u32);
loc_82C471BC:
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// srd r6,r29,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r29.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x826631f0
	ctx.lr = 0x82C471D8;
	sub_826631F0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// blt cr6,0x82c471bc
	if (ctx.cr6.lt) goto loc_82C471BC;
	// lis r11,10240
	ctx.r11.s64 = 671088640;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// li r25,72
	ctx.r25.s64 = 72;
	// ori r26,r11,2
	ctx.r26.u64 = ctx.r11.u64 | 2;
	// ori r27,r10,14
	ctx.r27.u64 = ctx.r10.u64 | 14;
loc_82C471F8:
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82C47200:
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r30,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c4721c
	if (ctx.cr6.eq) goto loc_82C4721C;
	// bl 0x8266eed8
	ctx.lr = 0x82C47218;
	sub_8266EED8(ctx, base);
	// stwx r24,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r24.u32);
loc_82C4721C:
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82662e30
	ctx.lr = 0x82C47240;
	sub_82662E30(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stwx r3,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r27
	ctx.r3.u64 = ctx.r9.u64 & ctx.r27.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c47268
	if (ctx.cr6.lt) goto loc_82C47268;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x82c47200
	if (ctx.cr6.lt) goto loc_82C47200;
loc_82C47268:
	// addi r25,r25,3
	ctx.r25.s64 = ctx.r25.s64 + 3;
	// cmplwi cr6,r25,81
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 81, ctx.xer);
	// blt cr6,0x82c471f8
	if (ctx.cr6.lt) goto loc_82C471F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c47310
	if (ctx.cr6.lt) goto loc_82C47310;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c4730c
	if (ctx.cr6.lt) goto loc_82C4730C;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c472b8
	if (!ctx.cr6.eq) goto loc_82C472B8;
	// addi r4,r31,80
	ctx.r4.s64 = ctx.r31.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c45c68
	ctx.lr = 0x82C472B4;
	sub_82C45C68(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82C472B8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82c4730c
	if (ctx.cr6.lt) goto loc_82C4730C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r30,76(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82668790
	ctx.lr = 0x82C472D0;
	sub_82668790(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmplwi cr6,r11,576
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 576, ctx.xer);
	// ble cr6,0x82c472e4
	if (!ctx.cr6.gt) goto loc_82C472E4;
	// lwz r11,328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// b 0x82c472e8
	goto loc_82C472E8;
loc_82C472E4:
	// lwz r11,324(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
loc_82C472E8:
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x8266ee60
	ctx.lr = 0x82C472F4;
	sub_8266EE60(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c47304
	if (ctx.cr6.eq) goto loc_82C47304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8266eed8
	ctx.lr = 0x82C47304;
	sub_8266EED8(ctx, base);
loc_82C47304:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
loc_82C4730C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82C47310:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C47318"))) PPC_WEAK_FUNC(sub_82C47318);
PPC_FUNC_IMPL(__imp__sub_82C47318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82C47320;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,368(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 368);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// lis r8,512
	ctx.r8.s64 = 33554432;
	// lis r7,1024
	ctx.r7.s64 = 67108864;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r6,2048
	ctx.r6.s64 = 134217728;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r4,8192
	ctx.r4.s64 = 536870912;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// addi r11,r3,368
	ctx.r11.s64 = ctx.r3.s64 + 368;
	// stw r4,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r4.u32);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82c47378
	if (ctx.cr6.lt) goto loc_82C47378;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82C47378:
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
	// bne 0x82c47378
	if (!ctx.cr0.eq) goto loc_82C47378;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C473A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,356
	ctx.r27.s64 = ctx.r31.s64 + 356;
	// rldicr r24,r11,63,63
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
loc_82C473BC:
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// srd r6,r24,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x40 ? 0 : (ctx.r24.u64 >> (ctx.r10.u8 & 0x7F));
	// bl 0x826631f0
	ctx.lr = 0x82C473D8;
	sub_826631F0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r9,r11,r28
	ctx.r9.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r8,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// bl 0x82662c60
	ctx.lr = 0x82C47408;
	sub_82662C60(ctx, base);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ble cr6,0x82c47450
	if (!ctx.cr6.gt) goto loc_82C47450;
	// addi r26,r27,-12
	ctx.r26.s64 = ctx.r27.s64 + -12;
loc_82C47420:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r5,-12(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + -12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C47430;
	sub_82FA77C0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r25,r25,r10
	ctx.r25.u64 = ctx.r25.u64 + ctx.r10.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c47420
	if (ctx.cr6.lt) goto loc_82C47420;
loc_82C47450:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82662d30
	ctx.lr = 0x82C47474;
	sub_82662D30(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// blt cr6,0x82c473bc
	if (ctx.cr6.lt) goto loc_82C473BC;
	// lwz r11,264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c4749c
	if (ctx.cr6.eq) goto loc_82C4749C;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C4749C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C4749C:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r10,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x826631f0
	ctx.lr = 0x82C474C8;
	sub_826631F0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,292(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// bl 0x826631f0
	ctx.lr = 0x82C474F0;
	sub_826631F0(ctx, base);
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lis r6,8192
	ctx.r6.s64 = 536870912;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,296(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 296);
	// bl 0x826631f0
	ctx.lr = 0x82C47518;
	sub_826631F0(ctx, base);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x826660f8
	ctx.lr = 0x82C47524;
	sub_826660F8(ctx, base);
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668d08
	ctx.lr = 0x82C47530;
	sub_82668D08(ctx, base);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668b38
	ctx.lr = 0x82C4753C;
	sub_82668B38(ctx, base);
	// lwz r4,76(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82668790
	ctx.lr = 0x82C47548;
	sub_82668790(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r30,1
	ctx.r30.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,1152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1152);
	// rlwimi r11,r30,11,19,21
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r11.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r11,1152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1152, ctx.r11.u32);
	// ld r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// oris r9,r10,32768
	ctx.r9.u64 = ctx.r10.u64 | 2147483648;
	// std r9,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r9.u64);
	// lwz r8,56(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,1152(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 1152);
	// rlwimi r7,r30,14,16,18
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r7.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r7,1152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 1152, ctx.r7.u32);
	// ld r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// oris r3,r6,32768
	ctx.r3.u64 = ctx.r6.u64 | 2147483648;
	// std r3,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r3.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665358
	ctx.lr = 0x82C47594;
	sub_82665358(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665500
	ctx.lr = 0x82C475A4;
	sub_82665500(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,1176(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1176);
	// rlwimi r10,r30,11,19,21
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r10,1176(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1176, ctx.r10.u32);
	// ld r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// oris r8,r9,16384
	ctx.r8.u64 = ctx.r9.u64 | 1073741824;
	// std r8,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r8.u64);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,1176(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 1176);
	// rlwimi r6,r30,14,16,18
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r6.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r6,1176(r7)
	PPC_STORE_U32(ctx.r7.u32 + 1176, ctx.r6.u32);
	// ld r3,24(r7)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// oris r11,r3,16384
	ctx.r11.u64 = ctx.r3.u64 | 1073741824;
	// std r11,24(r7)
	PPC_STORE_U64(ctx.r7.u32 + 24, ctx.r11.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665358
	ctx.lr = 0x82C475EC;
	sub_82665358(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665500
	ctx.lr = 0x82C475FC;
	sub_82665500(ctx, base);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r9,1200(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1200);
	// rlwimi r9,r30,11,19,21
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r30.u32, 11) & 0x1C00) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE3FF);
	// stw r9,1200(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1200, ctx.r9.u32);
	// ld r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// oris r7,r8,8192
	ctx.r7.u64 = ctx.r8.u64 | 536870912;
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,1200(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 1200);
	// rlwimi r3,r30,14,16,18
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r30.u32, 14) & 0xE000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF1FFF);
	// stw r3,1200(r6)
	PPC_STORE_U32(ctx.r6.u32 + 1200, ctx.r3.u32);
	// ld r11,24(r6)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r6.u32 + 24);
	// oris r10,r11,8192
	ctx.r10.u64 = ctx.r11.u64 | 536870912;
	// std r10,24(r6)
	PPC_STORE_U64(ctx.r6.u32 + 24, ctx.r10.u64);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665358
	ctx.lr = 0x82C47644;
	sub_82665358(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82665500
	ctx.lr = 0x82C47654;
	sub_82665500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x826641c0
	ctx.lr = 0x82C47660;
	sub_826641C0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82663a78
	ctx.lr = 0x82C4766C;
	sub_82663A78(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82664ce8
	ctx.lr = 0x82C47678;
	sub_82664CE8(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,20
	ctx.r7.s64 = 20;
	// lwz r5,64(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82665f50
	ctx.lr = 0x82C47694;
	sub_82665F50(ctx, base);
	// li r6,6
	ctx.r6.s64 = 6;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x826748a0
	ctx.lr = 0x82C476A8;
	sub_826748A0(ctx, base);
	// bl 0x82a77ac0
	ctx.lr = 0x82C476AC;
	sub_82A77AC0(ctx, base);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lis r7,-32113
	ctx.r7.s64 = -2104557568;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r7,11792
	ctx.r5.s64 = ctx.r7.s64 + 11792;
	// lwzx r4,r9,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// bl 0x826775c0
	ctx.lr = 0x82C476CC;
	sub_826775C0(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c476e4
	if (ctx.cr6.eq) goto loc_82C476E4;
	// lwz r3,280(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C476E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C476E4:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82c47700
	if (ctx.cr6.lt) goto loc_82C47700;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
loc_82C47700:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4770C"))) PPC_WEAK_FUNC(sub_82C4770C);
PPC_FUNC_IMPL(__imp__sub_82C4770C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47710"))) PPC_WEAK_FUNC(sub_82C47710);
PPC_FUNC_IMPL(__imp__sub_82C47710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C47718;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-4240
	ctx.r29.s64 = ctx.r11.s64 + -4240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82668a48
	ctx.lr = 0x82C47730;
	sub_82668A48(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// and r3,r8,r30
	ctx.r3.u64 = ctx.r8.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c47788
	if (ctx.cr6.lt) goto loc_82C47788;
	// addi r3,r29,240
	ctx.r3.s64 = ctx.r29.s64 + 240;
	// bl 0x826686a0
	ctx.lr = 0x82C47758;
	sub_826686A0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c47788
	if (ctx.cr6.lt) goto loc_82C47788;
	// addi r3,r29,720
	ctx.r3.s64 = ctx.r29.s64 + 720;
	// bl 0x826686a0
	ctx.lr = 0x82C47778;
	sub_826686A0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
loc_82C47788:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C47790"))) PPC_WEAK_FUNC(sub_82C47790);
PPC_FUNC_IMPL(__imp__sub_82C47790) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r11,-3040
	ctx.r10.s64 = ctx.r11.s64 + -3040;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bl 0x82c47010
	ctx.lr = 0x82C477BC;
	sub_82C47010(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c45c30
	ctx.lr = 0x82C477C4;
	sub_82C45C30(ctx, base);
	// clrlwi r9,r30,31
	ctx.r9.u64 = ctx.r30.u32 & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c477e4
	if (ctx.cr6.eq) goto loc_82C477E4;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32810
	ctx.r4.u64 = ctx.r4.u64 | 32810;
	// bl 0x82691460
	ctx.lr = 0x82C477E0;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82C477E4:
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

__attribute__((alias("__imp__sub_82C477FC"))) PPC_WEAK_FUNC(sub_82C477FC);
PPC_FUNC_IMPL(__imp__sub_82C477FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47800"))) PPC_WEAK_FUNC(sub_82C47800);
PPC_FUNC_IMPL(__imp__sub_82C47800) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C4780C"))) PPC_WEAK_FUNC(sub_82C4780C);
PPC_FUNC_IMPL(__imp__sub_82C4780C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47810"))) PPC_WEAK_FUNC(sub_82C47810);
PPC_FUNC_IMPL(__imp__sub_82C47810) {
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
	// bl 0x82c4c310
	ctx.lr = 0x82C47828;
	sub_82C4C310(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 520, ctx.r11.u32);
	// stw r10,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r10.u32);
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
	// std r11,528(r31)
	PPC_STORE_U64(ctx.r31.u32 + 528, ctx.r11.u64);
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// stw r9,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82C47864"))) PPC_WEAK_FUNC(sub_82C47864);
PPC_FUNC_IMPL(__imp__sub_82C47864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47868"))) PPC_WEAK_FUNC(sub_82C47868);
PPC_FUNC_IMPL(__imp__sub_82C47868) {
	PPC_FUNC_PROLOGUE();
	// li r3,8
	ctx.r3.s64 = 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C47870"))) PPC_WEAK_FUNC(sub_82C47870);
PPC_FUNC_IMPL(__imp__sub_82C47870) {
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
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// std r11,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r11.u64);
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// lwz r8,44(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C478A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C478B8"))) PPC_WEAK_FUNC(sub_82C478B8);
PPC_FUNC_IMPL(__imp__sub_82C478B8) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// stw r11,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82C478FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C4790C"))) PPC_WEAK_FUNC(sub_82C4790C);
PPC_FUNC_IMPL(__imp__sub_82C4790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47910"))) PPC_WEAK_FUNC(sub_82C47910);
PPC_FUNC_IMPL(__imp__sub_82C47910) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C47918;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c479f0
	if (ctx.cr6.lt) goto loc_82C479F0;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// lis r3,1
	ctx.r3.s64 = 65536;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x82691410
	ctx.lr = 0x82C47950;
	sub_82691410(ctx, base);
	// stw r3,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c47968
	if (!ctx.cr6.eq) goto loc_82C47968;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82c479f0
	goto loc_82C479F0;
loc_82C47968:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r9,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r9.u32);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r8,548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 548, ctx.r8.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c47998
	if (ctx.cr6.eq) goto loc_82C47998;
	// stw r11,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r11.u32);
loc_82C47998:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c479bc
	if (ctx.cr6.eq) goto loc_82C479BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C479B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82C479BC:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82c479f0
	if (ctx.cr6.lt) goto loc_82C479F0;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c479e8
	if (ctx.cr6.eq) goto loc_82C479E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C479E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82C479E8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82c47a04
	if (!ctx.cr6.lt) goto loc_82C47A04;
loc_82C479F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C47A04:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C47A10"))) PPC_WEAK_FUNC(sub_82C47A10);
PPC_FUNC_IMPL(__imp__sub_82C47A10) {
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
	// lwz r3,524(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c47a44
	if (ctx.cr6.eq) goto loc_82C47A44;
	// lis r4,8332
	ctx.r4.s64 = 546045952;
	// ori r4,r4,32797
	ctx.r4.u64 = ctx.r4.u64 | 32797;
	// bl 0x82691460
	ctx.lr = 0x82C47A3C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
loc_82C47A44:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C47A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,132(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 132);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C47A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82C47A98"))) PPC_WEAK_FUNC(sub_82C47A98);
PPC_FUNC_IMPL(__imp__sub_82C47A98) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,80(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C47ADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C47AFC"))) PPC_WEAK_FUNC(sub_82C47AFC);
PPC_FUNC_IMPL(__imp__sub_82C47AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47B00"))) PPC_WEAK_FUNC(sub_82C47B00);
PPC_FUNC_IMPL(__imp__sub_82C47B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9264(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9264);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c47b60
	if (ctx.cr6.eq) {
		// ERROR 82C47B60
		return;
	}
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82c4d738
	ctx.lr = 0x82C47B44;
	sub_82C4D738(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47b58
	// ERROR 82C47B58
	return;
}

__attribute__((alias("__imp__sub_82C47B08"))) PPC_WEAK_FUNC(sub_82C47B08);
PPC_FUNC_IMPL(__imp__sub_82C47B08) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// addi r3,r3,520
	ctx.r3.s64 = ctx.r3.s64 + 520;
	// lwz r11,520(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c47b60
	if (ctx.cr6.eq) goto loc_82C47B60;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x82c4d738
	ctx.lr = 0x82C47B44;
	sub_82C4D738(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47b58
	goto loc_82C47B58;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82C47B58:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
loc_82C47B60:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c47b84
	if (ctx.cr6.eq) goto loc_82C47B84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
loc_82C47B84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C47B54"))) PPC_WEAK_FUNC(sub_82C47B54);
PPC_FUNC_IMPL(__imp__sub_82C47B54) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,520(r30)
	PPC_STORE_U32(ctx.r30.u32 + 520, ctx.r11.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c47b84
	if (ctx.cr6.eq) goto loc_82C47B84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47B7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r9.u32);
loc_82C47B84:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C47BA0"))) PPC_WEAK_FUNC(sub_82C47BA0);
PPC_FUNC_IMPL(__imp__sub_82C47BA0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C47BAC"))) PPC_WEAK_FUNC(sub_82C47BAC);
PPC_FUNC_IMPL(__imp__sub_82C47BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C47BB0"))) PPC_WEAK_FUNC(sub_82C47BB0);
PPC_FUNC_IMPL(__imp__sub_82C47BB0) {
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
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c47be8
	if (ctx.cr6.eq) goto loc_82C47BE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
loc_82C47BE8:
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

__attribute__((alias("__imp__sub_82C47C00"))) PPC_WEAK_FUNC(sub_82C47C00);
PPC_FUNC_IMPL(__imp__sub_82C47C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9288(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9288);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C47C10;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C47C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r25,r3,r23
	ctx.r25.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,540(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// addi r28,r30,540
	ctx.r28.s64 = ctx.r30.s64 + 540;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c47cfc
	if (ctx.cr6.eq) goto loc_82C47CFC;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c47c88
	if (!ctx.cr6.lt) goto loc_82C47C88;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82C47C88:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82c4eec8
	ctx.lr = 0x82C47CA8;
	sub_82C4EEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C47CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82c47cfc
	if (ctx.cr6.lt) goto loc_82C47CFC;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_82C47CFC:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82C47D00:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82c47e34
	if (!ctx.cr6.eq) goto loc_82C47E34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c47e34
	if (ctx.cr6.eq) goto loc_82C47E34;
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c47e34
	if (!ctx.cr6.eq) goto loc_82C47E34;
loc_82C47D1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c47d9c
	if (!ctx.cr6.eq) goto loc_82C47D9C;
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c47d48
	if (!ctx.cr6.eq) goto loc_82C47D48;
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82c4f390
	ctx.lr = 0x82C47D44;
	sub_82C4F390(ctx, base);
	// b 0x82c47d60
	goto loc_82C47D60;
loc_82C47D48:
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82c47d64
	if (!ctx.cr6.eq) goto loc_82C47D64;
	// stw r24,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r24.u32);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x82c4ea00
	ctx.lr = 0x82C47D60;
	sub_82C4EA00(ctx, base);
loc_82C47D60:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_82C47D64:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82c4efd8
	ctx.lr = 0x82C47D78;
	sub_82C4EFD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c47d90
	if (!ctx.cr6.eq) goto loc_82C47D90;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47d1c
	goto loc_82C47D1C;
loc_82C47D90:
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// bne cr6,0x82c47d9c
	if (!ctx.cr6.eq) goto loc_82C47D9C;
	// stw r24,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r24.u32);
loc_82C47D9C:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c47e34
	if (ctx.cr6.eq) goto loc_82C47E34;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c47db8
	if (!ctx.cr6.lt) goto loc_82C47DB8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82C47DB8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82c4eec8
	ctx.lr = 0x82C47DD8;
	sub_82C4EEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C47E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82c47e2c
	if (ctx.cr6.lt) goto loc_82C47E2C;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_82C47E2C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47d00
	goto loc_82C47D00;
loc_82C47E34:
	// addi r11,r29,-33
	ctx.r11.s64 = ctx.r29.s64 + -33;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// blt cr6,0x82c47eb0
	if (ctx.cr6.lt) goto loc_82C47EB0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c47eb0
	if (ctx.cr6.eq) goto loc_82C47EB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C47E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C47EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C47EB0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47ecc
	// ERROR 82C47ECC
	return;
}

__attribute__((alias("__imp__sub_82C47C08"))) PPC_WEAK_FUNC(sub_82C47C08);
PPC_FUNC_IMPL(__imp__sub_82C47C08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C47C10;
	__savegprlr_22(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// stw r22,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r22.u32);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// lwz r3,48(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82C47C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,116(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 116);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C47C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r25,r3,r23
	ctx.r25.u64 = ctx.r3.u64 + ctx.r23.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r5,540(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 540);
	// addi r28,r30,540
	ctx.r28.s64 = ctx.r30.s64 + 540;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c47cfc
	if (ctx.cr6.eq) goto loc_82C47CFC;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c47c88
	if (!ctx.cr6.lt) goto loc_82C47C88;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82C47C88:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82c4eec8
	ctx.lr = 0x82C47CA8;
	sub_82C4EEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C47CE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82c47cfc
	if (ctx.cr6.lt) goto loc_82C47CFC;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_82C47CFC:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82C47D00:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82c47e34
	if (!ctx.cr6.eq) goto loc_82C47E34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c47e34
	if (ctx.cr6.eq) goto loc_82C47E34;
	// lwz r11,544(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c47e34
	if (!ctx.cr6.eq) goto loc_82C47E34;
loc_82C47D1C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c47d9c
	if (!ctx.cr6.eq) goto loc_82C47D9C;
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c47d48
	if (!ctx.cr6.eq) goto loc_82C47D48;
	// lwz r11,508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 508);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82c4f390
	ctx.lr = 0x82C47D44;
	sub_82C4F390(ctx, base);
	// b 0x82c47d60
	goto loc_82C47D60;
loc_82C47D48:
	// lwz r11,500(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82c47d64
	if (!ctx.cr6.eq) goto loc_82C47D64;
	// stw r24,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r24.u32);
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// bl 0x82c4ea00
	ctx.lr = 0x82C47D60;
	sub_82C4EA00(ctx, base);
loc_82C47D60:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
loc_82C47D64:
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// bl 0x82c4efd8
	ctx.lr = 0x82C47D78;
	sub_82C4EFD8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c47d90
	if (!ctx.cr6.eq) goto loc_82C47D90;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47d1c
	goto loc_82C47D1C;
loc_82C47D90:
	// cmpwi cr6,r29,33
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 33, ctx.xer);
	// bne cr6,0x82c47d9c
	if (!ctx.cr6.eq) goto loc_82C47D9C;
	// stw r24,544(r30)
	PPC_STORE_U32(ctx.r30.u32 + 544, ctx.r24.u32);
loc_82C47D9C:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c47e34
	if (ctx.cr6.eq) goto loc_82C47E34;
	// stw r22,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r22.u32);
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c47db8
	if (!ctx.cr6.lt) goto loc_82C47DB8;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82C47DB8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r8,r31,88
	ctx.r8.s64 = ctx.r31.s64 + 88;
	// lwz r3,520(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// add r4,r11,r25
	ctx.r4.u64 = ctx.r11.u64 + ctx.r25.u64;
	// bl 0x82c4eec8
	ctx.lr = 0x82C47DD8;
	sub_82C4EEC8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r29,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r29.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r26,r11,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r26,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r26.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r8.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,116(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 116);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82C47E18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82c47e2c
	if (ctx.cr6.lt) goto loc_82C47E2C;
	// ld r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 104);
	// std r11,128(r30)
	PPC_STORE_U64(ctx.r30.u32 + 128, ctx.r11.u64);
	// std r11,0(r23)
	PPC_STORE_U64(ctx.r23.u32 + 0, ctx.r11.u64);
loc_82C47E2C:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47d00
	goto loc_82C47D00;
loc_82C47E34:
	// addi r11,r29,-33
	ctx.r11.s64 = ctx.r29.s64 + -33;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// ori r7,r10,65535
	ctx.r7.u64 = ctx.r10.u64 | 65535;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r6,r29
	ctx.r11.u64 = ctx.r6.u64 & ctx.r29.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r11,r11,0
	ctx.r11.s64 = ctx.r11.s64 + 0;
	// subfic r5,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r11.s64;
	// subfe r3,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r7
	ctx.r11.u64 = ctx.r3.u64 & ctx.r7.u64;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// blt cr6,0x82c47eb0
	if (ctx.cr6.lt) goto loc_82C47EB0;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c47eb0
	if (ctx.cr6.eq) goto loc_82C47EB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82C47E98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,72(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 72);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r4,r3,r7
	ctx.r4.u64 = ctx.r3.u64 + ctx.r7.u64;
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82C47EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C47EB0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82c47ecc
	goto loc_82C47ECC;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
loc_82C47ECC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C47EC0"))) PPC_WEAK_FUNC(sub_82C47EC0);
PPC_FUNC_IMPL(__imp__sub_82C47EC0) {
	PPC_FUNC_PROLOGUE();
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// stw r28,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

