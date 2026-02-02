#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82897AD8"))) PPC_WEAK_FUNC(sub_82897AD8);
PPC_FUNC_IMPL(__imp__sub_82897AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82897AE0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lfs f0,24440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24440);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// bl 0x8283c4d0
	ctx.lr = 0x82897B0C;
	sub_8283C4D0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-19520(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19520);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82897b28
	if (ctx.cr6.gt) goto loc_82897B28;
	// lfs f13,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
loc_82897B28:
	// stfs f31,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82842b80
	ctx.lr = 0x82897B38;
	sub_82842B80(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82897b60
	if (!ctx.cr6.gt) goto loc_82897B60;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,21648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21648);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82897b64
	if (ctx.cr6.lt) goto loc_82897B64;
loc_82897B60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82897B64:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82897b78
	if (ctx.cr0.eq) goto loc_82897B78;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843398
	ctx.lr = 0x82897B78;
	sub_82843398(ctx, base);
loc_82897B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82897B88"))) PPC_WEAK_FUNC(sub_82897B88);
PPC_FUNC_IMPL(__imp__sub_82897B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82897B90;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82842b48
	ctx.lr = 0x82897BB0;
	sub_82842B48(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82897bcc
	if (ctx.cr6.eq) goto loc_82897BCC;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82897BCC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// bne 0x82897c14
	if (!ctx.cr0.eq) goto loc_82897C14;
	// bl 0x8283cdf8
	ctx.lr = 0x82897BDC;
	sub_8283CDF8(ctx, base);
	// lfs f0,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fmadds f2,f11,f0,f13
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmadds f1,f10,f0,f12
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x8309cf60
	ctx.lr = 0x82897C14;
	sub_8309CF60(ctx, base);
loc_82897C14:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82897C20"))) PPC_WEAK_FUNC(sub_82897C20);
PPC_FUNC_IMPL(__imp__sub_82897C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82897C28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lfs f2,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82843a18
	ctx.lr = 0x82897C4C;
	sub_82843A18(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82843880
	ctx.lr = 0x82897C58;
	sub_82843880(ctx, base);
	// clrlwi r9,r28,16
	ctx.r9.u64 = ctx.r28.u32 & 0xFFFF;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82897cd4
	if (!ctx.cr6.gt) goto loc_82897CD4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82897C68:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82897c88
	if (!ctx.cr6.lt) goto loc_82897C88;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82897c98
	goto loc_82897C98;
loc_82897C88:
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82897c98
	if (!ctx.cr6.gt) goto loc_82897C98;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82897C98:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82897cb0
	if (!ctx.cr6.lt) goto loc_82897CB0;
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x82897cc0
	goto loc_82897CC0;
loc_82897CB0:
	// lfs f13,4(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82897cc0
	if (!ctx.cr6.gt) goto loc_82897CC0;
	// stfs f0,4(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
loc_82897CC0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82897c68
	if (ctx.cr6.lt) goto loc_82897C68;
loc_82897CD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82897CDC"))) PPC_WEAK_FUNC(sub_82897CDC);
PPC_FUNC_IMPL(__imp__sub_82897CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82897CE0"))) PPC_WEAK_FUNC(sub_82897CE0);
PPC_FUNC_IMPL(__imp__sub_82897CE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82897dbc
	if (ctx.cr6.gt) goto loc_82897DBC;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82897dbc
	if (ctx.cr6.lt) goto loc_82897DBC;
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82897dbc
	if (ctx.cr6.gt) goto loc_82897DBC;
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82897dbc
	if (ctx.cr6.lt) goto loc_82897DBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82897d44
	if (!ctx.cr6.gt) goto loc_82897D44;
	// li r11,4
	ctx.r11.s64 = 4;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lfs f0,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82897D44:
	// stfs f0,4(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 4, temp.u32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82897d68
	if (!ctx.cr6.lt) goto loc_82897D68;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lfs f0,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82897D68:
	// stfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82897d8c
	if (!ctx.cr6.gt) goto loc_82897D8C;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lfs f0,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82897D8C:
	// stfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82897db0
	if (!ctx.cr6.lt) goto loc_82897DB0;
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82897DB0:
	// stfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82897DBC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82897DC4"))) PPC_WEAK_FUNC(sub_82897DC4);
PPC_FUNC_IMPL(__imp__sub_82897DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82897DC8"))) PPC_WEAK_FUNC(sub_82897DC8);
PPC_FUNC_IMPL(__imp__sub_82897DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82897de0
	if (!ctx.cr0.eq) goto loc_82897DE0;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// b 0x82fa77c0
	sub_82FA77C0(ctx, base);
	return;
loc_82897DE0:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82897e00
	if (ctx.cr0.eq) goto loc_82897E00;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82897e04
	goto loc_82897E04;
loc_82897E00:
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82897E04:
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82897e28
	if (ctx.cr0.eq) goto loc_82897E28;
	// lfs f13,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82897e2c
	goto loc_82897E2C;
loc_82897E28:
	// lfs f0,4(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82897E2C:
	// stfs f0,4(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 4, temp.u32);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82897e50
	if (ctx.cr0.eq) goto loc_82897E50;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82897e54
	goto loc_82897E54;
loc_82897E50:
	// lfs f0,8(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
loc_82897E54:
	// stfs f0,8(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 8, temp.u32);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82897e78
	if (ctx.cr0.eq) goto loc_82897E78;
	// lfs f13,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f13,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// b 0x82897e7c
	goto loc_82897E7C;
loc_82897E78:
	// lfs f0,12(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82897E7C:
	// stfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 12, temp.u32);
	// lfs f0,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 16, temp.u32);
	// lfs f0,20(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82897E94"))) PPC_WEAK_FUNC(sub_82897E94);
PPC_FUNC_IMPL(__imp__sub_82897E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82897E98"))) PPC_WEAK_FUNC(sub_82897E98);
PPC_FUNC_IMPL(__imp__sub_82897E98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82897EA0;
	__savegprlr_22(ctx, base);
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82fa8d14
	ctx.lr = 0x82897EA8;
	__savefpr_23(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f31,f3
	ctx.f31.f64 = ctx.f3.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lfs f23,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f23.f64 = double(temp.f32);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lfs f0,5180(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f23
	ctx.cr6.compare(ctx.f2.f64, ctx.f23.f64);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// beq cr6,0x82897efc
	if (ctx.cr6.eq) goto loc_82897EFC;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,21648(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21648);
	ctx.f13.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// blt cr6,0x82897f00
	if (ctx.cr6.lt) goto loc_82897F00;
loc_82897EFC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82897F00:
	// lwz r27,428(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r29,436(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stfs f0,0(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// clrlwi r26,r11,24
	ctx.r26.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8281d928
	ctx.lr = 0x82897F38;
	sub_8281D928(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828981f0
	if (ctx.cr0.eq) goto loc_828981F0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f24,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f24.f64 = double(temp.f32);
	// fdivs f1,f24,f0
	ctx.f1.f64 = double(float(ctx.f24.f64 / ctx.f0.f64));
	// bl 0x82842ac8
	ctx.lr = 0x82897F64;
	sub_82842AC8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f25,11704(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11704);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// blt cr6,0x82897f8c
	if (ctx.cr6.lt) goto loc_82897F8C;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fcmpu cr6,f13,f25
	ctx.cr6.compare(ctx.f13.f64, ctx.f25.f64);
	// bge cr6,0x82897f90
	if (!ctx.cr6.lt) goto loc_82897F90;
loc_82897F8C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82897F90:
	// fneg f13,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// fsubs f12,f0,f27
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82897fb4
	if (!ctx.cr6.lt) goto loc_82897FB4;
	// fadds f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f27.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// blt cr6,0x82897fb8
	if (ctx.cr6.lt) goto loc_82897FB8;
loc_82897FB4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82897FB8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8289810c
	if (!ctx.cr0.eq) goto loc_8289810C;
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8289810c
	if (!ctx.cr0.eq) goto loc_8289810C;
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82897fd8
	if (!ctx.cr6.eq) goto loc_82897FD8;
	// stfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82897FD8:
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x8283c560
	ctx.lr = 0x82897FE4;
	sub_8283C560(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f26,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f26.f64 = double(temp.f32);
	// fcmpu cr6,f1,f26
	ctx.cr6.compare(ctx.f1.f64, ctx.f26.f64);
	// blt cr6,0x828981f0
	if (ctx.cr6.lt) goto loc_828981F0;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828980e0
	if (!ctx.cr0.eq) goto loc_828980E0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82842aa0
	ctx.lr = 0x8289800C;
	sub_82842AA0(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x8283be18
	ctx.lr = 0x82898014;
	sub_8283BE18(ctx, base);
	// fmr f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,92
	ctx.r7.s64 = ctx.r1.s64 + 92;
	// lfs f29,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f29.f64 = double(temp.f32);
	// lfs f0,21492(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21492);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f28,f29
	ctx.f2.f64 = double(float(ctx.f28.f64 * ctx.f29.f64));
	// fmuls f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// fadds f4,f13,f31
	ctx.f4.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// fsubs f3,f13,f31
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// bl 0x8281ea68
	ctx.lr = 0x82898044;
	sub_8281EA68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828981f0
	if (ctx.cr0.eq) goto loc_828981F0;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// ble cr6,0x82898178
	if (!ctx.cr6.gt) goto loc_82898178;
	// fsubs f0,f24,f30
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f30.f64));
	// fcmpu cr6,f0,f26
	ctx.cr6.compare(ctx.f0.f64, ctx.f26.f64);
	// ble cr6,0x828980b0
	if (!ctx.cr6.gt) goto loc_828980B0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82842a60
	ctx.lr = 0x82898080;
	sub_82842A60(ctx, base);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fnmsubs f1,f0,f29,f13
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// bl 0x82851830
	ctx.lr = 0x82898098;
	sub_82851830(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82851740
	ctx.lr = 0x828980A8;
	sub_82851740(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x828980c4
	goto loc_828980C4;
loc_828980B0:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82842ed8
	ctx.lr = 0x828980C0;
	sub_82842ED8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_828980C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f1.f64 = double(temp.f32);
loc_828980CC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,420(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// bl 0x82842d78
	ctx.lr = 0x828980D8;
	sub_82842D78(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x828981f4
	goto loc_828981F4;
loc_828980E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lfs f30,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f30.f64 = double(temp.f32);
	// fmuls f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// bl 0x82842ed8
	ctx.lr = 0x82898100;
	sub_82842ED8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x828980cc
	goto loc_828980CC;
loc_8289810C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82898170
	if (ctx.cr6.eq) goto loc_82898170;
	// bne 0x82898174
	if (!ctx.cr0.eq) goto loc_82898174;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82898120:
	// stfs f28,0(r23)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82842ed8
	ctx.lr = 0x82898134;
	sub_82842ED8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,420(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f1,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82842d78
	ctx.lr = 0x8289814C;
	sub_82842D78(ctx, base);
	// stfs f27,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f28,f0
	ctx.f1.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// bl 0x8283bcf0
	ctx.lr = 0x82898160;
	sub_8283BCF0(ctx, base);
	// fmuls f0,f1,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f27.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x828981f4
	goto loc_828981F4;
loc_82898170:
	// beq 0x828981e8
	if (ctx.cr0.eq) goto loc_828981E8;
loc_82898174:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82898178:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828981f0
	if (ctx.cr0.eq) goto loc_828981F0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r4,420(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lfs f0,-2148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-2152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2152);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r23)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + 0, temp.u32);
	// fmuls f0,f27,f13
	ctx.f0.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// stfs f25,0(r27)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x82842b80
	ctx.lr = 0x828981AC;
	sub_82842B80(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f25
	ctx.cr6.compare(ctx.f0.f64, ctx.f25.f64);
	// ble cr6,0x828981cc
	if (!ctx.cr6.gt) goto loc_828981CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82842ed8
	ctx.lr = 0x828981C8;
	sub_82842ED8(ctx, base);
	// b 0x828981e0
	goto loc_828981E0;
loc_828981CC:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// fmr f3,f23
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f23.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f1,f23
	ctx.f1.f64 = ctx.f23.f64;
	// bl 0x82842de8
	ctx.lr = 0x828981E0;
	sub_82842DE8(ctx, base);
loc_828981E0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x828981f4
	goto loc_828981F4;
loc_828981E8:
	// li r31,-1
	ctx.r31.s64 = -1;
	// b 0x82898120
	goto loc_82898120;
loc_828981F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_828981F4:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-88
	ctx.r12.s64 = ctx.r1.s64 + -88;
	// bl 0x82fa8d60
	ctx.lr = 0x82898200;
	__restfpr_23(ctx, base);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898204"))) PPC_WEAK_FUNC(sub_82898204);
PPC_FUNC_IMPL(__imp__sub_82898204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898208"))) PPC_WEAK_FUNC(sub_82898208);
PPC_FUNC_IMPL(__imp__sub_82898208) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,14638
	ctx.r9.s64 = ctx.r10.s64 + 14638;
	// stb r11,14638(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14638, ctx.r11.u8);
	// stw r3,2(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2, ctx.r3.u32);
	// sth r4,-2(r9)
	PPC_STORE_U16(ctx.r9.u32 + -2, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898224"))) PPC_WEAK_FUNC(sub_82898224);
PPC_FUNC_IMPL(__imp__sub_82898224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898228"))) PPC_WEAK_FUNC(sub_82898228);
PPC_FUNC_IMPL(__imp__sub_82898228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lhz r3,14632(r11)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14632);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898234"))) PPC_WEAK_FUNC(sub_82898234);
PPC_FUNC_IMPL(__imp__sub_82898234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898238"))) PPC_WEAK_FUNC(sub_82898238);
PPC_FUNC_IMPL(__imp__sub_82898238) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r9,14632
	ctx.r8.s64 = ctx.r9.s64 + 14632;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,14632(r9)
	PPC_STORE_U16(ctx.r9.u32 + 14632, ctx.r10.u16);
	// stb r11,6(r8)
	PPC_STORE_U8(ctx.r8.u32 + 6, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898254"))) PPC_WEAK_FUNC(sub_82898254);
PPC_FUNC_IMPL(__imp__sub_82898254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898258"))) PPC_WEAK_FUNC(sub_82898258);
PPC_FUNC_IMPL(__imp__sub_82898258) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,14638(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14638, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898268"))) PPC_WEAK_FUNC(sub_82898268);
PPC_FUNC_IMPL(__imp__sub_82898268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lbz r3,14638(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14638);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898274"))) PPC_WEAK_FUNC(sub_82898274);
PPC_FUNC_IMPL(__imp__sub_82898274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898278"))) PPC_WEAK_FUNC(sub_82898278);
PPC_FUNC_IMPL(__imp__sub_82898278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82898280;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r10,r11,14632
	ctx.r10.s64 = ctx.r11.s64 + 14632;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lhz r11,14632(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14632);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x828982c8
	if (!ctx.cr0.gt) goto loc_828982C8;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
loc_828982AC:
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82898314
	if (ctx.cr6.eq) goto loc_82898314;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r31,r31,212
	ctx.r31.s64 = ctx.r31.s64 + 212;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828982ac
	if (ctx.cr6.lt) goto loc_828982AC;
loc_828982C8:
	// lhz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x8289830c
	if (!ctx.cr6.lt) goto loc_8289830C;
	// mulli r9,r11,212
	ctx.r9.s64 = ctx.r11.s64 * 212;
	// stwx r3,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r3.u32);
	// add r31,r9,r8
	ctx.r31.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r11.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x828982F4;
	sub_82FA77C0(ctx, base);
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82843880
	ctx.lr = 0x82898300;
	sub_82843880(ctx, base);
	// addi r4,r31,204
	ctx.r4.s64 = ctx.r31.s64 + 204;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82843880
	ctx.lr = 0x8289830C;
	sub_82843880(ctx, base);
loc_8289830C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82898314:
	// addi r5,r31,172
	ctx.r5.s64 = ctx.r31.s64 + 172;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x8288ff78
	ctx.lr = 0x82898320;
	sub_8288FF78(ctx, base);
	// addi r8,r31,204
	ctx.r8.s64 = ctx.r31.s64 + 204;
	// addi r7,r31,196
	ctx.r7.s64 = ctx.r31.s64 + 196;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x8288fff0
	ctx.lr = 0x8289833C;
	sub_8288FFF0(ctx, base);
	// b 0x8289830c
	goto loc_8289830C;
}

__attribute__((alias("__imp__sub_82898340"))) PPC_WEAK_FUNC(sub_82898340);
PPC_FUNC_IMPL(__imp__sub_82898340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82898348;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r30,r11,14632
	ctx.r30.s64 = ctx.r11.s64 + 14632;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lhz r11,14632(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828983b8
	if (ctx.cr0.eq) goto loc_828983B8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82898370:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r5,168
	ctx.r5.s64 = 168;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// addi r27,r28,4
	ctx.r27.s64 = ctx.r28.s64 + 4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8289838C;
	sub_82FA77C0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,240
	ctx.r5.s64 = 240;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r28,172
	ctx.r3.s64 = ctx.r28.s64 + 172;
	// bl 0x82896178
	ctx.lr = 0x828983A4;
	sub_82896178(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r29,r29,212
	ctx.r29.s64 = ctx.r29.s64 + 212;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82898370
	if (ctx.cr6.lt) goto loc_82898370;
loc_828983B8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828983C0"))) PPC_WEAK_FUNC(sub_828983C0);
PPC_FUNC_IMPL(__imp__sub_828983C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x828983C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82842a28
	ctx.lr = 0x828983E8;
	sub_82842A28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82842ac8
	ctx.lr = 0x828983FC;
	sub_82842AC8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82842b80
	ctx.lr = 0x82898408;
	sub_82842B80(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// lfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82842de8
	ctx.lr = 0x8289841C;
	sub_82842DE8(ctx, base);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lfs f2,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82842de8
	ctx.lr = 0x82898430;
	sub_82842DE8(ctx, base);
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// lfs f2,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f3,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// bl 0x82842de8
	ctx.lr = 0x82898444;
	sub_82842DE8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f3,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82842de8
	ctx.lr = 0x82898458;
	sub_82842DE8(ctx, base);
	// addi r3,r1,140
	ctx.r3.s64 = ctx.r1.s64 + 140;
	// lfs f3,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82842de8
	ctx.lr = 0x8289846C;
	sub_82842DE8(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lfs f3,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82842de8
	ctx.lr = 0x82898480;
	sub_82842DE8(ctx, base);
	// addi r4,r1,164
	ctx.r4.s64 = ctx.r1.s64 + 164;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82842b80
	ctx.lr = 0x8289848C;
	sub_82842B80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82843360
	ctx.lr = 0x82898498;
	sub_82843360(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r29,r1,92
	ctx.r29.s64 = ctx.r1.s64 + 92;
	// li r28,7
	ctx.r28.s64 = 7;
loc_828984A4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82843360
	ctx.lr = 0x828984B0;
	sub_82843360(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x828984c0
	if (!ctx.cr6.gt) goto loc_828984C0;
	// stfs f1,0(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
loc_828984C0:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// bne 0x828984a4
	if (!ctx.cr0.eq) goto loc_828984A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8283d550
	ctx.lr = 0x828984DC;
	sub_8283D550(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828984E4"))) PPC_WEAK_FUNC(sub_828984E4);
PPC_FUNC_IMPL(__imp__sub_828984E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828984E8"))) PPC_WEAK_FUNC(sub_828984E8);
PPC_FUNC_IMPL(__imp__sub_828984E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8288f858
	ctx.lr = 0x828984FC;
	sub_8288F858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82898750
	ctx.lr = 0x82898508;
	sub_82898750(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82896f10
	ctx.lr = 0x82898514;
	sub_82896F10(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lwz r5,148(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// beq cr6,0x82898558
	if (ctx.cr6.eq) goto loc_82898558;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x828983c0
	ctx.lr = 0x82898540;
	sub_828983C0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8281cc28
	ctx.lr = 0x82898554;
	sub_8281CC28(ctx, base);
	// b 0x8289856c
	goto loc_8289856C;
loc_82898558:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x8281d7c8
	ctx.lr = 0x8289856C;
	sub_8281D7C8(ctx, base);
loc_8289856C:
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898588"))) PPC_WEAK_FUNC(sub_82898588);
PPC_FUNC_IMPL(__imp__sub_82898588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82898590;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x8288f858
	ctx.lr = 0x82898598;
	sub_8288F858(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,14632
	ctx.r31.s64 = ctx.r11.s64 + 14632;
	// lhz r11,14632(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14632);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82898628
	if (ctx.cr6.eq) goto loc_82898628;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// beq 0x8289866c
	if (ctx.cr0.eq) goto loc_8289866C;
loc_828985C8:
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// lwz r5,148(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 148);
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// add r29,r30,r10
	ctx.r29.u64 = ctx.r30.u64 + ctx.r10.u64;
	// bl 0x828983c0
	ctx.lr = 0x828985EC;
	sub_828983C0(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// bl 0x8281cc28
	ctx.lr = 0x82898600;
	sub_8281CC28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82898620
	if (!ctx.cr0.eq) goto loc_82898620;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,212
	ctx.r30.s64 = ctx.r30.s64 + 212;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828985c8
	if (ctx.cr6.lt) goto loc_828985C8;
	// b 0x8289866c
	goto loc_8289866C;
loc_82898620:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82898670
	goto loc_82898670;
loc_82898628:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// beq 0x8289866c
	if (ctx.cr0.eq) goto loc_8289866C;
loc_82898630:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r11,144(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 144);
	// add r10,r30,r10
	ctx.r10.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r3,r10,4
	ctx.r3.s64 = ctx.r10.s64 + 4;
	// bl 0x8281d7c8
	ctx.lr = 0x82898650;
	sub_8281D7C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82898620
	if (!ctx.cr0.eq) goto loc_82898620;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,212
	ctx.r30.s64 = ctx.r30.s64 + 212;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82898630
	if (ctx.cr6.lt) goto loc_82898630;
loc_8289866C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82898670:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898678"))) PPC_WEAK_FUNC(sub_82898678);
PPC_FUNC_IMPL(__imp__sub_82898678) {
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
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r31,r11,31988
	ctx.r31.s64 = ctx.r11.s64 + 31988;
	// lwz r11,31988(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31988);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x828986e4
	if (!ctx.cr6.eq) goto loc_828986E4;
	// bl 0x831791d4
	ctx.lr = 0x828986A0;
	__imp__KeTlsAlloc(ctx, base);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_828986A8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x828986cc
	if (!ctx.cr6.eq) goto loc_828986CC;
	// stwcx. r3,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x828986a8
	if (!ctx.cr0.eq) goto loc_828986A8;
	// b 0x828986d4
	goto loc_828986D4;
loc_828986CC:
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_828986D4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x828986e4
	if (ctx.cr6.eq) goto loc_828986E4;
	// bl 0x831791f4
	ctx.lr = 0x828986E4;
	__imp__KeTlsFree(ctx, base);
loc_828986E4:
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

__attribute__((alias("__imp__sub_828986FC"))) PPC_WEAK_FUNC(sub_828986FC);
PPC_FUNC_IMPL(__imp__sub_828986FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898700"))) PPC_WEAK_FUNC(sub_82898700);
PPC_FUNC_IMPL(__imp__sub_82898700) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898714"))) PPC_WEAK_FUNC(sub_82898714);
PPC_FUNC_IMPL(__imp__sub_82898714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898718"))) PPC_WEAK_FUNC(sub_82898718);
PPC_FUNC_IMPL(__imp__sub_82898718) {
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
	// bl 0x82898678
	ctx.lr = 0x82898730;
	sub_82898678(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83179204
	ctx.lr = 0x82898738;
	__imp__KeTlsSetValue(ctx, base);
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

__attribute__((alias("__imp__sub_8289874C"))) PPC_WEAK_FUNC(sub_8289874C);
PPC_FUNC_IMPL(__imp__sub_8289874C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898750"))) PPC_WEAK_FUNC(sub_82898750);
PPC_FUNC_IMPL(__imp__sub_82898750) {
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
	// bl 0x82898678
	ctx.lr = 0x82898768;
	sub_82898678(ctx, base);
	// bl 0x831791e4
	ctx.lr = 0x8289876C;
	__imp__KeTlsGetValue(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82898784"))) PPC_WEAK_FUNC(sub_82898784);
PPC_FUNC_IMPL(__imp__sub_82898784) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898788"))) PPC_WEAK_FUNC(sub_82898788);
PPC_FUNC_IMPL(__imp__sub_82898788) {
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
	// bl 0x82898678
	ctx.lr = 0x828987A0;
	sub_82898678(ctx, base);
	// bl 0x831791e4
	ctx.lr = 0x828987A4;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82896990
	ctx.lr = 0x828987AC;
	sub_82896990(ctx, base);
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

__attribute__((alias("__imp__sub_828987C0"))) PPC_WEAK_FUNC(sub_828987C0);
PPC_FUNC_IMPL(__imp__sub_828987C0) {
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
	// bl 0x82898678
	ctx.lr = 0x828987D8;
	sub_82898678(ctx, base);
	// bl 0x831791e4
	ctx.lr = 0x828987DC;
	__imp__KeTlsGetValue(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82895f78
	ctx.lr = 0x828987E4;
	sub_82895F78(ctx, base);
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

__attribute__((alias("__imp__sub_828987F8"))) PPC_WEAK_FUNC(sub_828987F8);
PPC_FUNC_IMPL(__imp__sub_828987F8) {
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
	// bl 0x82898678
	ctx.lr = 0x82898808;
	sub_82898678(ctx, base);
	// bl 0x831791e4
	ctx.lr = 0x8289880C;
	__imp__KeTlsGetValue(ctx, base);
	// bl 0x82899758
	ctx.lr = 0x82898810;
	sub_82899758(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898820"))) PPC_WEAK_FUNC(sub_82898820);
PPC_FUNC_IMPL(__imp__sub_82898820) {
	PPC_FUNC_PROLOGUE();
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898834"))) PPC_WEAK_FUNC(sub_82898834);
PPC_FUNC_IMPL(__imp__sub_82898834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898838"))) PPC_WEAK_FUNC(sub_82898838);
PPC_FUNC_IMPL(__imp__sub_82898838) {
	PPC_FUNC_PROLOGUE();
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898840"))) PPC_WEAK_FUNC(sub_82898840);
PPC_FUNC_IMPL(__imp__sub_82898840) {
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
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r10,-2144
	ctx.r30.s64 = ctx.r10.s64 + -2144;
	// addi r11,r3,11
	ctx.r11.s64 = ctx.r3.s64 + 11;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82898868:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8289888c
	if (ctx.cr0.eq) goto loc_8289888C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82898868
	if (ctx.cr6.eq) goto loc_82898868;
loc_8289888C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x828988ac
	if (!ctx.cr0.eq) goto loc_828988AC;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x828988e4
	goto loc_828988E4;
loc_828988AC:
	// addi r4,r30,16
	ctx.r4.s64 = ctx.r30.s64 + 16;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x828498e0
	ctx.lr = 0x828988B8;
	sub_828498E0(ctx, base);
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x828498e0
	ctx.lr = 0x828988C8;
	sub_828498E0(ctx, base);
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r30,3
	ctx.r10.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828988E4:
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

__attribute__((alias("__imp__sub_828988FC"))) PPC_WEAK_FUNC(sub_828988FC);
PPC_FUNC_IMPL(__imp__sub_828988FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898900"))) PPC_WEAK_FUNC(sub_82898900);
PPC_FUNC_IMPL(__imp__sub_82898900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82898908;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r27,r3,11
	ctx.r27.s64 = ctx.r3.s64 + 11;
	// addi r28,r11,-2072
	ctx.r28.s64 = ctx.r11.s64 + -2072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r28,-40
	ctx.r10.s64 = ctx.r28.s64 + -40;
loc_82898928:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x8289894c
	if (ctx.cr0.eq) goto loc_8289894C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82898928
	if (ctx.cr6.eq) goto loc_82898928;
loc_8289894C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82898974
	if (ctx.cr0.eq) goto loc_82898974;
	// lis r11,-32006
	ctx.r11.s64 = -2097545216;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r10,-32006
	ctx.r10.s64 = -2097545216;
	// addi r4,r28,-24
	ctx.r4.s64 = ctx.r28.s64 + -24;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r11,30656
	ctx.r6.s64 = ctx.r11.s64 + 30656;
	// addi r5,r10,31984
	ctx.r5.s64 = ctx.r10.s64 + 31984;
	// bl 0x82849890
	ctx.lr = 0x82898974;
	sub_82849890(ctx, base);
loc_82898974:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82897468
	ctx.lr = 0x82898980;
	sub_82897468(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82898a18
	if (!ctx.cr6.gt) goto loc_82898A18;
loc_82898998:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82897148
	ctx.lr = 0x828989A8;
	sub_82897148(ctx, base);
	// addi r10,r28,-16
	ctx.r10.s64 = ctx.r28.s64 + -16;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_828989B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x828989d4
	if (ctx.cr0.eq) goto loc_828989D4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x828989b0
	if (ctx.cr6.eq) goto loc_828989B0;
loc_828989D4:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x828989fc
	if (ctx.cr0.eq) goto loc_828989FC;
	// lis r11,-32006
	ctx.r11.s64 = -2097545216;
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lis r10,-32006
	ctx.r10.s64 = -2097545216;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r6,r11,30656
	ctx.r6.s64 = ctx.r11.s64 + 30656;
	// addi r5,r10,31984
	ctx.r5.s64 = ctx.r10.s64 + 31984;
	// bl 0x82849890
	ctx.lr = 0x828989FC;
	sub_82849890(ctx, base);
loc_828989FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82897760
	ctx.lr = 0x82898A08;
	sub_82897760(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82898998
	if (ctx.cr6.lt) goto loc_82898998;
loc_82898A18:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82897148
	ctx.lr = 0x82898A28;
	sub_82897148(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898A30"))) PPC_WEAK_FUNC(sub_82898A30);
PPC_FUNC_IMPL(__imp__sub_82898A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82898A38;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r26,r11,14644
	ctx.r26.s64 = ctx.r11.s64 + 14644;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lfs f1,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x828971f8
	ctx.lr = 0x82898A6C;
	sub_828971F8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x828971f8
	ctx.lr = 0x82898A88;
	sub_828971F8(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lfs f1,8(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828971f8
	ctx.lr = 0x82898AA4;
	sub_828971F8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842b48
	ctx.lr = 0x82898AB4;
	sub_82842B48(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82842b48
	ctx.lr = 0x82898AC4;
	sub_82842B48(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82842a60
	ctx.lr = 0x82898AD4;
	sub_82842A60(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898ADC"))) PPC_WEAK_FUNC(sub_82898ADC);
PPC_FUNC_IMPL(__imp__sub_82898ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898AE0"))) PPC_WEAK_FUNC(sub_82898AE0);
PPC_FUNC_IMPL(__imp__sub_82898AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82898AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82842ec0
	ctx.lr = 0x82898AFC;
	sub_82842EC0(ctx, base);
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82898b50
	if (!ctx.cr0.gt) goto loc_82898B50;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r28,r11,14644
	ctx.r28.s64 = ctx.r11.s64 + 14644;
loc_82898B14:
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// lfs f1,8(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x828971f8
	ctx.lr = 0x82898B2C;
	sub_828971F8(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82842a28
	ctx.lr = 0x82898B3C;
	sub_82842A28(ctx, base);
	// lhz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82898b14
	if (ctx.cr6.lt) goto loc_82898B14;
loc_82898B50:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x8283cdf8
	ctx.lr = 0x82898B68;
	sub_8283CDF8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82842ac8
	ctx.lr = 0x82898B74;
	sub_82842AC8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898B7C"))) PPC_WEAK_FUNC(sub_82898B7C);
PPC_FUNC_IMPL(__imp__sub_82898B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898B80"))) PPC_WEAK_FUNC(sub_82898B80);
PPC_FUNC_IMPL(__imp__sub_82898B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82898B88;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,2
	ctx.r31.s64 = 2;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// ble cr6,0x82898c00
	if (!ctx.cr6.gt) goto loc_82898C00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f31.f64 = double(temp.f32);
loc_82898BBC:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r31,-1
	ctx.r6.s64 = ctx.r31.s64 + -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82898a30
	ctx.lr = 0x82898BD4;
	sub_82898A30(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82843408
	ctx.lr = 0x82898BDC;
	sub_82843408(ctx, base);
	// bl 0x8283c4d0
	ctx.lr = 0x82898BE0;
	sub_8283C4D0(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f31,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f31.f64 + ctx.f0.f64));
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r31,r4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82898bbc
	if (ctx.cr6.lt) goto loc_82898BBC;
loc_82898C00:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898C0C"))) PPC_WEAK_FUNC(sub_82898C0C);
PPC_FUNC_IMPL(__imp__sub_82898C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898C10"))) PPC_WEAK_FUNC(sub_82898C10);
PPC_FUNC_IMPL(__imp__sub_82898C10) {
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
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82898a30
	ctx.lr = 0x82898C40;
	sub_82898A30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82842c90
	ctx.lr = 0x82898C48;
	sub_82842C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82898c5c
	if (!ctx.cr0.eq) goto loc_82898C5C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82843398
	ctx.lr = 0x82898C5C;
	sub_82843398(ctx, base);
loc_82898C5C:
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

__attribute__((alias("__imp__sub_82898C70"))) PPC_WEAK_FUNC(sub_82898C70);
PPC_FUNC_IMPL(__imp__sub_82898C70) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// b 0x82842b80
	sub_82842B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898C78"))) PPC_WEAK_FUNC(sub_82898C78);
PPC_FUNC_IMPL(__imp__sub_82898C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82898C84"))) PPC_WEAK_FUNC(sub_82898C84);
PPC_FUNC_IMPL(__imp__sub_82898C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898C88"))) PPC_WEAK_FUNC(sub_82898C88);
PPC_FUNC_IMPL(__imp__sub_82898C88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,28
	ctx.r3.s64 = ctx.r3.s64 + 28;
	// b 0x82842b80
	sub_82842B80(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898C90"))) PPC_WEAK_FUNC(sub_82898C90);
PPC_FUNC_IMPL(__imp__sub_82898C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82898C98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r31,r11,14644
	ctx.r31.s64 = ctx.r11.s64 + 14644;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828971f8
	ctx.lr = 0x82898CC8;
	sub_828971F8(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x82842b48
	ctx.lr = 0x82898CD8;
	sub_82842B48(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82842aa0
	ctx.lr = 0x82898CE4;
	sub_82842AA0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82898d08
	if (!ctx.cr6.gt) goto loc_82898D08;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82842d50
	ctx.lr = 0x82898D00;
	sub_82842D50(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82898d0c
	goto loc_82898D0C;
loc_82898D08:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82898D0C:
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898D18"))) PPC_WEAK_FUNC(sub_82898D18);
PPC_FUNC_IMPL(__imp__sub_82898D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82898D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82898d68
	if (ctx.cr6.lt) goto loc_82898D68;
	// bne cr6,0x82898d88
	if (!ctx.cr6.eq) goto loc_82898D88;
	// addi r3,r3,12
	ctx.r3.s64 = ctx.r3.s64 + 12;
	// bl 0x82842b80
	ctx.lr = 0x82898D50;
	sub_82842B80(ctx, base);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x82842b80
	ctx.lr = 0x82898D64;
	sub_82842B80(ctx, base);
	// b 0x82898d88
	goto loc_82898D88;
loc_82898D68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82898ae0
	ctx.lr = 0x82898D70;
	sub_82898AE0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82898b80
	ctx.lr = 0x82898D7C;
	sub_82898B80(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82898c10
	ctx.lr = 0x82898D88;
	sub_82898C10(ctx, base);
loc_82898D88:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82898c90
	ctx.lr = 0x82898D98;
	sub_82898C90(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898DA0"))) PPC_WEAK_FUNC(sub_82898DA0);
PPC_FUNC_IMPL(__imp__sub_82898DA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82898DA8;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,14644
	ctx.r30.s64 = ctx.r11.s64 + 14644;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82842b48
	ctx.lr = 0x82898DD8;
	sub_82842B48(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82843408
	ctx.lr = 0x82898DE0;
	sub_82843408(ctx, base);
	// fmuls f1,f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f1.f64));
	// bl 0x8283cdf8
	ctx.lr = 0x82898DE8;
	sub_8283CDF8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82898e48
	if (ctx.cr6.lt) goto loc_82898E48;
	// beq cr6,0x82898e04
	if (ctx.cr6.eq) goto loc_82898E04;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82898e4c
	goto loc_82898E4C;
loc_82898E04:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x82842b80
	ctx.lr = 0x82898E10;
	sub_82842B80(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842c90
	ctx.lr = 0x82898E18;
	sub_82842C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82898e2c
	if (!ctx.cr0.eq) goto loc_82898E2C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82843398
	ctx.lr = 0x82898E2C;
	sub_82843398(ctx, base);
loc_82898E2C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82842aa0
	ctx.lr = 0x82898E38;
	sub_82842AA0(ctx, base);
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// b 0x82898e4c
	goto loc_82898E4C;
loc_82898E48:
	// fmuls f1,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
loc_82898E4C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898E5C"))) PPC_WEAK_FUNC(sub_82898E5C);
PPC_FUNC_IMPL(__imp__sub_82898E5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898E60"))) PPC_WEAK_FUNC(sub_82898E60);
PPC_FUNC_IMPL(__imp__sub_82898E60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,14644
	ctx.r11.s64 = ctx.r11.s64 + 14644;
	// addi r3,r11,24
	ctx.r3.s64 = ctx.r11.s64 + 24;
	// b 0x828512b0
	sub_828512B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898E74"))) PPC_WEAK_FUNC(sub_82898E74);
PPC_FUNC_IMPL(__imp__sub_82898E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82898E78"))) PPC_WEAK_FUNC(sub_82898E78);
PPC_FUNC_IMPL(__imp__sub_82898E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82898E80;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d28
	ctx.lr = 0x82898E88;
	__savefpr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82898ed4
	if (ctx.cr6.lt) goto loc_82898ED4;
	// bne cr6,0x82898fd0
	if (!ctx.cr6.eq) goto loc_82898FD0;
	// lfs f31,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// stfs f31,0(r6)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f30,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// addi r11,r11,14644
	ctx.r11.s64 = ctx.r11.s64 + 14644;
	// stfs f30,4(r6)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// lfs f29,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f29.f64 = double(temp.f32);
	// stfs f29,8(r6)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82898fa8
	goto loc_82898FA8;
loc_82898ED4:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,14644
	ctx.r31.s64 = ctx.r11.s64 + 14644;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fneg f31,f0
	ctx.f31.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fneg f30,f0
	ctx.f30.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f30,4(r29)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r29.u32 + 4, temp.u32);
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fneg f29,f0
	ctx.f29.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f29,8(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 8, temp.u32);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828971f8
	ctx.lr = 0x82898F1C;
	sub_828971F8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f28,f12,f31,f0
	ctx.f28.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// ble cr6,0x82898f9c
	if (!ctx.cr6.gt) goto loc_82898F9C;
loc_82898F48:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828971f8
	ctx.lr = 0x82898F60;
	sub_828971F8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x82898f88
	if (!ctx.cr6.lt) goto loc_82898F88;
	// fmr f28,f0
	ctx.f28.f64 = ctx.f0.f64;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82898F88:
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r28,r4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82898f48
	if (ctx.cr6.lt) goto loc_82898F48;
loc_82898F9C:
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
loc_82898FA8:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828971f8
	ctx.lr = 0x82898FB4;
	sub_828971F8(ctx, base);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f29,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f29.f64 + ctx.f0.f64));
	// fmadds f0,f12,f31,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
loc_82898FD0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d74
	ctx.lr = 0x82898FDC;
	__restfpr_28(ctx, base);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82898FE0"))) PPC_WEAK_FUNC(sub_82898FE0);
PPC_FUNC_IMPL(__imp__sub_82898FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82898FE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lhz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// addi r31,r11,14644
	ctx.r31.s64 = ctx.r11.s64 + 14644;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x828971f8
	ctx.lr = 0x8289901C;
	sub_828971F8(ctx, base);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// mr. r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82899110
	if (!ctx.cr0.gt) goto loc_82899110;
	// clrlwi r27,r29,24
	ctx.r27.u64 = ctx.r29.u32 & 0xFF;
	// li r29,1
	ctx.r29.s64 = 1;
	// addi r28,r28,-4
	ctx.r28.s64 = ctx.r28.s64 + -4;
loc_82899034:
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 & ctx.r29.u64;
	// bl 0x828971f8
	ctx.lr = 0x82899058;
	sub_828971F8(ctx, base);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// bl 0x82842b48
	ctx.lr = 0x82899068;
	sub_82842B48(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82842b48
	ctx.lr = 0x82899078;
	sub_82842B48(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82842a60
	ctx.lr = 0x82899088;
	sub_82842A60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842c90
	ctx.lr = 0x82899090;
	sub_82842C90(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828990a4
	if (!ctx.cr0.eq) goto loc_828990A4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82843398
	ctx.lr = 0x828990A4;
	sub_82843398(ctx, base);
loc_828990A4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828990b8
	if (ctx.cr6.eq) goto loc_828990B8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842d50
	ctx.lr = 0x828990B8;
	sub_82842D50(ctx, base);
loc_828990B8:
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,4(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 4, temp.u32);
	// stfs f13,8(r28)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r28.u32 + 8, temp.u32);
	// stfs f12,12(r28)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// lfs f11,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lfs f13,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f13,f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lfs f11,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f0,f11,f0,f13
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsu f0,16(r28)
	temp.f32 = float(ctx.f0.f64);
	ea = 16 + ctx.r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// bl 0x82842b80
	ctx.lr = 0x828990F8;
	sub_82842B80(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// addi r10,r29,-1
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82899034
	if (ctx.cr6.lt) goto loc_82899034;
loc_82899110:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899118"))) PPC_WEAK_FUNC(sub_82899118);
PPC_FUNC_IMPL(__imp__sub_82899118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82899120;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rotlwi r11,r11,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 4);
	// addi r10,r10,14644
	ctx.r10.s64 = ctx.r10.s64 + 14644;
	// add r31,r11,r7
	ctx.r31.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r3,r10,24
	ctx.r3.s64 = ctx.r10.s64 + 24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x828512b0
	ctx.lr = 0x82899158;
	sub_828512B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r6,r31,16
	ctx.r6.s64 = ctx.r31.s64 + 16;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82898e78
	ctx.lr = 0x8289916C;
	sub_82898E78(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82898fe0
	ctx.lr = 0x8289917C;
	sub_82898FE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899184"))) PPC_WEAK_FUNC(sub_82899184);
PPC_FUNC_IMPL(__imp__sub_82899184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899188"))) PPC_WEAK_FUNC(sub_82899188);
PPC_FUNC_IMPL(__imp__sub_82899188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82899190;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82898d18
	ctx.lr = 0x828991B4;
	sub_82898D18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// bl 0x82898da0
	ctx.lr = 0x828991C8;
	sub_82898DA0(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82899118
	ctx.lr = 0x828991E0;
	sub_82899118(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828991E8"))) PPC_WEAK_FUNC(sub_828991E8);
PPC_FUNC_IMPL(__imp__sub_828991E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x828991F0;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// sth r23,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r23.u16);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r23,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r23.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828992d0
	if (ctx.cr0.eq) goto loc_828992D0;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// addi r26,r11,14644
	ctx.r26.s64 = ctx.r11.s64 + 14644;
	// lfs f31,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82899238:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r31,r27,r11
	ctx.r31.u64 = ctx.r27.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828970e0
	ctx.lr = 0x8289924C;
	sub_828970E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r26,12
	ctx.r4.s64 = ctx.r26.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82842b48
	ctx.lr = 0x82899260;
	sub_82842B48(ctx, base);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82842aa0
	ctx.lr = 0x8289926C;
	sub_82842AA0(ctx, base);
	// addi r4,r31,36
	ctx.r4.s64 = ctx.r31.s64 + 36;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82842aa0
	ctx.lr = 0x8289927C;
	sub_82842AA0(ctx, base);
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// bgt cr6,0x8289928c
	if (ctx.cr6.gt) goto loc_8289928C;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8289929c
	if (ctx.cr6.gt) goto loc_8289929C;
loc_8289928C:
	// fcmpu cr6,f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f31.f64);
	// ble cr6,0x828992b8
	if (!ctx.cr6.gt) goto loc_828992B8;
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x828992b8
	if (ctx.cr6.gt) goto loc_828992B8;
loc_8289929C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r25)
	PPC_STORE_U16(ctx.r25.u32 + 0, ctx.r11.u16);
	// b 0x828992bc
	goto loc_828992BC;
loc_828992B8:
	// stb r23,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r23.u8);
loc_828992BC:
	// lhz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,52
	ctx.r27.s64 = ctx.r27.s64 + 52;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82899238
	if (ctx.cr6.lt) goto loc_82899238;
loc_828992D0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828992E0"))) PPC_WEAK_FUNC(sub_828992E0);
PPC_FUNC_IMPL(__imp__sub_828992E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x828992E8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82899480
	if (ctx.cr0.eq) goto loc_82899480;
	// sth r5,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r5.u16);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mulli r9,r6,52
	ctx.r9.s64 = ctx.r6.s64 * 52;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r11,14644
	ctx.r31.s64 = ctx.r11.s64 + 14644;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828972a8
	ctx.lr = 0x82899338;
	sub_828972A8(ctx, base);
	// addi r8,r29,12
	ctx.r8.s64 = ctx.r29.s64 + 12;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828972a8
	ctx.lr = 0x82899354;
	sub_828972A8(ctx, base);
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82899480
	if (!ctx.cr6.gt) goto loc_82899480;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_8289936C:
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82899474
	if (!ctx.cr6.gt) goto loc_82899474;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8289937C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r28,r26,r11
	ctx.r28.u64 = ctx.r26.u64 + ctx.r11.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828970e0
	ctx.lr = 0x82899390;
	sub_828970E0(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82899438
	if (ctx.cr0.eq) goto loc_82899438;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r29,-2
	ctx.r7.s64 = ctx.r29.s64 + -2;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828971f8
	ctx.lr = 0x828993B8;
	sub_828971F8(ctx, base);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r29,-1
	ctx.r7.s64 = ctx.r29.s64 + -1;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828971f8
	ctx.lr = 0x828993D4;
	sub_828971F8(ctx, base);
	// addi r27,r28,12
	ctx.r27.s64 = ctx.r28.s64 + 12;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82842ba0
	ctx.lr = 0x828993E8;
	sub_82842BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82899408
	if (!ctx.cr0.eq) goto loc_82899408;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82842ba0
	ctx.lr = 0x82899400;
	sub_82842BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8289944c
	if (!ctx.cr0.eq) goto loc_8289944C;
loc_82899408:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82842ba0
	ctx.lr = 0x82899418;
	sub_82842BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82899438
	if (!ctx.cr0.eq) goto loc_82899438;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82842ba0
	ctx.lr = 0x82899430;
	sub_82842BA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82899454
	if (!ctx.cr0.eq) goto loc_82899454;
loc_82899438:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,52
	ctx.r26.s64 = ctx.r26.s64 + 52;
	// cmpw cr6,r25,r23
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x8289937c
	if (ctx.cr6.lt) goto loc_8289937C;
	// b 0x82899474
	goto loc_82899474;
loc_8289944C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// b 0x82899458
	goto loc_82899458;
loc_82899454:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82899458:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lfs f1,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x828972a8
	ctx.lr = 0x82899470;
	sub_828972A8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82899474:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8289936c
	if (ctx.cr6.lt) goto loc_8289936C;
loc_82899480:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289948C"))) PPC_WEAK_FUNC(sub_8289948C);
PPC_FUNC_IMPL(__imp__sub_8289948C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899490"))) PPC_WEAK_FUNC(sub_82899490);
PPC_FUNC_IMPL(__imp__sub_82899490) {
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
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828991e8
	ctx.lr = 0x828994B0;
	sub_828991E8(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14644);
	// bl 0x828970f0
	ctx.lr = 0x828994C0;
	sub_828970F0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// bl 0x828992e0
	ctx.lr = 0x828994D4;
	sub_828992E0(ctx, base);
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

__attribute__((alias("__imp__sub_828994E8"))) PPC_WEAK_FUNC(sub_828994E8);
PPC_FUNC_IMPL(__imp__sub_828994E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x828994F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82897138
	ctx.lr = 0x828994FC;
	sub_82897138(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,14644
	ctx.r31.s64 = ctx.r11.s64 + 14644;
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// stw r30,14644(r11)
	PPC_STORE_U32(ctx.r11.u32 + 14644, ctx.r30.u32);
	// bl 0x82842b80
	ctx.lr = 0x82899514;
	sub_82842B80(ctx, base);
	// addi r11,r31,24
	ctx.r11.s64 = ctx.r31.s64 + 24;
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899540"))) PPC_WEAK_FUNC(sub_82899540);
PPC_FUNC_IMPL(__imp__sub_82899540) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,14644(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14644);
	// bl 0x82897110
	ctx.lr = 0x82899560;
	sub_82897110(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82899188
	ctx.lr = 0x82899574;
	sub_82899188(ctx, base);
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

__attribute__((alias("__imp__sub_82899588"))) PPC_WEAK_FUNC(sub_82899588);
PPC_FUNC_IMPL(__imp__sub_82899588) {
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
	// bl 0x82899490
	ctx.lr = 0x828995A4;
	sub_82899490(ctx, base);
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,14644(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14644);
	// bl 0x828970f0
	ctx.lr = 0x828995B4;
	sub_828970F0(ctx, base);
	// lwz r4,14644(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 14644);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82897110
	ctx.lr = 0x828995C0;
	sub_82897110(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828995ec
	if (ctx.cr0.eq) goto loc_828995EC;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82899188
	ctx.lr = 0x828995E0;
	sub_82899188(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x828995f0
	goto loc_828995F0;
loc_828995EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_828995F0:
	// sth r11,8(r30)
	PPC_STORE_U16(ctx.r30.u32 + 8, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_8289960C"))) PPC_WEAK_FUNC(sub_8289960C);
PPC_FUNC_IMPL(__imp__sub_8289960C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899610"))) PPC_WEAK_FUNC(sub_82899610);
PPC_FUNC_IMPL(__imp__sub_82899610) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82899618;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828994e8
	ctx.lr = 0x82899624;
	sub_828994E8(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,14644
	ctx.r30.s64 = ctx.r11.s64 + 14644;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82899670
	if (ctx.cr0.eq) goto loc_82899670;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82899650:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// bl 0x82899540
	ctx.lr = 0x8289965C;
	sub_82899540(ctx, base);
	// lhz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 56);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,44
	ctx.r28.s64 = ctx.r28.s64 + 44;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82899650
	if (ctx.cr6.lt) goto loc_82899650;
loc_82899670:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828996b8
	if (ctx.cr0.eq) goto loc_828996B8;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82899698:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82899588
	ctx.lr = 0x828996A4;
	sub_82899588(ctx, base);
	// lhz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 64);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82899698
	if (ctx.cr6.lt) goto loc_82899698;
loc_828996B8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828996C0"))) PPC_WEAK_FUNC(sub_828996C0);
PPC_FUNC_IMPL(__imp__sub_828996C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,236(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// lfs f12,228(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,232(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f12,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f12.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,248(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// bl 0x82665e80
	ctx.lr = 0x8289973C;
	sub_82665E80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289974C"))) PPC_WEAK_FUNC(sub_8289974C);
PPC_FUNC_IMPL(__imp__sub_8289974C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899750"))) PPC_WEAK_FUNC(sub_82899750);
PPC_FUNC_IMPL(__imp__sub_82899750) {
	PPC_FUNC_PROLOGUE();
	// b 0x828996c0
	sub_828996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899754"))) PPC_WEAK_FUNC(sub_82899754);
PPC_FUNC_IMPL(__imp__sub_82899754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899758"))) PPC_WEAK_FUNC(sub_82899758);
PPC_FUNC_IMPL(__imp__sub_82899758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r4,-13544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13544);
	// b 0x828996c0
	sub_828996C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899764"))) PPC_WEAK_FUNC(sub_82899764);
PPC_FUNC_IMPL(__imp__sub_82899764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899768"))) PPC_WEAK_FUNC(sub_82899768);
PPC_FUNC_IMPL(__imp__sub_82899768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82899780"))) PPC_WEAK_FUNC(sub_82899780);
PPC_FUNC_IMPL(__imp__sub_82899780) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82899798"))) PPC_WEAK_FUNC(sub_82899798);
PPC_FUNC_IMPL(__imp__sub_82899798) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828997A0"))) PPC_WEAK_FUNC(sub_828997A0);
PPC_FUNC_IMPL(__imp__sub_828997A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
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

__attribute__((alias("__imp__sub_828997B0"))) PPC_WEAK_FUNC(sub_828997B0);
PPC_FUNC_IMPL(__imp__sub_828997B0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822402c8
	ctx.lr = 0x828997E8;
	sub_822402C8(ctx, base);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82899808"))) PPC_WEAK_FUNC(sub_82899808);
PPC_FUNC_IMPL(__imp__sub_82899808) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822402c8
	ctx.lr = 0x82899838;
	sub_822402C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82899858"))) PPC_WEAK_FUNC(sub_82899858);
PPC_FUNC_IMPL(__imp__sub_82899858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x822402c8
	sub_822402C8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899874"))) PPC_WEAK_FUNC(sub_82899874);
PPC_FUNC_IMPL(__imp__sub_82899874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899878"))) PPC_WEAK_FUNC(sub_82899878);
PPC_FUNC_IMPL(__imp__sub_82899878) {
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
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8224d3e0
	ctx.lr = 0x82899894;
	sub_8224D3E0(ctx, base);
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

__attribute__((alias("__imp__sub_828998AC"))) PPC_WEAK_FUNC(sub_828998AC);
PPC_FUNC_IMPL(__imp__sub_828998AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828998B0"))) PPC_WEAK_FUNC(sub_828998B0);
PPC_FUNC_IMPL(__imp__sub_828998B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x8224d3e0
	ctx.lr = 0x828998E0;
	sub_8224D3E0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x828998f4
	if (ctx.cr6.lt) goto loc_828998F4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x828998f8
	goto loc_828998F8;
loc_828998F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_828998F8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822400d8
	ctx.lr = 0x82899900;
	sub_822400D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289a048
	ctx.lr = 0x82899908;
	sub_8289A048(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289991C;
	sub_822402C8(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8289992c
	if (!ctx.cr6.eq) goto loc_8289992C;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_8289992C:
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

__attribute__((alias("__imp__sub_82899948"))) PPC_WEAK_FUNC(sub_82899948);
PPC_FUNC_IMPL(__imp__sub_82899948) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-2060
	ctx.r11.s64 = ctx.r11.s64 + -2060;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x822400d8
	ctx.lr = 0x82899978;
	sub_822400D8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822400d8
	ctx.lr = 0x82899984;
	sub_822400D8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289a048
	ctx.lr = 0x8289998C;
	sub_8289A048(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x828999A0;
	sub_822402C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828999b0
	if (!ctx.cr6.eq) goto loc_828999B0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_828999B0:
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

__attribute__((alias("__imp__sub_828999CC"))) PPC_WEAK_FUNC(sub_828999CC);
PPC_FUNC_IMPL(__imp__sub_828999CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828999D0"))) PPC_WEAK_FUNC(sub_828999D0);
PPC_FUNC_IMPL(__imp__sub_828999D0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-2020
	ctx.r11.s64 = ctx.r11.s64 + -2020;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x828999fc
	if (ctx.cr0.eq) goto loc_828999FC;
	// bl 0x82691540
	ctx.lr = 0x828999FC;
	sub_82691540(ctx, base);
loc_828999FC:
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

__attribute__((alias("__imp__sub_82899A14"))) PPC_WEAK_FUNC(sub_82899A14);
PPC_FUNC_IMPL(__imp__sub_82899A14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899A18"))) PPC_WEAK_FUNC(sub_82899A18);
PPC_FUNC_IMPL(__imp__sub_82899A18) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1940
	ctx.r11.s64 = ctx.r11.s64 + -1940;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82899a44
	if (ctx.cr0.eq) goto loc_82899A44;
	// bl 0x82691540
	ctx.lr = 0x82899A44;
	sub_82691540(ctx, base);
loc_82899A44:
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

__attribute__((alias("__imp__sub_82899A5C"))) PPC_WEAK_FUNC(sub_82899A5C);
PPC_FUNC_IMPL(__imp__sub_82899A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899A60"))) PPC_WEAK_FUNC(sub_82899A60);
PPC_FUNC_IMPL(__imp__sub_82899A60) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1868
	ctx.r11.s64 = ctx.r11.s64 + -1868;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82899a8c
	if (ctx.cr0.eq) goto loc_82899A8C;
	// bl 0x82691540
	ctx.lr = 0x82899A8C;
	sub_82691540(ctx, base);
loc_82899A8C:
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

__attribute__((alias("__imp__sub_82899AA4"))) PPC_WEAK_FUNC(sub_82899AA4);
PPC_FUNC_IMPL(__imp__sub_82899AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899AA8"))) PPC_WEAK_FUNC(sub_82899AA8);
PPC_FUNC_IMPL(__imp__sub_82899AA8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1812
	ctx.r11.s64 = ctx.r11.s64 + -1812;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82899ad4
	if (ctx.cr0.eq) goto loc_82899AD4;
	// bl 0x82691540
	ctx.lr = 0x82899AD4;
	sub_82691540(ctx, base);
loc_82899AD4:
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

__attribute__((alias("__imp__sub_82899AEC"))) PPC_WEAK_FUNC(sub_82899AEC);
PPC_FUNC_IMPL(__imp__sub_82899AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899AF0"))) PPC_WEAK_FUNC(sub_82899AF0);
PPC_FUNC_IMPL(__imp__sub_82899AF0) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1780
	ctx.r11.s64 = ctx.r11.s64 + -1780;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82899b1c
	if (ctx.cr0.eq) goto loc_82899B1C;
	// bl 0x82691540
	ctx.lr = 0x82899B1C;
	sub_82691540(ctx, base);
loc_82899B1C:
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

__attribute__((alias("__imp__sub_82899B34"))) PPC_WEAK_FUNC(sub_82899B34);
PPC_FUNC_IMPL(__imp__sub_82899B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899B38"))) PPC_WEAK_FUNC(sub_82899B38);
PPC_FUNC_IMPL(__imp__sub_82899B38) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-1732
	ctx.r11.s64 = ctx.r11.s64 + -1732;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82899b64
	if (ctx.cr0.eq) goto loc_82899B64;
	// bl 0x82691540
	ctx.lr = 0x82899B64;
	sub_82691540(ctx, base);
loc_82899B64:
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

__attribute__((alias("__imp__sub_82899B7C"))) PPC_WEAK_FUNC(sub_82899B7C);
PPC_FUNC_IMPL(__imp__sub_82899B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899B80"))) PPC_WEAK_FUNC(sub_82899B80);
PPC_FUNC_IMPL(__imp__sub_82899B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bge cr6,0x82899ba0
	if (!ctx.cr6.lt) goto loc_82899BA0;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// b 0x82899bac
	goto loc_82899BAC;
loc_82899BA0:
	// fcmpu cr6,f1,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f11.f64);
	// ble cr6,0x82899bac
	if (!ctx.cr6.gt) goto loc_82899BAC;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
loc_82899BAC:
	// fsubs f0,f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f1.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82899bc4
	if (ctx.cr6.gt) goto loc_82899BC4;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f1,-9904(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9904);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82899BC4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-1580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82899bec
	if (!ctx.cr6.lt) goto loc_82899BEC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,-1584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1584);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-9904(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9904);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f1,f0,f13,f12
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f12.f64)));
	// blr 
	return;
loc_82899BEC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,-1588(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1588);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82899c14
	if (!ctx.cr6.lt) goto loc_82899C14;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-1592(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1592);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-9876(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -9876);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82899c58
	goto loc_82899C58;
loc_82899C14:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-1596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1596);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82899c3c
	if (!ctx.cr6.lt) goto loc_82899C3C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-1600(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1600);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1604);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82899c58
	goto loc_82899C58;
loc_82899C3C:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82899c60
	if (!ctx.cr6.lt) goto loc_82899C60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,-1608(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1608);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1612(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1612);
	ctx.f13.f64 = double(temp.f32);
loc_82899C58:
	// fnmsubs f1,f12,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// blr 
	return;
loc_82899C60:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82899C6C"))) PPC_WEAK_FUNC(sub_82899C6C);
PPC_FUNC_IMPL(__imp__sub_82899C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899C70"))) PPC_WEAK_FUNC(sub_82899C70);
PPC_FUNC_IMPL(__imp__sub_82899C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,-9904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9904);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-15356(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82899ca4
	if (ctx.cr6.lt) goto loc_82899CA4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-1564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1564);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82899c9c
	if (!ctx.cr6.gt) goto loc_82899C9C;
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
loc_82899C9C:
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82899cb0
	if (ctx.cr6.lt) goto loc_82899CB0;
loc_82899CA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82899d64
	goto loc_82899D64;
loc_82899CB0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,-9876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9876);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82899cd4
	if (!ctx.cr6.gt) goto loc_82899CD4;
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-1568(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1568);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// b 0x82899d64
	goto loc_82899D64;
loc_82899CD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,-1604(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1604);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82899cfc
	if (!ctx.cr6.gt) goto loc_82899CFC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,5152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1580);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82899d58
	goto loc_82899D58;
loc_82899CFC:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-1612(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1612);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82899d2c
	if (!ctx.cr6.gt) goto loc_82899D2C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-6296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -6296);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,-1572(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1588(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1588);
	ctx.f13.f64 = double(temp.f32);
	// b 0x82899d58
	goto loc_82899D58;
loc_82899D2C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-1616(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1616);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82899d60
	if (!ctx.cr6.gt) goto loc_82899D60;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f0,-14268(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14268);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// lfs f0,-1576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -1576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-1596(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -1596);
	ctx.f13.f64 = double(temp.f32);
loc_82899D58:
	// fnmsubs f0,f11,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(-(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64)));
	// b 0x82899d64
	goto loc_82899D64;
loc_82899D60:
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
loc_82899D64:
	// fsubs f1,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82899D6C"))) PPC_WEAK_FUNC(sub_82899D6C);
PPC_FUNC_IMPL(__imp__sub_82899D6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899D70"))) PPC_WEAK_FUNC(sub_82899D70);
PPC_FUNC_IMPL(__imp__sub_82899D70) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-27108(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,22080(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x82899D98;
	sub_82FA30A8(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82899DAC"))) PPC_WEAK_FUNC(sub_82899DAC);
PPC_FUNC_IMPL(__imp__sub_82899DAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899DB0"))) PPC_WEAK_FUNC(sub_82899DB0);
PPC_FUNC_IMPL(__imp__sub_82899DB0) {
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
	// bl 0x82fa4060
	ctx.lr = 0x82899DC0;
	sub_82FA4060(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,-23576(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23576);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82899DE0"))) PPC_WEAK_FUNC(sub_82899DE0);
PPC_FUNC_IMPL(__imp__sub_82899DE0) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r11,14684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82899e0c
	if (ctx.cr6.eq) goto loc_82899E0C;
	// bl 0x8289a1a0
	ctx.lr = 0x82899E04;
	sub_8289A1A0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14684, ctx.r11.u32);
loc_82899E0C:
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

__attribute__((alias("__imp__sub_82899E24"))) PPC_WEAK_FUNC(sub_82899E24);
PPC_FUNC_IMPL(__imp__sub_82899E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899E28"))) PPC_WEAK_FUNC(sub_82899E28);
PPC_FUNC_IMPL(__imp__sub_82899E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82899e3c
	if (!ctx.cr6.eq) goto loc_82899E3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82899E3C:
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82899e4c
	if (ctx.cr6.lt) goto loc_82899E4C;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_82899E4C:
	// b 0x8301a578
	sub_8301A578(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899E50"))) PPC_WEAK_FUNC(sub_82899E50);
PPC_FUNC_IMPL(__imp__sub_82899E50) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14684(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82899e78
	if (!ctx.cr6.eq) goto loc_82899E78;
	// bl 0x8289a130
	ctx.lr = 0x82899E74;
	sub_8289A130(ctx, base);
	// stw r3,14684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14684, ctx.r3.u32);
loc_82899E78:
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

__attribute__((alias("__imp__sub_82899E8C"))) PPC_WEAK_FUNC(sub_82899E8C);
PPC_FUNC_IMPL(__imp__sub_82899E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899E90"))) PPC_WEAK_FUNC(sub_82899E90);
PPC_FUNC_IMPL(__imp__sub_82899E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82899E98;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-2056
	ctx.r30.s64 = ctx.r11.s64 + -2056;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x822e3740
	ctx.lr = 0x82899EBC;
	sub_822E3740(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82899f18
	if (ctx.cr0.eq) goto loc_82899F18;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822400d8
	ctx.lr = 0x82899ED0;
	sub_822400D8(ctx, base);
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822400d8
	ctx.lr = 0x82899EDC;
	sub_822400D8(ctx, base);
	// bl 0x8289a0c0
	ctx.lr = 0x82899EE0;
	sub_8289A0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// bl 0x8289ae28
	ctx.lr = 0x82899EF4;
	sub_8289AE28(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x82899F04;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x82899F14;
	sub_822402C8(ctx, base);
	// b 0x82899f30
	goto loc_82899F30;
loc_82899F18:
	// bl 0x8289a0c0
	ctx.lr = 0x82899F1C;
	sub_8289A0C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x8289ae28
	ctx.lr = 0x82899F30;
	sub_8289AE28(ctx, base);
loc_82899F30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899F3C"))) PPC_WEAK_FUNC(sub_82899F3C);
PPC_FUNC_IMPL(__imp__sub_82899F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82899F40"))) PPC_WEAK_FUNC(sub_82899F40);
PPC_FUNC_IMPL(__imp__sub_82899F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82899F48;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822c5628
	ctx.lr = 0x82899F64;
	sub_822C5628(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289a250
	ctx.lr = 0x82899F74;
	sub_8289A250(ctx, base);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x82899f88
	if (ctx.cr6.lt) goto loc_82899F88;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82899f8c
	goto loc_82899F8C;
loc_82899F88:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82899F8C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blt cr6,0x82899fa4
	if (ctx.cr6.lt) goto loc_82899FA4;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82899fa8
	goto loc_82899FA8;
loc_82899FA4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82899FA8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8289ad40
	ctx.lr = 0x82899FB4;
	sub_8289AD40(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82899FC0"))) PPC_WEAK_FUNC(sub_82899FC0);
PPC_FUNC_IMPL(__imp__sub_82899FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82899FC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,16(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822402c8
	ctx.lr = 0x82899FE4;
	sub_822402C8(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824d59a0
	ctx.lr = 0x82899FF4;
	sub_824D59A0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a008
	if (ctx.cr6.lt) goto loc_8289A008;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a00c
	goto loc_8289A00C;
loc_8289A008:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A00C:
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8289a028
	if (ctx.cr6.lt) goto loc_8289A028;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a02c
	goto loc_8289A02C;
loc_8289A028:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8289A02C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// bl 0x8289adb0
	ctx.lr = 0x8289A038;
	sub_8289ADB0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289A044"))) PPC_WEAK_FUNC(sub_8289A044);
PPC_FUNC_IMPL(__imp__sub_8289A044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289A048"))) PPC_WEAK_FUNC(sub_8289A048);
PPC_FUNC_IMPL(__imp__sub_8289A048) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8289a070
	if (!ctx.cr6.eq) goto loc_8289A070;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8289a0a8
	goto loc_8289A0A8;
loc_8289A070:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82899f40
	ctx.lr = 0x8289A078;
	sub_82899F40(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x8289a08c
	if (!ctx.cr6.lt) goto loc_8289A08C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8289A08C:
	// bl 0x8301a578
	ctx.lr = 0x8289A090;
	sub_8301A578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5628
	ctx.lr = 0x8289A0A4;
	sub_822C5628(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8289A0A8:
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

__attribute__((alias("__imp__sub_8289A0BC"))) PPC_WEAK_FUNC(sub_8289A0BC);
PPC_FUNC_IMPL(__imp__sub_8289A0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289A0C0"))) PPC_WEAK_FUNC(sub_8289A0C0);
PPC_FUNC_IMPL(__imp__sub_8289A0C0) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14704(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14704);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289a118
	if (!ctx.cr6.eq) goto loc_8289A118;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x8289A0EC;
	sub_8283B938(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x8283b5b8
	ctx.lr = 0x8289A100;
	sub_8283B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8289a110
	if (ctx.cr0.eq) goto loc_8289A110;
	// bl 0x8289ae18
	ctx.lr = 0x8289A10C;
	sub_8289AE18(ctx, base);
	// b 0x8289a114
	goto loc_8289A114;
loc_8289A110:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289A114:
	// stw r3,14704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14704, ctx.r3.u32);
loc_8289A118:
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

__attribute__((alias("__imp__sub_8289A12C"))) PPC_WEAK_FUNC(sub_8289A12C);
PPC_FUNC_IMPL(__imp__sub_8289A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289A130"))) PPC_WEAK_FUNC(sub_8289A130);
PPC_FUNC_IMPL(__imp__sub_8289A130) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289a188
	if (!ctx.cr6.eq) goto loc_8289A188;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x8289A15C;
	sub_8283B938(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// li r4,1300
	ctx.r4.s64 = 1300;
	// bl 0x8283b5b8
	ctx.lr = 0x8289A170;
	sub_8283B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8289a180
	if (ctx.cr0.eq) goto loc_8289A180;
	// bl 0x8289d120
	ctx.lr = 0x8289A17C;
	sub_8289D120(ctx, base);
	// b 0x8289a184
	goto loc_8289A184;
loc_8289A180:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289A184:
	// stw r3,14708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14708, ctx.r3.u32);
loc_8289A188:
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

__attribute__((alias("__imp__sub_8289A19C"))) PPC_WEAK_FUNC(sub_8289A19C);
PPC_FUNC_IMPL(__imp__sub_8289A19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289A1A0"))) PPC_WEAK_FUNC(sub_8289A1A0);
PPC_FUNC_IMPL(__imp__sub_8289A1A0) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14708);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8289a1d4
	if (ctx.cr6.eq) goto loc_8289A1D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289A1D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289A1D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14708, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8289A1F0"))) PPC_WEAK_FUNC(sub_8289A1F0);
PPC_FUNC_IMPL(__imp__sub_8289A1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bne cr6,0x8289a214
	if (!ctx.cr6.eq) goto loc_8289A214;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a208
	if (ctx.cr6.lt) goto loc_8289A208;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8289A208:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r6,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r6.u16);
	// blr 
	return;
loc_8289A214:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a220
	if (ctx.cr6.lt) goto loc_8289A220;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
loc_8289A220:
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_8289A240:
	// sthu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x8289a240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8289A240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289A24C"))) PPC_WEAK_FUNC(sub_8289A24C);
PPC_FUNC_IMPL(__imp__sub_8289A24C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289A250"))) PPC_WEAK_FUNC(sub_8289A250);
PPC_FUNC_IMPL(__imp__sub_8289A250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289A258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// bne cr6,0x8289a27c
	if (!ctx.cr6.eq) goto loc_8289A27C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31444
	ctx.r3.s64 = ctx.r11.s64 + 31444;
	// bl 0x82fa0648
	ctx.lr = 0x8289A27C;
	sub_82FA0648(ctx, base);
loc_8289A27C:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5450
	ctx.lr = 0x8289A28C;
	sub_822C5450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8289a2d0
	if (ctx.cr0.eq) goto loc_8289A2D0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289a1f0
	ctx.lr = 0x8289A2A8;
	sub_8289A1F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a2c0
	if (ctx.cr6.lt) goto loc_8289A2C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a2c4
	goto loc_8289A2C4;
loc_8289A2C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A2C4:
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8289A2D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289A2DC"))) PPC_WEAK_FUNC(sub_8289A2DC);
PPC_FUNC_IMPL(__imp__sub_8289A2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289A2E0"))) PPC_WEAK_FUNC(sub_8289A2E0);
PPC_FUNC_IMPL(__imp__sub_8289A2E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8289A2E8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8289a69c
	if (ctx.cr6.lt) goto loc_8289A69C;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8289a69c
	if (ctx.cr6.lt) goto loc_8289A69C;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8289a32c
	if (!ctx.cr6.lt) goto loc_8289A32C;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_8289A32C:
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x8289a33c
	if (!ctx.cr6.lt) goto loc_8289A33C;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
loc_8289A33C:
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// subfic r8,r27,-1
	ctx.xer.ca = ctx.r27.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r27.s64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8289a358
	if (ctx.cr6.gt) goto loc_8289A358;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31444
	ctx.r3.s64 = ctx.r11.s64 + 31444;
	// bl 0x82fa0648
	ctx.lr = 0x8289A358;
	sub_82FA0648(ctx, base);
loc_8289A358:
	// add r24,r10,r27
	ctx.r24.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subf r26,r29,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8289a378
	if (!ctx.cr6.lt) goto loc_8289A378;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822403e8
	ctx.lr = 0x8289A378;
	sub_822403E8(ctx, base);
loc_8289A378:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8289a408
	if (ctx.cr6.eq) goto loc_8289A408;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8289a394
	if (ctx.cr6.lt) goto loc_8289A394;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a398
	goto loc_8289A398;
loc_8289A394:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A398:
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8289a3a8
	if (ctx.cr6.lt) goto loc_8289A3A8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a3ac
	goto loc_8289A3AC;
loc_8289A3A8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A3AC:
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A3C4;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a3d8
	if (ctx.cr6.lt) goto loc_8289A3D8;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8289a3dc
	goto loc_8289A3DC;
loc_8289A3D8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_8289A3DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a3f0
	if (ctx.cr6.lt) goto loc_8289A3F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a3f4
	goto loc_8289A3F4;
loc_8289A3F0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A3F4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8289A404;
	sub_82FA77C0(ctx, base);
	// b 0x8289a66c
	goto loc_8289A66C;
loc_8289A408:
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x8289a490
	if (ctx.cr6.gt) goto loc_8289A490;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a424
	if (ctx.cr6.lt) goto loc_8289A424;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a428
	goto loc_8289A428;
loc_8289A424:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A428:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a438
	if (ctx.cr6.lt) goto loc_8289A438;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a43c
	goto loc_8289A43C;
loc_8289A438:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A43C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A44C;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a460
	if (ctx.cr6.lt) goto loc_8289A460;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a464
	goto loc_8289A464;
loc_8289A460:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A464:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a474
	if (ctx.cr6.lt) goto loc_8289A474;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a478
	goto loc_8289A478;
loc_8289A474:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A478:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x8289a668
	goto loc_8289A668;
loc_8289A490:
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8289a518
	if (ctx.cr6.gt) goto loc_8289A518;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a4ac
	if (ctx.cr6.lt) goto loc_8289A4AC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a4b0
	goto loc_8289A4B0;
loc_8289A4AC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A4B0:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a4c0
	if (ctx.cr6.lt) goto loc_8289A4C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a4c4
	goto loc_8289A4C4;
loc_8289A4C0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A4C4:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A4DC;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a4f0
	if (ctx.cr6.lt) goto loc_8289A4F0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a4f4
	goto loc_8289A4F4;
loc_8289A4F0:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A4F4:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a504
	if (ctx.cr6.lt) goto loc_8289A504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a508
	goto loc_8289A508;
loc_8289A504:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A508:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8289a668
	goto loc_8289A668;
loc_8289A518:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bgt cr6,0x8289a5ac
	if (ctx.cr6.gt) goto loc_8289A5AC;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a538
	if (ctx.cr6.lt) goto loc_8289A538;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a53c
	goto loc_8289A53C;
loc_8289A538:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A53C:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a54c
	if (ctx.cr6.lt) goto loc_8289A54C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a550
	goto loc_8289A550;
loc_8289A54C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A550:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A568;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a57c
	if (ctx.cr6.lt) goto loc_8289A57C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a580
	goto loc_8289A580;
loc_8289A57C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A580:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a590
	if (ctx.cr6.lt) goto loc_8289A590;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a594
	goto loc_8289A594;
loc_8289A590:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A594:
	// subf r11,r29,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r29.s64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r3,r10,r30
	ctx.r3.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// b 0x8289a668
	goto loc_8289A668;
loc_8289A5AC:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a5bc
	if (ctx.cr6.lt) goto loc_8289A5BC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a5c0
	goto loc_8289A5C0;
loc_8289A5BC:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A5C0:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a5d0
	if (ctx.cr6.lt) goto loc_8289A5D0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a5d4
	goto loc_8289A5D4;
loc_8289A5D0:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A5D4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r4,r10,r25
	ctx.r4.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A5E4;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a5f8
	if (ctx.cr6.lt) goto loc_8289A5F8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a5fc
	goto loc_8289A5FC;
loc_8289A5F8:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A5FC:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a60c
	if (ctx.cr6.lt) goto loc_8289A60C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a610
	goto loc_8289A610;
loc_8289A60C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A610:
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r4,r10,r29
	ctx.r4.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A628;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a63c
	if (ctx.cr6.lt) goto loc_8289A63C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a640
	goto loc_8289A640;
loc_8289A63C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289A640:
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a650
	if (ctx.cr6.lt) goto loc_8289A650;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a654
	goto loc_8289A654;
loc_8289A650:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A654:
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// subf r5,r29,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r29.s64;
	// add r4,r10,r27
	ctx.r4.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_8289A668:
	// bl 0x82fa20f0
	ctx.lr = 0x8289A66C;
	sub_82FA20F0(ctx, base);
loc_8289A66C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289a684
	if (ctx.cr6.lt) goto loc_8289A684;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a688
	goto loc_8289A688;
loc_8289A684:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289A688:
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stbx r10,r11,r24
	PPC_STORE_U8(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u8);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8289A69C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31420
	ctx.r3.s64 = ctx.r11.s64 + 31420;
	// bl 0x82fa0680
	ctx.lr = 0x8289A6A8;
	sub_82FA0680(ctx, base);
}

__attribute__((alias("__imp__sub_8289A6A8"))) PPC_WEAK_FUNC(sub_8289A6A8);
PPC_FUNC_IMPL(__imp__sub_8289A6A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8289A6B0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x8289aaa0
	if (ctx.cr6.lt) goto loc_8289AAA0;
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x8289aaa0
	if (ctx.cr6.lt) goto loc_8289AAA0;
	// subf r9,r4,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r4.s64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8289a6f4
	if (!ctx.cr6.lt) goto loc_8289A6F4;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
loc_8289A6F4:
	// subf r10,r25,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r25.s64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x8289a704
	if (!ctx.cr6.lt) goto loc_8289A704;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_8289A704:
	// subf r10,r26,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r26.s64;
	// subfic r8,r29,-1
	ctx.xer.ca = ctx.r29.u32 <= 4294967295;
	ctx.r8.s64 = -1 - ctx.r29.s64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8289a720
	if (ctx.cr6.gt) goto loc_8289A720;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31444
	ctx.r3.s64 = ctx.r11.s64 + 31444;
	// bl 0x82fa0648
	ctx.lr = 0x8289A720;
	sub_82FA0648(ctx, base);
loc_8289A720:
	// add r24,r10,r29
	ctx.r24.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subf r27,r26,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r26.s64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x8289a740
	if (!ctx.cr6.lt) goto loc_8289A740;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5450
	ctx.lr = 0x8289A740;
	sub_822C5450(ctx, base);
loc_8289A740:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8289a7e0
	if (ctx.cr6.eq) goto loc_8289A7E0;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a75c
	if (ctx.cr6.lt) goto loc_8289A75C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a760
	goto loc_8289A760;
loc_8289A75C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A760:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a770
	if (ctx.cr6.lt) goto loc_8289A770;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a774
	goto loc_8289A774;
loc_8289A770:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A774:
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r10,r30,r29
	ctx.r10.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A794;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a7a8
	if (ctx.cr6.lt) goto loc_8289A7A8;
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x8289a7ac
	goto loc_8289A7AC;
loc_8289A7A8:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_8289A7AC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a7c0
	if (ctx.cr6.lt) goto loc_8289A7C0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a7c4
	goto loc_8289A7C4;
loc_8289A7C0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A7C4:
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8289A7DC;
	sub_82FA77C0(ctx, base);
	// b 0x8289aa6c
	goto loc_8289AA6C;
loc_8289A7E0:
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// bgt cr6,0x8289a874
	if (ctx.cr6.gt) goto loc_8289A874;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a7f8
	if (ctx.cr6.lt) goto loc_8289A7F8;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a7fc
	goto loc_8289A7FC;
loc_8289A7F8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A7FC:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a80c
	if (ctx.cr6.lt) goto loc_8289A80C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a810
	goto loc_8289A810;
loc_8289A80C:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A810:
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A828;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a83c
	if (ctx.cr6.lt) goto loc_8289A83C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a840
	goto loc_8289A840;
loc_8289A83C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A840:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a850
	if (ctx.cr6.lt) goto loc_8289A850;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a854
	goto loc_8289A854;
loc_8289A850:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A854:
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r7,r30,r29
	ctx.r7.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_8289A868:
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x8289aa68
	goto loc_8289AA68;
loc_8289A874:
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x8289a900
	if (ctx.cr6.gt) goto loc_8289A900;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a88c
	if (ctx.cr6.lt) goto loc_8289A88C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a890
	goto loc_8289A890;
loc_8289A88C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A890:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a8a0
	if (ctx.cr6.lt) goto loc_8289A8A0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a8a4
	goto loc_8289A8A4;
loc_8289A8A0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A8A4:
	// add r11,r30,r26
	ctx.r11.u64 = ctx.r30.u64 + ctx.r26.u64;
	// add r7,r30,r29
	ctx.r7.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r7,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A8C4;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a8d8
	if (ctx.cr6.lt) goto loc_8289A8D8;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a8dc
	goto loc_8289A8DC;
loc_8289A8D8:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A8DC:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a8ec
	if (ctx.cr6.lt) goto loc_8289A8EC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a8f0
	goto loc_8289A8F0;
loc_8289A8EC:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A8F0:
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x8289a868
	goto loc_8289A868;
loc_8289A900:
	// add r28,r30,r26
	ctx.r28.u64 = ctx.r30.u64 + ctx.r26.u64;
	// cmplw cr6,r28,r25
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x8289a99c
	if (ctx.cr6.gt) goto loc_8289A99C;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a91c
	if (ctx.cr6.lt) goto loc_8289A91C;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a920
	goto loc_8289A920;
loc_8289A91C:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A920:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a930
	if (ctx.cr6.lt) goto loc_8289A930;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a934
	goto loc_8289A934;
loc_8289A930:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A934:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A950;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a964
	if (ctx.cr6.lt) goto loc_8289A964;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a968
	goto loc_8289A968;
loc_8289A964:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A968:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a978
	if (ctx.cr6.lt) goto loc_8289A978;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a97c
	goto loc_8289A97C;
loc_8289A978:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A97C:
	// subf r11,r26,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r26.s64;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// b 0x8289aa68
	goto loc_8289AA68;
loc_8289A99C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a9ac
	if (ctx.cr6.lt) goto loc_8289A9AC;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a9b0
	goto loc_8289A9B0;
loc_8289A9AC:
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
loc_8289A9B0:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a9c0
	if (ctx.cr6.lt) goto loc_8289A9C0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a9c4
	goto loc_8289A9C4;
loc_8289A9C0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A9C4:
	// rlwinm r10,r25,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r26,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289A9DC;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289a9f0
	if (ctx.cr6.lt) goto loc_8289A9F0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289a9f4
	goto loc_8289A9F4;
loc_8289A9F0:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289A9F4:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289aa04
	if (ctx.cr6.lt) goto loc_8289AA04;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289aa08
	goto loc_8289AA08;
loc_8289AA04:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289AA08:
	// add r11,r30,r29
	ctx.r11.u64 = ctx.r30.u64 + ctx.r29.u64;
	// rlwinm r30,r28,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r27,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r30,r9
	ctx.r4.u64 = ctx.r30.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8289AA24;
	sub_82FA20F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289aa38
	if (ctx.cr6.lt) goto loc_8289AA38;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289aa3c
	goto loc_8289AA3C;
loc_8289AA38:
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
loc_8289AA3C:
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289aa4c
	if (ctx.cr6.lt) goto loc_8289AA4C;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289aa50
	goto loc_8289AA50;
loc_8289AA4C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_8289AA50:
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// subf r8,r26,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r26.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r30,r10
	ctx.r3.u64 = ctx.r30.u64 + ctx.r10.u64;
loc_8289AA68:
	// bl 0x82fa20f0
	ctx.lr = 0x8289AA6C;
	sub_82FA20F0(ctx, base);
loc_8289AA6C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r24,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r24.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289aa84
	if (ctx.cr6.lt) goto loc_8289AA84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289aa88
	goto loc_8289AA88;
loc_8289AA84:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289AA88:
	// rlwinm r10,r24,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8289AAA0:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31420
	ctx.r3.s64 = ctx.r11.s64 + 31420;
	// bl 0x82fa0680
	ctx.lr = 0x8289AAAC;
	sub_82FA0680(ctx, base);
}

__attribute__((alias("__imp__sub_8289AAAC"))) PPC_WEAK_FUNC(sub_8289AAAC);
PPC_FUNC_IMPL(__imp__sub_8289AAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289AAB0"))) PPC_WEAK_FUNC(sub_8289AAB0);
PPC_FUNC_IMPL(__imp__sub_8289AAB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8289AAB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subfic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r10.s64 = -1 - ctx.r11.s64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x8289aae4
	if (ctx.cr6.gt) goto loc_8289AAE4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31444
	ctx.r3.s64 = ctx.r11.s64 + 31444;
	// bl 0x82fa0648
	ctx.lr = 0x8289AAE4;
	sub_82FA0648(ctx, base);
loc_8289AAE4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8289ab44
	if (ctx.cr6.eq) goto loc_8289AB44;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822c5450
	ctx.lr = 0x8289AB00;
	sub_822C5450(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8289ab44
	if (ctx.cr0.eq) goto loc_8289AB44;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289a1f0
	ctx.lr = 0x8289AB1C;
	sub_8289A1F0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289ab34
	if (ctx.cr6.lt) goto loc_8289AB34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289ab38
	goto loc_8289AB38;
loc_8289AB34:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8289AB38:
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// li r9,0
	ctx.r9.s64 = 0;
	// sthx r9,r10,r11
	PPC_STORE_U16(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u16);
loc_8289AB44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289AB50"))) PPC_WEAK_FUNC(sub_8289AB50);
PPC_FUNC_IMPL(__imp__sub_8289AB50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289AB58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822c5628
	ctx.lr = 0x8289AB74;
	sub_822C5628(ctx, base);
	// subf r4,r31,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82592800
	ctx.lr = 0x8289AB80;
	sub_82592800(ctx, base);
	// b 0x8289ab9c
	goto loc_8289AB9C;
loc_8289AB84:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8289aab0
	ctx.lr = 0x8289AB98;
	sub_8289AAB0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_8289AB9C:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8289ab84
	if (!ctx.cr6.eq) goto loc_8289AB84;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289ABB0"))) PPC_WEAK_FUNC(sub_8289ABB0);
PPC_FUNC_IMPL(__imp__sub_8289ABB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289ABB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822402c8
	ctx.lr = 0x8289ABD4;
	sub_822402C8(ctx, base);
	// subf r11,r31,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// bl 0x822e3938
	ctx.lr = 0x8289ABE4;
	sub_822E3938(ctx, base);
	// b 0x8289abfc
	goto loc_8289ABFC;
loc_8289ABE8:
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8224fec8
	ctx.lr = 0x8289ABF8;
	sub_8224FEC8(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
loc_8289ABFC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x8289abe8
	if (!ctx.cr6.eq) goto loc_8289ABE8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289AC10"))) PPC_WEAK_FUNC(sub_8289AC10);
PPC_FUNC_IMPL(__imp__sub_8289AC10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289AC18;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289ab50
	ctx.lr = 0x8289AC38;
	sub_8289AB50(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289ac4c
	if (ctx.cr6.lt) goto loc_8289AC4C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8289ac50
	goto loc_8289AC50;
loc_8289AC4C:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8289AC50:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x8289ac60
	if (!ctx.cr6.eq) goto loc_8289AC60;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8289ac68
	goto loc_8289AC68;
loc_8289AC60:
	// subf r10,r29,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r29.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
loc_8289AC68:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8289ac78
	if (!ctx.cr6.eq) goto loc_8289AC78;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8289ac80
	goto loc_8289AC80;
loc_8289AC78:
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
loc_8289AC80:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289a6a8
	ctx.lr = 0x8289AC94;
	sub_8289A6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c5628
	ctx.lr = 0x8289ACA4;
	sub_822C5628(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289ACB0"))) PPC_WEAK_FUNC(sub_8289ACB0);
PPC_FUNC_IMPL(__imp__sub_8289ACB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289ACB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8289abb0
	ctx.lr = 0x8289ACD8;
	sub_8289ABB0(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289acec
	if (ctx.cr6.lt) goto loc_8289ACEC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8289acf0
	goto loc_8289ACF0;
loc_8289ACEC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8289ACF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// li r5,0
	ctx.r5.s64 = 0;
	// beq cr6,0x8289ad00
	if (ctx.cr6.eq) goto loc_8289AD00;
	// subf r5,r29,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r29.s64;
loc_8289AD00:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x8289ad10
	if (ctx.cr6.eq) goto loc_8289AD10;
	// subf r4,r11,r29
	ctx.r4.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_8289AD10:
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289a2e0
	ctx.lr = 0x8289AD24;
	sub_8289A2E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289AD34;
	sub_822402C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289AD40"))) PPC_WEAK_FUNC(sub_8289AD40);
PPC_FUNC_IMPL(__imp__sub_8289AD40) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x8289ad68
	if (ctx.cr6.lt) goto loc_8289AD68;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8289ad6c
	goto loc_8289AD6C;
loc_8289AD68:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8289AD6C:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8289ad88
	if (ctx.cr6.lt) goto loc_8289AD88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8289ad8c
	goto loc_8289AD8C;
loc_8289AD88:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8289AD8C:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8289ac10
	ctx.lr = 0x8289AD9C;
	sub_8289AC10(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289ADAC"))) PPC_WEAK_FUNC(sub_8289ADAC);
PPC_FUNC_IMPL(__imp__sub_8289ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289ADB0"))) PPC_WEAK_FUNC(sub_8289ADB0);
PPC_FUNC_IMPL(__imp__sub_8289ADB0) {
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
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8289add8
	if (ctx.cr6.lt) goto loc_8289ADD8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8289addc
	goto loc_8289ADDC;
loc_8289ADD8:
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_8289ADDC:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8289adf4
	if (ctx.cr6.lt) goto loc_8289ADF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8289adf8
	goto loc_8289ADF8;
loc_8289ADF4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8289ADF8:
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lbz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8289acb0
	ctx.lr = 0x8289AE08;
	sub_8289ACB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289AE18"))) PPC_WEAK_FUNC(sub_8289AE18);
PPC_FUNC_IMPL(__imp__sub_8289AE18) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289AE24"))) PPC_WEAK_FUNC(sub_8289AE24);
PPC_FUNC_IMPL(__imp__sub_8289AE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289AE28"))) PPC_WEAK_FUNC(sub_8289AE28);
PPC_FUNC_IMPL(__imp__sub_8289AE28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8289AE30;
	__savegprlr_27(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r6,1
	ctx.r9.s64 = ctx.r6.s64 + 1;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r10,-1528
	ctx.r31.s64 = ctx.r10.s64 + -1528;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa25c0
	ctx.lr = 0x8289AE68;
	sub_82FA25C0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822400d8
	ctx.lr = 0x8289AE74;
	sub_822400D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822400d8
	ctx.lr = 0x8289AE84;
	sub_822400D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8289af20
	ctx.lr = 0x8289AE98;
	sub_8289AF20(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x822e3838
	ctx.lr = 0x8289AEA8;
	sub_822E3838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x822e3838
	ctx.lr = 0x8289AEB8;
	sub_822E3838(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82251fc0
	ctx.lr = 0x8289AEC4;
	sub_82251FC0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822402c8
	ctx.lr = 0x8289AED4;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289AEE4;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8289AEF4;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8289AF04;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822402c8
	ctx.lr = 0x8289AF14;
	sub_822402C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289AF20"))) PPC_WEAK_FUNC(sub_8289AF20);
PPC_FUNC_IMPL(__imp__sub_8289AF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8289AF28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822402c8
	ctx.lr = 0x8289AF44;
	sub_822402C8(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822e3938
	ctx.lr = 0x8289AF58;
	sub_822E3938(ctx, base);
	// li r31,-1
	ctx.r31.s64 = -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8224fce0
	ctx.lr = 0x8289AF70;
	sub_8224FCE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8224fce0
	ctx.lr = 0x8289AF84;
	sub_8224FCE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289AF90"))) PPC_WEAK_FUNC(sub_8289AF90);
PPC_FUNC_IMPL(__imp__sub_8289AF90) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289afb4
	if (!ctx.cr6.eq) goto loc_8289AFB4;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x8289b074
	goto loc_8289B074;
loc_8289AFB4:
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x8289b008
	if (ctx.cr6.lt) goto loc_8289B008;
	// beq cr6,0x8289aff8
	if (ctx.cr6.eq) goto loc_8289AFF8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x8289afe8
	if (ctx.cr6.lt) goto loc_8289AFE8;
	// beq cr6,0x8289afdc
	if (ctx.cr6.eq) goto loc_8289AFDC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,31
	ctx.r3.s64 = 31;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x8289b074
	goto loc_8289B074;
loc_8289AFDC:
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r4,-16384
	ctx.r4.s64 = -1073741824;
	// b 0x8289b000
	goto loc_8289B000;
loc_8289AFE8:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
	// li r7,2
	ctx.r7.s64 = 2;
	// b 0x8289b014
	goto loc_8289B014;
loc_8289AFF8:
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r4,16384
	ctx.r4.s64 = 1073741824;
loc_8289B000:
	// li r7,4
	ctx.r7.s64 = 4;
	// b 0x8289b014
	goto loc_8289B014;
loc_8289B008:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r7,3
	ctx.r7.s64 = 3;
loc_8289B014:
	// clrlwi. r10,r6,24
	ctx.r10.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r8,2048
	ctx.r8.s64 = 134217728;
	// beq 0x8289b024
	if (ctx.cr0.eq) goto loc_8289B024;
	// lis r8,10240
	ctx.r8.s64 = 671088640;
loc_8289B024:
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8289b030
	if (ctx.cr0.eq) goto loc_8289B030;
	// oris r8,r8,16384
	ctx.r8.u64 = ctx.r8.u64 | 1073741824;
loc_8289B030:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82a82d10
	ctx.lr = 0x8289B040;
	sub_82A82D10(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8289b070
	if (!ctx.cr6.eq) goto loc_8289B070;
	// bl 0x82a78478
	ctx.lr = 0x8289B050;
	sub_82A78478(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8289b068
	if (ctx.cr6.eq) goto loc_8289B068;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x8289b068
	if (ctx.cr6.eq) goto loc_8289B068;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8289b074
	goto loc_8289B074;
loc_8289B068:
	// li r3,66
	ctx.r3.s64 = 66;
	// b 0x8289b074
	goto loc_8289B074;
loc_8289B070:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8289B074:
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

__attribute__((alias("__imp__sub_8289B088"))) PPC_WEAK_FUNC(sub_8289B088);
PPC_FUNC_IMPL(__imp__sub_8289B088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8289B090;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82a82a90
	ctx.lr = 0x8289B0BC;
	sub_82A82A90(ctx, base);
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x8289b0cc
	if (ctx.cr6.eq) goto loc_8289B0CC;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8289b0f0
	goto loc_8289B0F0;
loc_8289B0CC:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a83030
	ctx.lr = 0x8289B0E4;
	sub_82A83030(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
loc_8289B0F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289B0F8"))) PPC_WEAK_FUNC(sub_8289B0F8);
PPC_FUNC_IMPL(__imp__sub_8289B0F8) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10288
	ctx.r11.s64 = ctx.r11.s64 + 10288;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8289b124
	if (ctx.cr0.eq) goto loc_8289B124;
	// bl 0x82691540
	ctx.lr = 0x8289B124;
	sub_82691540(ctx, base);
loc_8289B124:
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

__attribute__((alias("__imp__sub_8289B13C"))) PPC_WEAK_FUNC(sub_8289B13C);
PPC_FUNC_IMPL(__imp__sub_8289B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B140"))) PPC_WEAK_FUNC(sub_8289B140);
PPC_FUNC_IMPL(__imp__sub_8289B140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289B148;
	__savegprlr_29(ctx, base);
	// lis r31,-32254
	ctx.r31.s64 = -2113798144;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,10324(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 10324);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// stw r5,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r5.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r7,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r7.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// stw r29,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r29.u32);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289B18C"))) PPC_WEAK_FUNC(sub_8289B18C);
PPC_FUNC_IMPL(__imp__sub_8289B18C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B190"))) PPC_WEAK_FUNC(sub_8289B190);
PPC_FUNC_IMPL(__imp__sub_8289B190) {
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,10316
	ctx.r11.s64 = ctx.r11.s64 + 10316;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8289b1bc
	if (ctx.cr0.eq) goto loc_8289B1BC;
	// bl 0x82691540
	ctx.lr = 0x8289B1BC;
	sub_82691540(ctx, base);
loc_8289B1BC:
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

__attribute__((alias("__imp__sub_8289B1D4"))) PPC_WEAK_FUNC(sub_8289B1D4);
PPC_FUNC_IMPL(__imp__sub_8289B1D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B1D8"))) PPC_WEAK_FUNC(sub_8289B1D8);
PPC_FUNC_IMPL(__imp__sub_8289B1D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B1DC"))) PPC_WEAK_FUNC(sub_8289B1DC);
PPC_FUNC_IMPL(__imp__sub_8289B1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B1E0"))) PPC_WEAK_FUNC(sub_8289B1E0);
PPC_FUNC_IMPL(__imp__sub_8289B1E0) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 88);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B1E8"))) PPC_WEAK_FUNC(sub_8289B1E8);
PPC_FUNC_IMPL(__imp__sub_8289B1E8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B1F0"))) PPC_WEAK_FUNC(sub_8289B1F0);
PPC_FUNC_IMPL(__imp__sub_8289B1F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r10,93(r11)
	PPC_STORE_U8(ctx.r11.u32 + 93, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B204"))) PPC_WEAK_FUNC(sub_8289B204);
PPC_FUNC_IMPL(__imp__sub_8289B204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B208"))) PPC_WEAK_FUNC(sub_8289B208);
PPC_FUNC_IMPL(__imp__sub_8289B208) {
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
	// lbz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289b23c
	if (ctx.cr0.eq) goto loc_8289B23C;
	// bl 0x82fd94e0
	ctx.lr = 0x8289B22C;
	sub_82FD94E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r11.u8);
	// b 0x8289b240
	goto loc_8289B240;
loc_8289B23C:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
loc_8289B240:
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

__attribute__((alias("__imp__sub_8289B254"))) PPC_WEAK_FUNC(sub_8289B254);
PPC_FUNC_IMPL(__imp__sub_8289B254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B258"))) PPC_WEAK_FUNC(sub_8289B258);
PPC_FUNC_IMPL(__imp__sub_8289B258) {
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
	// lbz r11,91(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 91);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289b28c
	if (ctx.cr0.eq) goto loc_8289B28C;
	// bl 0x83019d40
	ctx.lr = 0x8289B27C;
	sub_83019D40(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r11.u8);
	// b 0x8289b290
	goto loc_8289B290;
loc_8289B28C:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
loc_8289B290:
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

__attribute__((alias("__imp__sub_8289B2A4"))) PPC_WEAK_FUNC(sub_8289B2A4);
PPC_FUNC_IMPL(__imp__sub_8289B2A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B2A8"))) PPC_WEAK_FUNC(sub_8289B2A8);
PPC_FUNC_IMPL(__imp__sub_8289B2A8) {
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
	// lbz r11,89(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 89);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289b2dc
	if (ctx.cr0.eq) goto loc_8289B2DC;
	// bl 0x82fd6ef8
	ctx.lr = 0x8289B2CC;
	sub_82FD6EF8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
	// b 0x8289b2e0
	goto loc_8289B2E0;
loc_8289B2DC:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
loc_8289B2E0:
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

__attribute__((alias("__imp__sub_8289B2F4"))) PPC_WEAK_FUNC(sub_8289B2F4);
PPC_FUNC_IMPL(__imp__sub_8289B2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B2F8"))) PPC_WEAK_FUNC(sub_8289B2F8);
PPC_FUNC_IMPL(__imp__sub_8289B2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B300"))) PPC_WEAK_FUNC(sub_8289B300);
PPC_FUNC_IMPL(__imp__sub_8289B300) {
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
	// li r3,-1
	ctx.r3.s64 = -1;
	// bl 0x83019b20
	ctx.lr = 0x8289B314;
	sub_83019B20(ctx, base);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B328"))) PPC_WEAK_FUNC(sub_8289B328);
PPC_FUNC_IMPL(__imp__sub_8289B328) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1168(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1168);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B330"))) PPC_WEAK_FUNC(sub_8289B330);
PPC_FUNC_IMPL(__imp__sub_8289B330) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1180(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1180);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B338"))) PPC_WEAK_FUNC(sub_8289B338);
PPC_FUNC_IMPL(__imp__sub_8289B338) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1172(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1172);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B340"))) PPC_WEAK_FUNC(sub_8289B340);
PPC_FUNC_IMPL(__imp__sub_8289B340) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1176(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1176);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B348"))) PPC_WEAK_FUNC(sub_8289B348);
PPC_FUNC_IMPL(__imp__sub_8289B348) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1184(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1184);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B350"))) PPC_WEAK_FUNC(sub_8289B350);
PPC_FUNC_IMPL(__imp__sub_8289B350) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1188(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1188);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B358"))) PPC_WEAK_FUNC(sub_8289B358);
PPC_FUNC_IMPL(__imp__sub_8289B358) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1164(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1164, ctx.r4.u32);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B364"))) PPC_WEAK_FUNC(sub_8289B364);
PPC_FUNC_IMPL(__imp__sub_8289B364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B368"))) PPC_WEAK_FUNC(sub_8289B368);
PPC_FUNC_IMPL(__imp__sub_8289B368) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B370"))) PPC_WEAK_FUNC(sub_8289B370);
PPC_FUNC_IMPL(__imp__sub_8289B370) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B378"))) PPC_WEAK_FUNC(sub_8289B378);
PPC_FUNC_IMPL(__imp__sub_8289B378) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B380"))) PPC_WEAK_FUNC(sub_8289B380);
PPC_FUNC_IMPL(__imp__sub_8289B380) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1196(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1196, ctx.r4.u8);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B38C"))) PPC_WEAK_FUNC(sub_8289B38C);
PPC_FUNC_IMPL(__imp__sub_8289B38C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B390"))) PPC_WEAK_FUNC(sub_8289B390);
PPC_FUNC_IMPL(__imp__sub_8289B390) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,1196(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1196);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B398"))) PPC_WEAK_FUNC(sub_8289B398);
PPC_FUNC_IMPL(__imp__sub_8289B398) {
	PPC_FUNC_PROLOGUE();
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B3A0"))) PPC_WEAK_FUNC(sub_8289B3A0);
PPC_FUNC_IMPL(__imp__sub_8289B3A0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B3A8"))) PPC_WEAK_FUNC(sub_8289B3A8);
PPC_FUNC_IMPL(__imp__sub_8289B3A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B3AC"))) PPC_WEAK_FUNC(sub_8289B3AC);
PPC_FUNC_IMPL(__imp__sub_8289B3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B3B0"))) PPC_WEAK_FUNC(sub_8289B3B0);
PPC_FUNC_IMPL(__imp__sub_8289B3B0) {
	PPC_FUNC_PROLOGUE();
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B3B8"))) PPC_WEAK_FUNC(sub_8289B3B8);
PPC_FUNC_IMPL(__imp__sub_8289B3B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B3C0"))) PPC_WEAK_FUNC(sub_8289B3C0);
PPC_FUNC_IMPL(__imp__sub_8289B3C0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1220(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1220, ctx.r4.u32);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B3CC"))) PPC_WEAK_FUNC(sub_8289B3CC);
PPC_FUNC_IMPL(__imp__sub_8289B3CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B3D0"))) PPC_WEAK_FUNC(sub_8289B3D0);
PPC_FUNC_IMPL(__imp__sub_8289B3D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,1220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1220);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8289B3EC"))) PPC_WEAK_FUNC(sub_8289B3EC);
PPC_FUNC_IMPL(__imp__sub_8289B3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B3F0"))) PPC_WEAK_FUNC(sub_8289B3F0);
PPC_FUNC_IMPL(__imp__sub_8289B3F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b404
	if (ctx.cr6.eq) goto loc_8289B404;
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// blr 
	return;
loc_8289B404:
	// stw r4,1224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1224, ctx.r4.u32);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B410"))) PPC_WEAK_FUNC(sub_8289B410);
PPC_FUNC_IMPL(__imp__sub_8289B410) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b438
	if (ctx.cr6.eq) goto loc_8289B438;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8289b438
	if (!ctx.cr6.eq) goto loc_8289B438;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stw r11,1224(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1224, ctx.r11.u32);
	// blr 
	return;
loc_8289B438:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B440"))) PPC_WEAK_FUNC(sub_8289B440);
PPC_FUNC_IMPL(__imp__sub_8289B440) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1224(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1224);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B448"))) PPC_WEAK_FUNC(sub_8289B448);
PPC_FUNC_IMPL(__imp__sub_8289B448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1228);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b45c
	if (ctx.cr6.eq) goto loc_8289B45C;
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// blr 
	return;
loc_8289B45C:
	// stw r4,1228(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1228, ctx.r4.u32);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B468"))) PPC_WEAK_FUNC(sub_8289B468);
PPC_FUNC_IMPL(__imp__sub_8289B468) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,1228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1228);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b490
	if (ctx.cr6.eq) goto loc_8289B490;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x8289b490
	if (!ctx.cr6.eq) goto loc_8289B490;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stw r11,1228(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1228, ctx.r11.u32);
	// blr 
	return;
loc_8289B490:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B498"))) PPC_WEAK_FUNC(sub_8289B498);
PPC_FUNC_IMPL(__imp__sub_8289B498) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1228(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B4A0"))) PPC_WEAK_FUNC(sub_8289B4A0);
PPC_FUNC_IMPL(__imp__sub_8289B4A0) {
	PPC_FUNC_PROLOGUE();
	// stb r4,1280(r3)
	PPC_STORE_U8(ctx.r3.u32 + 1280, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B4A8"))) PPC_WEAK_FUNC(sub_8289B4A8);
PPC_FUNC_IMPL(__imp__sub_8289B4A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289B4B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x8289a130
	ctx.lr = 0x8289B4C4;
	sub_8289A130(ctx, base);
	// lwz r3,1164(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1164);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r4,r11,9208
	ctx.r4.s64 = ctx.r11.s64 + 9208;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r6,r4,-32
	ctx.r6.s64 = ctx.r4.s64 + -32;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,1049
	ctx.r5.s64 = 1049;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289B4F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289B4FC"))) PPC_WEAK_FUNC(sub_8289B4FC);
PPC_FUNC_IMPL(__imp__sub_8289B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B500"))) PPC_WEAK_FUNC(sub_8289B500);
PPC_FUNC_IMPL(__imp__sub_8289B500) {
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
	// lwz r11,1192(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b530
	if (ctx.cr6.eq) goto loc_8289B530;
	// stw r30,1192(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1192, ctx.r30.u32);
	// bl 0x8289d668
	ctx.lr = 0x8289B530;
	sub_8289D668(ctx, base);
loc_8289B530:
	// lwz r11,1188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1188);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b544
	if (ctx.cr6.eq) goto loc_8289B544;
	// stw r30,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r30.u32);
	// bl 0x8289d728
	ctx.lr = 0x8289B544;
	sub_8289D728(ctx, base);
loc_8289B544:
	// lwz r11,1184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b558
	if (ctx.cr6.eq) goto loc_8289B558;
	// stw r30,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r30.u32);
	// bl 0x8289d5a8
	ctx.lr = 0x8289B558;
	sub_8289D5A8(ctx, base);
loc_8289B558:
	// lwz r11,1180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b56c
	if (ctx.cr6.eq) goto loc_8289B56C;
	// stw r30,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r30.u32);
	// bl 0x8289db08
	ctx.lr = 0x8289B56C;
	sub_8289DB08(ctx, base);
loc_8289B56C:
	// lwz r11,1176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b580
	if (ctx.cr6.eq) goto loc_8289B580;
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// bl 0x8289da48
	ctx.lr = 0x8289B580;
	sub_8289DA48(ctx, base);
loc_8289B580:
	// lwz r11,1172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b594
	if (ctx.cr6.eq) goto loc_8289B594;
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// bl 0x8289d988
	ctx.lr = 0x8289B594;
	sub_8289D988(ctx, base);
loc_8289B594:
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b5a8
	if (ctx.cr6.eq) goto loc_8289B5A8;
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// bl 0x8289d7e8
	ctx.lr = 0x8289B5A8;
	sub_8289D7E8(ctx, base);
loc_8289B5A8:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
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

__attribute__((alias("__imp__sub_8289B5C4"))) PPC_WEAK_FUNC(sub_8289B5C4);
PPC_FUNC_IMPL(__imp__sub_8289B5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B5C8"))) PPC_WEAK_FUNC(sub_8289B5C8);
PPC_FUNC_IMPL(__imp__sub_8289B5C8) {
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
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8289b614
	if (ctx.cr0.eq) goto loc_8289B614;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8289b614
	if (ctx.cr6.eq) goto loc_8289B614;
	// lwz r11,20(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289b5f8
	if (ctx.cr6.lt) goto loc_8289B5F8;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
loc_8289B5F8:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// bl 0x828acd50
	ctx.lr = 0x8289B604;
	sub_828ACD50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289b640
	if (ctx.cr6.eq) goto loc_8289B640;
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289b644
	goto loc_8289B644;
loc_8289B614:
	// lwz r10,1272(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1272);
	// addi r11,r3,1252
	ctx.r11.s64 = ctx.r3.s64 + 1252;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8289b628
	if (ctx.cr6.lt) goto loc_8289B628;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8289B628:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r3,108
	ctx.r3.s64 = ctx.r3.s64 + 108;
	// bl 0x828acd50
	ctx.lr = 0x8289B634;
	sub_828ACD50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// bne cr6,0x8289b644
	if (!ctx.cr6.eq) goto loc_8289B644;
loc_8289B640:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289B644:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B654"))) PPC_WEAK_FUNC(sub_8289B654);
PPC_FUNC_IMPL(__imp__sub_8289B654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B658"))) PPC_WEAK_FUNC(sub_8289B658);
PPC_FUNC_IMPL(__imp__sub_8289B658) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289b674
	if (ctx.cr6.lt) goto loc_8289B674;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_8289B674:
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8289ef28
	ctx.lr = 0x8289B67C;
	sub_8289EF28(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289b690
	if (ctx.cr6.eq) goto loc_8289B690;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// bne cr6,0x8289b694
	if (!ctx.cr6.eq) goto loc_8289B694;
loc_8289B690:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289B694:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B6A4"))) PPC_WEAK_FUNC(sub_8289B6A4);
PPC_FUNC_IMPL(__imp__sub_8289B6A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B6A8"))) PPC_WEAK_FUNC(sub_8289B6A8);
PPC_FUNC_IMPL(__imp__sub_8289B6A8) {
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
	// addi r30,r3,100
	ctx.r30.s64 = ctx.r3.s64 + 100;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828abfa0
	ctx.lr = 0x8289B6CC;
	sub_828ABFA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8289f360
	ctx.lr = 0x8289B6D4;
	sub_8289F360(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r30.u32);
	// lbz r11,90(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289b718
	if (ctx.cr0.eq) goto loc_8289B718;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,18596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 18596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8289b70c
	if (ctx.cr6.eq) goto loc_8289B70C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289B708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_8289B70C:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// b 0x8289b71c
	goto loc_8289B71C;
loc_8289B718:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
loc_8289B71C:
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

__attribute__((alias("__imp__sub_8289B734"))) PPC_WEAK_FUNC(sub_8289B734);
PPC_FUNC_IMPL(__imp__sub_8289B734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B738"))) PPC_WEAK_FUNC(sub_8289B738);
PPC_FUNC_IMPL(__imp__sub_8289B738) {
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
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// bl 0x8289f360
	ctx.lr = 0x8289B74C;
	sub_8289F360(ctx, base);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289B760"))) PPC_WEAK_FUNC(sub_8289B760);
PPC_FUNC_IMPL(__imp__sub_8289B760) {
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
	// lbz r11,1232(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289b7d0
	if (ctx.cr0.eq) goto loc_8289B7D0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,1240(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1240);
	// lwz r3,1236(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1236);
	// bl 0x8289f5a8
	ctx.lr = 0x8289B798;
	sub_8289F5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8289b7a8
	if (ctx.cr0.eq) goto loc_8289B7A8;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8289b7d4
	goto loc_8289B7D4;
loc_8289B7A8:
	// lbz r11,1280(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1280);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289b7d0
	if (ctx.cr0.eq) goto loc_8289B7D0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r3,1284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1284);
	// bl 0x8289f5a8
	ctx.lr = 0x8289B7C4;
	sub_8289F5A8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne 0x8289b7d4
	if (!ctx.cr0.eq) goto loc_8289B7D4;
loc_8289B7D0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289B7D4:
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

__attribute__((alias("__imp__sub_8289B7EC"))) PPC_WEAK_FUNC(sub_8289B7EC);
PPC_FUNC_IMPL(__imp__sub_8289B7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B7F0"))) PPC_WEAK_FUNC(sub_8289B7F0);
PPC_FUNC_IMPL(__imp__sub_8289B7F0) {
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
	// addi r31,r3,1252
	ctx.r31.s64 = ctx.r3.s64 + 1252;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822401e0
	ctx.lr = 0x8289B81C;
	sub_822401E0(ctx, base);
	// lwz r11,1272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1272);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289b830
	if (ctx.cr6.lt) goto loc_8289B830;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289b834
	goto loc_8289B834;
loc_8289B830:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8289B834:
	// addi r3,r30,108
	ctx.r3.s64 = ctx.r30.s64 + 108;
	// bl 0x828acd50
	ctx.lr = 0x8289B83C;
	sub_828ACD50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// bne cr6,0x8289b84c
	if (!ctx.cr6.eq) goto loc_8289B84C;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289B84C:
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

__attribute__((alias("__imp__sub_8289B864"))) PPC_WEAK_FUNC(sub_8289B864);
PPC_FUNC_IMPL(__imp__sub_8289B864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289B868"))) PPC_WEAK_FUNC(sub_8289B868);
PPC_FUNC_IMPL(__imp__sub_8289B868) {
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
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fd6f90
	ctx.lr = 0x8289B890;
	sub_82FD6F90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289b8e4
	if (ctx.cr6.eq) goto loc_8289B8E4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,9064
	ctx.r4.s64 = ctx.r11.s64 + 9064;
	// bl 0x822400d8
	ctx.lr = 0x8289B8AC;
	sub_822400D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8224d3e0
	ctx.lr = 0x8289B8B8;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289B8C0;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289B8CC;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289B8DC;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289b8f0
	goto loc_8289B8F0;
loc_8289B8E4:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r11.u8);
loc_8289B8F0:
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

__attribute__((alias("__imp__sub_8289B908"))) PPC_WEAK_FUNC(sub_8289B908);
PPC_FUNC_IMPL(__imp__sub_8289B908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289B910;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83080910
	ctx.lr = 0x8289B928;
	sub_83080910(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x830810f8
	ctx.lr = 0x8289B930;
	sub_830810F8(ctx, base);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8289b944
	if (!ctx.cr0.eq) goto loc_8289B944;
loc_8289B93C:
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289b9fc
	goto loc_8289B9FC;
loc_8289B944:
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82fa7cf0
	ctx.lr = 0x8289B958;
	sub_82FA7CF0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x83080920
	ctx.lr = 0x8289B960;
	sub_83080920(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// bl 0x828abf18
	ctx.lr = 0x8289B978;
	sub_828ABF18(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8289b93c
	if (!ctx.cr6.eq) goto loc_8289B93C;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,9096
	ctx.r30.s64 = ctx.r11.s64 + 9096;
	// addi r4,r30,-8
	ctx.r4.s64 = ctx.r30.s64 + -8;
	// bl 0x822400d8
	ctx.lr = 0x8289B994;
	sub_822400D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b7f0
	ctx.lr = 0x8289B9A0;
	sub_8289B7F0(ctx, base);
	// rlwinm r29,r3,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289B9B4;
	sub_822402C8(ctx, base);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8289b93c
	if (!ctx.cr0.eq) goto loc_8289B93C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822400d8
	ctx.lr = 0x8289B9C8;
	sub_822400D8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b658
	ctx.lr = 0x8289B9D4;
	sub_8289B658(ctx, base);
	// rlwinm r30,r3,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8289B9E8;
	sub_822402C8(ctx, base);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne 0x8289b93c
	if (!ctx.cr0.eq) goto loc_8289B93C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
loc_8289B9FC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289BA04"))) PPC_WEAK_FUNC(sub_8289BA04);
PPC_FUNC_IMPL(__imp__sub_8289BA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289BA08"))) PPC_WEAK_FUNC(sub_8289BA08);
PPC_FUNC_IMPL(__imp__sub_8289BA08) {
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
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82fa7cf0
	ctx.lr = 0x8289BA38;
	sub_82FA7CF0(ctx, base);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x830181e0
	ctx.lr = 0x8289BA40;
	sub_830181E0(ctx, base);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r11,r11,-19288
	ctx.r11.s64 = ctx.r11.s64 + -19288;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r3,r1,180
	ctx.r3.s64 = ctx.r1.s64 + 180;
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x8289BA78;
	sub_82FA7CF0(ctx, base);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x83018220
	ctx.lr = 0x8289BA80;
	sub_83018220(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,28(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r10,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r10.u32);
	// bl 0x8301c830
	ctx.lr = 0x8289BA9C;
	sub_8301C830(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289baf0
	if (ctx.cr6.eq) goto loc_8289BAF0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9112
	ctx.r4.s64 = ctx.r11.s64 + 9112;
	// bl 0x822400d8
	ctx.lr = 0x8289BAB8;
	sub_822400D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BAC4;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BACC;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BAD8;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289BAE8;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289bafc
	goto loc_8289BAFC;
loc_8289BAF0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r11.u8);
loc_8289BAFC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289BB14"))) PPC_WEAK_FUNC(sub_8289BB14);
PPC_FUNC_IMPL(__imp__sub_8289BB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289BB18"))) PPC_WEAK_FUNC(sub_8289BB18);
PPC_FUNC_IMPL(__imp__sub_8289BB18) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82fd85d0
	ctx.lr = 0x8289BB44;
	sub_82FD85D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fd9638
	ctx.lr = 0x8289BB4C;
	sub_82FD9638(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bba0
	if (ctx.cr6.eq) goto loc_8289BBA0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,9144
	ctx.r4.s64 = ctx.r11.s64 + 9144;
	// bl 0x822400d8
	ctx.lr = 0x8289BB68;
	sub_822400D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BB74;
	sub_8224D3E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BB7C;
	sub_8289D6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BB88;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289BB98;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289bbac
	goto loc_8289BBAC;
loc_8289BBA0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// stb r11,92(r30)
	PPC_STORE_U8(ctx.r30.u32 + 92, ctx.r11.u8);
loc_8289BBAC:
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

__attribute__((alias("__imp__sub_8289BBC4"))) PPC_WEAK_FUNC(sub_8289BBC4);
PPC_FUNC_IMPL(__imp__sub_8289BBC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289BBC8"))) PPC_WEAK_FUNC(sub_8289BBC8);
PPC_FUNC_IMPL(__imp__sub_8289BBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289BBD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-496(r1)
	ea = -496 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// lis r10,-32003
	ctx.r10.s64 = -2097348608;
	// addi r7,r11,-24248
	ctx.r7.s64 = ctx.r11.s64 + -24248;
	// addi r6,r10,-26544
	ctx.r6.s64 = ctx.r10.s64 + -26544;
	// li r5,108
	ctx.r5.s64 = 108;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BBF4;
	sub_83018248(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// addi r31,r11,9688
	ctx.r31.s64 = ctx.r11.s64 + 9688;
	// beq cr6,0x8289bc44
	if (ctx.cr6.eq) goto loc_8289BC44;
	// addi r4,r31,-940
	ctx.r4.s64 = ctx.r31.s64 + -940;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822400d8
	ctx.lr = 0x8289BC14;
	sub_822400D8(ctx, base);
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BC20;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BC28;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BC34;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822402c8
	ctx.lr = 0x8289BC44;
	sub_822402C8(ctx, base);
loc_8289BC44:
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// lis r10,-32003
	ctx.r10.s64 = -2097348608;
	// addi r7,r11,-20816
	ctx.r7.s64 = ctx.r11.s64 + -20816;
	// addi r6,r10,-22344
	ctx.r6.s64 = ctx.r10.s64 + -22344;
	// li r5,106
	ctx.r5.s64 = 106;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BC64;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bcac
	if (ctx.cr6.eq) goto loc_8289BCAC;
	// addi r4,r31,-400
	ctx.r4.s64 = ctx.r31.s64 + -400;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x822400d8
	ctx.lr = 0x8289BC7C;
	sub_822400D8(ctx, base);
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BC88;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BC90;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BC9C;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x822402c8
	ctx.lr = 0x8289BCAC;
	sub_822402C8(ctx, base);
loc_8289BCAC:
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// lis r10,-32003
	ctx.r10.s64 = -2097348608;
	// addi r7,r11,-14856
	ctx.r7.s64 = ctx.r11.s64 + -14856;
	// addi r6,r10,-17096
	ctx.r6.s64 = ctx.r10.s64 + -17096;
	// li r5,109
	ctx.r5.s64 = 109;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BCCC;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bd14
	if (ctx.cr6.eq) goto loc_8289BD14;
	// addi r4,r31,-360
	ctx.r4.s64 = ctx.r31.s64 + -360;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822400d8
	ctx.lr = 0x8289BCE4;
	sub_822400D8(ctx, base);
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BCF0;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BCF8;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BD04;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822402c8
	ctx.lr = 0x8289BD14;
	sub_822402C8(ctx, base);
loc_8289BD14:
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// lis r10,-32003
	ctx.r10.s64 = -2097348608;
	// addi r7,r11,26904
	ctx.r7.s64 = ctx.r11.s64 + 26904;
	// addi r6,r10,25752
	ctx.r6.s64 = ctx.r10.s64 + 25752;
	// li r5,115
	ctx.r5.s64 = 115;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BD34;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bd7c
	if (ctx.cr6.eq) goto loc_8289BD7C;
	// addi r4,r31,-316
	ctx.r4.s64 = ctx.r31.s64 + -316;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822400d8
	ctx.lr = 0x8289BD4C;
	sub_822400D8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BD58;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BD60;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BD6C;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822402c8
	ctx.lr = 0x8289BD7C;
	sub_822402C8(ctx, base);
loc_8289BD7C:
	// lis r11,-32001
	ctx.r11.s64 = -2097217536;
	// lis r10,-32001
	ctx.r10.s64 = -2097217536;
	// addi r7,r11,-15104
	ctx.r7.s64 = ctx.r11.s64 + -15104;
	// addi r6,r10,-16408
	ctx.r6.s64 = ctx.r10.s64 + -16408;
	// li r5,105
	ctx.r5.s64 = 105;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BD9C;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bde4
	if (ctx.cr6.eq) goto loc_8289BDE4;
	// addi r4,r31,-268
	ctx.r4.s64 = ctx.r31.s64 + -268;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822400d8
	ctx.lr = 0x8289BDB4;
	sub_822400D8(ctx, base);
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BDC0;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BDC8;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BDD4;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822402c8
	ctx.lr = 0x8289BDE4;
	sub_822402C8(ctx, base);
loc_8289BDE4:
	// lis r11,-32001
	ctx.r11.s64 = -2097217536;
	// lis r10,-32001
	ctx.r10.s64 = -2097217536;
	// addi r7,r11,-7176
	ctx.r7.s64 = ctx.r11.s64 + -7176;
	// addi r6,r10,-9960
	ctx.r6.s64 = ctx.r10.s64 + -9960;
	// li r5,110
	ctx.r5.s64 = 110;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BE04;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289be4c
	if (ctx.cr6.eq) goto loc_8289BE4C;
	// addi r4,r31,-220
	ctx.r4.s64 = ctx.r31.s64 + -220;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822400d8
	ctx.lr = 0x8289BE1C;
	sub_822400D8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BE28;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BE30;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BE3C;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289BE4C;
	sub_822402C8(ctx, base);
loc_8289BE4C:
	// lis r11,-32000
	ctx.r11.s64 = -2097152000;
	// lis r10,-32000
	ctx.r10.s64 = -2097152000;
	// addi r7,r11,-19184
	ctx.r7.s64 = ctx.r11.s64 + -19184;
	// addi r6,r10,-21392
	ctx.r6.s64 = ctx.r10.s64 + -21392;
	// li r5,103
	ctx.r5.s64 = 103;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BE6C;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289beb4
	if (ctx.cr6.eq) goto loc_8289BEB4;
	// addi r4,r31,-172
	ctx.r4.s64 = ctx.r31.s64 + -172;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822400d8
	ctx.lr = 0x8289BE84;
	sub_822400D8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BE90;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BE98;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BEA4;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8289BEB4;
	sub_822402C8(ctx, base);
loc_8289BEB4:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// addi r7,r11,-14392
	ctx.r7.s64 = ctx.r11.s64 + -14392;
	// addi r6,r10,-15696
	ctx.r6.s64 = ctx.r10.s64 + -15696;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BED4;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bf1c
	if (ctx.cr6.eq) goto loc_8289BF1C;
	// addi r4,r31,-132
	ctx.r4.s64 = ctx.r31.s64 + -132;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822400d8
	ctx.lr = 0x8289BEEC;
	sub_822400D8(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BEF8;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BF00;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BF0C;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822402c8
	ctx.lr = 0x8289BF1C;
	sub_822402C8(ctx, base);
loc_8289BF1C:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// lis r10,-31999
	ctx.r10.s64 = -2097086464;
	// addi r7,r11,22216
	ctx.r7.s64 = ctx.r11.s64 + 22216;
	// addi r6,r10,18040
	ctx.r6.s64 = ctx.r10.s64 + 18040;
	// li r5,118
	ctx.r5.s64 = 118;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289BF3C;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bf84
	if (ctx.cr6.eq) goto loc_8289BF84;
	// addi r4,r31,-88
	ctx.r4.s64 = ctx.r31.s64 + -88;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822400d8
	ctx.lr = 0x8289BF54;
	sub_822400D8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BF60;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BF68;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BF74;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822402c8
	ctx.lr = 0x8289BF84;
	sub_822402C8(ctx, base);
loc_8289BF84:
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// lis r10,-31998
	ctx.r10.s64 = -2097020928;
	// addi r7,r11,-32624
	ctx.r7.s64 = ctx.r11.s64 + -32624;
	// addi r6,r10,-32536
	ctx.r6.s64 = ctx.r10.s64 + -32536;
	// li r5,101
	ctx.r5.s64 = 101;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x83018248
	ctx.lr = 0x8289BFA4;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289bfec
	if (ctx.cr6.eq) goto loc_8289BFEC;
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822400d8
	ctx.lr = 0x8289BFBC;
	sub_822400D8(ctx, base);
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289BFC8;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289BFD0;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289BFDC;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822402c8
	ctx.lr = 0x8289BFEC;
	sub_822402C8(ctx, base);
loc_8289BFEC:
	// lis r11,-31991
	ctx.r11.s64 = -2096562176;
	// lis r10,-31991
	ctx.r10.s64 = -2096562176;
	// addi r7,r11,-30096
	ctx.r7.s64 = ctx.r11.s64 + -30096;
	// addi r6,r10,-31936
	ctx.r6.s64 = ctx.r10.s64 + -31936;
	// li r5,103
	ctx.r5.s64 = 103;
	// li r4,66
	ctx.r4.s64 = 66;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x83018248
	ctx.lr = 0x8289C00C;
	sub_83018248(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c054
	if (ctx.cr6.eq) goto loc_8289C054;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822400d8
	ctx.lr = 0x8289C024;
	sub_822400D8(ctx, base);
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C030;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C038;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C044;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822402c8
	ctx.lr = 0x8289C054;
	sub_822402C8(ctx, base);
loc_8289C054:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// addi r1,r1,496
	ctx.r1.s64 = ctx.r1.s64 + 496;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289C060"))) PPC_WEAK_FUNC(sub_8289C060);
PPC_FUNC_IMPL(__imp__sub_8289C060) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x83018238
	ctx.lr = 0x8289C07C;
	sub_83018238(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c0d0
	if (ctx.cr6.eq) goto loc_8289C0D0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9732
	ctx.r4.s64 = ctx.r11.s64 + 9732;
	// bl 0x822400d8
	ctx.lr = 0x8289C098;
	sub_822400D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C0A4;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C0AC;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C0B8;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289C0C8;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289c154
	goto loc_8289C154;
loc_8289C0D0:
	// lwz r3,1192(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1192);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289C0E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1180);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289C100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1172);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289C118;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1176);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289C130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1168(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289C148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x8289d838
	ctx.lr = 0x8289C14C;
	sub_8289D838(ctx, base);
	// bl 0x828a6968
	ctx.lr = 0x8289C150;
	sub_828A6968(ctx, base);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289C154:
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

__attribute__((alias("__imp__sub_8289C16C"))) PPC_WEAK_FUNC(sub_8289C16C);
PPC_FUNC_IMPL(__imp__sub_8289C16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289C170"))) PPC_WEAK_FUNC(sub_8289C170);
PPC_FUNC_IMPL(__imp__sub_8289C170) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x830199b8
	ctx.lr = 0x8289C188;
	sub_830199B8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c1dc
	if (ctx.cr6.eq) goto loc_8289C1DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,9764
	ctx.r4.s64 = ctx.r11.s64 + 9764;
	// bl 0x822400d8
	ctx.lr = 0x8289C1A4;
	sub_822400D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C1B0;
	sub_8224D3E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C1B8;
	sub_8289D6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C1C4;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289C1D4;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289c1e0
	goto loc_8289C1E0;
loc_8289C1DC:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289C1E0:
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

__attribute__((alias("__imp__sub_8289C1F8"))) PPC_WEAK_FUNC(sub_8289C1F8);
PPC_FUNC_IMPL(__imp__sub_8289C1F8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,32408
	ctx.r4.s64 = ctx.r11.s64 + 32408;
	// bl 0x822400d8
	ctx.lr = 0x8289C220;
	sub_822400D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822400d8
	ctx.lr = 0x8289C230;
	sub_822400D8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289c248
	if (ctx.cr6.lt) goto loc_8289C248;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8289c24c
	goto loc_8289C24C;
loc_8289C248:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_8289C24C:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x8289C258;
	sub_82656348(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822402c8
	ctx.lr = 0x8289C270;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289C280;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8289C29C"))) PPC_WEAK_FUNC(sub_8289C29C);
PPC_FUNC_IMPL(__imp__sub_8289C29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289C2A0"))) PPC_WEAK_FUNC(sub_8289C2A0);
PPC_FUNC_IMPL(__imp__sub_8289C2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8289C2A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82899878
	ctx.lr = 0x8289C2BC;
	sub_82899878(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C2C8;
	sub_8224D3E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289C2D8;
	sub_822402C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82899798
	ctx.lr = 0x8289C2E0;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r29,r31,1204
	ctx.r29.s64 = ctx.r31.s64 + 1204;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8289f528
	ctx.lr = 0x8289C2F8;
	sub_8289F528(ctx, base);
	// lwz r11,1208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8289c368
	if (ctx.cr6.eq) goto loc_8289C368;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82899798
	ctx.lr = 0x8289C310;
	sub_82899798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x8289f2d8
	ctx.lr = 0x8289C31C;
	sub_8289F2D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c388
	if (ctx.cr6.eq) goto loc_8289C388;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,10156
	ctx.r4.s64 = ctx.r11.s64 + 10156;
	// bl 0x822400d8
	ctx.lr = 0x8289C338;
	sub_822400D8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C344;
	sub_8224D3E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C34C;
	sub_8289D6B8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C358;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8289C368;
	sub_822402C8(ctx, base);
loc_8289C368:
	// lis r31,-24566
	ctx.r31.s64 = -1609957376;
loc_8289C36C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8289C37C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8289C388:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8289fb28
	ctx.lr = 0x8289C398;
	sub_8289FB28(ctx, base);
	// lis r31,8202
	ctx.r31.s64 = 537526272;
	// b 0x8289c36c
	goto loc_8289C36C;
}

__attribute__((alias("__imp__sub_8289C3A0"))) PPC_WEAK_FUNC(sub_8289C3A0);
PPC_FUNC_IMPL(__imp__sub_8289C3A0) {
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
	// bl 0x8289d778
	ctx.lr = 0x8289C3B8;
	sub_8289D778(ctx, base);
	// stw r3,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r3.u32);
	// bl 0x8289d918
	ctx.lr = 0x8289C3C0;
	sub_8289D918(ctx, base);
	// stw r3,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r3.u32);
	// bl 0x8289d9d8
	ctx.lr = 0x8289C3C8;
	sub_8289D9D8(ctx, base);
	// stw r3,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r3.u32);
	// bl 0x8289da98
	ctx.lr = 0x8289C3D0;
	sub_8289DA98(ctx, base);
	// stw r3,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r3.u32);
	// bl 0x8289d538
	ctx.lr = 0x8289C3D8;
	sub_8289D538(ctx, base);
	// stw r3,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r3.u32);
	// bl 0x828a0508
	ctx.lr = 0x8289C3E0;
	sub_828A0508(ctx, base);
	// stw r3,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r3.u32);
	// bl 0x8289d5f8
	ctx.lr = 0x8289C3E8;
	sub_8289D5F8(ctx, base);
	// stw r3,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r3.u32);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
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

__attribute__((alias("__imp__sub_8289C404"))) PPC_WEAK_FUNC(sub_8289C404);
PPC_FUNC_IMPL(__imp__sub_8289C404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289C408"))) PPC_WEAK_FUNC(sub_8289C408);
PPC_FUNC_IMPL(__imp__sub_8289C408) {
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
	// bl 0x8289d6b8
	ctx.lr = 0x8289C418;
	sub_8289D6B8(ctx, base);
	// bl 0x8289e338
	ctx.lr = 0x8289C41C;
	sub_8289E338(ctx, base);
	// bl 0x8289e398
	ctx.lr = 0x8289C420;
	sub_8289E398(ctx, base);
	// bl 0x8289e3f8
	ctx.lr = 0x8289C424;
	sub_8289E3F8(ctx, base);
	// bl 0x8289e458
	ctx.lr = 0x8289C428;
	sub_8289E458(ctx, base);
	// bl 0x8289e4b8
	ctx.lr = 0x8289C42C;
	sub_8289E4B8(ctx, base);
	// bl 0x8289e518
	ctx.lr = 0x8289C430;
	sub_8289E518(ctx, base);
	// bl 0x8289e578
	ctx.lr = 0x8289C434;
	sub_8289E578(ctx, base);
	// bl 0x8289e5d8
	ctx.lr = 0x8289C438;
	sub_8289E5D8(ctx, base);
	// bl 0x8289d8a8
	ctx.lr = 0x8289C43C;
	sub_8289D8A8(ctx, base);
	// bl 0x8289f0f8
	ctx.lr = 0x8289C440;
	sub_8289F0F8(ctx, base);
	// bl 0x8289f170
	ctx.lr = 0x8289C444;
	sub_8289F170(ctx, base);
	// bl 0x8289f1e8
	ctx.lr = 0x8289C448;
	sub_8289F1E8(ctx, base);
	// bl 0x8289f260
	ctx.lr = 0x8289C44C;
	sub_8289F260(ctx, base);
	// bl 0x8289d838
	ctx.lr = 0x8289C450;
	sub_8289D838(ctx, base);
	// bl 0x8289e890
	ctx.lr = 0x8289C454;
	sub_8289E890(ctx, base);
	// bl 0x8289e908
	ctx.lr = 0x8289C458;
	sub_8289E908(ctx, base);
	// bl 0x8289e980
	ctx.lr = 0x8289C45C;
	sub_8289E980(ctx, base);
	// bl 0x8289e9f8
	ctx.lr = 0x8289C460;
	sub_8289E9F8(ctx, base);
	// bl 0x8289ea70
	ctx.lr = 0x8289C464;
	sub_8289EA70(ctx, base);
	// bl 0x8289d778
	ctx.lr = 0x8289C468;
	sub_8289D778(ctx, base);
	// bl 0x8289d918
	ctx.lr = 0x8289C46C;
	sub_8289D918(ctx, base);
	// bl 0x8289d9d8
	ctx.lr = 0x8289C470;
	sub_8289D9D8(ctx, base);
	// bl 0x8289da98
	ctx.lr = 0x8289C474;
	sub_8289DA98(ctx, base);
	// bl 0x8289d5f8
	ctx.lr = 0x8289C478;
	sub_8289D5F8(ctx, base);
	// bl 0x8289e2c0
	ctx.lr = 0x8289C47C;
	sub_8289E2C0(ctx, base);
	// bl 0x8289e638
	ctx.lr = 0x8289C480;
	sub_8289E638(ctx, base);
	// bl 0x8289e6b0
	ctx.lr = 0x8289C484;
	sub_8289E6B0(ctx, base);
	// bl 0x8289e728
	ctx.lr = 0x8289C488;
	sub_8289E728(ctx, base);
	// bl 0x8289e7a0
	ctx.lr = 0x8289C48C;
	sub_8289E7A0(ctx, base);
	// bl 0x8289e818
	ctx.lr = 0x8289C490;
	sub_8289E818(ctx, base);
	// bl 0x8289d538
	ctx.lr = 0x8289C494;
	sub_8289D538(ctx, base);
	// bl 0x828a0508
	ctx.lr = 0x8289C498;
	sub_828A0508(ctx, base);
	// bl 0x8289a0c0
	ctx.lr = 0x8289C49C;
	sub_8289A0C0(ctx, base);
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289C4B0"))) PPC_WEAK_FUNC(sub_8289C4B0);
PPC_FUNC_IMPL(__imp__sub_8289C4B0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82899798
	ctx.lr = 0x8289C4D0;
	sub_82899798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82899798
	ctx.lr = 0x8289C4DC;
	sub_82899798(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8301a1d0
	ctx.lr = 0x8289C4E4;
	sub_8301A1D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c598
	if (ctx.cr6.eq) goto loc_8289C598;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82899878
	ctx.lr = 0x8289C4FC;
	sub_82899878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C508;
	sub_8224D3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,9812
	ctx.r31.s64 = ctx.r11.s64 + 9812;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828a0a08
	ctx.lr = 0x8289C520;
	sub_828A0A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8243e6a8
	ctx.lr = 0x8289C530;
	sub_8243E6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8289C540;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822402c8
	ctx.lr = 0x8289C550;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289C560;
	sub_822402C8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C56C;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C574;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C580;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289C590;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289c59c
	goto loc_8289C59C;
loc_8289C598:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289C59C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289C5B4"))) PPC_WEAK_FUNC(sub_8289C5B4);
PPC_FUNC_IMPL(__imp__sub_8289C5B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289C5B8"))) PPC_WEAK_FUNC(sub_8289C5B8);
PPC_FUNC_IMPL(__imp__sub_8289C5B8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82899798
	ctx.lr = 0x8289C5D8;
	sub_82899798(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8301cf70
	ctx.lr = 0x8289C5E0;
	sub_8301CF70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c694
	if (ctx.cr6.eq) goto loc_8289C694;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82899878
	ctx.lr = 0x8289C5F8;
	sub_82899878(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C604;
	sub_8224D3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,9848
	ctx.r31.s64 = ctx.r11.s64 + 9848;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828a0a08
	ctx.lr = 0x8289C61C;
	sub_828A0A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243e6a8
	ctx.lr = 0x8289C62C;
	sub_8243E6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8289C63C;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822402c8
	ctx.lr = 0x8289C64C;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8289C65C;
	sub_822402C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C668;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C670;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C67C;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289C68C;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289c698
	goto loc_8289C698;
loc_8289C694:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289C698:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289C6B0"))) PPC_WEAK_FUNC(sub_8289C6B0);
PPC_FUNC_IMPL(__imp__sub_8289C6B0) {
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
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82899798
	ctx.lr = 0x8289C6D8;
	sub_82899798(ctx, base);
	// li r5,-1
	ctx.r5.s64 = -1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830185e0
	ctx.lr = 0x8289C6E4;
	sub_830185E0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289c798
	if (ctx.cr6.eq) goto loc_8289C798;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82899878
	ctx.lr = 0x8289C6FC;
	sub_82899878(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C708;
	sub_8224D3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,9892
	ctx.r31.s64 = ctx.r11.s64 + 9892;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828a0a08
	ctx.lr = 0x8289C720;
	sub_828A0A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8243e6a8
	ctx.lr = 0x8289C730;
	sub_8243E6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8289C740;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822402c8
	ctx.lr = 0x8289C750;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289C760;
	sub_822402C8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C76C;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C774;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C780;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289C790;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
	// b 0x8289c79c
	goto loc_8289C79C;
loc_8289C798:
	// lis r3,8202
	ctx.r3.s64 = 537526272;
loc_8289C79C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
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

__attribute__((alias("__imp__sub_8289C7B8"))) PPC_WEAK_FUNC(sub_8289C7B8);
PPC_FUNC_IMPL(__imp__sub_8289C7B8) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82899798
	ctx.lr = 0x8289C7E4;
	sub_82899798(ctx, base);
	// li r4,-1
	ctx.r4.s64 = -1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// bl 0x8301cc90
	ctx.lr = 0x8289C7F4;
	sub_8301CC90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8289c814
	if (!ctx.cr6.eq) goto loc_8289C814;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289c814
	if (ctx.cr0.eq) goto loc_8289C814;
	// lis r3,8202
	ctx.r3.s64 = 537526272;
	// b 0x8289c8b8
	goto loc_8289C8B8;
loc_8289C814:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82899878
	ctx.lr = 0x8289C820;
	sub_82899878(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C82C;
	sub_8224D3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r31,r11,9932
	ctx.r31.s64 = ctx.r11.s64 + 9932;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828a0a08
	ctx.lr = 0x8289C844;
	sub_828A0A08(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8243e6a8
	ctx.lr = 0x8289C854;
	sub_8243E6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8289C864;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822402c8
	ctx.lr = 0x8289C874;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8289C884;
	sub_822402C8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C890;
	sub_8224D3E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C898;
	sub_8289D6B8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C8A4;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289C8B4;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
loc_8289C8B8:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289C8D0"))) PPC_WEAK_FUNC(sub_8289C8D0);
PPC_FUNC_IMPL(__imp__sub_8289C8D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8289C8D8;
	__savegprlr_24(ctx, base);
	// stwu r1,-704(r1)
	ea = -704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82899878
	ctx.lr = 0x8289C8EC;
	sub_82899878(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C8F8;
	sub_8224D3E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822402c8
	ctx.lr = 0x8289C908;
	sub_822402C8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8289c91c
	if (!ctx.cr6.lt) goto loc_8289C91C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8289C91C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x828a0618
	ctx.lr = 0x8289C928;
	sub_828A0618(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289caf4
	if (ctx.cr6.eq) goto loc_8289CAF4;
	// cmpwi cr6,r3,22
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 22, ctx.xer);
	// beq cr6,0x8289caf4
	if (ctx.cr6.eq) goto loc_8289CAF4;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8289c950
	if (!ctx.cr6.lt) goto loc_8289C950;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
loc_8289C950:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r31,r11,10152
	ctx.r31.s64 = ctx.r11.s64 + 10152;
	// addi r4,r31,-108
	ctx.r4.s64 = ctx.r31.s64 + -108;
	// bl 0x822400d8
	ctx.lr = 0x8289C964;
	sub_822400D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8243e6a8
	ctx.lr = 0x8289C974;
	sub_8243E6A8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r5,r31,-112
	ctx.r5.s64 = ctx.r31.s64 + -112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8243e6a8
	ctx.lr = 0x8289C984;
	sub_8243E6A8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822402c8
	ctx.lr = 0x8289C994;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822402c8
	ctx.lr = 0x8289C9A4;
	sub_822402C8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C9B0;
	sub_8224D3E0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289C9B8;
	sub_8289D6B8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289C9C4;
	sub_828A3170(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lbz r11,14694(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14694);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289cac4
	if (ctx.cr0.eq) goto loc_8289CAC4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8224edb8
	ctx.lr = 0x8289C9E4;
	sub_8224EDB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82899878
	ctx.lr = 0x8289C9F0;
	sub_82899878(ctx, base);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8224d3e0
	ctx.lr = 0x8289C9FC;
	sub_8224D3E0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289ca10
	if (ctx.cr6.lt) goto loc_8289CA10;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8289ca14
	goto loc_8289CA14;
loc_8289CA10:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8289CA14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82899798
	ctx.lr = 0x8289CA1C;
	sub_82899798(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa0978
	ctx.lr = 0x8289CA2C;
	sub_82FA0978(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x82a78340
	ctx.lr = 0x8289CA34;
	sub_82A78340(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fa0978
	ctx.lr = 0x8289CA44;
	sub_82FA0978(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82251da0
	ctx.lr = 0x8289CA54;
	sub_82251DA0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82251a88
	ctx.lr = 0x8289CA5C;
	sub_82251A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82557028
	ctx.lr = 0x8289CA64;
	sub_82557028(ctx, base);
	// addi r4,r31,-4
	ctx.r4.s64 = ctx.r31.s64 + -4;
	// bl 0x82251da0
	ctx.lr = 0x8289CA6C;
	sub_82251DA0(ctx, base);
	// addi r4,r31,-44
	ctx.r4.s64 = ctx.r31.s64 + -44;
	// bl 0x82251da0
	ctx.lr = 0x8289CA74;
	sub_82251DA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82251a88
	ctx.lr = 0x8289CA7C;
	sub_82251A88(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82557028
	ctx.lr = 0x8289CA84;
	sub_82557028(ctx, base);
	// addi r4,r31,-48
	ctx.r4.s64 = ctx.r31.s64 + -48;
	// bl 0x82251da0
	ctx.lr = 0x8289CA8C;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82251da0
	ctx.lr = 0x8289CA94;
	sub_82251DA0(ctx, base);
	// addi r4,r31,-68
	ctx.r4.s64 = ctx.r31.s64 + -68;
	// bl 0x82251da0
	ctx.lr = 0x8289CA9C;
	sub_82251DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822402c8
	ctx.lr = 0x8289CAAC;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822402c8
	ctx.lr = 0x8289CABC;
	sub_822402C8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8224fa68
	ctx.lr = 0x8289CAC4;
	sub_8224FA68(ctx, base);
loc_8289CAC4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8289CAD4;
	sub_822402C8(ctx, base);
	// lis r31,-24566
	ctx.r31.s64 = -1609957376;
loc_8289CAD8:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289CAE8;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,704
	ctx.r1.s64 = ctx.r1.s64 + 704;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8289CAF4:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lbz r11,14694(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 14694);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8289cbfc
	if (ctx.cr0.eq) goto loc_8289CBFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8224edb8
	ctx.lr = 0x8289CB14;
	sub_8224EDB8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82899878
	ctx.lr = 0x8289CB20;
	sub_82899878(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x8224d3e0
	ctx.lr = 0x8289CB2C;
	sub_8224D3E0(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8289cb40
	if (ctx.cr6.lt) goto loc_8289CB40;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8289cb44
	goto loc_8289CB44;
loc_8289CB40:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_8289CB44:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82899798
	ctx.lr = 0x8289CB4C;
	sub_82899798(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fa0978
	ctx.lr = 0x8289CB5C;
	sub_82FA0978(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82a78340
	ctx.lr = 0x8289CB64;
	sub_82A78340(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82fa0978
	ctx.lr = 0x8289CB74;
	sub_82FA0978(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// addi r31,r11,10152
	ctx.r31.s64 = ctx.r11.s64 + 10152;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// addi r4,r31,-116
	ctx.r4.s64 = ctx.r31.s64 + -116;
	// bl 0x82251da0
	ctx.lr = 0x8289CB8C;
	sub_82251DA0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82251a88
	ctx.lr = 0x8289CB94;
	sub_82251A88(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82557028
	ctx.lr = 0x8289CB9C;
	sub_82557028(ctx, base);
	// addi r4,r31,-120
	ctx.r4.s64 = ctx.r31.s64 + -120;
	// bl 0x82251da0
	ctx.lr = 0x8289CBA4;
	sub_82251DA0(ctx, base);
	// addi r4,r31,-160
	ctx.r4.s64 = ctx.r31.s64 + -160;
	// bl 0x82251da0
	ctx.lr = 0x8289CBAC;
	sub_82251DA0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82251a88
	ctx.lr = 0x8289CBB4;
	sub_82251A88(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82557028
	ctx.lr = 0x8289CBBC;
	sub_82557028(ctx, base);
	// addi r4,r31,-164
	ctx.r4.s64 = ctx.r31.s64 + -164;
	// bl 0x82251da0
	ctx.lr = 0x8289CBC4;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82251da0
	ctx.lr = 0x8289CBCC;
	sub_82251DA0(ctx, base);
	// addi r4,r31,-180
	ctx.r4.s64 = ctx.r31.s64 + -180;
	// bl 0x82251da0
	ctx.lr = 0x8289CBD4;
	sub_82251DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822402c8
	ctx.lr = 0x8289CBE4;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822402c8
	ctx.lr = 0x8289CBF4;
	sub_822402C8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x8224fa68
	ctx.lr = 0x8289CBFC;
	sub_8224FA68(ctx, base);
loc_8289CBFC:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x828a0110
	ctx.lr = 0x8289CC0C;
	sub_828A0110(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r29,1204
	ctx.r4.s64 = ctx.r29.s64 + 1204;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x828a0170
	ctx.lr = 0x8289CC1C;
	sub_828A0170(ctx, base);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x82899858
	ctx.lr = 0x8289CC24;
	sub_82899858(ctx, base);
	// lis r31,8202
	ctx.r31.s64 = 537526272;
	// b 0x8289cad8
	goto loc_8289CAD8;
}

__attribute__((alias("__imp__sub_8289CC2C"))) PPC_WEAK_FUNC(sub_8289CC2C);
PPC_FUNC_IMPL(__imp__sub_8289CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289CC30"))) PPC_WEAK_FUNC(sub_8289CC30);
PPC_FUNC_IMPL(__imp__sub_8289CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8289CC38;
	__savegprlr_26(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8224d3e0
	ctx.lr = 0x8289CC48;
	sub_8224D3E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289CC58;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289CC68;
	sub_822402C8(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,32416
	ctx.r28.s64 = ctx.r11.s64 + 32416;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8289CC7C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8289f3e0
	ctx.lr = 0x8289CC88;
	sub_8289F3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r26,r11,10256
	ctx.r26.s64 = ctx.r11.s64 + 10256;
	// bne 0x8289ccb0
	if (!ctx.cr0.eq) goto loc_8289CCB0;
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r29,216
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 216, ctx.xer);
	// blt cr6,0x8289cc7c
	if (ctx.cr6.lt) goto loc_8289CC7C;
	// b 0x8289cd54
	goto loc_8289CD54;
loc_8289CCB0:
	// mulli r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 * 12;
	// addi r30,r28,4
	ctx.r30.s64 = ctx.r28.s64 + 4;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x822400d8
	ctx.lr = 0x8289CCC4;
	sub_822400D8(ctx, base);
	// addi r4,r26,-56
	ctx.r4.s64 = ctx.r26.s64 + -56;
	// bl 0x822e3740
	ctx.lr = 0x8289CCCC;
	sub_822E3740(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r26,-44
	ctx.r4.s64 = ctx.r26.s64 + -44;
	// bne 0x8289ccdc
	if (!ctx.cr0.eq) goto loc_8289CCDC;
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
loc_8289CCDC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8289CCE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8289cce0
	if (!ctx.cr6.eq) goto loc_8289CCE0;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82240328
	ctx.lr = 0x8289CD04;
	sub_82240328(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822402c8
	ctx.lr = 0x8289CD14;
	sub_822402C8(ctx, base);
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_8289CD1C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8289cd1c
	if (!ctx.cr6.eq) goto loc_8289CD1C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82240328
	ctx.lr = 0x8289CD40;
	sub_82240328(ctx, base);
	// addi r11,r28,8
	ctx.r11.s64 = ctx.r28.s64 + 8;
	// lbzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,1232(r27)
	PPC_STORE_U8(ctx.r27.u32 + 1232, ctx.r11.u8);
loc_8289CD54:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8289cd80
	if (!ctx.cr6.eq) goto loc_8289CD80;
	// addi r4,r26,-28
	ctx.r4.s64 = ctx.r26.s64 + -28;
	// li r5,14
	ctx.r5.s64 = 14;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82240328
	ctx.lr = 0x8289CD70;
	sub_82240328(ctx, base);
	// addi r4,r26,-12
	ctx.r4.s64 = ctx.r26.s64 + -12;
	// li r5,11
	ctx.r5.s64 = 11;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82240328
	ctx.lr = 0x8289CD80;
	sub_82240328(ctx, base);
loc_8289CD80:
	// lwz r11,1168(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1168);
	// li r5,92
	ctx.r5.s64 = 92;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x828a0a70
	ctx.lr = 0x8289CD98;
	sub_828A0A70(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1168(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 1168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289CDAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r31,r3,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822402c8
	ctx.lr = 0x8289CDC0;
	sub_822402C8(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8289ce04
	if (ctx.cr0.eq) goto loc_8289CE04;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289CDD8;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289CDE8;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8289CDF8;
	sub_822402C8(ctx, base);
	// lis r3,-24566
	ctx.r3.s64 = -1609957376;
loc_8289CDFC:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_8289CE04:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e3798
	ctx.lr = 0x8289CE18;
	sub_822E3798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x828998b0
	ctx.lr = 0x8289CE24;
	sub_828998B0(ctx, base);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289CE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r31,r3,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82899858
	ctx.lr = 0x8289CE44;
	sub_82899858(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822402c8
	ctx.lr = 0x8289CE54;
	sub_822402C8(ctx, base);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8289ce98
	if (ctx.cr0.eq) goto loc_8289CE98;
	// lis r31,-24566
	ctx.r31.s64 = -1609957376;
loc_8289CE60:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8289CE70;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8289CE80;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8289CE90;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8289cdfc
	goto loc_8289CDFC;
loc_8289CE98:
	// lis r31,8202
	ctx.r31.s64 = 537526272;
	// b 0x8289ce60
	goto loc_8289CE60;
}

__attribute__((alias("__imp__sub_8289CEA0"))) PPC_WEAK_FUNC(sub_8289CEA0);
PPC_FUNC_IMPL(__imp__sub_8289CEA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224edb8
	ctx.lr = 0x8289CEC4;
	sub_8224EDB8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-1509
	ctx.r4.s64 = ctx.r11.s64 + -1509;
	// bl 0x82251da0
	ctx.lr = 0x8289CED4;
	sub_82251DA0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82252010
	ctx.lr = 0x8289CEE0;
	sub_82252010(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8224fa68
	ctx.lr = 0x8289CEE8;
	sub_8224FA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8289CF00"))) PPC_WEAK_FUNC(sub_8289CF00);
PPC_FUNC_IMPL(__imp__sub_8289CF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8289CF08;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,11476
	ctx.r11.s64 = ctx.r11.s64 + 11476;
	// stb r28,88(r3)
	PPC_STORE_U8(ctx.r3.u32 + 88, ctx.r28.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8289d6b8
	ctx.lr = 0x8289CF28;
	sub_8289D6B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828a3160
	ctx.lr = 0x8289CF30;
	sub_828A3160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b500
	ctx.lr = 0x8289CF38;
	sub_8289B500(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r30,r11,8984
	ctx.r30.s64 = ctx.r11.s64 + 8984;
	// blt 0x8289cf68
	if (ctx.cr0.lt) goto loc_8289CF68;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-664
	ctx.r6.s64 = ctx.r30.s64 + -664;
	// addi r4,r30,-640
	ctx.r4.s64 = ctx.r30.s64 + -640;
	// li r5,558
	ctx.r5.s64 = 558;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289CF68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289CF68:
	// bl 0x83018d78
	ctx.lr = 0x8289CF6C;
	sub_83018D78(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8289cfb4
	if (ctx.cr6.eq) goto loc_8289CFB4;
	// addi r4,r30,-560
	ctx.r4.s64 = ctx.r30.s64 + -560;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822400d8
	ctx.lr = 0x8289CF84;
	sub_822400D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8224d3e0
	ctx.lr = 0x8289CF90;
	sub_8224D3E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x8289d6b8
	ctx.lr = 0x8289CF98;
	sub_8289D6B8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x828a3170
	ctx.lr = 0x8289CFA4;
	sub_828A3170(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289CFB4;
	sub_822402C8(ctx, base);
loc_8289CFB4:
	// stb r28,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r28.u8);
	// addi r6,r30,-516
	ctx.r6.s64 = ctx.r30.s64 + -516;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r4,r30,-456
	ctx.r4.s64 = ctx.r30.s64 + -456;
	// li r5,587
	ctx.r5.s64 = 587;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289CFD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b208
	ctx.lr = 0x8289CFE0;
	sub_8289B208(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d008
	if (ctx.cr0.lt) goto loc_8289D008;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-484
	ctx.r6.s64 = ctx.r30.s64 + -484;
	// addi r4,r30,-376
	ctx.r4.s64 = ctx.r30.s64 + -376;
	// li r5,596
	ctx.r5.s64 = 596;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D008:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b258
	ctx.lr = 0x8289D010;
	sub_8289B258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d038
	if (ctx.cr0.lt) goto loc_8289D038;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-296
	ctx.r6.s64 = ctx.r30.s64 + -296;
	// addi r4,r30,-192
	ctx.r4.s64 = ctx.r30.s64 + -192;
	// li r5,605
	ctx.r5.s64 = 605;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D038;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D038:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b6a8
	ctx.lr = 0x8289D040;
	sub_8289B6A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d068
	if (ctx.cr0.lt) goto loc_8289D068;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-268
	ctx.r6.s64 = ctx.r30.s64 + -268;
	// addi r4,r30,-112
	ctx.r4.s64 = ctx.r30.s64 + -112;
	// li r5,614
	ctx.r5.s64 = 614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D068;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D068:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b2a8
	ctx.lr = 0x8289D070;
	sub_8289B2A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d098
	if (ctx.cr0.lt) goto loc_8289D098;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-32
	ctx.r6.s64 = ctx.r30.s64 + -32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,623
	ctx.r5.s64 = 623;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D098:
	// addi r3,r31,1284
	ctx.r3.s64 = ctx.r31.s64 + 1284;
	// bl 0x822cf490
	ctx.lr = 0x8289D0A0;
	sub_822CF490(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1252
	ctx.r3.s64 = ctx.r31.s64 + 1252;
	// bl 0x822402c8
	ctx.lr = 0x8289D0B0;
	sub_822402C8(ctx, base);
	// addi r3,r31,1236
	ctx.r3.s64 = ctx.r31.s64 + 1236;
	// bl 0x822cf490
	ctx.lr = 0x8289D0B8;
	sub_822CF490(ctx, base);
	// lwz r6,1208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// addi r4,r31,1204
	ctx.r4.s64 = ctx.r31.s64 + 1204;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x828a0590
	ctx.lr = 0x8289D0CC;
	sub_828A0590(ctx, base);
	// lwz r3,1208(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// bl 0x82691540
	ctx.lr = 0x8289D0D4;
	sub_82691540(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r11,11016
	ctx.r11.s64 = ctx.r11.s64 + 11016;
	// addi r10,r10,10988
	ctx.r10.s64 = ctx.r10.s64 + 10988;
	// addi r9,r9,10980
	ctx.r9.s64 = ctx.r9.s64 + 10980;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// stw r9,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r9.u32);
	// bl 0x828abea8
	ctx.lr = 0x8289D100;
	sub_828ABEA8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,10316
	ctx.r11.s64 = ctx.r11.s64 + 10316;
	// addi r10,r10,-1732
	ctx.r10.s64 = ctx.r10.s64 + -1732;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289D120"))) PPC_WEAK_FUNC(sub_8289D120);
PPC_FUNC_IMPL(__imp__sub_8289D120) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8289D128;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r7,r11,11476
	ctx.r7.s64 = ctx.r11.s64 + 11476;
	// addi r8,r8,10316
	ctx.r8.s64 = ctx.r8.s64 + 10316;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// lfs f0,10324(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 10324);
	ctx.f0.f64 = double(temp.f32);
	// li r9,20
	ctx.r9.s64 = 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lis r10,40
	ctx.r10.s64 = 2621440;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lis r7,2
	ctx.r7.s64 = 131072;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
	// addi r3,r3,100
	ctx.r3.s64 = ctx.r3.s64 + 100;
	// stw r6,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r6.u32);
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stb r30,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r30.u8);
	// stb r30,89(r31)
	PPC_STORE_U8(ctx.r31.u32 + 89, ctx.r30.u8);
	// stb r30,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r30.u8);
	// stb r30,91(r31)
	PPC_STORE_U8(ctx.r31.u32 + 91, ctx.r30.u8);
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stb r30,93(r31)
	PPC_STORE_U8(ctx.r31.u32 + 93, ctx.r30.u8);
	// stb r8,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r8.u8);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bl 0x8289eae8
	ctx.lr = 0x8289D1F0;
	sub_8289EAE8(ctx, base);
	// bl 0x8289e2c0
	ctx.lr = 0x8289D1F4;
	sub_8289E2C0(ctx, base);
	// stw r3,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r3.u32);
	// stw r30,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r30,1172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1172, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// addi r3,r31,1204
	ctx.r3.s64 = ctx.r31.s64 + 1204;
	// stw r30,1180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1180, ctx.r30.u32);
	// stw r30,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r30.u32);
	// stw r30,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r30.u32);
	// stw r30,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r30.u32);
	// stb r30,1196(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1196, ctx.r30.u8);
	// stw r30,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r30.u32);
	// bl 0x8289ee98
	ctx.lr = 0x8289D22C;
	sub_8289EE98(ctx, base);
	// lis r11,-32118
	ctx.r11.s64 = -2104885248;
	// stw r30,1224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1224, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,-20008
	ctx.r11.s64 = ctx.r11.s64 + -20008;
	// stw r30,1228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1228, ctx.r30.u32);
	// stb r30,1232(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1232, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// addi r3,r31,1252
	ctx.r3.s64 = ctx.r31.s64 + 1252;
	// stw r30,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r30.u32);
	// addi r29,r31,1236
	ctx.r29.s64 = ctx.r31.s64 + 1236;
	// stw r30,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r30.u32);
	// stw r30,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r30.u32);
	// bl 0x822402c8
	ctx.lr = 0x8289D264;
	sub_822402C8(ctx, base);
	// stb r30,1280(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1280, ctx.r30.u8);
	// addi r27,r31,1284
	ctx.r27.s64 = ctx.r31.s64 + 1284;
	// stw r30,1284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1284, ctx.r30.u32);
	// stw r30,1288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1288, ctx.r30.u32);
	// stw r30,1292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1292, ctx.r30.u32);
	// bl 0x8289d6b8
	ctx.lr = 0x8289D27C;
	sub_8289D6B8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,8240
	ctx.r30.s64 = ctx.r11.s64 + 8240;
	// beq 0x8289d2ac
	if (ctx.cr0.eq) goto loc_8289D2AC;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-884
	ctx.r6.s64 = ctx.r30.s64 + -884;
	// addi r4,r30,-856
	ctx.r4.s64 = ctx.r30.s64 + -856;
	// li r5,383
	ctx.r5.s64 = 383;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D2AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D2AC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b868
	ctx.lr = 0x8289D2B4;
	sub_8289B868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d2dc
	if (ctx.cr0.lt) goto loc_8289D2DC;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-776
	ctx.r6.s64 = ctx.r30.s64 + -776;
	// addi r4,r30,-752
	ctx.r4.s64 = ctx.r30.s64 + -752;
	// li r5,392
	ctx.r5.s64 = 392;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D2DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D2DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289b908
	ctx.lr = 0x8289D2E4;
	sub_8289B908(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d30c
	if (ctx.cr0.lt) goto loc_8289D30C;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-672
	ctx.r6.s64 = ctx.r30.s64 + -672;
	// addi r4,r30,-616
	ctx.r4.s64 = ctx.r30.s64 + -616;
	// li r5,401
	ctx.r5.s64 = 401;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D30C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289ba08
	ctx.lr = 0x8289D314;
	sub_8289BA08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d33c
	if (ctx.cr0.lt) goto loc_8289D33C;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-536
	ctx.r6.s64 = ctx.r30.s64 + -536;
	// addi r4,r30,-512
	ctx.r4.s64 = ctx.r30.s64 + -512;
	// li r5,410
	ctx.r5.s64 = 410;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D33C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D33C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289bb18
	ctx.lr = 0x8289D344;
	sub_8289BB18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d36c
	if (ctx.cr0.lt) goto loc_8289D36C;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-432
	ctx.r6.s64 = ctx.r30.s64 + -432;
	// addi r4,r30,-408
	ctx.r4.s64 = ctx.r30.s64 + -408;
	// li r5,419
	ctx.r5.s64 = 419;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D36C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D36C:
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-644
	ctx.r6.s64 = ctx.r30.s64 + -644;
	// addi r4,r30,-328
	ctx.r4.s64 = ctx.r30.s64 + -328;
	// li r5,430
	ctx.r5.s64 = 430;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D38C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x830181d0
	ctx.lr = 0x8289D390;
	sub_830181D0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8289d3b8
	if (ctx.cr0.eq) goto loc_8289D3B8;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-248
	ctx.r6.s64 = ctx.r30.s64 + -248;
	// addi r4,r30,-208
	ctx.r4.s64 = ctx.r30.s64 + -208;
	// li r5,439
	ctx.r5.s64 = 439;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D3B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D3B8:
	// bl 0x830181d0
	ctx.lr = 0x8289D3BC;
	sub_830181D0(ctx, base);
	// stb r3,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r3.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289bbc8
	ctx.lr = 0x8289D3C8;
	sub_8289BBC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d3f0
	if (ctx.cr0.lt) goto loc_8289D3F0;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-128
	ctx.r6.s64 = ctx.r30.s64 + -128;
	// addi r4,r30,-104
	ctx.r4.s64 = ctx.r30.s64 + -104;
	// li r5,452
	ctx.r5.s64 = 452;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D3F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D3F0:
	// lfs f1,40(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8301abc8
	ctx.lr = 0x8289D3F8;
	sub_8301ABC8(ctx, base);
	// bl 0x83018228
	ctx.lr = 0x8289D3FC;
	sub_83018228(ctx, base);
	// addi r11,r3,-63
	ctx.r11.s64 = ctx.r3.s64 + -63;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,94(r31)
	PPC_STORE_U8(ctx.r31.u32 + 94, ctx.r11.u8);
	// bl 0x8289c3a0
	ctx.lr = 0x8289D414;
	sub_8289C3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8289d43c
	if (ctx.cr0.lt) goto loc_8289D43C;
	// lwz r3,1164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// addi r6,r30,-24
	ctx.r6.s64 = ctx.r30.s64 + -24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,476
	ctx.r5.s64 = 476;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D43C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D43C:
	// bl 0x8301d968
	ctx.lr = 0x8289D440;
	sub_8301D968(ctx, base);
	// stw r3,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8289c408
	ctx.lr = 0x8289D44C;
	sub_8289C408(ctx, base);
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e3660
	ctx.lr = 0x8289D458;
	sub_822E3660(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-32768
	ctx.r30.s64 = ctx.r11.s64 + -32768;
	// addi r28,r30,-136
	ctx.r28.s64 = ctx.r30.s64 + -136;
loc_8289D464:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822400d8
	ctx.lr = 0x8289D470;
	sub_822400D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233b8e0
	ctx.lr = 0x8289D47C;
	sub_8233B8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8289D48C;
	sub_822402C8(ctx, base);
	// addi r11,r30,-136
	ctx.r11.s64 = ctx.r30.s64 + -136;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r11,r11,136
	ctx.r11.s64 = ctx.r11.s64 + 136;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8289d464
	if (ctx.cr6.lt) goto loc_8289D464;
	// lwz r4,1240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1240);
	// li r28,28
	ctx.r28.s64 = 28;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r11,r28
	ctx.r5.s32 = ctx.r11.s32 / ctx.r28.s32;
	// bl 0x828a1270
	ctx.lr = 0x8289D4B8;
	sub_828A1270(ctx, base);
	// li r4,143
	ctx.r4.s64 = 143;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x822e3660
	ctx.lr = 0x8289D4C4;
	sub_822E3660(ctx, base);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8289D4C8:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x822400d8
	ctx.lr = 0x8289D4D4;
	sub_822400D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8233b8e0
	ctx.lr = 0x8289D4E0;
	sub_8233B8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8289D4F0;
	sub_822402C8(ctx, base);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r11,r30,572
	ctx.r11.s64 = ctx.r30.s64 + 572;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8289d4c8
	if (ctx.cr6.lt) goto loc_8289D4C8;
	// lwz r4,1288(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1288);
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r11,r3,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r3.s64;
	// divw r5,r11,r28
	ctx.r5.s32 = ctx.r11.s32 / ctx.r28.s32;
	// bl 0x828a1270
	ctx.lr = 0x8289D514;
	sub_828A1270(ctx, base);
	// bl 0x8289d6b8
	ctx.lr = 0x8289D518;
	sub_8289D6B8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828a3160
	ctx.lr = 0x8289D520;
	sub_828A3160(ctx, base);
	// lbz r11,93(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 93);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8289D534"))) PPC_WEAK_FUNC(sub_8289D534);
PPC_FUNC_IMPL(__imp__sub_8289D534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289D538"))) PPC_WEAK_FUNC(sub_8289D538);
PPC_FUNC_IMPL(__imp__sub_8289D538) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289d590
	if (!ctx.cr6.eq) goto loc_8289D590;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x8289D564;
	sub_8283B938(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8283b5b8
	ctx.lr = 0x8289D578;
	sub_8283B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8289d588
	if (ctx.cr0.eq) goto loc_8289D588;
	// bl 0x828a23e0
	ctx.lr = 0x8289D584;
	sub_828A23E0(ctx, base);
	// b 0x8289d58c
	goto loc_8289D58C;
loc_8289D588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289D58C:
	// stw r3,14720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14720, ctx.r3.u32);
loc_8289D590:
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

__attribute__((alias("__imp__sub_8289D5A4"))) PPC_WEAK_FUNC(sub_8289D5A4);
PPC_FUNC_IMPL(__imp__sub_8289D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289D5A8"))) PPC_WEAK_FUNC(sub_8289D5A8);
PPC_FUNC_IMPL(__imp__sub_8289D5A8) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14720(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14720);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8289d5dc
	if (ctx.cr6.eq) goto loc_8289D5DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D5DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14720, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8289D5F8"))) PPC_WEAK_FUNC(sub_8289D5F8);
PPC_FUNC_IMPL(__imp__sub_8289D5F8) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289d650
	if (!ctx.cr6.eq) goto loc_8289D650;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x8289D624;
	sub_8283B938(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// li r4,20
	ctx.r4.s64 = 20;
	// bl 0x8283b5b8
	ctx.lr = 0x8289D638;
	sub_8283B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8289d648
	if (ctx.cr0.eq) goto loc_8289D648;
	// bl 0x828a2bb0
	ctx.lr = 0x8289D644;
	sub_828A2BB0(ctx, base);
	// b 0x8289d64c
	goto loc_8289D64C;
loc_8289D648:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289D64C:
	// stw r3,14724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14724, ctx.r3.u32);
loc_8289D650:
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

__attribute__((alias("__imp__sub_8289D664"))) PPC_WEAK_FUNC(sub_8289D664);
PPC_FUNC_IMPL(__imp__sub_8289D664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289D668"))) PPC_WEAK_FUNC(sub_8289D668);
PPC_FUNC_IMPL(__imp__sub_8289D668) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14724);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8289d69c
	if (ctx.cr6.eq) goto loc_8289D69C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D69C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14724, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8289D6B8"))) PPC_WEAK_FUNC(sub_8289D6B8);
PPC_FUNC_IMPL(__imp__sub_8289D6B8) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14728);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289d710
	if (!ctx.cr6.eq) goto loc_8289D710;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x8289D6E4;
	sub_8283B938(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// li r4,52
	ctx.r4.s64 = 52;
	// bl 0x8283b5b8
	ctx.lr = 0x8289D6F8;
	sub_8283B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8289d708
	if (ctx.cr0.eq) goto loc_8289D708;
	// bl 0x828a3310
	ctx.lr = 0x8289D704;
	sub_828A3310(ctx, base);
	// b 0x8289d70c
	goto loc_8289D70C;
loc_8289D708:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289D70C:
	// stw r3,14728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14728, ctx.r3.u32);
loc_8289D710:
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

__attribute__((alias("__imp__sub_8289D724"))) PPC_WEAK_FUNC(sub_8289D724);
PPC_FUNC_IMPL(__imp__sub_8289D724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289D728"))) PPC_WEAK_FUNC(sub_8289D728);
PPC_FUNC_IMPL(__imp__sub_8289D728) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14732(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8289d75c
	if (ctx.cr6.eq) goto loc_8289D75C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D75C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14732, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8289D778"))) PPC_WEAK_FUNC(sub_8289D778);
PPC_FUNC_IMPL(__imp__sub_8289D778) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8289d7d0
	if (!ctx.cr6.eq) goto loc_8289D7D0;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x8289D7A4;
	sub_8283B938(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,14712
	ctx.r3.s64 = ctx.r11.s64 + 14712;
	// li r4,36
	ctx.r4.s64 = 36;
	// bl 0x8283b5b8
	ctx.lr = 0x8289D7B8;
	sub_8283B5B8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8289d7c8
	if (ctx.cr0.eq) goto loc_8289D7C8;
	// bl 0x828a3dc8
	ctx.lr = 0x8289D7C4;
	sub_828A3DC8(ctx, base);
	// b 0x8289d7cc
	goto loc_8289D7CC;
loc_8289D7C8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8289D7CC:
	// stw r3,14736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14736, ctx.r3.u32);
loc_8289D7D0:
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

__attribute__((alias("__imp__sub_8289D7E4"))) PPC_WEAK_FUNC(sub_8289D7E4);
PPC_FUNC_IMPL(__imp__sub_8289D7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8289D7E8"))) PPC_WEAK_FUNC(sub_8289D7E8);
PPC_FUNC_IMPL(__imp__sub_8289D7E8) {
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
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwz r3,14736(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14736);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8289d81c
	if (ctx.cr6.eq) goto loc_8289D81C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8289D81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8289D81C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 14736, ctx.r11.u32);
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

