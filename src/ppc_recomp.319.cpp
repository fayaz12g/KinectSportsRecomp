#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_830E4040"))) PPC_WEAK_FUNC(sub_830E4040);
PPC_FUNC_IMPL(__imp__sub_830E4040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f29,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f29.u64);
	// stfd f30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f30.u64);
	// stfd f31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// lfs f0,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f12,144(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f0,28(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 28, temp.u32);
	// lfs f10,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f10.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfs f11,32(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 32, temp.u32);
	// fmuls f9,f0,f0
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f8,f11,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fcmpu cr6,f8,f10
	ctx.cr6.compare(ctx.f8.f64, ctx.f10.f64);
	// bge cr6,0x830e409c
	if (!ctx.cr6.lt) goto loc_830E409C;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_830E409C:
	// lfs f13,68(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f12,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f9,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// fmuls f7,f0,f0
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f7
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f7.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// bgt cr6,0x830e410c
	if (ctx.cr6.gt) goto loc_830E410C;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_830E40D0:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r10,16
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 16, ctx.xer);
	// bge cr6,0x830e410c
	if (!ctx.cr6.lt) goto loc_830E410C;
	// lfs f8,64(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmr f9,f0
	ctx.f9.f64 = ctx.f0.f64;
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmr f4,f13
	ctx.f4.f64 = ctx.f13.f64;
	// fmuls f13,f7,f11
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f6,f0,f0
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f12,f13,f13,f6
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fcmpu cr6,f12,f10
	ctx.cr6.compare(ctx.f12.f64, ctx.f10.f64);
	// ble cr6,0x830e40d0
	if (!ctx.cr6.gt) goto loc_830E40D0;
loc_830E410C:
	// fsqrts f12,f12
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f5,-25140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -25140);
	ctx.f5.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsqrts f11,f8
	ctx.f11.f64 = double(float(sqrt(ctx.f8.f64)));
	// fsubs f8,f12,f10
	ctx.f8.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f3,f11,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fsubs f12,f8,f3
	ctx.f12.f64 = double(float(ctx.f8.f64 - ctx.f3.f64));
	// fabs f7,f12
	ctx.f7.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f7,f5
	ctx.cr6.compare(ctx.f7.f64, ctx.f5.f64);
	// blt cr6,0x830e413c
	if (ctx.cr6.lt) goto loc_830E413C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E413C:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e414c
	if (ctx.cr6.eq) goto loc_830E414C;
	// fmr f12,f5
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f5.f64;
loc_830E414C:
	// fdivs f2,f10,f12
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = double(float(ctx.f10.f64 / ctx.f12.f64));
	// lfs f1,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f1,f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// lfs f31,96(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f7,136(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	ctx.f7.f64 = double(temp.f32);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lfs f6,140(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	ctx.f6.f64 = double(temp.f32);
	// lfs f30,128(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,132(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f29.f64 = double(temp.f32);
	// lfs f12,-29856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -29856);
	ctx.f12.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lfs f11,27164(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27164);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f3,f2,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f3.f64));
	// fmuls f2,f2,f8
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f8.f64));
	// fmadds f8,f31,f31,f1
	ctx.f8.f64 = double(float(ctx.f31.f64 * ctx.f31.f64 + ctx.f1.f64));
	// fneg f1,f3
	ctx.f1.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// fmuls f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fabs f3,f8
	ctx.f3.u64 = ctx.f8.u64 & ~0x8000000000000000;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmadds f13,f1,f13,f4
	ctx.f13.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f4.f64));
	// fcmpu cr6,f3,f5
	ctx.cr6.compare(ctx.f3.f64, ctx.f5.f64);
	// fmadds f9,f2,f9,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f0.f64));
	// fsubs f4,f13,f12
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fsubs f3,f9,f12
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// fsel f2,f4,f13,f12
	ctx.f2.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fsel f1,f3,f9,f12
	ctx.f1.f64 = ctx.f3.f64 >= 0.0 ? ctx.f9.f64 : ctx.f12.f64;
	// fsubs f0,f2,f11
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f11.f64));
	// fsubs f13,f1,f11
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// fsel f12,f0,f11,f2
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f11.f64 : ctx.f2.f64;
	// fsel f11,f13,f11,f1
	ctx.f11.f64 = ctx.f13.f64 >= 0.0 ? ctx.f11.f64 : ctx.f1.f64;
	// fmuls f9,f12,f7
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// stfs f9,128(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 128, temp.u32);
	// fmuls f4,f11,f6
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// stfs f4,132(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// fsubs f3,f30,f9
	ctx.f3.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// stfs f3,152(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 152, temp.u32);
	// fsubs f0,f29,f4
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f4.f64));
	// blt cr6,0x830e41ec
	if (ctx.cr6.lt) goto loc_830E41EC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E41EC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e41fc
	if (ctx.cr6.eq) goto loc_830E41FC;
	// fmr f8,f5
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f5.f64;
loc_830E41FC:
	// lfs f13,124(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f12,f10,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 / ctx.f8.f64));
	// lfs f11,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// lfs f9,116(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// fmuls f7,f10,f7
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f7.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f5,f7,f7
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fmuls f3,f4,f12
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fsqrts f2,f3
	ctx.f2.f64 = double(float(sqrt(ctx.f3.f64)));
	// stfs f2,8(r5)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + 8, temp.u32);
	// lfd f29,-24(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f30,-16(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E4240"))) PPC_WEAK_FUNC(sub_830E4240);
PPC_FUNC_IMPL(__imp__sub_830E4240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830E4248;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d20
	ctx.lr = 0x830E4250;
	__savefpr_26(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,144(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// li r7,64
	ctx.r7.s64 = 64;
	// lfs f13,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f13.f64 = double(temp.f32);
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f13,92(r4)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r4.u32 + 92, temp.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f12,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stfs f12,192(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 192, temp.u32);
	// addi r31,r1,84
	ctx.r31.s64 = ctx.r1.s64 + 84;
	// lfs f30,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
	// li r11,32
	ctx.r11.s64 = 32;
	// lfs f11,156(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f10,f30,f11
	ctx.f10.f64 = double(float(ctx.f30.f64 / ctx.f11.f64));
	// stfs f10,96(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 96, temp.u32);
	// fmr f9,f10
	ctx.f9.f64 = ctx.f10.f64;
	// lfs f8,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f30,f8
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f8.f64));
	// stfs f7,196(r4)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r4.u32 + 196, temp.u32);
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// lfs f6,148(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f6,f10
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f10.f64));
	// stfs f5,80(r4)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r4.u32 + 80, temp.u32);
	// fdivs f0,f30,f5
	ctx.f0.f64 = double(float(ctx.f30.f64 / ctx.f5.f64));
	// lfs f3,152(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	ctx.f3.f64 = double(temp.f32);
	// fmuls f1,f3,f7
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f7.f64));
	// fdivs f12,f30,f1
	ctx.f12.f64 = double(float(ctx.f30.f64 / ctx.f1.f64));
	// stfs f0,84(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 84, temp.u32);
	// stfs f1,180(r4)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r4.u32 + 180, temp.u32);
	// fmr f4,f5
	ctx.f4.f64 = ctx.f5.f64;
	// stfs f12,184(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 184, temp.u32);
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lvx128 v0,r3,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 + 48;
	// lvx128 v11,r3,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v11,v0
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v10,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// stfs f10,0(r4)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f9,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f30,f9
	ctx.f8.f64 = double(float(ctx.f30.f64 - ctx.f9.f64));
	// fdivs f7,f30,f10
	ctx.f7.f64 = double(float(ctx.f30.f64 / ctx.f10.f64));
	// stfs f8,100(r4)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r4.u32 + 100, temp.u32);
	// lfs f6,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f6.f64 = double(temp.f32);
	// addi r11,r3,96
	ctx.r11.s64 = ctx.r3.s64 + 96;
	// li r27,80
	ctx.r27.s64 = 80;
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r4,4
	ctx.r9.s64 = ctx.r4.s64 + 4;
	// addi r8,r3,156
	ctx.r8.s64 = ctx.r3.s64 + 156;
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f4,f0,f7
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fneg f3,f5
	ctx.f3.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// fabs f2,f4
	ctx.f2.u64 = ctx.f4.u64 & ~0x8000000000000000;
	// fabs f1,f3
	ctx.f1.u64 = ctx.f3.u64 & ~0x8000000000000000;
	// fmuls f0,f1,f6
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f6.f64));
	// stfs f0,104(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 104, temp.u32);
	// lfs f12,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f30,f12
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// stfs f11,200(r4)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r4.u32 + 200, temp.u32);
	// lfs f10,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f2,f10
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f10.f64));
	// stfs f9,204(r4)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r4.u32 + 204, temp.u32);
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v10,v9,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v8,v9,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// lvx128 v11,r3,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r3,r27
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r11,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r11,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
loc_830E43B0:
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// vsubfp v0,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// lfsu f0,4(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v0,v9,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// vpermwi128 v12,v0,135
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v3,v12,v10
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v2,v4,v8
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vspltw v31,v1,0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// vspltw v13,v1,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xAA));
	// vspltw v12,v1,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x55));
	// vmulfp128 v0,v7,v31
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v31.f32)));
	// vmaddfp v0,v6,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v5,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v30,v0,v1
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// stvewx v30,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// stfsu f11,4(r10)
	temp.f32 = float(ctx.f11.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x830e43b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E43B0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r28,r1,88
	ctx.r28.s64 = ctx.r1.s64 + 88;
	// addi r31,r4,88
	ctx.r31.s64 = ctx.r4.s64 + 88;
	// addi r26,r4,-32
	ctx.r26.s64 = ctx.r4.s64 + -32;
	// lfd f26,-29848(r11)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r11.u32 + -29848);
	// li r27,2
	ctx.r27.s64 = 2;
	// lfs f27,-9836(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9836);
	ctx.f27.f64 = double(temp.f32);
loc_830E443C:
	// lfs f0,-8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f26
	ctx.f2.f64 = ctx.f26.f64;
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f28,f0,f13
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f28,0(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f31,f28,f27
	ctx.f31.f64 = double(float(ctx.f28.f64 * ctx.f27.f64));
	// stfs f31,-12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -12, temp.u32);
	// fdivs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 / ctx.f31.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x830E4460;
	sub_82FA30A8(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// stfs f29,-16(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + -16, temp.u32);
	// fdivs f28,f30,f28
	ctx.f28.f64 = double(float(ctx.f30.f64 / ctx.f28.f64));
	// addi r29,r31,-84
	ctx.r29.s64 = ctx.r31.s64 + -84;
	// li r30,15
	ctx.r30.s64 = 15;
loc_830E4474:
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// fsubs f1,f30,f31
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f31.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x830E4480;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fmuls f31,f29,f31
	ctx.f31.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// fsubs f13,f30,f0
	ctx.f13.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// stfsu f13,4(r29)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r29.u32 = ea;
	// bne 0x830e4474
	if (!ctx.cr0.eq) goto loc_830E4474;
	// stfsu f30,100(r26)
	temp.f32 = float(ctx.f30.f64);
	ea = 100 + ctx.r26.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r31,r31,100
	ctx.r31.s64 = ctx.r31.s64 + 100;
	// bne 0x830e443c
	if (!ctx.cr0.eq) goto loc_830E443C;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d6c
	ctx.lr = 0x830E44B8;
	__restfpr_26(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E44BC"))) PPC_WEAK_FUNC(sub_830E44BC);
PPC_FUNC_IMPL(__imp__sub_830E44BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E44C0"))) PPC_WEAK_FUNC(sub_830E44C0);
PPC_FUNC_IMPL(__imp__sub_830E44C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x830E44C8;
	__savegprlr_15(ctx, base);
	// stfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f29.u64);
	// stfd f30,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f30.u64);
	// stfd f31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r4.u32);
	// addi r30,r11,20358
	ctx.r30.s64 = ctx.r11.s64 + 20358;
	// stw r5,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r5.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r6,636(r1)
	PPC_STORE_U32(ctx.r1.u32 + 636, ctx.r6.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lbz r11,20358(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20358);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e451c
	if (!ctx.cr6.eq) goto loc_830E451C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e3d28
	ctx.lr = 0x830E4510;
	sub_830E3D28(ctx, base);
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e5024
	if (ctx.cr6.eq) goto loc_830E5024;
loc_830E451C:
	// li r10,2
	ctx.r10.s64 = 2;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// addi r11,r31,336
	ctx.r11.s64 = ctx.r31.s64 + 336;
	// vspltisw v2,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_set1_epi32(int(0x0)));
	// addi r30,r31,208
	ctx.r30.s64 = ctx.r31.s64 + 208;
	// addi r9,r28,24
	ctx.r9.s64 = ctx.r28.s64 + 24;
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// vcfux v1,v0,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v0.u32)));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// addi r8,r9,-36
	ctx.r8.s64 = ctx.r9.s64 + -36;
	// addi r6,r30,80
	ctx.r6.s64 = ctx.r30.s64 + 80;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lfs f6,24436(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f6.f64 = double(temp.f32);
	// addi r24,r11,16
	ctx.r24.s64 = ctx.r11.s64 + 16;
	// lfs f4,-25140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -25140);
	ctx.f4.f64 = double(temp.f32);
	// addi r23,r11,32
	ctx.r23.s64 = ctx.r11.s64 + 32;
	// addi r22,r11,48
	ctx.r22.s64 = ctx.r11.s64 + 48;
	// addi r3,r29,-16
	ctx.r3.s64 = ctx.r29.s64 + -16;
	// li r20,-32
	ctx.r20.s64 = -32;
	// addi r28,r30,64
	ctx.r28.s64 = ctx.r30.s64 + 64;
	// addi r27,r6,16
	ctx.r27.s64 = ctx.r6.s64 + 16;
	// addi r26,r6,32
	ctx.r26.s64 = ctx.r6.s64 + 32;
	// addi r25,r30,48
	ctx.r25.s64 = ctx.r30.s64 + 48;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r21,-64
	ctx.r21.s64 = -64;
	// li r18,64
	ctx.r18.s64 = 64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r29,48
	ctx.r29.s64 = 48;
	// li r17,-48
	ctx.r17.s64 = -48;
	// li r31,-16
	ctx.r31.s64 = -16;
	// addi r19,r9,21920
	ctx.r19.s64 = ctx.r9.s64 + 21920;
loc_830E45A4:
	// lwz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lvx128 v0,r10,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r16,r1,84
	ctx.r16.s64 = ctx.r1.s64 + 84;
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v8,v10,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// addi r9,r5,80
	ctx.r9.s64 = ctx.r5.s64 + 80;
	// vpermwi128 v7,v10,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r5,r18
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r18.u32) & ~0xF), VectorMaskL));
	// vsubfp v30,v0,v31
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v31.f32)));
	// stvx128 v10,r11,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r6,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r9
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r9,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r9,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r6,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r5,r29
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vor v26,v12,v12
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vpermwi128 v22,v12,135
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v21,v12,99
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// vaddfp v27,v0,v28
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v28.f32)));
	// lvx128 v11,r0,r19
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vor v25,v30,v30
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// vpermwi128 v24,v26,135
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0x78));
	// vpermwi128 v23,v26,99
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0x9C));
	// vpermwi128 v16,v30,99
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x9C));
	// vpermwi128 v15,v30,135
	_mm_store_si128((__m128i*)ctx.v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x78));
	// vpermwi128 v20,v25,99
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0x9C));
	// vmulfp128 v19,v24,v8
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v8.f32)));
	// vpermwi128 v18,v25,135
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), 0x78));
	// vmulfp128 v17,v23,v7
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v14,v7,v20
	_mm_store_ps(ctx.v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v20.f32)));
	// vmulfp128 v63,v8,v18
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v18.f32)));
	// vsubfp128 v62,v17,v19
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v19.f32)));
	// vsubfp128 v61,v63,v14
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v14.f32)));
	// vspltw128 v60,v62,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// vspltw128 v10,v62,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xAA));
	// vspltw128 v5,v62,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x55));
	// vspltw128 v59,v61,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vmulfp128 v12,v3,v60
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v60.f32)));
	// vspltw128 v7,v61,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xAA));
	// vspltw128 v3,v61,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x55));
	// vmulfp128 v8,v29,v59
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v59.f32)));
	// vmaddfp v13,v13,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v9,v7,v8
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v6,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v4,v3,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r11,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v58,v12,v12
	_mm_store_ps(ctx.v58.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v12,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v13,v58,v28
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp128 v13,v10,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v13,v27,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v27.f32), 228), 1));
	// vmsum4fp128 v57,v13,v11
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// stvewx128 v57,r0,r16
	ea = (ctx.r16.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lfsu f0,100(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	ea = 100 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v56,r10,r31
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f4
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// vpermwi128 v55,v56,99
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0x9C));
	// vpermwi128 v54,v56,135
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0x78));
	// fdivs f10,f6,f12
	ctx.f10.f64 = double(float(ctx.f6.f64 / ctx.f12.f64));
	// stfs f12,-20(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + -20, temp.u32);
	// stfs f10,-36(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -36, temp.u32);
	// stfs f11,60(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// vmulfp128 v53,v55,v15
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v15.f32)));
	// lvx128 v52,r0,r9
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v51,v54,v16
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v16.f32)));
	// lvx128 v50,r0,r6
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v49,v22,v55
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v55.f32)));
	// lvx128 v9,r0,r27
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v48,v21,v54
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v54.f32)));
	// lvx128 v13,r9,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// fdivs f9,f6,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f6.f64 / ctx.f11.f64));
	// stfs f9,56(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stvx128 v56,r11,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v47,v53,v51
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32)));
	// lvx128 v6,r9,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v43,v48,v49
	_mm_store_ps(ctx.v43.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// lvx128 v4,r0,r26
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// vor128 v93,v1,v1
	_mm_store_si128((__m128i*)ctx.v93.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// li r5,-64
	ctx.r5.s64 = -64;
	// vor128 v94,v2,v2
	_mm_store_si128((__m128i*)ctx.v94.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// addi r16,r1,88
	ctx.r16.s64 = ctx.r1.s64 + 88;
	// vor128 v45,v93,v93
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_load_si128((__m128i*)ctx.v93.u8));
	// vsubfp128 v37,v94,v93
	_mm_store_ps(ctx.v37.f32, _mm_sub_ps(_mm_load_ps(ctx.v94.f32), _mm_load_ps(ctx.v93.f32)));
	// vspltw128 v42,v47,0
	_mm_store_si128((__m128i*)ctx.v42.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// vspltw128 v41,v43,0
	_mm_store_si128((__m128i*)ctx.v41.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xFF));
	// vspltw128 v10,v47,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xAA));
	// vspltw128 v7,v43,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0xAA));
	// vmulfp128 v12,v52,v42
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v42.f32)));
	// vspltw128 v5,v47,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0x55));
	// vmulfp128 v8,v50,v41
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v41.f32)));
	// vspltw128 v3,v43,2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v43.u32), 0x55));
	// vrlimi128 v37,v45,1,0
	_mm_store_ps(ctx.v37.f32, _mm_blend_ps(_mm_load_ps(ctx.v37.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 1));
	// vor128 v92,v37,v37
	_mm_store_si128((__m128i*)ctx.v92.u8, _mm_load_si128((__m128i*)ctx.v37.u8));
	// vmaddfp v13,v13,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v12,v9,v7,v8
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v6,v5,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v4,v3,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v40,v13,v13
	_mm_store_ps(ctx.v40.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v13,v12,v12
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v40,v28
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp128 v12,v13,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vrlimi128 v12,v27,1,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v27.f32), 228), 1));
	// vmsum4fp128 v39,v12,v11
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// stvewx128 v39,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lfs f8,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f8,f4
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f4.f64));
	// fdivs f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f5,12(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// lvx128 v87,r0,r23
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r11,r17
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// lvx128 v90,r9,r4
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v86,r0,r24
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v89,r9,r7
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r20
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r11,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stfs f5,48(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// lfs f2,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// fmr f3,f5
	ctx.f3.f64 = ctx.f5.f64;
	// stfs f2,52(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// vmulfp128 v12,v87,v38
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v87.f32), _mm_load_ps(ctx.v38.f32)));
	// vor128 v0,v90,v90
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v90.u8));
	// vsubfp128 v10,v86,v89
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v86.f32), _mm_load_ps(ctx.v89.f32)));
	// lvx128 v88,r0,r22
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v91,r9,r29
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vor128 v13,v90,v90
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v90.u8));
	// vsubfp128 v8,v86,v89
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v86.f32), _mm_load_ps(ctx.v89.f32)));
	// vmaddfp v0,v0,v11,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v10,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v36,v93,v0
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v93.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx128 v36,r0,r16
	ea = (ctx.r16.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v12,r11,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v35,r0,r11
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v87,v35
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v87.f32), _mm_load_ps(ctx.v35.f32)));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// vmaddfp v0,v8,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v34,v93,v0
	_mm_store_ps(ctx.v34.f32, _mm_dp_ps(_mm_load_ps(ctx.v93.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx128 v34,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v34.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,36(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f11,32(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
	// fadds f10,f0,f1
	ctx.f10.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfsu f10,36(r8)
	temp.f32 = float(ctx.f10.f64);
	ea = 36 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x830e45a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E45A4;
	// lwz r22,628(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// addi r18,r22,48
	ctx.r18.s64 = ctx.r22.s64 + 48;
	// lwz r10,144(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 144);
	// lwz r11,48(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 48);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e48bc
	if (!ctx.cr6.eq) goto loc_830E48BC;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// lvx128 v10,r11,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vspltw v8,v10,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lvx128 v13,r30,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// vspltw v9,v13,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lvx128 v12,r0,r19
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v6,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v4,r0,r6
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// lvx128 v31,r0,r5
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r3
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v30,v31
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v31.f32)));
	// vmulfp128 v8,v8,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v3,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v9,v0,v8
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v11,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v29,v13,v0
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v28,v29,v12
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v28,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x830e4904
	goto loc_830E4904;
loc_830E48BC:
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lvx128 v0,r30,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// lvx128 v13,r0,r19
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v8,v9,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v6,v7
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v11,v11,v8
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v5,v0,v13
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v5,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
loc_830E4904:
	// vor128 v93,v1,v1
	_mm_store_si128((__m128i*)ctx.v93.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// li r11,2
	ctx.r11.s64 = 2;
	// vor128 v94,v2,v2
	_mm_store_si128((__m128i*)ctx.v94.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// lwz r27,636(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r21,r27,16
	ctx.r21.s64 = ctx.r27.s64 + 16;
	// lfs f3,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f2.f64 = double(temp.f32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// vsubfp128 v13,v94,v93
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v94.f32), _mm_load_ps(ctx.v93.f32)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f30.f64 = ctx.f1.f64;
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// vrlimi128 v13,v93,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v93.f32), 228), 1));
	// vor128 v92,v13,v13
	_mm_store_si128((__m128i*)ctx.v92.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
loc_830E4950:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x830e4a1c
	if (ctx.cr6.eq) goto loc_830E4A1C;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r6,32
	ctx.r10.s64 = ctx.r6.s64 + 32;
	// lvx128 v88,r30,r29
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// vspltw128 v11,v88,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v88.u32), 0x0));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// lvx128 v91,r11,r29
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// vspltw128 v8,v91,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v91.u32), 0x0));
	// lvx128 v9,r10,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// addi r10,r30,32
	ctx.r10.s64 = ctx.r30.s64 + 32;
	// vmulfp128 v7,v9,v88
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v88.f32)));
	// vmulfp128 v5,v10,v91
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v91.f32)));
	// lvlx v4,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmulfp128 v12,v13,v8
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32)));
	// vspltw v0,v4,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// lvx128 v86,r0,r9
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r28,r1,84
	ctx.r28.s64 = ctx.r1.s64 + 84;
	// lvx128 v89,r0,r8
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v10,v86,v86
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v86.u8));
	// lvx128 v87,r0,r10
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v8,v89,v89
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v89.u8));
	// lvx128 v90,r0,r11
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v11,v87,v87
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v87.u8));
	// vor128 v9,v90,v90
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v90.u8));
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvewx v3,r0,r28
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vaddfp v2,v3,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v11,v0,v7,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvewx v2,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// vmaddfp v10,v0,v6,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v0,v0,v5,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v8,v13,v12,v8
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v87,v11,v11
	_mm_store_si128((__m128i*)ctx.v87.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v86,v10,v10
	_mm_store_si128((__m128i*)ctx.v86.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor128 v90,v0,v0
	_mm_store_si128((__m128i*)ctx.v90.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v89,v8,v8
	_mm_store_si128((__m128i*)ctx.v89.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// stvx128 v87,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v86,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v90,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v89,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830E4A1C:
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// addi r5,r5,96
	ctx.r5.s64 = ctx.r5.s64 + 96;
	// addi r6,r6,160
	ctx.r6.s64 = ctx.r6.s64 + 160;
	// bdnz 0x830e4950
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E4950;
	// lwz r26,620(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lfs f0,68(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 68);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,164(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lis r19,-32256
	ctx.r19.s64 = -2113929216;
	// lis r16,-32256
	ctx.r16.s64 = -2113929216;
	// lwz r25,612(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// addi r9,r27,24
	ctx.r9.s64 = ctx.r27.s64 + 24;
	// lfs f11,100(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// addi r24,r22,68
	ctx.r24.s64 = ctx.r22.s64 + 68;
	// lfs f10,200(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 200);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f0
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lfs f5,104(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 104);
	ctx.f5.f64 = double(temp.f32);
	// lfs f0,204(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 204);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f31,8(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 8, temp.u32);
	// addi r23,r22,164
	ctx.r23.s64 = ctx.r22.s64 + 164;
	// stfs f31,44(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 44, temp.u32);
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// addi r6,r30,32
	ctx.r6.s64 = ctx.r30.s64 + 32;
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// addi r10,r22,72
	ctx.r10.s64 = ctx.r22.s64 + 72;
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r28,-80
	ctx.r28.s64 = -80;
	// fmadds f13,f5,f12,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f12.f64 + ctx.f9.f64));
	// lfs f5,11504(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 11504);
	ctx.f5.f64 = double(temp.f32);
	// fmadds f12,f0,f12,f8
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f8.f64));
	// lfs f8,11556(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 11556);
	ctx.f8.f64 = double(temp.f32);
	// stfs f13,204(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// li r3,-64
	ctx.r3.s64 = -64;
	// stfs f12,364(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 364, temp.u32);
loc_830E4AB0:
	// lvx128 v87,r0,r6
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lwz r19,-24(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24);
	// lvx128 v0,r11,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r16,r1,80
	ctx.r16.s64 = ctx.r1.s64 + 80;
	// vmulfp128 v12,v87,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v87.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v86,r0,r8
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r17
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// addi r15,r1,88
	ctx.r15.s64 = ctx.r1.s64 + 88;
	// lvx128 v9,r11,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v90,r19,r4
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r19.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vor128 v0,v90,v90
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v90.u8));
	// lvx128 v89,r19,r7
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r19.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v10,v86,v89
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v86.f32), _mm_load_ps(ctx.v89.f32)));
	// lvx128 v91,r19,r29
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r19.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v88,r0,r5
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor128 v13,v90,v90
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v90.u8));
	// vsubfp128 v8,v86,v89
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v86.f32), _mm_load_ps(ctx.v89.f32)));
	// vmaddfp v0,v0,v11,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v10,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v6,v93,v0
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v93.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v6,r0,r16
	ea = (ctx.r16.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// lvx128 v11,r11,r20
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r11,r31
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v87,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v87.f32), _mm_load_ps(ctx.v5.f32)));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v8,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v4,v93,v0
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v93.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v4,r0,r15
	ea = (ctx.r15.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lbz r19,8(r10)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fabs f9,f13
	ctx.f9.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f13,-4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f13,f5,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f5.f64 + ctx.f12.f64));
	// lfs f12,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fmuls f9,f9,f11
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// beq cr6,0x830e4bcc
	if (ctx.cr6.eq) goto loc_830E4BCC;
	// lfs f12,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f12.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lfs f11,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f29,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f0,f11,f8,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmuls f29,f29,f12
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f12.f64));
	// lfs f11,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,20(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// fmuls f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmuls f0,f0,f8
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fabs f29,f0
	ctx.f29.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f29,f12
	ctx.cr6.compare(ctx.f29.f64, ctx.f12.f64);
	// ble cr6,0x830e4bbc
	if (!ctx.cr6.gt) goto loc_830E4BBC;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x830e4bb8
	if (!ctx.cr6.gt) goto loc_830E4BB8;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// b 0x830e4bd8
	goto loc_830E4BD8;
loc_830E4BB8:
	// fneg f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f12.u64 ^ 0x8000000000000000;
loc_830E4BBC:
	// fsubs f0,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x830e4bd8
	goto loc_830E4BD8;
loc_830E4BCC:
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// lfs f11,-24(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
loc_830E4BD8:
	// lfs f13,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -12);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// beq cr6,0x830e4c0c
	if (ctx.cr6.eq) goto loc_830E4C0C;
	// fmuls f11,f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// lfs f29,-8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f10,f10,f10,f11
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f11.f64));
	// fsqrts f11,f10
	ctx.f11.f64 = double(float(sqrt(ctx.f10.f64)));
	// fmadds f10,f11,f13,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fsubs f0,f10,f29
	ctx.f0.f64 = double(float(ctx.f10.f64 - ctx.f29.f64));
	// fsel f13,f0,f29,f10
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f29.f64 : ctx.f10.f64;
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f0,f11,f31,f13
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
loc_830E4C0C:
	// fmuls f13,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// lfs f0,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f11,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// stfs f13,56(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// stfs f13,60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// fadds f9,f13,f4
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f4.f64));
	// fmadds f13,f11,f10,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f10.f64 + ctx.f12.f64));
	// stfs f13,48(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// fdivs f12,f6,f9
	ctx.f12.f64 = double(float(ctx.f6.f64 / ctx.f9.f64));
	// stfs f12,64(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f12,68(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// bdnz 0x830e4ab0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E4AB0;
	// lfs f11,172(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 172);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,76(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f11
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fcmpu cr6,f12,f31
	ctx.cr6.compare(ctx.f12.f64, ctx.f31.f64);
	// ble cr6,0x830e4d14
	if (!ctx.cr6.gt) goto loc_830E4D14;
	// lfs f12,0(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsel f13,f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// lfs f10,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fabs f9,f12
	ctx.f9.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fabs f8,f10
	ctx.f8.u64 = ctx.f10.u64 & ~0x8000000000000000;
	// lfs f7,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fadds f5,f9,f8
	ctx.f5.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fmuls f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f7.f64));
	// fmuls f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// blt cr6,0x830e4c98
	if (ctx.cr6.lt) goto loc_830E4C98;
	// fmr f0,f6
	ctx.f0.f64 = ctx.f6.f64;
	// b 0x830e4c9c
	goto loc_830E4C9C;
loc_830E4C98:
	// fdivs f0,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
loc_830E4C9C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsel f11,f11,f11,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f11.f64 >= 0.0 ? ctx.f11.f64 : ctx.f31.f64;
	// lfs f13,11704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11704);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f12,f11
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// fsel f0,f10,f13,f0
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// blt cr6,0x830e4cc0
	if (ctx.cr6.lt) goto loc_830E4CC0;
	// fmr f12,f6
	ctx.f12.f64 = ctx.f6.f64;
	// b 0x830e4cc4
	goto loc_830E4CC4;
loc_830E4CC0:
	// fdivs f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
loc_830E4CC4:
	// fsubs f4,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f11
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f9,208(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// lfs f10,212(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f0,f3
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// lfs f8,368(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	ctx.f8.f64 = double(temp.f32);
	// fdivs f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f0.f64));
	// lfs f5,372(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,212(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// fsel f13,f4,f13,f12
	ctx.f13.f64 = ctx.f4.f64 >= 0.0 ? ctx.f13.f64 : ctx.f12.f64;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f11,f13,f8
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f8.f64));
	// stfs f11,368(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 368, temp.u32);
	// fdivs f10,f5,f13
	ctx.f10.f64 = double(float(ctx.f5.f64 / ctx.f13.f64));
	// stfs f10,372(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// fmuls f7,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// fsqrts f9,f12
	ctx.f9.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f30,f9,f1
	ctx.f30.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// fmuls f2,f9,f2
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
loc_830E4D14:
	// fmuls f0,f7,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// fmr f13,f6
	ctx.f13.f64 = ctx.f6.f64;
	// fmr f9,f31
	ctx.f9.f64 = ctx.f31.f64;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// fmr f10,f6
	ctx.f10.f64 = ctx.f6.f64;
	// fmsubs f0,f2,f3,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f3.f64 - ctx.f0.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f31
	ctx.cr6.compare(ctx.f11.f64, ctx.f31.f64);
	// blt cr6,0x830e4d54
	if (ctx.cr6.lt) goto loc_830E4D54;
	// fdivs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f0.f64));
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f0,f7
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// fmuls f10,f0,f3
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f3.f64));
	// fneg f12,f12
	ctx.f12.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fneg f9,f11
	ctx.f9.u64 = ctx.f11.u64 ^ 0x8000000000000000;
loc_830E4D54:
	// lfs f0,200(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f13,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// lfs f5,240(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,400(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,384(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f12,f5,f3
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmuls f11,f2,f4
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// lfs f1,192(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,244(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// fabs f5,f1
	ctx.f5.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfs f4,404(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,192(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 192);
	ctx.f3.f64 = double(temp.f32);
	// fnmadds f9,f13,f9,f8
	ctx.f9.f64 = double(float(-(ctx.f13.f64 * ctx.f9.f64 + ctx.f8.f64)));
	// stfs f9,228(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// fnmadds f10,f13,f10,f7
	ctx.f10.f64 = double(float(-(ctx.f13.f64 * ctx.f10.f64 + ctx.f7.f64)));
	// stfs f10,388(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 388, temp.u32);
	// fmuls f2,f12,f12
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmuls f1,f11,f11
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// fcmpu cr6,f5,f3
	ctx.cr6.compare(ctx.f5.f64, ctx.f3.f64);
	// fmuls f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f13,f10,f4
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f4.f64));
	// fmadds f8,f0,f0,f2
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmadds f7,f13,f13,f1
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f1.f64));
	// blt cr6,0x830e4dd4
	if (ctx.cr6.lt) goto loc_830E4DD4;
	// stfs f31,20(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// stfs f31,24(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
	// stfs f31,56(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// stfs f31,60(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 60, temp.u32);
loc_830E4DD4:
	// fcmpu cr6,f8,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// bgt cr6,0x830e4e14
	if (ctx.cr6.gt) goto loc_830E4E14;
	// fcmpu cr6,f7,f6
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// bgt cr6,0x830e4e0c
	if (ctx.cr6.gt) goto loc_830E4E0C;
	// stfs f0,28(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 28, temp.u32);
	// addi r11,r27,36
	ctx.r11.s64 = ctx.r27.s64 + 36;
	// stfs f12,32(r27)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// stfs f13,64(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 64, temp.u32);
	// stfs f11,68(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 68, temp.u32);
	// stfs f31,0(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f31,36(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// stfs f31,4(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f31,40(r27)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
	// b 0x830e4f24
	goto loc_830E4F24;
loc_830E4E0C:
	// fcmpu cr6,f8,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f6.f64);
	// ble cr6,0x830e4e34
	if (!ctx.cr6.gt) goto loc_830E4E34;
loc_830E4E14:
	// fdivs f0,f6,f8
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f8.f64));
	// lfs f13,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r27,24
	ctx.r11.s64 = ctx.r27.s64 + 24;
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,20(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 20, temp.u32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f10,24(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 24, temp.u32);
loc_830E4E34:
	// fcmpu cr6,f7,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f7.f64, ctx.f6.f64);
	// ble cr6,0x830e4e58
	if (!ctx.cr6.gt) goto loc_830E4E58;
	// fdivs f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 / ctx.f7.f64));
	// lfs f13,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,60(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f11,56(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 56, temp.u32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f10,60(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 60, temp.u32);
loc_830E4E58:
	// fcmpu cr6,f8,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f8.f64, ctx.f7.f64);
	// ble cr6,0x830e4e6c
	if (!ctx.cr6.gt) goto loc_830E4E6C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x830e4e74
	goto loc_830E4E74;
loc_830E4E6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_830E4E74:
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,200
	ctx.r8.s64 = ctx.r1.s64 + 200;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// li r9,2
	ctx.r9.s64 = 2;
	// rlwinm r7,r10,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
loc_830E4E88:
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r5,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// lfs f0,112(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r5,r10,r27
	ctx.r5.u64 = ctx.r10.u64 + ctx.r27.u64;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// fneg f11,f12
	ctx.f11.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f11,132(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 132, temp.u32);
	// bl 0x830e4040
	ctx.lr = 0x830E4ED0;
	sub_830E4040(ctx, base);
	// lfs f10,132(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r7,r8
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	ctx.f9.f64 = double(temp.f32);
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// fmadds f8,f10,f30,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f30.f64 + ctx.f9.f64));
	// stfsx f8,r7,r8
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, temp.u32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x830e4e88
	if (!ctx.cr0.eq) goto loc_830E4E88;
	// lfs f10,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,248(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,408(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f8,200(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f10,f12
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f12.f64));
	// lfs f6,360(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	ctx.f6.f64 = double(temp.f32);
	// lfs f10,388(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f9.f64 = double(temp.f32);
	// stfs f11,0(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f7,36(r27)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r27.u32 + 36, temp.u32);
	// stfs f8,4(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// stfs f6,40(r27)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r27.u32 + 40, temp.u32);
loc_830E4F24:
	// lfs f0,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	ctx.f0.f64 = double(temp.f32);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f13,224(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// stfs f0,52(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 52, temp.u32);
	// addi r6,r30,16
	ctx.r6.s64 = ctx.r30.s64 + 16;
	// stfs f13,0(r21)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r21.u32 + 0, temp.u32);
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// lfs f12,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f9
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// stfs f11,12(r27)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r27.u32 + 12, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f9,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f10
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f8,48(r27)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r27.u32 + 48, temp.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r7,r18,-96
	ctx.r7.s64 = ctx.r18.s64 + -96;
	// li r3,84
	ctx.r3.s64 = 84;
loc_830E4F6C:
	// lwzu r10,96(r7)
	ea = 96 + ctx.r7.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lvx128 v88,r0,r4
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw128 v9,v88,3
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v88.u32), 0x0));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// lvlx v11,r11,r3
	temp.u32 = ctx.r11.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v11,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// lvx128 v91,r10,r29
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// vspltw128 v4,v91,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v91.u32), 0x0));
	// lvx128 v8,r9,r31
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v5,v12,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v6,v8,v88
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v88.f32)));
	// lvx128 v86,r0,r6
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v7,v7,v91
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v91.f32)));
	// lvx128 v87,r0,r5
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v12,v4
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v89,r0,r8
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v90,r0,r10
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v11,v87,v87
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v87.u8));
	// vor128 v10,v86,v86
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v86.u8));
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// vor128 v9,v90,v90
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v90.u8));
	// addi r11,r11,160
	ctx.r11.s64 = ctx.r11.s64 + 160;
	// vor128 v8,v89,v89
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v89.u8));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmaddfp v10,v0,v5,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v10.f32)));
	// lvewx v3,r0,r30
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vmaddfp v6,v0,v6,v11
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v11.f32)));
	// vaddfp v2,v3,v0
	_mm_store_ps(ctx.v2.f32, _mm_add_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v0,v7,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v9.f32)));
	// vnmsubfp v11,v13,v12,v8
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v86,v10,v10
	_mm_store_si128((__m128i*)ctx.v86.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor128 v87,v6,v6
	_mm_store_si128((__m128i*)ctx.v87.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// stvewx v2,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v90,v0,v0
	_mm_store_si128((__m128i*)ctx.v90.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v89,v11,v11
	_mm_store_si128((__m128i*)ctx.v89.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// stvx128 v86,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v87,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v90,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v89,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x830e4f6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E4F6C;
loc_830E5024:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f29,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f30,-160(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// lfd f31,-152(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5038"))) PPC_WEAK_FUNC(sub_830E5038);
PPC_FUNC_IMPL(__imp__sub_830E5038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E503C"))) PPC_WEAK_FUNC(sub_830E503C);
PPC_FUNC_IMPL(__imp__sub_830E503C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5040"))) PPC_WEAK_FUNC(sub_830E5040);
PPC_FUNC_IMPL(__imp__sub_830E5040) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e5064
	if (ctx.cr6.eq) goto loc_830E5064;
	// bl 0x82d2bfc8
	ctx.lr = 0x830E5064;
	sub_82D2BFC8(ctx, base);
loc_830E5064:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e5074
	if (ctx.cr6.eq) goto loc_830E5074;
	// bl 0x82d2bfc8
	ctx.lr = 0x830E5074;
	sub_82D2BFC8(ctx, base);
loc_830E5074:
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

__attribute__((alias("__imp__sub_830E5088"))) PPC_WEAK_FUNC(sub_830E5088);
PPC_FUNC_IMPL(__imp__sub_830E5088) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dcfbb0
	sub_82DCFBB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E509C"))) PPC_WEAK_FUNC(sub_830E509C);
PPC_FUNC_IMPL(__imp__sub_830E509C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E50A0"))) PPC_WEAK_FUNC(sub_830E50A0);
PPC_FUNC_IMPL(__imp__sub_830E50A0) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d2bfc8
	ctx.lr = 0x830E50C4;
	sub_82D2BFC8(ctx, base);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830e50f4
	if (ctx.cr6.eq) goto loc_830E50F4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830e50e4
	if (ctx.cr6.eq) goto loc_830E50E4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dcfdd0
	ctx.lr = 0x830E50E4;
	sub_82DCFDD0(ctx, base);
loc_830E50E4:
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82d2c0a0
	ctx.lr = 0x830E50EC;
	sub_82D2C0A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_830E50F4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830e5110
	if (ctx.cr6.eq) goto loc_830E5110;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dc9e30
	ctx.lr = 0x830E5110;
	sub_82DC9E30(ctx, base);
loc_830E5110:
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

__attribute__((alias("__imp__sub_830E5128"))) PPC_WEAK_FUNC(sub_830E5128);
PPC_FUNC_IMPL(__imp__sub_830E5128) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82d2bfc8
	ctx.lr = 0x830E514C;
	sub_82D2BFC8(ctx, base);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830e517c
	if (ctx.cr6.eq) goto loc_830E517C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830e516c
	if (ctx.cr6.eq) goto loc_830E516C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dcfdd0
	ctx.lr = 0x830E516C;
	sub_82DCFDD0(ctx, base);
loc_830E516C:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82d2c0a0
	ctx.lr = 0x830E5174;
	sub_82D2C0A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_830E517C:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830e5198
	if (ctx.cr6.eq) goto loc_830E5198;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82dc9e30
	ctx.lr = 0x830E5198;
	sub_82DC9E30(ctx, base);
loc_830E5198:
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

__attribute__((alias("__imp__sub_830E51B0"))) PPC_WEAK_FUNC(sub_830E51B0);
PPC_FUNC_IMPL(__imp__sub_830E51B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830E51B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r8,r10,-11484
	ctx.r8.s64 = ctx.r10.s64 + -11484;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r9,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r9.u16);
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82d372a8
	ctx.lr = 0x830E51F4;
	sub_82D372A8(ctx, base);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r6,r7,23292
	ctx.r6.s64 = ctx.r7.s64 + 23292;
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
	// stw r6,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r6.u32);
	// bne cr6,0x830e5218
	if (!ctx.cr6.eq) goto loc_830E5218;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e5238
	if (ctx.cr6.eq) goto loc_830E5238;
loc_830E5218:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e5228
	if (ctx.cr6.eq) goto loc_830E5228;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82d2bfc8
	ctx.lr = 0x830E5228;
	sub_82D2BFC8(ctx, base);
loc_830E5228:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e5238
	if (ctx.cr6.eq) goto loc_830E5238;
	// bl 0x82d2bfc8
	ctx.lr = 0x830E5238;
	sub_82D2BFC8(ctx, base);
loc_830E5238:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5244"))) PPC_WEAK_FUNC(sub_830E5244);
PPC_FUNC_IMPL(__imp__sub_830E5244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5248"))) PPC_WEAK_FUNC(sub_830E5248);
PPC_FUNC_IMPL(__imp__sub_830E5248) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r11,23292
	ctx.r10.s64 = ctx.r11.s64 + 23292;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830e5284
	if (ctx.cr6.eq) goto loc_830E5284;
	// bl 0x82d2c0a0
	ctx.lr = 0x830E5280;
	sub_82D2C0A0(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
loc_830E5284:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e5298
	if (ctx.cr6.eq) goto loc_830E5298;
	// bl 0x82d2c0a0
	ctx.lr = 0x830E5294;
	sub_82D2C0A0(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_830E5298:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d37568
	ctx.lr = 0x830E52AC;
	sub_82D37568(ctx, base);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,10816
	ctx.r8.s64 = ctx.r9.s64 + 10816;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_830E52D0"))) PPC_WEAK_FUNC(sub_830E52D0);
PPC_FUNC_IMPL(__imp__sub_830E52D0) {
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
	// bl 0x82d2d090
	ctx.lr = 0x830E52F0;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e5314
	if (!ctx.cr6.eq) goto loc_830E5314;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x830E5314;
	sub_82D2DED0(ctx, base);
loc_830E5314:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// bl 0x82d2d090
	ctx.lr = 0x830E5338;
	sub_82D2D090(ctx, base);
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r5,r7,2
	ctx.r5.u64 = ctx.r7.u32 & 0x3FFFFFFF;
	// cmpw cr6,r6,r5
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x830e535c
	if (!ctx.cr6.eq) goto loc_830E535C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x830E535C;
	sub_82D2DED0(ctx, base);
loc_830E535C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,28(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_830E5394"))) PPC_WEAK_FUNC(sub_830E5394);
PPC_FUNC_IMPL(__imp__sub_830E5394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5398"))) PPC_WEAK_FUNC(sub_830E5398);
PPC_FUNC_IMPL(__imp__sub_830E5398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E53A0;
	__savegprlr_28(ctx, base);
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
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// b 0x830e5400
	goto loc_830E5400;
loc_830E53B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E53E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x830e541c
	if (ctx.cr0.lt) goto loc_830E541C;
	// lis r11,84
	ctx.r11.s64 = 5505024;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x830e541c
	if (!ctx.cr6.eq) goto loc_830E541C;
	// li r3,50
	ctx.r3.s64 = 50;
	// bl 0x82a77720
	ctx.lr = 0x830E5400;
	sub_82A77720(ctx, base);
loc_830E5400:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E5414;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e53b8
	if (!ctx.cr0.lt) goto loc_830E53B8;
loc_830E541C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5424"))) PPC_WEAK_FUNC(sub_830E5424);
PPC_FUNC_IMPL(__imp__sub_830E5424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5428"))) PPC_WEAK_FUNC(sub_830E5428);
PPC_FUNC_IMPL(__imp__sub_830E5428) {
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
	// bl 0x830e5910
	ctx.lr = 0x830E5440;
	sub_830E5910(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-29804
	ctx.r11.s64 = ctx.r11.s64 + -29804;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// addi r9,r9,-29772
	ctx.r9.s64 = ctx.r9.s64 + -29772;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830E5484"))) PPC_WEAK_FUNC(sub_830E5484);
PPC_FUNC_IMPL(__imp__sub_830E5484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5488"))) PPC_WEAK_FUNC(sub_830E5488);
PPC_FUNC_IMPL(__imp__sub_830E5488) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
loc_830E548C:
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
	// bne 0x830e548c
	if (!ctx.cr0.eq) goto loc_830E548C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E54AC"))) PPC_WEAK_FUNC(sub_830E54AC);
PPC_FUNC_IMPL(__imp__sub_830E54AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E54B0"))) PPC_WEAK_FUNC(sub_830E54B0);
PPC_FUNC_IMPL(__imp__sub_830E54B0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,160
	ctx.r11.s64 = ctx.r3.s64 + 160;
loc_830E54B4:
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
	// bne 0x830e54b4
	if (!ctx.cr0.eq) goto loc_830E54B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E54F8"))) PPC_WEAK_FUNC(sub_830E54F8);
PPC_FUNC_IMPL(__imp__sub_830E54F8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E54FC"))) PPC_WEAK_FUNC(sub_830E54FC);
PPC_FUNC_IMPL(__imp__sub_830E54FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5500"))) PPC_WEAK_FUNC(sub_830E5500);
PPC_FUNC_IMPL(__imp__sub_830E5500) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-29804
	ctx.r11.s64 = ctx.r11.s64 + -29804;
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// addi r9,r9,-29772
	ctx.r9.s64 = ctx.r9.s64 + -29772;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830e5978
	ctx.lr = 0x830E5544;
	sub_830E5978(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e5554
	if (ctx.cr0.eq) goto loc_830E5554;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x830E5554;
	sub_82691540(ctx, base);
loc_830E5554:
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

__attribute__((alias("__imp__sub_830E5570"))) PPC_WEAK_FUNC(sub_830E5570);
PPC_FUNC_IMPL(__imp__sub_830E5570) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x830e54b0
	sub_830E54B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5578"))) PPC_WEAK_FUNC(sub_830E5578);
PPC_FUNC_IMPL(__imp__sub_830E5578) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x830e5488
	sub_830E5488(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5580"))) PPC_WEAK_FUNC(sub_830E5580);
PPC_FUNC_IMPL(__imp__sub_830E5580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E55A0"))) PPC_WEAK_FUNC(sub_830E55A0);
PPC_FUNC_IMPL(__imp__sub_830E55A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E55C0"))) PPC_WEAK_FUNC(sub_830E55C0);
PPC_FUNC_IMPL(__imp__sub_830E55C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E55E0"))) PPC_WEAK_FUNC(sub_830E55E0);
PPC_FUNC_IMPL(__imp__sub_830E55E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E5600"))) PPC_WEAK_FUNC(sub_830E5600);
PPC_FUNC_IMPL(__imp__sub_830E5600) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E5620"))) PPC_WEAK_FUNC(sub_830E5620);
PPC_FUNC_IMPL(__imp__sub_830E5620) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E5640"))) PPC_WEAK_FUNC(sub_830E5640);
PPC_FUNC_IMPL(__imp__sub_830E5640) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E5660"))) PPC_WEAK_FUNC(sub_830E5660);
PPC_FUNC_IMPL(__imp__sub_830E5660) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E5680"))) PPC_WEAK_FUNC(sub_830E5680);
PPC_FUNC_IMPL(__imp__sub_830E5680) {
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
	// bl 0x830e5428
	ctx.lr = 0x830E5698;
	sub_830E5428(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-29728
	ctx.r11.s64 = ctx.r11.s64 + -29728;
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// addi r9,r9,-29772
	ctx.r9.s64 = ctx.r9.s64 + -29772;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_830E56D4"))) PPC_WEAK_FUNC(sub_830E56D4);
PPC_FUNC_IMPL(__imp__sub_830E56D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E56D8"))) PPC_WEAK_FUNC(sub_830E56D8);
PPC_FUNC_IMPL(__imp__sub_830E56D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E56E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,164
	ctx.r3.s64 = 164;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x830e58a0
	ctx.lr = 0x830E56FC;
	sub_830E58A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e5710
	if (ctx.cr0.eq) goto loc_830E5710;
	// bl 0x830e5680
	ctx.lr = 0x830E5708;
	sub_830E5680(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x830e5714
	goto loc_830E5714;
loc_830E5710:
	// li r4,0
	ctx.r4.s64 = 0;
loc_830E5714:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e7b68
	ctx.lr = 0x830E571C;
	sub_830E7B68(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830e5734
	if (!ctx.cr6.eq) goto loc_830E5734;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x830e57b0
	goto loc_830E57B0;
loc_830E5734:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e59f0
	ctx.lr = 0x830E573C;
	sub_830E59F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bge 0x830e5768
	if (!ctx.cr0.lt) goto loc_830E5768;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x830e57ac
	if (ctx.cr6.eq) goto loc_830E57AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x830e57a0
	goto loc_830E57A0;
loc_830E5768:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e5398
	ctx.lr = 0x830E5778;
	sub_830E5398(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x830e57ac
	if (ctx.cr6.eq) goto loc_830E57AC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
loc_830E57A0:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E57AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E57AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_830E57B0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E57B8"))) PPC_WEAK_FUNC(sub_830E57B8);
PPC_FUNC_IMPL(__imp__sub_830E57B8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-29804
	ctx.r11.s64 = ctx.r11.s64 + -29804;
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// addi r9,r9,-29772
	ctx.r9.s64 = ctx.r9.s64 + -29772;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830e5978
	ctx.lr = 0x830E57FC;
	sub_830E5978(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e580c
	if (ctx.cr0.eq) goto loc_830E580C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E580C;
	sub_830E58D8(ctx, base);
loc_830E580C:
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

__attribute__((alias("__imp__sub_830E5828"))) PPC_WEAK_FUNC(sub_830E5828);
PPC_FUNC_IMPL(__imp__sub_830E5828) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x830e5870
	if (ctx.cr6.eq) goto loc_830E5870;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E5870;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E5870:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e5880
	if (ctx.cr0.eq) goto loc_830E5880;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x830E5880;
	sub_82691540(ctx, base);
loc_830E5880:
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

__attribute__((alias("__imp__sub_830E589C"))) PPC_WEAK_FUNC(sub_830E589C);
PPC_FUNC_IMPL(__imp__sub_830E589C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E58A0"))) PPC_WEAK_FUNC(sub_830E58A0);
PPC_FUNC_IMPL(__imp__sub_830E58A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-8172
	ctx.r11.s64 = ctx.r11.s64 + -8172;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e58cc
	if (ctx.cr6.eq) goto loc_830E58CC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_830E58CC:
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E58D8"))) PPC_WEAK_FUNC(sub_830E58D8);
PPC_FUNC_IMPL(__imp__sub_830E58D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-8172
	ctx.r11.s64 = ctx.r11.s64 + -8172;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e5904
	if (ctx.cr6.eq) goto loc_830E5904;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_830E5904:
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5910"))) PPC_WEAK_FUNC(sub_830E5910);
PPC_FUNC_IMPL(__imp__sub_830E5910) {
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
	// bl 0x830e75b0
	ctx.lr = 0x830E5928;
	sub_830E75B0(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29692
	ctx.r10.s64 = ctx.r10.s64 + -29692;
	// addi r9,r9,-29808
	ctx.r9.s64 = ctx.r9.s64 + -29808;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r8,r8,-29168
	ctx.r8.s64 = ctx.r8.s64 + -29168;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830E5974"))) PPC_WEAK_FUNC(sub_830E5974);
PPC_FUNC_IMPL(__imp__sub_830E5974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5978"))) PPC_WEAK_FUNC(sub_830E5978);
PPC_FUNC_IMPL(__imp__sub_830E5978) {
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
	// lwz r3,156(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 156);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-29692
	ctx.r11.s64 = ctx.r11.s64 + -29692;
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// addi r9,r9,-29168
	ctx.r9.s64 = ctx.r9.s64 + -29168;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq cr6,0x830e59c0
	if (ctx.cr6.eq) goto loc_830E59C0;
	// bl 0x830e58d8
	ctx.lr = 0x830E59C0;
	sub_830E58D8(ctx, base);
loc_830E59C0:
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e59d0
	if (ctx.cr6.eq) goto loc_830E59D0;
	// bl 0x82a756a0
	ctx.lr = 0x830E59D0;
	sub_82A756A0(ctx, base);
loc_830E59D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e7508
	ctx.lr = 0x830E59D8;
	sub_830E7508(ctx, base);
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

__attribute__((alias("__imp__sub_830E59EC"))) PPC_WEAK_FUNC(sub_830E59EC);
PPC_FUNC_IMPL(__imp__sub_830E59EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E59F0"))) PPC_WEAK_FUNC(sub_830E59F0);
PPC_FUNC_IMPL(__imp__sub_830E59F0) {
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
	// bl 0x830e66f8
	ctx.lr = 0x830E5A00;
	sub_830E66F8(ctx, base);
	// srawi r11,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 31;
	// and r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E5A18"))) PPC_WEAK_FUNC(sub_830E5A18);
PPC_FUNC_IMPL(__imp__sub_830E5A18) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x830e5a40
	if (!ctx.cr6.eq) goto loc_830E5A40;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5A40:
	// bl 0x831791a4
	ctx.lr = 0x830E5A44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
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

__attribute__((alias("__imp__sub_830E5A64"))) PPC_WEAK_FUNC(sub_830E5A64);
PPC_FUNC_IMPL(__imp__sub_830E5A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5A68"))) PPC_WEAK_FUNC(sub_830E5A68);
PPC_FUNC_IMPL(__imp__sub_830E5A68) {
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
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x830e5a90
	if (!ctx.cr6.eq) goto loc_830E5A90;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E5A90:
	// bl 0x831791b4
	ctx.lr = 0x830E5A94;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
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

__attribute__((alias("__imp__sub_830E5AB4"))) PPC_WEAK_FUNC(sub_830E5AB4);
PPC_FUNC_IMPL(__imp__sub_830E5AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5AB8"))) PPC_WEAK_FUNC(sub_830E5AB8);
PPC_FUNC_IMPL(__imp__sub_830E5AB8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1080
	ctx.r11.s64 = ctx.r3.s64 + 1080;
loc_830E5ABC:
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
	// bne 0x830e5abc
	if (!ctx.cr0.eq) goto loc_830E5ABC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E5ADC"))) PPC_WEAK_FUNC(sub_830E5ADC);
PPC_FUNC_IMPL(__imp__sub_830E5ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5AE0"))) PPC_WEAK_FUNC(sub_830E5AE0);
PPC_FUNC_IMPL(__imp__sub_830E5AE0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1080
	ctx.r11.s64 = ctx.r3.s64 + 1080;
loc_830E5AE4:
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
	// bne 0x830e5ae4
	if (!ctx.cr0.eq) goto loc_830E5AE4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E5B28"))) PPC_WEAK_FUNC(sub_830E5B28);
PPC_FUNC_IMPL(__imp__sub_830E5B28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E5B2C"))) PPC_WEAK_FUNC(sub_830E5B2C);
PPC_FUNC_IMPL(__imp__sub_830E5B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5B30"))) PPC_WEAK_FUNC(sub_830E5B30);
PPC_FUNC_IMPL(__imp__sub_830E5B30) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29664
	ctx.r11.s64 = ctx.r11.s64 + -29664;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r3,524
	ctx.r11.s64 = ctx.r3.s64 + 524;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// beq cr6,0x830e5b88
	if (ctx.cr6.eq) goto loc_830E5B88;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E5B88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E5B88:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e5b98
	if (ctx.cr0.eq) goto loc_830E5B98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x830E5B98;
	sub_82691540(ctx, base);
loc_830E5B98:
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

__attribute__((alias("__imp__sub_830E5BB4"))) PPC_WEAK_FUNC(sub_830E5BB4);
PPC_FUNC_IMPL(__imp__sub_830E5BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5BB8"))) PPC_WEAK_FUNC(sub_830E5BB8);
PPC_FUNC_IMPL(__imp__sub_830E5BB8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// ble cr6,0x830e5bf8
	if (!ctx.cr6.gt) goto loc_830E5BF8;
loc_830E5BE4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e5a68
	ctx.lr = 0x830E5BEC;
	sub_830E5A68(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x830e5be4
	if (ctx.cr6.gt) goto loc_830E5BE4;
loc_830E5BF8:
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

__attribute__((alias("__imp__sub_830E5C0C"))) PPC_WEAK_FUNC(sub_830E5C0C);
PPC_FUNC_IMPL(__imp__sub_830E5C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5C10"))) PPC_WEAK_FUNC(sub_830E5C10);
PPC_FUNC_IMPL(__imp__sub_830E5C10) {
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
	// bl 0x830e5bb8
	ctx.lr = 0x830E5C30;
	sub_830E5BB8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e5c40
	if (ctx.cr0.eq) goto loc_830E5C40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x830E5C40;
	sub_82691540(ctx, base);
loc_830E5C40:
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

__attribute__((alias("__imp__sub_830E5C5C"))) PPC_WEAK_FUNC(sub_830E5C5C);
PPC_FUNC_IMPL(__imp__sub_830E5C5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5C60"))) PPC_WEAK_FUNC(sub_830E5C60);
PPC_FUNC_IMPL(__imp__sub_830E5C60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E5C68;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5a18
	ctx.lr = 0x830E5C94;
	sub_830E5A18(ctx, base);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e5ca8
	if (ctx.cr6.eq) goto loc_830E5CA8;
	// bl 0x830e58d8
	ctx.lr = 0x830E5CA4;
	sub_830E58D8(ctx, base);
	// stw r28,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r28.u32);
loc_830E5CA8:
	// stw r28,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6420
	ctx.lr = 0x830E5CB4;
	sub_830E6420(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830e5cd8
	if (!ctx.cr0.eq) goto loc_830E5CD8;
	// lis r31,-32684
	ctx.r31.s64 = -2141978624;
	// ori r31,r31,44
	ctx.r31.u64 = ctx.r31.u64 | 44;
loc_830E5CC4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5bb8
	ctx.lr = 0x830E5CCC;
	sub_830E5BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_830E5CD8:
	// addi r29,r31,152
	ctx.r29.s64 = ctx.r31.s64 + 152;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x830e8b70
	ctx.lr = 0x830E5CF0;
	sub_830E8B70(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x830e5d34
	if (ctx.cr0.eq) goto loc_830E5D34;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r10,-29444
	ctx.r5.s64 = ctx.r10.s64 + -29444;
loc_830E5D00:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E5D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bgt cr6,0x830e5d28
	if (ctx.cr6.gt) goto loc_830E5D28;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x830e5cc4
	goto loc_830E5CC4;
loc_830E5D28:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
	// b 0x830e5cc4
	goto loc_830E5CC4;
loc_830E5D34:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x830e58a0
	ctx.lr = 0x830E5D3C;
	sub_830E58A0(ctx, base);
	// stw r3,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x830e5d54
	if (!ctx.cr0.eq) goto loc_830E5D54;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x830e5cc4
	goto loc_830E5CC4;
loc_830E5D54:
	// addi r30,r31,124
	ctx.r30.s64 = ctx.r31.s64 + 124;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x830E5D68;
	sub_82FA7CF0(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x830E5D7C;
	sub_82A77608(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r4,156(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a75688
	ctx.lr = 0x830E5D98;
	sub_82A75688(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x830e5db8
	if (ctx.cr6.eq) goto loc_830E5DB8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e5db8
	if (ctx.cr6.eq) goto loc_830E5DB8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r5,r10,-29456
	ctx.r5.s64 = ctx.r10.s64 + -29456;
	// b 0x830e5d00
	goto loc_830E5D00;
loc_830E5DB8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r10,-29492
	ctx.r5.s64 = ctx.r10.s64 + -29492;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E5DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x830e5cc4
	goto loc_830E5CC4;
}

__attribute__((alias("__imp__sub_830E5DE0"))) PPC_WEAK_FUNC(sub_830E5DE0);
PPC_FUNC_IMPL(__imp__sub_830E5DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830E5DE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e5a18
	ctx.lr = 0x830E5E14;
	sub_830E5A18(ctx, base);
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r29,r31,124
	ctx.r29.s64 = ctx.r31.s64 + 124;
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// bne cr6,0x830e5e40
	if (!ctx.cr6.eq) goto loc_830E5E40;
	// lis r30,84
	ctx.r30.s64 = 5505024;
	// ori r30,r30,2
	ctx.r30.u64 = ctx.r30.u64 | 2;
loc_830E5E2C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e5bb8
	ctx.lr = 0x830E5E34;
	sub_830E5BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_830E5E40:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82a756a0
	ctx.lr = 0x830E5E48;
	sub_82A756A0(ctx, base);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// bl 0x82a756a0
	ctx.lr = 0x830E5E54;
	sub_82A756A0(ctx, base);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a74d28
	ctx.lr = 0x830E5E60;
	sub_82A74D28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e5e70
	if (!ctx.cr0.lt) goto loc_830E5E70;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830e5e2c
	goto loc_830E5E2C;
loc_830E5E70:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x830e5e2c
	goto loc_830E5E2C;
}

__attribute__((alias("__imp__sub_830E5E7C"))) PPC_WEAK_FUNC(sub_830E5E7C);
PPC_FUNC_IMPL(__imp__sub_830E5E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5E80"))) PPC_WEAK_FUNC(sub_830E5E80);
PPC_FUNC_IMPL(__imp__sub_830E5E80) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29664
	ctx.r11.s64 = ctx.r11.s64 + -29664;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r11,r3,524
	ctx.r11.s64 = ctx.r3.s64 + 524;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// lwz r3,528(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 528);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// beq cr6,0x830e5ed8
	if (ctx.cr6.eq) goto loc_830E5ED8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E5ED8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E5ED8:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e5ee8
	if (ctx.cr0.eq) goto loc_830E5EE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E5EE8;
	sub_830E58D8(ctx, base);
loc_830E5EE8:
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

__attribute__((alias("__imp__sub_830E5F04"))) PPC_WEAK_FUNC(sub_830E5F04);
PPC_FUNC_IMPL(__imp__sub_830E5F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E5F08"))) PPC_WEAK_FUNC(sub_830E5F08);
PPC_FUNC_IMPL(__imp__sub_830E5F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E5F10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830e5f34
	if (!ctx.cr6.gt) goto loc_830E5F34;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x830E5F34;
	sub_82FA0648(ctx, base);
loc_830E5F34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x830e5fc0
	if (!ctx.cr6.lt) goto loc_830E5FC0;
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e58a0
	ctx.lr = 0x830E5F58;
	sub_830E58A0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// b 0x830e5f84
	goto loc_830E5F84;
loc_830E5F6C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830e5f7c
	if (ctx.cr6.eq) goto loc_830E5F7C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_830E5F7C:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_830E5F84:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e5f6c
	if (!ctx.cr6.eq) goto loc_830E5F6C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r28,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x830e5fa8
	if (ctx.cr6.eq) goto loc_830E5FA8;
	// bl 0x830e58d8
	ctx.lr = 0x830E5FA8;
	sub_830E58D8(ctx, base);
loc_830E5FA8:
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// add r10,r29,r30
	ctx.r10.u64 = ctx.r29.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_830E5FC0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E5FC8"))) PPC_WEAK_FUNC(sub_830E5FC8);
PPC_FUNC_IMPL(__imp__sub_830E5FC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r9,r10,65535
	ctx.r9.u64 = ctx.r10.u64 | 65535;
	// subf r10,r11,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830e5ff8
	if (!ctx.cr6.lt) goto loc_830E5FF8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// b 0x82fa0648
	sub_82FA0648(ctx, base);
	return;
loc_830E5FF8:
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x830e6028
	if (ctx.cr6.lt) goto loc_830E6028;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_830E6028:
	// cmplw cr6,r4,r8
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x830e6034
	if (!ctx.cr6.lt) goto loc_830E6034;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
loc_830E6034:
	// b 0x830e5f08
	sub_830E5F08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6038"))) PPC_WEAK_FUNC(sub_830E6038);
PPC_FUNC_IMPL(__imp__sub_830E6038) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E603C"))) PPC_WEAK_FUNC(sub_830E603C);
PPC_FUNC_IMPL(__imp__sub_830E603C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6040"))) PPC_WEAK_FUNC(sub_830E6040);
PPC_FUNC_IMPL(__imp__sub_830E6040) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830e6078
	if (!ctx.cr6.lt) goto loc_830E6078;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x830e607c
	if (!ctx.cr6.gt) goto loc_830E607C;
loc_830E6078:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830E607C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e60c4
	if (ctx.cr0.eq) goto loc_830E60C4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x830e60a8
	if (!ctx.cr6.eq) goto loc_830E60A8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e5fc8
	ctx.lr = 0x830E60A8;
	sub_830E5FC8(ctx, base);
loc_830E60A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e60f0
	if (ctx.cr6.eq) goto loc_830E60F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x830e60ec
	goto loc_830E60EC;
loc_830E60C4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e60dc
	if (!ctx.cr6.eq) goto loc_830E60DC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e5fc8
	ctx.lr = 0x830E60DC;
	sub_830E5FC8(ctx, base);
loc_830E60DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e60f0
	if (ctx.cr6.eq) goto loc_830E60F0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_830E60EC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_830E60F0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
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

__attribute__((alias("__imp__sub_830E6114"))) PPC_WEAK_FUNC(sub_830E6114);
PPC_FUNC_IMPL(__imp__sub_830E6114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6118"))) PPC_WEAK_FUNC(sub_830E6118);
PPC_FUNC_IMPL(__imp__sub_830E6118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x830E6120;
	__savegprlr_21(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// bl 0x830e5a18
	ctx.lr = 0x830E6158;
	sub_830E5A18(ctx, base);
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lwz r28,156(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// ble cr6,0x830e6234
	if (!ctx.cr6.gt) goto loc_830E6234;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r26,r11,-29224
	ctx.r26.s64 = ctx.r11.s64 + -29224;
	// addi r25,r10,-29228
	ctx.r25.s64 = ctx.r10.s64 + -29228;
loc_830E6194:
	// mulli r11,r30,208
	ctx.r11.s64 = ctx.r30.s64 * 208;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r6,r11,8
	ctx.r6.s64 = ctx.r11.s64 + 8;
	// li r4,513
	ctx.r4.s64 = 513;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82fa25c0
	ctx.lr = 0x830E61B0;
	sub_82FA25C0(ctx, base);
	// li r4,513
	ctx.r4.s64 = 513;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82fa87c0
	ctx.lr = 0x830E61BC;
	sub_82FA87C0(ctx, base);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e6470
	ctx.lr = 0x830E61C8;
	sub_830E6470(ctx, base);
	// clrlwi r21,r3,24
	ctx.r21.u64 = ctx.r3.u32 & 0xFF;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82fa25c0
	ctx.lr = 0x830E61E8;
	sub_82FA25C0(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E6204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x830e621c
	if (ctx.cr6.eq) goto loc_830E621C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830e6040
	ctx.lr = 0x830E6218;
	sub_830E6040(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E621C:
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x830e6194
	if (ctx.cr6.lt) goto loc_830E6194;
	// lwz r26,112(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_830E6234:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r11,r26,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r26.s64;
	// srawi. r30,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x830e6270
	if (!ctx.cr0.eq) goto loc_830E6270;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830e6254
	if (ctx.cr6.eq) goto loc_830E6254;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E6254;
	sub_830E58D8(ctx, base);
loc_830E6254:
	// lis r29,-32684
	ctx.r29.s64 = -2141978624;
	// ori r29,r29,31
	ctx.r29.u64 = ctx.r29.u64 | 31;
loc_830E625C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5bb8
	ctx.lr = 0x830E6264;
	sub_830E5BB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_830E6270:
	// bl 0x82a78340
	ctx.lr = 0x830E6274;
	sub_82A78340(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// divwu r10,r3,r30
	ctx.r10.u32 = ctx.r3.u32 / ctx.r30.u32;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r27,r11,-29696
	ctx.r27.s64 = ctx.r11.s64 + -29696;
	// mullw r11,r10,r30
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// twllei r30,0
	if (ctx.r30.u32 <= 0) __builtin_debugtrap();
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mulli r11,r11,208
	ctx.r11.s64 = ctx.r11.s64 * 208;
	// stb r24,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r24.u8);
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x830e8978
	ctx.lr = 0x830E62BC;
	sub_830E8978(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x830e62fc
	if (ctx.cr0.eq) goto loc_830E62FC;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e62e8
	if (ctx.cr6.eq) goto loc_830E62E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E62E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E62E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830e625c
	if (ctx.cr6.eq) goto loc_830E625C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E62F8;
	sub_830E58D8(ctx, base);
	// b 0x830e625c
	goto loc_830E625C;
loc_830E62FC:
	// li r5,32
	ctx.r5.s64 = 32;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x82d27e80
	ctx.lr = 0x830E630C;
	sub_82D27E80(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// addi r5,r11,-29240
	ctx.r5.s64 = ctx.r11.s64 + -29240;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82fa25c0
	ctx.lr = 0x830E632C;
	sub_82FA25C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E6348;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1084
	ctx.r3.s64 = 1084;
	// bl 0x830e58a0
	ctx.lr = 0x830E6350;
	sub_830E58A0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x830e6378
	if (ctx.cr0.eq) goto loc_830E6378;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e78c8
	ctx.lr = 0x830E6360;
	sub_830E78C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r24,1080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1080, ctx.r24.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,-29408
	ctx.r11.s64 = ctx.r11.s64 + -29408;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x830e637c
	goto loc_830E637C;
loc_830E6378:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
loc_830E637C:
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x830e7b68
	ctx.lr = 0x830E6384;
	sub_830E7B68(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x830e6398
	if (!ctx.cr6.eq) goto loc_830E6398;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_830E6398:
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x830e7920
	ctx.lr = 0x830E63A8;
	sub_830E7920(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x830e7850
	ctx.lr = 0x830E63B4;
	sub_830E7850(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// beq cr6,0x830e63e0
	if (ctx.cr6.eq) goto loc_830E63E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E63E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E63E0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e6404
	if (ctx.cr6.eq) goto loc_830E6404;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E6404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E6404:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830e6414
	if (ctx.cr6.eq) goto loc_830E6414;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E6414;
	sub_830E58D8(ctx, base);
loc_830E6414:
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// b 0x830e625c
	goto loc_830E625C;
}

__attribute__((alias("__imp__sub_830E641C"))) PPC_WEAK_FUNC(sub_830E641C);
PPC_FUNC_IMPL(__imp__sub_830E641C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6420"))) PPC_WEAK_FUNC(sub_830E6420);
PPC_FUNC_IMPL(__imp__sub_830E6420) {
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
loc_830E6434:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74bb0
	ctx.lr = 0x830E643C;
	sub_82A74BB0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x830e6468
	if (ctx.cr6.eq) goto loc_830E6468;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x830e6434
	if (ctx.cr6.lt) goto loc_830E6434;
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6454:
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
loc_830E6468:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x830e6454
	goto loc_830E6454;
}

__attribute__((alias("__imp__sub_830E6470"))) PPC_WEAK_FUNC(sub_830E6470);
PPC_FUNC_IMPL(__imp__sub_830E6470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x830e6550
	goto loc_830E6550;
loc_830E647C:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,42
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 42, ctx.xer);
	// bne cr6,0x830e6490
	if (!ctx.cr6.eq) goto loc_830E6490;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_830E6490:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e65a8
	if (ctx.cr0.eq) goto loc_830E65A8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x830e65a8
	if (ctx.cr6.eq) goto loc_830E65A8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x830e65a8
	if (ctx.cr6.eq) goto loc_830E65A8;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x830e64bc
	if (ctx.cr6.lt) goto loc_830E64BC;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// ble cr6,0x830e64f4
	if (!ctx.cr6.gt) goto loc_830E64F4;
loc_830E64BC:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x830e64cc
	if (ctx.cr6.lt) goto loc_830E64CC;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x830e64f4
	if (!ctx.cr6.gt) goto loc_830E64F4;
loc_830E64CC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x830e64dc
	if (ctx.cr6.lt) goto loc_830E64DC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x830e64f4
	if (!ctx.cr6.gt) goto loc_830E64F4;
loc_830E64DC:
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// beq cr6,0x830e64f4
	if (ctx.cr6.eq) goto loc_830E64F4;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// beq cr6,0x830e64f4
	if (ctx.cr6.eq) goto loc_830E64F4;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x830e65a0
	if (!ctx.cr6.eq) goto loc_830E65A0;
loc_830E64F4:
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// bne cr6,0x830e6508
	if (!ctx.cr6.eq) goto loc_830E6508;
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e6528
	if (!ctx.cr0.eq) goto loc_830E6528;
loc_830E6508:
	// lbz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830e6528
	if (ctx.cr6.eq) goto loc_830E6528;
	// addi r10,r10,-32
	ctx.r10.s64 = ctx.r10.s64 + -32;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x830e652c
	if (!ctx.cr6.eq) goto loc_830E652C;
loc_830E6528:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E652C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e653c
	if (ctx.cr0.eq) goto loc_830E653C;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// b 0x830e654c
	goto loc_830E654C;
loc_830E653C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830e65a0
	if (ctx.cr6.eq) goto loc_830E65A0;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
loc_830E654C:
	// lbzu r11,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
loc_830E6550:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e647c
	if (!ctx.cr0.eq) goto loc_830E647C;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e65b8
	if (ctx.cr0.eq) goto loc_830E65B8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x830e65b8
	if (ctx.cr6.eq) goto loc_830E65B8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x830e65b8
	if (ctx.cr6.eq) goto loc_830E65B8;
	// cmpwi cr6,r11,42
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 42, ctx.xer);
	// bne cr6,0x830e6598
	if (!ctx.cr6.eq) goto loc_830E6598;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e65b8
	if (ctx.cr0.eq) goto loc_830E65B8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x830e65b8
	if (ctx.cr6.eq) goto loc_830E65B8;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x830e65b8
	if (ctx.cr6.eq) goto loc_830E65B8;
loc_830E6598:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830e65bc
	goto loc_830E65BC;
loc_830E65A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_830E65A8:
	// subf r11,r9,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r9.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
loc_830E65B8:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830E65BC:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E65C4"))) PPC_WEAK_FUNC(sub_830E65C4);
PPC_FUNC_IMPL(__imp__sub_830E65C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E65C8"))) PPC_WEAK_FUNC(sub_830E65C8);
PPC_FUNC_IMPL(__imp__sub_830E65C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e65e0
	if (ctx.cr0.eq) goto loc_830E65E0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x830e664c
	goto loc_830E664C;
loc_830E65E0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e662c
	if (!ctx.cr0.eq) goto loc_830E662C;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x830e6600
	goto loc_830E6600;
loc_830E65F8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_830E6600:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830e65f8
	if (ctx.cr0.eq) goto loc_830E65F8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_830E6614:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e663c
	if (!ctx.cr6.eq) goto loc_830E663C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_830E662C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e6614
	if (ctx.cr0.eq) goto loc_830E6614;
loc_830E663C:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,17(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_830E664C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6654"))) PPC_WEAK_FUNC(sub_830E6654);
PPC_FUNC_IMPL(__imp__sub_830E6654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6658"))) PPC_WEAK_FUNC(sub_830E6658);
PPC_FUNC_IMPL(__imp__sub_830E6658) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x830e58a0
	ctx.lr = 0x830E6674;
	sub_830E58A0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stb r11,17(r3)
	PPC_STORE_U8(ctx.r3.u32 + 17, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830E66AC"))) PPC_WEAK_FUNC(sub_830E66AC);
PPC_FUNC_IMPL(__imp__sub_830E66AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E66B0"))) PPC_WEAK_FUNC(sub_830E66B0);
PPC_FUNC_IMPL(__imp__sub_830E66B0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-29196
	ctx.r11.s64 = ctx.r11.s64 + -29196;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x830e66dc
	if (ctx.cr0.eq) goto loc_830E66DC;
	// bl 0x82691540
	ctx.lr = 0x830E66DC;
	sub_82691540(ctx, base);
loc_830E66DC:
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

__attribute__((alias("__imp__sub_830E66F4"))) PPC_WEAK_FUNC(sub_830E66F4);
PPC_FUNC_IMPL(__imp__sub_830E66F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E66F8"))) PPC_WEAK_FUNC(sub_830E66F8);
PPC_FUNC_IMPL(__imp__sub_830E66F8) {
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
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x830e7850
	ctx.lr = 0x830E670C;
	sub_830E7850(ctx, base);
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

__attribute__((alias("__imp__sub_830E6720"))) PPC_WEAK_FUNC(sub_830E6720);
PPC_FUNC_IMPL(__imp__sub_830E6720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e677c
	if (!ctx.cr0.eq) goto loc_830E677C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x830e6750
	goto loc_830E6750;
loc_830E6748:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E6750:
	// lbz r9,17(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830e6748
	if (ctx.cr0.eq) goto loc_830E6748;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_830E6764:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e678c
	if (!ctx.cr6.eq) goto loc_830E678C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_830E677C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e6764
	if (ctx.cr0.eq) goto loc_830E6764;
loc_830E678C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6794"))) PPC_WEAK_FUNC(sub_830E6794);
PPC_FUNC_IMPL(__imp__sub_830E6794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6798"))) PPC_WEAK_FUNC(sub_830E6798);
PPC_FUNC_IMPL(__imp__sub_830E6798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e67b8
	if (!ctx.cr0.eq) goto loc_830E67B8;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_830E67B8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e67d8
	if (!ctx.cr6.eq) goto loc_830E67D8;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x830e67f4
	goto loc_830E67F4;
loc_830E67D8:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e67f0
	if (!ctx.cr6.eq) goto loc_830E67F0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830e67f4
	goto loc_830E67F4;
loc_830E67F0:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_830E67F4:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6800"))) PPC_WEAK_FUNC(sub_830E6800);
PPC_FUNC_IMPL(__imp__sub_830E6800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,17(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e6820
	if (!ctx.cr0.eq) goto loc_830E6820;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_830E6820:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e6840
	if (!ctx.cr6.eq) goto loc_830E6840;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x830e685c
	goto loc_830E685C;
loc_830E6840:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e6858
	if (!ctx.cr6.eq) goto loc_830E6858;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x830e685c
	goto loc_830E685C;
loc_830E6858:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_830E685C:
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E6868"))) PPC_WEAK_FUNC(sub_830E6868);
PPC_FUNC_IMPL(__imp__sub_830E6868) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x830e5a18
	ctx.lr = 0x830E68A8;
	sub_830E5A18(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r5,r11,-29192
	ctx.r5.s64 = ctx.r11.s64 + -29192;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E68C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32684
	ctx.r11.s64 = -2141978624;
	// ori r11,r11,44
	ctx.r11.u64 = ctx.r11.u64 | 44;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830e68e0
	if (ctx.cr6.eq) goto loc_830E68E0;
	// bl 0x82a78340
	ctx.lr = 0x830E68DC;
	sub_82A78340(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
loc_830E68E0:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// bl 0x830e5bb8
	ctx.lr = 0x830E68F0;
	sub_830E5BB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E6908"))) PPC_WEAK_FUNC(sub_830E6908);
PPC_FUNC_IMPL(__imp__sub_830E6908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x830E6910;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x830e5a18
	ctx.lr = 0x830E694C;
	sub_830E5A18(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830e6978
	if (ctx.cr6.eq) goto loc_830E6978;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E6978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E6978:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e5bb8
	ctx.lr = 0x830E6980;
	sub_830E5BB8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6988"))) PPC_WEAK_FUNC(sub_830E6988);
PPC_FUNC_IMPL(__imp__sub_830E6988) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x830e58a0
	ctx.lr = 0x830E69AC;
	sub_830E58A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,17(r10)
	PPC_STORE_U8(ctx.r10.u32 + 17, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830E69F0"))) PPC_WEAK_FUNC(sub_830E69F0);
PPC_FUNC_IMPL(__imp__sub_830E69F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830E69F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830e6a30
	if (ctx.cr6.lt) goto loc_830E6A30;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E6A24;
	sub_830E58D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x830E6A30;
	sub_82FA0648(ctx, base);
loc_830E6A30:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e6a5c
	if (!ctx.cr6.eq) goto loc_830E6A5C;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x830e6a94
	goto loc_830E6A94;
loc_830E6A5C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e6a80
	if (ctx.cr0.eq) goto loc_830E6A80;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e6a98
	if (!ctx.cr6.eq) goto loc_830E6A98;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x830e6a98
	goto loc_830E6A98;
loc_830E6A80:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e6a98
	if (!ctx.cr6.eq) goto loc_830E6A98;
loc_830E6A94:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_830E6A98:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e6b98
	if (!ctx.cr0.eq) goto loc_830E6B98;
	// li r27,0
	ctx.r27.s64 = 0;
loc_830E6AB4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e6b18
	if (!ctx.cr6.eq) goto loc_830E6B18;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e6b28
	if (ctx.cr0.eq) goto loc_830E6B28;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e6af0
	if (!ctx.cr6.eq) goto loc_830E6AF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830e6798
	ctx.lr = 0x830E6AF0;
	sub_830E6798(ctx, base);
loc_830E6AF0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830e6800
	ctx.lr = 0x830E6B14;
	sub_830E6800(ctx, base);
	// b 0x830e6b88
	goto loc_830E6B88;
loc_830E6B18:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e6b4c
	if (!ctx.cr0.eq) goto loc_830E6B4C;
loc_830E6B28:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r29.u8);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x830e6b88
	goto loc_830E6B88;
loc_830E6B4C:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e6b64
	if (!ctx.cr6.eq) goto loc_830E6B64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830e6800
	ctx.lr = 0x830E6B64;
	sub_830E6800(ctx, base);
loc_830E6B64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830e6798
	ctx.lr = 0x830E6B88;
	sub_830E6798(ctx, base);
loc_830E6B88:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e6ab4
	if (ctx.cr0.eq) goto loc_830E6AB4;
loc_830E6B98:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E6BB4"))) PPC_WEAK_FUNC(sub_830E6BB4);
PPC_FUNC_IMPL(__imp__sub_830E6BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6BB8"))) PPC_WEAK_FUNC(sub_830E6BB8);
PPC_FUNC_IMPL(__imp__sub_830E6BB8) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E6BE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x830e6c04
	if (!ctx.cr0.lt) goto loc_830E6C04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6868
	ctx.lr = 0x830E6BFC;
	sub_830E6868(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x830e6c08
	goto loc_830E6C08;
loc_830E6C04:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830E6C08:
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

__attribute__((alias("__imp__sub_830E6C20"))) PPC_WEAK_FUNC(sub_830E6C20);
PPC_FUNC_IMPL(__imp__sub_830E6C20) {
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
	// b 0x830e6c58
	goto loc_830E6C58;
loc_830E6C40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830e6c20
	ctx.lr = 0x830E6C4C;
	sub_830E6C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x830e58d8
	ctx.lr = 0x830E6C58;
	sub_830E58D8(ctx, base);
loc_830E6C58:
	// lbz r11,17(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e6c40
	if (ctx.cr0.eq) goto loc_830E6C40;
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

__attribute__((alias("__imp__sub_830E6C7C"))) PPC_WEAK_FUNC(sub_830E6C7C);
PPC_FUNC_IMPL(__imp__sub_830E6C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E6C80"))) PPC_WEAK_FUNC(sub_830E6C80);
PPC_FUNC_IMPL(__imp__sub_830E6C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x830E6C88;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,17(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 17);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e6cb0
	if (ctx.cr0.eq) goto loc_830E6CB0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x830E6CB0;
	sub_82FA0680(ctx, base);
loc_830E6CB0:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x830e6720
	ctx.lr = 0x830E6CBC;
	sub_830E6720(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x830e6cd8
	if (ctx.cr0.eq) goto loc_830E6CD8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x830e6cfc
	goto loc_830E6CFC;
loc_830E6CD8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,17(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e6cf0
	if (ctx.cr0.eq) goto loc_830E6CF0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x830e6cfc
	goto loc_830E6CFC;
loc_830E6CF0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6dd4
	if (!ctx.cr6.eq) goto loc_830E6DD4;
loc_830E6CFC:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e6d10
	if (!ctx.cr0.eq) goto loc_830E6D10;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_830E6D10:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6d28
	if (!ctx.cr6.eq) goto loc_830E6D28;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x830e6d40
	goto loc_830E6D40;
loc_830E6D28:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6d3c
	if (!ctx.cr6.eq) goto loc_830E6D3C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x830e6d40
	goto loc_830E6D40;
loc_830E6D3C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_830E6D40:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6d88
	if (!ctx.cr6.eq) goto loc_830E6D88;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e6d64
	if (ctx.cr0.eq) goto loc_830E6D64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x830e6d84
	goto loc_830E6D84;
loc_830E6D64:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x830e6d78
	goto loc_830E6D78;
loc_830E6D70:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E6D78:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x830e6d70
	if (ctx.cr0.eq) goto loc_830E6D70;
loc_830E6D84:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_830E6D88:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6e68
	if (!ctx.cr6.eq) goto loc_830E6E68;
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e6dac
	if (ctx.cr0.eq) goto loc_830E6DAC;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x830e6dcc
	goto loc_830E6DCC;
loc_830E6DAC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x830e6dc0
	goto loc_830E6DC0;
loc_830E6DB8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_830E6DC0:
	// lbz r8,17(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x830e6db8
	if (ctx.cr0.eq) goto loc_830E6DB8;
loc_830E6DCC:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x830e6e68
	goto loc_830E6E68;
loc_830E6DD4:
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
	// bne cr6,0x830e6df4
	if (!ctx.cr6.eq) goto loc_830E6DF4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x830e6e1c
	goto loc_830E6E1C;
loc_830E6DF4:
	// lbz r11,17(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 17);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e6e08
	if (!ctx.cr0.eq) goto loc_830E6E08;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_830E6E08:
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
loc_830E6E1C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6e34
	if (!ctx.cr6.eq) goto loc_830E6E34;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x830e6e50
	goto loc_830E6E50;
loc_830E6E34:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e6e4c
	if (!ctx.cr6.eq) goto loc_830E6E4C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x830e6e50
	goto loc_830E6E50;
loc_830E6E4C:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_830E6E50:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 16);
	// lbz r10,16(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// stb r10,16(r25)
	PPC_STORE_U8(ctx.r25.u32 + 16, ctx.r10.u8);
	// stb r11,16(r26)
	PPC_STORE_U8(ctx.r26.u32 + 16, ctx.r11.u8);
loc_830E6E68:
	// lbz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e7000
	if (!ctx.cr6.eq) goto loc_830E7000;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e6ffc
	if (ctx.cr6.eq) goto loc_830E6FFC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830E6E8C:
	// lbz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e6ffc
	if (!ctx.cr6.eq) goto loc_830E6FFC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e6f44
	if (!ctx.cr6.eq) goto loc_830E6F44;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e6ecc
	if (!ctx.cr0.eq) goto loc_830E6ECC;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e6798
	ctx.lr = 0x830E6EC8;
	sub_830E6798(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830E6ECC:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e6f98
	if (!ctx.cr0.eq) goto loc_830E6F98;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e6ef8
	if (!ctx.cr6.eq) goto loc_830E6EF8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x830e6f94
	if (ctx.cr6.eq) goto loc_830E6F94;
loc_830E6EF8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e6f20
	if (!ctx.cr6.eq) goto loc_830E6F20;
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e6800
	ctx.lr = 0x830E6F1C;
	sub_830E6800(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830E6F20:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// bl 0x830e6798
	ctx.lr = 0x830E6F40;
	sub_830E6798(ctx, base);
	// b 0x830e6ffc
	goto loc_830E6FFC;
loc_830E6F44:
	// lbz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e6f68
	if (!ctx.cr0.eq) goto loc_830E6F68;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e6800
	ctx.lr = 0x830E6F64;
	sub_830E6800(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E6F68:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e6f98
	if (!ctx.cr0.eq) goto loc_830E6F98;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e6fb4
	if (!ctx.cr6.eq) goto loc_830E6FB4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e6fb4
	if (!ctx.cr6.eq) goto loc_830E6FB4;
loc_830E6F94:
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
loc_830E6F98:
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
	// bne cr6,0x830e6e8c
	if (!ctx.cr6.eq) goto loc_830E6E8C;
	// b 0x830e6ffc
	goto loc_830E6FFC;
loc_830E6FB4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e6fdc
	if (!ctx.cr6.eq) goto loc_830E6FDC;
	// stb r30,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e6798
	ctx.lr = 0x830E6FD8;
	sub_830E6798(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E6FDC:
	// lbz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// stb r30,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// bl 0x830e6800
	ctx.lr = 0x830E6FFC;
	sub_830E6800(ctx, base);
loc_830E6FFC:
	// stb r30,16(r28)
	PPC_STORE_U8(ctx.r28.u32 + 16, ctx.r30.u8);
loc_830E7000:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E7008;
	sub_830E58D8(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e701c
	if (ctx.cr6.eq) goto loc_830E701C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_830E701C:
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

__attribute__((alias("__imp__sub_830E702C"))) PPC_WEAK_FUNC(sub_830E702C);
PPC_FUNC_IMPL(__imp__sub_830E702C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7030"))) PPC_WEAK_FUNC(sub_830E7030);
PPC_FUNC_IMPL(__imp__sub_830E7030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x830E7038;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e70b8
	if (!ctx.cr0.eq) goto loc_830E70B8;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_830E706C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830e708c
	if (ctx.cr6.eq) goto loc_830E708C;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r29,r7
	temp.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r29.u64 = temp.u64;
	// b 0x830e7098
	goto loc_830E7098;
loc_830E708C:
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
loc_830E7098:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e70a8
	if (ctx.cr0.eq) goto loc_830E70A8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x830e70ac
	goto loc_830E70AC;
loc_830E70A8:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_830E70AC:
	// lbz r10,17(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 17);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e706c
	if (ctx.cr0.eq) goto loc_830E706C;
loc_830E70B8:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// beq 0x830e710c
	if (ctx.cr0.eq) goto loc_830E710C;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e7104
	if (!ctx.cr6.eq) goto loc_830E7104;
	// li r5,1
	ctx.r5.s64 = 1;
loc_830E70E0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x830e69f0
	ctx.lr = 0x830E70F0;
	sub_830E69F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x830e713c
	goto loc_830E713C;
loc_830E7104:
	// bl 0x830e65c8
	ctx.lr = 0x830E7108;
	sub_830E65C8(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E710C:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830e7128
	if (!ctx.cr6.lt) goto loc_830E7128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x830e70e0
	goto loc_830E70E0;
loc_830E7128:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e58d8
	ctx.lr = 0x830E7130;
	sub_830E58D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_830E713C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7148"))) PPC_WEAK_FUNC(sub_830E7148);
PPC_FUNC_IMPL(__imp__sub_830E7148) {
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
	// bl 0x830e6c20
	ctx.lr = 0x830E7168;
	sub_830E6C20(ctx, base);
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

__attribute__((alias("__imp__sub_830E719C"))) PPC_WEAK_FUNC(sub_830E719C);
PPC_FUNC_IMPL(__imp__sub_830E719C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E71A0"))) PPC_WEAK_FUNC(sub_830E71A0);
PPC_FUNC_IMPL(__imp__sub_830E71A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E71A8;
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
	// bne cr6,0x830e720c
	if (!ctx.cr6.eq) goto loc_830E720C;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e720c
	if (!ctx.cr6.eq) goto loc_830E720C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830e7148
	ctx.lr = 0x830E71DC;
	sub_830E7148(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x830e7218
	goto loc_830E7218;
loc_830E71EC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x830e6720
	ctx.lr = 0x830E71F8;
	sub_830E6720(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e6c80
	ctx.lr = 0x830E7208;
	sub_830E6C80(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_830E720C:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x830e71ec
	if (!ctx.cr6.eq) goto loc_830E71EC;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_830E7218:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7224"))) PPC_WEAK_FUNC(sub_830E7224);
PPC_FUNC_IMPL(__imp__sub_830E7224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7228"))) PPC_WEAK_FUNC(sub_830E7228);
PPC_FUNC_IMPL(__imp__sub_830E7228) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5a18
	ctx.lr = 0x830E7264;
	sub_830E5A18(ctx, base);
	// bl 0x82a78340
	ctx.lr = 0x830E7268;
	sub_82A78340(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x830e72a4
	goto loc_830E72A4;
loc_830E7280:
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E7294;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e6720
	ctx.lr = 0x830E729C;
	sub_830E6720(ctx, base);
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E72A4:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e7280
	if (!ctx.cr6.eq) goto loc_830E7280;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x830e7148
	ctx.lr = 0x830E72B4;
	sub_830E7148(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5bb8
	ctx.lr = 0x830E72BC;
	sub_830E5BB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E72D4"))) PPC_WEAK_FUNC(sub_830E72D4);
PPC_FUNC_IMPL(__imp__sub_830E72D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E72D8"))) PPC_WEAK_FUNC(sub_830E72D8);
PPC_FUNC_IMPL(__imp__sub_830E72D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830E72E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e5a18
	ctx.lr = 0x830E730C;
	sub_830E5A18(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830e73fc
	if (ctx.cr6.lt) goto loc_830E73FC;
	// beq cr6,0x830e73a8
	if (ctx.cr6.eq) goto loc_830E73A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x830e7330
	if (ctx.cr6.lt) goto loc_830E7330;
	// lis r30,-32684
	ctx.r30.s64 = -2141978624;
	// ori r30,r30,18
	ctx.r30.u64 = ctx.r30.u64 | 18;
	// b 0x830e73d0
	goto loc_830E73D0;
loc_830E7330:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e736c
	if (ctx.cr6.eq) goto loc_830E736C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6420
	ctx.lr = 0x830E7344;
	sub_830E6420(ctx, base);
	// lbz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 100);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e7368
	if (!ctx.cr0.eq) goto loc_830E7368;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e7368
	if (ctx.cr0.eq) goto loc_830E7368;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r29.u32);
	// stb r11,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r11.u8);
	// b 0x830e736c
	goto loc_830E736C;
loc_830E7368:
	// stb r3,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r3.u8);
loc_830E736C:
	// bl 0x82a78340
	ctx.lr = 0x830E7370;
	sub_82A78340(ctx, base);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// ori r10,r10,37856
	ctx.r10.u64 = ctx.r10.u64 | 37856;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830e7390
	if (!ctx.cr6.lt) goto loc_830E7390;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e73fc
	if (!ctx.cr6.eq) goto loc_830E73FC;
loc_830E7390:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6bb8
	ctx.lr = 0x830E7398;
	sub_830E6BB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e73fc
	if (!ctx.cr0.lt) goto loc_830E73FC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x830e73d0
	goto loc_830E73D0;
loc_830E73A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E73BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x830e73e4
	if (!ctx.cr0.lt) goto loc_830E73E4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6868
	ctx.lr = 0x830E73D0;
	sub_830E6868(ctx, base);
loc_830E73D0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e5bb8
	ctx.lr = 0x830E73D8;
	sub_830E5BB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_830E73E4:
	// lis r11,84
	ctx.r11.s64 = 5505024;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x830e73fc
	if (ctx.cr6.eq) goto loc_830E73FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e7228
	ctx.lr = 0x830E73FC;
	sub_830E7228(ctx, base);
loc_830E73FC:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// b 0x830e73d0
	goto loc_830E73D0;
}

__attribute__((alias("__imp__sub_830E7404"))) PPC_WEAK_FUNC(sub_830E7404);
PPC_FUNC_IMPL(__imp__sub_830E7404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7408"))) PPC_WEAK_FUNC(sub_830E7408);
PPC_FUNC_IMPL(__imp__sub_830E7408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830E7410;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 + 12;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
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
	// bl 0x830e5a18
	ctx.lr = 0x830E7450;
	sub_830E5A18(ctx, base);
	// bl 0x82a78340
	ctx.lr = 0x830E7454;
	sub_82A78340(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e7494
	if (ctx.cr6.eq) goto loc_830E7494;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// bge cr6,0x830e7494
	if (!ctx.cr6.lt) goto loc_830E7494;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E7490;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830e74e4
	goto loc_830E74E4;
loc_830E7494:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830e74c8
	if (ctx.cr6.eq) goto loc_830E74C8;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e6658
	ctx.lr = 0x830E74A8;
	sub_830E6658(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e74b8
	if (ctx.cr0.eq) goto loc_830E74B8;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_830E74B8:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e7030
	ctx.lr = 0x830E74C8;
	sub_830E7030(ctx, base);
loc_830E74C8:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830e74fc
	if (!ctx.cr6.eq) goto loc_830E74FC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830e6bb8
	ctx.lr = 0x830E74DC;
	sub_830E6BB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e74fc
	if (!ctx.cr0.lt) goto loc_830E74FC;
loc_830E74E4:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_830E74E8:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5bb8
	ctx.lr = 0x830E74F0;
	sub_830E5BB8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_830E74FC:
	// lis r31,84
	ctx.r31.s64 = 5505024;
	// ori r31,r31,2
	ctx.r31.u64 = ctx.r31.u64 | 2;
	// b 0x830e74e8
	goto loc_830E74E8;
}

__attribute__((alias("__imp__sub_830E7508"))) PPC_WEAK_FUNC(sub_830E7508);
PPC_FUNC_IMPL(__imp__sub_830E7508) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-29124
	ctx.r11.s64 = ctx.r11.s64 + -29124;
	// addi r10,r10,-29808
	ctx.r10.s64 = ctx.r10.s64 + -29808;
	// addi r9,r9,-29168
	ctx.r9.s64 = ctx.r9.s64 + -29168;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// addi r4,r3,104
	ctx.r4.s64 = ctx.r3.s64 + 104;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,108(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x830e71a0
	ctx.lr = 0x830E7554;
	sub_830E71A0(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// bl 0x830e58d8
	ctx.lr = 0x830E755C;
	sub_830E58D8(ctx, base);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// beq cr6,0x830e758c
	if (ctx.cr6.eq) goto loc_830E758C;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E758C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E758C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,-29196
	ctx.r11.s64 = ctx.r11.s64 + -29196;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_830E75AC"))) PPC_WEAK_FUNC(sub_830E75AC);
PPC_FUNC_IMPL(__imp__sub_830E75AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E75B0"))) PPC_WEAK_FUNC(sub_830E75B0);
PPC_FUNC_IMPL(__imp__sub_830E75B0) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,-29808
	ctx.r11.s64 = ctx.r11.s64 + -29808;
	// addi r10,r10,-29124
	ctx.r10.s64 = ctx.r10.s64 + -29124;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r11,r8,-29168
	ctx.r11.s64 = ctx.r8.s64 + -29168;
	// addi r9,r9,-29808
	ctx.r9.s64 = ctx.r9.s64 + -29808;
	// addi r10,r7,-29196
	ctx.r10.s64 = ctx.r7.s64 + -29196;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x831791c4
	ctx.lr = 0x830E7618;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// stb r30,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r30.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r30.u32);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stb r30,100(r31)
	PPC_STORE_U8(ctx.r31.u32 + 100, ctx.r30.u8);
	// bl 0x830e6988
	ctx.lr = 0x830E764C;
	sub_830E6988(ctx, base);
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

__attribute__((alias("__imp__sub_830E7668"))) PPC_WEAK_FUNC(sub_830E7668);
PPC_FUNC_IMPL(__imp__sub_830E7668) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8277ab80
	ctx.lr = 0x830E7688;
	sub_8277AB80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x830e7698
	if (!ctx.cr0.eq) goto loc_830E7698;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830e76b0
	goto loc_830E76B0;
loc_830E7698:
	// addi r4,r31,564
	ctx.r4.s64 = ctx.r31.s64 + 564;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e6470
	ctx.lr = 0x830E76A4;
	sub_830E6470(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_830E76B0:
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

__attribute__((alias("__imp__sub_830E76C8"))) PPC_WEAK_FUNC(sub_830E76C8);
PPC_FUNC_IMPL(__imp__sub_830E76C8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28178
	sub_82D28178(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E76D8"))) PPC_WEAK_FUNC(sub_830E76D8);
PPC_FUNC_IMPL(__imp__sub_830E76D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d28090
	sub_82D28090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E76E0"))) PPC_WEAK_FUNC(sub_830E76E0);
PPC_FUNC_IMPL(__imp__sub_830E76E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28108
	sub_82D28108(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E76F0"))) PPC_WEAK_FUNC(sub_830E76F0);
PPC_FUNC_IMPL(__imp__sub_830E76F0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82d28298
	sub_82D28298(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7704"))) PPC_WEAK_FUNC(sub_830E7704);
PPC_FUNC_IMPL(__imp__sub_830E7704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7708"))) PPC_WEAK_FUNC(sub_830E7708);
PPC_FUNC_IMPL(__imp__sub_830E7708) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x82d282d8
	sub_82D282D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7724"))) PPC_WEAK_FUNC(sub_830E7724);
PPC_FUNC_IMPL(__imp__sub_830E7724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7728"))) PPC_WEAK_FUNC(sub_830E7728);
PPC_FUNC_IMPL(__imp__sub_830E7728) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82d280a0
	sub_82D280A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7734"))) PPC_WEAK_FUNC(sub_830E7734);
PPC_FUNC_IMPL(__imp__sub_830E7734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7738"))) PPC_WEAK_FUNC(sub_830E7738);
PPC_FUNC_IMPL(__imp__sub_830E7738) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28078
	sub_82D28078(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7748"))) PPC_WEAK_FUNC(sub_830E7748);
PPC_FUNC_IMPL(__imp__sub_830E7748) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d281d0
	sub_82D281D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7750"))) PPC_WEAK_FUNC(sub_830E7750);
PPC_FUNC_IMPL(__imp__sub_830E7750) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d28070
	sub_82D28070(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7754"))) PPC_WEAK_FUNC(sub_830E7754);
PPC_FUNC_IMPL(__imp__sub_830E7754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7758"))) PPC_WEAK_FUNC(sub_830E7758);
PPC_FUNC_IMPL(__imp__sub_830E7758) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d28388
	sub_82D28388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7760"))) PPC_WEAK_FUNC(sub_830E7760);
PPC_FUNC_IMPL(__imp__sub_830E7760) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d28380
	sub_82D28380(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7764"))) PPC_WEAK_FUNC(sub_830E7764);
PPC_FUNC_IMPL(__imp__sub_830E7764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7768"))) PPC_WEAK_FUNC(sub_830E7768);
PPC_FUNC_IMPL(__imp__sub_830E7768) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d28370
	sub_82D28370(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E776C"))) PPC_WEAK_FUNC(sub_830E776C);
PPC_FUNC_IMPL(__imp__sub_830E776C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7770"))) PPC_WEAK_FUNC(sub_830E7770);
PPC_FUNC_IMPL(__imp__sub_830E7770) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82d281f8
	sub_82D281F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7790"))) PPC_WEAK_FUNC(sub_830E7790);
PPC_FUNC_IMPL(__imp__sub_830E7790) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82d28240
	ctx.lr = 0x830E77C8;
	sub_82D28240(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E77D8"))) PPC_WEAK_FUNC(sub_830E77D8);
PPC_FUNC_IMPL(__imp__sub_830E77D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d28398
	sub_82D28398(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E77E0"))) PPC_WEAK_FUNC(sub_830E77E0);
PPC_FUNC_IMPL(__imp__sub_830E77E0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// b 0x82d282b0
	sub_82D282B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7800"))) PPC_WEAK_FUNC(sub_830E7800);
PPC_FUNC_IMPL(__imp__sub_830E7800) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lwz r10,180(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// bl 0x82d282f8
	ctx.lr = 0x830E7838;
	sub_82D282F8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7848"))) PPC_WEAK_FUNC(sub_830E7848);
PPC_FUNC_IMPL(__imp__sub_830E7848) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d28390
	sub_82D28390(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7850"))) PPC_WEAK_FUNC(sub_830E7850);
PPC_FUNC_IMPL(__imp__sub_830E7850) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// beq cr6,0x830e7890
	if (ctx.cr6.eq) goto loc_830E7890;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E7890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E7890:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830e78b0
	if (ctx.cr6.eq) goto loc_830E78B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E78B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E78B0:
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

__attribute__((alias("__imp__sub_830E78C8"))) PPC_WEAK_FUNC(sub_830E78C8);
PPC_FUNC_IMPL(__imp__sub_830E78C8) {
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
	// bl 0x830e7b18
	ctx.lr = 0x830E78E0;
	sub_830E7B18(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r11,-29096
	ctx.r9.s64 = ctx.r11.s64 + -29096;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r11,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r10.u32);
	// stb r11,532(r31)
	PPC_STORE_U8(ctx.r31.u32 + 532, ctx.r11.u8);
	// stb r11,564(r31)
	PPC_STORE_U8(ctx.r31.u32 + 564, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830E7920"))) PPC_WEAK_FUNC(sub_830E7920);
PPC_FUNC_IMPL(__imp__sub_830E7920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E7928;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,-28932
	ctx.r5.s64 = ctx.r11.s64 + -28932;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa25c0
	ctx.lr = 0x830E7954;
	sub_82FA25C0(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E7968;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x830e79b0
	ctx.lr = 0x830E7978;
	sub_830E79B0(ctx, base);
	// addi r30,r31,564
	ctx.r30.s64 = ctx.r31.s64 + 564;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,513
	ctx.r4.s64 = 513;
	// bl 0x82fa5590
	ctx.lr = 0x830E798C;
	sub_82FA5590(ctx, base);
	// li r4,513
	ctx.r4.s64 = 513;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa87c0
	ctx.lr = 0x830E7998;
	sub_82FA87C0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,524
	ctx.r3.s64 = ctx.r31.s64 + 524;
	// bl 0x830e7850
	ctx.lr = 0x830E79A4;
	sub_830E7850(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E79AC"))) PPC_WEAK_FUNC(sub_830E79AC);
PPC_FUNC_IMPL(__imp__sub_830E79AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E79B0"))) PPC_WEAK_FUNC(sub_830E79B0);
PPC_FUNC_IMPL(__imp__sub_830E79B0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r4,513
	ctx.r4.s64 = 513;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// b 0x82fa5590
	sub_82FA5590(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E79C0"))) PPC_WEAK_FUNC(sub_830E79C0);
PPC_FUNC_IMPL(__imp__sub_830E79C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E79C8"))) PPC_WEAK_FUNC(sub_830E79C8);
PPC_FUNC_IMPL(__imp__sub_830E79C8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E79D0"))) PPC_WEAK_FUNC(sub_830E79D0);
PPC_FUNC_IMPL(__imp__sub_830E79D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E79D8"))) PPC_WEAK_FUNC(sub_830E79D8);
PPC_FUNC_IMPL(__imp__sub_830E79D8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28138
	sub_82D28138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E79E8"))) PPC_WEAK_FUNC(sub_830E79E8);
PPC_FUNC_IMPL(__imp__sub_830E79E8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28150
	sub_82D28150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E79F8"))) PPC_WEAK_FUNC(sub_830E79F8);
PPC_FUNC_IMPL(__imp__sub_830E79F8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28120
	sub_82D28120(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A08"))) PPC_WEAK_FUNC(sub_830E7A08);
PPC_FUNC_IMPL(__imp__sub_830E7A08) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82d280e8
	sub_82D280E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A20"))) PPC_WEAK_FUNC(sub_830E7A20);
PPC_FUNC_IMPL(__imp__sub_830E7A20) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d28368
	sub_82D28368(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A28"))) PPC_WEAK_FUNC(sub_830E7A28);
PPC_FUNC_IMPL(__imp__sub_830E7A28) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d280b0
	sub_82D280B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A38"))) PPC_WEAK_FUNC(sub_830E7A38);
PPC_FUNC_IMPL(__imp__sub_830E7A38) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82d28168
	sub_82D28168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A44"))) PPC_WEAK_FUNC(sub_830E7A44);
PPC_FUNC_IMPL(__imp__sub_830E7A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7A48"))) PPC_WEAK_FUNC(sub_830E7A48);
PPC_FUNC_IMPL(__imp__sub_830E7A48) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// b 0x82d281e0
	sub_82D281E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A5C"))) PPC_WEAK_FUNC(sub_830E7A5C);
PPC_FUNC_IMPL(__imp__sub_830E7A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7A60"))) PPC_WEAK_FUNC(sub_830E7A60);
PPC_FUNC_IMPL(__imp__sub_830E7A60) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// b 0x82d28220
	sub_82D28220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A7C"))) PPC_WEAK_FUNC(sub_830E7A7C);
PPC_FUNC_IMPL(__imp__sub_830E7A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7A80"))) PPC_WEAK_FUNC(sub_830E7A80);
PPC_FUNC_IMPL(__imp__sub_830E7A80) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82d28190
	sub_82D28190(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7A98"))) PPC_WEAK_FUNC(sub_830E7A98);
PPC_FUNC_IMPL(__imp__sub_830E7A98) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82d280c8
	sub_82D280C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AB0"))) PPC_WEAK_FUNC(sub_830E7AB0);
PPC_FUNC_IMPL(__imp__sub_830E7AB0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82d283a8
	sub_82D283A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7ABC"))) PPC_WEAK_FUNC(sub_830E7ABC);
PPC_FUNC_IMPL(__imp__sub_830E7ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7AC0"))) PPC_WEAK_FUNC(sub_830E7AC0);
PPC_FUNC_IMPL(__imp__sub_830E7AC0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82d28350
	sub_82D28350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AD0"))) PPC_WEAK_FUNC(sub_830E7AD0);
PPC_FUNC_IMPL(__imp__sub_830E7AD0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82d281b0
	sub_82D281B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AE8"))) PPC_WEAK_FUNC(sub_830E7AE8);
PPC_FUNC_IMPL(__imp__sub_830E7AE8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// b 0x82d28378
	sub_82D28378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AF0"))) PPC_WEAK_FUNC(sub_830E7AF0);
PPC_FUNC_IMPL(__imp__sub_830E7AF0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82d28060
	sub_82D28060(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7AFC"))) PPC_WEAK_FUNC(sub_830E7AFC);
PPC_FUNC_IMPL(__imp__sub_830E7AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7B00"))) PPC_WEAK_FUNC(sub_830E7B00);
PPC_FUNC_IMPL(__imp__sub_830E7B00) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// b 0x82d283a0
	sub_82D283A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7B18"))) PPC_WEAK_FUNC(sub_830E7B18);
PPC_FUNC_IMPL(__imp__sub_830E7B18) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-28920
	ctx.r10.s64 = ctx.r10.s64 + -28920;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7B34"))) PPC_WEAK_FUNC(sub_830E7B34);
PPC_FUNC_IMPL(__imp__sub_830E7B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7B38"))) PPC_WEAK_FUNC(sub_830E7B38);
PPC_FUNC_IMPL(__imp__sub_830E7B38) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_830E7B3C:
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
	// bne 0x830e7b3c
	if (!ctx.cr0.eq) goto loc_830E7B3C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7B5C"))) PPC_WEAK_FUNC(sub_830E7B5C);
PPC_FUNC_IMPL(__imp__sub_830E7B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7B60"))) PPC_WEAK_FUNC(sub_830E7B60);
PPC_FUNC_IMPL(__imp__sub_830E7B60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7B68"))) PPC_WEAK_FUNC(sub_830E7B68);
PPC_FUNC_IMPL(__imp__sub_830E7B68) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// stb r10,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r10.u8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x830e7bb4
	if (ctx.cr6.eq) goto loc_830E7BB4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E7BB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E7BB4:
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

__attribute__((alias("__imp__sub_830E7BCC"))) PPC_WEAK_FUNC(sub_830E7BCC);
PPC_FUNC_IMPL(__imp__sub_830E7BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7BD0"))) PPC_WEAK_FUNC(sub_830E7BD0);
PPC_FUNC_IMPL(__imp__sub_830E7BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e7c2c
	if (!ctx.cr0.eq) goto loc_830E7C2C;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x830e7c00
	goto loc_830E7C00;
loc_830E7BF8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E7C00:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830e7bf8
	if (ctx.cr0.eq) goto loc_830E7BF8;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_830E7C14:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7c3c
	if (!ctx.cr6.eq) goto loc_830E7C3C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_830E7C2C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e7c14
	if (ctx.cr0.eq) goto loc_830E7C14;
loc_830E7C3C:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7C44"))) PPC_WEAK_FUNC(sub_830E7C44);
PPC_FUNC_IMPL(__imp__sub_830E7C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7C48"))) PPC_WEAK_FUNC(sub_830E7C48);
PPC_FUNC_IMPL(__imp__sub_830E7C48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e7c60
	if (ctx.cr0.eq) goto loc_830E7C60;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x830e7ccc
	goto loc_830E7CCC;
loc_830E7C60:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e7cac
	if (!ctx.cr0.eq) goto loc_830E7CAC;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x830e7c80
	goto loc_830E7C80;
loc_830E7C78:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_830E7C80:
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x830e7c78
	if (ctx.cr0.eq) goto loc_830E7C78;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_830E7C94:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7cbc
	if (!ctx.cr6.eq) goto loc_830E7CBC;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_830E7CAC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e7c94
	if (ctx.cr0.eq) goto loc_830E7C94;
loc_830E7CBC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
loc_830E7CCC:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7CD4"))) PPC_WEAK_FUNC(sub_830E7CD4);
PPC_FUNC_IMPL(__imp__sub_830E7CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7CD8"))) PPC_WEAK_FUNC(sub_830E7CD8);
PPC_FUNC_IMPL(__imp__sub_830E7CD8) {
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
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82691410
	ctx.lr = 0x830E7CFC;
	sub_82691410(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stb r11,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r11.u8);
	// stb r11,21(r3)
	PPC_STORE_U8(ctx.r3.u32 + 21, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830E7D34"))) PPC_WEAK_FUNC(sub_830E7D34);
PPC_FUNC_IMPL(__imp__sub_830E7D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7D38"))) PPC_WEAK_FUNC(sub_830E7D38);
PPC_FUNC_IMPL(__imp__sub_830E7D38) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lbz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 20);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-28688
	ctx.r11.s64 = ctx.r11.s64 + -28688;
	// addi r9,r9,-28700
	ctx.r9.s64 = ctx.r9.s64 + -28700;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// beq 0x830e7db8
	if (ctx.cr0.eq) goto loc_830E7DB8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82d27e98
	ctx.lr = 0x830E7D78;
	sub_82D27E98(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr. r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x830e7da4
	if (ctx.cr0.eq) goto loc_830E7DA4;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r7,r10,-28724
	ctx.r7.s64 = ctx.r10.s64 + -28724;
	// b 0x830e7db4
	goto loc_830E7DB4;
loc_830E7DA4:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r10,-28756
	ctx.r7.s64 = ctx.r10.s64 + -28756;
	// li r5,1
	ctx.r5.s64 = 1;
loc_830E7DB4:
	// bctrl 
	ctx.lr = 0x830E7DB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E7DB8:
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// addi r10,r10,-29696
	ctx.r10.s64 = ctx.r10.s64 + -29696;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// beq cr6,0x830e7de8
	if (ctx.cr6.eq) goto loc_830E7DE8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E7DE8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E7DE8:
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

__attribute__((alias("__imp__sub_830E7DFC"))) PPC_WEAK_FUNC(sub_830E7DFC);
PPC_FUNC_IMPL(__imp__sub_830E7DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7E00"))) PPC_WEAK_FUNC(sub_830E7E00);
PPC_FUNC_IMPL(__imp__sub_830E7E00) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x830e7b38
	sub_830E7B38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E7E08"))) PPC_WEAK_FUNC(sub_830E7E08);
PPC_FUNC_IMPL(__imp__sub_830E7E08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_830E7E24"))) PPC_WEAK_FUNC(sub_830E7E24);
PPC_FUNC_IMPL(__imp__sub_830E7E24) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7E28"))) PPC_WEAK_FUNC(sub_830E7E28);
PPC_FUNC_IMPL(__imp__sub_830E7E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e7e48
	if (!ctx.cr0.eq) goto loc_830E7E48;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_830E7E48:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7e68
	if (!ctx.cr6.eq) goto loc_830E7E68;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x830e7e84
	goto loc_830E7E84;
loc_830E7E68:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7e80
	if (!ctx.cr6.eq) goto loc_830E7E80;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x830e7e84
	goto loc_830E7E84;
loc_830E7E80:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_830E7E84:
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7E90"))) PPC_WEAK_FUNC(sub_830E7E90);
PPC_FUNC_IMPL(__imp__sub_830E7E90) {
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
	// bl 0x830e7d38
	ctx.lr = 0x830E7EB0;
	sub_830E7D38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e7ec0
	if (ctx.cr0.eq) goto loc_830E7EC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x830E7EC0;
	sub_82691540(ctx, base);
loc_830E7EC0:
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

__attribute__((alias("__imp__sub_830E7EDC"))) PPC_WEAK_FUNC(sub_830E7EDC);
PPC_FUNC_IMPL(__imp__sub_830E7EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E7EE0"))) PPC_WEAK_FUNC(sub_830E7EE0);
PPC_FUNC_IMPL(__imp__sub_830E7EE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,21(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e7f00
	if (!ctx.cr0.eq) goto loc_830E7F00;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
loc_830E7F00:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7f20
	if (!ctx.cr6.eq) goto loc_830E7F20;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x830e7f3c
	goto loc_830E7F3C;
loc_830E7F20:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x830e7f38
	if (!ctx.cr6.eq) goto loc_830E7F38;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x830e7f3c
	goto loc_830E7F3C;
loc_830E7F38:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
loc_830E7F3C:
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E7F48"))) PPC_WEAK_FUNC(sub_830E7F48);
PPC_FUNC_IMPL(__imp__sub_830E7F48) {
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
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82691410
	ctx.lr = 0x830E7F74;
	sub_82691410(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r11.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r11,21(r10)
	PPC_STORE_U8(ctx.r10.u32 + 21, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_830E7FB8"))) PPC_WEAK_FUNC(sub_830E7FB8);
PPC_FUNC_IMPL(__imp__sub_830E7FB8) {
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
	// b 0x830e7ff8
	goto loc_830E7FF8;
loc_830E7FD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x830e7fb8
	ctx.lr = 0x830E7FE4;
	sub_830E7FB8(ctx, base);
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x830E7FF8;
	sub_82691460(ctx, base);
loc_830E7FF8:
	// lbz r11,21(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e7fd8
	if (ctx.cr0.eq) goto loc_830E7FD8;
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

__attribute__((alias("__imp__sub_830E801C"))) PPC_WEAK_FUNC(sub_830E801C);
PPC_FUNC_IMPL(__imp__sub_830E801C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8020"))) PPC_WEAK_FUNC(sub_830E8020);
PPC_FUNC_IMPL(__imp__sub_830E8020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830E8028;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,8191
	ctx.r10.s64 = 536805376;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830e8068
	if (ctx.cr6.lt) goto loc_830E8068;
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82691460
	ctx.lr = 0x830E805C;
	sub_82691460(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x830E8068;
	sub_82FA0648(ctx, base);
loc_830E8068:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e8094
	if (!ctx.cr6.eq) goto loc_830E8094;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x830e80cc
	goto loc_830E80CC;
loc_830E8094:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e80b8
	if (ctx.cr0.eq) goto loc_830E80B8;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e80d0
	if (!ctx.cr6.eq) goto loc_830E80D0;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x830e80d0
	goto loc_830E80D0;
loc_830E80B8:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e80d0
	if (!ctx.cr6.eq) goto loc_830E80D0;
loc_830E80CC:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_830E80D0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e81d0
	if (!ctx.cr0.eq) goto loc_830E81D0;
	// li r27,0
	ctx.r27.s64 = 0;
loc_830E80EC:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830e8150
	if (!ctx.cr6.eq) goto loc_830E8150;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e8160
	if (ctx.cr0.eq) goto loc_830E8160;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e8128
	if (!ctx.cr6.eq) goto loc_830E8128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830e7ee0
	ctx.lr = 0x830E8128;
	sub_830E7EE0(ctx, base);
loc_830E8128:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830e7e28
	ctx.lr = 0x830E814C;
	sub_830E7E28(ctx, base);
	// b 0x830e81c0
	goto loc_830E81C0;
loc_830E8150:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e8184
	if (!ctx.cr0.eq) goto loc_830E8184;
loc_830E8160:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r29.u8);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x830e81c0
	goto loc_830E81C0;
loc_830E8184:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e819c
	if (!ctx.cr6.eq) goto loc_830E819C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x830e7e28
	ctx.lr = 0x830E819C;
	sub_830E7E28(ctx, base);
loc_830E819C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x830e7ee0
	ctx.lr = 0x830E81C0;
	sub_830E7EE0(ctx, base);
loc_830E81C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e80ec
	if (ctx.cr0.eq) goto loc_830E80EC;
loc_830E81D0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E81EC"))) PPC_WEAK_FUNC(sub_830E81EC);
PPC_FUNC_IMPL(__imp__sub_830E81EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E81F0"))) PPC_WEAK_FUNC(sub_830E81F0);
PPC_FUNC_IMPL(__imp__sub_830E81F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x830E81F8;
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
	// beq 0x830e8220
	if (ctx.cr0.eq) goto loc_830E8220;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x830E8220;
	sub_82FA0680(ctx, base);
loc_830E8220:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x830e7bd0
	ctx.lr = 0x830E822C;
	sub_830E7BD0(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x830e8248
	if (ctx.cr0.eq) goto loc_830E8248;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x830e826c
	goto loc_830E826C;
loc_830E8248:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,21(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e8260
	if (ctx.cr0.eq) goto loc_830E8260;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x830e826c
	goto loc_830E826C;
loc_830E8260:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e8344
	if (!ctx.cr6.eq) goto loc_830E8344;
loc_830E826C:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e8280
	if (!ctx.cr0.eq) goto loc_830E8280;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_830E8280:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e8298
	if (!ctx.cr6.eq) goto loc_830E8298;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x830e82b0
	goto loc_830E82B0;
loc_830E8298:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e82ac
	if (!ctx.cr6.eq) goto loc_830E82AC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x830e82b0
	goto loc_830E82B0;
loc_830E82AC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_830E82B0:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e82f8
	if (!ctx.cr6.eq) goto loc_830E82F8;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e82d4
	if (ctx.cr0.eq) goto loc_830E82D4;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x830e82f4
	goto loc_830E82F4;
loc_830E82D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x830e82e8
	goto loc_830E82E8;
loc_830E82E0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E82E8:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x830e82e0
	if (ctx.cr0.eq) goto loc_830E82E0;
loc_830E82F4:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_830E82F8:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e83d8
	if (!ctx.cr6.eq) goto loc_830E83D8;
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x830e831c
	if (ctx.cr0.eq) goto loc_830E831C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x830e833c
	goto loc_830E833C;
loc_830E831C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x830e8330
	goto loc_830E8330;
loc_830E8328:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_830E8330:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x830e8328
	if (ctx.cr0.eq) goto loc_830E8328;
loc_830E833C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x830e83d8
	goto loc_830E83D8;
loc_830E8344:
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
	// bne cr6,0x830e8364
	if (!ctx.cr6.eq) goto loc_830E8364;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x830e838c
	goto loc_830E838C;
loc_830E8364:
	// lbz r11,21(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 21);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x830e8378
	if (!ctx.cr0.eq) goto loc_830E8378;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_830E8378:
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
loc_830E838C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e83a4
	if (!ctx.cr6.eq) goto loc_830E83A4;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x830e83c0
	goto loc_830E83C0;
loc_830E83A4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x830e83bc
	if (!ctx.cr6.eq) goto loc_830E83BC;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x830e83c0
	goto loc_830E83C0;
loc_830E83BC:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_830E83C0:
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
loc_830E83D8:
	// lbz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e8570
	if (!ctx.cr6.eq) goto loc_830E8570;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e856c
	if (ctx.cr6.eq) goto loc_830E856C;
	// li r29,0
	ctx.r29.s64 = 0;
loc_830E83FC:
	// lbz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x830e856c
	if (!ctx.cr6.eq) goto loc_830E856C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e84b4
	if (!ctx.cr6.eq) goto loc_830E84B4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e843c
	if (!ctx.cr0.eq) goto loc_830E843C;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e7ee0
	ctx.lr = 0x830E8438;
	sub_830E7EE0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830E843C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e8508
	if (!ctx.cr0.eq) goto loc_830E8508;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e8468
	if (!ctx.cr6.eq) goto loc_830E8468;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x830e8504
	if (ctx.cr6.eq) goto loc_830E8504;
loc_830E8468:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e8490
	if (!ctx.cr6.eq) goto loc_830E8490;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e7e28
	ctx.lr = 0x830E848C;
	sub_830E7E28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_830E8490:
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
	// bl 0x830e7ee0
	ctx.lr = 0x830E84B0;
	sub_830E7EE0(ctx, base);
	// b 0x830e856c
	goto loc_830E856C;
loc_830E84B4:
	// lbz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 20);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e84d8
	if (!ctx.cr0.eq) goto loc_830E84D8;
	// stb r30,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,20(r31)
	PPC_STORE_U8(ctx.r31.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e7e28
	ctx.lr = 0x830E84D4;
	sub_830E7E28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E84D8:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e8508
	if (!ctx.cr0.eq) goto loc_830E8508;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e8524
	if (!ctx.cr6.eq) goto loc_830E8524;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e8524
	if (!ctx.cr6.eq) goto loc_830E8524;
loc_830E8504:
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
loc_830E8508:
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
	// bne cr6,0x830e83fc
	if (!ctx.cr6.eq) goto loc_830E83FC;
	// b 0x830e856c
	goto loc_830E856C;
loc_830E8524:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x830e854c
	if (!ctx.cr6.eq) goto loc_830E854C;
	// stb r30,20(r10)
	PPC_STORE_U8(ctx.r10.u32 + 20, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e7ee0
	ctx.lr = 0x830E8548;
	sub_830E7EE0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_830E854C:
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
	// bl 0x830e7e28
	ctx.lr = 0x830E856C;
	sub_830E7E28(ctx, base);
loc_830E856C:
	// stb r30,20(r28)
	PPC_STORE_U8(ctx.r28.u32 + 20, ctx.r30.u8);
loc_830E8570:
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82691460
	ctx.lr = 0x830E8580;
	sub_82691460(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830e8594
	if (ctx.cr6.eq) goto loc_830E8594;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_830E8594:
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

__attribute__((alias("__imp__sub_830E85A4"))) PPC_WEAK_FUNC(sub_830E85A4);
PPC_FUNC_IMPL(__imp__sub_830E85A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E85A8"))) PPC_WEAK_FUNC(sub_830E85A8);
PPC_FUNC_IMPL(__imp__sub_830E85A8) {
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
	// bl 0x830e7fb8
	ctx.lr = 0x830E85C8;
	sub_830E7FB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E85FC"))) PPC_WEAK_FUNC(sub_830E85FC);
PPC_FUNC_IMPL(__imp__sub_830E85FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8600"))) PPC_WEAK_FUNC(sub_830E8600);
PPC_FUNC_IMPL(__imp__sub_830E8600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x830E8608;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x830e8688
	if (!ctx.cr0.eq) goto loc_830E8688;
	// lwz r9,12(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
loc_830E863C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830e865c
	if (ctx.cr6.eq) goto loc_830E865C;
	// li r7,-1
	ctx.r7.s64 = -1;
	// subfc r10,r9,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r9.u32;
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subfze r29,r7
	temp.u64 = ~ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r29.u64 = temp.u64;
	// b 0x830e8668
	goto loc_830E8668;
loc_830E865C:
	// subfc r10,r10,r9
	ctx.xer.ca = ctx.r9.u32 >= ctx.r10.u32;
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r29,r10,31
	ctx.r29.u64 = ctx.r10.u32 & 0x1;
loc_830E8668:
	// clrlwi. r10,r29,24
	ctx.r10.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x830e8678
	if (ctx.cr0.eq) goto loc_830E8678;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x830e867c
	goto loc_830E867C;
loc_830E8678:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_830E867C:
	// lbz r10,21(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x830e863c
	if (ctx.cr0.eq) goto loc_830E863C;
loc_830E8688:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// beq 0x830e86dc
	if (ctx.cr0.eq) goto loc_830E86DC;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e86d4
	if (!ctx.cr6.eq) goto loc_830E86D4;
	// li r5,1
	ctx.r5.s64 = 1;
loc_830E86B0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// bl 0x830e8020
	ctx.lr = 0x830E86C0;
	sub_830E8020(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r25,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r25.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x830e8714
	goto loc_830E8714;
loc_830E86D4:
	// bl 0x830e7c48
	ctx.lr = 0x830E86D8;
	sub_830E7C48(ctx, base);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_830E86DC:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830e86f8
	if (!ctx.cr6.lt) goto loc_830E86F8;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// b 0x830e86b0
	goto loc_830E86B0;
loc_830E86F8:
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82691460
	ctx.lr = 0x830E8708;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_830E8714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8720"))) PPC_WEAK_FUNC(sub_830E8720);
PPC_FUNC_IMPL(__imp__sub_830E8720) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lbz r9,21(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x830e8760
	if (!ctx.cr0.eq) goto loc_830E8760;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_830E8738:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x830e874c
	if (!ctx.cr6.lt) goto loc_830E874C;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x830e8754
	goto loc_830E8754;
loc_830E874C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_830E8754:
	// lbz r8,21(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 21);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x830e8738
	if (ctx.cr0.eq) goto loc_830E8738;
loc_830E8760:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r10.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e8788
	if (ctx.cr6.eq) goto loc_830E8788;
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830e8788
	if (ctx.cr6.lt) goto loc_830E8788;
	// addi r11,r1,-16
	ctx.r11.s64 = ctx.r1.s64 + -16;
	// b 0x830e8790
	goto loc_830E8790;
loc_830E8788:
	// stw r11,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r11.u32);
	// addi r11,r1,-12
	ctx.r11.s64 = ctx.r1.s64 + -12;
loc_830E8790:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E879C"))) PPC_WEAK_FUNC(sub_830E879C);
PPC_FUNC_IMPL(__imp__sub_830E879C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E87A0"))) PPC_WEAK_FUNC(sub_830E87A0);
PPC_FUNC_IMPL(__imp__sub_830E87A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830E87A8;
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
	// bne cr6,0x830e880c
	if (!ctx.cr6.eq) goto loc_830E880C;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e880c
	if (!ctx.cr6.eq) goto loc_830E880C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x830e85a8
	ctx.lr = 0x830E87DC;
	sub_830E85A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x830e8818
	goto loc_830E8818;
loc_830E87EC:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x830e7bd0
	ctx.lr = 0x830E87F8;
	sub_830E7BD0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830e81f0
	ctx.lr = 0x830E8808;
	sub_830E81F0(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_830E880C:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x830e87ec
	if (!ctx.cr6.eq) goto loc_830E87EC;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_830E8818:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8824"))) PPC_WEAK_FUNC(sub_830E8824);
PPC_FUNC_IMPL(__imp__sub_830E8824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8828"))) PPC_WEAK_FUNC(sub_830E8828);
PPC_FUNC_IMPL(__imp__sub_830E8828) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// addi r9,r9,-8132
	ctx.r9.s64 = ctx.r9.s64 + -8132;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x830e5a18
	ctx.lr = 0x830E886C;
	sub_830E5A18(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830e88c4
	if (!ctx.cr6.eq) goto loc_830E88C4;
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
	ctx.lr = 0x830E8890;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,20360
	ctx.r31.s64 = ctx.r11.s64 + 20360;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e8720
	ctx.lr = 0x830E88A8;
	sub_830E8720(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x830e88c4
	if (ctx.cr6.eq) goto loc_830E88C4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x830e81f0
	ctx.lr = 0x830E88C4;
	sub_830E81F0(ctx, base);
loc_830E88C4:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x830e5bb8
	ctx.lr = 0x830E88CC;
	sub_830E5BB8(ctx, base);
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

__attribute__((alias("__imp__sub_830E88E0"))) PPC_WEAK_FUNC(sub_830E88E0);
PPC_FUNC_IMPL(__imp__sub_830E88E0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_830E88E4:
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
	// bne 0x830e88e4
	if (!ctx.cr0.eq) goto loc_830E88E4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x830e8828
	sub_830E8828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8910"))) PPC_WEAK_FUNC(sub_830E8910);
PPC_FUNC_IMPL(__imp__sub_830E8910) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E8914"))) PPC_WEAK_FUNC(sub_830E8914);
PPC_FUNC_IMPL(__imp__sub_830E8914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8918"))) PPC_WEAK_FUNC(sub_830E8918);
PPC_FUNC_IMPL(__imp__sub_830E8918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830E8920;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x830e7cd8
	ctx.lr = 0x830E8938;
	sub_830E7CD8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830e8954
	if (ctx.cr0.eq) goto loc_830E8954;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_830E8954:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x830e8600
	ctx.lr = 0x830E8964;
	sub_830E8600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8970"))) PPC_WEAK_FUNC(sub_830E8970);
PPC_FUNC_IMPL(__imp__sub_830E8970) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x830e88e0
	sub_830E88E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8978"))) PPC_WEAK_FUNC(sub_830E8978);
PPC_FUNC_IMPL(__imp__sub_830E8978) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x830E8980;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82d27e50
	ctx.lr = 0x830E8994;
	sub_82D27E50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x830e89b4
	if (ctx.cr0.eq) goto loc_830E89B4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x830e89ac
	if (!ctx.cr6.gt) goto loc_830E89AC;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_830E89AC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_830E89B4:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r11,r11,-29496
	ctx.r11.s64 = ctx.r11.s64 + -29496;
	// addi r10,r10,-8132
	ctx.r10.s64 = ctx.r10.s64 + -8132;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x830e5a18
	ctx.lr = 0x830E89E4;
	sub_830E5A18(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r31,r11,20360
	ctx.r31.s64 = ctx.r11.s64 + 20360;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x830e8720
	ctx.lr = 0x830E89FC;
	sub_830E8720(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x830e8b08
	if (!ctx.cr6.eq) goto loc_830E8B08;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82691500
	ctx.lr = 0x830E8A14;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x830e8a58
	if (ctx.cr0.eq) goto loc_830E8A58;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r29,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r29.u32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// stb r29,20(r3)
	PPC_STORE_U8(ctx.r3.u32 + 20, ctx.r29.u8);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r11,r11,-28688
	ctx.r11.s64 = ctx.r11.s64 + -28688;
	// addi r10,r10,-28700
	ctx.r10.s64 = ctx.r10.s64 + -28700;
	// addi r9,r9,-29696
	ctx.r9.s64 = ctx.r9.s64 + -29696;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r9,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r9.u32);
	// stw r29,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r29.u32);
	// stb r29,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r29.u8);
	// b 0x830e8a5c
	goto loc_830E8A5C;
loc_830E8A58:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_830E8A5C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x830e7b68
	ctx.lr = 0x830E8A64;
	sub_830E7B68(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830e8a94
	if (!ctx.cr6.eq) goto loc_830E8A94;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_830E8A84:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x830e5bb8
	ctx.lr = 0x830E8A8C;
	sub_830E5BB8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x830e89ac
	goto loc_830E89AC;
loc_830E8A94:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stb r9,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r9.u8);
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// bl 0x830e7850
	ctx.lr = 0x830E8AB0;
	sub_830E7850(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x830e8918
	ctx.lr = 0x830E8ACC;
	sub_830E8918(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// bl 0x830e7850
	ctx.lr = 0x830E8AD8;
	sub_830E7850(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// beq cr6,0x830e8a84
	if (ctx.cr6.eq) goto loc_830E8A84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x830E8B04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x830e8a84
	goto loc_830E8A84;
loc_830E8B08:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x830e7850
	ctx.lr = 0x830E8B14;
	sub_830E7850(ctx, base);
	// b 0x830e8a84
	goto loc_830E8A84;
}

__attribute__((alias("__imp__sub_830E8B18"))) PPC_WEAK_FUNC(sub_830E8B18);
PPC_FUNC_IMPL(__imp__sub_830E8B18) {
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
	// bl 0x830e87a0
	ctx.lr = 0x830E8B40;
	sub_830E87A0(ctx, base);
	// lis r4,8447
	ctx.r4.s64 = 553582592;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ori r4,r4,16384
	ctx.r4.u64 = ctx.r4.u64 | 16384;
	// bl 0x82691460
	ctx.lr = 0x830E8B50;
	sub_82691460(ctx, base);
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

__attribute__((alias("__imp__sub_830E8B64"))) PPC_WEAK_FUNC(sub_830E8B64);
PPC_FUNC_IMPL(__imp__sub_830E8B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8B68"))) PPC_WEAK_FUNC(sub_830E8B68);
PPC_FUNC_IMPL(__imp__sub_830E8B68) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8B6C"))) PPC_WEAK_FUNC(sub_830E8B6C);
PPC_FUNC_IMPL(__imp__sub_830E8B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8B70"))) PPC_WEAK_FUNC(sub_830E8B70);
PPC_FUNC_IMPL(__imp__sub_830E8B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x830E8B78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e8bd0
	if (ctx.cr6.eq) goto loc_830E8BD0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_830E8BA4:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830e8ba4
	if (!ctx.cr6.eq) goto loc_830E8BA4;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r30,r11,0
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r30,199
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 199, ctx.xer);
	// ble cr6,0x830e8bd4
	if (!ctx.cr6.gt) goto loc_830E8BD4;
loc_830E8BC8:
	// li r31,87
	ctx.r31.s64 = 87;
	// b 0x830e8cc4
	goto loc_830E8CC4;
loc_830E8BD0:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_830E8BD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830e8bc8
	if (ctx.cr6.eq) goto loc_830E8BC8;
	// cmplwi cr6,r27,1000
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1000, ctx.xer);
	// bgt cr6,0x830e8bc8
	if (ctx.cr6.gt) goto loc_830E8BC8;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x830e8bc8
	if (ctx.cr6.eq) goto loc_830E8BC8;
	// lis r6,5
	ctx.r6.s64 = 327680;
	// lis r5,5
	ctx.r5.s64 = 327680;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,212
	ctx.r7.s64 = 212;
	// ori r6,r6,32826
	ctx.r6.u64 = ctx.r6.u64 | 32826;
	// ori r5,r5,32825
	ctx.r5.u64 = ctx.r5.u64 | 32825;
	// li r4,252
	ctx.r4.s64 = 252;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x83179e24
	ctx.lr = 0x830E8C18;
	__imp__XamCreateEnumeratorHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e8ca4
	if (!ctx.cr0.eq) goto loc_830E8CA4;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179e44
	ctx.lr = 0x830E8C2C;
	__imp__XamGetPrivateEnumStructureFromHandle(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x830e8ca4
	if (!ctx.cr0.eq) goto loc_830E8CA4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830e8c44
	if (ctx.cr6.eq) goto loc_830E8C44;
	// mulli r11,r27,208
	ctx.r11.s64 = ctx.r27.s64 * 208;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_830E8C44:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// beq cr6,0x830e8c64
	if (ctx.cr6.eq) goto loc_830E8C64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x830E8C64;
	sub_82FA77C0(ctx, base);
loc_830E8C64:
	// mulli r11,r27,215
	ctx.r11.s64 = ctx.r27.s64 * 215;
	// stbx r28,r30,r31
	PPC_STORE_U8(ctx.r30.u32 + ctx.r31.u32, ctx.r28.u8);
	// stw r28,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r28.u32);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// addi r5,r31,208
	ctx.r5.s64 = ctx.r31.s64 + 208;
	// stw r4,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r4.u32);
	// lis r3,6144
	ctx.r3.s64 = 402653184;
	// bl 0x8317a1a4
	ctx.lr = 0x830E8C84;
	__imp__XamAlloc(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x830e8c94
	if (!ctx.cr0.lt) goto loc_830E8C94;
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x830e8ca4
	goto loc_830E8CA4;
loc_830E8C94:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_830E8CA4:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e8cb4
	if (ctx.cr6.eq) goto loc_830E8CB4;
	// bl 0x82a756a0
	ctx.lr = 0x830E8CB4;
	sub_82A756A0(ctx, base);
loc_830E8CB4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830e8cc4
	if (ctx.cr6.eq) goto loc_830E8CC4;
	// bl 0x83179424
	ctx.lr = 0x830E8CC4;
	__imp__ObDereferenceObject(ctx, base);
loc_830E8CC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8CD0"))) PPC_WEAK_FUNC(sub_830E8CD0);
PPC_FUNC_IMPL(__imp__sub_830E8CD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82d2d090
	sub_82D2D090(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8CD4"))) PPC_WEAK_FUNC(sub_830E8CD4);
PPC_FUNC_IMPL(__imp__sub_830E8CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8CD8"))) PPC_WEAK_FUNC(sub_830E8CD8);
PPC_FUNC_IMPL(__imp__sub_830E8CD8) {
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
	// bl 0x82d33760
	ctx.lr = 0x830E8CF8;
	sub_82D33760(ctx, base);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82d33760
	ctx.lr = 0x830E8D04;
	sub_82D33760(ctx, base);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// addi r3,r30,96
	ctx.r3.s64 = ctx.r30.s64 + 96;
	// bl 0x82d33760
	ctx.lr = 0x830E8D10;
	sub_82D33760(ctx, base);
	// addi r4,r31,144
	ctx.r4.s64 = ctx.r31.s64 + 144;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x82d33760
	ctx.lr = 0x830E8D1C;
	sub_82D33760(ctx, base);
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

__attribute__((alias("__imp__sub_830E8D34"))) PPC_WEAK_FUNC(sub_830E8D34);
PPC_FUNC_IMPL(__imp__sub_830E8D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8D38"))) PPC_WEAK_FUNC(sub_830E8D38);
PPC_FUNC_IMPL(__imp__sub_830E8D38) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x830E8D40;
	__savegprlr_24(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r31,16
	ctx.r31.s64 = 16;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// addi r27,r11,32
	ctx.r27.s64 = ctx.r11.s64 + 32;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// addi r7,r4,96
	ctx.r7.s64 = ctx.r4.s64 + 96;
	// addi r26,r10,16
	ctx.r26.s64 = ctx.r10.s64 + 16;
	// addi r25,r10,32
	ctx.r25.s64 = ctx.r10.s64 + 32;
	// addi r9,r3,144
	ctx.r9.s64 = ctx.r3.s64 + 144;
	// addi r6,r4,144
	ctx.r6.s64 = ctx.r4.s64 + 144;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// lvx128 v11,r4,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r24,r9,32
	ctx.r24.s64 = ctx.r9.s64 + 32;
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vaddfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vaddfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r8,r31
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r28
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vaddfp v31,v1,v2
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v31,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r8,r5
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r27
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vaddfp v28,v29,v30
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// stvx128 v28,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v27,r0,r7
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r0,r10
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddfp v25,v26,v27
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v27.f32)));
	// stvx128 v25,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r7,r31
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r0,r26
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vaddfp v22,v23,v24
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v24.f32)));
	// stvx128 v22,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r7,r5
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r0,r25
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vaddfp v19,v20,v21
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v21.f32)));
	// stvx128 v19,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r0,r6
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v17,r0,r9
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp v16,v17,v18
	_mm_store_ps(ctx.v16.f32, _mm_add_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v18.f32)));
	// stvx128 v16,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v15,r6,r31
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r0,r3
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v63,v14,v15
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v15.f32)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r6,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r24
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v60,v61,v62
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v60,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8E44"))) PPC_WEAK_FUNC(sub_830E8E44);
PPC_FUNC_IMPL(__imp__sub_830E8E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8E48"))) PPC_WEAK_FUNC(sub_830E8E48);
PPC_FUNC_IMPL(__imp__sub_830E8E48) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x830E8E50;
	__savegprlr_24(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r31,16
	ctx.r31.s64 = 16;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r29,r3,32
	ctx.r29.s64 = ctx.r3.s64 + 32;
	// addi r11,r3,48
	ctx.r11.s64 = ctx.r3.s64 + 48;
	// addi r8,r4,48
	ctx.r8.s64 = ctx.r4.s64 + 48;
	// addi r28,r11,16
	ctx.r28.s64 = ctx.r11.s64 + 16;
	// addi r27,r11,32
	ctx.r27.s64 = ctx.r11.s64 + 32;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// addi r7,r4,96
	ctx.r7.s64 = ctx.r4.s64 + 96;
	// addi r26,r10,16
	ctx.r26.s64 = ctx.r10.s64 + 16;
	// addi r25,r10,32
	ctx.r25.s64 = ctx.r10.s64 + 32;
	// addi r9,r3,144
	ctx.r9.s64 = ctx.r3.s64 + 144;
	// addi r6,r4,144
	ctx.r6.s64 = ctx.r4.s64 + 144;
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// lvx128 v11,r4,r31
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r24,r9,32
	ctx.r24.s64 = ctx.r9.s64 + 32;
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vsubfp v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v9,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r4,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v3,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r8,r31
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r28
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vsubfp v31,v1,v2
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// stvx128 v31,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v30,r8,r5
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r27
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vsubfp v28,v29,v30
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// stvx128 v28,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v27,r0,r7
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r0,r10
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v25,v26,v27
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v27.f32)));
	// stvx128 v25,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v24,r7,r31
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v23,r0,r26
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vsubfp v22,v23,v24
	_mm_store_ps(ctx.v22.f32, _mm_sub_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v24.f32)));
	// stvx128 v22,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v21,r7,r5
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v20,r0,r25
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsubfp v19,v20,v21
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v21.f32)));
	// stvx128 v19,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v18,r0,r6
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v17,r0,r9
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v16,v17,v18
	_mm_store_ps(ctx.v16.f32, _mm_sub_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v18.f32)));
	// stvx128 v16,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v15,r6,r31
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r0,r3
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v63,v14,v15
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v15.f32)));
	// stvx128 v63,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r6,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r0,r24
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v60,v61,v62
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v60,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E8F54"))) PPC_WEAK_FUNC(sub_830E8F54);
PPC_FUNC_IMPL(__imp__sub_830E8F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E8F58"))) PPC_WEAK_FUNC(sub_830E8F58);
PPC_FUNC_IMPL(__imp__sub_830E8F58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x830E8F60;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r25,-16
	ctx.r25.s64 = -16;
loc_830E8F78:
	// addi r26,r27,48
	ctx.r26.s64 = ctx.r27.s64 + 48;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// li r28,2
	ctx.r28.s64 = 2;
loc_830E8F84:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82d34028
	ctx.lr = 0x830E8F94;
	sub_82D34028(ctx, base);
	// addi r29,r31,-32
	ctx.r29.s64 = ctx.r31.s64 + -32;
	// addi r5,r30,96
	ctx.r5.s64 = ctx.r30.s64 + 96;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82d34028
	ctx.lr = 0x830E8FA8;
	sub_82D34028(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v9,r31,r25
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vaddfp v8,v9,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v8,r31,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddfp v6,v7,v10
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v6,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x830e8f84
	if (!ctx.cr0.eq) goto loc_830E8F84;
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,96
	ctx.r27.s64 = ctx.r27.s64 + 96;
	// bne 0x830e8f78
	if (!ctx.cr0.eq) goto loc_830E8F78;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9008"))) PPC_WEAK_FUNC(sub_830E9008);
PPC_FUNC_IMPL(__imp__sub_830E9008) {
	PPC_FUNC_PROLOGUE();
	// addi r6,r5,16
	ctx.r6.s64 = ctx.r5.s64 + 16;
	// lvx128 v5,r0,r5
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,48
	ctx.r11.s64 = ctx.r4.s64 + 48;
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v2,r0,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// vspltw v10,v5,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xAA));
	// addi r9,r4,144
	ctx.r9.s64 = ctx.r4.s64 + 144;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r4,96
	ctx.r10.s64 = ctx.r4.s64 + 96;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v3,r0,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v0,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v9,r11,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v11,r11,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r4,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v5,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x55));
	// vmulfp128 v8,v3,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r4,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v5,v2,v4
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v4.f32)));
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// vmaddfp v9,v9,v7,v8
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v10,v6,v10,v5
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmaddfp v12,v11,v12,v9
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v0,v13,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v29,v12,v12
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// lvx128 v1,r0,r5
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r9
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v30,r0,r10
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r9,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vaddfp v25,v29,v0
	_mm_store_ps(ctx.v25.f32, _mm_add_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v8,r10,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r9,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r10,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v28,r0,r6
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v27,v28,0
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vspltw v26,v1,0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// vmulfp128 v6,v31,v27
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v27.f32)));
	// vspltw v7,v28,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xAA));
	// stvx128 v25,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v10,v1,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xAA));
	// vspltw v12,v28,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0x55));
	// vmulfp128 v9,v30,v26
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v26.f32)));
	// vspltw v0,v1,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0x55));
	// vmaddfp v7,v5,v7,v6
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v8,v10,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v11,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v13,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vor v24,v12,v12
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v23,v24,v0
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v23,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E90E8"))) PPC_WEAK_FUNC(sub_830E90E8);
PPC_FUNC_IMPL(__imp__sub_830E90E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830E90F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x830daab8
	ctx.lr = 0x830E9100;
	sub_830DAAB8(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r18,r31,16
	ctx.r18.s64 = ctx.r31.s64 + 16;
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// vxor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_setzero_si128());
	// li r26,16
	ctx.r26.s64 = 16;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// vxor v10,v13,v13
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_setzero_si128());
	// addi r9,r31,144
	ctx.r9.s64 = ctx.r31.s64 + 144;
	// vxor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_setzero_si128());
	// stvx128 v12,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stvx128 v12,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// stvx128 v12,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lfs f0,24436(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// addi r30,r1,208
	ctx.r30.s64 = ctx.r1.s64 + 208;
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// addi r19,r1,112
	ctx.r19.s64 = ctx.r1.s64 + 112;
	// stvx128 v11,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r21,r31,r4
	ctx.r21.s64 = ctx.r4.s64 - ctx.r31.s64;
	// stvx128 v11,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r29,r31,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r31.s64;
	// stvx128 v11,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r27,r31,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r31.s64;
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r25,r31,r7
	ctx.r25.s64 = ctx.r7.s64 - ctx.r31.s64;
	// stvx128 v10,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r28,r31,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r31.s64;
	// stvx128 v10,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subf r16,r30,r31
	ctx.r16.s64 = ctx.r31.s64 - ctx.r30.s64;
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r17,0
	ctx.r17.s64 = 0;
	// stvx128 v9,r9,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stvx128 v9,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stfs f0,144(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// li r4,-96
	ctx.r4.s64 = -96;
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// li r22,-16
	ctx.r22.s64 = -16;
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r23,80
	ctx.r23.s64 = 80;
	// li r20,96
	ctx.r20.s64 = 96;
	// li r24,112
	ctx.r24.s64 = 112;
loc_830E91F0:
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_830E9200:
	// lfs f13,0(r19)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r6,2
	ctx.r6.s64 = 2;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r10,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// add r7,r16,r10
	ctx.r7.u64 = ctx.r16.u64 + ctx.r10.u64;
	// vmulfp128 v9,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r16,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r16.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v12,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
	// stvx128 v9,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r16,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r16.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v5,v8,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v6,v7,v13
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v5,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830E925C:
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x830e926c
	if (!ctx.cr6.eq) goto loc_830E926C;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x830e92e0
	if (ctx.cr6.eq) goto loc_830E92E0;
loc_830E926C:
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvx128 v11,r10,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r15,r1,112
	ctx.r15.s64 = ctx.r1.s64 + 112;
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r14,r1,80
	ctx.r14.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r11,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r15.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r14
	temp.u32 = ctx.r14.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmaddfp v10,v11,v0,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v11,v12,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r29,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r11,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v11,v10,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r11,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r29,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830E92E0:
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x830e92f0
	if (!ctx.cr6.eq) goto loc_830E92F0;
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x830e9364
	if (ctx.cr6.eq) goto loc_830E9364;
loc_830E92F0:
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvx128 v11,r21,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r21.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r15,r1,128
	ctx.r15.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r10,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r14,r1,80
	ctx.r14.s64 = ctx.r1.s64 + 80;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r15.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r14
	temp.u32 = ctx.r14.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmaddfp v10,v10,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v11,v12,v0,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r21,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r27,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r11,r20
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v11,v10,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r27,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830E9364:
	// cmpw cr6,r9,r17
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r17.s32, ctx.xer);
	// bne cr6,0x830e9374
	if (!ctx.cr6.eq) goto loc_830E9374;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beq cr6,0x830e93e8
	if (ctx.cr6.eq) goto loc_830E93E8;
loc_830E9374:
	// add r6,r31,r9
	ctx.r6.u64 = ctx.r31.u64 + ctx.r9.u64;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r15,r1,144
	ctx.r15.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r10,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v11,r25,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r14,r1,80
	ctx.r14.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r11,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r6,r5
	ctx.r3.u64 = ctx.r6.u64 + ctx.r5.u64;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r6,r15
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r15.u32);
	ctx.f13.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f12,80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v0,0,r14
	temp.u32 = ctx.r14.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmaddfp v11,v10,v0,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v12,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r25,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r28,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r24
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmaddfp v11,v10,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_830E93E8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x830e925c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830E925C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r19,r19,20
	ctx.r19.s64 = ctx.r19.s64 + 20;
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// blt cr6,0x830e9200
	if (ctx.cr6.lt) goto loc_830E9200;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r19,r11,144
	ctx.r19.s64 = ctx.r11.s64 + 144;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// blt cr6,0x830e91f0
	if (ctx.cr6.lt) goto loc_830E91F0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9440"))) PPC_WEAK_FUNC(sub_830E9440);
PPC_FUNC_IMPL(__imp__sub_830E9440) {
	PPC_FUNC_PROLOGUE();
	// b 0x830e90e8
	sub_830E90E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9444"))) PPC_WEAK_FUNC(sub_830E9444);
PPC_FUNC_IMPL(__imp__sub_830E9444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9448"))) PPC_WEAK_FUNC(sub_830E9448);
PPC_FUNC_IMPL(__imp__sub_830E9448) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r11,-8096
	ctx.r10.s64 = ctx.r11.s64 + -8096;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9458"))) PPC_WEAK_FUNC(sub_830E9458);
PPC_FUNC_IMPL(__imp__sub_830E9458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x830E9460;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82fa8d20
	ctx.lr = 0x830E9468;
	__savefpr_26(ctx, base);
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x82fac10c
	ctx.lr = 0x830E9470;
	__savevmx_115(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,48
	ctx.r11.s64 = 48;
	// lwz r29,12(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r21,28(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lvx128 v121,r4,r11
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lvx128 v0,r4,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// vsubfp128 v118,v0,v121
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v118.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v121.f32)));
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stvx128 v121,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v118,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x830e94c0
	if (ctx.cr6.gt) goto loc_830E94C0;
	// li r29,128
	ctx.r29.s64 = 128;
loc_830E94C0:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82d2d090
	ctx.lr = 0x830E94CC;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r29,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r23,0(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,16
	ctx.r10.s64 = 16;
	// vxor128 v5,v126,v126
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_setzero_si128());
	// addi r9,r11,127
	ctx.r9.s64 = ctx.r11.s64 + 127;
	// vspltisw v4,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_set1_epi32(int(0x0)));
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// rlwinm r11,r9,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// addi r7,r8,22016
	ctx.r7.s64 = ctx.r8.s64 + 22016;
	// vor v8,v5,v5
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lvx128 v126,r0,r30
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r30,r10
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lvx128 v2,r0,r5
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// vspltw v1,v2,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// vsubfp128 v31,v3,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v126.f32)));
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r7,r9,21920
	ctx.r7.s64 = ctx.r9.s64 + 21920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// vmsum3fp128 v30,v31,v31
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v31.f32), 0xEF));
	// vrsqrtefp v0,v30
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v30.f32))));
	// vmulfp128 v10,v30,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v6,v4,v30
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v4,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vspltw v29,v13,0
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v28,v29,v30
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v117,v31,v29
	_mm_store_ps(ctx.v117.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v29.f32)));
	// stvewx v28,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lvx128 v11,r30,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcmpeqfp128 v120,v5,v117
	_mm_store_ps(ctx.v120.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v117.f32)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v13,v117,v117
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v117.u8));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v27,v120,v120
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// vaddfp128 v124,v1,v11
	_mm_store_ps(ctx.v124.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v11.f32)));
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// vor128 v125,v120,v120
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// lfs f28,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f28.f64 = double(temp.f32);
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// vsel128 v27,v13,v12,v27
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// lfs f30,5184(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// vrlimi128 v27,v0,1,0
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 1));
	// vor v11,v27,v27
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v27.u8));
	// vrefp v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v11.f32)));
	// vnmsubfp v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v0,v4,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 228), 1));
	// vsel128 v125,v0,v8,v125
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v125,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	ctx.lr = 0x830E95E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// li r10,224
	ctx.r10.s64 = 224;
	// vspltisw128 v122,-1
	_mm_store_si128((__m128i*)ctx.v122.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r28,r11,-21408
	ctx.r28.s64 = ctx.r11.s64 + -21408;
	// lvx128 v26,r28,r10
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v25,v120,v26
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// fsubs f13,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f28.f64));
	// vcmpequw128. v24,v25,v122
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v122.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v24.f32), 0xF);
	// fsel f29,f13,f28,f0
	ctx.f29.f64 = ctx.f13.f64 >= 0.0 ? ctx.f28.f64 : ctx.f0.f64;
	// blt cr6,0x830e9a34
	if (ctx.cr6.lt) goto loc_830E9A34;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lis r6,32767
	ctx.r6.s64 = 2147418112;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lfs f26,11704(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11704);
	ctx.f26.f64 = double(temp.f32);
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// lfs f27,-8736(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8736);
	ctx.f27.f64 = double(temp.f32);
	// ori r20,r6,65535
	ctx.r20.u64 = ctx.r6.u64 | 65535;
	// addi r25,r11,30608
	ctx.r25.s64 = ctx.r11.s64 + 30608;
	// addi r24,r10,29648
	ctx.r24.s64 = ctx.r10.s64 + 29648;
	// addi r22,r9,-8096
	ctx.r22.s64 = ctx.r9.s64 + -8096;
	// addi r26,r8,23032
	ctx.r26.s64 = ctx.r8.s64 + 23032;
loc_830E964C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830e9754
	if (ctx.cr6.eq) goto loc_830E9754;
loc_830E965C:
	// vxor128 v116,v116,v116
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_setzero_si128());
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// rlwinm r10,r10,0,1,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7FFFFFFC;
	// vcmpeqfp128 v13,v116,v117
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v116.f32), _mm_load_ps(ctx.v117.f32)));
	// lwzx r9,r11,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// lvx128 v0,r8,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// vor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw128. v11,v12,v122
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v122.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v11.f32), 0xF);
	// bge cr6,0x830e9924
	if (!ctx.cr6.lt) goto loc_830E9924;
	// lhz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// lhz r9,94(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// lfsx f13,r11,r8
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// lfsx f0,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f0.f64 = double(temp.f32);
	// std r3,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r3.u64);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfsx f9,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f9.f64 = double(temp.f32);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// lfsx f6,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f6.f64 = double(temp.f32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// li r9,1
	ctx.r9.s64 = 1;
	// fmuls f5,f8,f27
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f27.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fmadds f3,f5,f13,f9
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 + ctx.f9.f64));
	// fmuls f2,f4,f27
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f27.f64));
	// fadds f1,f3,f6
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f6.f64));
	// fmadds f13,f2,f13,f6
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f6.f64));
	// fadds f12,f1,f26
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f26.f64));
	// fsubs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f9.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x830e9704
	if (!ctx.cr6.gt) goto loc_830E9704;
	// li r9,0
	ctx.r9.s64 = 0;
loc_830E9704:
	// fsubs f13,f13,f26
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f26.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x830e9718
	if (!ctx.cr6.lt) goto loc_830E9718;
	// li r11,0
	ctx.r11.s64 = 0;
loc_830E9718:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x830e9918
	if (ctx.cr6.eq) goto loc_830E9918;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e9738
	if (ctx.cr6.eq) goto loc_830E9738;
	// stfs f30,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_830E9738:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_830E973C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830e965c
	if (!ctx.cr6.eq) goto loc_830E965C;
loc_830E9754:
	// xor r10,r11,r20
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r20.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830e98d0
	if (ctx.cr6.eq) goto loc_830E98D0;
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x830e98d0
	if (!ctx.cr6.gt) goto loc_830E98D0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v120,r0,r24
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v119,r0,r25
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// addi r31,r11,14
	ctx.r31.s64 = ctx.r11.s64 + 14;
loc_830E9780:
	// addi r11,r31,-14
	ctx.r11.s64 = ctx.r31.s64 + -14;
	// vxor128 v13,v123,v123
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lvx128 v0,r0,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// vmulfp128 v10,v0,v118
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v118.f32)));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vxor128 v127,v127,v127
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_setzero_si128());
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// stfs f29,176(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// vcmpgefp128 v5,v125,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v127.f32)));
	// stfs f30,224(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpeqfp128 v0,v127,v125
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v125.f32)));
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor128 v11,v120,v120
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// lvx128 v7,r0,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v4,v7,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vor128 v12,v119,v119
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v119.u8));
	// vmrghh v3,v13,v9
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v9.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// li r11,224
	ctx.r11.s64 = 224;
	// vmrglh v2,v13,v9
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v9.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// lhz r10,-8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// vspltw v1,v8,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// lhz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vcfux v13,v3,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v3.u32)));
	// vcfux v9,v2,0
	_mm_store_ps(ctx.v9.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v2.u32)));
	// lvx128 v31,r28,r11
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// sth r10,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r10.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// vmaddcfp128 v13,v10,v13,v121
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v121.f32)));
	// vmaddcfp128 v10,v9,v10,v121
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v121.f32)));
	// vsubfp128 v30,v13,v124
	_mm_store_ps(ctx.v30.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v124.f32)));
	// vaddfp128 v29,v10,v124
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v124.f32)));
	// vsubfp128 v28,v30,v126
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v126.f32)));
	// vsubfp128 v27,v29,v126
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpgefp128 v26,v29,v126
	_mm_store_ps(ctx.v26.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v126.f32)));
	// vcmpgefp128 v25,v126,v30
	_mm_store_ps(ctx.v25.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v6,v28,v125
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v125.f32)));
	// vmulfp128 v9,v27,v125
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v125.f32)));
	// vand v13,v25,v26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vsel v7,v9,v6,v5
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vsel v10,v6,v9,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vsel v9,v7,v11,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v11,v10,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v24,v9,1
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xAA));
	// vspltw v23,v9,0
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vspltw v22,v11,1
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// vspltw v21,v11,0
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vspltw v20,v9,2
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x55));
	// vmaxfp v19,v23,v24
	_mm_store_ps(ctx.v19.f32, _mm_max_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v24.f32)));
	// vspltw v18,v11,2
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// vminfp v17,v21,v22
	_mm_store_ps(ctx.v17.f32, _mm_min_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v22.f32)));
	// vmaxfp v16,v19,v20
	_mm_store_ps(ctx.v16.f32, _mm_max_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v20.f32)));
	// vminfp v15,v17,v18
	_mm_store_ps(ctx.v15.f32, _mm_min_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v18.f32)));
	// vmaxfp v12,v4,v16
	_mm_store_ps(ctx.v12.f32, _mm_max_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v16.f32)));
	// vminfp v11,v1,v15
	_mm_store_ps(ctx.v11.f32, _mm_min_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v15.f32)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsel v0,v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor v14,v0,v31
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vcmpequw128. v63,v14,v122
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v14.u32), _mm_load_si128((__m128i*)ctx.v122.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v63.f32), 0xF);
	// bge cr6,0x830e98bc
	if (!ctx.cr6.lt) goto loc_830E98BC;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E98BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830E98BC:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// lvx128 v123,r0,r11
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bne 0x830e9780
	if (!ctx.cr0.eq) goto loc_830E9780;
loc_830E98D0:
	// cmplw cr6,r29,r23
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x830e9a34
	if (ctx.cr6.eq) goto loc_830E9A34;
	// lwzu r31,-16(r29)
	ea = -16 + ctx.r29.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lfs f31,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lfs f30,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830E9900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f29,f13,f31,f0
	ctx.f29.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fcmpu cr6,f29,f30
	ctx.cr6.compare(ctx.f29.f64, ctx.f30.f64);
	// ble cr6,0x830e98d0
	if (!ctx.cr6.gt) goto loc_830E98D0;
	// b 0x830e964c
	goto loc_830E964C;
loc_830E9918:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e98d0
	if (ctx.cr6.eq) goto loc_830E98D0;
	// b 0x830e973c
	goto loc_830E973C;
loc_830E9924:
	// lhz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// lfsx f0,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lhz r3,94(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// vxor128 v115,v115,v115
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_setzero_si128());
	// lfsx f6,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r3,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r3.u64);
	// lfd f10,136(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfsx f11,r11,r6
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f11.f64 = double(temp.f32);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfsx f7,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f7.f64 = double(temp.f32);
	// frsp f3,f8
	ctx.f3.f64 = double(float(ctx.f8.f64));
	// vcmpgtfp128 v13,v117,v115
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v117.f32), _mm_load_ps(ctx.v115.f32)));
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lfsx f5,r11,r6
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f5.f64 = double(temp.f32);
	// frsp f9,f12
	ctx.f9.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f3,f27
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f27.f64));
	// vor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw128. v11,v12,v122
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v122.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v11.f32), 0xF);
	// fmuls f4,f9,f27
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f27.f64));
	// fmadds f12,f1,f0,f7
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f7.f64));
	// fmadds f2,f4,f0,f11
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fsubs f13,f2,f7
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// fsubs f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f6.f64));
	// fsubs f10,f13,f6
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// fmuls f13,f8,f5
	ctx.f13.f64 = double(float(ctx.f8.f64 * ctx.f5.f64));
	// fmuls f0,f10,f5
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// bge cr6,0x830e99b4
	if (!ctx.cr6.lt) goto loc_830E99B4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x830e99c4
	goto loc_830E99C4;
loc_830E99B4:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
loc_830E99C4:
	// fcmpu cr6,f13,f30
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f30.f64);
	// bge cr6,0x830e99dc
	if (!ctx.cr6.lt) goto loc_830E99DC;
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x830e964c
	goto loc_830E964C;
loc_830E99DC:
	// fcmpu cr6,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bgt cr6,0x830e9a28
	if (ctx.cr6.gt) goto loc_830E9A28;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// stfs f31,8(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// fsubs f11,f13,f31
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// fsel f10,f12,f0,f30
	ctx.f10.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f30.f64;
	// stfs f10,4(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// fsel f31,f11,f31,f13
	ctx.f31.f64 = ctx.f11.f64 >= 0.0 ? ctx.f31.f64 : ctx.f13.f64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830E9A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fmuls f9,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fsubs f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f31.f64));
	// fsel f29,f8,f31,f9
	ctx.f29.f64 = ctx.f8.f64 >= 0.0 ? ctx.f31.f64 : ctx.f9.f64;
loc_830E9A28:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x830e964c
	goto loc_830E964C;
loc_830E9A34:
	// bl 0x82d2d090
	ctx.lr = 0x830E9A38;
	sub_82D2D090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830E9A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// addi r12,r1,-160
	ctx.r12.s64 = ctx.r1.s64 + -160;
	// bl 0x82fac3a4
	ctx.lr = 0x830E9A68;
	__restvmx_115(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82fa8d6c
	ctx.lr = 0x830E9A70;
	__restfpr_26(ctx, base);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9A74"))) PPC_WEAK_FUNC(sub_830E9A74);
PPC_FUNC_IMPL(__imp__sub_830E9A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9A78"))) PPC_WEAK_FUNC(sub_830E9A78);
PPC_FUNC_IMPL(__imp__sub_830E9A78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r10,r11,-8080
	ctx.r10.s64 = ctx.r11.s64 + -8080;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830E9A88"))) PPC_WEAK_FUNC(sub_830E9A88);
PPC_FUNC_IMPL(__imp__sub_830E9A88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x830E9A90;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x830e9b98
	if (!ctx.cr6.eq) goto loc_830E9B98;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f31,-8736(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8736);
	ctx.f31.f64 = double(temp.f32);
loc_830E9AE4:
	// lhz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// rlwinm r11,r10,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r6,r10,4
	ctx.r6.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r8,0,1,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x7FFFFFFC;
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r4
	ctx.r4.u64 = ctx.r10.u64 + ctx.r4.u64;
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lfsx f10,r3,r30
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfd f13,96(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfsx f13,r11,r28
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	ctx.f13.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x830e9b7c
	if (ctx.cr6.lt) goto loc_830E9B7C;
	// lhz r8,86(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfsx f12,r11,r30
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f12.f64 = double(temp.f32);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// bgt cr6,0x830e9b78
	if (ctx.cr6.gt) goto loc_830E9B78;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x830e9a88
	ctx.lr = 0x830E9B78;
	sub_830E9A88(ctx, base);
loc_830E9B78:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_830E9B7C:
	// ld r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// not r8,r9
	ctx.r8.u64 = ~ctx.r9.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830e9ae4
	if (ctx.cr6.eq) goto loc_830E9AE4;
loc_830E9B98:
	// xoris r11,r10,32767
	ctx.r11.u64 = ctx.r10.u64 ^ 2147418112;
	// xori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 ^ 65535;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830e9cc8
	if (ctx.cr6.eq) goto loc_830E9CC8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x830e9cc8
	if (!ctx.cr6.gt) goto loc_830E9CC8;
	// rlwinm r11,r10,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltisw128 v126,-1
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// addi r26,r30,16
	ctx.r26.s64 = ctx.r30.s64 + 16;
	// addi r31,r11,14
	ctx.r31.s64 = ctx.r11.s64 + 14;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// addi r25,r11,-21408
	ctx.r25.s64 = ctx.r11.s64 + -21408;
	// addi r24,r10,-8080
	ctx.r24.s64 = ctx.r10.s64 + -8080;
	// b 0x830e9be8
	goto loc_830E9BE8;
loc_830E9BE0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_830E9BE8:
	// addi r11,r31,-14
	ctx.r11.s64 = ctx.r31.s64 + -14;
	// vxor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r0,r24
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vmulfp128 v13,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// li r7,224
	ctx.r7.s64 = 224;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lvx128 v10,r0,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lvx128 v9,r0,r30
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lhz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lvx128 v8,r25,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrghh v7,v0,v11
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v0.u16)));
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// vmrglh v6,v0,v11
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v0.u16)));
	// vcfux v11,v7,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v7.u32)));
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// vcfux v0,v6,0
	_mm_store_ps(ctx.v0.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmaddfp v11,v13,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcmpgefp v5,v10,v11
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// vcmpgefp v4,v0,v9
	_mm_store_ps(ctx.v4.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vand v3,v4,v5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor v2,v3,v8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vcmpequw128. v1,v2,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v126.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v1.f32), 0xF);
	// bge cr6,0x830e9cbc
	if (!ctx.cr6.lt) goto loc_830E9CBC;
	// bl 0x82d2d090
	ctx.lr = 0x830E9C78;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e9c9c
	if (!ctx.cr6.eq) goto loc_830E9C9C;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x830E9C9C;
	sub_82D2DED0(ctx, base);
loc_830E9C9C:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
loc_830E9CBC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bne 0x830e9be0
	if (!ctx.cr0.eq) goto loc_830E9BE0;
loc_830E9CC8:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9CE4"))) PPC_WEAK_FUNC(sub_830E9CE4);
PPC_FUNC_IMPL(__imp__sub_830E9CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9CE8"))) PPC_WEAK_FUNC(sub_830E9CE8);
PPC_FUNC_IMPL(__imp__sub_830E9CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x830E9CF0;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// li r12,-192
	ctx.r12.s64 = -192;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82d2d090
	ctx.lr = 0x830E9D34;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,0(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lwz r16,452(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// addi r9,r11,127
	ctx.r9.s64 = ctx.r11.s64 + 127;
	// li r21,0
	ctx.r21.s64 = 0;
	// rlwinm r11,r9,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// add r8,r11,r18
	ctx.r8.u64 = ctx.r11.u64 + ctx.r18.u64;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// lis r8,32767
	ctx.r8.s64 = 2147418112;
	// ld r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// ld r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r29.u32 + 8);
	// lfs f31,-8736(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8736);
	ctx.f31.f64 = double(temp.f32);
	// ld r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r29.u32 + 16);
	// ori r15,r8,65535
	ctx.r15.u64 = ctx.r8.u64 | 65535;
	// ld r7,24(r29)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r29.u32 + 24);
	// addi r20,r11,-21408
	ctx.r20.s64 = ctx.r11.s64 + -21408;
	// std r7,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r7.u64);
	// std r4,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r4.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// addi r19,r10,-8080
	ctx.r19.s64 = ctx.r10.s64 + -8080;
loc_830E9D9C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830e9e44
	if (ctx.cr6.eq) goto loc_830E9E44;
loc_830E9DAC:
	// lhz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// rlwinm r10,r9,0,1,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x7FFFFFFC;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f13,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfsx f0,r11,r26
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lfsx f13,r11,r25
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	ctx.f13.f64 = double(temp.f32);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// lfsx f10,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f10.f64 = double(temp.f32);
	// addi r31,r10,8
	ctx.r31.s64 = ctx.r10.s64 + 8;
	// fmuls f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f8,f9,f0,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f10,f8
	ctx.cr6.compare(ctx.f10.f64, ctx.f8.f64);
	// blt cr6,0x830e9e28
	if (ctx.cr6.lt) goto loc_830E9E28;
	// lhz r6,94(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfsx f12,r11,r8
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fmuls f8,f9,f31
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f31.f64));
	// fmadds f7,f8,f0,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fcmpu cr6,f12,f7
	ctx.cr6.compare(ctx.f12.f64, ctx.f7.f64);
	// bgt cr6,0x830e9e2c
	if (ctx.cr6.gt) goto loc_830E9E2C;
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
loc_830E9E28:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
loc_830E9E2C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830e9dac
	if (!ctx.cr6.eq) goto loc_830E9DAC;
loc_830E9E44:
	// xor r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 ^ ctx.r15.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830e9f98
	if (ctx.cr6.eq) goto loc_830E9F98;
	// lwz r24,92(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// ble cr6,0x830e9f98
	if (!ctx.cr6.gt) goto loc_830E9F98;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltisw128 v126,-1
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r30,r29,16
	ctx.r30.s64 = ctx.r29.s64 + 16;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// addi r31,r11,14
	ctx.r31.s64 = ctx.r11.s64 + 14;
loc_830E9E74:
	// addi r11,r31,-14
	ctx.r11.s64 = ctx.r31.s64 + -14;
	// vxor128 v0,v127,v127
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v12,r0,r19
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r0,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v13,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r25
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// li r7,224
	ctx.r7.s64 = 224;
	// ld r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// ld r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lvx128 v9,r0,r29
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lhz r4,-8(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + -8);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lvx128 v8,r20,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// std r6,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r6.u64);
	// std r5,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r5.u64);
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrghh v7,v0,v11
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_unpackhi_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v0.u16)));
	// sth r4,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r4.u16);
	// vmrglh v6,v0,v11
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_unpacklo_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v0.u16)));
	// vcfux v11,v7,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v7.u32)));
	// sth r3,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r3.u16);
	// vcfux v0,v6,0
	_mm_store_ps(ctx.v0.f32, _mm_cvtepu32_ps_(_mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmaddfp v11,v13,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vcmpgefp v5,v10,v11
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)));
	// vcmpgefp v4,v0,v9
	_mm_store_ps(ctx.v4.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vand v3,v4,v5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor v2,v3,v8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vcmpequw128. v1,v2,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v126.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v1.f32), 0xF);
	// bge cr6,0x830e9f80
	if (!ctx.cr6.lt) goto loc_830E9F80;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x830e9f54
	if (ctx.cr6.eq) goto loc_830E9F54;
	// bl 0x82d2d090
	ctx.lr = 0x830E9F0C;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x830e9f30
	if (!ctx.cr6.eq) goto loc_830E9F30;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x830E9F30;
	sub_82D2DED0(ctx, base);
loc_830E9F30:
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r8.u32);
	// b 0x830e9f80
	goto loc_830E9F80;
loc_830E9F54:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x830e9f80
	if (ctx.cr6.eq) goto loc_830E9F80;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r21,r16
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r16.s32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// bge cr6,0x830e9fb0
	if (!ctx.cr6.lt) goto loc_830E9FB0;
loc_830E9F80:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// blt cr6,0x830e9e74
	if (ctx.cr6.lt) goto loc_830E9E74;
loc_830E9F98:
	// cmplw cr6,r23,r18
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x830e9fb0
	if (ctx.cr6.eq) goto loc_830E9FB0;
	// lwzu r31,-4(r23)
	ea = -4 + ctx.r23.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r23.u32 = ea;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// b 0x830e9d9c
	goto loc_830E9D9C;
loc_830E9FB0:
	// bl 0x82d2d090
	ctx.lr = 0x830E9FB4;
	sub_82D2D090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// li r0,-192
	ctx.r0.s64 = -192;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830E9FDC"))) PPC_WEAK_FUNC(sub_830E9FDC);
PPC_FUNC_IMPL(__imp__sub_830E9FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830E9FE0"))) PPC_WEAK_FUNC(sub_830E9FE0);
PPC_FUNC_IMPL(__imp__sub_830E9FE0) {
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
	// li r11,48
	ctx.r11.s64 = 48;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,64
	ctx.r6.s64 = 64;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r5,28(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lvx128 v0,r3,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lvx128 v13,r3,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// stvx128 v12,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x830e9a88
	ctx.lr = 0x830EA03C;
	sub_830E9A88(ctx, base);
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

__attribute__((alias("__imp__sub_830EA054"))) PPC_WEAK_FUNC(sub_830EA054);
PPC_FUNC_IMPL(__imp__sub_830EA054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA058"))) PPC_WEAK_FUNC(sub_830EA058);
PPC_FUNC_IMPL(__imp__sub_830EA058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830EA060;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31960
	ctx.r30.s64 = -2094530560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r3,-21024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21024);
	// bl 0x831791e4
	ctx.lr = 0x830EA07C;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830ea0a8
	if (!ctx.cr6.lt) goto loc_830EA0A8;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r9,r10,-28640
	ctx.r9.s64 = ctx.r10.s64 + -28640;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
loc_830EA0A8:
	// li r11,48
	ctx.r11.s64 = 48;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,64
	ctx.r10.s64 = 64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x830ea0e4
	if (ctx.cr6.gt) goto loc_830EA0E4;
	// li r8,128
	ctx.r8.s64 = 128;
loc_830EA0E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x830e9ce8
	ctx.lr = 0x830EA104;
	sub_830E9CE8(ctx, base);
	// lwz r3,-21024(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -21024);
	// bl 0x831791e4
	ctx.lr = 0x830EA10C;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x830ea138
	if (!ctx.cr6.lt) goto loc_830EA138;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r10,22820
	ctx.r9.s64 = ctx.r10.s64 + 22820;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
loc_830EA138:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA140"))) PPC_WEAK_FUNC(sub_830EA140);
PPC_FUNC_IMPL(__imp__sub_830EA140) {
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
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,48
	ctx.r8.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r31,r1,96
	ctx.r31.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// lwz r4,28(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lvx128 v0,r9,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lvx128 v13,r9,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x830ea19c
	if (ctx.cr6.gt) goto loc_830EA19C;
	// li r11,128
	ctx.r11.s64 = 128;
loc_830EA19C:
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x830e9ce8
	ctx.lr = 0x830EA1B4;
	sub_830E9CE8(ctx, base);
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

__attribute__((alias("__imp__sub_830EA1CC"))) PPC_WEAK_FUNC(sub_830EA1CC);
PPC_FUNC_IMPL(__imp__sub_830EA1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA1D0"))) PPC_WEAK_FUNC(sub_830EA1D0);
PPC_FUNC_IMPL(__imp__sub_830EA1D0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82facab0
	sub_82FACAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA1D4"))) PPC_WEAK_FUNC(sub_830EA1D4);
PPC_FUNC_IMPL(__imp__sub_830EA1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EA1D8"))) PPC_WEAK_FUNC(sub_830EA1D8);
PPC_FUNC_IMPL(__imp__sub_830EA1D8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82facab0
	sub_82FACAB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EA1E0"))) PPC_WEAK_FUNC(sub_830EA1E0);
PPC_FUNC_IMPL(__imp__sub_830EA1E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830EA1E8;
	__savegprlr_14(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2964(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2964);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// lwz r10,2092(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2092);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r8,r11,735
	ctx.r8.s64 = ctx.r11.s64 + 735;
	// stw r5,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r5.u32);
	// addi r7,r11,738
	ctx.r7.s64 = ctx.r11.s64 + 738;
	// lwz r9,4016(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4016);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r3.u32);
	// addi r5,r10,263
	ctx.r5.s64 = ctx.r10.s64 + 263;
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r6,r16
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r16.u32);
	// rlwinm r3,r5,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r11,r16
	ctx.r8.u64 = ctx.r11.u64 + ctx.r16.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// stw r10,2916(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2916, ctx.r10.u32);
	// lwzx r7,r4,r16
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r16.u32);
	// stw r7,2928(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2928, ctx.r7.u32);
	// lwzx r6,r3,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r16.u32);
	// stw r6,2096(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2096, ctx.r6.u32);
	// lwz r5,2108(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 2108);
	// stw r5,2100(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2100, ctx.r5.u32);
	// bne cr6,0x830ea260
	if (!ctx.cr6.eq) goto loc_830EA260;
	// stw r25,460(r16)
	PPC_STORE_U32(ctx.r16.u32 + 460, ctx.r25.u32);
	// b 0x830ea268
	goto loc_830EA268;
loc_830EA260:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,460(r16)
	PPC_STORE_U32(ctx.r16.u32 + 460, ctx.r11.u32);
loc_830EA268:
	// lwz r11,14840(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 14840);
	// lwz r10,3428(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3428);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r7,r8,0,0,24
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFF80;
	// li r11,4
	ctx.r11.s64 = 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r10,3
	ctx.r10.s64 = 3;
	// beq cr6,0x830ea294
	if (ctx.cr6.eq) goto loc_830EA294;
	// stw r11,14848(r16)
	PPC_STORE_U32(ctx.r16.u32 + 14848, ctx.r11.u32);
	// stw r10,14844(r16)
	PPC_STORE_U32(ctx.r16.u32 + 14844, ctx.r10.u32);
	// b 0x830ea29c
	goto loc_830EA29C;
loc_830EA294:
	// stw r11,14844(r16)
	PPC_STORE_U32(ctx.r16.u32 + 14844, ctx.r11.u32);
	// stw r10,14848(r16)
	PPC_STORE_U32(ctx.r16.u32 + 14848, ctx.r10.u32);
loc_830EA29C:
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x830ea2b0
	if (ctx.cr6.eq) goto loc_830EA2B0;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x830ea2b4
	if (!ctx.cr6.eq) goto loc_830EA2B4;
loc_830EA2B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_830EA2B4:
	// lwz r10,1976(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1976);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r11.u32);
	// lwz r4,248(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 248);
	// lwz r3,1976(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 1976);
	// bl 0x82cf45c8
	ctx.lr = 0x830EA2CC;
	sub_82CF45C8(ctx, base);
	// lwz r11,248(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 248);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bge cr6,0x830ea2e8
	if (!ctx.cr6.lt) goto loc_830EA2E8;
	// addi r11,r16,2468
	ctx.r11.s64 = ctx.r16.s64 + 2468;
	// addi r10,r16,2484
	ctx.r10.s64 = ctx.r16.s64 + 2484;
	// addi r9,r16,2524
	ctx.r9.s64 = ctx.r16.s64 + 2524;
	// b 0x830ea30c
	goto loc_830EA30C;
loc_830EA2E8:
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// bge cr6,0x830ea300
	if (!ctx.cr6.lt) goto loc_830EA300;
	// addi r11,r16,2456
	ctx.r11.s64 = ctx.r16.s64 + 2456;
	// addi r10,r16,2496
	ctx.r10.s64 = ctx.r16.s64 + 2496;
	// addi r9,r16,2536
	ctx.r9.s64 = ctx.r16.s64 + 2536;
	// b 0x830ea30c
	goto loc_830EA30C;
loc_830EA300:
	// addi r11,r16,2444
	ctx.r11.s64 = ctx.r16.s64 + 2444;
	// addi r10,r16,2508
	ctx.r10.s64 = ctx.r16.s64 + 2508;
	// addi r9,r16,2548
	ctx.r9.s64 = ctx.r16.s64 + 2548;
loc_830EA30C:
	// stw r11,2480(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2480, ctx.r11.u32);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// stw r10,2520(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2520, ctx.r10.u32);
	// stw r9,2560(r16)
	PPC_STORE_U32(ctx.r16.u32 + 2560, ctx.r9.u32);
	// lwz r14,272(r16)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r16.u32 + 272);
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x82cbc400
	ctx.lr = 0x830EA328;
	sub_82CBC400(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82ce22c8
	ctx.lr = 0x830EA334;
	sub_82CE22C8(ctx, base);
	// lwz r11,22264(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 22264);
	// lhz r10,50(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 50);
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// lhz r9,52(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 52);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// rlwinm r26,r9,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// mr r15,r25
	ctx.r15.u64 = ctx.r25.u64;
	// lwz r7,22276(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 22276);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// lwz r6,22268(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 22268);
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,22280(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 22280);
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// stw r5,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r5.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// sth r25,16(r31)
	PPC_STORE_U16(ctx.r31.u32 + 16, ctx.r25.u16);
	// sth r25,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r25.u16);
	// ble cr6,0x830ecdf0
	if (!ctx.cr6.gt) goto loc_830ECDF0;
	// lis r11,-32240
	ctx.r11.s64 = -2112880640;
	// lis r10,-32240
	ctx.r10.s64 = -2112880640;
	// addi r17,r11,2760
	ctx.r17.s64 = ctx.r11.s64 + 2760;
	// addi r11,r10,2904
	ctx.r11.s64 = ctx.r10.s64 + 2904;
	// stw r17,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r17.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_830EA3B8:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// sth r25,18(r31)
	PPC_STORE_U16(ctx.r31.u32 + 18, ctx.r25.u16);
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// lwz r11,21940(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 21940);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830ea5d4
	if (ctx.cr6.eq) goto loc_830EA5D4;
	// lwz r11,1304(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1304);
	// rlwinm r10,r15,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x830ea5d4
	if (ctx.cr6.eq) goto loc_830EA5D4;
	// lwz r11,84(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// ld r10,104(r18)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r18.u32 + 104);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r9,112(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 112);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// stw r9,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r9.u32);
	// lwz r7,84(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r6,116(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// stw r6,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r6.u32);
	// lwz r5,84(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r4,120(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 120);
	// stw r4,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r4.u32);
	// lwz r3,84(r16)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r11,124(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 124);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,84(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r9,128(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 128);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r7,132(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 132);
	// stw r7,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r7.u32);
	// lwz r6,84(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r5,136(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 136);
	// stw r5,32(r6)
	PPC_STORE_U32(ctx.r6.u32 + 32, ctx.r5.u32);
	// lwz r4,84(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r3,140(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 140);
	// stw r3,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r3.u32);
	// lwz r11,84(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r10,144(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 144);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// lwz r9,84(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r8,148(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 148);
	// stw r8,44(r9)
	PPC_STORE_U32(ctx.r9.u32 + 44, ctx.r8.u32);
	// lwz r7,84(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r6,152(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 152);
	// stw r6,48(r7)
	PPC_STORE_U32(ctx.r7.u32 + 48, ctx.r6.u32);
	// lwz r31,84(r16)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x830ea518
	if (ctx.cr6.eq) goto loc_830EA518;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x830ea4f4
	if (!ctx.cr6.lt) goto loc_830EA4F4;
loc_830EA49C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ea4f4
	if (ctx.cr6.eq) goto loc_830EA4F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830ea4e4
	if (!ctx.cr0.lt) goto loc_830EA4E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EA4E4;
	sub_82C94C90(ctx, base);
loc_830EA4E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830ea49c
	if (ctx.cr6.gt) goto loc_830EA49C;
loc_830EA4F4:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r9,r30,32
	ctx.r9.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// subf. r8,r30,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sld r7,r11,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// std r7,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r7.u64);
	// stw r8,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r8.u32);
	// bge 0x830ea518
	if (!ctx.cr0.lt) goto loc_830EA518;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EA518;
	sub_82C94C90(ctx, base);
loc_830EA518:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,29
	ctx.r4.u64 = ctx.r11.u32 & 0x7;
	// bl 0x82c94b18
	ctx.lr = 0x830EA528;
	sub_82C94B18(ctx, base);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82cec180
	ctx.lr = 0x830EA534;
	sub_82CEC180(ctx, base);
	// lwz r10,84(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// li r9,1
	ctx.r9.s64 = 1;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ld r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r8,104(r18)
	PPC_STORE_U64(ctx.r18.u32 + 104, ctx.r8.u64);
	// lwz r7,84(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// stw r6,112(r18)
	PPC_STORE_U32(ctx.r18.u32 + 112, ctx.r6.u32);
	// lwz r5,84(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r4,12(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// stw r4,116(r18)
	PPC_STORE_U32(ctx.r18.u32 + 116, ctx.r4.u32);
	// lwz r11,84(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,120(r18)
	PPC_STORE_U32(ctx.r18.u32 + 120, ctx.r10.u32);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r7,20(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// stw r7,124(r18)
	PPC_STORE_U32(ctx.r18.u32 + 124, ctx.r7.u32);
	// lwz r6,84(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r5,24(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// stw r5,128(r18)
	PPC_STORE_U32(ctx.r18.u32 + 128, ctx.r5.u32);
	// lwz r4,84(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// stw r11,132(r18)
	PPC_STORE_U32(ctx.r18.u32 + 132, ctx.r11.u32);
	// lwz r10,84(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r8,32(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// stw r8,136(r18)
	PPC_STORE_U32(ctx.r18.u32 + 136, ctx.r8.u32);
	// lwz r7,84(r16)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r6,36(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 36);
	// stw r6,140(r18)
	PPC_STORE_U32(ctx.r18.u32 + 140, ctx.r6.u32);
	// lwz r5,84(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r4,40(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// stw r4,144(r18)
	PPC_STORE_U32(ctx.r18.u32 + 144, ctx.r4.u32);
	// lwz r11,84(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r10,148(r18)
	PPC_STORE_U32(ctx.r18.u32 + 148, ctx.r10.u32);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// stw r7,152(r18)
	PPC_STORE_U32(ctx.r18.u32 + 152, ctx.r7.u32);
	// stb r9,1251(r18)
	PPC_STORE_U8(ctx.r18.u32 + 1251, ctx.r9.u8);
	// bne cr6,0x830eceb0
	if (!ctx.cr6.eq) goto loc_830ECEB0;
loc_830EA5D4:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830ecd70
	if (!ctx.cr6.gt) goto loc_830ECD70;
loc_830EA5E4:
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// dcbt r10,r9
	// lis r12,-4289
	ctx.r12.s64 = -281083904;
	// lwz r8,0(r14)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r12,r12,63743
	ctx.r12.u64 = ctx.r12.u64 | 63743;
	// li r22,0
	ctx.r22.s64 = 0;
	// and r7,r8,r12
	ctx.r7.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r7,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r7.u32);
	// li r20,0
	ctx.r20.s64 = 0;
	// lbz r6,24(r18)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r18.u32 + 24);
	// li r21,0
	ctx.r21.s64 = 0;
	// stb r6,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r6.u8);
	// lwz r5,1696(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1696);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x830ea670
	if (!ctx.cr6.eq) goto loc_830EA670;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830ea664
	if (!ctx.cr0.lt) goto loc_830EA664;
	// bl 0x82c94c90
	ctx.lr = 0x830EA664;
	sub_82C94C90(ctx, base);
loc_830EA664:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r11,r31,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_830EA670:
	// lbz r11,26(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 26);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ea6b0
	if (!ctx.cr6.eq) goto loc_830EA6B0;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830ea6a4
	if (!ctx.cr0.lt) goto loc_830EA6A4;
	// bl 0x82c94c90
	ctx.lr = 0x830EA6A4;
	sub_82C94C90(ctx, base);
loc_830EA6A4:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r11,r31,31,0,0
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 31) & 0x80000000) | (ctx.r11.u64 & 0xFFFFFFFF7FFFFFFF);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_830EA6B0:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// bne cr6,0x830ea6c8
	if (!ctx.cr6.eq) goto loc_830EA6C8;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// b 0x830eab64
	goto loc_830EAB64;
loc_830EA6C8:
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830eaaac
	if (!ctx.cr6.eq) goto loc_830EAAAC;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,336(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 336);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,10,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ea7bc
	if (ctx.cr6.lt) goto loc_830EA7BC;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830ea7b4
	if (!ctx.cr6.lt) goto loc_830EA7B4;
loc_830EA71C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830ea748
	if (ctx.cr6.lt) goto loc_830EA748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830EA738;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830ea71c
	if (ctx.cr6.eq) goto loc_830EA71C;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ea7f8
	goto loc_830EA7F8;
loc_830EA748:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_830EA7B4:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ea7f8
	goto loc_830EA7F8;
loc_830EA7BC:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EA7C8;
	sub_82C94B18(ctx, base);
loc_830EA7C8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EA7E0;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ea7c8
	if (ctx.cr6.lt) goto loc_830EA7C8;
loc_830EA7F8:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r10,37
	ctx.r10.s64 = 37;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde. r10,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r23,r10
	ctx.r23.s64 = ctx.r10.s32;
	// beq 0x830ea81c
	if (ctx.cr0.eq) goto loc_830EA81C;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
loc_830EA81C:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830eaa88
	if (ctx.cr6.eq) goto loc_830EAA88;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x830ea974
	if (!ctx.cr6.lt) goto loc_830EA974;
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srawi r7,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 24;
	// srawi r6,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r28,r6,28
	ctx.r28.u64 = ctx.r6.u32 & 0xF;
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// add. r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r25,r4,24
	ctx.r25.u64 = ctx.r4.u32 & 0xFF;
	// ble 0x830ea924
	if (!ctx.cr0.gt) goto loc_830EA924;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x830ea924
	if (ctx.cr6.gt) goto loc_830EA924;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ea924
	if (ctx.cr6.eq) goto loc_830EA924;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830ea8e4
	if (!ctx.cr6.gt) goto loc_830EA8E4;
loc_830EA88C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ea8e4
	if (ctx.cr6.eq) goto loc_830EA8E4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830ea8d4
	if (!ctx.cr0.lt) goto loc_830EA8D4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EA8D4;
	sub_82C94C90(ctx, base);
loc_830EA8D4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830ea88c
	if (ctx.cr6.gt) goto loc_830EA88C;
loc_830EA8E4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830ea91c
	if (!ctx.cr0.lt) goto loc_830EA91C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EA91C;
	sub_82C94C90(ctx, base);
loc_830EA91C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x830ea928
	goto loc_830EA928;
loc_830EA924:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830EA928:
	// sraw r11,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// and r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// neg r5,r8
	ctx.r5.s64 = -ctx.r8.s64;
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + ctx.r26.u64;
	// xor r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ori r26,r8,32768
	ctx.r26.u64 = ctx.r8.u64 | 32768;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830eaa88
	goto loc_830EAA88;
loc_830EA974:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x830ea988
	if (!ctx.cr6.eq) goto loc_830EA988;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830eaa88
	goto loc_830EAA88;
loc_830EA988:
	// lbz r11,30(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 30);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,70(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 70);
	// lhz r9,72(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 72);
	// subf r27,r11,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r28,r11,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// add r30,r28,r27
	ctx.r30.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x830ea9bc
	if (!ctx.cr6.gt) goto loc_830EA9BC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830eaa68
	goto loc_830EAA68;
loc_830EA9BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830ea9cc
	if (!ctx.cr6.eq) goto loc_830EA9CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830eaa68
	goto loc_830EAA68;
loc_830EA9CC:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830eaa2c
	if (!ctx.cr6.gt) goto loc_830EAA2C;
loc_830EA9D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eaa2c
	if (ctx.cr6.eq) goto loc_830EAA2C;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eaa1c
	if (!ctx.cr0.lt) goto loc_830EAA1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EAA1C;
	sub_82C94C90(ctx, base);
loc_830EAA1C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830ea9d4
	if (ctx.cr6.gt) goto loc_830EA9D4;
loc_830EAA2C:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eaa64
	if (!ctx.cr0.lt) goto loc_830EAA64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EAA64;
	sub_82C94C90(ctx, base);
loc_830EAA64:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_830EAA68:
	// slw r11,r25,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// slw r9,r25,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
loc_830EAA88:
	// rldicr r10,r23,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// or r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 | ctx.r24.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldicl r7,r9,24,40
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 24) & 0xFFFFFF;
	// rldicl r6,r9,32,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r22,r6,31
	ctx.r22.u64 = ctx.r6.u32 & 0x1;
	// rotlwi r20,r9,0
	ctx.r20.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_830EAAAC:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x830eab64
	if (!ctx.cr6.eq) goto loc_830EAB64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x830eaad0
	if (ctx.cr6.eq) goto loc_830EAAD0;
	// li r10,3
	ctx.r10.s64 = 3;
	// rlwimi r11,r10,5,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 5) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
	// b 0x830eab60
	goto loc_830EAB60;
loc_830EAAD0:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eaaf8
	if (!ctx.cr0.lt) goto loc_830EAAF8;
	// bl 0x82c94c90
	ctx.lr = 0x830EAAF8;
	sub_82C94C90(ctx, base);
loc_830EAAF8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830eab14
	if (!ctx.cr6.eq) goto loc_830EAB14;
	// lwz r11,1700(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1700);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// b 0x830eab64
	goto loc_830EAB64;
loc_830EAB14:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eab3c
	if (!ctx.cr0.lt) goto loc_830EAB3C;
	// bl 0x82c94c90
	ctx.lr = 0x830EAB3C;
	sub_82C94C90(ctx, base);
loc_830EAB3C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x830eab58
	if (!ctx.cr6.eq) goto loc_830EAB58;
	// lwz r11,1704(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1704);
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r10,r11,5,24,26
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 5) & 0xE0) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF1F);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// b 0x830eab64
	goto loc_830EAB64;
loc_830EAB58:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r11,r25,6,24,26
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 6) & 0xE0) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF1F);
loc_830EAB60:
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_830EAB64:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830eab80
	if (ctx.cr6.eq) goto loc_830EAB80;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,5(r14)
	PPC_STORE_U8(ctx.r14.u32 + 5, ctx.r11.u8);
	// b 0x830eb930
	goto loc_830EB930;
loc_830EAB80:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x830eaea4
	if (!ctx.cr6.eq) goto loc_830EAEA4;
	// oris r11,r11,16384
	ctx.r11.u64 = ctx.r11.u64 | 1073741824;
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// lbz r10,27(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 27);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830eae60
	if (ctx.cr6.eq) goto loc_830EAE60;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x830eb92c
	if (ctx.cr6.eq) goto loc_830EB92C;
	// lbz r10,1245(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1245);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830eabf0
	if (ctx.cr6.eq) goto loc_830EABF0;
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830eabd4
	if (ctx.cr6.eq) goto loc_830EABD4;
	// lbz r11,1246(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
	// b 0x830eae4c
	goto loc_830EAE4C;
loc_830EABD4:
	// lbz r10,1244(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1244);
	// lbz r11,1249(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r9.u8);
	// b 0x830eae4c
	goto loc_830EAE4C;
loc_830EABF0:
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,1250(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1250);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x830eace0
	if (ctx.cr6.eq) goto loc_830EACE0;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x830eac70
	if (!ctx.cr6.lt) goto loc_830EAC70;
loc_830EAC18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eac70
	if (ctx.cr6.eq) goto loc_830EAC70;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eac60
	if (!ctx.cr0.lt) goto loc_830EAC60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EAC60;
	sub_82C94C90(ctx, base);
loc_830EAC60:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eac18
	if (ctx.cr6.gt) goto loc_830EAC18;
loc_830EAC70:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eaca8
	if (!ctx.cr0.lt) goto loc_830EACA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EACA8;
	sub_82C94C90(ctx, base);
loc_830EACA8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830eacc4
	if (ctx.cr6.eq) goto loc_830EACC4;
	// lbz r11,1246(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r11.u8);
	// b 0x830eae4c
	goto loc_830EAE4C;
loc_830EACC4:
	// lbz r10,1244(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1244);
	// lbz r11,1249(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r11.u8);
	// b 0x830eae4c
	goto loc_830EAE4C;
loc_830EACE0:
	// li r30,3
	ctx.r30.s64 = 3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x830ead44
	if (!ctx.cr6.lt) goto loc_830EAD44;
loc_830EACEC:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ead44
	if (ctx.cr6.eq) goto loc_830EAD44;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830ead34
	if (!ctx.cr0.lt) goto loc_830EAD34;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EAD34;
	sub_82C94C90(ctx, base);
loc_830EAD34:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eacec
	if (ctx.cr6.gt) goto loc_830EACEC;
loc_830EAD44:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830ead7c
	if (!ctx.cr0.lt) goto loc_830EAD7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EAD7C;
	sub_82C94C90(ctx, base);
loc_830EAD7C:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x830eae38
	if (!ctx.cr6.eq) goto loc_830EAE38;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x830eadf8
	if (!ctx.cr6.lt) goto loc_830EADF8;
loc_830EADA0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eadf8
	if (ctx.cr6.eq) goto loc_830EADF8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eade8
	if (!ctx.cr0.lt) goto loc_830EADE8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EADE8;
	sub_82C94C90(ctx, base);
loc_830EADE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eada0
	if (ctx.cr6.gt) goto loc_830EADA0;
loc_830EADF8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eae30
	if (!ctx.cr0.lt) goto loc_830EAE30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EAE30;
	sub_82C94C90(ctx, base);
loc_830EAE30:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x830eae40
	goto loc_830EAE40;
loc_830EAE38:
	// lbz r11,1244(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_830EAE40:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r11.u8);
loc_830EAE4C:
	// lbz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830eb710
	if (ctx.cr6.lt) goto loc_830EB710;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// bgt cr6,0x830eb710
	if (ctx.cr6.gt) goto loc_830EB710;
loc_830EAE60:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x830eb92c
	if (ctx.cr6.eq) goto loc_830EB92C;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eae90
	if (!ctx.cr0.lt) goto loc_830EAE90;
	// bl 0x82c94c90
	ctx.lr = 0x830EAE90;
	sub_82C94C90(ctx, base);
loc_830EAE90:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
	// b 0x830eb92c
	goto loc_830EB92C;
loc_830EAEA4:
	// rlwinm r11,r11,0,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x830eb2ac
	if (!ctx.cr6.eq) goto loc_830EB2AC;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,336(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 336);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,10,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 10) & 0x3FF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830eaf98
	if (ctx.cr6.lt) goto loc_830EAF98;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830eaf90
	if (!ctx.cr6.lt) goto loc_830EAF90;
loc_830EAEF8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830eaf24
	if (ctx.cr6.lt) goto loc_830EAF24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830EAF14;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830eaef8
	if (ctx.cr6.eq) goto loc_830EAEF8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830eafd4
	goto loc_830EAFD4;
loc_830EAF24:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_830EAF90:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830eafd4
	goto loc_830EAFD4;
loc_830EAF98:
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EAFA4;
	sub_82C94B18(ctx, base);
loc_830EAFA4:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EAFBC;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830eafa4
	if (ctx.cr6.lt) goto loc_830EAFA4;
loc_830EAFD4:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r10,37
	ctx.r10.s64 = 37;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// rlwinm r8,r10,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfc r7,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// adde. r10,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsw r23,r10
	ctx.r23.s64 = ctx.r10.s32;
	// beq 0x830eaff8
	if (ctx.cr0.eq) goto loc_830EAFF8;
	// addi r11,r11,-37
	ctx.r11.s64 = ctx.r11.s64 + -37;
loc_830EAFF8:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830eb264
	if (ctx.cr6.eq) goto loc_830EB264;
	// cmpwi cr6,r11,35
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 35, ctx.xer);
	// bge cr6,0x830eb150
	if (!ctx.cr6.lt) goto loc_830EB150;
	// lwz r10,12(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// srawi r7,r8,24
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 24;
	// srawi r6,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 4;
	// srawi r5,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 8;
	// clrlwi r11,r8,28
	ctx.r11.u64 = ctx.r8.u32 & 0xF;
	// clrlwi r28,r6,28
	ctx.r28.u64 = ctx.r6.u32 & 0xF;
	// srawi r4,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 16;
	// add. r30,r28,r11
	ctx.r30.u64 = ctx.r28.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// clrlwi r27,r7,24
	ctx.r27.u64 = ctx.r7.u32 & 0xFF;
	// clrlwi r26,r5,24
	ctx.r26.u64 = ctx.r5.u32 & 0xFF;
	// clrlwi r25,r4,24
	ctx.r25.u64 = ctx.r4.u32 & 0xFF;
	// ble 0x830eb100
	if (!ctx.cr0.gt) goto loc_830EB100;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// bgt cr6,0x830eb100
	if (ctx.cr6.gt) goto loc_830EB100;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830eb100
	if (ctx.cr6.eq) goto loc_830EB100;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830eb0c0
	if (!ctx.cr6.gt) goto loc_830EB0C0;
loc_830EB068:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb0c0
	if (ctx.cr6.eq) goto loc_830EB0C0;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eb0b0
	if (!ctx.cr0.lt) goto loc_830EB0B0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB0B0;
	sub_82C94C90(ctx, base);
loc_830EB0B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eb068
	if (ctx.cr6.gt) goto loc_830EB068;
loc_830EB0C0:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eb0f8
	if (!ctx.cr0.lt) goto loc_830EB0F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB0F8;
	sub_82C94C90(ctx, base);
loc_830EB0F8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x830eb104
	goto loc_830EB104;
loc_830EB100:
	// li r10,0
	ctx.r10.s64 = 0;
loc_830EB104:
	// sraw r11,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// and r9,r10,r27
	ctx.r9.u64 = ctx.r10.u64 & ctx.r27.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// clrlwi r7,r9,31
	ctx.r7.u64 = ctx.r9.u32 & 0x1;
	// add r6,r11,r25
	ctx.r6.u64 = ctx.r11.u64 + ctx.r25.u64;
	// neg r4,r7
	ctx.r4.s64 = -ctx.r7.s64;
	// neg r5,r8
	ctx.r5.s64 = -ctx.r8.s64;
	// add r3,r10,r26
	ctx.r3.u64 = ctx.r10.u64 + ctx.r26.u64;
	// xor r11,r6,r4
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r4.u64;
	// xor r10,r3,r5
	ctx.r10.u64 = ctx.r3.u64 ^ ctx.r5.u64;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r5,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r5.s64;
	// lis r8,0
	ctx.r8.s64 = 0;
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// ori r26,r8,32768
	ctx.r26.u64 = ctx.r8.u64 | 32768;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x830eb264
	goto loc_830EB264;
loc_830EB150:
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// bne cr6,0x830eb164
	if (!ctx.cr6.eq) goto loc_830EB164;
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830eb264
	goto loc_830EB264;
loc_830EB164:
	// lbz r11,30(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 30);
	// li r29,0
	ctx.r29.s64 = 0;
	// lhz r10,70(r18)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r18.u32 + 70);
	// lhz r9,72(r18)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r18.u32 + 72);
	// subf r27,r11,r10
	ctx.r27.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r28,r11,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// add r30,r28,r27
	ctx.r30.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// ble cr6,0x830eb198
	if (!ctx.cr6.gt) goto loc_830EB198;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830eb244
	goto loc_830EB244;
loc_830EB198:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830eb1a8
	if (!ctx.cr6.eq) goto loc_830EB1A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830eb244
	goto loc_830EB244;
loc_830EB1A8:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830eb208
	if (!ctx.cr6.gt) goto loc_830EB208;
loc_830EB1B0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb208
	if (ctx.cr6.eq) goto loc_830EB208;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eb1f8
	if (!ctx.cr0.lt) goto loc_830EB1F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB1F8;
	sub_82C94C90(ctx, base);
loc_830EB1F8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eb1b0
	if (ctx.cr6.gt) goto loc_830EB1B0;
loc_830EB208:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eb240
	if (!ctx.cr0.lt) goto loc_830EB240;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB240;
	sub_82C94C90(ctx, base);
loc_830EB240:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_830EB244:
	// slw r11,r25,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r27.u8 & 0x3F));
	// slw r9,r25,r28
	ctx.r9.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r28.u8 & 0x3F));
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sraw r8,r10,r28
	temp.u32 = ctx.r28.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// and r6,r7,r10
	ctx.r6.u64 = ctx.r7.u64 & ctx.r10.u64;
	// rlwimi r11,r6,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
loc_830EB264:
	// rldicr r10,r23,8,55
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// clrldi r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// or r8,r10,r24
	ctx.r8.u64 = ctx.r10.u64 | ctx.r24.u64;
	// rldimi r9,r8,32,0
	ctx.r9.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r9.u64 & 0xFFFFFFFF);
	// rldicl r7,r9,32,32
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF;
	// rldicl r6,r9,24,40
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u64, 24) & 0xFFFFFF;
	// clrlwi r5,r7,31
	ctx.r5.u64 = ctx.r7.u32 & 0x1;
	// clrlwi r11,r6,31
	ctx.r11.u64 = ctx.r6.u32 & 0x1;
	// or r4,r5,r22
	ctx.r4.u64 = ctx.r5.u64 | ctx.r22.u64;
	// rotlwi r21,r9,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x830eb710
	if (!ctx.cr6.eq) goto loc_830EB710;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830eb2ac
	if (!ctx.cr6.eq) goto loc_830EB2AC;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// oris r10,r11,16384
	ctx.r10.u64 = ctx.r11.u64 | 1073741824;
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// b 0x830eb92c
	goto loc_830EB92C;
loc_830EB2AC:
	// lbz r11,29(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 29);
	// lbz r28,28(r18)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r18.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb2cc
	if (ctx.cr6.eq) goto loc_830EB2CC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x830eb2cc
	if (!ctx.cr6.eq) goto loc_830EB2CC;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// b 0x830eb310
	goto loc_830EB310;
loc_830EB2CC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x830eb310
	if (ctx.cr6.eq) goto loc_830EB310;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eb300
	if (!ctx.cr0.lt) goto loc_830EB300;
	// bl 0x82c94c90
	ctx.lr = 0x830EB300;
	sub_82C94C90(ctx, base);
loc_830EB300:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// clrlwi r10,r31,24
	ctx.r10.u64 = ctx.r31.u32 & 0xFF;
	// rlwimi r11,r10,3,27,28
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 3) & 0x18) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFE7);
	// stw r11,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r11.u32);
loc_830EB310:
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,356(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 356);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,8,56
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830eb3f8
	if (ctx.cr6.lt) goto loc_830EB3F8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830eb3f0
	if (!ctx.cr6.lt) goto loc_830EB3F0;
loc_830EB358:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830eb384
	if (ctx.cr6.lt) goto loc_830EB384;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830EB374;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830eb358
	if (ctx.cr6.eq) goto loc_830EB358;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830eb434
	goto loc_830EB434;
loc_830EB384:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_830EB3F0:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830eb434
	goto loc_830EB434;
loc_830EB3F8:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EB404;
	sub_82C94B18(ctx, base);
loc_830EB404:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EB41C;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830eb404
	if (ctx.cr6.lt) goto loc_830EB404;
loc_830EB434:
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r19,r30
	ctx.r19.u64 = ctx.r30.u64;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x830eb710
	if (!ctx.cr6.eq) goto loc_830EB710;
	// lbz r11,27(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 27);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb71c
	if (ctx.cr6.eq) goto loc_830EB71C;
	// lbz r11,1245(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1245);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb4a4
	if (ctx.cr6.eq) goto loc_830EB4A4;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r9,r10,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	// and r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830eb488
	if (ctx.cr6.eq) goto loc_830EB488;
	// lbz r11,1246(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r10,r11,255
	ctx.r10.s64 = ctx.r11.s64 + 255;
	// stb r10,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r10.u8);
	// b 0x830eb6fc
	goto loc_830EB6FC;
loc_830EB488:
	// lbz r10,1244(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1244);
	// lbz r11,1249(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// stb r9,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r9.u8);
	// b 0x830eb6fc
	goto loc_830EB6FC;
loc_830EB4A4:
	// lbz r11,1250(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1250);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// beq cr6,0x830eb590
	if (ctx.cr6.eq) goto loc_830EB590;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x830eb520
	if (!ctx.cr6.lt) goto loc_830EB520;
loc_830EB4C8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb520
	if (ctx.cr6.eq) goto loc_830EB520;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eb510
	if (!ctx.cr0.lt) goto loc_830EB510;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB510;
	sub_82C94C90(ctx, base);
loc_830EB510:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eb4c8
	if (ctx.cr6.gt) goto loc_830EB4C8;
loc_830EB520:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eb558
	if (!ctx.cr0.lt) goto loc_830EB558;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB558;
	sub_82C94C90(ctx, base);
loc_830EB558:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830eb574
	if (ctx.cr6.eq) goto loc_830EB574;
	// lbz r11,1246(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1246);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r11.u8);
	// b 0x830eb6fc
	goto loc_830EB6FC;
loc_830EB574:
	// lbz r10,1244(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1244);
	// lbz r11,1249(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1249);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r11,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r11.u8);
	// b 0x830eb6fc
	goto loc_830EB6FC;
loc_830EB590:
	// li r30,3
	ctx.r30.s64 = 3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x830eb5f4
	if (!ctx.cr6.lt) goto loc_830EB5F4;
loc_830EB59C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb5f4
	if (ctx.cr6.eq) goto loc_830EB5F4;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eb5e4
	if (!ctx.cr0.lt) goto loc_830EB5E4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB5E4;
	sub_82C94C90(ctx, base);
loc_830EB5E4:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eb59c
	if (ctx.cr6.gt) goto loc_830EB59C;
loc_830EB5F4:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eb62c
	if (!ctx.cr0.lt) goto loc_830EB62C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB62C;
	sub_82C94C90(ctx, base);
loc_830EB62C:
	// cmpwi cr6,r30,7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 7, ctx.xer);
	// bne cr6,0x830eb6e8
	if (!ctx.cr6.eq) goto loc_830EB6E8;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r30,5
	ctx.r30.s64 = 5;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x830eb6a8
	if (!ctx.cr6.lt) goto loc_830EB6A8;
loc_830EB650:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eb6a8
	if (ctx.cr6.eq) goto loc_830EB6A8;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830eb698
	if (!ctx.cr0.lt) goto loc_830EB698;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB698;
	sub_82C94C90(ctx, base);
loc_830EB698:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830eb650
	if (ctx.cr6.gt) goto loc_830EB650;
loc_830EB6A8:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r29
	ctx.r30.u64 = ctx.r11.u64 + ctx.r29.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830eb6e0
	if (!ctx.cr0.lt) goto loc_830EB6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EB6E0;
	sub_82C94C90(ctx, base);
loc_830EB6E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// b 0x830eb6f0
	goto loc_830EB6F0;
loc_830EB6E8:
	// lbz r11,1244(r18)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r18.u32 + 1244);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_830EB6F0:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,4(r14)
	PPC_STORE_U8(ctx.r14.u32 + 4, ctx.r11.u8);
loc_830EB6FC:
	// lbz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x830eb710
	if (ctx.cr6.lt) goto loc_830EB710;
	// cmplwi cr6,r11,62
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 62, ctx.xer);
	// ble cr6,0x830eb71c
	if (!ctx.cr6.gt) goto loc_830EB71C;
loc_830EB710:
	// li r11,3
	ctx.r11.s64 = 3;
	// rldicr r11,r11,63,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// b 0x830eb94c
	goto loc_830EB94C;
loc_830EB71C:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// rlwinm r10,r11,0,2,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFBFFFFFFF;
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// beq cr6,0x830eb79c
	if (ctx.cr6.eq) goto loc_830EB79C;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eb758
	if (!ctx.cr0.lt) goto loc_830EB758;
	// bl 0x82c94c90
	ctx.lr = 0x830EB758;
	sub_82C94C90(ctx, base);
loc_830EB758:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x830eb790
	if (ctx.cr6.eq) goto loc_830EB790;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eb78c
	if (!ctx.cr0.lt) goto loc_830EB78C;
	// bl 0x82c94c90
	ctx.lr = 0x830EB78C;
	sub_82C94C90(ctx, base);
loc_830EB78C:
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_830EB790:
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r10,r11,22,8,9
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 22) & 0xC00000) | (ctx.r10.u64 & 0xFFFFFFFFFF3FFFFF);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
loc_830EB79C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x830eb92c
	if (ctx.cr6.eq) goto loc_830EB92C;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,360(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 360);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,8,56
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFF;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830eb88c
	if (ctx.cr6.lt) goto loc_830EB88C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830eb884
	if (!ctx.cr6.lt) goto loc_830EB884;
loc_830EB7EC:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830eb818
	if (ctx.cr6.lt) goto loc_830EB818;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830EB808;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830eb7ec
	if (ctx.cr6.eq) goto loc_830EB7EC;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830eb8c8
	goto loc_830EB8C8;
loc_830EB818:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_830EB884:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830eb8c8
	goto loc_830EB8C8;
loc_830EB88C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EB898;
	sub_82C94B18(ctx, base);
loc_830EB898:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EB8B0;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830eb898
	if (ctx.cr6.lt) goto loc_830EB898;
loc_830EB8C8:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x830eb8e0
	if (ctx.cr6.eq) goto loc_830EB8E0;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x830eb94c
	goto loc_830EB94C;
loc_830EB8E0:
	// li r11,8
	ctx.r11.s64 = 8;
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subfc r8,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r8.s64 = ctx.r30.s64 - ctx.r11.s64;
	// eqv r7,r11,r30
	ctx.r7.u64 = ~(ctx.r11.u64 ^ ctx.r30.u64);
	// addi r6,r17,-64
	ctx.r6.s64 = ctx.r17.s64 + -64;
	// rlwinm r5,r7,1,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	// addze r4,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r4.s64 = temp.s64;
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// rlwimi r10,r3,28,3,3
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r3.u32, 28) & 0x10000000) | (ctx.r10.u64 & 0xFFFFFFFFEFFFFFFF);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// lwzx r11,r9,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// rlwimi r10,r11,24,5,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x7000000) | (ctx.r10.u64 & 0xFFFFFFFFF8FFFFFF);
	// stw r10,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r10.u32);
	// lwzx r10,r9,r17
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r17.u32);
	// lwz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwimi r9,r10,20,10,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0x300000) | (ctx.r9.u64 & 0xFFFFFFFFFFCFFFFF);
	// rlwinm r8,r9,0,5,3
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFF7FFFFFF;
	// stw r8,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r8.u32);
loc_830EB92C:
	// stb r19,5(r14)
	PPC_STORE_U8(ctx.r14.u32 + 5, ctx.r19.u8);
loc_830EB930:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x830eb944
	if (ctx.cr6.eq) goto loc_830EB944;
	// li r11,16384
	ctx.r11.s64 = 16384;
	// rldimi r11,r11,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r11.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// b 0x830eb94c
	goto loc_830EB94C;
loc_830EB944:
	// clrldi r11,r20,32
	ctx.r11.u64 = ctx.r20.u64 & 0xFFFFFFFF;
	// rldimi r11,r21,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r21.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
loc_830EB94C:
	// lwz r10,0(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rlwinm r9,r10,0,24,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xE0;
	// cmplwi cr6,r9,96
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 96, ctx.xer);
	// beq cr6,0x830eb968
	if (ctx.cr6.eq) goto loc_830EB968;
	// lwz r10,3752(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 3752);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830ecde4
	if (ctx.cr6.eq) goto loc_830ECDE4;
loc_830EB968:
	// li r10,1
	ctx.r10.s64 = 1;
	// rldicr r9,r11,0,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xC000000000000000;
	// rldicr r8,r10,63,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r9,r8
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x830ecde4
	if (ctx.cr6.eq) goto loc_830ECDE4;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r7,16384
	ctx.r7.s64 = 16384;
	// lwz r8,1784(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1784);
	// sradi r5,r11,32
	ctx.xer.ca = (ctx.r11.s64 < 0) & ((ctx.r11.u64 & 0xFFFFFFFF) != 0);
	ctx.r5.s64 = ctx.r11.s64 >> 32;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rldimi r7,r7,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// stwx r11,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r11.u32);
	// lwz r3,1788(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1788);
	// stwx r5,r3,r6
	PPC_STORE_U32(ctx.r3.u32 + ctx.r6.u32, ctx.r5.u32);
	// bne cr6,0x830ec808
	if (!ctx.cr6.eq) goto loc_830EC808;
	// lbz r11,4(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4);
	// clrlwi r8,r15,31
	ctx.r8.u64 = ctx.r15.u32 & 0x1;
	// lwz r7,372(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lbz r6,5(r14)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r14.u32 + 5);
	// neg r5,r8
	ctx.r5.s64 = -ctx.r8.s64;
	// lwz r9,388(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 388);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lhz r3,50(r18)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r18.u32 + 50);
	// lbz r31,28(r18)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r18.u32 + 28);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,1312(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1312);
	// and r15,r5,r3
	ctx.r15.u64 = ctx.r5.u64 & ctx.r3.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// stb r6,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r6.u8);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r17,r10,r11
	ctx.r17.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830eba20
	if (ctx.cr6.eq) goto loc_830EBA20;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r10,396(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 396);
	// lwz r9,400(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 400);
	// rlwinm r11,r11,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xC;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// b 0x830eba30
	goto loc_830EBA30;
loc_830EBA20:
	// addi r11,r18,404
	ctx.r11.s64 = ctx.r18.s64 + 404;
	// addi r10,r18,416
	ctx.r10.s64 = ctx.r18.s64 + 416;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
loc_830EBA30:
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r10,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,32(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// or r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// stw r4,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
	// lwz r3,1304(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1304);
	// lhz r11,50(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 50);
	// mullw r9,r11,r10
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// add r14,r11,r8
	ctx.r14.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r11,r3,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// and r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 & ctx.r10.u64;
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
loc_830EBA84:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// srawi. r11,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r27,119
	ctx.r27.s64 = 119;
	// clrlwi r19,r10,31
	ctx.r19.u64 = ctx.r10.u32 & 0x1;
	// bne 0x830ebaf0
	if (!ctx.cr0.eq) goto loc_830EBAF0;
	// addi r10,r16,18
	ctx.r10.s64 = ctx.r16.s64 + 18;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r6,r11,1,30,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x2;
	// lwz r8,432(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 432);
	// srawi r9,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r16.s32 >> 1;
	// lwz r23,348(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + 348);
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,1224(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1224);
	// or r10,r6,r9
	ctx.r10.u64 = ctx.r6.u64 | ctx.r9.u64;
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r4,r15,r7
	ctx.r4.u64 = ctx.r15.u64 + ctx.r7.u64;
	// addi r3,r10,184
	ctx.r3.s64 = ctx.r10.s64 + 184;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r9,r5,r18
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r18.u32);
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r6,r7,r18
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r18.u32);
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r20,r6
	ctx.r20.s64 = ctx.r6.s16;
	// b 0x830ebb30
	goto loc_830EBB30;
loc_830EBAF0:
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r9,r16,105
	ctx.r9.s64 = ctx.r16.s64 + 105;
	// lwz r23,352(r18)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r18.u32 + 352);
	// addi r6,r10,182
	ctx.r6.s64 = ctx.r10.s64 + 182;
	// lwz r11,1228(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1228);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r21,108(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// srawi r10,r15,1
	ctx.xer.ca = (ctx.r15.s32 < 0) & ((ctx.r15.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r15.s32 >> 1;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwzx r9,r7,r18
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r18.u32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// lhzx r4,r5,r18
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r5.u32 + ctx.r18.u32);
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r20,r4
	ctx.r20.s64 = ctx.r4.s16;
loc_830EBB30:
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// lwz r24,16(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r22,r10,-128
	ctx.r22.s64 = ctx.r10.s64 + -128;
	// stw r22,28(r9)
	PPC_STORE_U32(ctx.r9.u32 + 28, ctx.r22.u32);
	// dcbzl r0,r22
	memset(base + ((ctx.r22.u32) & ~127), 0, 128);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ebb6c
	if (!ctx.cr6.eq) goto loc_830EBB6C;
	// li r11,3
	ctx.r11.s64 = 3;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x830ebc98
	goto loc_830EBC98;
loc_830EBB6C:
	// lbz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// subfic r9,r4,64
	ctx.xer.ca = ctx.r4.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r4.s64;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrldi r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// srd r7,r10,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r8.u8 & 0x7F));
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r5,r6,r28
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r6.u32 + ctx.r28.u32);
	// extsh r30,r5
	ctx.r30.s64 = ctx.r5.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ebc58
	if (ctx.cr6.lt) goto loc_830EBC58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r10,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r10.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830ebc50
	if (!ctx.cr6.lt) goto loc_830EBC50;
loc_830EBBB8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830ebbe4
	if (ctx.cr6.lt) goto loc_830EBBE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830EBBD4;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830ebbb8
	if (ctx.cr6.eq) goto loc_830EBBB8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ebc98
	goto loc_830EBC98;
loc_830EBBE4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r10,1(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r9,r9,8,63
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbz r7,3(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// lbz r5,5(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r9,r10,8,55
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r8
	ctx.r3.s64 = ctx.r8.s32;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r9,r11,r6
	ctx.r9.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rldicr r11,r9,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r8,r11,r4
	ctx.r8.u64 = ctx.r11.u64 + ctx.r4.u64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
loc_830EBC50:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ebc98
	goto loc_830EBC98;
loc_830EBC58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EBC60;
	sub_82C94B18(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r26,r11,32768
	ctx.r26.u64 = ctx.r11.u64 | 32768;
loc_830EBC68:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EBC80;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r28
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r28.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ebc68
	if (ctx.cr6.lt) goto loc_830EBC68;
loc_830EBC98:
	// clrlwi r30,r30,16
	ctx.r30.u64 = ctx.r30.u32 & 0xFFFF;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x830ebdc0
	if (ctx.cr6.eq) goto loc_830EBDC0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x830ebee4
	if (ctx.cr6.eq) goto loc_830EBEE4;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bne cr6,0x830ebcf8
	if (!ctx.cr6.eq) goto loc_830EBCF8;
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r30,r10,1,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x830ebce0
	if (!ctx.cr0.lt) goto loc_830EBCE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EBCE0;
	sub_82C94C90(ctx, base);
loc_830EBCE0:
	// rlwinm r11,r26,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x830ebea8
	goto loc_830EBEA8;
loc_830EBCF8:
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x830ebea8
	if (!ctx.cr6.eq) goto loc_830EBEA8;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,2
	ctx.r30.s64 = 2;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x830ebd70
	if (!ctx.cr6.lt) goto loc_830EBD70;
loc_830EBD18:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ebd70
	if (ctx.cr6.eq) goto loc_830EBD70;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830ebd60
	if (!ctx.cr0.lt) goto loc_830EBD60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EBD60;
	sub_82C94C90(ctx, base);
loc_830EBD60:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830ebd18
	if (ctx.cr6.gt) goto loc_830EBD18;
loc_830EBD70:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830ebda8
	if (!ctx.cr0.lt) goto loc_830EBDA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EBDA8;
	sub_82C94C90(ctx, base);
loc_830EBDA8:
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x830ebea8
	goto loc_830EBEA8;
loc_830EBDC0:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bgt cr6,0x830ebdd4
	if (ctx.cr6.gt) goto loc_830EBDD4;
	// srawi r11,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r24.s32 >> 1;
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// b 0x830ebdd8
	goto loc_830EBDD8;
loc_830EBDD4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_830EBDD8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r30,32
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32, ctx.xer);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// ble cr6,0x830ebdf8
	if (!ctx.cr6.gt) goto loc_830EBDF8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830ebea4
	goto loc_830EBEA4;
loc_830EBDF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x830ebe08
	if (!ctx.cr6.eq) goto loc_830EBE08;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830ebea4
	goto loc_830EBEA4;
loc_830EBE08:
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x830ebe68
	if (!ctx.cr6.gt) goto loc_830EBE68;
loc_830EBE10:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ebe68
	if (ctx.cr6.eq) goto loc_830EBE68;
	// subfic r9,r11,64
	ctx.xer.ca = ctx.r11.u32 <= 64;
	ctx.r9.s64 = 64 - ctx.r11.s64;
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// clrldi r6,r9,32
	ctx.r6.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srd r5,r8,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x40 ? 0 : (ctx.r8.u64 >> (ctx.r6.u8 & 0x7F));
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// subf. r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// slw r11,r4,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r30.u8 & 0x3F));
	// sld r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r8.u64 << (ctx.r7.u8 & 0x7F));
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// bge 0x830ebe58
	if (!ctx.cr0.lt) goto loc_830EBE58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EBE58;
	sub_82C94C90(ctx, base);
loc_830EBE58:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r10,16
	ctx.r11.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x830ebe10
	if (ctx.cr6.gt) goto loc_830EBE10;
loc_830EBE68:
	// subfic r11,r30,64
	ctx.xer.ca = ctx.r30.u32 <= 64;
	ctx.r11.s64 = 64 - ctx.r30.s64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// clrldi r8,r30,32
	ctx.r8.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// subf. r6,r30,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// srd r5,r9,r7
	ctx.r5.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r9.u64 >> (ctx.r7.u8 & 0x7F));
	// rotlwi r11,r5,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// stw r6,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r6.u32);
	// sld r4,r9,r8
	ctx.r4.u64 = ctx.r8.u8 & 0x40 ? 0 : (ctx.r9.u64 << (ctx.r8.u8 & 0x7F));
	// add r30,r11,r28
	ctx.r30.u64 = ctx.r11.u64 + ctx.r28.u64;
	// std r4,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r4.u64);
	// bge 0x830ebea0
	if (!ctx.cr0.lt) goto loc_830EBEA0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EBEA0;
	sub_82C94C90(ctx, base);
loc_830EBEA0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_830EBEA4:
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
loc_830EBEA8:
	// ld r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// rldicl r28,r10,1,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge 0x830ebed0
	if (!ctx.cr0.lt) goto loc_830EBED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94c90
	ctx.lr = 0x830EBED0;
	sub_82C94C90(ctx, base);
loc_830EBED0:
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// subfic r9,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r11.s64;
	// mullw r8,r9,r10
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// extsh r25,r8
	ctx.r25.s64 = ctx.r8.s16;
loc_830EBEE4:
	// sth r25,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r25.u16);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830ecde4
	if (!ctx.cr6.eq) goto loc_830ECDE4;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x830ebf1c
	if (ctx.cr6.eq) goto loc_830EBF1C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lwz r4,0(r21)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r6,444(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 444);
	// bl 0x8310d300
	ctx.lr = 0x830EBF14;
	sub_8310D300(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x830ecde4
	if (ctx.cr6.lt) goto loc_830ECDE4;
loc_830EBF1C:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r10,r14,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,50(r18)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r18.u32 + 50);
	// rlwinm r7,r16,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 0) & 0x2;
	// add r9,r10,r23
	ctx.r9.u64 = ctx.r10.u64 + ctx.r23.u64;
	// rlwinm r30,r8,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r8,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r16.s32 >> 2;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r25,1
	ctx.r25.s64 = 1;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm r5,r6,0,27,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x18;
	// li r27,0
	ctx.r27.s64 = 0;
	// cntlzw r4,r5
	ctx.r4.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r26,r4,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x830ebf84
	if (!ctx.cr6.eq) goto loc_830EBF84;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830ebf94
	if (ctx.cr6.eq) goto loc_830EBF94;
	// rlwinm r7,r30,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r6,r7,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r5,16384
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 16384, ctx.xer);
	// bne cr6,0x830ebf94
	if (!ctx.cr6.eq) goto loc_830EBF94;
loc_830EBF84:
	// rlwinm r10,r20,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 5) & 0xFFFFFFE0;
	// li r25,8
	ctx.r25.s64 = 8;
	// subf r28,r10,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r10.s64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_830EBF94:
	// cntlzw r7,r8
	ctx.r7.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r6,r7,27,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// and r5,r6,r16
	ctx.r5.u64 = ctx.r6.u64 & ctx.r16.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x830ebfc0
	if (!ctx.cr6.eq) goto loc_830EBFC0;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830ec21c
	if (ctx.cr6.eq) goto loc_830EC21C;
	// lwz r7,-4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// cmpwi cr6,r7,16384
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 16384, ctx.xer);
	// bne cr6,0x830ec21c
	if (!ctx.cr6.eq) goto loc_830EC21C;
loc_830EBFC0:
	// addic. r27,r29,-32
	ctx.xer.ca = ctx.r29.u32 > 31;
	ctx.r27.s64 = ctx.r29.s64 + -32;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// beq 0x830ec568
	if (ctx.cr0.eq) goto loc_830EC568;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830ec21c
	if (ctx.cr6.eq) goto loc_830EC21C;
	// clrlwi r7,r16,30
	ctx.r7.u64 = ctx.r16.u32 & 0x3;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830ebff0
	if (ctx.cr6.eq) goto loc_830EBFF0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830ec008
	if (ctx.cr6.eq) goto loc_830EC008;
loc_830EBFF0:
	// addi r8,r30,1
	ctx.r8.s64 = ctx.r30.s64 + 1;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// lwz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r4,16384
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16384, ctx.xer);
	// bne cr6,0x830ec010
	if (!ctx.cr6.eq) goto loc_830EC010;
loc_830EC008:
	// lhz r9,-16(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + -16);
	// extsh r6,r9
	ctx.r6.s64 = ctx.r9.s16;
loc_830EC010:
	// lhz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 16);
	// lhz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lbz r7,27(r18)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r18.u32 + 27);
	// extsh r5,r9
	ctx.r5.s64 = ctx.r9.s16;
	// extsh r4,r8
	ctx.r4.s64 = ctx.r8.s16;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830ec1e0
	if (ctx.cr6.eq) goto loc_830EC1E0;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x830ec128
	if (ctx.cr6.eq) goto loc_830EC128;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// beq cr6,0x830ec128
	if (ctx.cr6.eq) goto loc_830EC128;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// beq cr6,0x830ec128
	if (ctx.cr6.eq) goto loc_830EC128;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// lis r31,2
	ctx.r31.s64 = 131072;
	// bne cr6,0x830ec0bc
	if (!ctx.cr6.eq) goto loc_830EC0BC;
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r9,388(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 388);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r7,r7,r17
	ctx.r7.s64 = ctx.r17.s64 - ctx.r7.s64;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r24,r8,r9
	ctx.r24.u64 = ctx.r8.u64 + ctx.r9.u64;
	// clrlwi r8,r7,26
	ctx.r8.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,16(r24)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// rlwinm r7,r24,2,24,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r8,r7,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mullw r9,r8,r7
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mullw r6,r9,r6
	ctx.r6.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r8,r7
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 + ctx.r31.u64;
	// srawi r6,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 18;
	// srawi r5,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 18;
	// b 0x830ec1e8
	goto loc_830EC1E8;
loc_830EC0BC:
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// bne cr6,0x830ec1e4
	if (!ctx.cr6.eq) goto loc_830EC1E4;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,-8(r17)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r17.u32 + -8);
	// lwz r9,388(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 388);
	// add r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r8,r7,26
	ctx.r8.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r7,r3,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r7,2,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFC;
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r9,r7
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r6,r7,r6
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// mullw r4,r9,r8
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r6,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 18;
	// srawi r4,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 18;
	// b 0x830ec1e8
	goto loc_830EC1E8;
loc_830EC128:
	// rlwinm r7,r30,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lbz r3,-8(r17)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r17.u32 + -8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,388(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 388);
	// subf r31,r7,r17
	ctx.r31.s64 = ctx.r17.s64 - ctx.r7.s64;
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r24,-8(r31)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// add r23,r7,r9
	ctx.r23.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r22,r8,r3
	ctx.r22.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lbz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi r8,r24,26
	ctx.r8.u64 = ctx.r24.u32 & 0x3F;
	// clrlwi r7,r7,26
	ctx.r7.u64 = ctx.r7.u32 & 0x3F;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,16(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r3,r22,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r3,r9
	ctx.r23.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r24,r24,2,24,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFC;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// lis r31,2
	ctx.r31.s64 = 131072;
	// lwz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mullw r4,r9,r4
	ctx.r4.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// lwzx r24,r24,r3
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r3.u32);
	// lwz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// mullw r8,r24,r8
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r8.s32);
	// mullw r7,r24,r9
	ctx.r7.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r9.s32);
	// mullw r6,r8,r6
	ctx.r6.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// mullw r5,r7,r5
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// mullw r4,r24,r4
	ctx.r4.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r4.s32);
	// add r9,r6,r31
	ctx.r9.u64 = ctx.r6.u64 + ctx.r31.u64;
	// add r8,r5,r31
	ctx.r8.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r7,r4,r31
	ctx.r7.u64 = ctx.r4.u64 + ctx.r31.u64;
	// srawi r6,r9,18
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 18;
	// srawi r5,r8,18
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r8.s32 >> 18;
	// srawi r4,r7,18
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 18;
	// b 0x830ec1e8
	goto loc_830EC1E8;
loc_830EC1E0:
	// lis r31,2
	ctx.r31.s64 = 131072;
loc_830EC1E4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_830EC1E8:
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r8,r4,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r4.s64;
	// srawi r7,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 31;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// xor r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 ^ ctx.r7.u64;
	// xor r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r6.u64;
	// subf r9,r7,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subf r8,r6,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r6.s64;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x830ec224
	if (!ctx.cr6.lt) goto loc_830EC224;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// li r25,8
	ctx.r25.s64 = 8;
	// b 0x830ec224
	goto loc_830EC224;
loc_830EC21C:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r31,2
	ctx.r31.s64 = 131072;
loc_830EC224:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830ec568
	if (ctx.cr6.eq) goto loc_830EC568;
	// lbz r9,27(r18)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r18.u32 + 27);
	// neg r8,r26
	ctx.r8.s64 = -ctx.r26.s64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// or r25,r8,r25
	ctx.r25.u64 = ctx.r8.u64 | ctx.r25.u64;
	// beq cr6,0x830ec55c
	if (ctx.cr6.eq) goto loc_830EC55C;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x830ec3cc
	if (!ctx.cr6.eq) goto loc_830EC3CC;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x830ec290
	if (ctx.cr6.eq) goto loc_830EC290;
	// cmpwi cr6,r16,2
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 2, ctx.xer);
	// beq cr6,0x830ec290
	if (ctx.cr6.eq) goto loc_830EC290;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// beq cr6,0x830ec290
	if (ctx.cr6.eq) goto loc_830EC290;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// beq cr6,0x830ec290
	if (ctx.cr6.eq) goto loc_830EC290;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830EC27C:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x830ec27c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830EC27C;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// b 0x830ec568
	goto loc_830EC568;
loc_830EC290:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,-8(r17)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r17.u32 + -8);
	// lwz r8,388(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 388);
	// rlwinm r5,r11,2,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// add r4,r11,r7
	ctx.r4.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// clrlwi r9,r9,26
	ctx.r9.u64 = ctx.r9.u32 & 0x3F;
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// rlwinm r7,r4,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r6,16(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// lwzx r8,r5,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// rlwinm r6,r6,2,24,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFC;
	// addi r5,r1,146
	ctx.r5.s64 = ctx.r1.s64 + 146;
	// addi r7,r1,138
	ctx.r7.s64 = ctx.r1.s64 + 138;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,16(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r27,r1,148
	ctx.r27.s64 = ctx.r1.s64 + 148;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwzx r3,r6,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r3.u32);
	// mullw r6,r4,r30
	ctx.r6.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// mullw r4,r3,r6
	ctx.r4.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
	// add r3,r4,r31
	ctx.r3.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// srawi r4,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 18;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// sth r4,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r4.u16);
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
loc_830EC318:
	// lhz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mullw r27,r8,r27
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 18;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = ctx.r27.s16;
	// sthx r30,r6,r11
	PPC_STORE_U16(ctx.r6.u32 + ctx.r11.u32, ctx.r30.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r28,r5,r11
	PPC_STORE_U16(ctx.r5.u32 + ctx.r11.u32, ctx.r28.u16);
	// sthx r4,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x830ec318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830EC318;
	// lhz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x830ec568
	goto loc_830EC568;
loc_830EC3CC:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x830ec414
	if (ctx.cr6.eq) goto loc_830EC414;
	// cmpwi cr6,r16,1
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 1, ctx.xer);
	// beq cr6,0x830ec414
	if (ctx.cr6.eq) goto loc_830EC414;
	// cmpwi cr6,r16,4
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 4, ctx.xer);
	// beq cr6,0x830ec414
	if (ctx.cr6.eq) goto loc_830EC414;
	// cmpwi cr6,r16,5
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 5, ctx.xer);
	// beq cr6,0x830ec414
	if (ctx.cr6.eq) goto loc_830EC414;
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r11,r10,-2
	ctx.r11.s64 = ctx.r10.s64 + -2;
	// addi r10,r8,-2
	ctx.r10.s64 = ctx.r8.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830EC400:
	// lhzu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x830ec400
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830EC400;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// b 0x830ec568
	goto loc_830EC568;
loc_830EC414:
	// rlwinm r8,r30,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r7,388(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 388);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r5,r8,r17
	ctx.r5.s64 = ctx.r17.s64 - ctx.r8.s64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r30,r6
	ctx.r30.s64 = ctx.r6.s16;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r11,2,24,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// add r5,r9,r7
	ctx.r5.u64 = ctx.r9.u64 + ctx.r7.u64;
	// li r11,3
	ctx.r11.s64 = 3;
	// clrlwi r9,r8,26
	ctx.r9.u64 = ctx.r8.u32 & 0x3F;
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,16(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// add r27,r9,r8
	ctx.r27.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r5,2,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFC;
	// lwzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// rlwinm r5,r27,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,146
	ctx.r4.s64 = ctx.r1.s64 + 146;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// addi r7,r6,-10
	ctx.r7.s64 = ctx.r6.s64 + -10;
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// addi r27,r1,148
	ctx.r27.s64 = ctx.r1.s64 + 148;
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// lwz r28,16(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// subf r5,r10,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// mullw r4,r28,r30
	ctx.r4.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// mullw r3,r3,r4
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r4.s32);
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// srawi r3,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 18;
	// sth r3,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r3.u16);
loc_830EC4A8:
	// lhz r4,-4(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r3,-2(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lhz r28,2(r11)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lhz r27,4(r11)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// mullw r4,r4,r8
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r8.s32);
	// mullw r3,r3,r8
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r8.s32);
	// extsh r27,r27
	ctx.r27.s64 = ctx.r27.s16;
	// mullw r30,r30,r8
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r28,r8
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r8.s32);
	// mullw r4,r4,r9
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r3,r3,r9
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// mullw r27,r27,r9
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r9.s32);
	// mullw r30,r30,r9
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// mullw r28,r28,r9
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r9.s32);
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// mullw r27,r8,r27
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r27.s32);
	// add r30,r30,r31
	ctx.r30.u64 = ctx.r30.u64 + ctx.r31.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// sth r4,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r4.u16);
	// add r27,r27,r31
	ctx.r27.u64 = ctx.r27.u64 + ctx.r31.u64;
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// srawi r28,r28,18
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3FFFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 18;
	// srawi r27,r27,18
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 18;
	// extsh r30,r30
	ctx.r30.s64 = ctx.r30.s16;
	// extsh r28,r28
	ctx.r28.s64 = ctx.r28.s16;
	// extsh r4,r27
	ctx.r4.s64 = ctx.r27.s16;
	// sthx r30,r11,r6
	PPC_STORE_U16(ctx.r11.u32 + ctx.r6.u32, ctx.r30.u16);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// sthx r28,r11,r5
	PPC_STORE_U16(ctx.r11.u32 + ctx.r5.u32, ctx.r28.u16);
	// sthx r4,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u16);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// sthu r3,10(r7)
	ea = 10 + ctx.r7.u32;
	PPC_STORE_U16(ea, ctx.r3.u16);
	ctx.r7.u32 = ea;
	// bdnz 0x830ec4a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830EC4A8;
	// lhz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// sth r11,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r11.u16);
	// b 0x830ec568
	goto loc_830EC568;
loc_830EC55C:
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x830ec568
	if (!ctx.cr6.eq) goto loc_830EC568;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_830EC568:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// beq cr6,0x830ec75c
	if (ctx.cr6.eq) goto loc_830EC75C;
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r6.u16);
	// sth r6,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r6.u16);
	// sth r6,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r6.u16);
	// bne cr6,0x830ec680
	if (!ctx.cr6.eq) goto loc_830EC680;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r6.u16);
	// sth r6,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r6.u16);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r9.u16);
	// sth r9,4(r29)
	PPC_STORE_U16(ctx.r29.u32 + 4, ctx.r9.u16);
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r5.u16);
	// sth r5,6(r29)
	PPC_STORE_U16(ctx.r29.u32 + 6, ctx.r5.u16);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,8(r11)
	PPC_STORE_U16(ctx.r11.u32 + 8, ctx.r8.u16);
	// sth r8,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r8.u16);
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r8,10(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 10);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,10(r11)
	PPC_STORE_U16(ctx.r11.u32 + 10, ctx.r4.u16);
	// sth r4,10(r29)
	PPC_STORE_U16(ctx.r29.u32 + 10, ctx.r4.u16);
	// lhz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lhz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 12);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// sth r7,12(r11)
	PPC_STORE_U16(ctx.r11.u32 + 12, ctx.r7.u16);
	// sth r7,12(r29)
	PPC_STORE_U16(ctx.r29.u32 + 12, ctx.r7.u16);
	// lhz r9,14(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// lhz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// add r4,r10,r9
	ctx.r4.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,14(r11)
	PPC_STORE_U16(ctx.r11.u32 + 14, ctx.r3.u16);
	// sth r3,14(r29)
	PPC_STORE_U16(ctx.r29.u32 + 14, ctx.r3.u16);
	// lhz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// sth r10,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r10.u16);
	// lhz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// sth r9,20(r29)
	PPC_STORE_U16(ctx.r29.u32 + 20, ctx.r9.u16);
	// lhz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// sth r8,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r8.u16);
	// lhz r7,64(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// sth r7,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r7.u16);
	// lhz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// sth r6,26(r29)
	PPC_STORE_U16(ctx.r29.u32 + 26, ctx.r6.u16);
	// lhz r5,96(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// sth r5,28(r29)
	PPC_STORE_U16(ctx.r29.u32 + 28, ctx.r5.u16);
	// lhz r4,112(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 112);
	// sth r4,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r4.u16);
	// b 0x830ec7b8
	goto loc_830EC7B8;
loc_830EC680:
	// cmpwi cr6,r25,8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 8, ctx.xer);
	// bne cr6,0x830ec768
	if (!ctx.cr6.eq) goto loc_830EC768;
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r9,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r9.u16);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r8.u32);
	// ld r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r7,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r7.u64);
	// lhz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r3,r4
	ctx.r3.s64 = ctx.r4.s16;
	// sth r3,16(r11)
	PPC_STORE_U16(ctx.r11.u32 + 16, ctx.r3.u16);
	// sth r3,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r3.u16);
	// lhz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// sth r6,32(r11)
	PPC_STORE_U16(ctx.r11.u32 + 32, ctx.r6.u16);
	// sth r6,20(r29)
	PPC_STORE_U16(ctx.r29.u32 + 20, ctx.r6.u16);
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r9,r3
	ctx.r9.s64 = ctx.r3.s16;
	// sth r9,48(r11)
	PPC_STORE_U16(ctx.r11.u32 + 48, ctx.r9.u16);
	// sth r9,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r9.u16);
	// lhz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 8);
	// lhz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r5,r6
	ctx.r5.s64 = ctx.r6.s16;
	// sth r5,64(r11)
	PPC_STORE_U16(ctx.r11.u32 + 64, ctx.r5.u16);
	// sth r5,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r5.u16);
	// lhz r9,10(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 10);
	// lhz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,80(r11)
	PPC_STORE_U16(ctx.r11.u32 + 80, ctx.r8.u16);
	// sth r8,26(r29)
	PPC_STORE_U16(ctx.r29.u32 + 26, ctx.r8.u16);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
	// lhz r6,96(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// extsh r8,r6
	ctx.r8.s64 = ctx.r6.s16;
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// extsh r4,r5
	ctx.r4.s64 = ctx.r5.s16;
	// sth r4,96(r11)
	PPC_STORE_U16(ctx.r11.u32 + 96, ctx.r4.u16);
	// sth r4,28(r29)
	PPC_STORE_U16(ctx.r29.u32 + 28, ctx.r4.u16);
	// lhz r3,14(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// lhz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 112);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// sth r8,112(r11)
	PPC_STORE_U16(ctx.r11.u32 + 112, ctx.r8.u16);
	// sth r8,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r8.u16);
	// b 0x830ec7b8
	goto loc_830EC7B8;
loc_830EC75C:
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r10.u16);
	// sth r10,16(r29)
	PPC_STORE_U16(ctx.r29.u32 + 16, ctx.r10.u16);
loc_830EC768:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r10,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r10.u16);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r9.u32);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r8,8(r29)
	PPC_STORE_U64(ctx.r29.u32 + 8, ctx.r8.u64);
	// lhz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 16);
	// sth r7,18(r29)
	PPC_STORE_U16(ctx.r29.u32 + 18, ctx.r7.u16);
	// lhz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 32);
	// sth r6,20(r29)
	PPC_STORE_U16(ctx.r29.u32 + 20, ctx.r6.u16);
	// lhz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 48);
	// sth r5,22(r29)
	PPC_STORE_U16(ctx.r29.u32 + 22, ctx.r5.u16);
	// lhz r4,64(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + 64);
	// sth r4,24(r29)
	PPC_STORE_U16(ctx.r29.u32 + 24, ctx.r4.u16);
	// lhz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 80);
	// sth r3,26(r29)
	PPC_STORE_U16(ctx.r29.u32 + 26, ctx.r3.u16);
	// lhz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 96);
	// sth r10,28(r29)
	PPC_STORE_U16(ctx.r29.u32 + 28, ctx.r10.u16);
	// lhz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 112);
	// sth r9,30(r29)
	PPC_STORE_U16(ctx.r29.u32 + 30, ctx.r9.u16);
loc_830EC7B8:
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmpwi cr6,r16,6
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 6, ctx.xer);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// blt cr6,0x830eba84
	if (ctx.cr6.lt) goto loc_830EBA84;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r5,5(r9)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + 5);
	// clrlwi r7,r11,1
	ctx.r7.u64 = ctx.r11.u32 & 0x7FFFFFFF;
	// lbz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 4);
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// rldimi r5,r6,8,48
	ctx.r5.u64 = (__builtin_rotateleft64(ctx.r6.u64, 8) & 0xFF00) | (ctx.r5.u64 & 0xFFFFFFFFFFFF00FF);
	// rldicr r4,r5,48,15
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u64, 48) & 0xFFFF000000000000;
	// lwz r3,4(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r11,1312(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1312);
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// stdx r4,r10,r11
	PPC_STORE_U64(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u64);
	// b 0x830ecce8
	goto loc_830ECCE8;
loc_830EC808:
	// lbz r10,29(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 29);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lbz r25,34(r18)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r18.u32 + 34);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lbz r20,5(r14)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r14.u32 + 5);
	// rlwinm r24,r11,12,30,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x3;
	// rlwinm r19,r11,4,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830ec834
	if (ctx.cr6.eq) goto loc_830EC834;
	// rlwinm r25,r11,8,29,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x7;
loc_830EC834:
	// lbz r10,28(r18)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r18.u32 + 28);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830ec850
	if (ctx.cr6.eq) goto loc_830EC850;
	// lwz r10,396(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 396);
	// rlwinm r11,r11,12,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xC;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x830ec854
	goto loc_830EC854;
loc_830EC850:
	// addi r22,r18,404
	ctx.r22.s64 = ctx.r18.s64 + 404;
loc_830EC854:
	// lwz r27,372(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// li r21,0
	ctx.r21.s64 = 0;
loc_830EC85C:
	// clrlwi r11,r20,31
	ctx.r11.u64 = ctx.r20.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830ecc78
	if (ctx.cr6.eq) goto loc_830ECC78;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// and r10,r11,r19
	ctx.r10.u64 = ctx.r11.u64 & ctx.r19.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830ec9bc
	if (ctx.cr6.eq) goto loc_830EC9BC;
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,608(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 608);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ec960
	if (ctx.cr6.lt) goto loc_830EC960;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830ec958
	if (!ctx.cr6.lt) goto loc_830EC958;
loc_830EC8C0:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830ec8ec
	if (ctx.cr6.lt) goto loc_830EC8EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830EC8DC;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830ec8c0
	if (ctx.cr6.eq) goto loc_830EC8C0;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ec99c
	goto loc_830EC99C;
loc_830EC8EC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = -ctx.r10.s64;
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
loc_830EC958:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ec99c
	goto loc_830EC99C;
loc_830EC960:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EC96C;
	sub_82C94B18(ctx, base);
loc_830EC96C:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830EC984;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ec96c
	if (ctx.cr6.lt) goto loc_830EC96C;
loc_830EC99C:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x830ecde4
	if (!ctx.cr6.eq) goto loc_830ECDE4;
	// add r11,r30,r18
	ctx.r11.u64 = ctx.r30.u64 + ctx.r18.u64;
	// add r10,r30,r18
	ctx.r10.u64 = ctx.r30.u64 + ctx.r18.u64;
	// lbz r25,684(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 684);
	// lbz r24,692(r10)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + 692);
loc_830EC9BC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x830eca0c
	if (!ctx.cr6.eq) goto loc_830ECA0C;
	// lwz r31,20(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// lwz r4,0(r22)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lbz r5,160(r18)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r18.u32 + 160);
	// bl 0x8310cf60
	ctx.lr = 0x830EC9DC;
	sub_8310CF60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x830ecdcc
	if (ctx.cr6.eq) goto loc_830ECDCC;
	// rlwinm r11,r3,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// lwz r10,24(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// add r8,r11,r31
	ctx.r8.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r8,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r8.u32);
	// stb r3,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r3.u8);
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// stw r7,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r7.u32);
	// b 0x830ecc74
	goto loc_830ECC74;
loc_830ECA0C:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bgt cr6,0x830eca90
	if (ctx.cr6.gt) goto loc_830ECA90;
	// or r11,r19,r28
	ctx.r11.u64 = ctx.r19.u64 | ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830eca28
	if (ctx.cr6.eq) goto loc_830ECA28;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x830ecbc8
	goto loc_830ECBC8;
loc_830ECA28:
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eca50
	if (!ctx.cr0.lt) goto loc_830ECA50;
	// bl 0x82c94c90
	ctx.lr = 0x830ECA50;
	sub_82C94C90(ctx, base);
loc_830ECA50:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x830eca88
	if (!ctx.cr6.eq) goto loc_830ECA88;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// ld r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rldicr r8,r10,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// addic. r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rldicl r31,r10,1,63
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u64, 1) & 0x1;
	// std r8,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bge 0x830eca80
	if (!ctx.cr0.lt) goto loc_830ECA80;
	// bl 0x82c94c90
	ctx.lr = 0x830ECA80;
	sub_82C94C90(ctx, base);
loc_830ECA80:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// b 0x830ecbc8
	goto loc_830ECBC8;
loc_830ECA88:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x830ecbc8
	goto loc_830ECBC8;
loc_830ECA90:
	// lwz r31,0(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,612(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 612);
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r29,0(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rldicl r9,r11,6,58
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u64, 6) & 0x3F;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r8,r29
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r29.u32);
	// extsh r30,r7
	ctx.r30.s64 = ctx.r7.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ecb78
	if (ctx.cr6.lt) goto loc_830ECB78;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r9,r30,28
	ctx.r9.u64 = ctx.r30.u32 & 0xF;
	// sld r8,r11,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r9.u8 & 0x7F));
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// std r8,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r8.u64);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// bge cr6,0x830ecb70
	if (!ctx.cr6.lt) goto loc_830ECB70;
loc_830ECAD8:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830ecb04
	if (ctx.cr6.lt) goto loc_830ECB04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94a58
	ctx.lr = 0x830ECAF4;
	sub_82C94A58(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x830ecad8
	if (ctx.cr6.eq) goto loc_830ECAD8;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ecbb4
	goto loc_830ECBB4;
loc_830ECB04:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// rldicr r10,r10,8,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFFFF;
	// lbz r4,2(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// lbz r8,5(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 5);
	// rldicr r5,r10,8,55
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// neg r4,r10
	ctx.r4.s64 = -ctx.r10.s64;
	// rldicr r11,r5,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// rldicr r11,r11,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// add r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rldicr r11,r7,8,55
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// sld r11,r11,r3
	ctx.r11.u64 = ctx.r3.u8 & 0x40 ? 0 : (ctx.r11.u64 << (ctx.r3.u8 & 0x7F));
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// std r6,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r6.u64);
loc_830ECB70:
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x830ecbb4
	goto loc_830ECBB4;
loc_830ECB78:
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830ECB84;
	sub_82C94B18(ctx, base);
loc_830ECB84:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rldicl r11,r11,1,63
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u64, 1) & 0x1;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82c94b18
	ctx.lr = 0x830ECB9C;
	sub_82C94B18(ctx, base);
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r29.u32);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x830ecb84
	if (ctx.cr6.lt) goto loc_830ECB84;
loc_830ECBB4:
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x830ecde4
	if (!ctx.cr6.eq) goto loc_830ECDE4;
loc_830ECBC8:
	// rlwinm r10,r25,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r11,r18
	ctx.r9.u64 = ctx.r11.u64 + ctx.r18.u64;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// or r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 | ctx.r7.u64;
	// lbz r28,320(r9)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r9.u32 + 320);
	// or r23,r6,r23
	ctx.r23.u64 = ctx.r6.u64 | ctx.r23.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x830ecde4
	if (ctx.cr6.eq) goto loc_830ECDE4;
	// lwz r17,372(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// add r11,r25,r18
	ctx.r11.u64 = ctx.r25.u64 + ctx.r18.u64;
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r27,0(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// lwz r29,24(r17)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// lwz r31,20(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 20);
	// lbz r26,160(r11)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + 160);
	// ble cr6,0x830ecc50
	if (!ctx.cr6.gt) goto loc_830ECC50;
loc_830ECC14:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x8310cf60
	ctx.lr = 0x830ECC28;
	sub_8310CF60(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x830ecc38
	if (!ctx.cr6.eq) goto loc_830ECC38;
	// stbx r16,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r16.u8);
	// b 0x830ecc44
	goto loc_830ECC44;
loc_830ECC38:
	// rlwinm r11,r3,1,24,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// stbx r3,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r3.u8);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_830ECC44:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x830ecc14
	if (ctx.cr6.lt) goto loc_830ECC14;
loc_830ECC50:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// beq cr6,0x830ecde4
	if (ctx.cr6.eq) goto loc_830ECDE4;
	// lwz r11,24(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r27,372(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r31,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r31.u32);
	// ori r26,r10,32768
	ctx.r26.u64 = ctx.r10.u64 | 32768;
	// stw r9,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r9.u32);
loc_830ECC74:
	// li r28,0
	ctx.r28.s64 = 0;
loc_830ECC78:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// rlwinm r20,r20,31,25,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 31) & 0x7F;
	// rldicr r23,r23,8,55
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r21,6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 6, ctx.xer);
	// blt cr6,0x830ec85c
	if (ctx.cr6.lt) goto loc_830EC85C;
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// rldicl r10,r23,56,8
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r23.u64, 56) & 0xFFFFFFFFFFFFFF;
	// lbz r9,4(r14)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r14.u32 + 4);
	// rlwinm r8,r11,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// lbz r7,5(r14)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r14.u32 + 5);
	// rlwinm r6,r11,1,23,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1C0;
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// or r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 | ctx.r9.u64;
	// lwz r3,1312(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 1312);
	// or r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 | ctx.r7.u64;
	// lwz r8,372(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r4,r7,24
	ctx.r4.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r7,r6,8,16,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFF00;
	// rldicr r6,r11,0,32
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u64, 0) & 0xFFFFFFFF80000000;
	// or r4,r7,r4
	ctx.r4.u64 = ctx.r7.u64 | ctx.r4.u64;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rldimi r6,r4,32,0
	ctx.r6.u64 = (__builtin_rotateleft64(ctx.r4.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r6.u64 & 0xFFFFFFFF);
	// rlwinm r5,r11,27,29,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7;
	// rldicr r4,r6,16,47
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u64, 16) & 0xFFFFFFFFFFFF0000;
	// or r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 | ctx.r10.u64;
	// stdx r11,r7,r3
	PPC_STORE_U64(ctx.r7.u32 + ctx.r3.u32, ctx.r11.u64);
loc_830ECCE8:
	// lhz r10,18(r8)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r8.u32 + 18);
	// addi r6,r9,24
	ctx.r6.s64 = ctx.r9.s64 + 24;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r7,r4,1
	ctx.r7.s64 = ctx.r4.s64 + 1;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r17,116(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r16,356(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpw cr6,r7,r31
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r31.s32, ctx.xer);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// rotlwi r14,r6,0
	ctx.r14.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
	// stw r9,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r9.u32);
	// sth r5,18(r8)
	PPC_STORE_U16(ctx.r8.u32 + 18, ctx.r5.u16);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// blt cr6,0x830ea5e4
	if (ctx.cr6.lt) goto loc_830EA5E4;
	// lwz r27,124(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r28,120(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r26,136(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
loc_830ECD70:
	// lwz r9,372(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r15,r15,1
	ctx.r15.s64 = ctx.r15.s64 + 1;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// cmpw cr6,r15,r26
	ctx.cr6.compare<int32_t>(ctx.r15.s32, ctx.r26.s32, ctx.xer);
	// lhz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + 16);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// sth r11,16(r9)
	PPC_STORE_U16(ctx.r9.u32 + 16, ctx.r11.u16);
	// lhz r11,50(r18)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + 50);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// lhz r6,74(r18)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r18.u32 + 74);
	// lhz r5,76(r18)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r18.u32 + 76);
	// rotlwi r10,r6,4
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 4);
	// rotlwi r11,r5,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 3);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// bge cr6,0x830ecdf0
	if (!ctx.cr6.lt) goto loc_830ECDF0;
	// rotlwi r31,r9,0
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x830ea3b8
	goto loc_830EA3B8;
loc_830ECDCC:
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830ECDE4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830ECDF0:
	// lwz r11,372(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r9,22280(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 22280);
	// li r8,-1
	ctx.r8.s64 = -1;
	// ori r7,r10,45236
	ctx.r7.u64 = ctx.r10.u64 | 45236;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r5,r9,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r9.s64;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// stwx r4,r16,r7
	PPC_STORE_U32(ctx.r16.u32 + ctx.r7.u32, ctx.r4.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// ld r10,104(r18)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r18.u32 + 104);
	// lwz r9,84(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r7,112(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 112);
	// stw r7,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r7.u32);
	// lwz r5,116(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 116);
	// lwz r6,84(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// stw r5,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r5.u32);
	// lwz r4,84(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r11,120(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 120);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r10,124(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 124);
	// lwz r9,84(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// stw r10,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r10.u32);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r7,128(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 128);
	// stw r7,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r7.u32);
	// lwz r6,132(r18)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + 132);
	// lwz r5,84(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// stw r6,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// lwz r4,84(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r11,136(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 136);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lwz r9,84(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r10,140(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 140);
	// stw r10,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r10.u32);
	// lwz r8,84(r16)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r7,144(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 144);
	// stw r7,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r7.u32);
	// lwz r6,84(r16)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r5,148(r18)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r18.u32 + 148);
	// stw r5,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r5.u32);
	// lwz r4,84(r16)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r16.u32 + 84);
	// lwz r11,152(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 152);
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
loc_830ECEB0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ECEB8"))) PPC_WEAK_FUNC(sub_830ECEB8);
PPC_FUNC_IMPL(__imp__sub_830ECEB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lhz r10,52(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lhz r9,50(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 50);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r10,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r9,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lwz r11,1316(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1316);
	// beq cr6,0x830ecf74
	if (ctx.cr6.eq) goto loc_830ECF74;
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,28680
	ctx.r7.s64 = ctx.r10.s64 + 28680;
loc_830ECEEC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830ecf68
	if (ctx.cr6.eq) goto loc_830ECF68;
	// cntlzw r9,r5
	ctx.r9.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// rlwinm r8,r9,28,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0x2;
loc_830ECF04:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r3,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r3,r9,r7
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r3,r12
	ctx.r9.u64 = ctx.r3.u64 & ctx.r12.u64;
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r31,r3,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r3,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r3.u8);
	// rldicl r9,r31,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r31,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r31.u8);
	// rldicl r3,r9,56,8
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r31,r3,56,8
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r3,r3,24
	ctx.r3.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r9,r31,24
	ctx.r9.u64 = ctx.r31.u32 & 0xFF;
	// stb r3,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r3.u8);
	// stbu r9,6(r11)
	ea = 6 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x830ecf04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830ECF04;
loc_830ECF68:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x830eceec
	if (ctx.cr6.lt) goto loc_830ECEEC;
loc_830ECF74:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830ECF7C"))) PPC_WEAK_FUNC(sub_830ECF7C);
PPC_FUNC_IMPL(__imp__sub_830ECF7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ECF80"))) PPC_WEAK_FUNC(sub_830ECF80);
PPC_FUNC_IMPL(__imp__sub_830ECF80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830ECF88;
	__savegprlr_29(ctx, base);
	// lhz r11,52(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 52);
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r10,50(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 50);
	// rlwinm r31,r11,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r11,1316(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1316);
	// rlwinm r6,r10,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830ed060
	if (ctx.cr6.eq) goto loc_830ED060;
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r10,28680
	ctx.r7.s64 = ctx.r10.s64 + 28680;
loc_830ECFB8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x830ecfd4
	if (ctx.cr6.eq) goto loc_830ECFD4;
	// lwz r10,21968(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21968);
	// lwzx r9,r10,r4
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,0
	ctx.r9.s64 = 0;
	// beq cr6,0x830ecfd8
	if (ctx.cr6.eq) goto loc_830ECFD8;
loc_830ECFD4:
	// li r9,1
	ctx.r9.s64 = 1;
loc_830ECFD8:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830ed050
	if (ctx.cr6.eq) goto loc_830ED050;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_830ECFEC:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// li r12,3855
	ctx.r12.s64 = 3855;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// oris r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 252641280;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r12,r12,3855
	ctx.r12.u64 = ctx.r12.u64 | 3855;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ldx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + ctx.r7.u32);
	// and r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 & ctx.r12.u64;
	// rldicl r30,r9,56,8
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// rldicl r29,r30,56,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r30,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r30.u8);
	// rldicl r9,r29,56,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r29,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r29.u8);
	// rldicl r30,r9,56,8
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u64, 56) & 0xFFFFFFFFFFFFFF;
	// stb r9,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r9.u8);
	// rldicl r29,r30,56,8
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u64, 56) & 0xFFFFFFFFFFFFFF;
	// clrlwi r30,r30,24
	ctx.r30.u64 = ctx.r30.u32 & 0xFF;
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// stb r30,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r30.u8);
	// stbu r9,6(r11)
	ea = 6 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x830ecfec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830ECFEC;
loc_830ED050:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x830ecfb8
	if (ctx.cr6.lt) goto loc_830ECFB8;
loc_830ED060:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830ED064"))) PPC_WEAK_FUNC(sub_830ED064);
PPC_FUNC_IMPL(__imp__sub_830ED064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830ED068"))) PPC_WEAK_FUNC(sub_830ED068);
PPC_FUNC_IMPL(__imp__sub_830ED068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x830ED070;
	__savegprlr_14(ctx, base);
	// stwu r1,-2624(r1)
	ea = -2624 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1312(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 1312);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r9,3788(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3788);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r3,2644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2644, ctx.r3.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// beq cr6,0x830ed0c0
	if (ctx.cr6.eq) goto loc_830ED0C0;
	// lwz r11,3792(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3792);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ed0c0
	if (ctx.cr6.eq) goto loc_830ED0C0;
	// lwz r11,3796(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3796);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ed0c0
	if (ctx.cr6.eq) goto loc_830ED0C0;
	// lwz r11,3088(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3088);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ed0cc
	if (!ctx.cr6.eq) goto loc_830ED0CC;
loc_830ED0C0:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_830ED0CC:
	// lwz r9,22264(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22264);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r9.u32);
	// lwz r8,22276(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 22276);
	// stw r8,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r8.u32);
	// lwz r7,616(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// stw r7,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r7.u32);
	// lwz r6,428(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// stw r6,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r6.u32);
	// lwz r5,1164(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// stw r5,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r5.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// sth r10,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r10.u16);
	// sth r10,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r10.u16);
	// lhz r8,50(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// lhz r9,74(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// lhz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 52);
	// rlwinm r11,r4,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// ble cr6,0x830ede10
	if (!ctx.cr6.gt) goto loc_830EDE10;
	// b 0x830ed150
	goto loc_830ED150;
loc_830ED148:
	// lwz r3,2644(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2644);
	// li r10,0
	ctx.r10.s64 = 0;
loc_830ED150:
	// sth r10,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r10.u16);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lwz r8,21940(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 21940);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x830ed190
	if (ctx.cr6.eq) goto loc_830ED190;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,1304(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r9,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830ed190
	if (ctx.cr6.eq) goto loc_830ED190;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_830ED190:
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x830eddb0
	if (!ctx.cr6.gt) goto loc_830EDDB0;
loc_830ED1A0:
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r11,r10,29
	ctx.r11.u64 = ctx.r10.u32 & 0x7;
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// ld r22,0(r9)
	ctx.r22.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// addi r7,r11,588
	ctx.r7.s64 = ctx.r11.s64 + 588;
	// addi r6,r10,596
	ctx.r6.s64 = ctx.r10.s64 + 596;
	// rldicl r5,r22,3,61
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r22.u64, 3) & 0x7;
	// rldicl r4,r22,10,54
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u64, 10) & 0x3FF;
	// rlwinm r3,r7,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwimi r5,r4,0,30,31
	ctx.r5.u64 = (__builtin_rotateleft32(ctx.r4.u32, 0) & 0x3) | (ctx.r5.u64 & 0xFFFFFFFFFFFFFFFC);
	// li r11,2
	ctx.r11.s64 = 2;
	// clrlwi r14,r5,29
	ctx.r14.u64 = ctx.r5.u32 & 0x7;
	// lhzx r9,r3,r31
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + ctx.r31.u32);
	// rlwinm r6,r27,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r8,r10,r31
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r31.u32);
	// add r19,r14,r31
	ctx.r19.u64 = ctx.r14.u64 + ctx.r31.u64;
	// extsh r7,r9
	ctx.r7.s64 = ctx.r9.s16;
	// stb r14,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r14.u8);
	// extsh r5,r8
	ctx.r5.s64 = ctx.r8.s16;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r10,r7,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r31,472
	ctx.r9.s64 = ctx.r31.s64 + 472;
	// lbz r28,1751(r19)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1751);
	// add r29,r6,r27
	ctx.r29.u64 = ctx.r6.u64 + ctx.r27.u64;
	// rlwinm r7,r5,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
loc_830ED218:
	// clrlwi r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ed268
	if (ctx.cr6.eq) goto loc_830ED268;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,-8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r3,8(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// add r5,r8,r4
	ctx.r5.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// dcbt r10,r11
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// dcbt r4,r11
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// dcbt r3,r11
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// dcbt r4,r11
	// dcbt r7,r5
	// dcbt r7,r8
loc_830ED268:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// rlwinm r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// bdnz 0x830ed218
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830ED218;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r31,1784
	ctx.r11.s64 = ctx.r31.s64 + 1784;
	// lwz r9,1784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// rlwinm r21,r10,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r21,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r9.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x830edd40
	if (ctx.cr6.eq) goto loc_830EDD40;
	// lwz r10,1788(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// rldicl r9,r22,17,47
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u64, 17) & 0x1FFFF;
	// lbz r8,30(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 30);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// clrlwi r20,r9,31
	ctx.r20.u64 = ctx.r9.u32 & 0x1;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r24,r21,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r10.u32);
	// beq cr6,0x830ed2c0
	if (ctx.cr6.eq) goto loc_830ED2C0;
	// rlwinm r11,r11,0,17,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r10,r24,0,17,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// rlwinm r25,r11,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r10,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_830ED2C0:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r9,2188(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lhz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// extsh r8,r7
	ctx.r8.s64 = ctx.r7.s16;
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r9,r9,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// beq cr6,0x830ed340
	if (ctx.cr6.eq) goto loc_830ED340;
	// addi r7,r11,255
	ctx.r7.s64 = ctx.r11.s64 + 255;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r10,255
	ctx.r6.s64 = ctx.r10.s64 + 255;
	// addi r5,r9,255
	ctx.r5.s64 = ctx.r9.s64 + 255;
	// srawi r4,r7,9
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1FF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 9;
	// addi r3,r11,255
	ctx.r3.s64 = ctx.r11.s64 + 255;
	// srawi r11,r6,9
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 9;
	// srawi r10,r5,9
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 9;
	// srawi r9,r3,9
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 9;
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r8,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r8.u16);
	// rlwinm r5,r9,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r7.u16);
	// sth r6,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r6.u16);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// b 0x830ed374
	goto loc_830ED374;
loc_830ED340:
	// addi r7,r11,128
	ctx.r7.s64 = ctx.r11.s64 + 128;
	// subf r11,r8,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r8.s64;
	// addi r6,r10,128
	ctx.r6.s64 = ctx.r10.s64 + 128;
	// addi r5,r9,128
	ctx.r5.s64 = ctx.r9.s64 + 128;
	// srawi r4,r7,8
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r7.s32 >> 8;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// srawi r11,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 8;
	// sth r4,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// srawi r10,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 8;
	// srawi r9,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 8;
	// sth r11,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r11.u16);
	// sth r10,90(r1)
	PPC_STORE_U16(ctx.r1.u32 + 90, ctx.r10.u16);
	// sth r9,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r9.u16);
loc_830ED374:
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r27,1764(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1764);
	// rlwinm r10,r5,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// lwz r26,1776(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1776);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r6,r6,0,16,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830ed3cc
	if (ctx.cr6.eq) goto loc_830ED3CC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ad0
	ctx.lr = 0x830ED3C8;
	sub_82CE1AD0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_830ED3CC:
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// rlwinm r10,r5,1,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x10000;
	// subf r9,r11,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r11.s64;
	// subf r10,r10,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r10.s64;
	// subf r8,r5,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,0,0,16
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r6,r6,0,16,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x830ed418
	if (ctx.cr6.eq) goto loc_830ED418;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ad0
	ctx.lr = 0x830ED418;
	sub_82CE1AD0(ctx, base);
loc_830ED418:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r14,1
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 1, ctx.xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r28,r31,1784
	ctx.r28.s64 = ctx.r31.s64 + 1784;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r24,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r24.u32);
	// lwz r9,1784(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1784);
	// stwx r29,r21,r9
	PPC_STORE_U32(ctx.r21.u32 + ctx.r9.u32, ctx.r29.u32);
	// lwz r8,1788(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1788);
	// stwx r3,r21,r8
	PPC_STORE_U32(ctx.r21.u32 + ctx.r8.u32, ctx.r3.u32);
	// beq cr6,0x830ed7b4
	if (ctx.cr6.eq) goto loc_830ED7B4;
	// subfic r23,r14,5
	ctx.xer.ca = ctx.r14.u32 <= 5;
	ctx.r23.s64 = 5 - ctx.r14.s64;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// beq cr6,0x830ed460
	if (ctx.cr6.eq) goto loc_830ED460;
	// stw r25,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r25.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// b 0x830ed468
	goto loc_830ED468;
loc_830ED460:
	// stw r25,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r25.u32);
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
loc_830ED468:
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r29,r1,136
	ctx.r29.s64 = ctx.r1.s64 + 136;
	// subfic r27,r31,-1784
	ctx.xer.ca = ctx.r31.u32 <= 4294965512;
	ctx.r27.s64 = -1784 - ctx.r31.s64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_830ED478:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830ed7a0
	if (ctx.cr6.eq) goto loc_830ED7A0;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r10,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r10.u32);
	// beq cr6,0x830ed54c
	if (ctx.cr6.eq) goto loc_830ED54C;
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ed730
	if (ctx.cr6.eq) goto loc_830ED730;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,16384
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16384, ctx.xer);
	// beq cr6,0x830ed730
	if (ctx.cr6.eq) goto loc_830ED730;
	// lwz r10,2192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// rlwinm r9,r11,1,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x10000;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r10,1
	ctx.r4.s64 = ctx.r10.s64 + 1;
	// addi r7,r4,439
	ctx.r7.s64 = ctx.r4.s64 + 439;
	// addi r6,r4,442
	ctx.r6.s64 = ctx.r4.s64 + 442;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r6,r4,31
	ctx.r6.u64 = ctx.r4.u32 & 0x1;
	// subfic r10,r6,5
	ctx.xer.ca = ctx.r6.u32 <= 5;
	ctx.r10.s64 = 5 - ctx.r6.s64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// slw r10,r8,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r5,r10,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// rlwinm r9,r10,0,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r9,r9,0,16,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830ed730
	if (ctx.cr6.eq) goto loc_830ED730;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x830ed544
	if (!ctx.cr6.eq) goto loc_830ED544;
	// lwz r10,1168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// bne cr6,0x830ed544
	if (!ctx.cr6.eq) goto loc_830ED544;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d6c0
	ctx.lr = 0x830ED540;
	sub_8310D6C0(ctx, base);
	// b 0x830ed730
	goto loc_830ED730;
loc_830ED544:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// b 0x830ed724
	goto loc_830ED724;
loc_830ED54C:
	// lhz r11,18(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lhz r9,50(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// rlwinm r8,r11,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r9,r9,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// neg r6,r8
	ctx.r6.s64 = -ctx.r8.s64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// srawi r5,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 31;
	// subfc r4,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r4.s64 = ctx.r8.s64 - ctx.r11.s64;
	// eqv r3,r11,r8
	ctx.r3.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// subf r11,r9,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r9.s64;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r4.s64 = temp.s64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r4,1,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x2;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r9,r6,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r9,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,-4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// and r11,r6,r5
	ctx.r11.u64 = ctx.r6.u64 & ctx.r5.u64;
	// rlwinm r8,r4,0,17,17
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// rlwinm r3,r11,31,1,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// xor r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 ^ ctx.r11.u64;
	// rlwinm r5,r10,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r6,r7,0,17,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000;
	// xor r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 ^ ctx.r10.u64;
	// rlwinm r7,r4,0,17,17
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0x4000;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add. r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x830ed5f0
	if (!ctx.cr0.gt) goto loc_830ED5F0;
	// cmpwi cr6,r8,16384
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 16384, ctx.xer);
	// bne cr6,0x830ed718
	if (!ctx.cr6.eq) goto loc_830ED718;
	// cmplwi cr6,r9,16384
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16384, ctx.xer);
	// bne cr6,0x830ed6f8
	if (!ctx.cr6.eq) goto loc_830ED6F8;
	// li r9,0
	ctx.r9.s64 = 0;
loc_830ED5F0:
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r4,2192(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// lwz r24,16(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r18,r10,16,0,15
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r3,r11,16,0,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r17,r9,16,0,15
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// xor r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// xor r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 ^ ctx.r7.u64;
	// subf r16,r3,r18
	ctx.r16.s64 = ctx.r18.s64 - ctx.r3.s64;
	// subf r5,r17,r18
	ctx.r5.s64 = ctx.r18.s64 - ctx.r17.s64;
	// srawi r8,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 31;
	// subf r6,r17,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r17.s64;
	// srawi r7,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 31;
	// xor r16,r16,r5
	ctx.r16.u64 = ctx.r16.u64 ^ ctx.r5.u64;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// xor r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 ^ ctx.r5.u64;
	// nor r8,r8,r7
	ctx.r8.u64 = ~(ctx.r8.u64 | ctx.r7.u64);
	// and r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 & ctx.r9.u64;
	// srawi r6,r16,31
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r16.s32 >> 31;
	// srawi r5,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 31;
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// nor r9,r6,r5
	ctx.r9.u64 = ~(ctx.r6.u64 | ctx.r5.u64);
	// and r7,r6,r18
	ctx.r7.u64 = ctx.r6.u64 & ctx.r18.u64;
	// and r8,r5,r17
	ctx.r8.u64 = ctx.r5.u64 & ctx.r17.u64;
	// or r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 | ctx.r7.u64;
	// and r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 & ctx.r3.u64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// or r10,r5,r3
	ctx.r10.u64 = ctx.r5.u64 | ctx.r3.u64;
	// srawi r11,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 16;
	// addi r9,r4,439
	ctx.r9.s64 = ctx.r4.s64 + 439;
	// addi r8,r4,442
	ctx.r8.s64 = ctx.r4.s64 + 442;
	// rlwinm r7,r11,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// rlwinm r6,r10,16,16,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// or r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 | ctx.r7.u64;
	// clrlwi r9,r4,31
	ctx.r9.u64 = ctx.r4.u32 & 0x1;
	// rlwinm r8,r3,1,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x10000;
	// lwzx r7,r5,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// subfic r11,r9,5
	ctx.xer.ca = ctx.r9.u32 <= 5;
	ctx.r11.s64 = 5 - ctx.r9.s64;
	// lwzx r6,r10,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// slw r11,r24,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r11.u8 & 0x3F));
	// subf r5,r3,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r3.s64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830ed730
	if (ctx.cr6.eq) goto loc_830ED730;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x830ed720
	if (!ctx.cr6.eq) goto loc_830ED720;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x830ed720
	if (!ctx.cr6.eq) goto loc_830ED720;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d6c0
	ctx.lr = 0x830ED6F4;
	sub_8310D6C0(ctx, base);
	// b 0x830ed730
	goto loc_830ED730;
loc_830ED6F8:
	// cmplwi cr6,r10,16384
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16384, ctx.xer);
	// bne cr6,0x830ed708
	if (!ctx.cr6.eq) goto loc_830ED708;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x830ed5f0
	goto loc_830ED5F0;
loc_830ED708:
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// bne cr6,0x830ed5f0
	if (!ctx.cr6.eq) goto loc_830ED5F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x830ed5f0
	goto loc_830ED5F0;
loc_830ED718:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x830ed730
	goto loc_830ED730;
loc_830ED720:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_830ED724:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ad0
	ctx.lr = 0x830ED730;
	sub_82CE1AD0(ctx, base);
loc_830ED730:
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830ed788
	if (!ctx.cr6.eq) goto loc_830ED788;
	// lhz r10,2(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lhz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// srawi r6,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r3.s32 >> 16;
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// lhz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lhz r5,66(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 66);
	// add r8,r6,r7
	ctx.r8.u64 = ctx.r6.u64 + ctx.r7.u64;
	// lhz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 68);
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// and r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 & ctx.r5.u64;
	// and r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 & ctx.r4.u64;
	// subf r3,r11,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwimi r3,r6,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
loc_830ED788:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stwx r3,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r3.u32);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stwx r3,r21,r10
	PPC_STORE_U32(ctx.r21.u32 + ctx.r10.u32, ctx.r3.u32);
loc_830ED7A0:
	// srawi r23,r23,1
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r23.s32 >> 1;
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x830ed478
	if (!ctx.cr0.eq) goto loc_830ED478;
	// b 0x830ed7c4
	goto loc_830ED7C4;
loc_830ED7B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
loc_830ED7C4:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r9,388(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// addi r11,r31,1724
	ctx.r11.s64 = ctx.r31.s64 + 1724;
	// stw r10,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r10.u32);
	// rldicl r8,r22,8,56
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r22.u64, 8) & 0xFF;
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// addi r7,r1,1312
	ctx.r7.s64 = ctx.r1.s64 + 1312;
	// clrlwi r11,r8,26
	ctx.r11.u64 = ctx.r8.u32 & 0x3F;
	// rldicl r6,r22,16,48
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u64, 16) & 0xFFFF;
	// stw r7,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r7.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r16,r22
	ctx.r16.u64 = ctx.r22.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// clrlwi r15,r6,26
	ctx.r15.u64 = ctx.r6.u32 & 0x3F;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r21,r31,1748
	ctx.r21.s64 = ctx.r31.s64 + 1748;
	// add r17,r11,r9
	ctx.r17.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r24,r31,464
	ctx.r24.s64 = ctx.r31.s64 + 464;
	// subfic r20,r31,-464
	ctx.xer.ca = ctx.r31.u32 <= 4294966832;
	ctx.r20.s64 = -464 - ctx.r31.s64;
	// lbz r18,1751(r19)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1751);
	// li r19,2
	ctx.r19.s64 = 2;
loc_830ED818:
	// clrlwi r11,r18,31
	ctx.r11.u64 = ctx.r18.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830edaf0
	if (ctx.cr6.eq) goto loc_830EDAF0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r22,r20,r24
	ctx.r22.u64 = ctx.r20.u64 + ctx.r24.u64;
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r8,1756(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1756);
	// lwz r7,1768(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// rlwinm r11,r9,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwzx r3,r22,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r10.u32);
	// subf r6,r11,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r11.s64;
	// rlwinm r5,r3,1,15,15
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x10000;
	// subf r4,r3,r6
	ctx.r4.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r10,r11,0,0,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r10,r10,0,16,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830ed8a0
	if (ctx.cr6.eq) goto loc_830ED8A0;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x830ed88c
	if (!ctx.cr6.eq) goto loc_830ED88C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d6c0
	ctx.lr = 0x830ED888;
	sub_8310D6C0(ctx, base);
	// b 0x830ed8a0
	goto loc_830ED8A0;
loc_830ED88C:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ce1ad0
	ctx.lr = 0x830ED8A0;
	sub_82CE1AD0(ctx, base);
loc_830ED8A0:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// srawi r26,r3,16
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFFF) != 0);
	ctx.r26.s64 = ctx.r3.s32 >> 16;
	// lwz r23,1716(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 1716);
	// extsh r25,r3
	ctx.r25.s64 = ctx.r3.s16;
	// lbz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830ed960
	if (ctx.cr6.eq) goto loc_830ED960;
	// lhz r4,90(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// srawi r7,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r26.s32 >> 2;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mullw r9,r7,r4
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r25,2
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r25.s32 >> 2;
	// clrlwi r29,r25,30
	ctx.r29.u64 = ctx.r25.u32 & 0x3;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r28,r26,30
	ctx.r28.u64 = ctx.r26.u32 & 0x3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bne cr6,0x830ed944
	if (!ctx.cr6.eq) goto loc_830ED944;
	// addi r11,r29,44
	ctx.r11.s64 = ctx.r29.s64 + 44;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830ED918;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x830ed960
	if (ctx.cr6.eq) goto loc_830ED960;
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r8,35(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 35);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lhz r4,90(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 90);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82d0bc48
	ctx.lr = 0x830ED940;
	sub_82D0BC48(ctx, base);
	// b 0x830ed960
	goto loc_830ED960;
loc_830ED944:
	// addi r11,r29,48
	ctx.r11.s64 = ctx.r29.s64 + 48;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r28
	ctx.r10.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830ED960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830ED960:
	// lwz r7,1172(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x830ed988
	if (ctx.cr6.eq) goto loc_830ED988;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r22,r11
	ctx.r11.u64 = ctx.r22.u64 + ctx.r11.u64;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r9,2(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// b 0x830ed990
	goto loc_830ED990;
loc_830ED988:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_830ED990:
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// lbz r8,31(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 31);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lbzx r9,r9,r21
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r21.u32);
	// lbzx r8,r6,r21
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r21.u32);
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// srawi r10,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r5.s32 >> 1;
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// beq cr6,0x830ed9ec
	if (ctx.cr6.eq) goto loc_830ED9EC;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// ble cr6,0x830ed9d0
	if (!ctx.cr6.gt) goto loc_830ED9D0;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// b 0x830ed9d4
	goto loc_830ED9D4;
loc_830ED9D0:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_830ED9D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// ble cr6,0x830ed9e8
	if (!ctx.cr6.gt) goto loc_830ED9E8;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// b 0x830ed9ec
	goto loc_830ED9EC;
loc_830ED9E8:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_830ED9EC:
	// sth r10,94(r1)
	PPC_STORE_U16(ctx.r1.u32 + 94, ctx.r10.u16);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,92(r1)
	PPC_STORE_U16(ctx.r1.u32 + 92, ctx.r11.u16);
	// beq cr6,0x830eda5c
	if (ctx.cr6.eq) goto loc_830EDA5C;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r8,2200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2200);
	// rlwinm r7,r4,1,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x10000;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subf r3,r5,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r5.s64;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// subf r9,r4,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,0,0,16
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFF8000;
	// rlwinm r7,r7,0,16,0
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFF8000FFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x830eda54
	if (ctx.cr6.eq) goto loc_830EDA54;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8310d7a0
	ctx.lr = 0x830EDA50;
	sub_8310D7A0(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_830EDA54:
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// b 0x830eda60
	goto loc_830EDA60;
loc_830EDA5C:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_830EDA60:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lhz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// srawi r8,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 2;
	// srawi r6,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 2;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addi r29,r23,768
	ctx.r29.s64 = ctx.r23.s64 + 768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r28,r8,r7
	ctx.r28.u64 = ctx.r8.u64 + ctx.r7.u64;
	// beq cr6,0x830edaf0
	if (ctx.cr6.eq) goto loc_830EDAF0;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r9,48
	ctx.r11.s64 = ctx.r9.s64 + 48;
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r9,r27,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830EDACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwzx r8,r27,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,16(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r29,16
	ctx.r5.s64 = ctx.r29.s64 + 16;
	// lhz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830EDAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EDAF0:
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// bne 0x830ed818
	if (!ctx.cr0.eq) goto loc_830ED818;
	// lbz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// li r28,0
	ctx.r28.s64 = 0;
loc_830EDB08:
	// srawi r27,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 2;
	// addi r11,r28,140
	ctx.r11.s64 = ctx.r28.s64 + 140;
	// addi r10,r27,2
	ctx.r10.s64 = ctx.r27.s64 + 2;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r15,31
	ctx.r7.u64 = ctx.r15.u32 & 0x1;
	// rldicl r6,r16,20,44
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r16.u64, 20) & 0xFFFFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// clrlwi r11,r6,29
	ctx.r11.u64 = ctx.r6.u32 & 0x7;
	// lwzx r10,r8,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// add r26,r10,r9
	ctx.r26.u64 = ctx.r10.u64 + ctx.r9.u64;
	// beq cr6,0x830edccc
	if (ctx.cr6.eq) goto loc_830EDCCC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830edc18
	if (!ctx.cr6.eq) goto loc_830EDC18;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r5,r31,168
	ctx.r5.s64 = ctx.r31.s64 + 168;
	// lwz r4,444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// lwz r7,0(r17)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r6,4(r17)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r17.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// dcbzl r0,r29
	memset(base + ((ctx.r29.u32) & ~127), 0, 128);
	// cmplwi cr6,r8,128
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 128, ctx.xer);
	// blt cr6,0x830edb98
	if (ctx.cr6.lt) goto loc_830EDB98;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82cbc178
	ctx.lr = 0x830EDB90;
	sub_82CBC178(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// b 0x830edbf8
	goto loc_830EDBF8;
loc_830EDB98:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x830edbf4
	if (!ctx.cr6.gt) goto loc_830EDBF4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_830EDBA4:
	// lhz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// clrlwi r8,r3,26
	ctx.r8.u64 = ctx.r3.u32 & 0x3F;
	// rlwinm r24,r3,24,8,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 24) & 0xFFFFFF;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// mullw r8,r24,r7
	ctx.r8.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// clrlwi r10,r10,26
	ctx.r10.u64 = ctx.r10.u32 & 0x3F;
	// rlwinm r3,r3,25,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 25) & 0x1;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
	// lbzx r24,r10,r4
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// xor r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r3.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r3,r3,r8
	ctx.r3.s64 = ctx.r8.s64 - ctx.r3.s64;
	// extsh r8,r3
	ctx.r8.s64 = ctx.r3.s16;
	// lbzx r23,r24,r5
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r5.u32);
	// rotlwi r24,r24,1
	ctx.r24.u64 = __builtin_rotateleft32(ctx.r24.u32, 1);
	// or r9,r23,r9
	ctx.r9.u64 = ctx.r23.u64 | ctx.r9.u64;
	// sthx r8,r24,r29
	PPC_STORE_U16(ctx.r24.u32 + ctx.r29.u32, ctx.r8.u16);
	// bdnz 0x830edba4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830EDBA4;
loc_830EDBF4:
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_830EDBF8:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne cr6,0x830edc10
	if (!ctx.cr6.eq) goto loc_830EDC10;
	// bl 0x82cd2280
	ctx.lr = 0x830EDC0C;
	sub_82CD2280(ctx, base);
	// b 0x830edc5c
	goto loc_830EDC5C;
loc_830EDC10:
	// bl 0x8310fc18
	ctx.lr = 0x830EDC14;
	sub_8310FC18(ctx, base);
	// b 0x830edc5c
	goto loc_830EDC5C;
loc_830EDC18:
	// rldicl r10,r16,24,40
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r16.u64, 24) & 0xFFFFFF;
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// clrlwi r5,r10,28
	ctx.r5.u64 = ctx.r10.u32 & 0xF;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r9,r5,r31
	ctx.r9.u64 = ctx.r5.u64 + ctx.r31.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lbz r10,320(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 320);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r8,r11,159
	ctx.r8.s64 = ctx.r11.s64 + 159;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830EDC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_830EDC5C:
	// clrlwi r14,r25,24
	ctx.r14.u64 = ctx.r25.u32 & 0xFF;
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// bgt cr6,0x830edc94
	if (ctx.cr6.gt) goto loc_830EDC94;
	// addi r11,r27,45
	ctx.r11.s64 = ctx.r27.s64 + 45;
	// lwz r5,2184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r4,2180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r8,r10,r28
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lhzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x830ee038
	ctx.lr = 0x830EDC90;
	sub_830EE038(ctx, base);
	// b 0x830edd2c
	goto loc_830EDD2C;
loc_830EDC94:
	// neg r11,r14
	ctx.r11.s64 = -ctx.r14.s64;
	// lbzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r9,r27,45
	ctx.r9.s64 = ctx.r27.s64 + 45;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,545
	ctx.r7.s64 = ctx.r11.s64 + 545;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lhzx r6,r8,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x831162d8
	ctx.lr = 0x830EDCC8;
	sub_831162D8(ctx, base);
	// b 0x830edd2c
	goto loc_830EDD2C;
loc_830EDCCC:
	// lwz r10,700(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 700);
	// cmplwi cr6,r14,2
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 2, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bgt cr6,0x830edcfc
	if (ctx.cr6.gt) goto loc_830EDCFC;
	// addi r11,r27,45
	ctx.r11.s64 = ctx.r27.s64 + 45;
	// lwz r5,2184(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// lwz r4,2180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2180);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lbzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// lhzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// bl 0x830edf28
	ctx.lr = 0x830EDCF8;
	sub_830EDF28(ctx, base);
	// b 0x830edd2c
	goto loc_830EDD2C;
loc_830EDCFC:
	// neg r11,r14
	ctx.r11.s64 = -ctx.r14.s64;
	// lbzx r6,r10,r28
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r28.u32);
	// addi r9,r27,45
	ctx.r9.s64 = ctx.r27.s64 + 45;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r7,r11,545
	ctx.r7.s64 = ctx.r11.s64 + 545;
	// rotlwi r10,r6,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lhzx r5,r8,r31
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r31.u32);
	// lwzx r11,r4,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x83116218
	ctx.lr = 0x830EDD2C;
	sub_83116218(ctx, base);
loc_830EDD2C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm r15,r15,31,25,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 31) & 0x7F;
	// rldicr r16,r16,8,55
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r16.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// cmpwi cr6,r28,6
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 6, ctx.xer);
	// blt cr6,0x830edb08
	if (ctx.cr6.lt) goto loc_830EDB08;
loc_830EDD40:
	// lhz r10,18(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 18);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// addi r8,r6,1
	ctx.r8.s64 = ctx.r6.s64 + 1;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r3,r4,4
	ctx.r3.s64 = ctx.r4.s64 + 4;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// clrlwi r4,r7,16
	ctx.r4.u64 = ctx.r7.u32 & 0xFFFF;
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// stw r9,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r9.u32);
	// sth r4,18(r30)
	PPC_STORE_U16(ctx.r30.u32 + 18, ctx.r4.u16);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// blt cr6,0x830ed1a0
	if (ctx.cr6.lt) goto loc_830ED1A0;
loc_830EDDB0:
	// lhz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r4,r8,2
	ctx.r4.s64 = ctx.r8.s64 + 2;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwinm r11,r9,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// sth r4,16(r30)
	PPC_STORE_U16(ctx.r30.u32 + 16, ctx.r4.u16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,120(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// add r3,r9,r6
	ctx.r3.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// cmpw cr6,r8,r4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r4.s32, ctx.xer);
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// stw r3,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r3.u32);
	// lhz r11,50(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 50);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x830ed148
	if (ctx.cr6.lt) goto loc_830ED148;
loc_830EDE10:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,2624
	ctx.r1.s64 = ctx.r1.s64 + 2624;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EDE1C"))) PPC_WEAK_FUNC(sub_830EDE1C);
PPC_FUNC_IMPL(__imp__sub_830EDE1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830EDE20"))) PPC_WEAK_FUNC(sub_830EDE20);
PPC_FUNC_IMPL(__imp__sub_830EDE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x830EDE28;
	__savegprlr_28(ctx, base);
	// stwu r1,-1664(r1)
	ea = -1664 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// addi r28,r3,22432
	ctx.r28.s64 = ctx.r3.s64 + 22432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-2940(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -2940);
	// bl 0x830f47c0
	ctx.lr = 0x830EDE44;
	sub_830F47C0(ctx, base);
	// addi r29,r31,17392
	ctx.r29.s64 = ctx.r31.s64 + 17392;
	// addi r30,r31,15984
	ctx.r30.s64 = ctx.r31.s64 + 15984;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ea1e0
	ctx.lr = 0x830EDE5C;
	sub_830EA1E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830edf20
	if (!ctx.cr6.eq) goto loc_830EDF20;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ee198
	ctx.lr = 0x830EDE74;
	sub_830EE198(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830edf20
	if (!ctx.cr6.eq) goto loc_830EDF20;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830ed068
	ctx.lr = 0x830EDE8C;
	sub_830ED068(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x830edf20
	if (!ctx.cr6.eq) goto loc_830EDF20;
	// lwz r11,3948(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3948);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x830edef8
	if (ctx.cr6.eq) goto loc_830EDEF8;
	// lwz r11,15536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15536);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x830edebc
	if (!ctx.cr6.eq) goto loc_830EDEBC;
	// bl 0x830ecf80
	ctx.lr = 0x830EDEB8;
	sub_830ECF80(ctx, base);
	// b 0x830edec0
	goto loc_830EDEC0;
loc_830EDEBC:
	// bl 0x830eceb8
	ctx.lr = 0x830EDEC0;
	sub_830ECEB8(ctx, base);
loc_830EDEC0:
	// lhz r10,16036(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16036);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,3784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3784);
	// lwz r6,3780(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3780);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,3776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3776);
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// lwz r5,220(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 + ctx.r5.u64;
	// bl 0x82cbd058
	ctx.lr = 0x830EDEF8;
	sub_82CBD058(ctx, base);
loc_830EDEF8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830f4b08
	ctx.lr = 0x830EDF04;
	sub_830F4B08(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,15624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15624, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,15628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15628, ctx.r10.u32);
	// stw r11,15600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15600, ctx.r11.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
loc_830EDF20:
	// addi r1,r1,1664
	ctx.r1.s64 = ctx.r1.s64 + 1664;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830EDF28"))) PPC_WEAK_FUNC(sub_830EDF28);
PPC_FUNC_IMPL(__imp__sub_830EDF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// li r8,144
	ctx.r8.s64 = 144;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r2,r5,r6
	ctx.r2.u64 = ctx.r5.u64 + ctx.r6.u64;
	// li r6,48
	ctx.r6.s64 = 48;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r7,96
	ctx.r7.s64 = 96;
	// lvx128 v1,r0,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r9,192
	ctx.r9.s64 = 192;
	// lvx128 v11,r0,r2
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r2.u32) & ~0xF), VectorMaskL));
	// li r10,240
	ctx.r10.s64 = 240;
	// lvx128 v2,r4,r6
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vavguh v1,v1,v11
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v1.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// lvx128 v12,r2,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r11,288
	ctx.r11.s64 = 288;
	// li r12,336
	ctx.r12.s64 = 336;
	// lvx128 v3,r4,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r2,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vavguh v2,v2,v12
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v2.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// lvx128 v4,r4,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vavguh v3,v3,v13
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v3.u16), _mm_load_si128((__m128i*)ctx.v13.u16)));
	// lvx128 v14,r2,r8
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpkshus v24,v1,v1
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// lvx128 v5,r4,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vavguh v4,v4,v14
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v4.u16), _mm_load_si128((__m128i*)ctx.v14.u16)));
	// lvx128 v15,r2,r9
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpkshus v25,v2,v2
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// lvx128 v6,r4,r10
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vavguh v5,v5,v15
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v5.u16), _mm_load_si128((__m128i*)ctx.v15.u16)));
	// lvx128 v7,r4,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vpkshus v26,v3,v3
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// lvx128 v8,r4,r12
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// lvx128 v16,r2,r10
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r6,r5,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v17,r2,r11
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vavguh v6,v6,v16
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v6.u16), _mm_load_si128((__m128i*)ctx.v16.u16)));
	// vpkshus v27,v4,v4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// lvx128 v18,r2,r12
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r2.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// vavguh v7,v7,v17
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v7.u16), _mm_load_si128((__m128i*)ctx.v17.u16)));
	// stvewx v24,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vpkshus v28,v5,v5
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// stvewx v24,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v24.u32[3 - ((ea & 0xF) >> 2)]);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vavguh v8,v8,v18
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_avg_epu16(_mm_load_si128((__m128i*)ctx.v8.u16), _mm_load_si128((__m128i*)ctx.v18.u16)));
	// stvewx v25,r3,r5
	ea = (ctx.r3.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus v29,v6,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// stvewx v25,r4,r5
	ea = (ctx.r4.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v25.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v26,r3,r6
	ea = (ctx.r3.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// add r9,r5,r8
	ctx.r9.u64 = ctx.r5.u64 + ctx.r8.u64;
	// vpkshus v30,v7,v7
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// stvewx v26,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v27,r3,r7
	ea = (ctx.r3.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// add r10,r6,r8
	ctx.r10.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vpkshus v31,v8,v8
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// stvewx v27,r4,r7
	ea = (ctx.r4.u32 + ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v28,r3,r8
	ea = (ctx.r3.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// add r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 + ctx.r8.u64;
	// stvewx v28,r4,r8
	ea = (ctx.r4.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v28.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r3,r9
	ea = (ctx.r3.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v30,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830EE034"))) PPC_WEAK_FUNC(sub_830EE034);
PPC_FUNC_IMPL(__imp__sub_830EE034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

