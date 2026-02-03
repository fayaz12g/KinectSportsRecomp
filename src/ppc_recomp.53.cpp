#include "ppc_recomp_shared.h"

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

__attribute__((alias("__imp__sub_8252405C"))) PPC_WEAK_FUNC(sub_8252405C);
PPC_FUNC_IMPL(__imp__sub_8252405C) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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

__attribute__((alias("__imp__sub_8252B2A8"))) PPC_WEAK_FUNC(sub_8252B2A8);
PPC_FUNC_IMPL(__imp__sub_8252B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252B2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8252b3d8
	if (ctx.cr6.eq) goto loc_8252B3D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a4180
	ctx.lr = 0x8252B2CC;
	sub_826A4180(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822c2418
	ctx.lr = 0x8252B2EC;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B2F0;
	sub_826A4210(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,15136
	ctx.r29.s64 = ctx.r11.s64 + 15136;
	// lwz r4,15136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15136);
	// bl 0x826a72e8
	ctx.lr = 0x8252B308;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b318
	if (ctx.cr6.eq) goto loc_8252B318;
	// bl 0x82241d18
	ctx.lr = 0x8252B318;
	sub_82241D18(ctx, base);
loc_8252B318:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x8252B334;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B338;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252B348;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b358
	if (ctx.cr6.eq) goto loc_8252B358;
	// bl 0x82241d18
	ctx.lr = 0x8252B358;
	sub_82241D18(ctx, base);
loc_8252B358:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x8252B374;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B378;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252B388;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b398
	if (ctx.cr6.eq) goto loc_8252B398;
	// bl 0x82241d18
	ctx.lr = 0x8252B398;
	sub_82241D18(ctx, base);
loc_8252B398:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x8252B3B4;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B3B8;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252B3C8;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b3d8
	if (ctx.cr6.eq) goto loc_8252B3D8;
	// bl 0x82241d18
	ctx.lr = 0x8252B3D8;
	sub_82241D18(ctx, base);
loc_8252B3D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b3e8
	if (ctx.cr6.eq) goto loc_8252B3E8;
	// bl 0x82241d18
	ctx.lr = 0x8252B3E8;
	sub_82241D18(ctx, base);
loc_8252B3E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B3F0"))) PPC_WEAK_FUNC(sub_8252B3F0);
PPC_FUNC_IMPL(__imp__sub_8252B3F0) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b424
	if (ctx.cr6.eq) goto loc_8252B424;
	// bl 0x82920258
	ctx.lr = 0x8252B418;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8252b428
	if (ctx.cr6.eq) goto loc_8252B428;
loc_8252B424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252B428:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b44c
	if (!ctx.cr0.eq) goto loc_8252B44C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x8252B438;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b44c
	if (!ctx.cr0.eq) goto loc_8252B44C;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252b450
	if (ctx.cr0.eq) goto loc_8252B450;
loc_8252B44C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8252B450:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8252B470"))) PPC_WEAK_FUNC(sub_8252B470);
PPC_FUNC_IMPL(__imp__sub_8252B470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8252B478;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82546708
	ctx.lr = 0x8252B498;
	sub_82546708(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8252b584
	if (ctx.cr0.eq) goto loc_8252B584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82546b30
	ctx.lr = 0x8252B4A8;
	sub_82546B30(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// li r30,-1
	ctx.r30.s64 = -1;
	// divwu r26,r3,r11
	ctx.r26.u32 = ctx.r3.u32 / ctx.r11.u32;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,21292
	ctx.r27.s64 = ctx.r11.s64 + 21292;
loc_8252B4C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825562b8
	ctx.lr = 0x8252B4D0;
	sub_825562B8(ctx, base);
	// mulli r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 * 36;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x82546708
	ctx.lr = 0x8252B4EC;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82adfe80
	ctx.lr = 0x8252B4F4;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8252b514
	if (ctx.cr6.eq) goto loc_8252B514;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8252b524
	if (!ctx.cr6.eq) goto loc_8252B524;
loc_8252B514:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8252b554
	if (ctx.cr6.eq) goto loc_8252B554;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252b554
	if (!ctx.cr6.eq) goto loc_8252B554;
loc_8252B524:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b534
	if (ctx.cr6.eq) goto loc_8252B534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252B534;
	sub_825469E0(ctx, base);
loc_8252B534:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 10, ctx.xer);
	// blt cr6,0x8252b4c0
	if (ctx.cr6.lt) goto loc_8252B4C0;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252B550;
	sub_82FA77C0(ctx, base);
	// b 0x8252b574
	goto loc_8252B574;
loc_8252B554:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252B564;
	sub_82FA77C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b574
	if (ctx.cr6.eq) goto loc_8252B574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252B574;
	sub_825469E0(ctx, base);
loc_8252B574:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252B57C;
	sub_825469E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252b588
	goto loc_8252B588;
loc_8252B584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252B588:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B590"))) PPC_WEAK_FUNC(sub_8252B590);
PPC_FUNC_IMPL(__imp__sub_8252B590) {
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
	// bne cr6,0x8252b5d8
	if (!ctx.cr6.eq) goto loc_8252B5D8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B5B4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b5d8
	if (!ctx.cr0.eq) goto loc_8252B5D8;
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
	ctx.lr = 0x8252B5D8;
	sub_82240040(ctx, base);
loc_8252B5D8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12020
	ctx.r11.s64 = ctx.r11.s64 + 12020;
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

__attribute__((alias("__imp__sub_8252B604"))) PPC_WEAK_FUNC(sub_8252B604);
PPC_FUNC_IMPL(__imp__sub_8252B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B608"))) PPC_WEAK_FUNC(sub_8252B608);
PPC_FUNC_IMPL(__imp__sub_8252B608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B614"))) PPC_WEAK_FUNC(sub_8252B614);
PPC_FUNC_IMPL(__imp__sub_8252B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B618"))) PPC_WEAK_FUNC(sub_8252B618);
PPC_FUNC_IMPL(__imp__sub_8252B618) {
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
	// bne cr6,0x8252b660
	if (!ctx.cr6.eq) goto loc_8252B660;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B63C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b660
	if (!ctx.cr0.eq) goto loc_8252B660;
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
	ctx.lr = 0x8252B660;
	sub_82240040(ctx, base);
loc_8252B660:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12044
	ctx.r11.s64 = ctx.r11.s64 + 12044;
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

__attribute__((alias("__imp__sub_8252B68C"))) PPC_WEAK_FUNC(sub_8252B68C);
PPC_FUNC_IMPL(__imp__sub_8252B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B690"))) PPC_WEAK_FUNC(sub_8252B690);
PPC_FUNC_IMPL(__imp__sub_8252B690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8252B698;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,1704
	ctx.r29.s64 = ctx.r30.s64 + 1704;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,21120
	ctx.r27.s64 = ctx.r11.s64 + 21120;
loc_8252B6B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252b6cc
	if (ctx.cr6.eq) goto loc_8252B6CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
loc_8252B6CC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825291d0
	ctx.lr = 0x8252B6EC;
	sub_825291D0(ctx, base);
	// lwz r11,2000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
	// lwz r11,2004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
	// lbz r11,69(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252b76c
	if (ctx.cr0.eq) goto loc_8252B76C;
	// bl 0x8226d8e8
	ctx.lr = 0x8252B714;
	sub_8226D8E8(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226ecf0
	ctx.lr = 0x8252B720;
	sub_8226ECF0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b76c
	if (!ctx.cr6.eq) goto loc_8252B76C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8252b76c
	if (ctx.cr6.eq) goto loc_8252B76C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x8252b754
	goto loc_8252B754;
loc_8252B744:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8252b76c
	if (ctx.cr6.eq) goto loc_8252B76C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8252B754:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252b744
	if (!ctx.cr6.eq) goto loc_8252B744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527c88
	ctx.lr = 0x8252B768;
	sub_82527C88(ctx, base);
	// b 0x8252b770
	goto loc_8252B770;
loc_8252B76C:
	// stw r26,2004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2004, ctx.r26.u32);
loc_8252B770:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8252b6b8
	if (ctx.cr6.lt) goto loc_8252B6B8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B788"))) PPC_WEAK_FUNC(sub_8252B788);
PPC_FUNC_IMPL(__imp__sub_8252B788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27504
	ctx.r3.s64 = ctx.r11.s64 + -27504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B794"))) PPC_WEAK_FUNC(sub_8252B794);
PPC_FUNC_IMPL(__imp__sub_8252B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B798"))) PPC_WEAK_FUNC(sub_8252B798);
PPC_FUNC_IMPL(__imp__sub_8252B798) {
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
	// bne cr6,0x8252b7e0
	if (!ctx.cr6.eq) goto loc_8252B7E0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B7BC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b7e0
	if (!ctx.cr0.eq) goto loc_8252B7E0;
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
	ctx.lr = 0x8252B7E0;
	sub_82240040(ctx, base);
loc_8252B7E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12068
	ctx.r11.s64 = ctx.r11.s64 + 12068;
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

__attribute__((alias("__imp__sub_8252B80C"))) PPC_WEAK_FUNC(sub_8252B80C);
PPC_FUNC_IMPL(__imp__sub_8252B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B810"))) PPC_WEAK_FUNC(sub_8252B810);
PPC_FUNC_IMPL(__imp__sub_8252B810) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8252b840
	if (ctx.cr6.lt) goto loc_8252B840;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// b 0x8252b8cc
	goto loc_8252B8CC;
loc_8252B840:
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252b8cc
	if (ctx.cr6.eq) goto loc_8252B8CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8252b8cc
	if (ctx.cr6.eq) goto loc_8252B8CC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252b8cc
	if (!ctx.cr6.eq) goto loc_8252B8CC;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b8cc
	if (!ctx.cr6.eq) goto loc_8252B8CC;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528678
	ctx.lr = 0x8252B884;
	sub_82528678(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b898
	if (ctx.cr6.eq) goto loc_8252B898;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a4180
	ctx.lr = 0x8252B898;
	sub_826A4180(ctx, base);
loc_8252B898:
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
loc_8252B89C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825293c0
	ctx.lr = 0x8252B8A8;
	sub_825293C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8252b89c
	if (ctx.cr6.lt) goto loc_8252B89C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// beq cr6,0x8252b8cc
	if (ctx.cr6.eq) goto loc_8252B8CC;
	// bl 0x82241d18
	ctx.lr = 0x8252B8CC;
	sub_82241D18(ctx, base);
loc_8252B8CC:
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

__attribute__((alias("__imp__sub_8252B8E4"))) PPC_WEAK_FUNC(sub_8252B8E4);
PPC_FUNC_IMPL(__imp__sub_8252B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B8E8"))) PPC_WEAK_FUNC(sub_8252B8E8);
PPC_FUNC_IMPL(__imp__sub_8252B8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B8F4"))) PPC_WEAK_FUNC(sub_8252B8F4);
PPC_FUNC_IMPL(__imp__sub_8252B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B8F8"))) PPC_WEAK_FUNC(sub_8252B8F8);
PPC_FUNC_IMPL(__imp__sub_8252B8F8) {
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
	// bne cr6,0x8252b940
	if (!ctx.cr6.eq) goto loc_8252B940;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B91C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b940
	if (!ctx.cr0.eq) goto loc_8252B940;
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
	ctx.lr = 0x8252B940;
	sub_82240040(ctx, base);
loc_8252B940:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12092
	ctx.r11.s64 = ctx.r11.s64 + 12092;
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

__attribute__((alias("__imp__sub_8252B96C"))) PPC_WEAK_FUNC(sub_8252B96C);
PPC_FUNC_IMPL(__imp__sub_8252B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B970"))) PPC_WEAK_FUNC(sub_8252B970);
PPC_FUNC_IMPL(__imp__sub_8252B970) {
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
	// lwz r31,1556(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252ba04
	if (!ctx.cr6.eq) goto loc_8252BA04;
	// lwz r10,1496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// li r8,56
	ctx.r8.s64 = 56;
	// lwz r9,1584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r7,1772(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r6,1768(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw r8,r7,r8
	ctx.r8.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8252b9cc
	if (ctx.cr6.lt) goto loc_8252B9CC;
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
loc_8252B9CC:
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8252ba04
	if (ctx.cr6.eq) goto loc_8252BA04;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252b9fc
	if (ctx.cr6.eq) goto loc_8252B9FC;
loc_8252B9E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// bl 0x82503dd0
	ctx.lr = 0x8252B9EC;
	sub_82503DD0(ctx, base);
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8252b9e0
	if (ctx.cr6.lt) goto loc_8252B9E0;
loc_8252B9FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825049f0
	ctx.lr = 0x8252BA04;
	sub_825049F0(ctx, base);
loc_8252BA04:
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

__attribute__((alias("__imp__sub_8252BA1C"))) PPC_WEAK_FUNC(sub_8252BA1C);
PPC_FUNC_IMPL(__imp__sub_8252BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BA20"))) PPC_WEAK_FUNC(sub_8252BA20);
PPC_FUNC_IMPL(__imp__sub_8252BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27424
	ctx.r3.s64 = ctx.r11.s64 + -27424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252BA2C"))) PPC_WEAK_FUNC(sub_8252BA2C);
PPC_FUNC_IMPL(__imp__sub_8252BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BA30"))) PPC_WEAK_FUNC(sub_8252BA30);
PPC_FUNC_IMPL(__imp__sub_8252BA30) {
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
	// bne cr6,0x8252ba78
	if (!ctx.cr6.eq) goto loc_8252BA78;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x8252BA54;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252ba78
	if (!ctx.cr0.eq) goto loc_8252BA78;
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
	ctx.lr = 0x8252BA78;
	sub_82240040(ctx, base);
loc_8252BA78:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8252BAAC"))) PPC_WEAK_FUNC(sub_8252BAAC);
PPC_FUNC_IMPL(__imp__sub_8252BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BAB0"))) PPC_WEAK_FUNC(sub_8252BAB0);
PPC_FUNC_IMPL(__imp__sub_8252BAB0) {
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
	// bl 0x8252b3f0
	ctx.lr = 0x8252BAD4;
	sub_8252B3F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8252bb44
	if (ctx.cr6.eq) goto loc_8252BB44;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252bb1c
	if (!ctx.cr6.gt) goto loc_8252BB1C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1444
	ctx.r11.s64 = 1444;
loc_8252BAFC:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8252bb0c
	if (!ctx.cr6.eq) goto loc_8252BB0C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8252BB0C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252bafc
	if (ctx.cr6.lt) goto loc_8252BAFC;
loc_8252BB1C:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bb44
	if (!ctx.cr0.eq) goto loc_8252BB44;
	// addi r11,r10,361
	ctx.r11.s64 = ctx.r10.s64 + 361;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8252BB44:
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

__attribute__((alias("__imp__sub_8252BB5C"))) PPC_WEAK_FUNC(sub_8252BB5C);
PPC_FUNC_IMPL(__imp__sub_8252BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BB60"))) PPC_WEAK_FUNC(sub_8252BB60);
PPC_FUNC_IMPL(__imp__sub_8252BB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27384
	ctx.r3.s64 = ctx.r11.s64 + -27384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252BB6C"))) PPC_WEAK_FUNC(sub_8252BB6C);
PPC_FUNC_IMPL(__imp__sub_8252BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BB70"))) PPC_WEAK_FUNC(sub_8252BB70);
PPC_FUNC_IMPL(__imp__sub_8252BB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252BB78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252BB90;
	sub_82FA77C0(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r10,5228
	ctx.r9.s64 = ctx.r10.s64 + 5228;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r10,r27,-8
	ctx.r10.s64 = ctx.r27.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8252BBB4:
	// stwu r26,24(r10)
	ea = 24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252bbb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252BBB4;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r11,-16224
	ctx.r11.s64 = ctx.r11.s64 + -16224;
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// li r3,120
	ctx.r3.s64 = 120;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8252BBF4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252bc1c
	if (ctx.cr0.eq) goto loc_8252BC1C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82503ac8
	ctx.lr = 0x8252BC18;
	sub_82503AC8(ctx, base);
	// b 0x8252bc20
	goto loc_8252BC20;
loc_8252BC1C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252BC20:
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8252BC2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252BC34;
	sub_82F91940(ctx, base);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x8252bc2c
	if (!ctx.cr0.eq) goto loc_8252BC2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252BC50"))) PPC_WEAK_FUNC(sub_8252BC50);
PPC_FUNC_IMPL(__imp__sub_8252BC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252BC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r28,r11,12140
	ctx.r28.s64 = ctx.r11.s64 + 12140;
loc_8252BC70:
	// lwz r8,128(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252bc94
	goto loc_8252BC94;
loc_8252BC80:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bca0
	if (ctx.cr6.eq) goto loc_8252BCA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BC94:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252bc80
	if (!ctx.cr6.eq) goto loc_8252BC80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8252BCA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252bd14
	if (ctx.cr6.eq) goto loc_8252BD14;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8252bcc8
	goto loc_8252BCC8;
loc_8252BCB4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bd54
	if (ctx.cr6.eq) goto loc_8252BD54;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BCC8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252bcb4
	if (!ctx.cr6.eq) goto loc_8252BCB4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8252BCD4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r4,1320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x8252BCF0;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252BCF4;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252BD04;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bd14
	if (ctx.cr6.eq) goto loc_8252BD14;
	// bl 0x82241d18
	ctx.lr = 0x8252BD14;
	sub_82241D18(ctx, base);
loc_8252BD14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8252bc70
	if (ctx.cr6.lt) goto loc_8252BC70;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bd30
	if (ctx.cr6.eq) goto loc_8252BD30;
	// bl 0x82503788
	ctx.lr = 0x8252BD30;
	sub_82503788(ctx, base);
loc_8252BD30:
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252BD38:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252BD44;
	sub_82F91940(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252bd38
	if (!ctx.cr0.lt) goto loc_8252BD38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8252BD54:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8252bcd4
	goto loc_8252BCD4;
}

__attribute__((alias("__imp__sub_8252BD5C"))) PPC_WEAK_FUNC(sub_8252BD5C);
PPC_FUNC_IMPL(__imp__sub_8252BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BD60"))) PPC_WEAK_FUNC(sub_8252BD60);
PPC_FUNC_IMPL(__imp__sub_8252BD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252BD68;
	__savegprlr_27(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// vor v3,v1,v1
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lfs f2,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r11,12152
	ctx.r29.s64 = ctx.r11.s64 + 12152;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82502928
	ctx.lr = 0x8252BDC4;
	sub_82502928(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x82503c90
	ctx.lr = 0x8252BDDC;
	sub_82503C90(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252be00
	goto loc_8252BE00;
loc_8252BDEC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8252bec8
	if (ctx.cr6.eq) goto loc_8252BEC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BE00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252bdec
	if (!ctx.cr6.eq) goto loc_8252BDEC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8252BE0C:
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,1324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r4,1320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x8252BE28;
	sub_822C2418(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,434
	ctx.r3.s64 = ctx.r1.s64 + 434;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252BE44;
	sub_82FA7CF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// bl 0x8259c8e0
	ctx.lr = 0x8252BE60;
	sub_8259C8E0(ctx, base);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e4d50
	ctx.lr = 0x8252BE74;
	sub_822E4D50(ctx, base);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,12176
	ctx.r4.s64 = ctx.r10.s64 + 12176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x826a7620
	ctx.lr = 0x8252BE94;
	sub_826A7620(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8234cb18
	ctx.lr = 0x8252BEA0;
	sub_8234CB18(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e4d00
	ctx.lr = 0x8252BEA8;
	sub_822E4D00(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252beb8
	if (ctx.cr6.eq) goto loc_8252BEB8;
	// bl 0x82241d18
	ctx.lr = 0x8252BEB8;
	sub_82241D18(ctx, base);
loc_8252BEB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252BEC0;
	sub_82F91940(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8252BEC8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8252be0c
	goto loc_8252BE0C;
}

__attribute__((alias("__imp__sub_8252BED0"))) PPC_WEAK_FUNC(sub_8252BED0);
PPC_FUNC_IMPL(__imp__sub_8252BED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252BED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r28,r11,12140
	ctx.r28.s64 = ctx.r11.s64 + 12140;
loc_8252BEF0:
	// lwz r8,128(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252bf14
	goto loc_8252BF14;
loc_8252BF00:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bf20
	if (ctx.cr6.eq) goto loc_8252BF20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BF14:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252bf00
	if (!ctx.cr6.eq) goto loc_8252BF00;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8252BF20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252bf94
	if (ctx.cr6.eq) goto loc_8252BF94;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8252bf48
	goto loc_8252BF48;
loc_8252BF34:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bfcc
	if (ctx.cr6.eq) goto loc_8252BFCC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BF48:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252bf34
	if (!ctx.cr6.eq) goto loc_8252BF34;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8252BF54:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r4,1320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x8252BF70;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252BF74;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252BF84;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bf94
	if (ctx.cr6.eq) goto loc_8252BF94;
	// bl 0x82241d18
	ctx.lr = 0x8252BF94;
	sub_82241D18(ctx, base);
loc_8252BF94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8252bef0
	if (ctx.cr6.lt) goto loc_8252BEF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82503dd0
	ctx.lr = 0x8252BFAC;
	sub_82503DD0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82503dd0
	ctx.lr = 0x8252BFB8;
	sub_82503DD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82503dd0
	ctx.lr = 0x8252BFC4;
	sub_82503DD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8252BFCC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8252bf54
	goto loc_8252BF54;
}

__attribute__((alias("__imp__sub_8252BFD4"))) PPC_WEAK_FUNC(sub_8252BFD4);
PPC_FUNC_IMPL(__imp__sub_8252BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BFD8"))) PPC_WEAK_FUNC(sub_8252BFD8);
PPC_FUNC_IMPL(__imp__sub_8252BFD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c014
	goto loc_8252C014;
loc_8252C000:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252c020
	if (ctx.cr6.eq) goto loc_8252C020;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252C014:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252c000
	if (!ctx.cr6.eq) goto loc_8252C000;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252C020:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c088
	if (ctx.cr6.eq) goto loc_8252C088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502850
	ctx.lr = 0x8252C030;
	sub_82502850(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c088
	if (ctx.cr6.eq) goto loc_8252C088;
	// lwz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8252c050
	if (ctx.cr6.eq) goto loc_8252C050;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8252c088
	if (!ctx.cr6.eq) goto loc_8252C088;
loc_8252C050:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825787a8
	ctx.lr = 0x8252C088;
	sub_825787A8(ctx, base);
loc_8252C088:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8252C0A0"))) PPC_WEAK_FUNC(sub_8252C0A0);
PPC_FUNC_IMPL(__imp__sub_8252C0A0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252c0d0
	if (!ctx.cr6.eq) goto loc_8252C0D0;
	// b 0x82fa1518
	sub_82FA1518(ctx, base);
	return;
loc_8252C0D0:
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

__attribute__((alias("__imp__sub_8252C0E4"))) PPC_WEAK_FUNC(sub_8252C0E4);
PPC_FUNC_IMPL(__imp__sub_8252C0E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C0E8"))) PPC_WEAK_FUNC(sub_8252C0E8);
PPC_FUNC_IMPL(__imp__sub_8252C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252C0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8252C114;
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
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252c134
	if (ctx.cr6.eq) goto loc_8252C134;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252C134;
	sub_82241D18(ctx, base);
loc_8252C134:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c180
	if (ctx.cr0.eq) goto loc_8252C180;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C148;
	sub_822E4D50(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252C158;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-13556
	ctx.r4.s64 = ctx.r11.s64 + -13556;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C170;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c180
	if (ctx.cr6.eq) goto loc_8252C180;
	// bl 0x82241d18
	ctx.lr = 0x8252C180;
	sub_82241D18(ctx, base);
loc_8252C180:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8252C188;
	sub_822E4D00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C190"))) PPC_WEAK_FUNC(sub_8252C190);
PPC_FUNC_IMPL(__imp__sub_8252C190) {
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
	// bl 0x8252c1e0
	ctx.lr = 0x8252C1B0;
	sub_8252C1E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c1c0
	if (ctx.cr0.eq) goto loc_8252C1C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252C1C0;
	sub_82691540(ctx, base);
loc_8252C1C0:
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

__attribute__((alias("__imp__sub_8252C1DC"))) PPC_WEAK_FUNC(sub_8252C1DC);
PPC_FUNC_IMPL(__imp__sub_8252C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C1E0"))) PPC_WEAK_FUNC(sub_8252C1E0);
PPC_FUNC_IMPL(__imp__sub_8252C1E0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,12424
	ctx.r11.s64 = ctx.r11.s64 + 12424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826a70d8
	ctx.lr = 0x8252C20C;
	sub_826A70D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c21c
	if (ctx.cr6.eq) goto loc_8252C21C;
	// bl 0x82241d18
	ctx.lr = 0x8252C21C;
	sub_82241D18(ctx, base);
loc_8252C21C:
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

__attribute__((alias("__imp__sub_8252C230"))) PPC_WEAK_FUNC(sub_8252C230);
PPC_FUNC_IMPL(__imp__sub_8252C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252C238;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C258:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C258;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C270;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C290;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252C2A8;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,12300
	ctx.r4.s64 = ctx.r10.s64 + 12300;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C2CC;
	sub_826A7620(ctx, base);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252C2D4:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252C2E0;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252c2d4
	if (!ctx.cr0.lt) goto loc_8252C2D4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C2F0"))) PPC_WEAK_FUNC(sub_8252C2F0);
PPC_FUNC_IMPL(__imp__sub_8252C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252C2F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C320:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C320;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C338;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C358;
	sub_822E4D50(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8252C378;
	sub_822E4D50(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
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
	ctx.lr = 0x8252C398;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252C3B0;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,12340
	ctx.r4.s64 = ctx.r10.s64 + 12340;
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C3D4;
	sub_826A7620(ctx, base);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8252C3DC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252C3E8;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252c3dc
	if (!ctx.cr0.lt) goto loc_8252C3DC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C3F8"))) PPC_WEAK_FUNC(sub_8252C3F8);
PPC_FUNC_IMPL(__imp__sub_8252C3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252C400;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C424:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C424;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C43C;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C45C;
	sub_822E4D50(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8252C47C;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252C494;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,12380
	ctx.r4.s64 = ctx.r10.s64 + 12380;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C4B8;
	sub_826A7620(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8252C4C0:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252C4CC;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252c4c0
	if (!ctx.cr0.lt) goto loc_8252C4C0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C4DC"))) PPC_WEAK_FUNC(sub_8252C4DC);
PPC_FUNC_IMPL(__imp__sub_8252C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C4E0"))) PPC_WEAK_FUNC(sub_8252C4E0);
PPC_FUNC_IMPL(__imp__sub_8252C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252C4E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
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
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252c514
	if (!ctx.cr6.eq) goto loc_8252C514;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// b 0x8252c52c
	goto loc_8252C52C;
loc_8252C514:
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
loc_8252C52C:
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
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
	ctx.lr = 0x8252C560;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,12484
	ctx.r11.s64 = ctx.r11.s64 + 12484;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,368
	ctx.r29.s64 = ctx.r31.s64 + 368;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// bl 0x8226c200
	ctx.lr = 0x8252C58C;
	sub_8226C200(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// stw r27,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r27.u32);
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// bl 0x8252c8c0
	ctx.lr = 0x8252C5D0;
	sub_8252C8C0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C5EC;
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
	ctx.lr = 0x8252C614;
	sub_8259C8E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// bl 0x8226c200
	ctx.lr = 0x8252C624;
	sub_8226C200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82524730
	ctx.lr = 0x8252C640;
	sub_82524730(ctx, base);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82519160
	ctx.lr = 0x8252C650;
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
	ctx.lr = 0x8252C664;
	sub_826A80E0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c674
	if (ctx.cr6.eq) goto loc_8252C674;
	// bl 0x82241d18
	ctx.lr = 0x8252C674;
	sub_82241D18(ctx, base);
loc_8252C674:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252C67C;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C688"))) PPC_WEAK_FUNC(sub_8252C688);
PPC_FUNC_IMPL(__imp__sub_8252C688) {
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
	// lwz r3,392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,12484
	ctx.r11.s64 = ctx.r11.s64 + 12484;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8252c6c8
	if (ctx.cr6.eq) goto loc_8252C6C8;
	// bl 0x82524840
	ctx.lr = 0x8252C6C0;
	sub_82524840(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
loc_8252C6C8:
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82f91940
	ctx.lr = 0x8252C6D0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518fd0
	ctx.lr = 0x8252C6D8;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c6e8
	if (ctx.cr0.eq) goto loc_8252C6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252C6E8;
	sub_82691540(ctx, base);
loc_8252C6E8:
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

__attribute__((alias("__imp__sub_8252C704"))) PPC_WEAK_FUNC(sub_8252C704);
PPC_FUNC_IMPL(__imp__sub_8252C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C708"))) PPC_WEAK_FUNC(sub_8252C708);
PPC_FUNC_IMPL(__imp__sub_8252C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252C710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c8b4
	if (ctx.cr6.eq) goto loc_8252C8B4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// lwz r27,21120(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8252c8b4
	if (ctx.cr6.eq) goto loc_8252C8B4;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,14984
	ctx.r28.s64 = ctx.r11.s64 + 14984;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8252C74C:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8252c7a4
	if (!ctx.cr6.gt) goto loc_8252C7A4;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252C768:
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c794
	if (ctx.cr6.eq) goto loc_8252C794;
	// lwz r6,240(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	// rlwinm r4,r11,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c7bc
	if (!ctx.cr0.eq) goto loc_8252C7BC;
loc_8252C794:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8252c768
	if (ctx.cr6.lt) goto loc_8252C768;
loc_8252C7A4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c868
	goto loc_8252C868;
loc_8252C7BC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c7ec
	goto loc_8252C7EC;
loc_8252C7D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8252c7f8
	if (ctx.cr6.eq) goto loc_8252C7F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8252C7EC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252c7d4
	if (!ctx.cr6.eq) goto loc_8252C7D4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252C7F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c828
	if (ctx.cr6.eq) goto loc_8252C828;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x8252c82c
	if (!ctx.cr0.eq) goto loc_8252C82C;
loc_8252C828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C82C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x8252ca48
	ctx.lr = 0x8252C848;
	sub_8252CA48(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8252c890
	goto loc_8252C890;
loc_8252C850:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8252c874
	if (ctx.cr6.eq) goto loc_8252C874;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8252C868:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252c850
	if (!ctx.cr6.eq) goto loc_8252C850;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252C874:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252ca48
	ctx.lr = 0x8252C88C;
	sub_8252CA48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_8252C890:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252C89C;
	sub_82519230(ctx, base);
	// b 0x8252c8a4
	goto loc_8252C8A4;
loc_8252C8A0:
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
loc_8252C8A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x8252c74c
	if (ctx.cr6.lt) goto loc_8252C74C;
loc_8252C8B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C8BC"))) PPC_WEAK_FUNC(sub_8252C8BC);
PPC_FUNC_IMPL(__imp__sub_8252C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C8C0"))) PPC_WEAK_FUNC(sub_8252C8C0);
PPC_FUNC_IMPL(__imp__sub_8252C8C0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C8F4;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,274
	ctx.r3.s64 = ctx.r1.s64 + 274;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C908;
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
	ctx.lr = 0x8252C91C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12468
	ctx.r4.s64 = ctx.r10.s64 + 12468;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8252C944;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,12448
	ctx.r4.s64 = ctx.r11.s64 + 12448;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x8259c8e0
	ctx.lr = 0x8252C964;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,12428
	ctx.r4.s64 = ctx.r11.s64 + 12428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8259c8e0
	ctx.lr = 0x8252C984;
	sub_8259C8E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C994:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C994;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C9AC;
	sub_822E4D50(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C9C0;
	sub_822E4D50(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8252C9D4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8252C9E8;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-13760
	ctx.r4.s64 = ctx.r11.s64 + -13760;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252CA00;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ca10
	if (ctx.cr6.eq) goto loc_8252CA10;
	// bl 0x82241d18
	ctx.lr = 0x8252CA10;
	sub_82241D18(ctx, base);
loc_8252CA10:
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252CA18:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252CA24;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252ca18
	if (!ctx.cr0.lt) goto loc_8252CA18;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_8252CA44"))) PPC_WEAK_FUNC(sub_8252CA44);
PPC_FUNC_IMPL(__imp__sub_8252CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CA48"))) PPC_WEAK_FUNC(sub_8252CA48);
PPC_FUNC_IMPL(__imp__sub_8252CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252CA50;
	__savegprlr_29(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252CA70:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252ca70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252CA70;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252CA88;
	sub_822E4D50(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252CAA8;
	sub_822E4D50(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252CAC8;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6348
	ctx.r4.s64 = ctx.r11.s64 + 6348;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252CAE0;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252caf0
	if (ctx.cr6.eq) goto loc_8252CAF0;
	// bl 0x82241d18
	ctx.lr = 0x8252CAF0;
	sub_82241D18(ctx, base);
loc_8252CAF0:
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8252CAF8:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252CB04;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252caf8
	if (!ctx.cr0.lt) goto loc_8252CAF8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CB14"))) PPC_WEAK_FUNC(sub_8252CB14);
PPC_FUNC_IMPL(__imp__sub_8252CB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CB18"))) PPC_WEAK_FUNC(sub_8252CB18);
PPC_FUNC_IMPL(__imp__sub_8252CB18) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8252c708
	ctx.lr = 0x8252CB38;
	sub_8252C708(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cb4c
	if (ctx.cr6.eq) goto loc_8252CB4C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252CB4C;
	sub_82524A90(ctx, base);
loc_8252CB4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82519310
	ctx.lr = 0x8252CB58;
	sub_82519310(ctx, base);
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

__attribute__((alias("__imp__sub_8252CB70"))) PPC_WEAK_FUNC(sub_8252CB70);
PPC_FUNC_IMPL(__imp__sub_8252CB70) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cbb8
	if (ctx.cr6.eq) goto loc_8252CBB8;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8252cbb0
	if (ctx.cr6.eq) goto loc_8252CBB0;
	// bl 0x8226c3a0
	ctx.lr = 0x8252CBB0;
	sub_8226C3A0(ctx, base);
loc_8252CBB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,404(r6)
	PPC_STORE_U32(ctx.r6.u32 + 404, ctx.r11.u32);
loc_8252CBB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CBC8"))) PPC_WEAK_FUNC(sub_8252CBC8);
PPC_FUNC_IMPL(__imp__sub_8252CBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8252CBD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
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
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252cc10
	if (!ctx.cr6.eq) goto loc_8252CC10;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// b 0x8252cc28
	goto loc_8252CC28;
loc_8252CC10:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,6380
	ctx.r10.s64 = ctx.r10.s64 + 6380;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_8252CC28:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
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
	ctx.lr = 0x8252CC5C;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,13008
	ctx.r11.s64 = ctx.r11.s64 + 13008;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// bl 0x8226c200
	ctx.lr = 0x8252CC88;
	sub_8226C200(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r27,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r27.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r26,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r26.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r11,r11,-10568
	ctx.r11.s64 = ctx.r11.s64 + -10568;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r25,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r25.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r8,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r8.u32);
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252CD0C;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f0,112(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// bl 0x82519160
	ctx.lr = 0x8252CD28;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12684
	ctx.r4.s64 = ctx.r11.s64 + 12684;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x8252CD40;
	sub_826A7620(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cd50
	if (ctx.cr6.eq) goto loc_8252CD50;
	// bl 0x82241d18
	ctx.lr = 0x8252CD50;
	sub_82241D18(ctx, base);
loc_8252CD50:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d00
	ctx.lr = 0x8252CD58;
	sub_822E4D00(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252cd6c
	if (!ctx.cr6.eq) goto loc_8252CD6C;
	// bl 0x822599a0
	ctx.lr = 0x8252CD6C;
	sub_822599A0(ctx, base);
loc_8252CD6C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r29,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r29.u32);
	// beq cr6,0x8252cd98
	if (ctx.cr6.eq) goto loc_8252CD98;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252cd98
	if (!ctx.cr6.eq) goto loc_8252CD98;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252CD94;
	sub_82519230(ctx, base);
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
loc_8252CD98:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252CDA0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CDAC"))) PPC_WEAK_FUNC(sub_8252CDAC);
PPC_FUNC_IMPL(__imp__sub_8252CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CDB0"))) PPC_WEAK_FUNC(sub_8252CDB0);
PPC_FUNC_IMPL(__imp__sub_8252CDB0) {
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
	// bl 0x8252ce00
	ctx.lr = 0x8252CDD0;
	sub_8252CE00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cde0
	if (ctx.cr0.eq) goto loc_8252CDE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252CDE0;
	sub_82691540(ctx, base);
loc_8252CDE0:
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

__attribute__((alias("__imp__sub_8252CDFC"))) PPC_WEAK_FUNC(sub_8252CDFC);
PPC_FUNC_IMPL(__imp__sub_8252CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CE00"))) PPC_WEAK_FUNC(sub_8252CE00);
PPC_FUNC_IMPL(__imp__sub_8252CE00) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,13008
	ctx.r11.s64 = ctx.r11.s64 + 13008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8252CE30;
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
	// beq cr6,0x8252ce50
	if (ctx.cr6.eq) goto loc_8252CE50;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252CE50;
	sub_82241D18(ctx, base);
loc_8252CE50:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cec8
	if (ctx.cr0.eq) goto loc_8252CEC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252CE64;
	sub_82519160(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4210
	ctx.lr = 0x8252CE6C;
	sub_826A4210(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12672
	ctx.r4.s64 = ctx.r11.s64 + 12672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a72e8
	ctx.lr = 0x8252CE80;
	sub_826A72E8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ce90
	if (ctx.cr6.eq) goto loc_8252CE90;
	// bl 0x82241d18
	ctx.lr = 0x8252CE90;
	sub_82241D18(ctx, base);
loc_8252CE90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82519160
	ctx.lr = 0x8252CE9C;
	sub_82519160(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4210
	ctx.lr = 0x8252CEA4;
	sub_826A4210(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7844
	ctx.r4.s64 = ctx.r11.s64 + 7844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a72e8
	ctx.lr = 0x8252CEB8;
	sub_826A72E8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cec8
	if (ctx.cr6.eq) goto loc_8252CEC8;
	// bl 0x82241d18
	ctx.lr = 0x8252CEC8;
	sub_82241D18(ctx, base);
loc_8252CEC8:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cee8
	if (ctx.cr6.eq) goto loc_8252CEE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252CEE4;
	sub_8253D820(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8252CEE8:
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252CEFC;
	sub_825191A8(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf10
	if (ctx.cr6.eq) goto loc_8252CF10;
	// bl 0x82524840
	ctx.lr = 0x8252CF0C;
	sub_82524840(ctx, base);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
loc_8252CF10:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf2c
	if (ctx.cr6.eq) goto loc_8252CF2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252CF28;
	sub_8253D820(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8252CF2C:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf48
	if (ctx.cr6.eq) goto loc_8252CF48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252CF44;
	sub_8253D820(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
loc_8252CF48:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252cf60
	if (!ctx.cr6.eq) goto loc_8252CF60;
	// bl 0x822599a0
	ctx.lr = 0x8252CF5C;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252CF60:
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82f91940
	ctx.lr = 0x8252CF6C;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518fd0
	ctx.lr = 0x8252CF74;
	sub_82518FD0(ctx, base);
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

__attribute__((alias("__imp__sub_8252CF8C"))) PPC_WEAK_FUNC(sub_8252CF8C);
PPC_FUNC_IMPL(__imp__sub_8252CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CF90"))) PPC_WEAK_FUNC(sub_8252CF90);
PPC_FUNC_IMPL(__imp__sub_8252CF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252CF98;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82519310
	ctx.lr = 0x8252CFAC;
	sub_82519310(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8252cfc4
	if (!ctx.cr6.eq) goto loc_8252CFC4;
	// bl 0x8254abe0
	ctx.lr = 0x8252CFC0;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8252CFC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c1b0
	ctx.lr = 0x8252CFD0;
	sub_8254C1B0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252d0d0
	if (ctx.cr6.eq) goto loc_8252D0D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x8252CFEC;
	sub_824261E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252d028
	if (ctx.cr6.eq) goto loc_8252D028;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252D010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252D024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8252d02c
	goto loc_8252D02C;
loc_8252D028:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8252D02C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne 0x8252d058
	if (!ctx.cr0.eq) goto loc_8252D058;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d058
	if (!ctx.cr6.eq) goto loc_8252D058;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252D054;
	sub_82519230(ctx, base);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_8252D058:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8252D060;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d094
	if (!ctx.cr0.eq) goto loc_8252D094;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d088
	if (!ctx.cr6.eq) goto loc_8252D088;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252D084;
	sub_82519230(ctx, base);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_8252D088:
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r28.u32);
loc_8252D094:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8252D09C;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d0c0
	if (!ctx.cr0.eq) goto loc_8252D0C0;
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d0c0
	if (ctx.cr6.eq) goto loc_8252D0C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252D0BC;
	sub_8253D820(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
loc_8252D0C0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d0d0
	if (ctx.cr6.eq) goto loc_8252D0D0;
	// bl 0x82241d18
	ctx.lr = 0x8252D0D0;
	sub_82241D18(ctx, base);
loc_8252D0D0:
	// bl 0x8253de00
	ctx.lr = 0x8252D0D4;
	sub_8253DE00(ctx, base);
	// bl 0x8253de00
	ctx.lr = 0x8252D0D8;
	sub_8253DE00(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x8252d114
	if (!ctx.cr6.eq) goto loc_8252D114;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252d10c
	if (ctx.cr6.eq) goto loc_8252D10C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252e6f8
	ctx.lr = 0x8252D108;
	sub_8252E6F8(ctx, base);
	// b 0x8252d140
	goto loc_8252D140;
loc_8252D10C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d140
	if (ctx.cr6.eq) goto loc_8252D140;
loc_8252D114:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252d140
	if (!ctx.cr6.eq) goto loc_8252D140;
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252D12C;
	sub_825191A8(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d140
	if (ctx.cr6.eq) goto loc_8252D140;
	// bl 0x82524840
	ctx.lr = 0x8252D13C;
	sub_82524840(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
loc_8252D140:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d180
	if (ctx.cr6.eq) goto loc_8252D180;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d174
	if (ctx.cr6.eq) goto loc_8252D174;
	// bl 0x8250f738
	ctx.lr = 0x8252D15C;
	sub_8250F738(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8252d174
	if (!ctx.cr6.eq) goto loc_8252D174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d510
	ctx.lr = 0x8252D170;
	sub_8252D510(ctx, base);
	// stw r28,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r28.u32);
loc_8252D174:
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252D180;
	sub_82524A90(ctx, base);
loc_8252D180:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x8252d19c
	if (!ctx.cr6.eq) goto loc_8252D19C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8252D19C:
	// bl 0x82519230
	ctx.lr = 0x8252D1A0;
	sub_82519230(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d1b0
	if (ctx.cr6.eq) goto loc_8252D1B0;
	// bl 0x82241d18
	ctx.lr = 0x8252D1B0;
	sub_82241D18(ctx, base);
loc_8252D1B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D1BC"))) PPC_WEAK_FUNC(sub_8252D1BC);
PPC_FUNC_IMPL(__imp__sub_8252D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D1C0"))) PPC_WEAK_FUNC(sub_8252D1C0);
PPC_FUNC_IMPL(__imp__sub_8252D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252D1C8;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5824(r1)
	ea = -5824 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic. r11,r3,424
	ctx.xer.ca = ctx.r3.u32 > 4294966871;
	ctx.r11.s64 = ctx.r3.s64 + 424;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d508
	if (ctx.cr0.eq) goto loc_8252D508;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d508
	if (ctx.cr0.eq) goto loc_8252D508;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,21120
	ctx.r30.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252d508
	if (ctx.cr0.eq) goto loc_8252D508;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D21C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1680(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1680, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1682
	ctx.r3.s64 = ctx.r1.s64 + 1682;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D230;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,3728(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3728, ctx.r31.u16);
	// addi r3,r1,3730
	ctx.r3.s64 = ctx.r1.s64 + 3730;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D244;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,656(r1)
	PPC_STORE_U16(ctx.r1.u32 + 656, ctx.r31.u16);
	// addi r3,r1,658
	ctx.r3.s64 = ctx.r1.s64 + 658;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D258;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1168, ctx.r31.u16);
	// addi r3,r1,1170
	ctx.r3.s64 = ctx.r1.s64 + 1170;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D26C;
	sub_82FA7CF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,448(r27)
	PPC_STORE_U32(ctx.r27.u32 + 448, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8252D280:
	// bl 0x8226d8e8
	ctx.lr = 0x8252D284;
	sub_8226D8E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8226ecf0
	ctx.lr = 0x8252D28C;
	sub_8226ECF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252d2cc
	if (ctx.cr0.eq) goto loc_8252D2CC;
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8252d2cc
	if (!ctx.cr0.eq) goto loc_8252D2CC;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74bc0
	ctx.lr = 0x8252D2B4;
	sub_82A74BC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8252d2c8
	if (!ctx.cr0.eq) goto loc_8252D2C8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d2cc
	if (!ctx.cr6.eq) goto loc_8252D2CC;
loc_8252D2C8:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8252D2CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8252d280
	if (ctx.cr6.lt) goto loc_8252D280;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8252d448
	if (!ctx.cr0.eq) goto loc_8252D448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920518
	ctx.lr = 0x8252D2EC;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d448
	if (!ctx.cr0.eq) goto loc_8252D448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920258
	ctx.lr = 0x8252D2FC;
	sub_82920258(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// bne 0x8252d388
	if (!ctx.cr0.eq) goto loc_8252D388;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D32C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12524
	ctx.r4.s64 = ctx.r11.s64 + 12524;
loc_8252D334:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1680
	ctx.r5.s64 = ctx.r1.s64 + 1680;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D34C;
	sub_8259C8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920520
	ctx.lr = 0x8252D354;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252d368
	if (ctx.cr6.lt) goto loc_8252D368;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252d36c
	goto loc_8252D36C;
loc_8252D368:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252D36C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82563c28
	ctx.lr = 0x8252D384;
	sub_82563C28(ctx, base);
	// b 0x8252d490
	goto loc_8252D490;
loc_8252D388:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8252d3a0
	if (!ctx.cr6.eq) goto loc_8252D3A0;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D394;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12548
	ctx.r4.s64 = ctx.r11.s64 + 12548;
	// b 0x8252d334
	goto loc_8252D334;
loc_8252D3A0:
	// bl 0x8259c8e0
	ctx.lr = 0x8252D3A4;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12568
	ctx.r4.s64 = ctx.r11.s64 + 12568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1680
	ctx.r5.s64 = ctx.r1.s64 + 1680;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D3C4;
	sub_8259C8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920520
	ctx.lr = 0x8252D3CC;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252d3e0
	if (ctx.cr6.lt) goto loc_8252D3E0;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252d3e4
	goto loc_8252D3E4;
loc_8252D3E0:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252D3E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82563c28
	ctx.lr = 0x8252D3FC;
	sub_82563C28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12588
	ctx.r4.s64 = ctx.r11.s64 + 12588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D41C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12608
	ctx.r4.s64 = ctx.r11.s64 + 12608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1168
	ctx.r5.s64 = ctx.r1.s64 + 1168;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D43C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r31,r11,-7880
	ctx.r31.s64 = ctx.r11.s64 + -7880;
	// b 0x8252d4b8
	goto loc_8252D4B8;
loc_8252D448:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252D470;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12504
	ctx.r4.s64 = ctx.r11.s64 + 12504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,3728
	ctx.r5.s64 = ctx.r1.s64 + 3728;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D490;
	sub_8259C8E0(ctx, base);
loc_8252D490:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,12520
	ctx.r4.s64 = ctx.r11.s64 + 12520;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D4B0;
	sub_8259C8E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r31,r11,-7400
	ctx.r31.s64 = ctx.r11.s64 + -7400;
loc_8252D4B8:
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252D4C0;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8252d500
	if (ctx.cr0.eq) goto loc_8252D500;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,1052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1052, ctx.r11.u32);
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,3728
	ctx.r5.s64 = ctx.r1.s64 + 3728;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252D4FC;
	sub_8253D420(ctx, base);
	// b 0x8252d504
	goto loc_8252D504;
loc_8252D500:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8252D504:
	// stw r30,416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 416, ctx.r30.u32);
loc_8252D508:
	// addi r1,r1,5824
	ctx.r1.s64 = ctx.r1.s64 + 5824;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D510"))) PPC_WEAK_FUNC(sub_8252D510);
PPC_FUNC_IMPL(__imp__sub_8252D510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252D518;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,594
	ctx.r3.s64 = ctx.r1.s64 + 594;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 592, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D53C;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D550;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8252d584
	if (ctx.cr0.eq) goto loc_8252D584;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8252D584:
	// lwz r10,428(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r11,21076
	ctx.r29.s64 = ctx.r11.s64 + 21076;
	// beq cr6,0x8252d5c0
	if (ctx.cr6.eq) goto loc_8252D5C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8252d5d4
	if (ctx.cr6.eq) goto loc_8252D5D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,12616
	ctx.r4.s64 = ctx.r11.s64 + 12616;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D5C0;
	sub_8259C8E0(ctx, base);
loc_8252D5C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8252d5d4
	if (ctx.cr6.eq) goto loc_8252D5D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12632
	ctx.r4.s64 = ctx.r11.s64 + 12632;
	// b 0x8252d5dc
	goto loc_8252D5DC;
loc_8252D5D4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12652
	ctx.r4.s64 = ctx.r11.s64 + 12652;
loc_8252D5DC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D5F4;
	sub_8259C8E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x825249c8
	ctx.lr = 0x8252D604;
	sub_825249C8(ctx, base);
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D610"))) PPC_WEAK_FUNC(sub_8252D610);
PPC_FUNC_IMPL(__imp__sub_8252D610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252D618;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82519160
	ctx.lr = 0x8252D634;
	sub_82519160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d64c
	if (ctx.cr6.eq) goto loc_8252D64C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8252d650
	if (!ctx.cr6.eq) goto loc_8252D650;
loc_8252D64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252D650:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d664
	if (ctx.cr6.eq) goto loc_8252D664;
	// bl 0x82241d18
	ctx.lr = 0x8252D664;
	sub_82241D18(ctx, base);
loc_8252D664:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d6ac
	if (ctx.cr0.eq) goto loc_8252D6AC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8286de68
	ctx.lr = 0x8252D67C;
	sub_8286DE68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82519160
	ctx.lr = 0x8252D688;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,7844
	ctx.r4.s64 = ctx.r11.s64 + 7844;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a72e8
	ctx.lr = 0x8252D69C;
	sub_826A72E8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d6ac
	if (ctx.cr6.eq) goto loc_8252D6AC;
	// bl 0x82241d18
	ctx.lr = 0x8252D6AC;
	sub_82241D18(ctx, base);
loc_8252D6AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D6B4"))) PPC_WEAK_FUNC(sub_8252D6B4);
PPC_FUNC_IMPL(__imp__sub_8252D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D6B8"))) PPC_WEAK_FUNC(sub_8252D6B8);
PPC_FUNC_IMPL(__imp__sub_8252D6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252D6C0;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6320(r1)
	ea = -6320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31955
	ctx.r28.s64 = -2094202880;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,31080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d6f0
	if (!ctx.cr6.eq) goto loc_8252D6F0;
	// bl 0x8254abe0
	ctx.lr = 0x8252D6EC;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252D6F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8254c1b0
	ctx.lr = 0x8252D700;
	sub_8254C1B0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d724
	if (ctx.cr6.eq) goto loc_8252D724;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8252D718;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d724
	if (ctx.cr0.eq) goto loc_8252D724;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8252D724:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8252d8ec
	if (ctx.cr6.lt) goto loc_8252D8EC;
	// bne cr6,0x8252da8c
	if (!ctx.cr6.eq) goto loc_8252DA8C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252d744
	if (!ctx.cr6.eq) goto loc_8252D744;
	// bl 0x822599a0
	ctx.lr = 0x8252D744;
	sub_822599A0(ctx, base);
loc_8252D744:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252d8e4
	if (ctx.cr0.eq) goto loc_8252D8E4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8252d8e4
	if (ctx.cr6.eq) goto loc_8252D8E4;
	// lwz r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d770
	if (ctx.cr6.eq) goto loc_8252D770;
loc_8252D764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252daa8
	ctx.lr = 0x8252D76C;
	sub_8252DAA8(ctx, base);
	// b 0x8252da8c
	goto loc_8252DA8C;
loc_8252D770:
	// lwz r11,436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d790
	if (!ctx.cr6.eq) goto loc_8252D790;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82519230
	ctx.lr = 0x8252D78C;
	sub_82519230(ctx, base);
	// stw r27,436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 436, ctx.r27.u32);
loc_8252D790:
	// lwz r11,31080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d7a4
	if (!ctx.cr6.eq) goto loc_8252D7A4;
	// bl 0x8254abe0
	ctx.lr = 0x8252D7A0;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252D7A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c1b0
	ctx.lr = 0x8252D7B4;
	sub_8254C1B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d8d8
	if (ctx.cr6.eq) goto loc_8252D8D8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D7E0;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,2160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2160, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2162
	ctx.r3.s64 = ctx.r1.s64 + 2162;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D7F4;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1136, ctx.r31.u16);
	// addi r3,r1,1138
	ctx.r3.s64 = ctx.r1.s64 + 1138;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D808;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252D830;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12748
	ctx.r4.s64 = ctx.r11.s64 + 12748;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,2160
	ctx.r5.s64 = ctx.r1.s64 + 2160;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D850;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1136
	ctx.r5.s64 = ctx.r1.s64 + 1136;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D870;
	sub_8259C8E0(ctx, base);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d8d8
	if (!ctx.cr6.eq) goto loc_8252D8D8;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252D884;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252d8cc
	if (ctx.cr0.eq) goto loc_8252D8CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-6840
	ctx.r8.s64 = ctx.r8.s64 + -6840;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// addi r5,r1,2160
	ctx.r5.s64 = ctx.r1.s64 + 2160;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252D8C4;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8252d8d0
	goto loc_8252D8D0;
loc_8252D8CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252D8D0:
	// stw r3,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252D8D8;
	sub_8253DAA0(ctx, base);
loc_8252D8D8:
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8252da70
	goto loc_8252DA70;
loc_8252D8E4:
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// b 0x8252da88
	goto loc_8252DA88;
loc_8252D8EC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252d900
	if (!ctx.cr6.eq) goto loc_8252D900;
	// bl 0x822599a0
	ctx.lr = 0x8252D900;
	sub_822599A0(ctx, base);
loc_8252D900:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252da84
	if (ctx.cr0.eq) goto loc_8252DA84;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8252da84
	if (ctx.cr6.eq) goto loc_8252DA84;
	// lwz r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d764
	if (!ctx.cr6.eq) goto loc_8252D764;
	// lwz r10,412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// lwz r11,31080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// bne cr6,0x8252d93c
	if (!ctx.cr6.eq) goto loc_8252D93C;
	// bl 0x8254abe0
	ctx.lr = 0x8252D938;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252D93C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c1b0
	ctx.lr = 0x8252D94C;
	sub_8254C1B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252da70
	if (ctx.cr6.eq) goto loc_8252DA70;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,626
	ctx.r3.s64 = ctx.r1.s64 + 626;
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,624(r1)
	PPC_STORE_U16(ctx.r1.u32 + 624, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D978;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,4208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 4208, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,4210
	ctx.r3.s64 = ctx.r1.s64 + 4210;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D98C;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1648(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1648, ctx.r31.u16);
	// addi r3,r1,1650
	ctx.r3.s64 = ctx.r1.s64 + 1650;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D9A0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252D9C8;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12712
	ctx.r4.s64 = ctx.r11.s64 + 12712;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,4208
	ctx.r5.s64 = ctx.r1.s64 + 4208;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D9E8;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1648
	ctx.r5.s64 = ctx.r1.s64 + 1648;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DA08;
	sub_8259C8E0(ctx, base);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252da70
	if (!ctx.cr6.eq) goto loc_8252DA70;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252DA1C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252da64
	if (ctx.cr0.eq) goto loc_8252DA64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-6840
	ctx.r8.s64 = ctx.r8.s64 + -6840;
	// addi r6,r1,1648
	ctx.r6.s64 = ctx.r1.s64 + 1648;
	// addi r5,r1,4208
	ctx.r5.s64 = ctx.r1.s64 + 4208;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252DA5C;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8252da68
	goto loc_8252DA68;
loc_8252DA64:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252DA68:
	// stw r3,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252DA70;
	sub_8253DAA0(ctx, base);
loc_8252DA70:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252da8c
	if (ctx.cr6.eq) goto loc_8252DA8C;
	// bl 0x82241d18
	ctx.lr = 0x8252DA80;
	sub_82241D18(ctx, base);
	// b 0x8252da8c
	goto loc_8252DA8C;
loc_8252DA84:
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
loc_8252DA88:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8252DA8C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252da9c
	if (ctx.cr6.eq) goto loc_8252DA9C;
	// bl 0x82241d18
	ctx.lr = 0x8252DA9C;
	sub_82241D18(ctx, base);
loc_8252DA9C:
	// addi r1,r1,6320
	ctx.r1.s64 = ctx.r1.s64 + 6320;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DAA4"))) PPC_WEAK_FUNC(sub_8252DAA4);
PPC_FUNC_IMPL(__imp__sub_8252DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DAA8"))) PPC_WEAK_FUNC(sub_8252DAA8);
PPC_FUNC_IMPL(__imp__sub_8252DAA8) {
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
	// stwu r1,-3712(r1)
	ea = -3712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252dc0c
	if (!ctx.cr6.eq) goto loc_8252DC0C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,610
	ctx.r3.s64 = ctx.r1.s64 + 610;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,608(r1)
	PPC_STORE_U16(ctx.r1.u32 + 608, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DAE8;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1632(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1632, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1634
	ctx.r3.s64 = ctx.r1.s64 + 1634;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DAFC;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DB10;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1120, ctx.r31.u16);
	// addi r3,r1,1122
	ctx.r3.s64 = ctx.r1.s64 + 1122;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DB24;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252DB4C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12780
	ctx.r4.s64 = ctx.r11.s64 + 12780;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1632
	ctx.r5.s64 = ctx.r1.s64 + 1632;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DB6C;
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
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DB8C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1120
	ctx.r5.s64 = ctx.r1.s64 + 1120;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DBAC;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252DBB4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252dc00
	if (ctx.cr0.eq) goto loc_8252DC00;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
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
	// addi r8,r8,-7296
	ctx.r8.s64 = ctx.r8.s64 + -7296;
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,1632
	ctx.r5.s64 = ctx.r1.s64 + 1632;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252DBF8;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8252dc04
	goto loc_8252DC04;
loc_8252DC00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252DC04:
	// stw r3,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252DC0C;
	sub_8253DAA0(ctx, base);
loc_8252DC0C:
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
	// lwz r12,-8(r1)
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

__attribute__((alias("__imp__sub_8252DC24"))) PPC_WEAK_FUNC(sub_8252DC24);
PPC_FUNC_IMPL(__imp__sub_8252DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DC28"))) PPC_WEAK_FUNC(sub_8252DC28);
PPC_FUNC_IMPL(__imp__sub_8252DC28) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,416(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252dcc4
	if (ctx.cr6.eq) goto loc_8252DCC4;
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8252dcc4
	if (!ctx.cr6.eq) goto loc_8252DCC4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8252dc6c
	if (!ctx.cr6.gt) goto loc_8252DC6C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8252DC6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252DC84;
	sub_822E4D50(ctx, base);
	// stfd f31,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82519160
	ctx.lr = 0x8252DC94;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,19820
	ctx.r4.s64 = ctx.r11.s64 + 19820;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252DCAC;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252dcbc
	if (ctx.cr6.eq) goto loc_8252DCBC;
	// bl 0x82241d18
	ctx.lr = 0x8252DCBC;
	sub_82241D18(ctx, base);
loc_8252DCBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8252DCC4;
	sub_822E4D00(ctx, base);
loc_8252DCC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8252DCDC"))) PPC_WEAK_FUNC(sub_8252DCDC);
PPC_FUNC_IMPL(__imp__sub_8252DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DCE0"))) PPC_WEAK_FUNC(sub_8252DCE0);
PPC_FUNC_IMPL(__imp__sub_8252DCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252DCE8;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5296(r1)
	ea = -5296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252dd1c
	if (ctx.cr6.eq) goto loc_8252DD1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252DD18;
	sub_8253D820(ctx, base);
	// stw r27,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r27.u32);
loc_8252DD1C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r27,432(r28)
	PPC_STORE_U32(ctx.r28.u32 + 432, ctx.r27.u32);
	// beq cr6,0x8252df4c
	if (ctx.cr6.eq) goto loc_8252DF4C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8252df4c
	if (ctx.cr0.eq) goto loc_8252DF4C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r31,31944(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 31944);
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD5C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1152, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1154
	ctx.r3.s64 = ctx.r1.s64 + 1154;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD70;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,3200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3200, ctx.r31.u16);
	// addi r3,r1,3202
	ctx.r3.s64 = ctx.r1.s64 + 3202;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD84;
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
	ctx.lr = 0x8252DD98;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252DDC0;
	sub_8259C8E0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8252dee8
	if (ctx.cr6.eq) goto loc_8252DEE8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8252dedc
	if (ctx.cr6.eq) goto loc_8252DEDC;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x8252decc
	if (ctx.cr6.eq) goto loc_8252DECC;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// beq cr6,0x8252dec0
	if (ctx.cr6.eq) goto loc_8252DEC0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// beq cr6,0x8252deb4
	if (ctx.cr6.eq) goto loc_8252DEB4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// beq cr6,0x8252de24
	if (ctx.cr6.eq) goto loc_8252DE24;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// beq cr6,0x8252de18
	if (ctx.cr6.eq) goto loc_8252DE18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12908
	ctx.r4.s64 = ctx.r11.s64 + 12908;
	// b 0x8252df04
	goto loc_8252DF04;
loc_8252DE18:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12888
	ctx.r4.s64 = ctx.r11.s64 + 12888;
	// b 0x8252df04
	goto loc_8252DF04;
loc_8252DE24:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12864
	ctx.r4.s64 = ctx.r11.s64 + 12864;
loc_8252DE2C:
	// bl 0x8259c8e0
	ctx.lr = 0x8252DE30;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// addi r5,r11,-27324
	ctx.r5.s64 = ctx.r11.s64 + -27324;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82563c28
	ctx.lr = 0x8252DE48;
	sub_82563C28(ctx, base);
loc_8252DE48:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,12520
	ctx.r4.s64 = ctx.r11.s64 + 12520;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DE68;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252DE70;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252df44
	if (ctx.cr0.eq) goto loc_8252DF44;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,-7400
	ctx.r8.s64 = ctx.r8.s64 + -7400;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,3200
	ctx.r5.s64 = ctx.r1.s64 + 3200;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252DEB0;
	sub_8253D420(ctx, base);
	// b 0x8252df48
	goto loc_8252DF48;
loc_8252DEB4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12840
	ctx.r4.s64 = ctx.r11.s64 + 12840;
	// b 0x8252de2c
	goto loc_8252DE2C;
loc_8252DEC0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12824
	ctx.r4.s64 = ctx.r11.s64 + 12824;
	// b 0x8252def0
	goto loc_8252DEF0;
loc_8252DECC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 428, ctx.r27.u32);
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// b 0x8252def0
	goto loc_8252DEF0;
loc_8252DEDC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12908
	ctx.r4.s64 = ctx.r11.s64 + 12908;
	// b 0x8252def0
	goto loc_8252DEF0;
loc_8252DEE8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12932
	ctx.r4.s64 = ctx.r11.s64 + 12932;
loc_8252DEF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8252DF04:
	// bl 0x8259c8e0
	ctx.lr = 0x8252DF08;
	sub_8259C8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82920520
	ctx.lr = 0x8252DF10;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252df24
	if (ctx.cr6.lt) goto loc_8252DF24;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252df28
	goto loc_8252DF28;
loc_8252DF24:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252DF28:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82563c28
	ctx.lr = 0x8252DF40;
	sub_82563C28(ctx, base);
	// b 0x8252de48
	goto loc_8252DE48;
loc_8252DF44:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8252DF48:
	// stw r31,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r31.u32);
loc_8252DF4C:
	// addi r1,r1,5296
	ctx.r1.s64 = ctx.r1.s64 + 5296;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DF54"))) PPC_WEAK_FUNC(sub_8252DF54);
PPC_FUNC_IMPL(__imp__sub_8252DF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DF58"))) PPC_WEAK_FUNC(sub_8252DF58);
PPC_FUNC_IMPL(__imp__sub_8252DF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252DF60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252DF78;
	sub_825191A8(ctx, base);
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252df8c
	if (ctx.cr6.eq) goto loc_8252DF8C;
	// bl 0x82524840
	ctx.lr = 0x8252DF88;
	sub_82524840(ctx, base);
	// stw r27,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r27.u32);
loc_8252DF8C:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252dfd8
	if (ctx.cr6.eq) goto loc_8252DFD8;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8252dfd8
	if (ctx.cr6.eq) goto loc_8252DFD8;
	// addi r28,r11,28
	ctx.r28.s64 = ctx.r11.s64 + 28;
loc_8252DFAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82385da0
	ctx.lr = 0x8252DFCC;
	sub_82385DA0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8252dfac
	if (!ctx.cr6.eq) goto loc_8252DFAC;
loc_8252DFD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252DFE4;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12944
	ctx.r4.s64 = ctx.r11.s64 + 12944;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252DFFC;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e00c
	if (ctx.cr6.eq) goto loc_8252E00C;
	// bl 0x82241d18
	ctx.lr = 0x8252E00C;
	sub_82241D18(ctx, base);
loc_8252E00C:
	// stw r27,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E018"))) PPC_WEAK_FUNC(sub_8252E018);
PPC_FUNC_IMPL(__imp__sub_8252E018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252E020;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4768(r1)
	ea = -4768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,21120
	ctx.r30.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252e12c
	if (ctx.cr0.eq) goto loc_8252E12C;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e12c
	if (ctx.cr6.eq) goto loc_8252E12C;
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
	ctx.lr = 0x8252E068;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,642
	ctx.r3.s64 = ctx.r1.s64 + 642;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E07C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,2688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2688, ctx.r31.u16);
	// addi r3,r1,2690
	ctx.r3.s64 = ctx.r1.s64 + 2690;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E090;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r30,r11,21076
	ctx.r30.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252E0BC;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,12964
	ctx.r4.s64 = ctx.r11.s64 + 12964;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x8252E0DC;
	sub_8259C8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920520
	ctx.lr = 0x8252E0E4;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252e0f8
	if (ctx.cr6.lt) goto loc_8252E0F8;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252e0fc
	goto loc_8252E0FC;
loc_8252E0F8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252E0FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// bl 0x82563c28
	ctx.lr = 0x8252E114;
	sub_82563C28(ctx, base);
	// addi r5,r1,2688
	ctx.r5.s64 = ctx.r1.s64 + 2688;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// bl 0x8253d9f0
	ctx.lr = 0x8252E124;
	sub_8253D9F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 448, ctx.r11.u32);
loc_8252E12C:
	// addi r1,r1,4768
	ctx.r1.s64 = ctx.r1.s64 + 4768;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E134"))) PPC_WEAK_FUNC(sub_8252E134);
PPC_FUNC_IMPL(__imp__sub_8252E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E138"))) PPC_WEAK_FUNC(sub_8252E138);
PPC_FUNC_IMPL(__imp__sub_8252E138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252E140;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5296(r1)
	ea = -5296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E16C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1152, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1154
	ctx.r3.s64 = ctx.r1.s64 + 1154;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E180;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,3200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3200, ctx.r31.u16);
	// addi r3,r1,3202
	ctx.r3.s64 = ctx.r1.s64 + 3202;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E194;
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
	ctx.lr = 0x8252E1A8;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8252e1d8
	if (ctx.cr6.lt) goto loc_8252E1D8;
	// bne cr6,0x8252e30c
	if (!ctx.cr6.eq) goto loc_8252E30C;
	// lwz r3,416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e30c
	if (ctx.cr6.eq) goto loc_8252E30C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E1CC;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r11.u32);
	// b 0x8252e30c
	goto loc_8252E30C;
loc_8252E1D8:
	// lwz r3,416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 432, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e200
	if (ctx.cr6.eq) goto loc_8252E200;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E1F8;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r11.u32);
loc_8252E200:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,21120
	ctx.r10.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252e30c
	if (ctx.cr0.eq) goto loc_8252E30C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252E240;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12976
	ctx.r4.s64 = ctx.r11.s64 + 12976;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// bl 0x8259c8e0
	ctx.lr = 0x8252E260;
	sub_8259C8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920520
	ctx.lr = 0x8252E268;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252e27c
	if (ctx.cr6.lt) goto loc_8252E27C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252e280
	goto loc_8252E280;
loc_8252E27C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252E280:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82563c28
	ctx.lr = 0x8252E298;
	sub_82563C28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12992
	ctx.r4.s64 = ctx.r11.s64 + 12992;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x8252E2B8;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252E2C0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252e304
	if (ctx.cr0.eq) goto loc_8252E304;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,-7320
	ctx.r8.s64 = ctx.r8.s64 + -7320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,3200
	ctx.r5.s64 = ctx.r1.s64 + 3200;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252E300;
	sub_8253D420(ctx, base);
	// b 0x8252e308
	goto loc_8252E308;
loc_8252E304:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252E308:
	// stw r31,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r31.u32);
loc_8252E30C:
	// addi r1,r1,5296
	ctx.r1.s64 = ctx.r1.s64 + 5296;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E314"))) PPC_WEAK_FUNC(sub_8252E314);
PPC_FUNC_IMPL(__imp__sub_8252E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E318"))) PPC_WEAK_FUNC(sub_8252E318);
PPC_FUNC_IMPL(__imp__sub_8252E318) {
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
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8252e354
	if (!ctx.cr6.lt) goto loc_8252E354;
	// lwz r3,416(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e354
	if (ctx.cr6.eq) goto loc_8252E354;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E34C;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_8252E354:
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

__attribute__((alias("__imp__sub_8252E368"))) PPC_WEAK_FUNC(sub_8252E368);
PPC_FUNC_IMPL(__imp__sub_8252E368) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,432(r4)
	PPC_STORE_U32(ctx.r4.u32 + 432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E37C"))) PPC_WEAK_FUNC(sub_8252E37C);
PPC_FUNC_IMPL(__imp__sub_8252E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E380"))) PPC_WEAK_FUNC(sub_8252E380);
PPC_FUNC_IMPL(__imp__sub_8252E380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252E388;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8252e520
	if (ctx.cr6.lt) goto loc_8252E520;
	// bne cr6,0x8252e540
	if (!ctx.cr6.eq) goto loc_8252E540;
	// lwz r3,416(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e3bc
	if (ctx.cr6.eq) goto loc_8252E3BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E3B8;
	sub_8253D820(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8252E3BC:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e3e0
	if (!ctx.cr6.eq) goto loc_8252E3E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E3D8;
	sub_82519230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
loc_8252E3E0:
	// lis r29,-31955
	ctx.r29.s64 = -2094202880;
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// bne cr6,0x8252e408
	if (!ctx.cr6.eq) goto loc_8252E408;
	// bl 0x8254abe0
	ctx.lr = 0x8252E404;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E408:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x8252E418;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e44c
	if (ctx.cr6.eq) goto loc_8252E44C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x8252E430;
	sub_824261E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225c020
	ctx.lr = 0x8252E43C;
	sub_8225C020(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e44c
	if (ctx.cr6.eq) goto loc_8252E44C;
	// bl 0x82241d18
	ctx.lr = 0x8252E44C;
	sub_82241D18(ctx, base);
loc_8252E44C:
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e460
	if (ctx.cr6.eq) goto loc_8252E460;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8252e468
	goto loc_8252E468;
loc_8252E460:
	// bl 0x8254abe0
	ctx.lr = 0x8252E464;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
loc_8252E468:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8252E474:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e484
	if (!ctx.cr6.eq) goto loc_8252E484;
	// bl 0x8254abe0
	ctx.lr = 0x8252E480;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E484:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252e50c
	if (ctx.cr6.eq) goto loc_8252E50C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82348d20
	ctx.lr = 0x8252E4A0;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252e4c8
	if (ctx.cr6.eq) goto loc_8252E4C8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252E4C8;
	sub_82241D18(ctx, base);
loc_8252E4C8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e4fc
	if (ctx.cr0.eq) goto loc_8252E4FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82348d20
	ctx.lr = 0x8252E4DC;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8252E4EC;
	sub_828E4C10(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e4fc
	if (ctx.cr6.eq) goto loc_8252E4FC;
	// bl 0x82241d18
	ctx.lr = 0x8252E4FC;
	sub_82241D18(ctx, base);
loc_8252E4FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x8252E504;
	sub_8241A2B0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// b 0x8252e474
	goto loc_8252E474;
loc_8252E50C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e540
	if (ctx.cr6.eq) goto loc_8252E540;
	// bl 0x82241d18
	ctx.lr = 0x8252E51C;
	sub_82241D18(ctx, base);
	// b 0x8252e540
	goto loc_8252E540;
loc_8252E520:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e540
	if (ctx.cr6.eq) goto loc_8252E540;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E538;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_8252E540:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E548"))) PPC_WEAK_FUNC(sub_8252E548);
PPC_FUNC_IMPL(__imp__sub_8252E548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252E550;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8252e6ec
	if (!ctx.cr6.eq) goto loc_8252E6EC;
	// lwz r3,420(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e580
	if (ctx.cr6.eq) goto loc_8252E580;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E57C;
	sub_8253D820(ctx, base);
	// stw r28,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r28.u32);
loc_8252E580:
	// lwz r11,452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e6ec
	if (!ctx.cr6.eq) goto loc_8252E6EC;
	// lwz r11,436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e5b0
	if (!ctx.cr6.eq) goto loc_8252E5B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E5A8;
	sub_82519230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 436, ctx.r11.u32);
loc_8252E5B0:
	// lis r30,-31955
	ctx.r30.s64 = -2094202880;
	// lwz r10,408(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// bne cr6,0x8252e5d8
	if (!ctx.cr6.eq) goto loc_8252E5D8;
	// bl 0x8254abe0
	ctx.lr = 0x8252E5D4;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E5D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x8252E5E8;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e61c
	if (ctx.cr6.eq) goto loc_8252E61C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x8252E600;
	sub_824261E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225c020
	ctx.lr = 0x8252E60C;
	sub_8225C020(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e61c
	if (ctx.cr6.eq) goto loc_8252E61C;
	// bl 0x82241d18
	ctx.lr = 0x8252E61C;
	sub_82241D18(ctx, base);
loc_8252E61C:
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e630
	if (ctx.cr6.eq) goto loc_8252E630;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8252e638
	goto loc_8252E638;
loc_8252E630:
	// bl 0x8254abe0
	ctx.lr = 0x8252E634;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
loc_8252E638:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8252E644:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e654
	if (!ctx.cr6.eq) goto loc_8252E654;
	// bl 0x8254abe0
	ctx.lr = 0x8252E650;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E654:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252e6dc
	if (ctx.cr6.eq) goto loc_8252E6DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82348d20
	ctx.lr = 0x8252E670;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252e698
	if (ctx.cr6.eq) goto loc_8252E698;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252E698;
	sub_82241D18(ctx, base);
loc_8252E698:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e6cc
	if (ctx.cr0.eq) goto loc_8252E6CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82348d20
	ctx.lr = 0x8252E6AC;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8252E6BC;
	sub_828E4C10(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e6cc
	if (ctx.cr6.eq) goto loc_8252E6CC;
	// bl 0x82241d18
	ctx.lr = 0x8252E6CC;
	sub_82241D18(ctx, base);
loc_8252E6CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x8252E6D4;
	sub_8241A2B0(ctx, base);
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
	// b 0x8252e644
	goto loc_8252E644;
loc_8252E6DC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e6ec
	if (ctx.cr6.eq) goto loc_8252E6EC;
	// bl 0x82241d18
	ctx.lr = 0x8252E6EC;
	sub_82241D18(ctx, base);
loc_8252E6EC:
	// stw r28,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E6F8"))) PPC_WEAK_FUNC(sub_8252E6F8);
PPC_FUNC_IMPL(__imp__sub_8252E6F8) {
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
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252e7a4
	if (ctx.cr6.eq) goto loc_8252E7A4;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e774
	if (!ctx.cr6.eq) goto loc_8252E774;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,13016
	ctx.r11.s64 = ctx.r11.s64 + 13016;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r3,368
	ctx.r4.s64 = ctx.r3.s64 + 368;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8226c200
	ctx.lr = 0x8252E754;
	sub_8226C200(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82524730
	ctx.lr = 0x8252E770;
	sub_82524730(ctx, base);
	// stw r3,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
loc_8252E774:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e794
	if (!ctx.cr6.eq) goto loc_8252E794;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E794;
	sub_82519230(ctx, base);
loc_8252E794:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E7A4;
	sub_82519230(ctx, base);
loc_8252E7A4:
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

__attribute__((alias("__imp__sub_8252E7BC"))) PPC_WEAK_FUNC(sub_8252E7BC);
PPC_FUNC_IMPL(__imp__sub_8252E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E7C0"))) PPC_WEAK_FUNC(sub_8252E7C0);
PPC_FUNC_IMPL(__imp__sub_8252E7C0) {
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
	// bne cr6,0x8252e808
	if (!ctx.cr6.eq) goto loc_8252E808;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252E7E4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252e808
	if (!ctx.cr0.eq) goto loc_8252E808;
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
	ctx.lr = 0x8252E808;
	sub_82240040(ctx, base);
loc_8252E808:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,13016
	ctx.r11.s64 = ctx.r11.s64 + 13016;
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

__attribute__((alias("__imp__sub_8252E834"))) PPC_WEAK_FUNC(sub_8252E834);
PPC_FUNC_IMPL(__imp__sub_8252E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E838"))) PPC_WEAK_FUNC(sub_8252E838);
PPC_FUNC_IMPL(__imp__sub_8252E838) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8252d1c0
	sub_8252D1C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E840"))) PPC_WEAK_FUNC(sub_8252E840);
PPC_FUNC_IMPL(__imp__sub_8252E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E84C"))) PPC_WEAK_FUNC(sub_8252E84C);
PPC_FUNC_IMPL(__imp__sub_8252E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E850"))) PPC_WEAK_FUNC(sub_8252E850);
PPC_FUNC_IMPL(__imp__sub_8252E850) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e89c
	if (ctx.cr0.eq) goto loc_8252E89C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x826b7560
	ctx.lr = 0x8252E89C;
	sub_826B7560(ctx, base);
loc_8252E89C:
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

__attribute__((alias("__imp__sub_8252E8B4"))) PPC_WEAK_FUNC(sub_8252E8B4);
PPC_FUNC_IMPL(__imp__sub_8252E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E8B8"))) PPC_WEAK_FUNC(sub_8252E8B8);
PPC_FUNC_IMPL(__imp__sub_8252E8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8252E8C0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,13784
	ctx.r11.s64 = ctx.r11.s64 + 13784;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x822e7a80
	ctx.lr = 0x8252E920;
	sub_822E7A80(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82691500
	ctx.lr = 0x8252E930;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252ec44
	if (ctx.cr0.eq) goto loc_8252EC44;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r21,r31,32
	ctx.r21.s64 = ctx.r31.s64 + 32;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r25,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r25.u8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r25,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r25.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r25,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r25.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ea08
	if (ctx.cr6.eq) goto loc_8252EA08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82546708
	ctx.lr = 0x8252EA04;
	sub_82546708(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_8252EA08:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82426040
	ctx.lr = 0x8252EA14;
	sub_82426040(ctx, base);
	// bl 0x826a3ae0
	ctx.lr = 0x8252EA18;
	sub_826A3AE0(ctx, base);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,323
	ctx.r10.u64 = ctx.r10.u64 | 323;
	// bl 0x826a3b70
	ctx.lr = 0x8252EA40;
	sub_826A3B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6330
	ctx.lr = 0x8252EA4C;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ea5c
	if (ctx.cr6.eq) goto loc_8252EA5C;
	// bl 0x82241d18
	ctx.lr = 0x8252EA5C;
	sub_82241D18(ctx, base);
loc_8252EA5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826a41b8
	ctx.lr = 0x8252EA68;
	sub_826A41B8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252ea80
	if (ctx.cr6.eq) goto loc_8252EA80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826a4180
	ctx.lr = 0x8252EA80;
	sub_826A4180(ctx, base);
loc_8252EA80:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f1e8
	ctx.lr = 0x8252EA8C;
	sub_8252F1E8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x8252eea8
	ctx.lr = 0x8252EAA0;
	sub_8252EEA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x8252EAAC;
	sub_826A41D0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x826a8068
	ctx.lr = 0x8252EAC0;
	sub_826A8068(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x826a80e0
	ctx.lr = 0x8252EAD4;
	sub_826A80E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
	// bl 0x826a8178
	ctx.lr = 0x8252EAEC;
	sub_826A8178(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252eb54
	if (ctx.cr6.eq) goto loc_8252EB54;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252eb54
	if (!ctx.cr6.eq) goto loc_8252EB54;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252eb50
	if (!ctx.cr6.eq) goto loc_8252EB50;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252eb50
	if (ctx.cr6.eq) goto loc_8252EB50;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r7,r10,13320
	ctx.r7.s64 = ctx.r10.s64 + 13320;
	// addi r6,r9,13396
	ctx.r6.s64 = ctx.r9.s64 + 13396;
	// li r8,693
	ctx.r8.s64 = 693;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x8252EB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252EB50:
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
loc_8252EB54:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252ebac
	if (!ctx.cr6.eq) goto loc_8252EBAC;
	// bl 0x8254b7e0
	ctx.lr = 0x8252EB64;
	sub_8254B7E0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x8252eb90
	if (!ctx.cr0.eq) goto loc_8252EB90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8252EB90:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x822e9dd0
	ctx.lr = 0x8252EB9C;
	sub_822E9DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8254b878
	ctx.lr = 0x8252EBA4;
	sub_8254B878(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8252EBAC:
	// bl 0x82589730
	ctx.lr = 0x8252EBB0;
	sub_82589730(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252ebd8
	if (!ctx.cr6.eq) goto loc_8252EBD8;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// stw r25,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
loc_8252EBD8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252ebf8
	if (!ctx.cr6.eq) goto loc_8252EBF8;
	// bl 0x826a3ae0
	ctx.lr = 0x8252EBE8;
	sub_826A3AE0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f1,6596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6596);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a3260
	ctx.lr = 0x8252EBF4;
	sub_826A3260(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
loc_8252EBF8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82589818
	ctx.lr = 0x8252EC04;
	sub_82589818(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1280
	ctx.r10.s64 = 1280;
	// li r9,720
	ctx.r9.s64 = 720;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// beq cr6,0x8252ec34
	if (ctx.cr6.eq) goto loc_8252EC34;
	// bl 0x82c447a8
	ctx.lr = 0x8252EC34;
	sub_82C447A8(ctx, base);
loc_8252EC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_8252EC44:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8252EC5C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8252EC5C"))) PPC_WEAK_FUNC(sub_8252EC5C);
PPC_FUNC_IMPL(__imp__sub_8252EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EC60"))) PPC_WEAK_FUNC(sub_8252EC60);
PPC_FUNC_IMPL(__imp__sub_8252EC60) {
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
	// bl 0x8252ecb0
	ctx.lr = 0x8252EC80;
	sub_8252ECB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ec90
	if (ctx.cr0.eq) goto loc_8252EC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252EC90;
	sub_82691540(ctx, base);
loc_8252EC90:
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

__attribute__((alias("__imp__sub_8252ECAC"))) PPC_WEAK_FUNC(sub_8252ECAC);
PPC_FUNC_IMPL(__imp__sub_8252ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252ECB0"))) PPC_WEAK_FUNC(sub_8252ECB0);
PPC_FUNC_IMPL(__imp__sub_8252ECB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252ECB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,13784
	ctx.r11.s64 = ctx.r11.s64 + 13784;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8252edf8
	ctx.lr = 0x8252ECD0;
	sub_8252EDF8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ece8
	if (ctx.cr6.eq) goto loc_8252ECE8;
	// bl 0x8254b5f8
	ctx.lr = 0x8252ECE4;
	sub_8254B5F8(ctx, base);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
loc_8252ECE8:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252ed0c
	if (ctx.cr6.eq) goto loc_8252ED0C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
loc_8252ED0C:
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252ed28
	if (ctx.cr6.eq) goto loc_8252ED28;
	// bl 0x826a3ae0
	ctx.lr = 0x8252ED1C;
	sub_826A3AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a2868
	ctx.lr = 0x8252ED24;
	sub_826A2868(ctx, base);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
loc_8252ED28:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lbz r11,45(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
	// b 0x8252ed70
	goto loc_8252ED70;
loc_8252ED40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x825306e8
	ctx.lr = 0x8252ED4C;
	sub_825306E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822402c8
	ctx.lr = 0x8252ED60;
	sub_822402C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x8252ED68;
	sub_82691540(ctx, base);
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8252ED70:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252ed40
	if (ctx.cr0.eq) goto loc_8252ED40;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252eda4
	if (ctx.cr6.eq) goto loc_8252EDA4;
	// bl 0x825469e0
	ctx.lr = 0x8252EDA4;
	sub_825469E0(ctx, base);
loc_8252EDA4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252edb4
	if (ctx.cr6.eq) goto loc_8252EDB4;
	// bl 0x82691540
	ctx.lr = 0x8252EDB4;
	sub_82691540(ctx, base);
loc_8252EDB4:
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82499918
	ctx.lr = 0x8252EDD4;
	sub_82499918(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x8252EDDC;
	sub_82691540(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252edec
	if (ctx.cr6.eq) goto loc_8252EDEC;
	// bl 0x82241d18
	ctx.lr = 0x8252EDEC;
	sub_82241D18(ctx, base);
loc_8252EDEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252EDF4"))) PPC_WEAK_FUNC(sub_8252EDF4);
PPC_FUNC_IMPL(__imp__sub_8252EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EDF8"))) PPC_WEAK_FUNC(sub_8252EDF8);
PPC_FUNC_IMPL(__imp__sub_8252EDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252EE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8252ee3c
	if (ctx.cr6.eq) goto loc_8252EE3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a70d8
	ctx.lr = 0x8252EE24;
	sub_826A70D8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ee3c
	if (ctx.cr6.eq) goto loc_8252EE3C;
	// bl 0x82241d18
	ctx.lr = 0x8252EE3C;
	sub_82241D18(ctx, base);
loc_8252EE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f158
	ctx.lr = 0x8252EE44;
	sub_8252F158(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ee58
	if (ctx.cr6.eq) goto loc_8252EE58;
	// bl 0x82524840
	ctx.lr = 0x8252EE54;
	sub_82524840(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8252EE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f4d0
	ctx.lr = 0x8252EE60;
	sub_8252F4D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f820
	ctx.lr = 0x8252EE6C;
	sub_8252F820(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ee80
	if (ctx.cr6.eq) goto loc_8252EE80;
	// bl 0x8254b5f8
	ctx.lr = 0x8252EE7C;
	sub_8254B5F8(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_8252EE80:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252eea0
	if (ctx.cr6.eq) goto loc_8252EEA0;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// bl 0x8252f560
	ctx.lr = 0x8252EEA0;
	sub_8252F560(ctx, base);
loc_8252EEA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252EEA8"))) PPC_WEAK_FUNC(sub_8252EEA8);
PPC_FUNC_IMPL(__imp__sub_8252EEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8252EEB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-1808(r1)
	ea = -1808 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82546708
	ctx.lr = 0x8252EED0;
	sub_82546708(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8252f008
	if (ctx.cr0.eq) goto loc_8252F008;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82546b30
	ctx.lr = 0x8252EEE4;
	sub_82546B30(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rlwinm r28,r3,27,5,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r4,r28,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82530388
	ctx.lr = 0x8252EF0C;
	sub_82530388(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82530570
	ctx.lr = 0x8252EF24;
	sub_82530570(ctx, base);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x8252efa8
	if (!ctx.cr6.lt) goto loc_8252EFA8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8252EF34:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8252EF50;
	sub_8259C8E0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825304a0
	ctx.lr = 0x8252EF6C;
	sub_825304A0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x825304a0
	ctx.lr = 0x8252EF88;
	sub_825304A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d00
	ctx.lr = 0x8252EF90;
	sub_822E4D00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8252EF98;
	sub_822E4D00(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8252ef34
	if (ctx.cr6.lt) goto loc_8252EF34;
loc_8252EFA8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,13168
	ctx.r4.s64 = ctx.r11.s64 + 13168;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r7,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 4;
	// bl 0x826a7930
	ctx.lr = 0x8252EFD0;
	sub_826A7930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252eff0
	if (ctx.cr0.eq) goto loc_8252EFF0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13204
	ctx.r4.s64 = ctx.r11.s64 + 13204;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252EFF0;
	sub_826A7620(ctx, base);
loc_8252EFF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8252f000
	if (ctx.cr6.eq) goto loc_8252F000;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82691540
	ctx.lr = 0x8252F000;
	sub_82691540(ctx, base);
loc_8252F000:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82530330
	ctx.lr = 0x8252F008;
	sub_82530330(ctx, base);
loc_8252F008:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8252F014:
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8252f014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252F014;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,13068
	ctx.r4.s64 = ctx.r10.s64 + 13068;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8252F048;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8252F054;
	sub_822E4D50(ctx, base);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F078;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x8252F084;
	sub_822E4D50(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F0A8;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x8252F0B4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,1216
	ctx.r11.s64 = ctx.r1.s64 + 1216;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r10,13236
	ctx.r4.s64 = ctx.r10.s64 + 13236;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x8252F0D4;
	sub_826A7620(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,13040
	ctx.r4.s64 = ctx.r11.s64 + 13040;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F0F4;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8252F100;
	sub_822E4D50(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,13276
	ctx.r4.s64 = ctx.r10.s64 + 13276;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x8252F120;
	sub_826A7620(ctx, base);
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252F128:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252F134;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252f128
	if (!ctx.cr0.lt) goto loc_8252F128;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8252f14c
	if (ctx.cr6.eq) goto loc_8252F14C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252F14C;
	sub_825469E0(ctx, base);
loc_8252F14C:
	// addi r1,r1,1808
	ctx.r1.s64 = ctx.r1.s64 + 1808;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F154"))) PPC_WEAK_FUNC(sub_8252F154);
PPC_FUNC_IMPL(__imp__sub_8252F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F158"))) PPC_WEAK_FUNC(sub_8252F158);
PPC_FUNC_IMPL(__imp__sub_8252F158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252F160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252f1dc
	if (ctx.cr6.eq) goto loc_8252F1DC;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f19c
	if (ctx.cr6.eq) goto loc_8252F19C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
loc_8252F19C:
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252f1b8
	if (ctx.cr6.eq) goto loc_8252F1B8;
	// bl 0x826a3ae0
	ctx.lr = 0x8252F1AC;
	sub_826A3AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a2868
	ctx.lr = 0x8252F1B4;
	sub_826A2868(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
loc_8252F1B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252f1d0
	if (ctx.cr6.eq) goto loc_8252F1D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c449e0
	ctx.lr = 0x8252F1D0;
	sub_82C449E0(ctx, base);
loc_8252F1D0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825897a0
	ctx.lr = 0x8252F1D8;
	sub_825897A0(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_8252F1DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F1E4"))) PPC_WEAK_FUNC(sub_8252F1E4);
PPC_FUNC_IMPL(__imp__sub_8252F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F1E8"))) PPC_WEAK_FUNC(sub_8252F1E8);
PPC_FUNC_IMPL(__imp__sub_8252F1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8252F1F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8252F208;
	sub_82546708(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8252f32c
	if (ctx.cr0.eq) goto loc_8252F32C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x82546b30
	ctx.lr = 0x8252F21C;
	sub_82546B30(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8252f324
	if (!ctx.cr6.lt) goto loc_8252F324;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8252F238:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8252F23C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252f23c
	if (!ctx.cr6.eq) goto loc_8252F23C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f318
	if (ctx.cr0.eq) goto loc_8252F318;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822400d8
	ctx.lr = 0x8252F268;
	sub_822400D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8224d3e0
	ctx.lr = 0x8252F278;
	sub_8224D3E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82251fc0
	ctx.lr = 0x8252F284;
	sub_82251FC0(ctx, base);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8252F298;
	sub_822402C8(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r30,r24,36
	ctx.r30.s64 = ctx.r24.s64 + 36;
	// bl 0x82691500
	ctx.lr = 0x8252F2A4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252f334
	if (ctx.cr0.eq) goto loc_8252F334;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r28,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r28.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r26,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r26.u8);
	// stb r26,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r26.u8);
	// beq 0x8252f2e8
	if (ctx.cr0.eq) goto loc_8252F2E8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82251fc0
	ctx.lr = 0x8252F2E0;
	sub_82251FC0(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
loc_8252F2E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825308d8
	ctx.lr = 0x8252F2F8;
	sub_825308D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8252F308;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8252F318;
	sub_822402C8(ctx, base);
loc_8252F318:
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8252f238
	if (ctx.cr6.lt) goto loc_8252F238;
loc_8252F324:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252F32C;
	sub_825469E0(ctx, base);
loc_8252F32C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8252F334:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8252F34C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8252F34C"))) PPC_WEAK_FUNC(sub_8252F34C);
PPC_FUNC_IMPL(__imp__sub_8252F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

