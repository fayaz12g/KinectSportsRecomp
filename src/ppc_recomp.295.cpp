#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83012C38"))) PPC_WEAK_FUNC(sub_83012C38);
PPC_FUNC_IMPL(__imp__sub_83012C38) {
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
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// bl 0x830162e0
	ctx.lr = 0x83012C54;
	sub_830162E0(ctx, base);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x830162e0
	ctx.lr = 0x83012C5C;
	sub_830162E0(ctx, base);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// bl 0x830162e0
	ctx.lr = 0x83012C64;
	sub_830162E0(ctx, base);
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x830162e0
	ctx.lr = 0x83012C6C;
	sub_830162E0(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83012c7c
	if (ctx.cr6.eq) goto loc_83012C7C;
	// bl 0x830162e0
	ctx.lr = 0x83012C7C;
	sub_830162E0(ctx, base);
loc_83012C7C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f0,116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// stfs f0,132(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 132, temp.u32);
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// bl 0x830124f8
	ctx.lr = 0x83012CBC;
	sub_830124F8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012448
	ctx.lr = 0x83012CC4;
	sub_83012448(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830124b0
	ctx.lr = 0x83012CCC;
	sub_830124B0(ctx, base);
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

__attribute__((alias("__imp__sub_83012CE4"))) PPC_WEAK_FUNC(sub_83012CE4);
PPC_FUNC_IMPL(__imp__sub_83012CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012CE8"))) PPC_WEAK_FUNC(sub_83012CE8);
PPC_FUNC_IMPL(__imp__sub_83012CE8) {
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
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,228
	ctx.r3.s64 = ctx.r3.s64 + 228;
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// bl 0x82fa77c0
	ctx.lr = 0x83012D10;
	sub_82FA77C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,420(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// stb r11,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r11.u8);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x83012d38
	if (!ctx.cr6.eq) goto loc_83012D38;
	// lfs f0,232(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,424(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83012d48
	if (ctx.cr6.eq) goto loc_83012D48;
loc_83012D38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012620
	ctx.lr = 0x83012D40;
	sub_83012620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,211(r31)
	PPC_STORE_U8(ctx.r31.u32 + 211, ctx.r11.u8);
loc_83012D48:
	// lfs f0,236(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,428(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83012d60
	if (ctx.cr6.eq) goto loc_83012D60;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012550
	ctx.lr = 0x83012D60;
	sub_83012550(ctx, base);
loc_83012D60:
	// lfs f0,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,436(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83012d90
	if (!ctx.cr6.eq) goto loc_83012D90;
	// lfs f0,248(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83012d90
	if (!ctx.cr6.eq) goto loc_83012D90;
	// lfs f0,252(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,444(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83012d98
	if (ctx.cr6.eq) goto loc_83012D98;
loc_83012D90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011d60
	ctx.lr = 0x83012D98;
	sub_83011D60(ctx, base);
loc_83012D98:
	// lfs f0,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,448(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83012dc8
	if (!ctx.cr6.eq) goto loc_83012DC8;
	// lfs f0,260(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,452(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 452);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83012dc8
	if (!ctx.cr6.eq) goto loc_83012DC8;
	// lfs f0,264(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,456(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 456);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83012dd0
	if (ctx.cr6.eq) goto loc_83012DD0;
loc_83012DC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011e70
	ctx.lr = 0x83012DD0;
	sub_83011E70(ctx, base);
loc_83012DD0:
	// lfs f0,268(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,460(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 460);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83012e00
	if (!ctx.cr6.eq) goto loc_83012E00;
	// lfs f0,272(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,464(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x83012e00
	if (!ctx.cr6.eq) goto loc_83012E00;
	// lfs f0,276(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,468(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x83012e08
	if (ctx.cr6.eq) goto loc_83012E08;
loc_83012E00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011f80
	ctx.lr = 0x83012E08;
	sub_83011F80(ctx, base);
loc_83012E08:
	// lbz r11,209(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 209);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83012e20
	if (ctx.cr6.eq) goto loc_83012E20;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
loc_83012E20:
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

__attribute__((alias("__imp__sub_83012E34"))) PPC_WEAK_FUNC(sub_83012E34);
PPC_FUNC_IMPL(__imp__sub_83012E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83012E38"))) PPC_WEAK_FUNC(sub_83012E38);
PPC_FUNC_IMPL(__imp__sub_83012E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83012E40;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d18
	ctx.lr = 0x83012E48;
	__savefpr_24(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r4,r11,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83012E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83012e94
	if (!ctx.cr6.eq) goto loc_83012E94;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d64
	ctx.lr = 0x83012E90;
	__restfpr_24(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83012E94:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r24,r19,2048
	ctx.r24.s64 = ctx.r19.s64 + 2048;
	// addi r20,r19,3072
	ctx.r20.s64 = ctx.r19.s64 + 3072;
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r23,r19,1024
	ctx.r23.s64 = ctx.r19.s64 + 1024;
	// stw r20,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r20.u32);
	// li r22,0
	ctx.r22.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83012ec4
	if (ctx.cr6.eq) goto loc_83012EC4;
	// addi r22,r19,4096
	ctx.r22.s64 = ctx.r19.s64 + 4096;
	// addi r21,r19,5120
	ctx.r21.s64 = ctx.r19.s64 + 5120;
loc_83012EC4:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,24244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,24240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f25,24236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24236);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f30,f12,f13,f25
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f12,f30,f30,f27
	ctx.f12.f64 = double(float(-(ctx.f30.f64 * ctx.f30.f64 - ctx.f27.f64)));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x83012f0c
	if (!ctx.cr6.gt) goto loc_83012F0C;
	// fsqrts f28,f12
	ctx.f28.f64 = double(float(sqrt(ctx.f12.f64)));
	// b 0x83012f10
	goto loc_83012F10;
loc_83012F0C:
	// fmr f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f29.f64;
loc_83012F10:
	// lfs f12,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f31,f11,f13,f25
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f0,f31,f31,f27
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x83012f2c
	if (!ctx.cr6.gt) goto loc_83012F2C;
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
loc_83012F2C:
	// lhz r18,14(r26)
	ctx.r18.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x830133d4
	if (ctx.cr6.eq) goto loc_830133D4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r17,r31,152
	ctx.r17.s64 = ctx.r31.s64 + 152;
	// addi r15,r31,140
	ctx.r15.s64 = ctx.r31.s64 + 140;
	// addi r14,r31,4
	ctx.r14.s64 = ctx.r31.s64 + 4;
	// addi r16,r31,68
	ctx.r16.s64 = ctx.r31.s64 + 68;
	// lfs f24,24432(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24432);
	ctx.f24.f64 = double(temp.f32);
loc_83012F54:
	// cmplwi cr6,r18,256
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 256, ctx.xer);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// blt cr6,0x83012f64
	if (ctx.cr6.lt) goto loc_83012F64;
	// li r30,256
	ctx.r30.s64 = 256;
loc_83012F64:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012678
	ctx.lr = 0x83012F7C;
	sub_83012678(ctx, base);
	// lwz r11,0(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83012fa0
	if (!ctx.cr6.gt) goto loc_83012FA0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x83015f20
	ctx.lr = 0x83012F9C;
	sub_83015F20(ctx, base);
	// b 0x83012fac
	goto loc_83012FAC;
loc_83012FA0:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a75220
	ctx.lr = 0x83012FAC;
	sub_82A75220(ctx, base);
loc_83012FAC:
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83012fc8
	if (!ctx.cr6.gt) goto loc_83012FC8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x83015e60
	ctx.lr = 0x83012FC8;
	sub_83015E60(ctx, base);
loc_83012FC8:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013070
	if (ctx.cr6.eq) goto loc_83013070;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// bl 0x83016308
	ctx.lr = 0x83012FEC;
	sub_83016308(ctx, base);
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013070
	if (ctx.cr6.eq) goto loc_83013070;
	// lbz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83013070
	if (ctx.cr6.eq) goto loc_83013070;
loc_83013008:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm r10,r11,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r28,r9
	ctx.r3.u64 = ctx.r28.u64 + ctx.r9.u64;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x83013058
	if (!ctx.cr6.eq) goto loc_83013058;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x83015bf8
	ctx.lr = 0x83013038;
	sub_83015BF8(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x83015bf8
	ctx.lr = 0x83013050;
	sub_83015BF8(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83013058:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83013008
	if (ctx.cr6.lt) goto loc_83013008;
loc_83013070:
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83013078:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83017258
	ctx.lr = 0x83013088;
	sub_83017258(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x83013078
	if (!ctx.cr0.eq) goto loc_83013078;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012718
	ctx.lr = 0x830130A4;
	sub_83012718(ctx, base);
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a75988
	ctx.lr = 0x830130B4;
	sub_82A75988(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83013114
	if (!ctx.cr6.gt) goto loc_83013114;
	// li r28,0
	ctx.r28.s64 = 0;
loc_830130C8:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x83015e60
	ctx.lr = 0x830130E0;
	sub_83015E60(ctx, base);
	// rlwinm r10,r29,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r5,r10,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// bl 0x83016b30
	ctx.lr = 0x83013100;
	sub_83016B30(ctx, base);
	// lwz r8,196(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 + 108;
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x830130c8
	if (ctx.cr6.lt) goto loc_830130C8;
loc_83013114:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f0,f24
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// li r29,2
	ctx.r29.s64 = 2;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_83013128:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x83017720
	ctx.lr = 0x83013138;
	sub_83017720(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83013128
	if (!ctx.cr0.eq) goto loc_83013128;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r16
	ctx.r28.u64 = ctx.r16.u64;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// li r29,2
	ctx.r29.s64 = 2;
loc_83013150:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r4,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830175f8
	ctx.lr = 0x83013160;
	sub_830175F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x83013150
	if (!ctx.cr0.eq) goto loc_83013150;
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013204
	if (ctx.cr6.eq) goto loc_83013204;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f6,f0,f29
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f5,f13,f28
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f3,f13,f30
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x830131C0;
	sub_830177E8(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013200
	if (ctx.cr6.eq) goto loc_83013200;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// fmuls f6,f0,f29
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f5,f13,f28
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmuls f4,f0,f31
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f3,f13,f30
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x830177e8
	ctx.lr = 0x83013200;
	sub_830177E8(ctx, base);
loc_83013200:
	// li r29,1
	ctx.r29.s64 = 1;
loc_83013204:
	// rlwinm r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830132a0
	if (ctx.cr6.eq) goto loc_830132A0;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f4,f0,f29
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830177e8
	ctx.lr = 0x8301325C;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301329c
	if (ctx.cr6.eq) goto loc_8301329C;
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lfs f13,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f6,f0,f31
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fmuls f5,f13,f30
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f4,f0,f29
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f3,f13,f28
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f28.f64));
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x830177e8
	ctx.lr = 0x8301329C;
	sub_830177E8(ctx, base);
loc_8301329C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830132A0:
	// rlwinm r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301333c
	if (ctx.cr6.eq) goto loc_8301333C;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f25
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// fmuls f3,f13,f25
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830177e8
	ctx.lr = 0x830132F8;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83013338
	if (ctx.cr6.eq) goto loc_83013338;
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// lfs f13,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f4,f0,f25
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f25.f64));
	// fmuls f3,f13,f25
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f25.f64));
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x830177e8
	ctx.lr = 0x83013338;
	sub_830177E8(ctx, base);
loc_83013338:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_8301333C:
	// rlwinm r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830133a0
	if (ctx.cr6.eq) goto loc_830133A0;
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f10.f64 = double(temp.f32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f4,f11,f25
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fmuls f3,f9,f25
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x830177e8
	ctx.lr = 0x830133A0;
	sub_830177E8(ctx, base);
loc_830133A0:
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// subf. r18,r30,r18
	ctx.r18.s64 = ctx.r18.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// lfs f12,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lfs f11,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f11.f64 = double(temp.f32);
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// stfs f0,488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f13,492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f11,484(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// bne 0x83012f54
	if (!ctx.cr0.eq) goto loc_83012F54;
loc_830133D4:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830133EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d64
	ctx.lr = 0x830133FC;
	__restfpr_24(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013400"))) PPC_WEAK_FUNC(sub_83013400);
PPC_FUNC_IMPL(__imp__sub_83013400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83013408;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d18
	ctx.lr = 0x83013410;
	__savefpr_24(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lbz r9,369(r3)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r3.u32 + 369);
	// li r10,2
	ctx.r10.s64 = 2;
	// rlwinm r29,r30,0,26,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x30;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// subfic r8,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r29.s64;
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// subfe r6,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r9.s64;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r8,r6,r10
	ctx.r8.u64 = ctx.r6.u64 & ctx.r10.u64;
	// subfe r7,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r27,r7,r8
	ctx.r27.u64 = ctx.r7.u64 & ctx.r8.u64;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// rlwinm r4,r11,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x8301346C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301348c
	if (!ctx.cr6.eq) goto loc_8301348C;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d64
	ctx.lr = 0x83013488;
	__restfpr_24(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_8301348C:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r18,r21,2048
	ctx.r18.s64 = ctx.r21.s64 + 2048;
	// addi r15,r21,3072
	ctx.r15.s64 = ctx.r21.s64 + 3072;
	// addi r20,r21,4096
	ctx.r20.s64 = ctx.r21.s64 + 4096;
	// stw r18,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r18.u32);
	// addi r19,r21,5120
	ctx.r19.s64 = ctx.r21.s64 + 5120;
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// stw r20,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r20.u32);
	// addi r22,r21,1024
	ctx.r22.s64 = ctx.r21.s64 + 1024;
	// stw r19,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r19.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830134e4
	if (ctx.cr6.eq) goto loc_830134E4;
	// addi r24,r21,6144
	ctx.r24.s64 = ctx.r21.s64 + 6144;
	// addi r23,r21,7168
	ctx.r23.s64 = ctx.r21.s64 + 7168;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x830134e4
	if (!ctx.cr6.eq) goto loc_830134E4;
	// addi r17,r21,8192
	ctx.r17.s64 = ctx.r21.s64 + 8192;
	// addi r16,r21,9216
	ctx.r16.s64 = ctx.r21.s64 + 9216;
loc_830134E4:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,24244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,24240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f25,24236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24236);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f30,f12,f13,f25
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f12,f30,f30,f27
	ctx.f12.f64 = double(float(-(ctx.f30.f64 * ctx.f30.f64 - ctx.f27.f64)));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x8301352c
	if (!ctx.cr6.gt) goto loc_8301352C;
	// fsqrts f28,f12
	ctx.f28.f64 = double(float(sqrt(ctx.f12.f64)));
	// b 0x83013530
	goto loc_83013530;
loc_8301352C:
	// fmr f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f29.f64;
loc_83013530:
	// lfs f12,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f31,f11,f13,f25
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f0,f31,f31,f27
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x8301354c
	if (!ctx.cr6.gt) goto loc_8301354C;
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
loc_8301354C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x8301355c
	if (!ctx.cr6.eq) goto loc_8301355C;
	// stfs f27,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 280, temp.u32);
	// stfs f27,284(r31)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r31.u32 + 284, temp.u32);
loc_8301355C:
	// lhz r11,14(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x83013c28
	if (ctx.cr6.eq) goto loc_83013C28;
	// clrlwi r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r9,r30,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// rlwinm r8,r30,0,29,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// rlwinm r7,r30,0,27,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	// rlwinm r6,r30,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// rlwinm r5,r30,0,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// lfs f24,24432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24432);
	ctx.f24.f64 = double(temp.f32);
	// addi r14,r31,152
	ctx.r14.s64 = ctx.r31.s64 + 152;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// b 0x830135b8
	goto loc_830135B8;
loc_830135B0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r27,100(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_830135B8:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x830135c8
	if (ctx.cr6.lt) goto loc_830135C8;
	// li r30,256
	ctx.r30.s64 = 256;
loc_830135C8:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012678
	ctx.lr = 0x830135E0;
	sub_83012678(ctx, base);
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83013604
	if (!ctx.cr6.gt) goto loc_83013604;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x83015f20
	ctx.lr = 0x83013600;
	sub_83015F20(ctx, base);
	// b 0x83013610
	goto loc_83013610;
loc_83013604:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a75220
	ctx.lr = 0x83013610;
	sub_82A75220(ctx, base);
loc_83013610:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x8301362c
	if (!ctx.cr6.gt) goto loc_8301362C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x83015e60
	ctx.lr = 0x8301362C;
	sub_83015E60(ctx, base);
loc_8301362C:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8301371c
	if (ctx.cr6.eq) goto loc_8301371C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x83016308
	ctx.lr = 0x83013650;
	sub_83016308(ctx, base);
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830136d4
	if (ctx.cr6.eq) goto loc_830136D4;
	// lbz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x830136d4
	if (ctx.cr6.eq) goto loc_830136D4;
loc_8301366C:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm r10,r11,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x830136bc
	if (!ctx.cr6.eq) goto loc_830136BC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83015bf8
	ctx.lr = 0x8301369C;
	sub_83015BF8(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x83015bf8
	ctx.lr = 0x830136B4;
	sub_83015BF8(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_830136BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8301366c
	if (ctx.cr6.lt) goto loc_8301366C;
loc_830136D4:
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// bne cr6,0x8301371c
	if (!ctx.cr6.eq) goto loc_8301371C;
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83013714
	if (!ctx.cr6.gt) goto loc_83013714;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83015f20
	ctx.lr = 0x830136FC;
	sub_83015F20(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x83015f20
	ctx.lr = 0x83013710;
	sub_83015F20(ctx, base);
	// b 0x8301371c
	goto loc_8301371C;
loc_83013714:
	// mr r17,r24
	ctx.r17.u64 = ctx.r24.u64;
	// mr r16,r23
	ctx.r16.u64 = ctx.r23.u64;
loc_8301371C:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83013724:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83017258
	ctx.lr = 0x83013734;
	sub_83017258(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x83013724
	if (!ctx.cr0.eq) goto loc_83013724;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012718
	ctx.lr = 0x83013750;
	sub_83012718(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a75988
	ctx.lr = 0x83013760;
	sub_82A75988(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830137c8
	if (!ctx.cr6.gt) goto loc_830137C8;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83013774:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x83015e60
	ctx.lr = 0x8301378C;
	sub_83015E60(ctx, base);
	// rlwinm r10,r29,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x4;
	// addi r9,r1,136
	ctx.r9.s64 = ctx.r1.s64 + 136;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r5,r10,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// bl 0x83016d18
	ctx.lr = 0x830137B4;
	sub_83016D18(ctx, base);
	// lwz r7,196(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 + 108;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x83013774
	if (ctx.cr6.lt) goto loc_83013774;
loc_830137C8:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f0,f24
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_830137DC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x83017720
	ctx.lr = 0x830137EC;
	sub_83017720(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x830137dc
	if (!ctx.cr0.eq) goto loc_830137DC;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83013804:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r4,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830175f8
	ctx.lr = 0x83013814;
	sub_830175F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x83013804
	if (!ctx.cr0.eq) goto loc_83013804;
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830138d4
	if (ctx.cr6.eq) goto loc_830138D4;
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x83013880;
	sub_830177E8(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830138d0
	if (ctx.cr6.eq) goto loc_830138D0;
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f12,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x830138D0;
	sub_830177E8(ctx, base);
loc_830138D0:
	// li r29,1
	ctx.r29.s64 = 1;
loc_830138D4:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013990
	if (ctx.cr6.eq) goto loc_83013990;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f12,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// fmuls f6,f10,f31
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f10,f29
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830177e8
	ctx.lr = 0x8301393C;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8301398c
	if (ctx.cr6.eq) goto loc_8301398C;
	// lfs f0,300(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lfs f13,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lfs f12,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// bl 0x830177e8
	ctx.lr = 0x8301398C;
	sub_830177E8(ctx, base);
loc_8301398C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83013990:
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830139f8
	if (ctx.cr6.eq) goto loc_830139F8;
	// lfs f0,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f10.f64 = double(temp.f32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f4,f11,f25
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fmuls f3,f9,f25
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x830177e8
	ctx.lr = 0x830139F4;
	sub_830177E8(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_830139F8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013ab4
	if (ctx.cr6.eq) goto loc_83013AB4;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// fmuls f6,f10,f29
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830177e8
	ctx.lr = 0x83013A60;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83013ab0
	if (ctx.cr6.eq) goto loc_83013AB0;
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lfs f12,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x83013AB0;
	sub_830177E8(ctx, base);
loc_83013AB0:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83013AB4:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013b70
	if (ctx.cr6.eq) goto loc_83013B70;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830177e8
	ctx.lr = 0x83013B1C;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83013b6c
	if (ctx.cr6.eq) goto loc_83013B6C;
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// lfs f12,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// bl 0x830177e8
	ctx.lr = 0x83013B6C;
	sub_830177E8(ctx, base);
loc_83013B6C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_83013B70:
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013bd4
	if (ctx.cr6.eq) goto loc_83013BD4;
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f10.f64 = double(temp.f32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f4,f11,f25
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fmuls f3,f9,f25
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x830177e8
	ctx.lr = 0x83013BD4;
	sub_830177E8(ctx, base);
loc_83013BD4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// subf. r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lfs f10,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f9,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lfs f8,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f13,492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f11,472(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f10,480(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f9,476(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f8,484(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// bne 0x830135b0
	if (!ctx.cr0.eq) goto loc_830135B0;
loc_83013C28:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83013C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d64
	ctx.lr = 0x83013C50;
	__restfpr_24(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83013C54"))) PPC_WEAK_FUNC(sub_83013C54);
PPC_FUNC_IMPL(__imp__sub_83013C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83013C58"))) PPC_WEAK_FUNC(sub_83013C58);
PPC_FUNC_IMPL(__imp__sub_83013C58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83013C60;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d18
	ctx.lr = 0x83013C68;
	__savefpr_24(ctx, base);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 208);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r4,r11,10,0,21
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0xFFFFFC00;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83013C98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83013cb8
	if (!ctx.cr6.eq) goto loc_83013CB8;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d64
	ctx.lr = 0x83013CB4;
	__restfpr_24(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_83013CB8:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// addi r20,r24,2048
	ctx.r20.s64 = ctx.r24.s64 + 2048;
	// addi r10,r24,3072
	ctx.r10.s64 = ctx.r24.s64 + 3072;
	// addi r15,r24,4096
	ctx.r15.s64 = ctx.r24.s64 + 4096;
	// stw r20,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r20.u32);
	// addi r14,r24,5120
	ctx.r14.s64 = ctx.r24.s64 + 5120;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r17,r24,6144
	ctx.r17.s64 = ctx.r24.s64 + 6144;
	// stw r15,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r15.u32);
	// addi r16,r24,7168
	ctx.r16.s64 = ctx.r24.s64 + 7168;
	// stw r14,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r14.u32);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// addi r21,r24,1024
	ctx.r21.s64 = ctx.r24.s64 + 1024;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r19,0
	ctx.r19.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013d18
	if (ctx.cr6.eq) goto loc_83013D18;
	// addi r23,r24,8192
	ctx.r23.s64 = ctx.r24.s64 + 8192;
	// addi r22,r24,9216
	ctx.r22.s64 = ctx.r24.s64 + 9216;
	// addi r19,r24,10240
	ctx.r19.s64 = ctx.r24.s64 + 10240;
	// addi r18,r24,11264
	ctx.r18.s64 = ctx.r24.s64 + 11264;
loc_83013D18:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,432(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,24244(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24244);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f13,24240(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24240);
	ctx.f13.f64 = double(temp.f32);
	// lfs f25,24236(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24236);
	ctx.f25.f64 = double(temp.f32);
	// lfs f27,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f27.f64 = double(temp.f32);
	// lfs f29,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f29.f64 = double(temp.f32);
	// fmadds f30,f12,f13,f25
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f12,f30,f30,f27
	ctx.f12.f64 = double(float(-(ctx.f30.f64 * ctx.f30.f64 - ctx.f27.f64)));
	// fcmpu cr6,f12,f29
	ctx.cr6.compare(ctx.f12.f64, ctx.f29.f64);
	// ble cr6,0x83013d60
	if (!ctx.cr6.gt) goto loc_83013D60;
	// fsqrts f28,f12
	ctx.f28.f64 = double(float(sqrt(ctx.f12.f64)));
	// b 0x83013d64
	goto loc_83013D64;
loc_83013D60:
	// fmr f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f29.f64;
loc_83013D64:
	// lfs f12,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fmadds f31,f11,f13,f25
	ctx.f31.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f25.f64));
	// fnmsubs f0,f31,f31,f27
	ctx.f0.f64 = double(float(-(ctx.f31.f64 * ctx.f31.f64 - ctx.f27.f64)));
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x83013d80
	if (!ctx.cr6.gt) goto loc_83013D80;
	// fsqrts f29,f0
	ctx.f29.f64 = double(float(sqrt(ctx.f0.f64)));
loc_83013D80:
	// lhz r11,14(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 14);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// beq cr6,0x830143ec
	if (ctx.cr6.eq) goto loc_830143EC;
	// rlwinm r10,r30,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// rlwinm r9,r30,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x8;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// lfs f24,24432(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24432);
	ctx.f24.f64 = double(temp.f32);
	// b 0x83013db4
	goto loc_83013DB4;
loc_83013DB0:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_83013DB4:
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// blt cr6,0x83013dc4
	if (ctx.cr6.lt) goto loc_83013DC4;
	// li r30,256
	ctx.r30.s64 = 256;
loc_83013DC4:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012678
	ctx.lr = 0x83013DDC;
	sub_83012678(ctx, base);
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// ble cr6,0x83013e00
	if (!ctx.cr6.gt) goto loc_83013E00;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x83015f20
	ctx.lr = 0x83013DFC;
	sub_83015F20(ctx, base);
	// b 0x83013e0c
	goto loc_83013E0C;
loc_83013E00:
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82a75220
	ctx.lr = 0x83013E0C;
	sub_82A75220(ctx, base);
loc_83013E0C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83013e28
	if (!ctx.cr6.gt) goto loc_83013E28;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83015e60
	ctx.lr = 0x83013E28;
	sub_83015E60(ctx, base);
loc_83013E28:
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013f10
	if (ctx.cr6.eq) goto loc_83013F10;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x83016308
	ctx.lr = 0x83013E4C;
	sub_83016308(ctx, base);
	// lbz r11,368(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 368);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83013ed0
	if (ctx.cr6.eq) goto loc_83013ED0;
	// lbz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83013ed0
	if (ctx.cr6.eq) goto loc_83013ED0;
loc_83013E68:
	// clrlwi r29,r11,24
	ctx.r29.u64 = ctx.r11.u32 & 0xFF;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// rlwinm r10,r11,2,22,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FC;
	// add r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r28,r10,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r3,r9,r28
	ctx.r3.u64 = ctx.r9.u64 + ctx.r28.u64;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x83013eb8
	if (!ctx.cr6.eq) goto loc_83013EB8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83015bf8
	ctx.lr = 0x83013E98;
	sub_83015BF8(ctx, base);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x83015bf8
	ctx.lr = 0x83013EB0;
	sub_83015BF8(ctx, base);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
loc_83013EB8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// lbz r10,204(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 204);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83013e68
	if (ctx.cr6.lt) goto loc_83013E68;
loc_83013ED0:
	// lwz r11,164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r3,r31,164
	ctx.r3.s64 = ctx.r31.s64 + 164;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83013f08
	if (!ctx.cr6.gt) goto loc_83013F08;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x83015f20
	ctx.lr = 0x83013EF0;
	sub_83015F20(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,176
	ctx.r3.s64 = ctx.r31.s64 + 176;
	// bl 0x83015f20
	ctx.lr = 0x83013F04;
	sub_83015F20(ctx, base);
	// b 0x83013f10
	goto loc_83013F10;
loc_83013F08:
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
loc_83013F10:
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_83013F18:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x83017258
	ctx.lr = 0x83013F28;
	sub_83017258(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bne 0x83013f18
	if (!ctx.cr0.eq) goto loc_83013F18;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012718
	ctx.lr = 0x83013F44;
	sub_83012718(ctx, base);
	// li r5,6144
	ctx.r5.s64 = 6144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a75988
	ctx.lr = 0x83013F54;
	sub_82A75988(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x83013fc4
	if (!ctx.cr6.gt) goto loc_83013FC4;
	// li r28,0
	ctx.r28.s64 = 0;
loc_83013F68:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x83015e60
	ctx.lr = 0x83013F80;
	sub_83015E60(ctx, base);
	// rlwinm r10,r29,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0x4;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// add r3,r28,r11
	ctx.r3.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r6,r10,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// lwzx r5,r10,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r5.u32);
	// bl 0x83016f28
	ctx.lr = 0x83013FB0;
	sub_83016F28(ctx, base);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r28,r28,108
	ctx.r28.s64 = ctx.r28.s64 + 108;
	// cmplw cr6,r29,r4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x83013f68
	if (ctx.cr6.lt) goto loc_83013F68;
loc_83013FC4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,192(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f26,f0,f24
	ctx.f26.f64 = double(float(ctx.f0.f64 * ctx.f24.f64));
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_83013FD8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x83017720
	ctx.lr = 0x83013FE8;
	sub_83017720(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x83013fd8
	if (!ctx.cr0.eq) goto loc_83013FD8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r28,r31,68
	ctx.r28.s64 = ctx.r31.s64 + 68;
	// addi r27,r11,-4
	ctx.r27.s64 = ctx.r11.s64 + -4;
	// li r29,6
	ctx.r29.s64 = 6;
loc_83014000:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwzu r4,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830175f8
	ctx.lr = 0x83014010;
	sub_830175F8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x83014000
	if (!ctx.cr0.eq) goto loc_83014000;
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmuls f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x83014070;
	sub_830177E8(ctx, base);
	// lbz r11,208(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830140c0
	if (ctx.cr6.eq) goto loc_830140C0;
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lfs f12,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x830140C0;
	sub_830177E8(ctx, base);
loc_830140C0:
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f12,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// bl 0x830177e8
	ctx.lr = 0x83014118;
	sub_830177E8(ctx, base);
	// lbz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83014168
	if (ctx.cr6.eq) goto loc_83014168;
	// lfs f0,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// lfs f12,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,472(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// bl 0x830177e8
	ctx.lr = 0x83014168;
	sub_830177E8(ctx, base);
loc_83014168:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r29,2
	ctx.r29.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830141d4
	if (ctx.cr6.eq) goto loc_830141D4;
	// lfs f0,304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f13,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f12,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,480(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 480);
	ctx.f10.f64 = double(temp.f32);
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f4,f11,f25
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fmuls f3,f9,f25
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x830177e8
	ctx.lr = 0x830141D0;
	sub_830177E8(ctx, base);
	// li r29,3
	ctx.r29.s64 = 3;
loc_830141D4:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f0,f13
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lfs f11,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f12,f11
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f6,f10,f29
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// fmuls f4,f10,f31
	ctx.f4.f64 = double(float(ctx.f10.f64 * ctx.f31.f64));
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x830177e8
	ctx.lr = 0x83014230;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83014280
	if (ctx.cr6.eq) goto loc_83014280;
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// lfs f12,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f10.f64 = double(temp.f32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f29
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f4,f11,f31
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f5,f9,f28
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// fmuls f3,f9,f30
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// bl 0x830177e8
	ctx.lr = 0x83014280;
	sub_830177E8(ctx, base);
loc_83014280:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r28,r29,1
	ctx.r28.s64 = ctx.r29.s64 + 1;
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lfs f12,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830177e8
	ctx.lr = 0x830142E0;
	sub_830177E8(ctx, base);
	// lbz r8,208(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 208);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83014330
	if (ctx.cr6.eq) goto loc_83014330;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lfs f0,284(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// lfs f12,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,492(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 492);
	ctx.f10.f64 = double(temp.f32);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f27
	ctx.f2.f64 = ctx.f27.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// fmuls f6,f11,f31
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmuls f4,f11,f29
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f5,f9,f30
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// fmuls f3,f9,f28
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f28.f64));
	// bl 0x830177e8
	ctx.lr = 0x83014330;
	sub_830177E8(ctx, base);
loc_83014330:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83014398
	if (ctx.cr6.eq) goto loc_83014398;
	// lfs f0,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lfs f13,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// lhz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 12);
	// lfs f12,484(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 484);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f10,496(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r28,1
	ctx.r9.s64 = ctx.r28.s64 + 1;
	// fmuls f9,f12,f10
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lfs f2,296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,488(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f4,f11,f25
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f25.f64));
	// fmuls f3,f9,f25
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f25.f64));
	// add r8,r11,r25
	ctx.r8.u64 = ctx.r11.u64 + ctx.r25.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// fmr f6,f4
	ctx.f6.f64 = ctx.f4.f64;
	// fmr f5,f3
	ctx.f5.f64 = ctx.f3.f64;
	// bl 0x830177e8
	ctx.lr = 0x83014398;
	sub_830177E8(ctx, base);
loc_83014398:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lfs f0,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 300);
	ctx.f13.f64 = double(temp.f32);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// subf. r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f12,304(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,280(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f11.f64 = double(temp.f32);
	// fmr f28,f29
	ctx.f28.f64 = ctx.f29.f64;
	// lfs f10,288(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f10.f64 = double(temp.f32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f9,284(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	ctx.f9.f64 = double(temp.f32);
	// add r25,r30,r25
	ctx.r25.u64 = ctx.r30.u64 + ctx.r25.u64;
	// lfs f8,292(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f8.f64 = double(temp.f32);
	// stfs f0,488(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 488, temp.u32);
	// stfs f13,492(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 492, temp.u32);
	// stfs f12,496(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 496, temp.u32);
	// stfs f11,472(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// stfs f10,480(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f9,476(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// stfs f8,484(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// bne 0x83013db0
	if (!ctx.cr0.eq) goto loc_83013DB0;
loc_830143EC:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83014404;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d64
	ctx.lr = 0x83014414;
	__restfpr_24(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014418"))) PPC_WEAK_FUNC(sub_83014418);
PPC_FUNC_IMPL(__imp__sub_83014418) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r10,r11,24248
	ctx.r10.s64 = ctx.r11.s64 + 24248;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x83012798
	ctx.lr = 0x83014440;
	sub_83012798(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,228
	ctx.r3.s64 = ctx.r31.s64 + 228;
	// stw r11,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r11.u32);
	// li r5,188
	ctx.r5.s64 = 188;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// bl 0x82a75988
	ctx.lr = 0x83014468;
	sub_82A75988(ctx, base);
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x83014478;
	sub_82A75988(ctx, base);
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

__attribute__((alias("__imp__sub_83014490"))) PPC_WEAK_FUNC(sub_83014490);
PPC_FUNC_IMPL(__imp__sub_83014490) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83014498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83012ce8
	ctx.lr = 0x830144A8;
	sub_83012CE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-17
	ctx.r11.s64 = ctx.r11.s64 + -17;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r10,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83014578
	if (ctx.cr6.eq) goto loc_83014578;
	// lbz r11,211(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 211);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830144d8
	if (!ctx.cr6.eq) goto loc_830144D8;
	// lbz r11,210(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 210);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83014510
	if (!ctx.cr6.eq) goto loc_83014510;
loc_830144D8:
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f13,312(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 312);
	ctx.f13.f64 = double(temp.f32);
	// li r9,188
	ctx.r9.s64 = 188;
	// lfs f12,228(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f12.f64 = double(temp.f32);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lfs f0,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f9,f13,f0,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.f6.u32);
loc_83014510:
	// lhz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 12);
	// lhz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// lwz r10,188(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8301452c
	if (!ctx.cr6.lt) goto loc_8301452C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8301452C:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r8,r9
	ctx.r8.s64 = -ctx.r9.s64;
	// clrlwi r10,r8,30
	ctx.r10.u64 = ctx.r8.u32 & 0x3;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82fd5af8
	ctx.lr = 0x83014558;
	sub_82FD5AF8(ctx, base);
	// lhz r11,14(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// add r7,r11,r29
	ctx.r7.u64 = ctx.r11.u64 + ctx.r29.u64;
	// sth r7,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r7.u16);
	// lwz r5,188(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// ble cr6,0x83014578
	if (!ctx.cr6.gt) goto loc_83014578;
	// li r11,45
	ctx.r11.s64 = 45;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_83014578:
	// stb r28,210(r30)
	PPC_STORE_U8(ctx.r30.u32 + 210, ctx.r28.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bgt cr6,0x830145e8
	if (ctx.cr6.gt) goto loc_830145E8;
	// beq cr6,0x83014640
	if (ctx.cr6.eq) goto loc_83014640;
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// bgt cr6,0x8301465c
	if (ctx.cr6.gt) goto loc_8301465C;
	// lis r12,-31999
	ctx.r12.s64 = -2097086464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17840
	ctx.r12.s64 = ctx.r12.s64 + 17840;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_830145D8;
	case 1:
		goto loc_830145D8;
	case 2:
		goto loc_8301465C;
	case 3:
		goto loc_8301465C;
	case 4:
		goto loc_83014640;
	case 5:
		goto loc_830145D8;
	case 6:
		goto loc_8301465C;
	case 7:
		goto loc_8301465C;
	case 8:
		goto loc_830145D8;
	case 9:
		goto loc_830145D8;
	default:
		__builtin_unreachable();
	}
	// lwz r24,17880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17880);
	// lwz r24,17880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17880);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,17984(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r24,17880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17880);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,17880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17880);
	// lwz r24,17880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17880);
loc_830145D8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83012e38
	ctx.lr = 0x830145E4;
	sub_83012E38(ctx, base);
	// b 0x8301465c
	goto loc_8301465C;
loc_830145E8:
	// addi r11,r11,-51
	ctx.r11.s64 = ctx.r11.s64 + -51;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x8301465c
	if (ctx.cr6.gt) goto loc_8301465C;
	// lis r12,-31999
	ctx.r12.s64 = -2097086464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,17932
	ctx.r12.s64 = ctx.r12.s64 + 17932;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_83014640;
	case 1:
		goto loc_8301465C;
	case 2:
		goto loc_8301465C;
	case 3:
		goto loc_8301465C;
	case 4:
		goto loc_83014650;
	case 5:
		goto loc_8301465C;
	case 6:
		goto loc_8301465C;
	case 7:
		goto loc_8301465C;
	case 8:
		goto loc_83014650;
	case 9:
		goto loc_8301465C;
	case 10:
		goto loc_8301465C;
	case 11:
		goto loc_8301465C;
	case 12:
		goto loc_83014650;
	default:
		__builtin_unreachable();
	}
	// lwz r24,17984(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 17984);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18000(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18000);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18000(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18000);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18012(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18012);
	// lwz r24,18000(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 18000);
loc_83014640:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83013400
	ctx.lr = 0x8301464C;
	sub_83013400(ctx, base);
	// b 0x8301465c
	goto loc_8301465C;
loc_83014650:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83013c58
	ctx.lr = 0x8301465C;
	sub_83013C58(ctx, base);
loc_8301465C:
	// addi r4,r30,228
	ctx.r4.s64 = ctx.r30.s64 + 228;
	// addi r3,r30,420
	ctx.r3.s64 = ctx.r30.s64 + 420;
	// li r5,80
	ctx.r5.s64 = 80;
	// bl 0x82fa77c0
	ctx.lr = 0x8301466C;
	sub_82FA77C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014674"))) PPC_WEAK_FUNC(sub_83014674);
PPC_FUNC_IMPL(__imp__sub_83014674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83014678"))) PPC_WEAK_FUNC(sub_83014678);
PPC_FUNC_IMPL(__imp__sub_83014678) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,500
	ctx.r4.s64 = 500;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83014698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830146b4
	if (ctx.cr6.eq) goto loc_830146B4;
	// bl 0x83014418
	ctx.lr = 0x830146A4;
	sub_83014418(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830146B4:
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

__attribute__((alias("__imp__sub_830146C8"))) PPC_WEAK_FUNC(sub_830146C8);
PPC_FUNC_IMPL(__imp__sub_830146C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x830146D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-1056(r1)
	ea = -1056 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,196(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mulli r4,r10,108
	ctx.r4.s64 = ctx.r10.s64 * 108;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x830146F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83014710
	if (!ctx.cr6.eq) goto loc_83014710;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_83014710:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x830147bc
	if (!ctx.cr6.gt) goto loc_830147BC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_83014730:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// add. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x830147a8
	if (ctx.cr0.eq) goto loc_830147A8;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r30,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r30.u32);
	// stw r30,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r30.u32);
	// stw r30,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r30.u32);
	// stfs f0,48(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// stfs f0,52(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stfs f0,56(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stfs f0,60(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 60, temp.u32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f0,68(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f0,72(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// stfs f0,76(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 76, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stfs f0,84(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stfs f0,88(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 88, temp.u32);
	// stfs f0,92(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
	// stw r30,104(r11)
	PPC_STORE_U32(ctx.r11.u32 + 104, ctx.r30.u32);
loc_830147A8:
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,108
	ctx.r10.s64 = ctx.r10.s64 + 108;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83014730
	if (ctx.cr6.lt) goto loc_83014730;
loc_830147BC:
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
	// ble cr6,0x830147f0
	if (!ctx.cr6.gt) goto loc_830147F0;
	// clrldi r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fsqrts f11,f12
	ctx.f11.f64 = double(float(sqrt(ctx.f12.f64)));
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// stfs f10,192(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 192, temp.u32);
loc_830147F0:
	// addi r29,r31,372
	ctx.r29.s64 = ctx.r31.s64 + 372;
	// lfs f2,328(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r1,480
	ctx.r7.s64 = ctx.r1.s64 + 480;
	// lfs f1,324(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	ctx.f1.f64 = double(temp.f32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83011408
	ctx.lr = 0x8301480C;
	sub_83011408(ctx, base);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// lwz r4,200(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x83011aa8
	ctx.lr = 0x83014824;
	sub_83011AA8(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r3,196(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301489c
	if (ctx.cr6.eq) goto loc_8301489C;
	// addi r10,r1,732
	ctx.r10.s64 = ctx.r1.s64 + 732;
	// addi r9,r1,220
	ctx.r9.s64 = ctx.r1.s64 + 220;
	// rotlwi r5,r3,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
loc_83014844:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r3,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r28,r3,r11
	ctx.r28.u64 = ctx.r3.u64 + ctx.r11.u64;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r1,224
	ctx.r28.s64 = ctx.r1.s64 + 224;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r1,224
	ctx.r27.s64 = ctx.r1.s64 + 224;
	// lwzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r6,r6,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// lwzx r7,r7,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// stwu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r10.u32 = ea;
	// blt cr6,0x83014844
	if (ctx.cr6.lt) goto loc_83014844;
loc_8301489C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x830116c8
	ctx.lr = 0x830148A8;
	sub_830116C8(ctx, base);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83014904
	if (ctx.cr6.eq) goto loc_83014904;
	// lwz r6,200(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// lis r7,-32228
	ctx.r7.s64 = -2112094208;
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-23580(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_830148DC:
	// lfsx f12,r11,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// fmuls f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f9.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// blt cr6,0x830148dc
	if (ctx.cr6.lt) goto loc_830148DC;
loc_83014904:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301497c
	if (ctx.cr6.eq) goto loc_8301497C;
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// addi r28,r1,736
	ctx.r28.s64 = ctx.r1.s64 + 736;
loc_83014918:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r8,200(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lfs f2,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,228(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x83016960
	ctx.lr = 0x83014938;
	sub_83016960(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014980
	if (!ctx.cr6.eq) goto loc_83014980;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x83015de0
	ctx.lr = 0x83014958;
	sub_83015DE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014980
	if (!ctx.cr6.eq) goto loc_83014980;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r30,r30,108
	ctx.r30.s64 = ctx.r30.s64 + 108;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83014918
	if (ctx.cr6.lt) goto loc_83014918;
loc_8301497C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83014980:
	// addi r1,r1,1056
	ctx.r1.s64 = ctx.r1.s64 + 1056;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014988"))) PPC_WEAK_FUNC(sub_83014988);
PPC_FUNC_IMPL(__imp__sub_83014988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83014990;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,224(r3)
	PPC_STORE_U32(ctx.r3.u32 + 224, ctx.r6.u32);
	// addi r29,r3,228
	ctx.r29.s64 = ctx.r3.s64 + 228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r4,r6,4
	ctx.r4.s64 = ctx.r6.s64 + 4;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
	// li r5,188
	ctx.r5.s64 = 188;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x830149C4;
	sub_82FA77C0(ctx, base);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r10.u32);
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830149E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r7,r3,24
	ctx.r7.u64 = ctx.r3.u32 & 0xFF;
	// stb r3,209(r31)
	PPC_STORE_U8(ctx.r31.u32 + 209, ctx.r3.u8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83014a00
	if (ctx.cr6.eq) goto loc_83014A00;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,296(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 296, temp.u32);
loc_83014A00:
	// addi r3,r31,420
	ctx.r3.s64 = ctx.r31.s64 + 420;
	// li r5,80
	ctx.r5.s64 = 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x83014A10;
	sub_82FA77C0(ctx, base);
	// lbz r11,369(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 369);
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// lis r7,2
	ctx.r7.s64 = 131072;
	// subfe r6,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// li r29,0
	ctx.r29.s64 = 0;
	// and r5,r6,r10
	ctx.r5.u64 = ctx.r6.u64 & ctx.r10.u64;
	// stb r5,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r5.u8);
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r3,r4,0,0,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFC000;
	// cmplw cr6,r3,r7
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83014a44
	if (!ctx.cr6.eq) goto loc_83014A44;
	// stb r29,208(r31)
	PPC_STORE_U8(ctx.r31.u32 + 208, ctx.r29.u8);
loc_83014A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83011c58
	ctx.lr = 0x83014A4C;
	sub_83011C58(ctx, base);
	// bl 0x83012848
	ctx.lr = 0x83014A50;
	sub_83012848(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x830146c8
	ctx.lr = 0x83014A64;
	sub_830146C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012090
	ctx.lr = 0x83014A78;
	sub_83012090(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012170
	ctx.lr = 0x83014A8C;
	sub_83012170(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012288
	ctx.lr = 0x83014AA0;
	sub_83012288(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,18,14,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3FFFF;
	// bl 0x830121d8
	ctx.lr = 0x83014ABC;
	sub_830121D8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83012a50
	ctx.lr = 0x83014AD0;
	sub_83012A50(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83014ae0
	if (!ctx.cr6.eq) goto loc_83014AE0;
	// stb r29,210(r31)
	PPC_STORE_U8(ctx.r31.u32 + 210, ctx.r29.u8);
	// stw r29,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r29.u32);
loc_83014AE0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83014AE8"))) PPC_WEAK_FUNC(sub_83014AE8);
PPC_FUNC_IMPL(__imp__sub_83014AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83014AF0;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83014cd4
	if (!ctx.cr6.eq) goto loc_83014CD4;
	// lis r29,-32233
	ctx.r29.s64 = -2112421888;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r28,r29,24272
	ctx.r28.s64 = ctx.r29.s64 + 24272;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f30,22472(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// lfs f0,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f13,44(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,12(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,52(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,64(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	ctx.f7.f64 = double(temp.f32);
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f10,8(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f12,12(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f9,16(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f12,24(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f13,28(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f8,36(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f7,48(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// stfs f13,52(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 52, temp.u32);
	// lfd f31,22080(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014B88;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014B9C;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,60(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014BB0;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfd f29,24400(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24400);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014BCC;
	sub_82FA30A8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,68(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014BE0;
	sub_82FA30A8(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// stfs f10,72(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfd f2,24392(r8)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24392);
	// bl 0x82fa30a8
	ctx.lr = 0x83014BF8;
	sub_82FA30A8(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,76(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfd f2,24384(r7)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24384);
	// bl 0x82fa30a8
	ctx.lr = 0x83014C10;
	sub_82FA30A8(ctx, base);
	// lfs f0,24272(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24272);
	ctx.f0.f64 = double(temp.f32);
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f13,36(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r6,23
	ctx.r6.s64 = 23;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,20(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// frsp f8,f1
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// stfs f13,92(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// stw r6,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r6.u32);
	// lfs f13,28(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// stb r30,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r30.u8);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stw r5,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r5.u32);
	// stfs f12,96(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// stfs f13,104(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014C64;
	sub_82FA30A8(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,116(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83014C78;
	sub_82FA30A8(ctx, base);
	// lis r4,-31969
	ctx.r4.s64 = -2095120384;
	// li r11,3
	ctx.r11.s64 = 3;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// li r10,0
	ctx.r10.s64 = 0;
	// stfs f6,112(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// addi r3,r31,148
	ctx.r3.s64 = ctx.r31.s64 + 148;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r4,r4,-11316
	ctx.r4.s64 = ctx.r4.s64 + -11316;
	// stw r10,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r10.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// stw r9,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r9.u32);
	// stb r10,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r10.u8);
	// bl 0x82fa77c0
	ctx.lr = 0x83014CBC;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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
loc_83014CD4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83014CEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_83014D00"))) PPC_WEAK_FUNC(sub_83014D00);
PPC_FUNC_IMPL(__imp__sub_83014D00) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83014d30
	if (!ctx.cr6.eq) goto loc_83014D30;
	// li r3,31
	ctx.r3.s64 = 31;
	// b 0x830150a4
	goto loc_830150A4;
loc_83014D30:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r31,r4,8
	ctx.r31.s64 = ctx.r4.s64 + 8;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,12(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,16(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lwzu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,20(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,24(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,28(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,32(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lwzu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// stfs f6,36(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lwzu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,40(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// stfs f4,44(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 44, temp.u32);
	// lwzu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,48(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 48, temp.u32);
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,52(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lwzu r3,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lfd f31,22080(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lfs f30,-27108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27108);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014E2C;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,56(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f2,f12,f30
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014E4C;
	sub_82FA30A8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,60(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f2,f10,f30
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014E6C;
	sub_82FA30A8(ctx, base);
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// stfs f9,64(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lwzu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f2,f8,f30
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014E8C;
	sub_82FA30A8(ctx, base);
	// frsp f7,f1
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// stfs f7,68(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lwzu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f2,f6,f30
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014EAC;
	sub_82FA30A8(ctx, base);
	// frsp f5,f1
	ctx.fpscr.disableFlushMode();
	ctx.f5.f64 = double(float(ctx.f1.f64));
	// stfs f5,72(r30)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lwzu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f4,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f4,f30
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014ECC;
	sub_82FA30A8(ctx, base);
	// frsp f3,f1
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f1.f64));
	// stfs f3,76(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lfs f0,-16424(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -16424);
	ctx.f0.f64 = double(temp.f32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// fsubs f0,f2,f0
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f0.f64));
	// fmuls f2,f0,f30
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014EF8;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// stfs f13,80(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lbzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subfe r3,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stb r3,145(r30)
	PPC_STORE_U8(ctx.r30.u32 + 145, ctx.r3.u8);
	// lwzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r11.u32);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,88(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// lwzu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,92(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// lwzu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,96(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lwzu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,100(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,104(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// lwzu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r5,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r5.u32);
	// lbzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addic r4,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// subfe r3,r4,r11
	temp.u8 = (~ctx.r4.u32 + ctx.r11.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r4.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r3,144(r30)
	PPC_STORE_U8(ctx.r30.u32 + 144, ctx.r3.u8);
	// lwzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r10,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r10.u32);
	// lwzu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r9,128(r30)
	PPC_STORE_U32(ctx.r30.u32 + 128, ctx.r9.u32);
	// lwzu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r8,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r8.u32);
	// lwzu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r7,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r7.u32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r6,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r6.u32);
	// lwzu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f2,f7,f30
	ctx.f2.f64 = double(float(ctx.f7.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014FC8;
	sub_82FA30A8(ctx, base);
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// stfs f6,112(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f5,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f2,f5,f30
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f30.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83014FE8;
	sub_82FA30A8(ctx, base);
	// frsp f4,f1
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f1.f64));
	// stfs f4,116(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f3,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f3.f64 = double(temp.f32);
	// stfs f3,148(r30)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r30.u32 + 148, temp.u32);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f2,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f2.f64 = double(temp.f32);
	// stfs f2,152(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 152, temp.u32);
	// lwzu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f1,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// stfs f1,156(r30)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 156, temp.u32);
	// lwzu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 160, temp.u32);
	// lwzu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,164(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 164, temp.u32);
	// lwzu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,168(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 168, temp.u32);
	// lwzu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r5.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,172(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 172, temp.u32);
	// lwzu r4,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,176(r30)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r30.u32 + 176, temp.u32);
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f9,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f9.f64 = double(temp.f32);
	// stfs f9,180(r30)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r30.u32 + 180, temp.u32);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f8,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// stfs f8,184(r30)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r30.u32 + 184, temp.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lfs f7,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f7.f64 = double(temp.f32);
	// stfs f7,188(r30)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r30.u32 + 188, temp.u32);
loc_830150A4:
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

__attribute__((alias("__imp__sub_830150C4"))) PPC_WEAK_FUNC(sub_830150C4);
PPC_FUNC_IMPL(__imp__sub_830150C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830150C8"))) PPC_WEAK_FUNC(sub_830150C8);
PPC_FUNC_IMPL(__imp__sub_830150C8) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x830150fc
	if (!ctx.cr6.eq) goto loc_830150FC;
	// li r3,31
	ctx.r3.s64 = 31;
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
loc_830150FC:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmplwi cr6,r11,110
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 110, ctx.xer);
	// bgt cr6,0x83015630
	if (ctx.cr6.gt) goto loc_83015630;
	// lis r12,-31999
	ctx.r12.s64 = -2097086464;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20768
	ctx.r12.s64 = ctx.r12.s64 + 20768;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_830154B0;
	case 1:
		goto loc_830154BC;
	case 2:
		goto loc_830154C8;
	case 3:
		goto loc_830154D4;
	case 4:
		goto loc_8301549C;
	case 5:
		goto loc_83015630;
	case 6:
		goto loc_83015630;
	case 7:
		goto loc_83015630;
	case 8:
		goto loc_83015630;
	case 9:
		goto loc_83015630;
	case 10:
		goto loc_830152DC;
	case 11:
		goto loc_830152E8;
	case 12:
		goto loc_830154E0;
	case 13:
		goto loc_830154EC;
	case 14:
		goto loc_830154F8;
	case 15:
		goto loc_830152F4;
	case 16:
		goto loc_83015300;
	case 17:
		goto loc_83015630;
	case 18:
		goto loc_83015630;
	case 19:
		goto loc_83015630;
	case 20:
		goto loc_8301559C;
	case 21:
		goto loc_83015554;
	case 22:
		goto loc_83015560;
	case 23:
		goto loc_8301530C;
	case 24:
		goto loc_83015318;
	case 25:
		goto loc_83015324;
	case 26:
		goto loc_8301556C;
	case 27:
		goto loc_83015578;
	case 28:
		goto loc_83015330;
	case 29:
		goto loc_8301533C;
	case 30:
		goto loc_83015348;
	case 31:
		goto loc_83015584;
	case 32:
		goto loc_83015590;
	case 33:
		goto loc_83015354;
	case 34:
		goto loc_83015360;
	case 35:
		goto loc_8301536C;
	case 36:
		goto loc_83015630;
	case 37:
		goto loc_83015630;
	case 38:
		goto loc_83015630;
	case 39:
		goto loc_83015630;
	case 40:
		goto loc_83015504;
	case 41:
		goto loc_8301552C;
	case 42:
		goto loc_83015630;
	case 43:
		goto loc_83015630;
	case 44:
		goto loc_83015630;
	case 45:
		goto loc_83015630;
	case 46:
		goto loc_83015630;
	case 47:
		goto loc_83015630;
	case 48:
		goto loc_83015630;
	case 49:
		goto loc_83015630;
	case 50:
		goto loc_83015378;
	case 51:
		goto loc_830153A0;
	case 52:
		goto loc_830153C8;
	case 53:
		goto loc_830153F0;
	case 54:
		goto loc_83015630;
	case 55:
		goto loc_83015630;
	case 56:
		goto loc_83015630;
	case 57:
		goto loc_83015630;
	case 58:
		goto loc_83015630;
	case 59:
		goto loc_83015630;
	case 60:
		goto loc_83015418;
	case 61:
		goto loc_83015440;
	case 62:
		goto loc_83015468;
	case 63:
		goto loc_83015630;
	case 64:
		goto loc_83015630;
	case 65:
		goto loc_83015630;
	case 66:
		goto loc_83015630;
	case 67:
		goto loc_83015630;
	case 68:
		goto loc_83015630;
	case 69:
		goto loc_83015630;
	case 70:
		goto loc_83015630;
	case 71:
		goto loc_83015630;
	case 72:
		goto loc_83015630;
	case 73:
		goto loc_83015630;
	case 74:
		goto loc_83015630;
	case 75:
		goto loc_83015630;
	case 76:
		goto loc_83015630;
	case 77:
		goto loc_83015630;
	case 78:
		goto loc_83015630;
	case 79:
		goto loc_83015630;
	case 80:
		goto loc_83015630;
	case 81:
		goto loc_83015630;
	case 82:
		goto loc_83015630;
	case 83:
		goto loc_83015630;
	case 84:
		goto loc_83015630;
	case 85:
		goto loc_83015630;
	case 86:
		goto loc_83015630;
	case 87:
		goto loc_83015630;
	case 88:
		goto loc_83015630;
	case 89:
		goto loc_83015630;
	case 90:
		goto loc_83015630;
	case 91:
		goto loc_83015630;
	case 92:
		goto loc_83015630;
	case 93:
		goto loc_83015630;
	case 94:
		goto loc_83015630;
	case 95:
		goto loc_83015630;
	case 96:
		goto loc_83015630;
	case 97:
		goto loc_83015630;
	case 98:
		goto loc_83015630;
	case 99:
		goto loc_83015630;
	case 100:
		goto loc_830155B0;
	case 101:
		goto loc_830155BC;
	case 102:
		goto loc_830155C8;
	case 103:
		goto loc_830155D4;
	case 104:
		goto loc_830155E0;
	case 105:
		goto loc_830155EC;
	case 106:
		goto loc_830155F8;
	case 107:
		goto loc_83015604;
	case 108:
		goto loc_83015610;
	case 109:
		goto loc_8301561C;
	case 110:
		goto loc_83015628;
	default:
		__builtin_unreachable();
	}
	// lwz r24,21680(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21680);
	// lwz r24,21692(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21692);
	// lwz r24,21704(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21704);
	// lwz r24,21716(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21716);
	// lwz r24,21660(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21660);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,21212(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21212);
	// lwz r24,21224(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21224);
	// lwz r24,21728(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21728);
	// lwz r24,21740(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21740);
	// lwz r24,21752(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21752);
	// lwz r24,21236(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21236);
	// lwz r24,21248(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21248);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,21916(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21916);
	// lwz r24,21844(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21844);
	// lwz r24,21856(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21856);
	// lwz r24,21260(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21260);
	// lwz r24,21272(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21272);
	// lwz r24,21284(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21284);
	// lwz r24,21868(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21868);
	// lwz r24,21880(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21880);
	// lwz r24,21296(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21296);
	// lwz r24,21308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21308);
	// lwz r24,21320(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21320);
	// lwz r24,21892(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21892);
	// lwz r24,21904(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21904);
	// lwz r24,21332(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21332);
	// lwz r24,21344(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21344);
	// lwz r24,21356(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21356);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,21764(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21764);
	// lwz r24,21804(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21804);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,21368(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21368);
	// lwz r24,21408(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21408);
	// lwz r24,21448(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21448);
	// lwz r24,21488(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21488);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,21528(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21528);
	// lwz r24,21568(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21568);
	// lwz r24,21608(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21608);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,22064(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22064);
	// lwz r24,21936(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21936);
	// lwz r24,21948(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21948);
	// lwz r24,21960(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21960);
	// lwz r24,21972(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21972);
	// lwz r24,21984(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21984);
	// lwz r24,21996(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 21996);
	// lwz r24,22008(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22008);
	// lwz r24,22020(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22020);
	// lwz r24,22032(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22032);
	// lwz r24,22044(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22044);
	// lwz r24,22056(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 22056);
loc_830152DC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830152E8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830152F4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015300:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301530C:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015318:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015324:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015330:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301533C:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015348:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 40, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015354:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015360:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301536C:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 52, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015378:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83015394;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,56(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830153A0:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x830153BC;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,60(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830153C8:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x830153E4;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,64(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830153F0:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x8301540C;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,68(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015418:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83015434;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,72(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015440:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x8301545C;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,76(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015468:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-16424(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -16424);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f0,-27108(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmuls f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83015490;
	sub_82FA30A8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// stfs f11,80(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301549C:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,145(r31)
	PPC_STORE_U8(ctx.r31.u32 + 145, ctx.r9.u8);
	// b 0x83015630
	goto loc_83015630;
loc_830154B0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830154BC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830154C8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830154D4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 96, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830154E0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 100, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830154EC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830154F8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015504:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83015520;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,112(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301552C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22080);
	// fmuls f2,f13,f0
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83015548;
	sub_82FA30A8(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// stfs f12,116(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 116, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015554:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015560:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301556C:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015578:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015584:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015590:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301559C:
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r9,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r9,144(r31)
	PPC_STORE_U8(ctx.r31.u32 + 144, ctx.r9.u8);
	// b 0x83015630
	goto loc_83015630;
loc_830155B0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830155BC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830155C8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,156(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830155D4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830155E0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830155EC:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_830155F8:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,172(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015604:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015610:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_8301561C:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// b 0x83015630
	goto loc_83015630;
loc_83015628:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 188, temp.u32);
loc_83015630:
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

__attribute__((alias("__imp__sub_83015648"))) PPC_WEAK_FUNC(sub_83015648);
PPC_FUNC_IMPL(__imp__sub_83015648) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,192
	ctx.r4.s64 = 192;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x8301567C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830156ac
	if (ctx.cr6.eq) goto loc_830156AC;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r10,r11,24408
	ctx.r10.s64 = ctx.r11.s64 + 24408;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,188
	ctx.r5.s64 = 188;
	// bl 0x82fa77c0
	ctx.lr = 0x830156A4;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x830156b0
	goto loc_830156B0;
loc_830156AC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_830156B0:
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

__attribute__((alias("__imp__sub_830156C8"))) PPC_WEAK_FUNC(sub_830156C8);
PPC_FUNC_IMPL(__imp__sub_830156C8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,192
	ctx.r4.s64 = 192;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830156E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301570c
	if (ctx.cr6.eq) goto loc_8301570C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,24408
	ctx.r10.s64 = ctx.r11.s64 + 24408;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8301570C:
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

__attribute__((alias("__imp__sub_83015720"))) PPC_WEAK_FUNC(sub_83015720);
PPC_FUNC_IMPL(__imp__sub_83015720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d28
	ctx.lr = 0x83015734;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r5,32
	ctx.r11.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f2.f64;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// fmr f28,f3
	ctx.f28.f64 = ctx.f3.f64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// frsp f31,f13
	ctx.f31.f64 = double(float(ctx.f13.f64));
	// lfs f0,-7816(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7816);
	ctx.f0.f64 = double(temp.f32);
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x83015774
	if (ctx.cr6.lt) goto loc_83015774;
	// fmr f30,f0
	ctx.f30.f64 = ctx.f0.f64;
loc_83015774:
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x83015b20
	if (ctx.cr6.gt) goto loc_83015B20;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x830158d4
	if (ctx.cr6.eq) goto loc_830158D4;
	// bdz 0x83015a94
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_83015A94;
	// bdz 0x830159b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_830159B4;
	// bdz 0x83015b20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_83015B20;
	// bdz 0x830157a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_830157A0;
	// bdz 0x83015804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_83015804;
	// b 0x8301586c
	goto loc_8301586C;
loc_830157A0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24440);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// bl 0x82fa7118
	ctx.lr = 0x830157B4;
	sub_82FA7118(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,24432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,21496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21496);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f9,f10,f10
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fsubs f6,f9,f0
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// fadds f5,f7,f8
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fsubs f4,f7,f8
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fdivs f13,f0,f5
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f5.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f4,f13
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fneg f8,f3
	ctx.f8.u64 = ctx.f3.u64 ^ 0x8000000000000000;
	// b 0x83015b80
	goto loc_83015B80;
loc_83015804:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x8301581C;
	sub_82FA29B0(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x83015828;
	sub_82FA28D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lfs f0,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f28,f0
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f13,21496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21496);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f30,f13
	ctx.f8.f64 = double(float(ctx.f30.f64 * ctx.f13.f64));
	// lfs f12,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f11,f10
	ctx.f13.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// fneg f10,f13
	ctx.f10.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f9,f0,f13
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// b 0x83015b88
	goto loc_83015B88;
loc_8301586C:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x83015884;
	sub_82FA29B0(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x83015890;
	sub_82FA28D0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lfs f0,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f9,f28,f0
	ctx.f9.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f0,21496(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// fmr f10,f0
	ctx.f10.f64 = ctx.f0.f64;
	// fdivs f7,f11,f9
	ctx.f7.f64 = double(float(ctx.f11.f64 / ctx.f9.f64));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fadds f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fsubs f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// b 0x83015b88
	goto loc_83015B88;
loc_830158D4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-11008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x830158EC;
	sub_82FA30A8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lfs f0,21648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x83015908;
	sub_82FA28D0(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x83015914;
	sub_82FA29B0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// frsp f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsqrts f7,f29
	ctx.f7.f64 = double(float(sqrt(ctx.f29.f64)));
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f12,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21500(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,21496(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21496);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,11556(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11556);
	ctx.f11.f64 = double(temp.f32);
	// fdivs f6,f0,f29
	ctx.f6.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// fadds f5,f29,f0
	ctx.f5.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fsubs f4,f29,f0
	ctx.f4.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fadds f3,f6,f29
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f29.f64));
	// fmuls f2,f5,f9
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// fmuls f1,f4,f9
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fmadds f12,f3,f12,f13
	ctx.f12.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fsubs f9,f4,f2
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f2.f64));
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fsubs f6,f5,f1
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f1.f64));
	// fadds f3,f1,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f5.f64));
	// fsqrts f2,f12
	ctx.f2.f64 = double(float(sqrt(ctx.f12.f64)));
	// fmuls f12,f2,f30
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f30.f64));
	// fmuls f8,f4,f10
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f9,f9,f29
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fmuls f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// fmuls f12,f9,f13
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmuls f2,f4,f7
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// fmuls f13,f2,f13
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fadds f11,f6,f13
	ctx.f11.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fsubs f10,f6,f13
	ctx.f10.f64 = double(float(ctx.f6.f64 - ctx.f13.f64));
	// fadds f7,f1,f13
	ctx.f7.f64 = double(float(ctx.f1.f64 + ctx.f13.f64));
	// fsubs f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 - ctx.f13.f64));
	// fmuls f13,f11,f29
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f29.f64));
	// fmuls f10,f10,f29
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fadds f11,f7,f5
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// b 0x83015b88
	goto loc_83015B88;
loc_830159B4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-11008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x830159CC;
	sub_82FA30A8(ctx, base);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// lfs f0,21648(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x830159E8;
	sub_82FA28D0(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x830159F4;
	sub_82FA29B0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// frsp f6,f1
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = double(float(ctx.f1.f64));
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// fsqrts f9,f29
	ctx.f9.f64 = double(float(sqrt(ctx.f29.f64)));
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f12,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21500(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,11556(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 11556);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,21496(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 21496);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f8,f0,f29
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f29.f64));
	// fadds f7,f29,f0
	ctx.f7.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// fsubs f5,f29,f0
	ctx.f5.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fadds f4,f8,f29
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f29.f64));
	// fmuls f3,f7,f6
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// fmuls f2,f5,f6
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f6.f64));
	// fmadds f1,f4,f12,f13
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fadds f12,f3,f5
	ctx.f12.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f5,f5,f3
	ctx.f5.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fadds f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// fsubs f4,f7,f2
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fsqrts f3,f1
	ctx.f3.f64 = double(float(sqrt(ctx.f1.f64)));
	// fmuls f1,f3,f30
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f30.f64));
	// fmuls f12,f12,f29
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fmuls f8,f5,f13
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// fmuls f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// fmuls f10,f11,f9
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fadds f5,f2,f9
	ctx.f5.f64 = double(float(ctx.f2.f64 + ctx.f9.f64));
	// fsubs f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fadds f11,f4,f9
	ctx.f11.f64 = double(float(ctx.f4.f64 + ctx.f9.f64));
	// fsubs f9,f4,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// fadds f2,f5,f7
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fmuls f10,f3,f29
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f29.f64));
	// fmuls f13,f2,f29
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f29.f64));
	// b 0x83015b88
	goto loc_83015B88;
loc_83015A94:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,21648(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21648);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa29b0
	ctx.lr = 0x83015AAC;
	sub_82FA29B0(ctx, base);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-11008(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11008);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22080);
	// fmuls f2,f29,f0
	ctx.f2.f64 = double(float(ctx.f29.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x83015AC8;
	sub_82FA30A8(ctx, base);
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x83015AD4;
	sub_82FA28D0(ctx, base);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lfs f0,21500(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f28,f0
	ctx.f11.f64 = double(float(ctx.f28.f64 * ctx.f0.f64));
	// lfs f0,21496(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fmuls f9,f10,f29
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f29.f64));
	// fdivs f7,f10,f29
	ctx.f7.f64 = double(float(ctx.f10.f64 / ctx.f29.f64));
	// fadds f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fsubs f10,f0,f9
	ctx.f10.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
	// fadds f11,f7,f0
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fsubs f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 - ctx.f7.f64));
	// b 0x83015b88
	goto loc_83015B88;
loc_83015B20:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24440(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24440);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fdivs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// bl 0x82fa7118
	ctx.lr = 0x83015B34;
	sub_82FA7118(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,24436
	ctx.r11.s64 = ctx.r11.s64 + 24436;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f13,24432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24432);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,21500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21500);
	ctx.f12.f64 = double(temp.f32);
	// fdivs f9,f0,f10
	ctx.f9.f64 = double(float(ctx.f0.f64 / ctx.f10.f64));
	// fmuls f8,f9,f9
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f9.f64));
	// fmuls f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fadds f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f5,f0,f8
	ctx.f5.f64 = double(float(ctx.f0.f64 - ctx.f8.f64));
	// fadds f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fsubs f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fdivs f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 / ctx.f4.f64));
	// fmuls f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f9,f3,f13
	ctx.f9.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f8,f5,f12
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f12.f64));
loc_83015B80:
	// fmr f10,f13
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = ctx.f13.f64;
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_83015B88:
	// fdivs f0,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// fmuls f11,f0,f8
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f9,f0,f9
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f9.f64));
	// fmuls f8,f0,f13
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f8,0(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// fmuls f7,f0,f12
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f7,4(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// fmuls f6,f0,f10
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f6,8(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// fneg f5,f11
	ctx.f5.u64 = ctx.f11.u64 ^ 0x8000000000000000;
	// stfs f5,12(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// fneg f4,f9
	ctx.f4.u64 = ctx.f9.u64 ^ 0x8000000000000000;
	// stfs f4,16(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d74
	ctx.lr = 0x83015BC8;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015BD8"))) PPC_WEAK_FUNC(sub_83015BD8);
PPC_FUNC_IMPL(__imp__sub_83015BD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f0,20(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015BF4"))) PPC_WEAK_FUNC(sub_83015BF4);
PPC_FUNC_IMPL(__imp__sub_83015BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83015BF8"))) PPC_WEAK_FUNC(sub_83015BF8);
PPC_FUNC_IMPL(__imp__sub_83015BF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// stfd f31,-8(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.f31.u64);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83015db0
	if (!ctx.cr6.lt) goto loc_83015DB0;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x83015d3c
	if (ctx.cr6.lt) goto loc_83015D3C;
	// lfs f0,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
loc_83015C40:
	// lfs f8,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lfs f9,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f9.f64 = double(temp.f32);
	// fmr f5,f7
	ctx.f5.f64 = ctx.f7.f64;
	// stfs f9,24(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmuls f3,f9,f0
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// lfs f4,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f4.f64 = double(temp.f32);
	// lfs f1,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stfs f7,20(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// lfs f31,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f2,f13,f7,f6
	ctx.f2.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f6.f64));
	// lfs f6,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f6.f64 = double(temp.f32);
	// fmr f7,f1
	ctx.f7.f64 = ctx.f1.f64;
	// stfs f6,32(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f8,f13,f1,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f3.f64));
	// lfs f1,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// fmr f3,f6
	ctx.f3.f64 = ctx.f6.f64;
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f7,24(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f9,f12,f9,f2
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f9.f64 + ctx.f2.f64));
	// fmr f2,f5
	ctx.f2.f64 = ctx.f5.f64;
	// fmr f2,f7
	ctx.f2.f64 = ctx.f7.f64;
	// fmadds f9,f4,f11,f9
	ctx.f9.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f9.f64));
	// fmuls f4,f5,f0
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmadds f9,f10,f6,f9
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f9,0(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fmadds f6,f13,f1,f4
	ctx.f6.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f4.f64));
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// fmadds f1,f12,f5,f8
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f8.f64));
	// lfs f5,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f5.f64 = double(temp.f32);
	// stfs f5,24(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// fmadds f8,f12,f7,f6
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f7.f64 + ctx.f6.f64));
	// stfs f9,32(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f6,f3,f11,f1
	ctx.f6.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f1.f64));
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// fmuls f3,f2,f0
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmr f7,f9
	ctx.f7.f64 = ctx.f9.f64;
	// fmr f4,f9
	ctx.f4.f64 = ctx.f9.f64;
	// fmadds f2,f9,f11,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f1,f10,f9,f6
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f6.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmadds f8,f13,f31,f3
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f3.f64));
	// stfs f1,28(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f1,32(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f7,f10,f1,f2
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f1.f64 + ctx.f2.f64));
	// stfs f7,8(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fmadds f5,f12,f5,f8
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f5.f64 + ctx.f8.f64));
	// stfs f7,28(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfs f7,32(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmr f9,f1
	ctx.f9.f64 = ctx.f1.f64;
	// fmr f4,f1
	ctx.f4.f64 = ctx.f1.f64;
	// fmr f6,f7
	ctx.f6.f64 = ctx.f7.f64;
	// fmadds f3,f1,f11,f5
	ctx.f3.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f5.f64));
	// fmadds f2,f10,f7,f3
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f7.f64 + ctx.f3.f64));
	// stfs f2,12(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f2,28(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x83015c40
	if (ctx.cr6.lt) goto loc_83015C40;
loc_83015D3C:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83015db0
	if (!ctx.cr6.lt) goto loc_83015DB0;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f12,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// lfs f10,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83015D70:
	// lfs f9,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// stfs f6,24(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f7,20(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f4,32(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// fmadds f3,f13,f7,f8
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f7.f64 + ctx.f8.f64));
	// fmadds f2,f12,f6,f3
	ctx.f2.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmadds f1,f5,f11,f2
	ctx.f1.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f2.f64));
	// fmadds f9,f10,f4,f1
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f1.f64));
	// stfs f9,28(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// stfsu f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x83015d70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83015D70;
loc_83015DB0:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-14928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,28(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lfs f10,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f10.f64 = double(temp.f32);
	// fadds f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fsubs f8,f9,f0
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f8,32(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lfd f31,-8(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015DE0"))) PPC_WEAK_FUNC(sub_83015DE0);
PPC_FUNC_IMPL(__imp__sub_83015DE0) {
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
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bge cr6,0x83015e04
	if (!ctx.cr6.lt) goto loc_83015E04;
	// li r5,4
	ctx.r5.s64 = 4;
loc_83015E04:
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83015E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83015e40
	if (!ctx.cr6.eq) goto loc_83015E40;
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
loc_83015E40:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_83015E60"))) PPC_WEAK_FUNC(sub_83015E60);
PPC_FUNC_IMPL(__imp__sub_83015E60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x83015eb4
	if (!ctx.cr6.gt) goto loc_83015EB4;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
	// addi r11,r8,-4
	ctx.r11.s64 = ctx.r8.s64 + -4;
loc_83015E90:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfsu f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x83015e90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83015E90;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83015EB4:
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x83015f18
	if (ctx.cr6.eq) goto loc_83015F18;
	// addi r6,r4,-4
	ctx.r6.s64 = ctx.r4.s64 + -4;
loc_83015EC4:
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83015ed0
	if (!ctx.cr6.lt) goto loc_83015ED0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_83015ED0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83015ef4
	if (ctx.cr6.eq) goto loc_83015EF4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_83015EDC:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stfsu f0,4(r6)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// bdnz 0x83015edc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83015EDC;
loc_83015EF4:
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83015f08
	if (!ctx.cr6.eq) goto loc_83015F08;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_83015F08:
	// subf. r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// bne 0x83015ec4
	if (!ctx.cr0.eq) goto loc_83015EC4;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
loc_83015F18:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015F20"))) PPC_WEAK_FUNC(sub_83015F20);
PPC_FUNC_IMPL(__imp__sub_83015F20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x83015f78
	if (!ctx.cr6.gt) goto loc_83015F78;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// subf r8,r11,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r11.s64;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
loc_83015F50:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x83015f50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83015F50;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_83015F78:
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83015fe0
	if (ctx.cr6.eq) goto loc_83015FE0;
	// addi r5,r5,-4
	ctx.r5.s64 = ctx.r5.s64 + -4;
	// addi r6,r4,-4
	ctx.r6.s64 = ctx.r4.s64 + -4;
loc_83015F8C:
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83015f98
	if (!ctx.cr6.lt) goto loc_83015F98;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_83015F98:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x83015fbc
	if (ctx.cr6.eq) goto loc_83015FBC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83015FA4:
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfsu f0,4(r6)
	ea = 4 + ctx.r6.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stfsu f13,4(r5)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x83015fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83015FA4;
loc_83015FBC:
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x83015fd0
	if (!ctx.cr6.eq) goto loc_83015FD0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
loc_83015FD0:
	// subf. r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subf r10,r9,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r9.s64;
	// bne 0x83015f8c
	if (!ctx.cr0.eq) goto loc_83015F8C;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
loc_83015FE0:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83015FE8"))) PPC_WEAK_FUNC(sub_83015FE8);
PPC_FUNC_IMPL(__imp__sub_83015FE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x83015FF0;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fa8d28
	ctx.lr = 0x83015FF8;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830162cc
	if (ctx.cr6.eq) goto loc_830162CC;
	// cmplwi cr6,r8,64
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 64, ctx.xer);
	// bgt cr6,0x830162cc
	if (ctx.cr6.gt) goto loc_830162CC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x830162cc
	if (ctx.cr6.eq) goto loc_830162CC;
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bgt cr6,0x830162cc
	if (ctx.cr6.gt) goto loc_830162CC;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-14924(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14924);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,11528(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// fmuls f2,f1,f0
	ctx.f2.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmr f1,f13
	ctx.f1.f64 = ctx.f13.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83016054;
	sub_82FA30A8(ctx, base);
	// lfs f0,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r26,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 3) & 0xFFFFFFF8;
	// lfs f13,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r28,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// add r9,r11,r25
	ctx.r9.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// frsp f31,f1
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// clrldi r7,r30,32
	ctx.r7.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// lis r6,-32228
	ctx.r6.s64 = -2112094208;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lfs f10,-8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8);
	ctx.f10.f64 = double(temp.f32);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// lfs f8,-8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -8);
	ctx.f8.f64 = double(temp.f32);
	// fsel f7,f12,f0,f13
	ctx.f7.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// fsubs f6,f8,f10
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// lfs f28,-23580(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23580);
	ctx.f28.f64 = double(temp.f32);
	// frsp f30,f9
	ctx.f30.f64 = double(float(ctx.f9.f64));
	// fmuls f29,f7,f31
	ctx.f29.f64 = double(float(ctx.f7.f64 * ctx.f31.f64));
	// fsel f5,f6,f8,f10
	ctx.f5.f64 = ctx.f6.f64 >= 0.0 ? ctx.f8.f64 : ctx.f10.f64;
	// fmsubs f4,f5,f31,f29
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 - ctx.f29.f64));
	// fmuls f3,f4,f30
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f30.f64));
	// fmuls f2,f3,f28
	ctx.f2.f64 = double(float(ctx.f3.f64 * ctx.f28.f64));
	// fctidz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f1.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x830160d0
	if (!ctx.cr6.lt) goto loc_830160D0;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x830160d8
	goto loc_830160D8;
loc_830160D0:
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x830162cc
	if (ctx.cr6.gt) goto loc_830162CC;
loc_830160D8:
	// rlwinm r10,r11,0,16,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC;
	// rlwinm r4,r11,2,14,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFF0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x830160F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83016118
	if (!ctx.cr6.eq) goto loc_83016118;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fa8d74
	ctx.lr = 0x83016114;
	__restfpr_28(ctx, base);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_83016118:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r9,-1
	ctx.r9.s64 = -1;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// sth r4,780(r31)
	PPC_STORE_U16(ctx.r31.u32 + 780, ctx.r4.u16);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x830161e4
	if (ctx.cr6.eq) goto loc_830161E4;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_83016138:
	// rlwinm r10,r6,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r10,r27
	ctx.r8.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lfsx f0,r10,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f13,f0,f31,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x83016170
	if (ctx.cr6.lt) goto loc_83016170;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_83016170:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x830161cc
	if (ctx.cr6.eq) goto loc_830161CC;
	// clrlwi r9,r7,16
	ctx.r9.u64 = ctx.r7.u32 & 0xFFFF;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r9,262
	ctx.r3.s64 = ctx.r9.s64 + 262;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u16);
	// bne cr6,0x83016198
	if (!ctx.cr6.eq) goto loc_83016198;
	// sthx r4,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u16);
loc_83016198:
	// addi r3,r9,3
	ctx.r3.s64 = ctx.r9.s64 + 3;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, temp.u32);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x830161c4
	if (!ctx.cr6.gt) goto loc_830161C4;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// sth r7,780(r31)
	PPC_STORE_U16(ctx.r31.u32 + 780, ctx.r7.u16);
loc_830161C4:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
loc_830161CC:
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83016138
	if (ctx.cr6.lt) goto loc_83016138;
loc_830161E4:
	// sth r7,784(r31)
	PPC_STORE_U16(ctx.r31.u32 + 784, ctx.r7.u16);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// sth r4,782(r31)
	PPC_STORE_U16(ctx.r31.u32 + 782, ctx.r4.u16);
	// li r9,-1
	ctx.r9.s64 = -1;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x830162b0
	if (ctx.cr6.eq) goto loc_830162B0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
loc_83016204:
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// lfsx f0,r10,r25
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f13,f0,f31,f29
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f29.f64));
	// fmuls f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f30.f64));
	// fmuls f11,f12,f28
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f28.f64));
	// fctidz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8301623c
	if (ctx.cr6.lt) goto loc_8301623C;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
loc_8301623C:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x83016298
	if (ctx.cr6.eq) goto loc_83016298;
	// clrlwi r9,r6,16
	ctx.r9.u64 = ctx.r6.u32 & 0xFFFF;
	// subf r30,r10,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r3,r9,326
	ctx.r3.s64 = ctx.r9.s64 + 326;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r30,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u16);
	// bne cr6,0x83016264
	if (!ctx.cr6.eq) goto loc_83016264;
	// sthx r4,r11,r31
	PPC_STORE_U16(ctx.r11.u32 + ctx.r31.u32, ctx.r4.u16);
loc_83016264:
	// addi r3,r9,67
	ctx.r3.s64 = ctx.r9.s64 + 67;
	// lfs f0,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r8,r5,16
	ctx.r8.u64 = ctx.r5.u32 & 0xFFFF;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f0,r3,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, temp.u32);
	// lhzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r31.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x83016290
	if (!ctx.cr6.gt) goto loc_83016290;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// sth r6,782(r31)
	PPC_STORE_U16(ctx.r31.u32 + 782, ctx.r6.u16);
loc_83016290:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// clrlwi r6,r11,16
	ctx.r6.u64 = ctx.r11.u32 & 0xFFFF;
loc_83016298:
	// addi r11,r7,1
	ctx.r11.s64 = ctx.r7.s64 + 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x83016204
	if (ctx.cr6.lt) goto loc_83016204;
loc_830162B0:
	// sth r6,786(r31)
	PPC_STORE_U16(ctx.r31.u32 + 786, ctx.r6.u16);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fa8d74
	ctx.lr = 0x830162C8;
	__restfpr_28(ctx, base);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_830162CC:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fa8d74
	ctx.lr = 0x830162DC;
	__restfpr_28(ctx, base);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830162E0"))) PPC_WEAK_FUNC(sub_830162E0);
PPC_FUNC_IMPL(__imp__sub_830162E0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016300"))) PPC_WEAK_FUNC(sub_83016300);
PPC_FUNC_IMPL(__imp__sub_83016300) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83016304"))) PPC_WEAK_FUNC(sub_83016304);
PPC_FUNC_IMPL(__imp__sub_83016304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016308"))) PPC_WEAK_FUNC(sub_83016308);
PPC_FUNC_IMPL(__imp__sub_83016308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x83016310;
	__savegprlr_14(ctx, base);
	// lhz r11,786(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 786);
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// lhz r10,784(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8301633c
	if (!ctx.cr6.lt) goto loc_8301633C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_8301633C:
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r7,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r7.u32);
	// rlwinm r19,r11,0,16,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFC;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r21,-8
	ctx.r21.s64 = -8;
	// li r22,248
	ctx.r22.s64 = 248;
	// li r23,-4
	ctx.r23.s64 = -4;
	// li r24,252
	ctx.r24.s64 = 252;
	// li r25,256
	ctx.r25.s64 = 256;
	// li r26,4
	ctx.r26.s64 = 4;
	// li r27,260
	ctx.r27.s64 = 260;
loc_83016368:
	// lhz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 780);
	// lhz r10,782(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 782);
	// addi r11,r11,262
	ctx.r11.s64 = ctx.r11.s64 + 262;
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r10,326
	ctx.r10.s64 = ctx.r10.s64 + 326;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lhzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// lhzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r3.u32);
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x830163a8
	if (ctx.cr6.lt) goto loc_830163A8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_830163A8:
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830163b4
	if (!ctx.cr6.lt) goto loc_830163B4;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_830163B4:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// blt cr6,0x830163c4
	if (ctx.cr6.lt) goto loc_830163C4;
	// mr r16,r11
	ctx.r16.u64 = ctx.r11.u64;
loc_830163C4:
	// cmplwi cr6,r16,4
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 4, ctx.xer);
	// blt cr6,0x83016634
	if (ctx.cr6.lt) goto loc_83016634;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// rlwinm r20,r16,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 30) & 0x3FFFFFFF;
loc_830163D4:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lvx128 v62,r0,r18
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// addi r18,r18,16
	ctx.r18.s64 = ctx.r18.s64 + 16;
	// vor128 v13,v63,v63
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v0,v63,v63
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stvx128 v62,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x83016554
	if (ctx.cr6.eq) goto loc_83016554;
	// addi r10,r19,-1
	ctx.r10.s64 = ctx.r19.s64 + -1;
	// addi r11,r3,650
	ctx.r11.s64 = ctx.r3.s64 + 650;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_83016420:
	// lhz r8,-126(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -126);
	// lvlx128 v61,r10,r21
	temp.u32 = ctx.r10.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lvlx128 v60,r10,r22
	temp.u32 = ctx.r10.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// vspltw128 v11,v61,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// vspltw128 v9,v60,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0xFF));
	// lhz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lvlx128 v59,r10,r23
	temp.u32 = ctx.r10.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lhz r7,-124(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -124);
	// lvlx128 v58,r10,r24
	temp.u32 = ctx.r10.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lhz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// vspltw128 v5,v59,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), 0xFF));
	// lvx128 v12,r5,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// rotlwi r31,r7,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lvx128 v10,r4,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v12,v11,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v10,v9,v0
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// sth r30,-176(r1)
	PPC_STORE_U16(ctx.r1.u32 + -176, ctx.r30.u16);
	// rotlwi r5,r29,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r29.u32, 2);
	// vspltw128 v0,v58,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lhz r15,6(r11)
	ctx.r15.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lvlx128 v57,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v6,r31,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lhz r4,-122(r11)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r11.u32 + -122);
	// lvlx128 v56,r10,r25
	temp.u32 = ctx.r10.u32 + ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rotlwi r31,r15,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r15.u32, 2);
	// vspltw128 v8,v57,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xFF));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lvx128 v13,r5,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// rotlwi r5,r4,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r4.u32, 2);
	// vspltw128 v10,v56,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// lhz r14,-120(r11)
	ctx.r14.u64 = PPC_LOAD_U16(ctx.r11.u32 + -120);
	// lvlx128 v55,r10,r26
	temp.u32 = ctx.r10.u32 + ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lvx128 v9,r31,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r31,r14,4
	ctx.r31.s64 = ctx.r14.s64 + 4;
	// lvlx128 v54,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// vmaddfp v5,v6,v5,v12
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v7,r5,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v6,v13,v0,v11
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// addi r5,r8,4
	ctx.r5.s64 = ctx.r8.s64 + 4;
	// addi r8,r7,4
	ctx.r8.s64 = ctx.r7.s64 + 4;
	// vspltw128 v13,v55,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xFF));
	// vspltw128 v0,v54,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// rotlwi r15,r14,2
	ctx.r15.u64 = __builtin_rotateleft32(ctx.r14.u32, 2);
	// sth r4,-122(r11)
	PPC_STORE_U16(ctx.r11.u32 + -122, ctx.r4.u16);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// sth r31,-120(r11)
	PPC_STORE_U16(ctx.r11.u32 + -120, ctx.r31.u16);
	// sth r30,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r30.u16);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// sth r29,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r29.u16);
	// lhz r6,-176(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + -176);
	// lvx128 v11,r15,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r15.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// sth r8,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r8.u16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// vmaddfp v8,v7,v8,v5
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v5.f32)));
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// vmaddfp v10,v9,v10,v6
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v6.f32)));
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// lvx128 v12,r6,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// sth r6,-126(r11)
	PPC_STORE_U16(ctx.r11.u32 + -126, ctx.r6.u16);
	// sth r5,-124(r11)
	PPC_STORE_U16(ctx.r11.u32 + -124, ctx.r5.u16);
	// sthu r7,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r11.u32 = ea;
	// vmaddfp v13,v11,v13,v8
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// bdnz 0x83016420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83016420;
	// lwz r4,-172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r5,36(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// lwz r6,44(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
loc_83016554:
	// lhz r11,784(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x830165b4
	if (!ctx.cr6.lt) goto loc_830165B4;
	// addi r11,r28,261
	ctx.r11.s64 = ctx.r28.s64 + 261;
	// addi r10,r28,3
	ctx.r10.s64 = ctx.r28.s64 + 3;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_8301657C:
	// lhz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lvlx128 v53,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// vspltw128 v12,v53,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), 0xFF));
	// rotlwi r31,r31,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// lhz r7,784(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// lvx128 v11,r31,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v11,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// blt cr6,0x8301657c
	if (ctx.cr6.lt) goto loc_8301657C;
loc_830165B4:
	// lhz r11,786(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 786);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83016614
	if (!ctx.cr6.lt) goto loc_83016614;
	// addi r11,r28,325
	ctx.r11.s64 = ctx.r28.s64 + 325;
	// addi r10,r28,67
	ctx.r10.s64 = ctx.r28.s64 + 67;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r3
	ctx.r10.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r11,r7,r3
	ctx.r11.u64 = ctx.r7.u64 + ctx.r3.u64;
loc_830165DC:
	// lhz r31,2(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// lvlx128 v52,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// vspltw128 v12,v52,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xFF));
	// rotlwi r31,r31,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r31.u32, 2);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// sthu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r10.u32 = ea;
	// lhz r7,786(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 786);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// lvx128 v11,r31,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v11,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// blt cr6,0x830165dc
	if (ctx.cr6.lt) goto loc_830165DC;
loc_83016614:
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// bne 0x830163d4
	if (!ctx.cr0.eq) goto loc_830163D4;
loc_83016634:
	// lhz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 780);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,262
	ctx.r8.s64 = ctx.r11.s64 + 262;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x83016688
	if (!ctx.cr6.eq) goto loc_83016688;
	// sthx r17,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r17.u16);
	// lhz r10,784(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 784);
	// lhz r11,780(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 780);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divw r8,r7,r10
	ctx.r8.s32 = ctx.r7.s32 / ctx.r10.s32;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// andc r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// sth r8,780(r3)
	PPC_STORE_U16(ctx.r3.u32 + 780, ctx.r8.u16);
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
loc_83016688:
	// lhz r11,782(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 782);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,326
	ctx.r8.s64 = ctx.r11.s64 + 326;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r7,r11,r3
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830166dc
	if (!ctx.cr6.eq) goto loc_830166DC;
	// sthx r17,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r17.u16);
	// lhz r11,782(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 782);
	// lhz r10,786(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 786);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// clrlwi r7,r8,16
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFF;
	// divw r8,r7,r10
	ctx.r8.s32 = ctx.r7.s32 / ctx.r10.s32;
	// rotlwi r11,r7,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// andc r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// sth r8,782(r3)
	PPC_STORE_U16(ctx.r3.u32 + 782, ctx.r8.u16);
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
loc_830166DC:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x830166f0
	if (!ctx.cr6.eq) goto loc_830166F0;
	// stw r17,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r17.u32);
loc_830166F0:
	// subf. r4,r16,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r16.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r4.u32);
	// bne 0x83016368
	if (!ctx.cr0.eq) goto loc_83016368;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016700"))) PPC_WEAK_FUNC(sub_83016700);
PPC_FUNC_IMPL(__imp__sub_83016700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d28
	ctx.lr = 0x83016714;
	__savefpr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// fmr f29,f2
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f2.f64;
	// clrldi r10,r7,32
	ctx.r10.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-14936(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -14936);
	// fmul f9,f1,f11
	ctx.f9.f64 = ctx.f1.f64 * ctx.f11.f64;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfd f31,22080(r8)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22080);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fdiv f2,f10,f9
	ctx.f2.f64 = ctx.f10.f64 / ctx.f9.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x83016764;
	sub_82FA30A8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x82fa4060
	ctx.lr = 0x8301676C;
	sub_82FA4060(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa3ed0
	ctx.lr = 0x83016778;
	sub_82FA3ED0(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmul f8,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f28.f64 * ctx.f1.f64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32240
	ctx.r5.s64 = -2112880640;
	// lfd f12,22528(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22528);
	// fnmsub f7,f29,f29,f12
	ctx.f7.f64 = -(ctx.f29.f64 * ctx.f29.f64 - ctx.f12.f64);
	// lfd f0,-808(r6)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + -808);
	// lfd f13,-3592(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + -3592);
	// fmul f6,f8,f7
	ctx.f6.f64 = ctx.f8.f64 * ctx.f7.f64;
	// fmul f0,f6,f0
	ctx.f0.f64 = ctx.f6.f64 * ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x830167ac
	if (!ctx.cr6.gt) goto loc_830167AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_830167AC:
	// fsub f13,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fneg f12,f0
	ctx.f12.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fmul f11,f13,f30
	ctx.f11.f64 = ctx.f13.f64 * ctx.f30.f64;
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// stfs f10,8(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// stfs f9,4(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d74
	ctx.lr = 0x830167D4;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830167E4"))) PPC_WEAK_FUNC(sub_830167E4);
PPC_FUNC_IMPL(__imp__sub_830167E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830167E8"))) PPC_WEAK_FUNC(sub_830167E8);
PPC_FUNC_IMPL(__imp__sub_830167E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d28
	ctx.lr = 0x830167F8;
	__savefpr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrldi r11,r6,32
	ctx.r11.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f11,f0
	ctx.f11.f64 = double(ctx.f0.s64);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f0,-14936(r9)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r9.u32 + -14936);
	// fmul f9,f1,f11
	ctx.f9.f64 = ctx.f1.f64 * ctx.f11.f64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// lfd f31,22528(r8)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22528);
	// lfd f30,22080(r7)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22080);
	// fnmsub f29,f2,f2,f31
	ctx.f29.f64 = -(ctx.f2.f64 * ctx.f2.f64 - ctx.f31.f64);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmul f10,f12,f0
	ctx.f10.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fdiv f2,f10,f9
	ctx.f2.f64 = ctx.f10.f64 / ctx.f9.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x8301684C;
	sub_82FA30A8(ctx, base);
	// bl 0x82fa4060
	ctx.lr = 0x83016850;
	sub_82FA4060(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fa3ed0
	ctx.lr = 0x8301685C;
	sub_82FA3ED0(ctx, base);
	// fmul f8,f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f28.f64 * ctx.f1.f64;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lfd f0,-808(r6)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + -808);
	// fmul f0,f8,f0
	ctx.f0.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fmul f7,f0,f29
	ctx.f7.f64 = ctx.f0.f64 * ctx.f29.f64;
	// fcmpu cr6,f7,f31
	ctx.cr6.compare(ctx.f7.f64, ctx.f31.f64);
	// ble cr6,0x83016888
	if (!ctx.cr6.gt) goto loc_83016888;
	// fdiv f0,f31,f0
	ctx.f0.f64 = ctx.f31.f64 / ctx.f0.f64;
	// fsub f13,f31,f0
	ctx.f13.f64 = ctx.f31.f64 - ctx.f0.f64;
	// fsqrts f1,f13
	ctx.f1.f64 = double(float(sqrt(ctx.f13.f64)));
	// b 0x83016890
	goto loc_83016890;
loc_83016888:
	// fsub f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f31.f64 - ctx.f29.f64;
	// fsqrts f1,f0
	ctx.f1.f64 = double(float(sqrt(ctx.f0.f64)));
loc_83016890:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d74
	ctx.lr = 0x8301689C;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830168A8"))) PPC_WEAK_FUNC(sub_830168A8);
PPC_FUNC_IMPL(__imp__sub_830168A8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// bl 0x830167e8
	ctx.lr = 0x830168D8;
	sub_830167E8(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x83016700
	ctx.lr = 0x830168F4;
	sub_83016700(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x8301690C;
	sub_83016700(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x83016924;
	sub_83016700(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x8301693C;
	sub_83016700(ctx, base);
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

__attribute__((alias("__imp__sub_8301695C"))) PPC_WEAK_FUNC(sub_8301695C);
PPC_FUNC_IMPL(__imp__sub_8301695C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016960"))) PPC_WEAK_FUNC(sub_83016960);
PPC_FUNC_IMPL(__imp__sub_83016960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83016968;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x830167e8
	ctx.lr = 0x83016994;
	sub_830167E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// bl 0x83015de0
	ctx.lr = 0x830169A8;
	sub_83015DE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83016a5c
	if (!ctx.cr6.eq) goto loc_83016A5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x83015de0
	ctx.lr = 0x830169C0;
	sub_83015DE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83016a5c
	if (!ctx.cr6.eq) goto loc_83016A5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r30,24
	ctx.r3.s64 = ctx.r30.s64 + 24;
	// bl 0x83015de0
	ctx.lr = 0x830169D8;
	sub_83015DE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83016a5c
	if (!ctx.cr6.eq) goto loc_83016A5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r3,r30,36
	ctx.r3.s64 = ctx.r30.s64 + 36;
	// bl 0x83015de0
	ctx.lr = 0x830169F0;
	sub_83015DE0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83016a5c
	if (!ctx.cr6.eq) goto loc_83016A5C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x83016A10;
	sub_83016700(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x83016A28;
	sub_83016700(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x83016A40;
	sub_83016700(ctx, base);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x83016700
	ctx.lr = 0x83016A58;
	sub_83016700(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83016A5C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016A6C"))) PPC_WEAK_FUNC(sub_83016A6C);
PPC_FUNC_IMPL(__imp__sub_83016A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016A70"))) PPC_WEAK_FUNC(sub_83016A70);
PPC_FUNC_IMPL(__imp__sub_83016A70) {
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
	// bl 0x830171d0
	ctx.lr = 0x83016A90;
	sub_830171D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x830171d0
	ctx.lr = 0x83016A9C;
	sub_830171D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x830171d0
	ctx.lr = 0x83016AA8;
	sub_830171D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x830171d0
	ctx.lr = 0x83016AB4;
	sub_830171D0(ctx, base);
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

__attribute__((alias("__imp__sub_83016ACC"))) PPC_WEAK_FUNC(sub_83016ACC);
PPC_FUNC_IMPL(__imp__sub_83016ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016AD0"))) PPC_WEAK_FUNC(sub_83016AD0);
PPC_FUNC_IMPL(__imp__sub_83016AD0) {
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
	// bl 0x830162e0
	ctx.lr = 0x83016AE8;
	sub_830162E0(ctx, base);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x830162e0
	ctx.lr = 0x83016AF0;
	sub_830162E0(ctx, base);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x830162e0
	ctx.lr = 0x83016AF8;
	sub_830162E0(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x830162e0
	ctx.lr = 0x83016B00;
	sub_830162E0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,48(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f0,60(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 60, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,84(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 84, temp.u32);
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

__attribute__((alias("__imp__sub_83016B2C"))) PPC_WEAK_FUNC(sub_83016B2C);
PPC_FUNC_IMPL(__imp__sub_83016B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016B30"))) PPC_WEAK_FUNC(sub_83016B30);
PPC_FUNC_IMPL(__imp__sub_83016B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x83016B38;
	__savegprlr_20(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f10,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f10.f64 = double(temp.f32);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f11,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f13,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f12,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// addi r30,r3,60
	ctx.r30.s64 = ctx.r3.s64 + 60;
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
	// addi r28,r3,84
	ctx.r28.s64 = ctx.r3.s64 + 84;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x83016ccc
	if (ctx.cr6.eq) goto loc_83016CCC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r27,r3,12
	ctx.r27.s64 = ctx.r3.s64 + 12;
	// addi r26,r3,24
	ctx.r26.s64 = ctx.r3.s64 + 24;
	// addi r25,r3,36
	ctx.r25.s64 = ctx.r3.s64 + 36;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
	// lfs f9,21492(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21492);
	ctx.f9.f64 = double(temp.f32);
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_83016B90:
	// lfs f0,8(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lwz r6,28(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// fmuls f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// rlwinm r24,r9,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f4,f7,f12
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// lwz r21,40(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r20,r8,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f8,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lwz r23,16(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f5,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// lfs f8,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// rlwinm r22,r10,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f3,r24,r6
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r6.u32);
	ctx.f3.f64 = double(temp.f32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f2,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f2.f64 = double(temp.f32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// lfsu f0,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmsubs f13,f5,f3,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f3.f64 - ctx.f13.f64));
	// lfsx f5,r21,r20
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r20.u32);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f12,f5,f8,f4
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 - ctx.f4.f64));
	// lfsx f7,r22,r23
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r23.u32);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f2,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f2.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f3,4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// fmsubs f11,f1,f7,f6
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f7.f64 - ctx.f6.f64));
	// lfs f1,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fmsubs f10,f3,f2,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 - ctx.f10.f64));
	// fadds f8,f12,f13
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fsubs f7,f10,f11
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// fadds f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fadds f5,f7,f13
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f13.f64));
	// fadds f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// fsubs f3,f5,f12
	ctx.f3.f64 = double(float(ctx.f5.f64 - ctx.f12.f64));
	// fmuls f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// fadds f1,f3,f1
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfsu f1,4(r7)
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// fadds f8,f11,f2
	ctx.f8.f64 = double(float(ctx.f11.f64 + ctx.f2.f64));
	// fadds f7,f13,f2
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f6,f12,f2
	ctx.f6.f64 = double(float(ctx.f12.f64 + ctx.f2.f64));
	// fadds f5,f10,f2
	ctx.f5.f64 = double(float(ctx.f10.f64 + ctx.f2.f64));
	// fadds f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// stfsx f4,r5,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// lwz r6,4(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// stfsx f3,r6,r22
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r22.u32, temp.u32);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// fadds f2,f6,f0
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// lwz r23,0(r27)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
	// subf r23,r10,r23
	ctx.r23.s64 = ctx.r23.s64 - ctx.r10.s64;
	// fadds f1,f5,f0
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// stfsx f2,r6,r24
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r24.u32, temp.u32);
	// lwz r24,4(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfsx f1,r20,r24
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r24.u32, temp.u32);
	// subfic r23,r23,0
	ctx.xer.ca = ctx.r23.u32 <= 0;
	ctx.r23.s64 = 0 - ctx.r23.s64;
	// and r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 & ctx.r11.u64;
	// subfe r24,r23,r23
	temp.u8 = (~ctx.r23.u32 + ctx.r23.u32 < ~ctx.r23.u32) | (~ctx.r23.u32 + ctx.r23.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r24.u64 = ~ctx.r23.u64 + ctx.r23.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r23,0(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// and r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 & ctx.r10.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subf r6,r8,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r8.s64;
	// and r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 & ctx.r9.u64;
	// subfic r5,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r6.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	// bdnz 0x83016b90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83016B90;
loc_83016CCC:
	// lis r7,-32232
	ctx.r7.s64 = -2112356352;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r10.u32);
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lfs f0,-14928(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -14928);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fadds f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f8,f12,f0
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fadds f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f0.f64));
	// fsubs f6,f11,f0
	ctx.f6.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f6,0(r30)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// fsubs f5,f9,f0
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f0.f64));
	// stfs f5,0(r29)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fsubs f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f0.f64));
	// stfs f4,0(r28)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fsubs f3,f7,f0
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f3,0(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016D18"))) PPC_WEAK_FUNC(sub_83016D18);
PPC_FUNC_IMPL(__imp__sub_83016D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x83016D20;
	__savegprlr_18(ctx, base);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f11,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lwz r8,20(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r30,44(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r29,r3,48
	ctx.r29.s64 = ctx.r3.s64 + 48;
	// addi r28,r3,60
	ctx.r28.s64 = ctx.r3.s64 + 60;
	// addi r27,r3,72
	ctx.r27.s64 = ctx.r3.s64 + 72;
	// addi r26,r3,84
	ctx.r26.s64 = ctx.r3.s64 + 84;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x83016ed0
	if (ctx.cr6.eq) goto loc_83016ED0;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// addi r25,r3,12
	ctx.r25.s64 = ctx.r3.s64 + 12;
	// addi r24,r3,24
	ctx.r24.s64 = ctx.r3.s64 + 24;
	// addi r23,r3,36
	ctx.r23.s64 = ctx.r3.s64 + 36;
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// lfs f9,21492(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 21492);
	ctx.f9.f64 = double(temp.f32);
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_83016D7C:
	// lfs f10,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r7,28(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f7,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f12
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// rlwinm r22,r31,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// lwz r21,16(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r20,r8,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r19,40(r3)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r18,r30,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r22,r7
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r7.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfs f13,4(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsx f6,r20,r21
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r21.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// fmsubs f0,f2,f4,f8
	ctx.f0.f64 = double(float(ctx.f2.f64 * ctx.f4.f64 - ctx.f8.f64));
	// lfs f7,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f4,r19,r18
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r18.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f12,f13,f6,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f5.f64));
	// fmsubs f13,f7,f4,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f3.f64));
	// lfsx f1,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r31,1
	ctx.r7.s64 = ctx.r31.s64 + 1;
	// lfs f8,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsu f10,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	ctx.f10.f64 = double(temp.f32);
	// fmsubs f11,f2,f1,f11
	ctx.f11.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 - ctx.f11.f64));
	// fadds f6,f13,f0
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f5,f11,f12
	ctx.f5.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f4,f12,f11
	ctx.f4.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f3,f6,f12
	ctx.f3.f64 = double(float(ctx.f6.f64 + ctx.f12.f64));
	// fadds f2,f5,f0
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f0.f64));
	// fsubs f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fadds f6,f3,f11
	ctx.f6.f64 = double(float(ctx.f3.f64 + ctx.f11.f64));
	// fsubs f5,f2,f13
	ctx.f5.f64 = double(float(ctx.f2.f64 - ctx.f13.f64));
	// fsubs f4,f1,f13
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fmuls f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f9.f64));
	// fadds f2,f5,f8
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// stfsu f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfsu f1,4(r10)
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f8,f12,f3
	ctx.f8.f64 = double(float(ctx.f12.f64 + ctx.f3.f64));
	// fadds f7,f0,f3
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fadds f6,f13,f3
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f5,f11,f3
	ctx.f5.f64 = double(float(ctx.f11.f64 + ctx.f3.f64));
	// fadds f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfsx f4,r5,r6
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// fadds f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// lwz r5,4(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stfsx f3,r20,r5
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r20.u32 + ctx.r5.u32, temp.u32);
	// lwz r5,4(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r31,r8,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// fadds f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// stfsx f2,r5,r22
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r22.u32, temp.u32);
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// subfe r6,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// fadds f1,f5,f10
	ctx.f1.f64 = double(float(ctx.f5.f64 + ctx.f10.f64));
	// subfic r31,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r31.s64 = 0 - ctx.r31.s64;
	// subf r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	// subfe r31,r31,r31
	temp.u8 = (~ctx.r31.u32 + ctx.r31.u32 < ~ctx.r31.u32) | (~ctx.r31.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r31.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// and r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 & ctx.r9.u64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// lwz r30,4(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// and r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 & ctx.r8.u64;
	// stfsx f1,r30,r18
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r18.u32, temp.u32);
	// and r31,r5,r7
	ctx.r31.u64 = ctx.r5.u64 & ctx.r7.u64;
	// lwz r7,0(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// subfic r7,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r5.s64;
	// subfe r7,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r7,r6
	ctx.r30.u64 = ctx.r7.u64 & ctx.r6.u64;
	// bdnz 0x83016d7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83016D7C;
loc_83016ED0:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// lfs f10,-14928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f12,-14928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f6,0(r28)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f5,0(r27)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f4,0(r26)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f3,0(r29)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83016F24"))) PPC_WEAK_FUNC(sub_83016F24);
PPC_FUNC_IMPL(__imp__sub_83016F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83016F28"))) PPC_WEAK_FUNC(sub_83016F28);
PPC_FUNC_IMPL(__imp__sub_83016F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x83016F30;
	__savegprlr_17(ctx, base);
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f11,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f11.f64 = double(temp.f32);
	// lwz r30,20(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lfs f12,60(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	ctx.f12.f64 = double(temp.f32);
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,44(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lfs f13,84(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// addi r27,r3,48
	ctx.r27.s64 = ctx.r3.s64 + 48;
	// addi r26,r3,60
	ctx.r26.s64 = ctx.r3.s64 + 60;
	// addi r25,r3,72
	ctx.r25.s64 = ctx.r3.s64 + 72;
	// addi r24,r3,84
	ctx.r24.s64 = ctx.r3.s64 + 84;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x830170f8
	if (ctx.cr6.eq) goto loc_830170F8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r23,r3,12
	ctx.r23.s64 = ctx.r3.s64 + 12;
	// addi r22,r3,24
	ctx.r22.s64 = ctx.r3.s64 + 24;
	// addi r21,r3,36
	ctx.r21.s64 = ctx.r3.s64 + 36;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
	// lfs f9,21492(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21492);
	ctx.f9.f64 = double(temp.f32);
	// addi r10,r6,-4
	ctx.r10.s64 = ctx.r6.s64 + -4;
	// addi r11,r5,-4
	ctx.r11.s64 = ctx.r5.s64 + -4;
	// addi r4,r4,-4
	ctx.r4.s64 = ctx.r4.s64 + -4;
loc_83016F90:
	// lfs f10,8(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f7,8(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f8,f10,f0
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// lfs f6,8(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f12,f7
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// rlwinm r20,r29,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r19,r30,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r18,40(r3)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// rlwinm r17,r28,2,0,29
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f4,4(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f1,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// rlwinm r5,r31,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f2,r20,r8
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r8.u32);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f11,f1,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f11.f64));
	// lfsx f6,r19,r7
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r7.u32);
	ctx.f6.f64 = double(temp.f32);
	// addi r8,r31,1
	ctx.r8.s64 = ctx.r31.s64 + 1;
	// lfs f13,4(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r7,r30,1
	ctx.r7.s64 = ctx.r30.s64 + 1;
	// fmsubs f0,f4,f2,f8
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f2.f64 - ctx.f8.f64));
	// lfs f7,4(r24)
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfsx f4,r18,r17
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r17.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmsubs f12,f13,f6,f5
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f6.f64 - ctx.f5.f64));
	// fmsubs f13,f7,f4,f3
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f4.f64 - ctx.f3.f64));
	// lfsx f1,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f8,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// lfs f6,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// lfs f7,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// fmsubs f11,f1,f2,f11
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 - ctx.f11.f64));
	// lfsu f10,4(r4)
	ea = 4 + ctx.r4.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	ctx.f10.f64 = double(temp.f32);
	// fadds f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f4,f11,f12
	ctx.f4.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fadds f3,f12,f11
	ctx.f3.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f2,f5,f12
	ctx.f2.f64 = double(float(ctx.f5.f64 + ctx.f12.f64));
	// fadds f1,f4,f0
	ctx.f1.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fsubs f5,f3,f0
	ctx.f5.f64 = double(float(ctx.f3.f64 - ctx.f0.f64));
	// fsubs f4,f4,f0
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// fadds f3,f2,f11
	ctx.f3.f64 = double(float(ctx.f2.f64 + ctx.f11.f64));
	// fsubs f2,f1,f13
	ctx.f2.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// fsubs f1,f5,f13
	ctx.f1.f64 = double(float(ctx.f5.f64 - ctx.f13.f64));
	// fadds f8,f4,f8
	ctx.f8.f64 = double(float(ctx.f4.f64 + ctx.f8.f64));
	// fmuls f5,f3,f9
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f9.f64));
	// fadds f4,f2,f7
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f7.f64));
	// stfsu f4,4(r11)
	temp.f32 = float(ctx.f4.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f3,f1,f6
	ctx.f3.f64 = double(float(ctx.f1.f64 + ctx.f6.f64));
	// stfsu f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// fadds f2,f8,f13
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f13.f64));
	// stfsu f2,4(r9)
	temp.f32 = float(ctx.f2.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// fadds f1,f12,f5
	ctx.f1.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// fadds f8,f0,f5
	ctx.f8.f64 = double(float(ctx.f0.f64 + ctx.f5.f64));
	// fadds f7,f13,f5
	ctx.f7.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fadds f6,f11,f5
	ctx.f6.f64 = double(float(ctx.f11.f64 + ctx.f5.f64));
	// fadds f5,f1,f10
	ctx.f5.f64 = double(float(ctx.f1.f64 + ctx.f10.f64));
	// stfsx f5,r5,r6
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r5,r8,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r8.s64;
	// lwz r6,4(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// fadds f4,f8,f10
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// stfsx f4,r6,r19
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r19.u32, temp.u32);
	// lwz r19,4(r22)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r6,0(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// fadds f3,f7,f10
	ctx.f3.f64 = double(float(ctx.f7.f64 + ctx.f10.f64));
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stfsx f3,r19,r20
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r19.u32 + ctx.r20.u32, temp.u32);
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// fadds f2,f6,f10
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f10.f64));
	// and r31,r5,r8
	ctx.r31.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r6,4(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r8,r29,1
	ctx.r8.s64 = ctx.r29.s64 + 1;
	// and r30,r5,r7
	ctx.r30.u64 = ctx.r5.u64 & ctx.r7.u64;
	// lwz r7,0(r22)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stfsx f2,r17,r6
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r17.u32 + ctx.r6.u32, temp.u32);
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addi r7,r28,1
	ctx.r7.s64 = ctx.r28.s64 + 1;
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r6,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r6.s64;
	// and r29,r5,r8
	ctx.r29.u64 = ctx.r5.u64 & ctx.r8.u64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r5,r7
	ctx.r28.u64 = ctx.r5.u64 & ctx.r7.u64;
	// bdnz 0x83016f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83016F90;
loc_830170F8:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r29,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r29.u32);
	// stw r28,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r28.u32);
	// lfs f10,-14928(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	ctx.f10.f64 = double(temp.f32);
	// fadds f10,f12,f10
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// lfs f12,-14928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	ctx.f12.f64 = double(temp.f32);
	// fadds f9,f0,f12
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fadds f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fadds f7,f11,f12
	ctx.f7.f64 = double(float(ctx.f11.f64 + ctx.f12.f64));
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// fsubs f6,f10,f12
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f12.f64));
	// stfs f6,0(r26)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// fsubs f5,f9,f12
	ctx.f5.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// stfs f5,0(r25)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fsubs f4,f8,f12
	ctx.f4.f64 = double(float(ctx.f8.f64 - ctx.f12.f64));
	// stfs f4,0(r24)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r24.u32 + 0, temp.u32);
	// fsubs f3,f7,f12
	ctx.f3.f64 = double(float(ctx.f7.f64 - ctx.f12.f64));
	// stfs f3,0(r27)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301714C"))) PPC_WEAK_FUNC(sub_8301714C);
PPC_FUNC_IMPL(__imp__sub_8301714C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017150"))) PPC_WEAK_FUNC(sub_83017150);
PPC_FUNC_IMPL(__imp__sub_83017150) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// bge cr6,0x8301717c
	if (!ctx.cr6.lt) goto loc_8301717C;
	// li r5,1
	ctx.r5.s64 = 1;
loc_8301717C:
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// rlwinm r4,r5,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83017194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830171a8
	if (!ctx.cr6.eq) goto loc_830171A8;
	// li r3,52
	ctx.r3.s64 = 52;
	// b 0x830171b8
	goto loc_830171B8;
loc_830171A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stfs f31,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_830171B8:
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

__attribute__((alias("__imp__sub_830171D0"))) PPC_WEAK_FUNC(sub_830171D0);
PPC_FUNC_IMPL(__imp__sub_830171D0) {
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
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83017210
	if (ctx.cr6.eq) goto loc_83017210;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83017204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x83017214
	goto loc_83017214;
loc_83017210:
	// li r11,0
	ctx.r11.s64 = 0;
loc_83017214:
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

__attribute__((alias("__imp__sub_8301722C"))) PPC_WEAK_FUNC(sub_8301722C);
PPC_FUNC_IMPL(__imp__sub_8301722C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017230"))) PPC_WEAK_FUNC(sub_83017230);
PPC_FUNC_IMPL(__imp__sub_83017230) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83017250"))) PPC_WEAK_FUNC(sub_83017250);
PPC_FUNC_IMPL(__imp__sub_83017250) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017254"))) PPC_WEAK_FUNC(sub_83017254);
PPC_FUNC_IMPL(__imp__sub_83017254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017258"))) PPC_WEAK_FUNC(sub_83017258);
PPC_FUNC_IMPL(__imp__sub_83017258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r9,r10,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r10.s64;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfs f0,-14928(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -14928);
	ctx.f0.f64 = double(temp.f32);
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x830172d8
	if (!ctx.cr6.gt) goto loc_830172D8;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r9,r4,-4
	ctx.r9.s64 = ctx.r4.s64 + -4;
loc_83017294:
	// lfs f11,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f13,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fsubs f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fmadds f8,f9,f12,f11
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f12.f64 + ctx.f11.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f6,4(r9)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x83017294
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83017294;
	// add r11,r10,r5
	ctx.r11.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
loc_830172D8:
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// addi r10,r4,-4
	ctx.r10.s64 = ctx.r4.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_830172E4:
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// blt cr6,0x830172f4
	if (ctx.cr6.lt) goto loc_830172F4;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
loc_830172F4:
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x830173bc
	if (ctx.cr6.lt) goto loc_830173BC;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r8,r7,-3
	ctx.r8.s64 = ctx.r7.s64 + -3;
loc_83017308:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmadds f8,f9,f13,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// lfs f7,8(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,12(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,16(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// fadds f4,f8,f0
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// stfs f3,0(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// stfs f7,0(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f2,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f2.f64 = double(temp.f32);
	// fsubs f1,f7,f2
	ctx.f1.f64 = double(float(ctx.f7.f64 - ctx.f2.f64));
	// fmadds f12,f1,f13,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f3,4(r10)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsubs f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stfs f10,0(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f9,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f6,f9
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fmadds f7,f8,f13,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f10,8(r10)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// fadds f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fsubs f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// stfs f4,0(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f12,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// stfs f5,0(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f3,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// fmadds f1,f2,f13,f12
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfs f4,12(r10)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// fadds f12,f1,f0
	ctx.f12.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// blt cr6,0x83017308
	if (ctx.cr6.lt) goto loc_83017308;
loc_830173BC:
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x83017400
	if (!ctx.cr6.lt) goto loc_83017400;
	// subf r9,r9,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r9.s64;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_830173D0:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,4(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,0(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lfsu f10,4(r11)
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f11,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fmadds f8,f9,f13,f12
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fadds f7,f8,f0
	ctx.f7.f64 = double(float(ctx.f8.f64 + ctx.f0.f64));
	// fsubs f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f0.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsu f6,4(r10)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x830173d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830173D0;
loc_83017400:
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8301741c
	if (!ctx.cr6.eq) goto loc_8301741C;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8301741C:
	// subf. r5,r7,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// subf r9,r6,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r6.s64;
	// bne 0x830172e4
	if (!ctx.cr0.eq) goto loc_830172E4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017434"))) PPC_WEAK_FUNC(sub_83017434);
PPC_FUNC_IMPL(__imp__sub_83017434) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017438"))) PPC_WEAK_FUNC(sub_83017438);
PPC_FUNC_IMPL(__imp__sub_83017438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83017440;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// fcmpu cr6,f2,f13
	ctx.cr6.compare(ctx.f2.f64, ctx.f13.f64);
	// ble cr6,0x83017480
	if (!ctx.cr6.gt) goto loc_83017480;
	// fmr f29,f13
	ctx.f29.f64 = ctx.f13.f64;
loc_83017480:
	// fcmpu cr6,f30,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// ble cr6,0x8301748c
	if (!ctx.cr6.gt) goto loc_8301748C;
	// fmr f30,f13
	ctx.f30.f64 = ctx.f13.f64;
loc_8301748C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi r10,r31,31
	ctx.r10.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// beq cr6,0x830174ac
	if (ctx.cr6.eq) goto loc_830174AC;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_830174AC:
	// rlwinm r11,r31,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830174bc
	if (ctx.cr6.eq) goto loc_830174BC;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_830174BC:
	// rlwinm r11,r31,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830174cc
	if (ctx.cr6.eq) goto loc_830174CC;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_830174CC:
	// rlwinm r11,r31,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830174dc
	if (ctx.cr6.eq) goto loc_830174DC;
	// fadds f0,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
loc_830174DC:
	// rlwinm r11,r31,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830174ec
	if (ctx.cr6.eq) goto loc_830174EC;
	// fmuls f11,f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f30.f64));
loc_830174EC:
	// rlwinm r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x830174fc
	if (ctx.cr6.eq) goto loc_830174FC;
	// fmuls f12,f29,f29
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f29.f64));
loc_830174FC:
	// fadds f12,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fdivs f10,f13,f11
	ctx.f10.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// fsqrts f31,f10
	ctx.f31.f64 = double(float(sqrt(ctx.f10.f64)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8301751C;
	sub_82FA7CF0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x830175e4
	if (ctx.cr6.eq) goto loc_830175E4;
loc_83017530:
	// and r11,r5,r6
	ctx.r11.u64 = ctx.r5.u64 & ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83017544
	if (!ctx.cr6.eq) goto loc_83017544;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x830175d8
	if (!ctx.cr6.eq) goto loc_830175D8;
loc_83017544:
	// rlwinm r11,r5,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x4;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83017560
	if (ctx.cr6.eq) goto loc_83017560;
	// fmuls f0,f31,f30
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f30.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_83017560:
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bne cr6,0x83017578
	if (!ctx.cr6.eq) goto loc_83017578;
	// fmuls f0,f0,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x83017584
	goto loc_83017584;
loc_83017578:
	// rlwinm r11,r5,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830175d8
	if (!ctx.cr6.eq) goto loc_830175D8;
loc_83017584:
	// lhz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 12);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// lvlx128 v63,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwinm r3,r4,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r9,r30,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r30.s64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
loc_830175B4:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addic. r10,r10,-4
	ctx.xer.ca = ctx.r10.u32 > 3;
	ctx.r10.s64 = ctx.r10.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r9,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bne 0x830175b4
	if (!ctx.cr0.eq) goto loc_830175B4;
	// andc r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ~ctx.r5.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_830175D8:
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83017530
	if (!ctx.cr6.eq) goto loc_83017530;
loc_830175E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f30,-64(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830175F8"))) PPC_WEAK_FUNC(sub_830175F8);
PPC_FUNC_IMPL(__imp__sub_830175F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83017700
	if (!ctx.cr6.lt) goto loc_83017700;
	// subf r9,r4,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r4.s64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// blt cr6,0x830176b8
	if (ctx.cr6.lt) goto loc_830176B8;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r10,-12
	ctx.r9.s64 = ctx.r10.s64 + -12;
loc_8301762C:
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmr f8,f12
	ctx.f8.f64 = ctx.f12.f64;
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f9,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f9.f64 = double(temp.f32);
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f7,f9,f12
	ctx.f7.f64 = double(float(ctx.f9.f64 - ctx.f12.f64));
	// lfs f4,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// fmr f3,f9
	ctx.f3.f64 = ctx.f9.f64;
	// fsubs f2,f4,f9
	ctx.f2.f64 = double(float(ctx.f4.f64 - ctx.f9.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f4,0(r3)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f6,f10,f0,f11
	ctx.f6.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f6,0(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// fsubs f10,f12,f4
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// stfs f6,4(r3)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f11,f4
	ctx.f11.f64 = ctx.f4.f64;
	// fmadds f1,f6,f0,f7
	ctx.f1.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 + ctx.f7.f64));
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f1,4(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f5,f6
	ctx.f5.f64 = ctx.f6.f64;
	// fmadds f9,f1,f0,f2
	ctx.f9.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f2.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// fmadds f7,f9,f0,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64 + ctx.f10.f64));
	// stfs f7,12(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stfs f7,4(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmr f8,f9
	ctx.f8.f64 = ctx.f9.f64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8301762c
	if (ctx.cr6.lt) goto loc_8301762C;
loc_830176B8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x83017700
	if (!ctx.cr6.lt) goto loc_83017700;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lfs f0,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830176DC:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// stfs f13,0(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f9,4(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfsu f9,4(r11)
	temp.f32 = float(ctx.f9.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830176dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830176DC;
loc_83017700:
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f13,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-14928(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	ctx.f0.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// stfs f11,4(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301771C"))) PPC_WEAK_FUNC(sub_8301771C);
PPC_FUNC_IMPL(__imp__sub_8301771C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017720"))) PPC_WEAK_FUNC(sub_83017720);
PPC_FUNC_IMPL(__imp__sub_83017720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x83017734
	if (!ctx.cr6.gt) goto loc_83017734;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_83017734:
	// fsubs f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// lfs f0,-14924(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -14924);
	ctx.f0.f64 = double(temp.f32);
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x830177b4
	if (ctx.cr6.lt) goto loc_830177B4;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
loc_83017778:
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f1
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f1.f64));
	// lfs f9,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f1
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// fmuls f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f1.f64));
	// stfs f12,0(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f10,4(r3)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f8,8(r3)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f7,12(r3)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83017778
	if (ctx.cr6.lt) goto loc_83017778;
loc_830177B4:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830177D4:
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// stfsu f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x830177d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830177D4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830177E8"))) PPC_WEAK_FUNC(sub_830177E8);
PPC_FUNC_IMPL(__imp__sub_830177E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d14
	ctx.lr = 0x830177F8;
	__savefpr_23(ctx, base);
	// fcmpu cr6,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f1.f64);
	// bne cr6,0x83017920
	if (!ctx.cr6.eq) goto loc_83017920;
	// fcmpu cr6,f4,f3
	ctx.cr6.compare(ctx.f4.f64, ctx.f3.f64);
	// bne cr6,0x83017920
	if (!ctx.cr6.eq) goto loc_83017920;
	// fcmpu cr6,f6,f5
	ctx.cr6.compare(ctx.f6.f64, ctx.f5.f64);
	// bne cr6,0x83017920
	if (!ctx.cr6.eq) goto loc_83017920;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83017a84
	if (!ctx.cr6.lt) goto loc_83017A84;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x830178c4
	if (ctx.cr6.lt) goto loc_830178C4;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
loc_83017840:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f4
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfs f11,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f13,f4
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f4.f64));
	// lfs f9,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f11,f4
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f7,f9,f4
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f4.f64));
	// lfs f3,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// lfs f1,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lfs f0,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f5,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f5.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f11,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f5,f5,f2,f12
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64 + ctx.f12.f64));
	// lfs f12,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f10,f3,f2,f10
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f2.f64 + ctx.f10.f64));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// fmadds f8,f1,f2,f8
	ctx.f8.f64 = double(float(ctx.f1.f64 * ctx.f2.f64 + ctx.f8.f64));
	// fmadds f7,f0,f2,f7
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f2.f64 + ctx.f7.f64));
	// fmadds f5,f6,f13,f5
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 + ctx.f5.f64));
	// stfs f5,0(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmadds f3,f11,f6,f10
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f3,4(r3)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fmadds f1,f9,f6,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 * ctx.f6.f64 + ctx.f8.f64));
	// stfs f1,8(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f0,f12,f6,f7
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f7.f64));
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x83017840
	if (ctx.cr6.lt) goto loc_83017840;
loc_830178C4:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83017a84
	if (!ctx.cr6.lt) goto loc_83017A84;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subf r9,r3,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r3.s64;
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_830178E8:
	// lfsx f0,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f4
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f4.f64));
	// lfsx f12,r9,r3
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f10,f12,f6,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f6.f64 + ctx.f13.f64));
	// fmadds f9,f11,f2,f10
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f2.f64 + ctx.f10.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x830178e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830178E8;
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d60
	ctx.lr = 0x83017914;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83017920:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fsubs f0,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// fsubs f13,f4,f3
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// fsubs f12,f6,f5
	ctx.f12.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// std r10,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r10.u64);
	// lfd f11,-96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// fdivs f0,f0,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// fdivs f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// fdivs f12,f12,f9
	ctx.f12.f64 = double(float(ctx.f12.f64 / ctx.f9.f64));
	// bge cr6,0x83017a84
	if (!ctx.cr6.lt) goto loc_83017A84;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// srawi r9,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 2;
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x83017a30
	if (ctx.cr6.lt) goto loc_83017A30;
	// addi r10,r11,-12
	ctx.r10.s64 = ctx.r11.s64 + -12;
loc_8301797C:
	// fadds f11,f13,f3
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// lfs f10,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f3,f10,f3
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// lfs f2,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// fadds f9,f0,f1
	ctx.f9.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f8,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f8.f64 = double(temp.f32);
	// fadds f7,f12,f5
	ctx.f7.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// lfs f10,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// lfs f4,12(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f6,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lfs f31,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f29.f64 = double(temp.f32);
	// lfs f28,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f28.f64 = double(temp.f32);
	// fadds f27,f13,f11
	ctx.f27.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// lfs f26,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f26.f64 = double(temp.f32);
	// fmadds f3,f2,f1,f3
	ctx.f3.f64 = double(float(ctx.f2.f64 * ctx.f1.f64 + ctx.f3.f64));
	// lfs f24,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f24.f64 = double(temp.f32);
	// fmuls f8,f8,f11
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// fadds f25,f0,f9
	ctx.f25.f64 = double(float(ctx.f0.f64 + ctx.f9.f64));
	// fadds f23,f12,f7
	ctx.f23.f64 = double(float(ctx.f12.f64 + ctx.f7.f64));
	// fadds f2,f13,f27
	ctx.f2.f64 = double(float(ctx.f13.f64 + ctx.f27.f64));
	// fmuls f6,f6,f27
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f27.f64));
	// fmadds f10,f10,f9,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fadds f11,f0,f25
	ctx.f11.f64 = double(float(ctx.f0.f64 + ctx.f25.f64));
	// fadds f27,f12,f23
	ctx.f27.f64 = double(float(ctx.f12.f64 + ctx.f23.f64));
	// fmadds f9,f5,f29,f3
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f29.f64 + ctx.f3.f64));
	// stfs f9,0(r3)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// fmuls f8,f4,f2
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f2.f64));
	// fmadds f6,f31,f25,f6
	ctx.f6.f64 = double(float(ctx.f31.f64 * ctx.f25.f64 + ctx.f6.f64));
	// fadds f3,f13,f2
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f2.f64));
	// fadds f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// fmadds f5,f28,f7,f10
	ctx.f5.f64 = double(float(ctx.f28.f64 * ctx.f7.f64 + ctx.f10.f64));
	// stfs f5,4(r3)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// fadds f5,f12,f27
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// fmadds f4,f30,f11,f8
	ctx.f4.f64 = double(float(ctx.f30.f64 * ctx.f11.f64 + ctx.f8.f64));
	// fmadds f2,f26,f23,f6
	ctx.f2.f64 = double(float(ctx.f26.f64 * ctx.f23.f64 + ctx.f6.f64));
	// stfs f2,8(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// fmadds f11,f24,f27,f4
	ctx.f11.f64 = double(float(ctx.f24.f64 * ctx.f27.f64 + ctx.f4.f64));
	// stfs f11,12(r3)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8301797c
	if (ctx.cr6.lt) goto loc_8301797C;
loc_83017A30:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x83017a84
	if (!ctx.cr6.lt) goto loc_83017A84;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subf r9,r5,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// rlwinm r10,r10,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_83017A54:
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f10,f11,f1
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfsx f9,r9,r5
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fmadds f7,f9,f3,f10
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f3.f64 + ctx.f10.f64));
	// fadds f3,f13,f3
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fmadds f6,f5,f8,f7
	ctx.f6.f64 = double(float(ctx.f5.f64 * ctx.f8.f64 + ctx.f7.f64));
	// stfsu f6,4(r11)
	temp.f32 = float(ctx.f6.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// fadds f5,f12,f5
	ctx.f5.f64 = double(float(ctx.f12.f64 + ctx.f5.f64));
	// bdnz 0x83017a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_83017A54;
loc_83017A84:
	// addi r12,r1,-8
	ctx.r12.s64 = ctx.r1.s64 + -8;
	// bl 0x82fa8d60
	ctx.lr = 0x83017A8C;
	__restfpr_23(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017A98"))) PPC_WEAK_FUNC(sub_83017A98);
PPC_FUNC_IMPL(__imp__sub_83017A98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r10,r11,-11940
	ctx.r10.s64 = ctx.r11.s64 + -11940;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017AA8"))) PPC_WEAK_FUNC(sub_83017AA8);
PPC_FUNC_IMPL(__imp__sub_83017AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x83017adc
	if (!ctx.cr6.eq) goto loc_83017ADC;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f13,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
loc_83017ADC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_83017AF4"))) PPC_WEAK_FUNC(sub_83017AF4);
PPC_FUNC_IMPL(__imp__sub_83017AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017AF8"))) PPC_WEAK_FUNC(sub_83017AF8);
PPC_FUNC_IMPL(__imp__sub_83017AF8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83017b30
	if (ctx.cr6.eq) goto loc_83017B30;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83017B30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83017B30:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83017B48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_83017B64"))) PPC_WEAK_FUNC(sub_83017B64);
PPC_FUNC_IMPL(__imp__sub_83017B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017B68"))) PPC_WEAK_FUNC(sub_83017B68);
PPC_FUNC_IMPL(__imp__sub_83017B68) {
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
	// beq cr6,0x83017ba0
	if (ctx.cr6.eq) goto loc_83017BA0;
	// cmplwi cr6,r5,12
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 12, ctx.xer);
	// bne cr6,0x83017ba0
	if (!ctx.cr6.eq) goto loc_83017BA0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82fa77c0
	ctx.lr = 0x83017B8C;
	sub_82FA77C0(ctx, base);
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
loc_83017BA0:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017BB4"))) PPC_WEAK_FUNC(sub_83017BB4);
PPC_FUNC_IMPL(__imp__sub_83017BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017BB8"))) PPC_WEAK_FUNC(sub_83017BB8);
PPC_FUNC_IMPL(__imp__sub_83017BB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x83017bc8
	if (!ctx.cr6.eq) goto loc_83017BC8;
loc_83017BC0:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83017BC8:
	// extsh r11,r4
	ctx.r11.s64 = ctx.r4.s16;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x83017c00
	if (ctx.cr6.lt) goto loc_83017C00;
	// beq cr6,0x83017bf0
	if (ctx.cr6.eq) goto loc_83017BF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x83017bc0
	if (!ctx.cr6.lt) goto loc_83017BC0;
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83017BF0:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_83017C00:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017C10"))) PPC_WEAK_FUNC(sub_83017C10);
PPC_FUNC_IMPL(__imp__sub_83017C10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-8576
	ctx.r10.s64 = ctx.r11.s64 + -8576;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017C20"))) PPC_WEAK_FUNC(sub_83017C20);
PPC_FUNC_IMPL(__imp__sub_83017C20) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83017c58
	if (ctx.cr6.eq) goto loc_83017C58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83017C58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_83017C58:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83017C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_83017C8C"))) PPC_WEAK_FUNC(sub_83017C8C);
PPC_FUNC_IMPL(__imp__sub_83017C8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017C90"))) PPC_WEAK_FUNC(sub_83017C90);
PPC_FUNC_IMPL(__imp__sub_83017C90) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// sth r11,22(r10)
	PPC_STORE_U16(ctx.r10.u32 + 22, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017CA8"))) PPC_WEAK_FUNC(sub_83017CA8);
PPC_FUNC_IMPL(__imp__sub_83017CA8) {
	PPC_FUNC_PROLOGUE();
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stb r10,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r10.u8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stb r9,5(r4)
	PPC_STORE_U8(ctx.r4.u32 + 5, ctx.r9.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017CC8"))) PPC_WEAK_FUNC(sub_83017CC8);
PPC_FUNC_IMPL(__imp__sub_83017CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// lfs f0,-8020(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -8020);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f1,f10,f9
	ctx.f1.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017CF8"))) PPC_WEAK_FUNC(sub_83017CF8);
PPC_FUNC_IMPL(__imp__sub_83017CF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// sth r10,20(r11)
	PPC_STORE_U16(ctx.r11.u32 + 20, ctx.r10.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017D0C"))) PPC_WEAK_FUNC(sub_83017D0C);
PPC_FUNC_IMPL(__imp__sub_83017D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017D10"))) PPC_WEAK_FUNC(sub_83017D10);
PPC_FUNC_IMPL(__imp__sub_83017D10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x83017d8c
	if (ctx.cr6.eq) goto loc_83017D8C;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83017d44
	if (!ctx.cr6.lt) goto loc_83017D44;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83017D44:
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mullw r11,r9,r4
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f9.u64);
	// lwz r7,-12(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// mullw r6,r7,r9
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// mullw r5,r6,r10
	ctx.r5.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83017d88
	if (ctx.cr6.lt) goto loc_83017D88;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83017D88:
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
loc_83017D8C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017D94"))) PPC_WEAK_FUNC(sub_83017D94);
PPC_FUNC_IMPL(__imp__sub_83017D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017D98"))) PPC_WEAK_FUNC(sub_83017D98);
PPC_FUNC_IMPL(__imp__sub_83017D98) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,-14920
	ctx.r9.s64 = ctx.r10.s64 + -14920;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83017DC4"))) PPC_WEAK_FUNC(sub_83017DC4);
PPC_FUNC_IMPL(__imp__sub_83017DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83017DC8"))) PPC_WEAK_FUNC(sub_83017DC8);
PPC_FUNC_IMPL(__imp__sub_83017DC8) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x83017DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83017e38
	if (ctx.cr6.eq) goto loc_83017E38;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14920
	ctx.r10.s64 = ctx.r11.s64 + -14920;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
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
loc_83017E38:
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

__attribute__((alias("__imp__sub_83017E50"))) PPC_WEAK_FUNC(sub_83017E50);
PPC_FUNC_IMPL(__imp__sub_83017E50) {
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
	// stw r5,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm r9,r10,21,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x7;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x83017EA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// sth r3,20(r31)
	PPC_STORE_U16(ctx.r31.u32 + 20, ctx.r3.u16);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// lfs f31,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f30.f64 = double(temp.f32);
	// bl 0x82fa4108
	ctx.lr = 0x83017EB4;
	sub_82FA4108(ctx, base);
	// extsw r6,r3
	ctx.r6.s64 = ctx.r3.s32;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// fsubs f12,f31,f30
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f31.f64 - ctx.f30.f64));
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// lfs f13,23816(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 23816);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32228
	ctx.r3.s64 = -2112094208;
	// lfs f0,-23580(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// fmadds f7,f8,f12,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 + ctx.f30.f64));
	// stfs f7,16(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f6,4(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	ctx.f6.f64 = double(temp.f32);
	// fadds f5,f6,f7
	ctx.f5.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// stfs f5,24(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fcmpu cr6,f5,f0
	ctx.cr6.compare(ctx.f5.f64, ctx.f0.f64);
	// bge cr6,0x83017f08
	if (!ctx.cr6.lt) goto loc_83017F08;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
loc_83017F08:
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

__attribute__((alias("__imp__sub_83017F28"))) PPC_WEAK_FUNC(sub_83017F28);
PPC_FUNC_IMPL(__imp__sub_83017F28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83017F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,45
	ctx.r11.s64 = 45;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lhz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lhz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r10,r7
	ctx.r10.s64 = ctx.r7.s16;
	// mullw r29,r8,r9
	ctx.r29.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x83017f78
	if (!ctx.cr6.eq) goto loc_83017F78;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x83017F74;
	sub_82FA7CF0(ctx, base);
	// b 0x83018024
	goto loc_83018024;
loc_83017F78:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f13,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x83017f9c
	if (!ctx.cr6.lt) goto loc_83017F9C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_83017F9C:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctidz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r6,r9
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r9.s32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x83017fe8
	if (ctx.cr6.lt) goto loc_83017FE8;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83017FE8:
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x83017ff8
	if (!ctx.cr6.lt) goto loc_83017FF8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_83017FF8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x83018008;
	sub_82FA7CF0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bge cr6,0x83018024
	if (!ctx.cr6.lt) goto loc_83018024;
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_83018024:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// divwu r10,r30,r11
	ctx.r10.u32 = ctx.r30.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// sth r10,14(r28)
	PPC_STORE_U16(ctx.r28.u32 + 14, ctx.r10.u16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301803C"))) PPC_WEAK_FUNC(sub_8301803C);
PPC_FUNC_IMPL(__imp__sub_8301803C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018040"))) PPC_WEAK_FUNC(sub_83018040);
PPC_FUNC_IMPL(__imp__sub_83018040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14920
	ctx.r10.s64 = ctx.r11.s64 + -14920;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018050"))) PPC_WEAK_FUNC(sub_83018050);
PPC_FUNC_IMPL(__imp__sub_83018050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-14896
	ctx.r8.s64 = ctx.r9.s64 + -14896;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// sth r7,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r7.u16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018090"))) PPC_WEAK_FUNC(sub_83018090);
PPC_FUNC_IMPL(__imp__sub_83018090) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x830180B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830180d4
	if (ctx.cr6.eq) goto loc_830180D4;
	// lis r11,-32232
	ctx.r11.s64 = -2112356352;
	// addi r10,r11,-14920
	ctx.r10.s64 = ctx.r11.s64 + -14920;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830180D4:
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

__attribute__((alias("__imp__sub_830180E8"))) PPC_WEAK_FUNC(sub_830180E8);
PPC_FUNC_IMPL(__imp__sub_830180E8) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,36
	ctx.r4.s64 = 36;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x83018108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301815c
	if (ctx.cr6.eq) goto loc_8301815C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,-14896
	ctx.r8.s64 = ctx.r9.s64 + -14896;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// sth r7,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r7.u16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8301815C:
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

__attribute__((alias("__imp__sub_83018170"))) PPC_WEAK_FUNC(sub_83018170);
PPC_FUNC_IMPL(__imp__sub_83018170) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_83018174:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x83018174
	if (!ctx.cr6.eq) goto loc_83018174;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_830181A0:
	// lbzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r3.u32);
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,65
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 65, ctx.xer);
	// blt cr6,0x830181c0
	if (ctx.cr6.lt) goto loc_830181C0;
	// cmpwi cr6,r9,90
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 90, ctx.xer);
	// bgt cr6,0x830181c0
	if (ctx.cr6.gt) goto loc_830181C0;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// stbx r10,r11,r3
	PPC_STORE_U8(ctx.r11.u32 + ctx.r3.u32, ctx.r10.u8);
loc_830181C0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x830181a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_830181A0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830181CC"))) PPC_WEAK_FUNC(sub_830181CC);
PPC_FUNC_IMPL(__imp__sub_830181CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830181D0"))) PPC_WEAK_FUNC(sub_830181D0);
PPC_FUNC_IMPL(__imp__sub_830181D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lbz r3,15268(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 15268);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830181DC"))) PPC_WEAK_FUNC(sub_830181DC);
PPC_FUNC_IMPL(__imp__sub_830181DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830181E0"))) PPC_WEAK_FUNC(sub_830181E0);
PPC_FUNC_IMPL(__imp__sub_830181E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,255
	ctx.r11.s64 = 255;
	// lis r8,256
	ctx.r8.s64 = 16777216;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lfs f0,24436(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r6.u32);
	// stb r10,28(r3)
	PPC_STORE_U8(ctx.r3.u32 + 28, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018220"))) PPC_WEAK_FUNC(sub_83018220);
PPC_FUNC_IMPL(__imp__sub_83018220) {
	PPC_FUNC_PROLOGUE();
	// b 0x8301d9c0
	sub_8301D9C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018224"))) PPC_WEAK_FUNC(sub_83018224);
PPC_FUNC_IMPL(__imp__sub_83018224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018228"))) PPC_WEAK_FUNC(sub_83018228);
PPC_FUNC_IMPL(__imp__sub_83018228) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,15496
	ctx.r10.s64 = ctx.r11.s64 + 15496;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018238"))) PPC_WEAK_FUNC(sub_83018238);
PPC_FUNC_IMPL(__imp__sub_83018238) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// b 0x83044e38
	sub_83044E38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018244"))) PPC_WEAK_FUNC(sub_83018244);
PPC_FUNC_IMPL(__imp__sub_83018244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018248"))) PPC_WEAK_FUNC(sub_83018248);
PPC_FUNC_IMPL(__imp__sub_83018248) {
	PPC_FUNC_PROLOGUE();
	// b 0x83045240
	sub_83045240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301824C"))) PPC_WEAK_FUNC(sub_8301824C);
PPC_FUNC_IMPL(__imp__sub_8301824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018250"))) PPC_WEAK_FUNC(sub_83018250);
PPC_FUNC_IMPL(__imp__sub_83018250) {
	PPC_FUNC_PROLOGUE();
	// b 0x83045318
	sub_83045318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018254"))) PPC_WEAK_FUNC(sub_83018254);
PPC_FUNC_IMPL(__imp__sub_83018254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018258"))) PPC_WEAK_FUNC(sub_83018258);
PPC_FUNC_IMPL(__imp__sub_83018258) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x83018284;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x83040cc0
	ctx.lr = 0x8301828C;
	sub_83040CC0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x830182A0;
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

__attribute__((alias("__imp__sub_830182B4"))) PPC_WEAK_FUNC(sub_830182B4);
PPC_FUNC_IMPL(__imp__sub_830182B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830182B8"))) PPC_WEAK_FUNC(sub_830182B8);
PPC_FUNC_IMPL(__imp__sub_830182B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x830182C0;
	__savegprlr_24(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r28,r5,16
	ctx.r28.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x83018394
	if (ctx.cr6.eq) goto loc_83018394;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x83018394
	if (ctx.cr6.eq) goto loc_83018394;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// bgt cr6,0x83018394
	if (ctx.cr6.gt) goto loc_83018394;
	// bl 0x83040c80
	ctx.lr = 0x830182F8;
	sub_83040C80(ctx, base);
	// rlwinm r10,r28,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r11,r10
	ctx.r24.u64 = ctx.r11.u64 + ctx.r10.u64;
	// neg r9,r24
	ctx.r9.s64 = -ctx.r24.s64;
	// rlwinm r12,r9,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x83018318;
	sub_82FACED4(ctx, base);
	// lwz r8,0(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r8,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r1.u32 = ea;
	// addic. r29,r1,80
	ctx.xer.ca = ctx.r1.u32 > 4294967215;
	ctx.r29.s64 = ctx.r1.s64 + 80;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x83018330
	if (ctx.cr0.eq) goto loc_83018330;
	// li r11,33
	ctx.r11.s64 = 33;
	// sth r11,2(r29)
	PPC_STORE_U16(ctx.r29.u32 + 2, ctx.r11.u16);
loc_83018330:
	// stw r26,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r26.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
	// sth r30,8(r29)
	PPC_STORE_U16(ctx.r29.u32 + 8, ctx.r30.u16);
	// beq cr6,0x83018378
	if (ctx.cr6.eq) goto loc_83018378;
	// li r30,0
	ctx.r30.s64 = 0;
loc_83018348:
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// li r5,24
	ctx.r5.s64 = 24;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r3,r10,16
	ctx.r3.s64 = ctx.r10.s64 + 16;
	// bl 0x82fa77c0
	ctx.lr = 0x83018368;
	sub_82FA77C0(ctx, base);
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// clrlwi r30,r10,16
	ctx.r30.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x83018348
	if (ctx.cr6.lt) goto loc_83018348;
loc_83018378:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301838C;
	sub_83040DA0(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_83018394:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830183A0"))) PPC_WEAK_FUNC(sub_830183A0);
PPC_FUNC_IMPL(__imp__sub_830183A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x830183d0
	if (ctx.cr6.gt) goto loc_830183D0;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830183D0:
	// li r11,32
	ctx.r11.s64 = 32;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x83040d80
	ctx.lr = 0x830183EC;
	sub_83040D80(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018400;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018410"))) PPC_WEAK_FUNC(sub_83018410);
PPC_FUNC_IMPL(__imp__sub_83018410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x83018440
	if (ctx.cr6.gt) goto loc_83018440;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83018440:
	// li r11,34
	ctx.r11.s64 = 34;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x83040d88
	ctx.lr = 0x8301845C;
	sub_83040D88(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018470;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018480"))) PPC_WEAK_FUNC(sub_83018480);
PPC_FUNC_IMPL(__imp__sub_83018480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040cc8
	ctx.lr = 0x830184A0;
	sub_83040CC8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x830184B4;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830184C4"))) PPC_WEAK_FUNC(sub_830184C4);
PPC_FUNC_IMPL(__imp__sub_830184C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830184C8"))) PPC_WEAK_FUNC(sub_830184C8);
PPC_FUNC_IMPL(__imp__sub_830184C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,11
	ctx.r10.s64 = 11;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,36
	ctx.r5.s64 = 36;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x830184F4;
	sub_82FA77C0(ctx, base);
	// bl 0x83040cd8
	ctx.lr = 0x830184F8;
	sub_83040CD8(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301850C;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301851C"))) PPC_WEAK_FUNC(sub_8301851C);
PPC_FUNC_IMPL(__imp__sub_8301851C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018520"))) PPC_WEAK_FUNC(sub_83018520);
PPC_FUNC_IMPL(__imp__sub_83018520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stb r4,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r4.u8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// beq cr6,0x83018564
	if (ctx.cr6.eq) goto loc_83018564;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,24
	ctx.r5.s64 = 24;
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x83018560;
	sub_82FA77C0(ctx, base);
	// b 0x8301856c
	goto loc_8301856C;
loc_83018564:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
loc_8301856C:
	// bl 0x83040ce0
	ctx.lr = 0x83018570;
	sub_83040CE0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018584;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018594"))) PPC_WEAK_FUNC(sub_83018594);
PPC_FUNC_IMPL(__imp__sub_83018594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018598"))) PPC_WEAK_FUNC(sub_83018598);
PPC_FUNC_IMPL(__imp__sub_83018598) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,26
	ctx.r11.s64 = 26;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stb r5,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r5.u8);
	// bl 0x83040d50
	ctx.lr = 0x830185BC;
	sub_83040D50(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x830185D0;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830185E0"))) PPC_WEAK_FUNC(sub_830185E0);
PPC_FUNC_IMPL(__imp__sub_830185E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// bl 0x83040c90
	ctx.lr = 0x8301860C;
	sub_83040C90(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018620;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018630"))) PPC_WEAK_FUNC(sub_83018630);
PPC_FUNC_IMPL(__imp__sub_83018630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// bl 0x83040ca0
	ctx.lr = 0x83018654;
	sub_83040CA0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018668;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018678"))) PPC_WEAK_FUNC(sub_83018678);
PPC_FUNC_IMPL(__imp__sub_83018678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040ca8
	ctx.lr = 0x83018698;
	sub_83040CA8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x830186AC;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830186BC"))) PPC_WEAK_FUNC(sub_830186BC);
PPC_FUNC_IMPL(__imp__sub_830186BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830186C0"))) PPC_WEAK_FUNC(sub_830186C0);
PPC_FUNC_IMPL(__imp__sub_830186C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,11427
	ctx.r11.s64 = 748879872;
	// stb r5,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r5.u8);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// ori r9,r11,15323
	ctx.r9.u64 = ctx.r11.u64 | 15323;
	// stb r6,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r6.u8);
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// subf r8,r4,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r4.s64;
	// subfic r7,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r8.s64;
	// subfe r5,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 & ctx.r4.u64;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// bl 0x83040c98
	ctx.lr = 0x83018700;
	sub_83040C98(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018714;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018724"))) PPC_WEAK_FUNC(sub_83018724);
PPC_FUNC_IMPL(__imp__sub_83018724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018728"))) PPC_WEAK_FUNC(sub_83018728);
PPC_FUNC_IMPL(__imp__sub_83018728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,18
	ctx.r11.s64 = 18;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d10
	ctx.lr = 0x83018744;
	sub_83040D10(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018758;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018768"))) PPC_WEAK_FUNC(sub_83018768);
PPC_FUNC_IMPL(__imp__sub_83018768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d18
	ctx.lr = 0x83018784;
	sub_83040D18(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018798;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830187A8"))) PPC_WEAK_FUNC(sub_830187A8);
PPC_FUNC_IMPL(__imp__sub_830187A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,20
	ctx.r11.s64 = 20;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d20
	ctx.lr = 0x830187C8;
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
	ctx.lr = 0x830187DC;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830187EC"))) PPC_WEAK_FUNC(sub_830187EC);
PPC_FUNC_IMPL(__imp__sub_830187EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830187F0"))) PPC_WEAK_FUNC(sub_830187F0);
PPC_FUNC_IMPL(__imp__sub_830187F0) {
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
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// ble cr6,0x83018820
	if (!ctx.cr6.gt) goto loc_83018820;
loc_83018808:
	// li r3,31
	ctx.r3.s64 = 31;
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
loc_83018820:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8301887c
	if (ctx.cr6.eq) goto loc_8301887C;
	// addic. r6,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r6.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x8301887c
	if (ctx.cr0.eq) goto loc_8301887C;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
loc_83018838:
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x8301886c
	if (!ctx.cr6.lt) goto loc_8301886C;
	// lwz r7,0(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
loc_83018850:
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x83018808
	if (ctx.cr6.eq) goto loc_83018808;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x83018850
	if (ctx.cr6.lt) goto loc_83018850;
loc_8301886C:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// blt cr6,0x83018838
	if (ctx.cr6.lt) goto loc_83018838;
loc_8301887C:
	// li r11,13
	ctx.r11.s64 = 13;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x82a75220
	ctx.lr = 0x83018898;
	sub_82A75220(ctx, base);
	// bl 0x83040ce8
	ctx.lr = 0x8301889C;
	sub_83040CE8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x830188B0;
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

__attribute__((alias("__imp__sub_830188C4"))) PPC_WEAK_FUNC(sub_830188C4);
PPC_FUNC_IMPL(__imp__sub_830188C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830188C8"))) PPC_WEAK_FUNC(sub_830188C8);
PPC_FUNC_IMPL(__imp__sub_830188C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,14
	ctx.r11.s64 = 14;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// bl 0x83040cf0
	ctx.lr = 0x830188F0;
	sub_83040CF0(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018904;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018914"))) PPC_WEAK_FUNC(sub_83018914);
PPC_FUNC_IMPL(__imp__sub_83018914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018918"))) PPC_WEAK_FUNC(sub_83018918);
PPC_FUNC_IMPL(__imp__sub_83018918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x8301893C;
	sub_82FA77C0(ctx, base);
	// bl 0x83040cf8
	ctx.lr = 0x83018940;
	sub_83040CF8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018954;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018964"))) PPC_WEAK_FUNC(sub_83018964);
PPC_FUNC_IMPL(__imp__sub_83018964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018968"))) PPC_WEAK_FUNC(sub_83018968);
PPC_FUNC_IMPL(__imp__sub_83018968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// stb r4,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r4.u8);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d00
	ctx.lr = 0x83018988;
	sub_83040D00(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301899C;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830189AC"))) PPC_WEAK_FUNC(sub_830189AC);
PPC_FUNC_IMPL(__imp__sub_830189AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830189B0"))) PPC_WEAK_FUNC(sub_830189B0);
PPC_FUNC_IMPL(__imp__sub_830189B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f2,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f1,80(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,17
	ctx.r10.s64 = 17;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// sth r10,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r10.u16);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// bl 0x83040d08
	ctx.lr = 0x830189E8;
	sub_83040D08(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x830189FC;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018A0C"))) PPC_WEAK_FUNC(sub_83018A0C);
PPC_FUNC_IMPL(__imp__sub_83018A0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018A10"))) PPC_WEAK_FUNC(sub_83018A10);
PPC_FUNC_IMPL(__imp__sub_83018A10) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018A18"))) PPC_WEAK_FUNC(sub_83018A18);
PPC_FUNC_IMPL(__imp__sub_83018A18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r8,36
	ctx.r8.s64 = 36;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// lwz r11,15272(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15272);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r10,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r10.u64);
	// stw r11,15272(r9)
	PPC_STORE_U32(ctx.r9.u32 + 15272, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83040d98
	ctx.lr = 0x83018A60;
	sub_83040D98(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018A74;
	sub_83040DA0(ctx, base);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addic r4,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r4.s64 = ctx.r6.s64 + -1;
	// subfe r11,r3,r3
	temp.u8 = (~ctx.r3.u32 + ctx.r3.u32 < ~ctx.r3.u32) | (~ctx.r3.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r3.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r5
	ctx.r3.u64 = ctx.r11.u64 & ctx.r5.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018A98"))) PPC_WEAK_FUNC(sub_83018A98);
PPC_FUNC_IMPL(__imp__sub_83018A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,-1
	ctx.r8.s64 = -1;
	// sth r10,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r10.u16);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// std r11,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r11.u64);
	// bl 0x83040d98
	ctx.lr = 0x83018AD8;
	sub_83040D98(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018AEC;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018AFC"))) PPC_WEAK_FUNC(sub_83018AFC);
PPC_FUNC_IMPL(__imp__sub_83018AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018B00"))) PPC_WEAK_FUNC(sub_83018B00);
PPC_FUNC_IMPL(__imp__sub_83018B00) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x830265d8
	sub_830265D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018B1C"))) PPC_WEAK_FUNC(sub_83018B1C);
PPC_FUNC_IMPL(__imp__sub_83018B1C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018B20"))) PPC_WEAK_FUNC(sub_83018B20);
PPC_FUNC_IMPL(__imp__sub_83018B20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83026780
	sub_83026780(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018B3C"))) PPC_WEAK_FUNC(sub_83018B3C);
PPC_FUNC_IMPL(__imp__sub_83018B3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018B40"))) PPC_WEAK_FUNC(sub_83018B40);
PPC_FUNC_IMPL(__imp__sub_83018B40) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x83018b54
	if (!ctx.cr6.eq) goto loc_83018B54;
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
loc_83018B54:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,15208(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15208);
	// b 0x83045b40
	sub_83045B40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018B64"))) PPC_WEAK_FUNC(sub_83018B64);
PPC_FUNC_IMPL(__imp__sub_83018B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018B68"))) PPC_WEAK_FUNC(sub_83018B68);
PPC_FUNC_IMPL(__imp__sub_83018B68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x83018B70;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r9,22
	ctx.r9.s64 = 22;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lwz r11,15272(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15272);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r3,15272(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15272, ctx.r3.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// bl 0x83046618
	ctx.lr = 0x83018BA8;
	sub_83046618(ctx, base);
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83018c2c
	if (ctx.cr6.eq) goto loc_83018C2C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// std r11,92(r1)
	PPC_STORE_U64(ctx.r1.u32 + 92, ctx.r11.u64);
	// bl 0x83040d30
	ctx.lr = 0x83018BC8;
	sub_83040D30(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018BDC;
	sub_83040DA0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83018c2c
	if (!ctx.cr6.eq) goto loc_83018C2C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x83018bf8
	if (!ctx.cr6.eq) goto loc_83018BF8;
	// rlwinm r11,r30,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83018c20
	if (ctx.cr6.eq) goto loc_83018C20;
loc_83018BF8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// lwz r3,15204(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15204);
	// bl 0x830266c8
	ctx.lr = 0x83018C18;
	sub_830266C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83018c2c
	if (!ctx.cr6.eq) goto loc_83018C2C;
loc_83018C20:
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_83018C2C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018C38"))) PPC_WEAK_FUNC(sub_83018C38);
PPC_FUNC_IMPL(__imp__sub_83018C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83018c90
	if (ctx.cr6.eq) goto loc_83018C90;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83018c90
	if (ctx.cr6.eq) goto loc_83018C90;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x83040cb0
	ctx.lr = 0x83018C6C;
	sub_83040CB0(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018C80;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83018C90:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018CA4"))) PPC_WEAK_FUNC(sub_83018CA4);
PPC_FUNC_IMPL(__imp__sub_83018CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018CA8"))) PPC_WEAK_FUNC(sub_83018CA8);
PPC_FUNC_IMPL(__imp__sub_83018CA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83018d00
	if (ctx.cr6.eq) goto loc_83018D00;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83018d00
	if (ctx.cr6.eq) goto loc_83018D00;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x83040cb0
	ctx.lr = 0x83018CDC;
	sub_83040CB0(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018CF0;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83018D00:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018D14"))) PPC_WEAK_FUNC(sub_83018D14);
PPC_FUNC_IMPL(__imp__sub_83018D14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018D18"))) PPC_WEAK_FUNC(sub_83018D18);
PPC_FUNC_IMPL(__imp__sub_83018D18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83018d40
	if (!ctx.cr6.eq) goto loc_83018D40;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_83018D40:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040cb8
	ctx.lr = 0x83018D50;
	sub_83040CB8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018D64;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018D74"))) PPC_WEAK_FUNC(sub_83018D74);
PPC_FUNC_IMPL(__imp__sub_83018D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018D78"))) PPC_WEAK_FUNC(sub_83018D78);
PPC_FUNC_IMPL(__imp__sub_83018D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x83040cb8
	ctx.lr = 0x83018D98;
	sub_83040CB8(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83018DAC;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018DBC"))) PPC_WEAK_FUNC(sub_83018DBC);
PPC_FUNC_IMPL(__imp__sub_83018DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018DC0"))) PPC_WEAK_FUNC(sub_83018DC0);
PPC_FUNC_IMPL(__imp__sub_83018DC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,15184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// b 0x8302a258
	sub_8302A258(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018DE0"))) PPC_WEAK_FUNC(sub_83018DE0);
PPC_FUNC_IMPL(__imp__sub_83018DE0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018DE4"))) PPC_WEAK_FUNC(sub_83018DE4);
PPC_FUNC_IMPL(__imp__sub_83018DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018DE8"))) PPC_WEAK_FUNC(sub_83018DE8);
PPC_FUNC_IMPL(__imp__sub_83018DE8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// bl 0x82a77608
	ctx.lr = 0x83018E18;
	sub_82A77608(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83018e2c
	if (!ctx.cr6.eq) goto loc_83018E2C;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83018e34
	goto loc_83018E34;
loc_83018E2C:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_83018E34:
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

__attribute__((alias("__imp__sub_83018E4C"))) PPC_WEAK_FUNC(sub_83018E4C);
PPC_FUNC_IMPL(__imp__sub_83018E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83018E50"))) PPC_WEAK_FUNC(sub_83018E50);
PPC_FUNC_IMPL(__imp__sub_83018E50) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x83018e94
	if (ctx.cr6.eq) goto loc_83018E94;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83018e84
	if (ctx.cr6.eq) goto loc_83018E84;
	// bl 0x82a756a0
	ctx.lr = 0x83018E84;
	sub_82A756A0(ctx, base);
loc_83018E84:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x83018eb8
	goto loc_83018EB8;
loc_83018E94:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82a77600
	ctx.lr = 0x83018E9C;
	sub_82A77600(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83018eac
	if (ctx.cr6.eq) goto loc_83018EAC;
	// bl 0x82a756a0
	ctx.lr = 0x83018EAC;
	sub_82A756A0(ctx, base);
loc_83018EAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_83018EB8:
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

__attribute__((alias("__imp__sub_83018ED0"))) PPC_WEAK_FUNC(sub_83018ED0);
PPC_FUNC_IMPL(__imp__sub_83018ED0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// stw r5,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r5.u32);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82a776a8
	sub_82A776A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83018EEC"))) PPC_WEAK_FUNC(sub_83018EEC);
PPC_FUNC_IMPL(__imp__sub_83018EEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018EF0"))) PPC_WEAK_FUNC(sub_83018EF0);
PPC_FUNC_IMPL(__imp__sub_83018EF0) {
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
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r4,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r4.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lwz r3,15184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// bl 0x8302c350
	ctx.lr = 0x83018F40;
	sub_8302C350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83018F50"))) PPC_WEAK_FUNC(sub_83018F50);
PPC_FUNC_IMPL(__imp__sub_83018F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83018F58;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x83018f78
	if (!ctx.cr6.eq) goto loc_83018F78;
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_83018F78:
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// lis r28,-31969
	ctx.r28.s64 = -2095120384;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bne cr6,0x83018fb4
	if (!ctx.cr6.eq) goto loc_83018FB4;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// b 0x83019004
	goto loc_83019004;
loc_83018FB4:
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019000
	if (ctx.cr6.eq) goto loc_83019000;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11272);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fd6b98
	ctx.lr = 0x83018FD0;
	sub_82FD6B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x83018fec
	if (!ctx.cr6.eq) goto loc_83018FEC;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_83018FEC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x83018FFC;
	sub_82FA77C0(ctx, base);
	// b 0x83019008
	goto loc_83019008;
loc_83019000:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_83019004:
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_83019008:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,15184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// bl 0x8302c350
	ctx.lr = 0x8301902C;
	sub_8302C350(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8301904c
	if (ctx.cr6.eq) goto loc_8301904C;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x8301904c
	if (ctx.cr6.eq) goto loc_8301904C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11272(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x8301904C;
	sub_82FD6CC8(ctx, base);
loc_8301904C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019058"))) PPC_WEAK_FUNC(sub_83019058);
PPC_FUNC_IMPL(__imp__sub_83019058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83019060;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x83019150
	if (ctx.cr6.eq) goto loc_83019150;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x83019150
	if (ctx.cr6.eq) goto loc_83019150;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r4,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r4.u32);
	// lis r27,-31969
	ctx.r27.s64 = -2095120384;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// stb r5,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r5.u8);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bne cr6,0x830190b8
	if (!ctx.cr6.eq) goto loc_830190B8;
	// lwz r30,0(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// b 0x83019104
	goto loc_83019104;
loc_830190B8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x83019100
	if (ctx.cr6.eq) goto loc_83019100;
	// rlwinm r29,r31,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,-11272(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fd6b98
	ctx.lr = 0x830190D4;
	sub_82FD6B98(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x830190ec
	if (!ctx.cr6.eq) goto loc_830190EC;
	// li r3,52
	ctx.r3.s64 = 52;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_830190EC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x830190FC;
	sub_82FA77C0(ctx, base);
	// b 0x83019104
	goto loc_83019104;
loc_83019100:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_83019104:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// rldicr r8,r30,32,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u64, 32) & 0xFFFFFFFF00000000;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lwz r3,15184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// bl 0x8302c350
	ctx.lr = 0x83019124;
	sub_8302C350(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x83019144
	if (ctx.cr6.eq) goto loc_83019144;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// beq cr6,0x83019144
	if (ctx.cr6.eq) goto loc_83019144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,-11272(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// bl 0x82fd6cc8
	ctx.lr = 0x83019144;
	sub_82FD6CC8(ctx, base);
loc_83019144:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_83019150:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301915C"))) PPC_WEAK_FUNC(sub_8301915C);
PPC_FUNC_IMPL(__imp__sub_8301915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019160"))) PPC_WEAK_FUNC(sub_83019160);
PPC_FUNC_IMPL(__imp__sub_83019160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_8301916C:
	// lhz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x83019188
	if (ctx.cr6.eq) goto loc_83019188;
	// lhzu r11,2(r3)
	ea = 2 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301916c
	if (!ctx.cr6.eq) goto loc_8301916C;
	// blr 
	return;
loc_83019188:
	// li r11,0
	ctx.r11.s64 = 0;
	// sth r11,0(r3)
	PPC_STORE_U16(ctx.r3.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019194"))) PPC_WEAK_FUNC(sub_83019194);
PPC_FUNC_IMPL(__imp__sub_83019194) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019198"))) PPC_WEAK_FUNC(sub_83019198);
PPC_FUNC_IMPL(__imp__sub_83019198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_830191A4:
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,46
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 46, ctx.xer);
	// beq cr6,0x830191c0
	if (ctx.cr6.eq) goto loc_830191C0;
	// lbzu r11,1(r3)
	ea = 1 + ctx.r3.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r3.u32 = ea;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830191a4
	if (!ctx.cr6.eq) goto loc_830191A4;
	// blr 
	return;
loc_830191C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830191CC"))) PPC_WEAK_FUNC(sub_830191CC);
PPC_FUNC_IMPL(__imp__sub_830191CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830191D0"))) PPC_WEAK_FUNC(sub_830191D0);
PPC_FUNC_IMPL(__imp__sub_830191D0) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x83019200;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019290
	if (ctx.cr6.eq) goto loc_83019290;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r8,-31998
	ctx.r8.s64 = -2097020928;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r7,r8,-28976
	ctx.r7.s64 = ctx.r8.s64 + -28976;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301926C;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x83019278;
	sub_83018E50(ctx, base);
loc_83019278:
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
loc_83019290:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x83019278
	goto loc_83019278;
}

__attribute__((alias("__imp__sub_83019298"))) PPC_WEAK_FUNC(sub_83019298);
PPC_FUNC_IMPL(__imp__sub_83019298) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830192b8
	if (!ctx.cr6.eq) goto loc_830192B8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830192b8
	if (ctx.cr6.eq) goto loc_830192B8;
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgelr cr6
	if (!ctx.cr6.lt) return;
loc_830192B8:
	// li r3,31
	ctx.r3.s64 = 31;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830192C0"))) PPC_WEAK_FUNC(sub_830192C0);
PPC_FUNC_IMPL(__imp__sub_830192C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x830192C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830192f4
	if (!ctx.cr6.eq) goto loc_830192F4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830192f4
	if (ctx.cr6.eq) goto loc_830192F4;
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bge cr6,0x83019300
	if (!ctx.cr6.lt) goto loc_83019300;
loc_830192F4:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83019300:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302b0c8
	ctx.lr = 0x8301930C;
	sub_8302B0C8(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018de8
	ctx.lr = 0x83019318;
	sub_83018DE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301938c
	if (!ctx.cr6.eq) goto loc_8301938C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r9,-31998
	ctx.r9.s64 = -2097020928;
	// lwz r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// addi r5,r9,-28976
	ctx.r5.s64 = ctx.r9.s64 + -28976;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// lwz r3,15184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// rldicr r8,r8,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x83019380;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x8301938C;
	sub_83018E50(ctx, base);
loc_8301938C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019394"))) PPC_WEAK_FUNC(sub_83019394);
PPC_FUNC_IMPL(__imp__sub_83019394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019398"))) PPC_WEAK_FUNC(sub_83019398);
PPC_FUNC_IMPL(__imp__sub_83019398) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
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
	ctx.lr = 0x830193F0;
	sub_8302C350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019400"))) PPC_WEAK_FUNC(sub_83019400);
PPC_FUNC_IMPL(__imp__sub_83019400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83019408;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,21
	ctx.r11.u64 = ctx.r3.u32 & 0x7FF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301943c
	if (!ctx.cr6.eq) goto loc_8301943C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301943c
	if (ctx.cr6.eq) goto loc_8301943C;
	// cmplwi cr6,r4,24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 24, ctx.xer);
	// bge cr6,0x83019448
	if (!ctx.cr6.lt) goto loc_83019448;
loc_8301943C:
	// li r3,31
	ctx.r3.s64 = 31;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_83019448:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8302b0c8
	ctx.lr = 0x83019454;
	sub_8302B0C8(ctx, base);
	// stw r3,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r3.u32);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lwz r3,15184(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15184);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x8302c350
	ctx.lr = 0x830194A8;
	sub_8302C350(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830194B0"))) PPC_WEAK_FUNC(sub_830194B0);
PPC_FUNC_IMPL(__imp__sub_830194B0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x830194E0;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019584
	if (ctx.cr6.eq) goto loc_83019584;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r8,-31998
	ctx.r8.s64 = -2097020928;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r8,-28976
	ctx.r5.s64 = ctx.r8.s64 + -28976;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r6,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r6.u32);
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
	ctx.lr = 0x83019550;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x8301955C;
	sub_83018E50(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301956c
	if (ctx.cr6.eq) goto loc_8301956C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8301956C:
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
loc_83019584:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8301956c
	goto loc_8301956C;
}

__attribute__((alias("__imp__sub_8301958C"))) PPC_WEAK_FUNC(sub_8301958C);
PPC_FUNC_IMPL(__imp__sub_8301958C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019590"))) PPC_WEAK_FUNC(sub_83019590);
PPC_FUNC_IMPL(__imp__sub_83019590) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
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
	ctx.lr = 0x830195EC;
	sub_8302C350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830195FC"))) PPC_WEAK_FUNC(sub_830195FC);
PPC_FUNC_IMPL(__imp__sub_830195FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019600"))) PPC_WEAK_FUNC(sub_83019600);
PPC_FUNC_IMPL(__imp__sub_83019600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r11,1188
	ctx.r3.s64 = ctx.r11.s64 + 1188;
	// b 0x83040ad8
	sub_83040AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301961C"))) PPC_WEAK_FUNC(sub_8301961C);
PPC_FUNC_IMPL(__imp__sub_8301961C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019620"))) PPC_WEAK_FUNC(sub_83019620);
PPC_FUNC_IMPL(__imp__sub_83019620) {
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
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// rldicr r8,r9,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// addi r4,r11,6
	ctx.r4.s64 = ctx.r11.s64 + 6;
	// lwz r3,15184(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15184);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x8302c350
	ctx.lr = 0x8301967C;
	sub_8302C350(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301968C"))) PPC_WEAK_FUNC(sub_8301968C);
PPC_FUNC_IMPL(__imp__sub_8301968C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019690"))) PPC_WEAK_FUNC(sub_83019690);
PPC_FUNC_IMPL(__imp__sub_83019690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x83019698;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x830196BC;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019704
	if (ctx.cr6.eq) goto loc_83019704;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-28976
	ctx.r4.s64 = ctx.r11.s64 + -28976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83018f50
	ctx.lr = 0x830196F0;
	sub_83018F50(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x830196FC;
	sub_83018E50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_83019704:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019710"))) PPC_WEAK_FUNC(sub_83019710);
PPC_FUNC_IMPL(__imp__sub_83019710) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x83018f50
	sub_83018F50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019730"))) PPC_WEAK_FUNC(sub_83019730);
PPC_FUNC_IMPL(__imp__sub_83019730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x83019750;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830197c8
	if (ctx.cr6.eq) goto loc_830197C8;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r9,-31998
	ctx.r9.s64 = -2097020928;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r8,5
	ctx.r8.s64 = 5;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// addi r4,r9,-28976
	ctx.r4.s64 = ctx.r9.s64 + -28976;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// lwz r3,15184(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15184);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x830197AC;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x830197B8;
	sub_83018E50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_830197C8:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830197DC"))) PPC_WEAK_FUNC(sub_830197DC);
PPC_FUNC_IMPL(__imp__sub_830197DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830197E0"))) PPC_WEAK_FUNC(sub_830197E0);
PPC_FUNC_IMPL(__imp__sub_830197E0) {
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
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// rlwinm r5,r3,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83019058
	ctx.lr = 0x83019820;
	sub_83019058(ctx, base);
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

__attribute__((alias("__imp__sub_83019834"))) PPC_WEAK_FUNC(sub_83019834);
PPC_FUNC_IMPL(__imp__sub_83019834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019838"))) PPC_WEAK_FUNC(sub_83019838);
PPC_FUNC_IMPL(__imp__sub_83019838) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83019840;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
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
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82a77608
	ctx.lr = 0x8301986C;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x830198c0
	if (ctx.cr6.eq) goto loc_830198C0;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lis r3,-31998
	ctx.r3.s64 = -2097020928;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,-28976
	ctx.r3.s64 = ctx.r3.s64 + -28976;
	// bl 0x83019058
	ctx.lr = 0x830198AC;
	sub_83019058(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x830198B8;
	sub_83018E50(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_830198C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830198CC"))) PPC_WEAK_FUNC(sub_830198CC);
PPC_FUNC_IMPL(__imp__sub_830198CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830198D0"))) PPC_WEAK_FUNC(sub_830198D0);
PPC_FUNC_IMPL(__imp__sub_830198D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,15248(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15248, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830198DC"))) PPC_WEAK_FUNC(sub_830198DC);
PPC_FUNC_IMPL(__imp__sub_830198DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830198E0"))) PPC_WEAK_FUNC(sub_830198E0);
PPC_FUNC_IMPL(__imp__sub_830198E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,15252(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15252, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830198EC"))) PPC_WEAK_FUNC(sub_830198EC);
PPC_FUNC_IMPL(__imp__sub_830198EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830198F0"))) PPC_WEAK_FUNC(sub_830198F0);
PPC_FUNC_IMPL(__imp__sub_830198F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,15256(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15256, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830198FC"))) PPC_WEAK_FUNC(sub_830198FC);
PPC_FUNC_IMPL(__imp__sub_830198FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019900"))) PPC_WEAK_FUNC(sub_83019900);
PPC_FUNC_IMPL(__imp__sub_83019900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,15264(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15264, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301990C"))) PPC_WEAK_FUNC(sub_8301990C);
PPC_FUNC_IMPL(__imp__sub_8301990C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019910"))) PPC_WEAK_FUNC(sub_83019910);
PPC_FUNC_IMPL(__imp__sub_83019910) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,15260(r11)
	PPC_STORE_U32(ctx.r11.u32 + 15260, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301991C"))) PPC_WEAK_FUNC(sub_8301991C);
PPC_FUNC_IMPL(__imp__sub_8301991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019920"))) PPC_WEAK_FUNC(sub_83019920);
PPC_FUNC_IMPL(__imp__sub_83019920) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r11,15200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301993c
	if (!ctx.cr6.eq) goto loc_8301993C;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_8301993C:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83047378
	sub_83047378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019954"))) PPC_WEAK_FUNC(sub_83019954);
PPC_FUNC_IMPL(__imp__sub_83019954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019958"))) PPC_WEAK_FUNC(sub_83019958);
PPC_FUNC_IMPL(__imp__sub_83019958) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lwz r11,15200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019974
	if (!ctx.cr6.eq) goto loc_83019974;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_83019974:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83046f10
	sub_83046F10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019988"))) PPC_WEAK_FUNC(sub_83019988);
PPC_FUNC_IMPL(__imp__sub_83019988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,15200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x830199a4
	if (!ctx.cr6.eq) goto loc_830199A4;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_830199A4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x83046f70
	sub_83046F70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_830199AC"))) PPC_WEAK_FUNC(sub_830199AC);
PPC_FUNC_IMPL(__imp__sub_830199AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_830199B0"))) PPC_WEAK_FUNC(sub_830199B0);
PPC_FUNC_IMPL(__imp__sub_830199B0) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830199B8"))) PPC_WEAK_FUNC(sub_830199B8);
PPC_FUNC_IMPL(__imp__sub_830199B8) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_830199C0"))) PPC_WEAK_FUNC(sub_830199C0);
PPC_FUNC_IMPL(__imp__sub_830199C0) {
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
	// lwz r11,-11272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11272);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x83019a28
	if (!ctx.cr6.eq) goto loc_83019A28;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,15212
	ctx.r10.s64 = ctx.r11.s64 + 15212;
	// lwz r4,12(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmplwi cr6,r4,64
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 64, ctx.xer);
	// bgt cr6,0x830199f8
	if (ctx.cr6.gt) goto loc_830199F8;
	// lis r4,256
	ctx.r4.s64 = 16777216;
loc_830199F8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fd7070
	ctx.lr = 0x83019A0C;
	sub_82FD7070(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// stw r3,-11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11272, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r10,r11,-11132
	ctx.r10.s64 = ctx.r11.s64 + -11132;
	// stw r3,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r3.u32);
	// li r3,52
	ctx.r3.s64 = 52;
	// beq cr6,0x83019a2c
	if (ctx.cr6.eq) goto loc_83019A2C;
loc_83019A28:
	// li r3,1
	ctx.r3.s64 = 1;
loc_83019A2C:
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

__attribute__((alias("__imp__sub_83019A40"))) PPC_WEAK_FUNC(sub_83019A40);
PPC_FUNC_IMPL(__imp__sub_83019A40) {
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
	// lwz r3,-11272(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -11272);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x83019a6c
	if (ctx.cr6.eq) goto loc_83019A6C;
	// bl 0x82fd7328
	ctx.lr = 0x83019A64;
	sub_82FD7328(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + -11272, ctx.r11.u32);
loc_83019A6C:
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

__attribute__((alias("__imp__sub_83019A80"))) PPC_WEAK_FUNC(sub_83019A80);
PPC_FUNC_IMPL(__imp__sub_83019A80) {
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
	// bl 0x830246e8
	ctx.lr = 0x83019A94;
	sub_830246E8(ctx, base);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15172);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x83019b08
	if (!ctx.cr6.eq) goto loc_83019B08;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83019b08
	if (!ctx.cr6.eq) goto loc_83019B08;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,180
	ctx.r4.s64 = 180;
	// lwz r3,-11272(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11272);
	// bl 0x82fd6b98
	ctx.lr = 0x83019ABC;
	sub_82FD6B98(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019afc
	if (ctx.cr6.eq) goto loc_83019AFC;
	// bl 0x83041650
	ctx.lr = 0x83019AC8;
	sub_83041650(ctx, base);
	// stw r3,15172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15172, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019b04
	if (ctx.cr6.eq) goto loc_83019B04;
	// bl 0x83041148
	ctx.lr = 0x83019AD8;
	sub_83041148(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x83019b08
	if (!ctx.cr6.eq) goto loc_83019B08;
	// lwz r3,15172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15172);
	// bl 0x83040ff0
	ctx.lr = 0x83019AE8;
	sub_83040FF0(ctx, base);
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
loc_83019AFC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15172, ctx.r11.u32);
loc_83019B04:
	// li r3,52
	ctx.r3.s64 = 52;
loc_83019B08:
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

__attribute__((alias("__imp__sub_83019B1C"))) PPC_WEAK_FUNC(sub_83019B1C);
PPC_FUNC_IMPL(__imp__sub_83019B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019B20"))) PPC_WEAK_FUNC(sub_83019B20);
PPC_FUNC_IMPL(__imp__sub_83019B20) {
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
	// li r11,25
	ctx.r11.s64 = 25;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d48
	ctx.lr = 0x83019B48;
	sub_83040D48(ctx, base);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83019B5C;
	sub_83040DA0(ctx, base);
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x83019b6c
	if (!ctx.cr6.eq) goto loc_83019B6C;
	// lwz r3,15172(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15172);
	// bl 0x83044e38
	ctx.lr = 0x83019B6C;
	sub_83044E38(ctx, base);
loc_83019B6C:
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

__attribute__((alias("__imp__sub_83019B84"))) PPC_WEAK_FUNC(sub_83019B84);
PPC_FUNC_IMPL(__imp__sub_83019B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019B88"))) PPC_WEAK_FUNC(sub_83019B88);
PPC_FUNC_IMPL(__imp__sub_83019B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,30
	ctx.r11.s64 = 30;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d70
	ctx.lr = 0x83019BA4;
	sub_83040D70(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83019BB8;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019BC8"))) PPC_WEAK_FUNC(sub_83019BC8);
PPC_FUNC_IMPL(__imp__sub_83019BC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,28
	ctx.r9.s64 = 28;
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// sth r4,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// sth r9,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r9.u16);
	// stb r8,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r8.u8);
	// bl 0x83040d68
	ctx.lr = 0x83019BF8;
	sub_83040D68(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83019C0C;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019C1C"))) PPC_WEAK_FUNC(sub_83019C1C);
PPC_FUNC_IMPL(__imp__sub_83019C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019C20"))) PPC_WEAK_FUNC(sub_83019C20);
PPC_FUNC_IMPL(__imp__sub_83019C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// li r8,28
	ctx.r8.s64 = 28;
	// sth r4,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r4.u16);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// sth r5,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r5.u16);
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// stb r11,96(r1)
	PPC_STORE_U8(ctx.r1.u32 + 96, ctx.r11.u8);
	// bl 0x83040d68
	ctx.lr = 0x83019C50;
	sub_83040D68(ctx, base);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83019C64;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019C74"))) PPC_WEAK_FUNC(sub_83019C74);
PPC_FUNC_IMPL(__imp__sub_83019C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019C78"))) PPC_WEAK_FUNC(sub_83019C78);
PPC_FUNC_IMPL(__imp__sub_83019C78) {
	PPC_FUNC_PROLOGUE();
	// b 0x83045620
	sub_83045620(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83019C7C"))) PPC_WEAK_FUNC(sub_83019C7C);
PPC_FUNC_IMPL(__imp__sub_83019C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019C80"))) PPC_WEAK_FUNC(sub_83019C80);
PPC_FUNC_IMPL(__imp__sub_83019C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,27
	ctx.r11.s64 = 27;
	// stb r3,84(r1)
	PPC_STORE_U8(ctx.r1.u32 + 84, ctx.r3.u8);
	// stb r4,85(r1)
	PPC_STORE_U8(ctx.r1.u32 + 85, ctx.r4.u8);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040d58
	ctx.lr = 0x83019CA0;
	sub_83040D58(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83019CB4;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019CC4"))) PPC_WEAK_FUNC(sub_83019CC4);
PPC_FUNC_IMPL(__imp__sub_83019CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83019CC8"))) PPC_WEAK_FUNC(sub_83019CC8);
PPC_FUNC_IMPL(__imp__sub_83019CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r9,29
	ctx.r9.s64 = 29;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// sth r9,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r9.u16);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// bl 0x83040d60
	ctx.lr = 0x83019CF4;
	sub_83040D60(ctx, base);
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x83019D08;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D18"))) PPC_WEAK_FUNC(sub_83019D18);
PPC_FUNC_IMPL(__imp__sub_83019D18) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D20"))) PPC_WEAK_FUNC(sub_83019D20);
PPC_FUNC_IMPL(__imp__sub_83019D20) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D28"))) PPC_WEAK_FUNC(sub_83019D28);
PPC_FUNC_IMPL(__imp__sub_83019D28) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D30"))) PPC_WEAK_FUNC(sub_83019D30);
PPC_FUNC_IMPL(__imp__sub_83019D30) {
	PPC_FUNC_PROLOGUE();
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D38"))) PPC_WEAK_FUNC(sub_83019D38);
PPC_FUNC_IMPL(__imp__sub_83019D38) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83019D40"))) PPC_WEAK_FUNC(sub_83019D40);
PPC_FUNC_IMPL(__imp__sub_83019D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x83019D48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,15920(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15920);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019d60
	if (ctx.cr6.eq) goto loc_83019D60;
	// bl 0x8303f520
	ctx.lr = 0x83019D60;
	sub_8303F520(ctx, base);
loc_83019D60:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019d74
	if (ctx.cr6.eq) goto loc_83019D74;
	// bl 0x83041058
	ctx.lr = 0x83019D74;
	sub_83041058(ctx, base);
loc_83019D74:
	// lis r28,-31958
	ctx.r28.s64 = -2094399488;
	// lwz r3,15184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019d88
	if (ctx.cr6.eq) goto loc_83019D88;
	// bl 0x8302ae70
	ctx.lr = 0x83019D88;
	sub_8302AE70(ctx, base);
loc_83019D88:
	// bl 0x830255c8
	ctx.lr = 0x83019D8C;
	sub_830255C8(ctx, base);
	// lwz r3,15172(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15172);
	// lis r27,-31969
	ctx.r27.s64 = -2095120384;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019ddc
	if (ctx.cr6.eq) goto loc_83019DDC;
	// bl 0x83042708
	ctx.lr = 0x83019DA0;
	sub_83042708(ctx, base);
	// lwz r31,15172(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15172);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019dd4
	if (ctx.cr6.eq) goto loc_83019DD4;
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
	ctx.lr = 0x83019DC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019DD4;
	sub_82FD6CC8(ctx, base);
loc_83019DD4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15172(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15172, ctx.r11.u32);
loc_83019DDC:
	// lwz r3,15184(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019e28
	if (ctx.cr6.eq) goto loc_83019E28;
	// bl 0x8302f150
	ctx.lr = 0x83019DEC;
	sub_8302F150(ctx, base);
	// lwz r31,15184(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 15184);
	// lwz r30,-11272(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019e20
	if (ctx.cr6.eq) goto loc_83019E20;
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
	ctx.lr = 0x83019E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019E20;
	sub_82FD6CC8(ctx, base);
loc_83019E20:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15184(r28)
	PPC_STORE_U32(ctx.r28.u32 + 15184, ctx.r11.u32);
loc_83019E28:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15176(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019e78
	if (ctx.cr6.eq) goto loc_83019E78;
	// bl 0x83029930
	ctx.lr = 0x83019E3C;
	sub_83029930(ctx, base);
	// lwz r31,15176(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15176);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019e70
	if (ctx.cr6.eq) goto loc_83019E70;
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
	ctx.lr = 0x83019E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019E70;
	sub_82FD6CC8(ctx, base);
loc_83019E70:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15176, ctx.r11.u32);
loc_83019E78:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019ec8
	if (ctx.cr6.eq) goto loc_83019EC8;
	// bl 0x8304d0e0
	ctx.lr = 0x83019E8C;
	sub_8304D0E0(ctx, base);
	// lwz r31,15192(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15192);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019ec0
	if (ctx.cr6.eq) goto loc_83019EC0;
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
	ctx.lr = 0x83019EB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019EC0;
	sub_82FD6CC8(ctx, base);
loc_83019EC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15192, ctx.r11.u32);
loc_83019EC8:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019f18
	if (ctx.cr6.eq) goto loc_83019F18;
	// bl 0x830277d8
	ctx.lr = 0x83019EDC;
	sub_830277D8(ctx, base);
	// lwz r31,15188(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15188);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019f10
	if (ctx.cr6.eq) goto loc_83019F10;
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
	ctx.lr = 0x83019F04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019F10;
	sub_82FD6CC8(ctx, base);
loc_83019F10:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15188, ctx.r11.u32);
loc_83019F18:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15180(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019f68
	if (ctx.cr6.eq) goto loc_83019F68;
	// bl 0x8304cbf8
	ctx.lr = 0x83019F2C;
	sub_8304CBF8(ctx, base);
	// lwz r31,15180(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15180);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019f60
	if (ctx.cr6.eq) goto loc_83019F60;
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
	ctx.lr = 0x83019F54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019F60;
	sub_82FD6CC8(ctx, base);
loc_83019F60:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15180, ctx.r11.u32);
loc_83019F68:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x83019fb8
	if (ctx.cr6.eq) goto loc_83019FB8;
	// bl 0x83026680
	ctx.lr = 0x83019F7C;
	sub_83026680(ctx, base);
	// lwz r31,15204(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15204);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x83019fb0
	if (ctx.cr6.eq) goto loc_83019FB0;
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
	ctx.lr = 0x83019FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x83019FB0;
	sub_82FD6CC8(ctx, base);
loc_83019FB0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15204, ctx.r11.u32);
loc_83019FB8:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15208);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a008
	if (ctx.cr6.eq) goto loc_8301A008;
	// bl 0x83045948
	ctx.lr = 0x83019FCC;
	sub_83045948(ctx, base);
	// lwz r31,15208(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15208);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a000
	if (ctx.cr6.eq) goto loc_8301A000;
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
	ctx.lr = 0x83019FF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301A000;
	sub_82FD6CC8(ctx, base);
loc_8301A000:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15208, ctx.r11.u32);
loc_8301A008:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15200);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a058
	if (ctx.cr6.eq) goto loc_8301A058;
	// bl 0x83046d98
	ctx.lr = 0x8301A01C;
	sub_83046D98(ctx, base);
	// lwz r31,15200(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15200);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a050
	if (ctx.cr6.eq) goto loc_8301A050;
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
	ctx.lr = 0x8301A044;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301A050;
	sub_82FD6CC8(ctx, base);
loc_8301A050:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15200, ctx.r11.u32);
loc_8301A058:
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r3,15196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a0a8
	if (ctx.cr6.eq) goto loc_8301A0A8;
	// bl 0x8304a5a0
	ctx.lr = 0x8301A06C;
	sub_8304A5A0(ctx, base);
	// lwz r31,15196(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15196);
	// lwz r29,-11272(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a0a0
	if (ctx.cr6.eq) goto loc_8301A0A0;
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
	ctx.lr = 0x8301A094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301A0A0;
	sub_82FD6CC8(ctx, base);
loc_8301A0A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15196, ctx.r11.u32);
loc_8301A0A8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r3,r11,15304
	ctx.r3.s64 = ctx.r11.s64 + 15304;
	// bl 0x830481f0
	ctx.lr = 0x8301A0B4;
	sub_830481F0(ctx, base);
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// lwz r3,15168(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a10c
	if (ctx.cr6.eq) goto loc_8301A10C;
	// bl 0x83047d78
	ctx.lr = 0x8301A0C8;
	sub_83047D78(ctx, base);
	// lwz r31,15168(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15168);
	// lwz r30,-11272(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a100
	if (ctx.cr6.eq) goto loc_8301A100;
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
	ctx.lr = 0x8301A0F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd6cc8
	ctx.lr = 0x8301A0FC;
	sub_82FD6CC8(ctx, base);
	// lwz r30,-11272(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
loc_8301A100:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,15168(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15168, ctx.r11.u32);
	// b 0x8301a110
	goto loc_8301A110;
loc_8301A10C:
	// lwz r30,-11272(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + -11272);
loc_8301A110:
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x8301a13c
	if (ctx.cr6.eq) goto loc_8301A13C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fd7328
	ctx.lr = 0x8301A120;
	sub_82FD7328(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-11272(r27)
	PPC_STORE_U32(ctx.r27.u32 + -11272, ctx.r11.u32);
	// stb r10,15268(r9)
	PPC_STORE_U8(ctx.r9.u32 + 15268, ctx.r10.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8301A13C:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,15268(r10)
	PPC_STORE_U8(ctx.r10.u32 + 15268, ctx.r11.u8);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A150"))) PPC_WEAK_FUNC(sub_8301A150);
PPC_FUNC_IMPL(__imp__sub_8301A150) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a184
	if (!ctx.cr6.eq) goto loc_8301A184;
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
loc_8301A184:
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r5,24
	ctx.r5.s64 = 24;
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x8301A19C;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x83040cc0
	ctx.lr = 0x8301A1A4;
	sub_83040CC0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A1B8;
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

__attribute__((alias("__imp__sub_8301A1CC"))) PPC_WEAK_FUNC(sub_8301A1CC);
PPC_FUNC_IMPL(__imp__sub_8301A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A1D0"))) PPC_WEAK_FUNC(sub_8301A1D0);
PPC_FUNC_IMPL(__imp__sub_8301A1D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,11427
	ctx.r10.s64 = 748879872;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r9,r10,15323
	ctx.r9.u64 = ctx.r10.u64 | 15323;
	// stb r11,92(r1)
	PPC_STORE_U8(ctx.r1.u32 + 92, ctx.r11.u8);
	// li r8,3
	ctx.r8.s64 = 3;
	// subf r7,r4,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r4.s64;
	// stb r11,93(r1)
	PPC_STORE_U8(ctx.r1.u32 + 93, ctx.r11.u8);
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r3,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 & ctx.r4.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x83040c98
	ctx.lr = 0x8301A214;
	sub_83040C98(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A228;
	sub_83040DA0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A238"))) PPC_WEAK_FUNC(sub_8301A238);
PPC_FUNC_IMPL(__imp__sub_8301A238) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stfs f1,164(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lfs f0,-11868(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -11868);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x8301a338
	if (ctx.cr6.lt) goto loc_8301A338;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x8301a338
	if (ctx.cr6.gt) goto loc_8301A338;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r10,-11268(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -11268);
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x8301a330
	if (ctx.cr6.gt) goto loc_8301A330;
	// stw r4,-11268(r11)
	PPC_STORE_U32(ctx.r11.u32 + -11268, ctx.r4.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f0,-27108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27108);
	ctx.f0.f64 = double(temp.f32);
	// lfd f1,22080(r10)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22080);
	// fmuls f2,f31,f0
	ctx.f2.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// bl 0x82fa30a8
	ctx.lr = 0x8301A2A0;
	sub_82FA30A8(ctx, base);
	// frsp f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = double(float(ctx.f1.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8304ff60
	ctx.lr = 0x8301A2AC;
	sub_8304FF60(ctx, base);
	// addi r8,r1,164
	ctx.r8.s64 = ctx.r1.s64 + 164;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r9,r11,15344
	ctx.r9.s64 = ctx.r11.s64 + 15344;
	// lvlx128 v63,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,15360(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15360);
	// vspltw128 v62,v63,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// clrlwi r6,r11,31
	ctx.r6.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// stvx128 v62,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x8301a2f8
	if (!ctx.cr6.eq) goto loc_8301A2F8;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r7,r8,-14848
	ctx.r7.s64 = ctx.r8.s64 + -14848;
	// stw r11,15360(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15360, ctx.r11.u32);
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8301a2fc
	goto loc_8301A2FC;
loc_8301A2F8:
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_8301A2FC:
	// vmulfp128 v62,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// fsubs f0,f30,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f30.f64 - ctx.f1.f64));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// stfs f31,-11112(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + -11112, temp.u32);
	// fsel f13,f0,f30,f1
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f30.f64 : ctx.f1.f64;
	// vexptefp128 v61,v62
	ctx.fpscr.enableFlushModeUnconditional();
	ctx.v61.f32[0] = exp2f(ctx.v62.f32[0]);
	ctx.v61.f32[1] = exp2f(ctx.v62.f32[1]);
	ctx.v61.f32[2] = exp2f(ctx.v62.f32[2]);
	ctx.v61.f32[3] = exp2f(ctx.v62.f32[3]);
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,-11116(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + -11116, temp.u32);
loc_8301A330:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8301a33c
	goto loc_8301A33C;
loc_8301A338:
	// li r3,31
	ctx.r3.s64 = 31;
loc_8301A33C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A354"))) PPC_WEAK_FUNC(sub_8301A354);
PPC_FUNC_IMPL(__imp__sub_8301A354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A358"))) PPC_WEAK_FUNC(sub_8301A358);
PPC_FUNC_IMPL(__imp__sub_8301A358) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,15184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8301a390
	if (!ctx.cr6.eq) goto loc_8301A390;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
loc_8301A390:
	// bl 0x83019730
	ctx.lr = 0x8301A394;
	sub_83019730(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301a3fc
	if (!ctx.cr6.eq) goto loc_8301A3FC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018de8
	ctx.lr = 0x8301A3A4;
	sub_83018DE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x8301a3fc
	if (!ctx.cr6.eq) goto loc_8301A3FC;
	// lis r11,-31998
	ctx.r11.s64 = -2097020928;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r9,8
	ctx.r9.s64 = 8;
	// lwz r3,15184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15184);
	// addi r8,r11,-28976
	ctx.r8.s64 = ctx.r11.s64 + -28976;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301A3F0;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x8301A3FC;
	sub_83018E50(ctx, base);
loc_8301A3FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8301A410"))) PPC_WEAK_FUNC(sub_8301A410);
PPC_FUNC_IMPL(__imp__sub_8301A410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301A418;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x8301A43C;
	sub_82A77608(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a4c0
	if (ctx.cr6.eq) goto loc_8301A4C0;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lis r5,-31998
	ctx.r5.s64 = -2097020928;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// rlwinm r8,r11,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// xori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 ^ 1;
	// lwz r3,15184(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15184);
	// addi r9,r5,-28976
	ctx.r9.s64 = ctx.r5.s64 + -28976;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// rldicr r8,r10,32,63
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// bl 0x8302c350
	ctx.lr = 0x8301A4AC;
	sub_8302C350(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83018e50
	ctx.lr = 0x8301A4B8;
	sub_83018E50(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301A4C0:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A4CC"))) PPC_WEAK_FUNC(sub_8301A4CC);
PPC_FUNC_IMPL(__imp__sub_8301A4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A4D0"))) PPC_WEAK_FUNC(sub_8301A4D0);
PPC_FUNC_IMPL(__imp__sub_8301A4D0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,15364(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15364);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8301a50c
	if (!ctx.cr6.eq) goto loc_8301A50C;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lis r9,-31976
	ctx.r9.s64 = -2095579136;
	// stw r11,15364(r10)
	PPC_STORE_U32(ctx.r10.u32 + 15364, ctx.r11.u32);
	// addi r3,r9,-30376
	ctx.r3.s64 = ctx.r9.s64 + -30376;
	// bl 0x82fa2318
	ctx.lr = 0x8301A50C;
	sub_82FA2318(ctx, base);
loc_8301A50C:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8301A510:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301a510
	if (!ctx.cr6.eq) goto loc_8301A510;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// lis r3,-32484
	ctx.r3.s64 = -2128871424;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,40389
	ctx.r3.u64 = ctx.r3.u64 | 40389;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x8301a564
	if (!ctx.cr6.lt) goto loc_8301A564;
	// subf r10,r31,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r31.s64;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// ori r9,r10,403
	ctx.r9.u64 = ctx.r10.u64 | 403;
loc_8301A554:
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// xor r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// bdnz 0x8301a554
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8301A554;
loc_8301A564:
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

__attribute__((alias("__imp__sub_8301A578"))) PPC_WEAK_FUNC(sub_8301A578);
PPC_FUNC_IMPL(__imp__sub_8301A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8301A580;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a59c
	if (!ctx.cr6.eq) goto loc_8301A59C;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8301A59C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x8301A5A4;
	sub_82FA3BB8(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301A5B8;
	sub_82FACED4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa3bb8
	ctx.lr = 0x8301A5CC;
	sub_82FA3BB8(ctx, base);
	// addi r8,r3,1
	ctx.r8.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x8301a5e8
	if (!ctx.cr6.lt) goto loc_8301A5E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x8301A5E0;
	sub_82FA3BB8(ctx, base);
	// addi r6,r3,1
	ctx.r6.s64 = ctx.r3.s64 + 1;
	// b 0x8301a5ec
	goto loc_8301A5EC;
loc_8301A5E8:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_8301A5EC:
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x8301A60C;
	sub_82A831C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stbx r11,r29,r30
	PPC_STORE_U8(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u8);
	// bl 0x83018170
	ctx.lr = 0x8301A61C;
	sub_83018170(ctx, base);
	// bl 0x8301a4d0
	ctx.lr = 0x8301A620;
	sub_8301A4D0(ctx, base);
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A628"))) PPC_WEAK_FUNC(sub_8301A628);
PPC_FUNC_IMPL(__imp__sub_8301A628) {
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
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a69c
	if (ctx.cr6.eq) goto loc_8301A69C;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
loc_8301A650:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8301a650
	if (!ctx.cr6.eq) goto loc_8301A650;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// neg r10,r4
	ctx.r10.s64 = -ctx.r4.s64;
	// rlwinm r12,r10,0,0,27
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82faced4
	ctx.lr = 0x8301A67C;
	sub_82FACED4(ctx, base);
	// lwz r9,0(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// stwux r9,r1,r12
	ea = ctx.r1.u32 + ctx.r12.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r1.u32 = ea;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa5590
	ctx.lr = 0x8301A690;
	sub_82FA5590(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83018170
	ctx.lr = 0x8301A698;
	sub_83018170(ctx, base);
	// bl 0x8301a4d0
	ctx.lr = 0x8301A69C;
	sub_8301A4D0(ctx, base);
loc_8301A69C:
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

__attribute__((alias("__imp__sub_8301A6B4"))) PPC_WEAK_FUNC(sub_8301A6B4);
PPC_FUNC_IMPL(__imp__sub_8301A6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A6B8"))) PPC_WEAK_FUNC(sub_8301A6B8);
PPC_FUNC_IMPL(__imp__sub_8301A6B8) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301A6D8;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a6e8
	if (!ctx.cr6.eq) goto loc_8301A6E8;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x8301a71c
	goto loc_8301A71C;
loc_8301A6E8:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x83040c90
	ctx.lr = 0x8301A708;
	sub_83040C90(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A71C;
	sub_83040DA0(ctx, base);
loc_8301A71C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8301A734"))) PPC_WEAK_FUNC(sub_8301A734);
PPC_FUNC_IMPL(__imp__sub_8301A734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A738"))) PPC_WEAK_FUNC(sub_8301A738);
PPC_FUNC_IMPL(__imp__sub_8301A738) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301A758;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8301a768
	if (!ctx.cr6.eq) goto loc_8301A768;
	// li r3,15
	ctx.r3.s64 = 15;
	// b 0x8301a79c
	goto loc_8301A79C;
loc_8301A768:
	// li r11,2
	ctx.r11.s64 = 2;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// sth r11,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r11.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// bl 0x83040c90
	ctx.lr = 0x8301A788;
	sub_83040C90(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,15172(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A79C;
	sub_83040DA0(ctx, base);
loc_8301A79C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8301A7B4"))) PPC_WEAK_FUNC(sub_8301A7B4);
PPC_FUNC_IMPL(__imp__sub_8301A7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A7B8"))) PPC_WEAK_FUNC(sub_8301A7B8);
PPC_FUNC_IMPL(__imp__sub_8301A7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301A7C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301A7D0;
	sub_8301A578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301A7DC;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a820
	if (ctx.cr6.eq) goto loc_8301A820;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a820
	if (ctx.cr6.eq) goto loc_8301A820;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x83040ca0
	ctx.lr = 0x8301A804;
	sub_83040CA0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A818;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301A820:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A82C"))) PPC_WEAK_FUNC(sub_8301A82C);
PPC_FUNC_IMPL(__imp__sub_8301A82C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A830"))) PPC_WEAK_FUNC(sub_8301A830);
PPC_FUNC_IMPL(__imp__sub_8301A830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8301A838;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301A848;
	sub_8301A628(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8301a628
	ctx.lr = 0x8301A854;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a898
	if (ctx.cr6.eq) goto loc_8301A898;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a898
	if (ctx.cr6.eq) goto loc_8301A898;
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// bl 0x83040ca0
	ctx.lr = 0x8301A87C;
	sub_83040CA0(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A890;
	sub_83040DA0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8301A898:
	// li r3,15
	ctx.r3.s64 = 15;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8301A8A4"))) PPC_WEAK_FUNC(sub_8301A8A4);
PPC_FUNC_IMPL(__imp__sub_8301A8A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A8A8"))) PPC_WEAK_FUNC(sub_8301A8A8);
PPC_FUNC_IMPL(__imp__sub_8301A8A8) {
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
	ctx.lr = 0x8301A8C0;
	sub_8301A578(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a904
	if (ctx.cr6.eq) goto loc_8301A904;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040ca8
	ctx.lr = 0x8301A8DC;
	sub_83040CA8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A8F0;
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
loc_8301A904:
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
}

__attribute__((alias("__imp__sub_8301A91C"))) PPC_WEAK_FUNC(sub_8301A91C);
PPC_FUNC_IMPL(__imp__sub_8301A91C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A920"))) PPC_WEAK_FUNC(sub_8301A920);
PPC_FUNC_IMPL(__imp__sub_8301A920) {
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
	ctx.lr = 0x8301A938;
	sub_8301A628(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a97c
	if (ctx.cr6.eq) goto loc_8301A97C;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// sth r11,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r11.u16);
	// bl 0x83040ca8
	ctx.lr = 0x8301A954;
	sub_83040CA8(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// clrlwi r5,r3,16
	ctx.r5.u64 = ctx.r3.u32 & 0xFFFF;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,15172(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 15172);
	// bl 0x83040da0
	ctx.lr = 0x8301A968;
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
loc_8301A97C:
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
}

__attribute__((alias("__imp__sub_8301A994"))) PPC_WEAK_FUNC(sub_8301A994);
PPC_FUNC_IMPL(__imp__sub_8301A994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8301A998"))) PPC_WEAK_FUNC(sub_8301A998);
PPC_FUNC_IMPL(__imp__sub_8301A998) {
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
	// bl 0x8301a578
	ctx.lr = 0x8301A9B4;
	sub_8301A578(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8301a578
	ctx.lr = 0x8301A9C0;
	sub_8301A578(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8301a9e0
	if (ctx.cr6.eq) goto loc_8301A9E0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8301a9e0
	if (ctx.cr6.eq) goto loc_8301A9E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8301a1d0
	ctx.lr = 0x8301A9DC;
	sub_8301A1D0(ctx, base);
	// b 0x8301a9e4
	goto loc_8301A9E4;
loc_8301A9E0:
	// li r3,15
	ctx.r3.s64 = 15;
loc_8301A9E4:
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

