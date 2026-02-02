#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82332AC0"))) PPC_WEAK_FUNC(sub_82332AC0);
PPC_FUNC_IMPL(__imp__sub_82332AC0) {
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
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
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
	ctx.lr = 0x82332B04;
	sub_82FA7CF0(ctx, base);
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r30,r11,820
	ctx.r30.s64 = ctx.r11.s64 + 820;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82563c28
	ctx.lr = 0x82332B28;
	sub_82563C28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x8232e2c0
	ctx.lr = 0x82332B38;
	sub_8232E2C0(ctx, base);
	// stfd f30,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f30.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82563c28
	ctx.lr = 0x82332B54;
	sub_82563C28(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x8232e2c0
	ctx.lr = 0x82332B64;
	sub_8232E2C0(ctx, base);
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
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

__attribute__((alias("__imp__sub_82332B84"))) PPC_WEAK_FUNC(sub_82332B84);
PPC_FUNC_IMPL(__imp__sub_82332B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332B88"))) PPC_WEAK_FUNC(sub_82332B88);
PPC_FUNC_IMPL(__imp__sub_82332B88) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82332BC0;
	sub_82FA7CF0(ctx, base);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c78
	ctx.lr = 0x82332BD4;
	sub_82332C78(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x8250e4d8
	ctx.lr = 0x82332BE4;
	sub_8250E4D8(ctx, base);
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

__attribute__((alias("__imp__sub_82332BFC"))) PPC_WEAK_FUNC(sub_82332BFC);
PPC_FUNC_IMPL(__imp__sub_82332BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332C00"))) PPC_WEAK_FUNC(sub_82332C00);
PPC_FUNC_IMPL(__imp__sub_82332C00) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82332C38;
	sub_82FA7CF0(ctx, base);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c78
	ctx.lr = 0x82332C4C;
	sub_82332C78(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x8250e4d8
	ctx.lr = 0x82332C5C;
	sub_8250E4D8(ctx, base);
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

__attribute__((alias("__imp__sub_82332C74"))) PPC_WEAK_FUNC(sub_82332C74);
PPC_FUNC_IMPL(__imp__sub_82332C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332C78"))) PPC_WEAK_FUNC(sub_82332C78);
PPC_FUNC_IMPL(__imp__sub_82332C78) {
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
	// lwz r3,1044(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1044);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82332ca8
	if (ctx.cr6.eq) goto loc_82332CA8;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// bl 0x8259c8e0
	ctx.lr = 0x82332CA4;
	sub_8259C8E0(ctx, base);
	// b 0x82332cc4
	goto loc_82332CC4;
loc_82332CA8:
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r9,-11604
	ctx.r5.s64 = ctx.r9.s64 + -11604;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82563c28
	ctx.lr = 0x82332CC0;
	sub_82563C28(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82332CC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82332CD4"))) PPC_WEAK_FUNC(sub_82332CD4);
PPC_FUNC_IMPL(__imp__sub_82332CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332CD8"))) PPC_WEAK_FUNC(sub_82332CD8);
PPC_FUNC_IMPL(__imp__sub_82332CD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82332CE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82332D14;
	sub_82FA7CF0(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82332c78
	ctx.lr = 0x82332D28;
	sub_82332C78(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x82fa4370
	ctx.lr = 0x82332D38;
	sub_82FA4370(ctx, base);
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c78
	ctx.lr = 0x82332D4C;
	sub_82332C78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa4370
	ctx.lr = 0x82332D5C;
	sub_82FA4370(ctx, base);
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82332D64"))) PPC_WEAK_FUNC(sub_82332D64);
PPC_FUNC_IMPL(__imp__sub_82332D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332D68"))) PPC_WEAK_FUNC(sub_82332D68);
PPC_FUNC_IMPL(__imp__sub_82332D68) {
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
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,126
	ctx.r5.s64 = 126;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82332DA8;
	sub_82FA7CF0(ctx, base);
	// lwz r11,1060(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1060);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82332e9c
	if (ctx.cr6.eq) goto loc_82332E9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82332df0
	if (ctx.cr6.eq) goto loc_82332DF0;
	// stfd f31,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f31.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r5,r11,820
	ctx.r5.s64 = ctx.r11.s64 + 820;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82563c28
	ctx.lr = 0x82332DDC;
	sub_82563C28(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r11,2952
	ctx.r5.s64 = ctx.r11.s64 + 2952;
	// addi r4,r10,2972
	ctx.r4.s64 = ctx.r10.s64 + 2972;
	// b 0x82332f28
	goto loc_82332F28;
loc_82332DF0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82332eac
	if (ctx.cr6.lt) goto loc_82332EAC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,19760
	ctx.r11.s64 = ctx.r11.s64 + 19760;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r4,64
	ctx.r4.s64 = 64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfs f0,-13164(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13164);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f11,f31,f0
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfd f0,248(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 248);
	// lfs f13,-23488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23488);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// fsub f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 - ctx.f0.f64;
	// fctid f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fnmsubs f2,f0,f13,f31
	ctx.f2.f64 = double(float(-(ctx.f0.f64 * ctx.f13.f64 - ctx.f31.f64)));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82332e70
	if (ctx.cr6.lt) goto loc_82332E70;
	// stfd f2,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f2.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f0,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f0.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// addi r5,r11,2876
	ctx.r5.s64 = ctx.r11.s64 + 2876;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82563c28
	ctx.lr = 0x82332E6C;
	sub_82563C28(ctx, base);
	// b 0x82332e88
	goto loc_82332E88;
loc_82332E70:
	// stfd f2,40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// addi r5,r11,2900
	ctx.r5.s64 = ctx.r11.s64 + 2900;
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82563c28
	ctx.lr = 0x82332E88;
	sub_82563C28(ctx, base);
loc_82332E88:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r11,2912
	ctx.r5.s64 = ctx.r11.s64 + 2912;
	// addi r4,r10,2932
	ctx.r4.s64 = ctx.r10.s64 + 2932;
	// b 0x82332f28
	goto loc_82332F28;
loc_82332E9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82332ec8
	if (!ctx.cr6.lt) goto loc_82332EC8;
loc_82332EAC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r4,r11,2816
	ctx.r4.s64 = ctx.r11.s64 + 2816;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c78
	ctx.lr = 0x82332EC4;
	sub_82332C78(ctx, base);
	// b 0x82332f38
	goto loc_82332F38;
loc_82332EC8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lfs f0,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// li r4,64
	ctx.r4.s64 = 64;
	// fmuls f12,f31,f0
	ctx.f12.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// addi r5,r8,-10384
	ctx.r5.s64 = ctx.r8.s64 + -10384;
	// lfs f13,19760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19760);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lfd f0,248(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 248);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fctid f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// bl 0x82563c28
	ctx.lr = 0x82332F18;
	sub_82563C28(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r11,2836
	ctx.r5.s64 = ctx.r11.s64 + 2836;
	// addi r4,r10,2856
	ctx.r4.s64 = ctx.r10.s64 + 2856;
loc_82332F28:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332cd8
	ctx.lr = 0x82332F38;
	sub_82332CD8(ctx, base);
loc_82332F38:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
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

__attribute__((alias("__imp__sub_82332F54"))) PPC_WEAK_FUNC(sub_82332F54);
PPC_FUNC_IMPL(__imp__sub_82332F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82332F58"))) PPC_WEAK_FUNC(sub_82332F58);
PPC_FUNC_IMPL(__imp__sub_82332F58) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8256d470
	ctx.lr = 0x82332F7C;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82332fb8
	if (ctx.cr0.eq) goto loc_82332FB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r8,26780
	ctx.r5.s64 = ctx.r8.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,2124(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2124);
	// bl 0x8256f138
	ctx.lr = 0x82332FAC;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x82332FB8;
	sub_82570318(ctx, base);
loc_82332FB8:
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

__attribute__((alias("__imp__sub_82332FD0"))) PPC_WEAK_FUNC(sub_82332FD0);
PPC_FUNC_IMPL(__imp__sub_82332FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82332FD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,21740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21740);
	// lwz r29,776(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// stw r10,776(r11)
	PPC_STORE_U32(ctx.r11.u32 + 776, ctx.r10.u32);
	// bl 0x823090c8
	ctx.lr = 0x82332FFC;
	sub_823090C8(ctx, base);
	// lwz r11,21740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21740);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,768
	ctx.r3.s64 = ctx.r11.s64 + 768;
	// bl 0x823f6330
	ctx.lr = 0x8233300C;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233301c
	if (ctx.cr6.eq) goto loc_8233301C;
	// bl 0x82241d18
	ctx.lr = 0x8233301C;
	sub_82241D18(ctx, base);
loc_8233301C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823090c8
	ctx.lr = 0x82333024;
	sub_823090C8(ctx, base);
	// lwz r11,21740(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21740);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,784
	ctx.r3.s64 = ctx.r11.s64 + 784;
	// bl 0x823f6330
	ctx.lr = 0x82333034;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333044
	if (ctx.cr6.eq) goto loc_82333044;
	// bl 0x82241d18
	ctx.lr = 0x82333044;
	sub_82241D18(ctx, base);
loc_82333044:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333058"))) PPC_WEAK_FUNC(sub_82333058);
PPC_FUNC_IMPL(__imp__sub_82333058) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,21740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21740);
	// lwz r3,776(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 776);
	// stw r9,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82333078"))) PPC_WEAK_FUNC(sub_82333078);
PPC_FUNC_IMPL(__imp__sub_82333078) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,21740(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21740);
	// stw r10,780(r11)
	PPC_STORE_U32(ctx.r11.u32 + 780, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233308C"))) PPC_WEAK_FUNC(sub_8233308C);
PPC_FUNC_IMPL(__imp__sub_8233308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333090"))) PPC_WEAK_FUNC(sub_82333090);
PPC_FUNC_IMPL(__imp__sub_82333090) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82333098;
	__savegprlr_29(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r1,-44
	ctx.r8.s64 = ctx.r1.s64 + -44;
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// addi r7,r1,-48
	ctx.r7.s64 = ctx.r1.s64 + -48;
	// addi r9,r1,-40
	ctx.r9.s64 = ctx.r1.s64 + -40;
	// addi r6,r1,-48
	ctx.r6.s64 = ctx.r1.s64 + -48;
	// lwz r10,80(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// addi r5,r1,-44
	ctx.r5.s64 = ctx.r1.s64 + -44;
	// addi r4,r1,-40
	ctx.r4.s64 = ctx.r1.s64 + -40;
	// lfs f0,148(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,140(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lis r3,-32254
	ctx.r3.s64 = -2113798144;
	// lfs f12,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// li r31,124
	ctx.r31.s64 = 124;
	// stfs f0,-48(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// li r30,128
	ctx.r30.s64 = 128;
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// addi r3,r3,-2340
	ctx.r3.s64 = ctx.r3.s64 + -2340;
	// stfs f12,-40(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// li r29,16
	ctx.r29.s64 = 16;
	// lfs f0,152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,136(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,64
	ctx.r7.s64 = 64;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,80
	ctx.r8.s64 = 80;
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,-40(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -40, temp.u32);
	// stfs f13,-44(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// stfs f12,-48(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -48, temp.u32);
	// lvlx v11,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v7,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v8,v7,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v12,v7,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v13,v7,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v0,v7,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v6,v7,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v9,v7,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v10,v7,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v11,v7,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 4));
	// vrlimi128 v8,v6,3,2
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// vrlimi128 v12,v9,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 3));
	// vrlimi128 v13,v10,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 3));
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v8,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333174"))) PPC_WEAK_FUNC(sub_82333174);
PPC_FUNC_IMPL(__imp__sub_82333174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333178"))) PPC_WEAK_FUNC(sub_82333178);
PPC_FUNC_IMPL(__imp__sub_82333178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82333180;
	__savegprlr_28(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// lhz r30,31944(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x823331AC;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,656(r1)
	PPC_STORE_U16(ctx.r1.u32 + 656, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,658
	ctx.r3.s64 = ctx.r1.s64 + 658;
	// bl 0x82fa7cf0
	ctx.lr = 0x823331C0;
	sub_82FA7CF0(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c78
	ctx.lr = 0x823331D4;
	sub_82332C78(ctx, base);
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332c78
	ctx.lr = 0x823331E8;
	sub_82332C78(ctx, base);
	// lwz r3,880(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 880);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333204
	if (ctx.cr6.eq) goto loc_82333204;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// bl 0x825249c8
	ctx.lr = 0x82333200;
	sub_825249C8(ctx, base);
	// b 0x82333250
	goto loc_82333250;
loc_82333204:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,3276
	ctx.r11.s64 = ctx.r11.s64 + 3276;
	// addi r10,r10,3252
	ctx.r10.s64 = ctx.r10.s64 + 3252;
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
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82524730
	ctx.lr = 0x8233324C;
	sub_82524730(ctx, base);
	// stw r3,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r3.u32);
loc_82333250:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r11.u32);
	// stw r11,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r11.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333264"))) PPC_WEAK_FUNC(sub_82333264);
PPC_FUNC_IMPL(__imp__sub_82333264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333268"))) PPC_WEAK_FUNC(sub_82333268);
PPC_FUNC_IMPL(__imp__sub_82333268) {
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
	// lwz r3,880(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 880);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333298
	if (ctx.cr6.eq) goto loc_82333298;
	// bl 0x82524840
	ctx.lr = 0x82333294;
	sub_82524840(ctx, base);
	// stw r30,880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 880, ctx.r30.u32);
loc_82333298:
	// stw r30,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r30.u32);
	// stw r30,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_823332B8"))) PPC_WEAK_FUNC(sub_823332B8);
PPC_FUNC_IMPL(__imp__sub_823332B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823332C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233333c
	if (ctx.cr6.eq) goto loc_8233333C;
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addic r11,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// subfe. r11,r11,r7
	temp.u8 = (~ctx.r11.u32 + ctx.r7.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233333c
	if (ctx.cr0.eq) goto loc_8233333C;
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82544c50
	ctx.lr = 0x82333304;
	sub_82544C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233333c
	if (!ctx.cr0.eq) goto loc_8233333C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82333324
	if (ctx.cr6.eq) goto loc_82333324;
	// bl 0x825469e0
	ctx.lr = 0x82333320;
	sub_825469E0(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82333324:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546708
	ctx.lr = 0x82333334;
	sub_82546708(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// b 0x82333348
	goto loc_82333348;
loc_8233333C:
	// lwz r11,1668(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1668);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823333c8
	if (ctx.cr6.eq) goto loc_823333C8;
loc_82333348:
	// lwz r11,784(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 784);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823333c4
	if (ctx.cr6.eq) goto loc_823333C4;
	// lwz r11,144(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 144);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82333394
	if (!ctx.cr6.eq) goto loc_82333394;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82333384
	if (ctx.cr6.eq) goto loc_82333384;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8286de68
	ctx.lr = 0x8233337C;
	sub_8286DE68(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82333388
	goto loc_82333388;
loc_82333384:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82333388:
	// lwz r3,784(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 784);
	// bl 0x8232e130
	ctx.lr = 0x82333390;
	sub_8232E130(ctx, base);
	// b 0x823333c4
	goto loc_823333C4;
loc_82333394:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823333b8
	if (ctx.cr6.eq) goto loc_823333B8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8286de68
	ctx.lr = 0x823333B0;
	sub_8286DE68(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x823333bc
	goto loc_823333BC;
loc_823333B8:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_823333BC:
	// lwz r3,784(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 784);
	// bl 0x8232e1f8
	ctx.lr = 0x823333C4;
	sub_8232E1F8(ctx, base);
loc_823333C4:
	// stw r27,1668(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1668, ctx.r27.u32);
loc_823333C8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823333D0"))) PPC_WEAK_FUNC(sub_823333D0);
PPC_FUNC_IMPL(__imp__sub_823333D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823333D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// lwz r30,52(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82333448
	if (ctx.cr6.eq) goto loc_82333448;
	// lwz r29,116(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82333448
	if (ctx.cr6.eq) goto loc_82333448;
	// lwz r11,60(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// li r4,3
	ctx.r4.s64 = 3;
	// lfs f0,280(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 280);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,564(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r5,r11,-16308
	ctx.r5.s64 = ctx.r11.s64 + -16308;
	// ble cr6,0x82333434
	if (!ctx.cr6.gt) goto loc_82333434;
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// bl 0x8232f660
	ctx.lr = 0x82333428;
	sub_8232F660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82333444
	goto loc_82333444;
loc_82333434:
	// addi r3,r29,116
	ctx.r3.s64 = ctx.r29.s64 + 116;
	// bl 0x8232f660
	ctx.lr = 0x8233343C;
	sub_8232F660(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82333444:
	// bl 0x8232f790
	ctx.lr = 0x82333448;
	sub_8232F790(ctx, base);
loc_82333448:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,19760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19760);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// blt cr6,0x823334b4
	if (ctx.cr6.lt) goto loc_823334B4;
	// fadds f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bgt cr6,0x823334b4
	if (ctx.cr6.gt) goto loc_823334B4;
	// addi r4,r31,268
	ctx.r4.s64 = ctx.r31.s64 + 268;
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// bl 0x82327828
	ctx.lr = 0x8233347C;
	sub_82327828(ctx, base);
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x823334ac
	if (ctx.cr6.eq) goto loc_823334AC;
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,2304
	ctx.r4.s64 = ctx.r9.s64 + 2304;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823334AC;
	sub_826A7620(ctx, base);
loc_823334AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8233353c
	goto loc_8233353C;
loc_823334B4:
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82333500
	if (!ctx.cr6.gt) goto loc_82333500;
	// addi r4,r31,272
	ctx.r4.s64 = ctx.r31.s64 + 272;
	// bl 0x82327828
	ctx.lr = 0x823334C8;
	sub_82327828(ctx, base);
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x823334f8
	if (ctx.cr6.eq) goto loc_823334F8;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,2272
	ctx.r4.s64 = ctx.r9.s64 + 2272;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823334F8;
	sub_826A7620(ctx, base);
loc_823334F8:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8233353c
	goto loc_8233353C;
loc_82333500:
	// addi r4,r31,276
	ctx.r4.s64 = ctx.r31.s64 + 276;
	// bl 0x82327828
	ctx.lr = 0x82333508;
	sub_82327828(ctx, base);
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// beq cr6,0x82333538
	if (ctx.cr6.eq) goto loc_82333538;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,2288
	ctx.r4.s64 = ctx.r9.s64 + 2288;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82333538;
	sub_826A7620(ctx, base);
loc_82333538:
	// li r4,2
	ctx.r4.s64 = 2;
loc_8233353C:
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// bl 0x8232be28
	ctx.lr = 0x82333544;
	sub_8232BE28(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233354C"))) PPC_WEAK_FUNC(sub_8233354C);
PPC_FUNC_IMPL(__imp__sub_8233354C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82333550"))) PPC_WEAK_FUNC(sub_82333550);
PPC_FUNC_IMPL(__imp__sub_82333550) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,19760(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 19760);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,1292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823335b0
	if (ctx.cr6.lt) goto loc_823335B0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x823335b0
	if (ctx.cr6.gt) goto loc_823335B0;
	// lfs f0,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x823335b0
	if (ctx.cr6.lt) goto loc_823335B0;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// li r11,0
	ctx.r11.s64 = 0;
	// ble cr6,0x823335b4
	if (!ctx.cr6.gt) goto loc_823335B4;
loc_823335B0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823335B4:
	// lwz r10,112(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82333684
	if (!ctx.cr6.eq) goto loc_82333684;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82333684
	if (ctx.cr6.eq) goto loc_82333684;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c6a8
	ctx.lr = 0x823335D4;
	sub_8232C6A8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r8,r11,3048
	ctx.r8.s64 = ctx.r11.s64 + 3048;
	// addi r7,r10,3076
	ctx.r7.s64 = ctx.r10.s64 + 3076;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,828
	ctx.r4.s64 = ctx.r31.s64 + 828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332338
	ctx.lr = 0x823335F8;
	sub_82332338(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,-16640
	ctx.r30.s64 = ctx.r11.s64 + -16640;
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82333630
	if (ctx.cr6.lt) goto loc_82333630;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82333630
	if (ctx.cr6.gt) goto loc_82333630;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82333630
	if (ctx.cr6.lt) goto loc_82333630;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82333630
	if (ctx.cr6.gt) goto loc_82333630;
	// addi r4,r31,264
	ctx.r4.s64 = ctx.r31.s64 + 264;
	// b 0x82333644
	goto loc_82333644;
loc_82333630:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r31,256
	ctx.r4.s64 = ctx.r31.s64 + 256;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333644
	if (!ctx.cr6.eq) goto loc_82333644;
	// addi r4,r31,260
	ctx.r4.s64 = ctx.r31.s64 + 260;
loc_82333644:
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// bl 0x82327828
	ctx.lr = 0x8233364C;
	sub_82327828(ctx, base);
	// lfs f0,76(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lfs f13,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f1,f12,f13,f0
	ctx.f1.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// bl 0x8232e3d0
	ctx.lr = 0x82333664;
	sub_8232E3D0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,244(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// bl 0x8232be28
	ctx.lr = 0x82333680;
	sub_8232BE28(ctx, base);
	// b 0x823336ac
	goto loc_823336AC;
loc_82333684:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823336ac
	if (!ctx.cr6.eq) goto loc_823336AC;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,10
	ctx.r4.s64 = 10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823336a8
	if (!ctx.cr6.eq) goto loc_823336A8;
	// li r4,5
	ctx.r4.s64 = 5;
loc_823336A8:
	// bl 0x822ffac8
	ctx.lr = 0x823336AC;
	sub_822FFAC8(ctx, base);
loc_823336AC:
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

__attribute__((alias("__imp__sub_823336CC"))) PPC_WEAK_FUNC(sub_823336CC);
PPC_FUNC_IMPL(__imp__sub_823336CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823336D0"))) PPC_WEAK_FUNC(sub_823336D0);
PPC_FUNC_IMPL(__imp__sub_823336D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823336D8;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x825438d0
	ctx.lr = 0x823336FC;
	sub_825438D0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82333730
	if (!ctx.cr0.eq) goto loc_82333730;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82543370
	ctx.lr = 0x82333720;
	sub_82543370(ctx, base);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r10,r10,24856
	ctx.r10.s64 = ctx.r10.s64 + 24856;
	// stw r27,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r27.u32);
loc_82333730:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333968
	if (!ctx.cr6.eq) goto loc_82333968;
	// lwz r10,884(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 884);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r11,19760
	ctx.r29.s64 = ctx.r11.s64 + 19760;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333788
	if (ctx.cr6.eq) goto loc_82333788;
	// addi r4,r31,344
	ctx.r4.s64 = ctx.r31.s64 + 344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x8233375C;
	sub_82332F58(ctx, base);
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233377c
	if (ctx.cr6.eq) goto loc_8233377C;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// lfs f1,-23832(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -23832);
	ctx.f1.f64 = double(temp.f32);
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// bl 0x8232e4a0
	ctx.lr = 0x8233377C;
	sub_8232E4A0(ctx, base);
loc_8233377C:
	// lwz r3,776(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// bl 0x8250f5a0
	ctx.lr = 0x82333784;
	sub_8250F5A0(ctx, base);
	// stw r28,884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 884, ctx.r28.u32);
loc_82333788:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r11,-16640
	ctx.r30.s64 = ctx.r11.s64 + -16640;
	// lfs f13,216(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 216);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x823337b4
	if (ctx.cr6.lt) goto loc_823337B4;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x823337b4
	if (!ctx.cr6.lt) goto loc_823337B4;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ff828
	ctx.lr = 0x823337B4;
	sub_822FF828(ctx, base);
loc_823337B4:
	// lfs f0,120(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,220(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	ctx.f13.f64 = double(temp.f32);
	// lfs f30,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82333844
	if (ctx.cr6.lt) goto loc_82333844;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82333844
	if (!ctx.cr6.lt) goto loc_82333844;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// lfs f0,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82333820
	if (ctx.cr6.lt) goto loc_82333820;
	// fadds f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82333820
	if (ctx.cr6.gt) goto loc_82333820;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f13,1292(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1292);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82333818
	if (ctx.cr6.lt) goto loc_82333818;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x82333818
	if (ctx.cr6.gt) goto loc_82333818;
	// addi r4,r31,252
	ctx.r4.s64 = ctx.r31.s64 + 252;
	// b 0x82333830
	goto loc_82333830;
loc_82333818:
	// addi r4,r31,248
	ctx.r4.s64 = ctx.r31.s64 + 248;
	// b 0x82333830
	goto loc_82333830;
loc_82333820:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// bgt cr6,0x82333830
	if (ctx.cr6.gt) goto loc_82333830;
	// addi r4,r31,244
	ctx.r4.s64 = ctx.r31.s64 + 244;
loc_82333830:
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// bl 0x82327828
	ctx.lr = 0x82333838;
	sub_82327828(ctx, base);
	// addi r4,r31,372
	ctx.r4.s64 = ctx.r31.s64 + 372;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x82333844;
	sub_82332F58(ctx, base);
loc_82333844:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82331f60
	ctx.lr = 0x82333860;
	sub_82331F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82333d50
	if (ctx.cr0.eq) goto loc_82333D50;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333880
	if (!ctx.cr6.eq) goto loc_82333880;
	// li r4,1
	ctx.r4.s64 = 1;
loc_82333880:
	// bl 0x8232c6a8
	ctx.lr = 0x82333884;
	sub_8232C6A8(ctx, base);
	// lfs f0,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823338d8
	if (ctx.cr6.gt) goto loc_823338D8;
	// lfs f0,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x823338d8
	if (ctx.cr6.gt) goto loc_823338D8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3128
	ctx.r4.s64 = ctx.r11.s64 + 3128;
	// bl 0x82332b88
	ctx.lr = 0x823338AC;
	sub_82332B88(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,3100
	ctx.r4.s64 = ctx.r11.s64 + 3100;
	// bl 0x82332c00
	ctx.lr = 0x823338BC;
	sub_82332C00(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823338d0
	if (ctx.cr6.eq) goto loc_823338D0;
	// lfs f0,232(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82333910
	goto loc_82333910;
loc_823338D0:
	// lfs f0,228(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82333910
	goto loc_82333910;
loc_823338D8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r8,r11,3100
	ctx.r8.s64 = ctx.r11.s64 + 3100;
	// addi r7,r10,3128
	ctx.r7.s64 = ctx.r10.s64 + 3128;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r31,824
	ctx.r4.s64 = ctx.r31.s64 + 824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332338
	ctx.lr = 0x823338FC;
	sub_82332338(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82332ac0
	ctx.lr = 0x8233390C;
	sub_82332AC0(ctx, base);
	// lfs f0,224(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
loc_82333910:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ff3d8
	ctx.lr = 0x82333920;
	sub_822FF3D8(ctx, base);
	// lfs f0,72(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// blt cr6,0x82333940
	if (ctx.cr6.lt) goto loc_82333940;
	// fadds f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82333d50
	if (!ctx.cr6.gt) goto loc_82333D50;
loc_82333940:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82333950
	if (!ctx.cr6.gt) goto loc_82333950;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8233395c
	goto loc_8233395C;
loc_82333950:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82333d50
	if (!ctx.cr6.lt) goto loc_82333D50;
	// li r4,2
	ctx.r4.s64 = 2;
loc_8233395C:
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// bl 0x8232be28
	ctx.lr = 0x82333964;
	sub_8232BE28(ctx, base);
	// b 0x82333d50
	goto loc_82333D50;
loc_82333968:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823339f8
	if (!ctx.cr6.eq) goto loc_823339F8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-16640
	ctx.r30.s64 = ctx.r11.s64 + -16640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82331f60
	ctx.lr = 0x8233398C;
	sub_82331F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82333d50
	if (ctx.cr0.eq) goto loc_82333D50;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,32(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823339b4
	if (ctx.cr6.gt) goto loc_823339B4;
	// lfs f13,72(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82333b04
	if (!ctx.cr6.gt) goto loc_82333B04;
loc_823339B4:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823339d8
	if (!ctx.cr6.eq) goto loc_823339D8;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c6a8
	ctx.lr = 0x823339CC;
	sub_8232C6A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c6a8
	ctx.lr = 0x823339D8;
	sub_8232C6A8(ctx, base);
loc_823339D8:
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x823339E4;
	sub_82332F58(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,236(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82333d50
	goto loc_82333D50;
loc_823339F8:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82333ad8
	if (!ctx.cr6.eq) goto loc_82333AD8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82331f60
	ctx.lr = 0x82333A1C;
	sub_82331F60(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r30,r11,-16640
	ctx.r30.s64 = ctx.r11.s64 + -16640;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// lfs f0,236(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// fsel f13,f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82333A54:
	// lfs f13,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fsubs f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// fmadds f13,f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,48(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// stfsu f12,40(r10)
	temp.f32 = float(ctx.f12.f64);
	ea = 40 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82333a54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82333A54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,48(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82332ac0
	ctx.lr = 0x82333A88;
	sub_82332AC0(ctx, base);
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255b548
	ctx.lr = 0x82333A90;
	sub_8255B548(ctx, base);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8255b548
	ctx.lr = 0x82333A9C;
	sub_8255B548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c310
	ctx.lr = 0x82333AA8;
	sub_8232C310(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82333d50
	if (ctx.cr6.eq) goto loc_82333D50;
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x82333ABC;
	sub_82332F58(ctx, base);
	// addi r4,r31,192
	ctx.r4.s64 = ctx.r31.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x82333AC8;
	sub_82332F58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,240(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 240);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82333cf4
	goto loc_82333CF4;
loc_82333AD8:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82333b10
	if (!ctx.cr6.eq) goto loc_82333B10;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82331f60
	ctx.lr = 0x82333AFC;
	sub_82331F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82333d50
	if (ctx.cr0.eq) goto loc_82333D50;
loc_82333B04:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333550
	ctx.lr = 0x82333B0C;
	sub_82333550(ctx, base);
	// b 0x82333d50
	goto loc_82333D50;
loc_82333B10:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82333b54
	if (!ctx.cr6.eq) goto loc_82333B54;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r30,r11,-16640
	ctx.r30.s64 = ctx.r11.s64 + -16640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82331f60
	ctx.lr = 0x82333B34;
	sub_82331F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82333d50
	if (ctx.cr0.eq) goto loc_82333D50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823333d0
	ctx.lr = 0x82333B44;
	sub_823333D0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,248(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 248);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82333cf4
	goto loc_82333CF4;
loc_82333B54:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82333be4
	if (!ctx.cr6.eq) goto loc_82333BE4;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82331f60
	ctx.lr = 0x82333B78;
	sub_82331F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82333d50
	if (ctx.cr0.eq) goto loc_82333D50;
	// addi r4,r31,184
	ctx.r4.s64 = ctx.r31.s64 + 184;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x82333B8C;
	sub_82332F58(ctx, base);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333bc4
	if (!ctx.cr6.eq) goto loc_82333BC4;
	// lfs f0,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// li r4,4
	ctx.r4.s64 = 4;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82333bb0
	if (ctx.cr6.gt) goto loc_82333BB0;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82333BB0:
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c6a8
	ctx.lr = 0x82333BB8;
	sub_8232C6A8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c6a8
	ctx.lr = 0x82333BC4;
	sub_8232C6A8(ctx, base);
loc_82333BC4:
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// lfs f0,252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f31,120(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// b 0x82333d50
	goto loc_82333D50;
loc_82333BE4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82333cfc
	if (!ctx.cr6.eq) goto loc_82333CFC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x82331f60
	ctx.lr = 0x82333C08;
	sub_82331F60(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r29,r11,-16640
	ctx.r29.s64 = ctx.r11.s64 + -16640;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lfs f0,252(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 252);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// fsel f13,f13,f13,f31
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f31.f64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82333C40:
	// lfs f12,-12(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// lfs f12,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,-8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f11,f11,f0
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f11,8(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmadds f13,f13,f0,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// bdnz 0x82333c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82333C40;
	// lfs f0,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lfs f13,76(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82333c88
	if (ctx.cr6.gt) goto loc_82333C88;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82333C88:
	// mulli r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 * 40;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232e3d0
	ctx.lr = 0x82333C9C;
	sub_8232E3D0(ctx, base);
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255b548
	ctx.lr = 0x82333CA4;
	sub_8255B548(ctx, base);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8255b548
	ctx.lr = 0x82333CB0;
	sub_8255B548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c310
	ctx.lr = 0x82333CBC;
	sub_8232C310(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82333d50
	if (ctx.cr6.eq) goto loc_82333D50;
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333cdc
	if (!ctx.cr6.eq) goto loc_82333CDC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c6a8
	ctx.lr = 0x82333CDC;
	sub_8232C6A8(ctx, base);
loc_82333CDC:
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82332f58
	ctx.lr = 0x82333CE8;
	sub_82332F58(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lfs f0,256(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 256);
	ctx.f0.f64 = double(temp.f32);
loc_82333CF4:
	// stfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// b 0x82333d50
	goto loc_82333D50;
loc_82333CFC:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82333d50
	if (!ctx.cr6.eq) goto loc_82333D50;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f2,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82331f60
	ctx.lr = 0x82333D20;
	sub_82331F60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82333d50
	if (ctx.cr0.eq) goto loc_82333D50;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82333d50
	if (!ctx.cr6.eq) goto loc_82333D50;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r4,10
	ctx.r4.s64 = 10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82333d4c
	if (!ctx.cr6.eq) goto loc_82333D4C;
	// li r4,5
	ctx.r4.s64 = 5;
loc_82333D4C:
	// bl 0x822ffac8
	ctx.lr = 0x82333D50;
	sub_822FFAC8(ctx, base);
loc_82333D50:
	// lfs f1,96(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255b548
	ctx.lr = 0x82333D58;
	sub_8255B548(ctx, base);
	// lfs f1,56(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// bl 0x8255b548
	ctx.lr = 0x82333D64;
	sub_8255B548(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,1020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1020);
	// bl 0x8232c310
	ctx.lr = 0x82333D70;
	sub_8232C310(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82333D80"))) PPC_WEAK_FUNC(sub_82333D80);
PPC_FUNC_IMPL(__imp__sub_82333D80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82333D88;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lfs f0,120(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,120(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 120, temp.u32);
	// addi r10,r11,-16640
	ctx.r10.s64 = ctx.r11.s64 + -16640;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,128
	ctx.r8.s64 = 128;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r30,r11,-2340
	ctx.r30.s64 = ctx.r11.s64 + -2340;
	// lfs f0,148(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// li r11,124
	ctx.r11.s64 = 124;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,80(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 80);
	// lfs f0,152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f12,132(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// stfs f12,84(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lfs f12,136(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lvlx v0,r10,r8
	temp.u32 = ctx.r10.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r29,16
	ctx.r29.s64 = 16;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r28,64
	ctx.r28.s64 = 64;
	// lvlx v7,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r27,80
	ctx.r27.s64 = 80;
	// lfs f13,140(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 140);
	ctx.f13.f64 = double(temp.f32);
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lfs f13,144(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v9,v8,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v7,v8,4,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v10,v8,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v11,v8,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v0,v8,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v12,v8,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v13,v8,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v6,v8,4,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// vrlimi128 v7,v0,3,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// vrlimi128 v9,v12,3,2
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vrlimi128 v10,v13,3,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vrlimi128 v11,v6,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r9,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r9,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r9,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82333f4c
	if (ctx.cr6.lt) goto loc_82333F4C;
	// bne cr6,0x82334034
	if (!ctx.cr6.eq) goto loc_82334034;
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82333edc
	if (!ctx.cr6.eq) goto loc_82333EDC;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r8,204
	ctx.r8.s64 = 204;
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r8,r7,r8
	ctx.r8.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82333ed4
	if (ctx.cr6.gt) goto loc_82333ED4;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r10,204
	ctx.r11.s64 = ctx.r10.s64 * 204;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x82333f18
	if (!ctx.cr6.eq) goto loc_82333F18;
	// b 0x82333ef8
	goto loc_82333EF8;
loc_82333ED4:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82333f1c
	goto loc_82333F1C;
loc_82333EDC:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82333f00
	if (!ctx.cr6.eq) goto loc_82333F00;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82333EF8:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x82333f1c
	goto loc_82333F1C;
loc_82333F00:
	// addi r9,r10,13
	ctx.r9.s64 = ctx.r10.s64 + 13;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82333F18:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
loc_82333F1C:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823332b8
	ctx.lr = 0x82333F28;
	sub_823332B8(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82333f40
	if (ctx.cr6.eq) goto loc_82333F40;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82334010
	if (!ctx.cr6.eq) goto loc_82334010;
loc_82333F40:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x822ff288
	ctx.lr = 0x82333F48;
	sub_822FF288(ctx, base);
	// b 0x82334034
	goto loc_82334034;
loc_82333F4C:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82333f9c
	if (!ctx.cr6.eq) goto loc_82333F9C;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r8,204
	ctx.r8.s64 = 204;
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r10,172(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// subf r7,r9,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r9.s64;
	// divw r8,r7,r8
	ctx.r8.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82333f94
	if (ctx.cr6.gt) goto loc_82333F94;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mulli r11,r10,204
	ctx.r11.s64 = ctx.r10.s64 * 204;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bne cr6,0x82333fd8
	if (!ctx.cr6.eq) goto loc_82333FD8;
	// b 0x82333fb8
	goto loc_82333FB8;
loc_82333F94:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82333fdc
	goto loc_82333FDC;
loc_82333F9C:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82333fc0
	if (!ctx.cr6.eq) goto loc_82333FC0;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mulli r10,r10,204
	ctx.r10.s64 = ctx.r10.s64 * 204;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82333FB8:
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x82333fdc
	goto loc_82333FDC;
loc_82333FC0:
	// addi r9,r10,13
	ctx.r9.s64 = ctx.r10.s64 + 13;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// mulli r11,r11,204
	ctx.r11.s64 = ctx.r11.s64 * 204;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82333FD8:
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
loc_82333FDC:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823332b8
	ctx.lr = 0x82333FE8;
	sub_823332B8(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82334000
	if (ctx.cr6.eq) goto loc_82334000;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82334010
	if (!ctx.cr6.eq) goto loc_82334010;
loc_82334000:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823341f8
	ctx.lr = 0x8233400C;
	sub_823341F8(ctx, base);
	// b 0x82334034
	goto loc_82334034;
loc_82334010:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233402c
	if (ctx.cr6.eq) goto loc_8233402C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233402c
	if (ctx.cr6.eq) goto loc_8233402C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82334034
	if (!ctx.cr6.eq) goto loc_82334034;
loc_8233402C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333268
	ctx.lr = 0x82334034;
	sub_82333268(ctx, base);
loc_82334034:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82334058
	if (ctx.cr6.eq) goto loc_82334058;
	// lfs f0,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f0,124(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 124, temp.u32);
loc_82334058:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334064"))) PPC_WEAK_FUNC(sub_82334064);
PPC_FUNC_IMPL(__imp__sub_82334064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334068"))) PPC_WEAK_FUNC(sub_82334068);
PPC_FUNC_IMPL(__imp__sub_82334068) {
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
	// lwz r3,1064(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1064);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82334174
	if (ctx.cr6.eq) goto loc_82334174;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// beq cr6,0x82334140
	if (ctx.cr6.eq) goto loc_82334140;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334120
	if (ctx.cr6.eq) goto loc_82334120;
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r10,224(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823340ec
	if (ctx.cr6.eq) goto loc_823340EC;
loc_823340B4:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,228(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	// bl 0x8252dce0
	ctx.lr = 0x823340C0;
	sub_8252DCE0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x822cc048
	ctx.lr = 0x823340CC;
	sub_822CC048(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822cbc58
	ctx.lr = 0x823340E4;
	sub_822CBC58(ctx, base);
loc_823340E4:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82334170
	goto loc_82334170;
loc_823340EC:
	// lwz r11,1356(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334108
	if (ctx.cr6.eq) goto loc_82334108;
	// lwz r11,448(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 448);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334108
	if (!ctx.cr6.eq) goto loc_82334108;
	// bl 0x8252e018
	ctx.lr = 0x82334108;
	sub_8252E018(ctx, base);
loc_82334108:
	// lwz r30,1064(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x822cc470
	ctx.lr = 0x82334114;
	sub_822CC470(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8252dc28
	ctx.lr = 0x8233411C;
	sub_8252DC28(ctx, base);
	// b 0x82334174
	goto loc_82334174;
loc_82334120:
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823340e4
	if (!ctx.cr6.eq) goto loc_823340E4;
	// bl 0x822cd168
	ctx.lr = 0x82334134;
	sub_822CD168(ctx, base);
	// lwz r3,1064(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// b 0x823340b4
	goto loc_823340B4;
loc_82334140:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82334174
	if (ctx.cr6.eq) goto loc_82334174;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x822cc048
	ctx.lr = 0x82334154;
	sub_822CC048(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cbc58
	ctx.lr = 0x8233416C;
	sub_822CBC58(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
loc_82334170:
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
loc_82334174:
	// lwz r11,1080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823341e0
	if (ctx.cr6.eq) goto loc_823341E0;
	// bl 0x8226c3f0
	ctx.lr = 0x82334184;
	sub_8226C3F0(ctx, base);
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823341e0
	if (ctx.cr6.eq) goto loc_823341E0;
	// lwz r3,1080(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1080);
	// bl 0x822cc528
	ctx.lr = 0x82334198;
	sub_822CC528(ctx, base);
	// lwz r31,1064(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1064);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x823341e0
	if (ctx.cr6.eq) goto loc_823341E0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// beq cr6,0x823341e0
	if (ctx.cr6.eq) goto loc_823341E0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x823341BC;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r5,392(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r4,r11,12672
	ctx.r4.s64 = ctx.r11.s64 + 12672;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a72e8
	ctx.lr = 0x823341D0;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823341e0
	if (ctx.cr6.eq) goto loc_823341E0;
	// bl 0x82241d18
	ctx.lr = 0x823341E0;
	sub_82241D18(ctx, base);
loc_823341E0:
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

__attribute__((alias("__imp__sub_823341F8"))) PPC_WEAK_FUNC(sub_823341F8);
PPC_FUNC_IMPL(__imp__sub_823341F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82334200;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82334480
	if (ctx.cr6.eq) goto loc_82334480;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bge cr6,0x82334480
	if (!ctx.cr6.lt) goto loc_82334480;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r3,1092(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1092);
	// li r26,1
	ctx.r26.s64 = 1;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r26,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r26.u32);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stfs f0,120(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82334264
	if (ctx.cr6.eq) goto loc_82334264;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r26,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r26.u32);
	// lfs f1,-4072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4072);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232e4a0
	ctx.lr = 0x82334264;
	sub_8232E4A0(ctx, base);
loc_82334264:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r30,r10,32570
	ctx.r30.s64 = ctx.r10.s64 + 32570;
	// beq cr6,0x823342ac
	if (ctx.cr6.eq) goto loc_823342AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823342c0
	if (!ctx.cr6.eq) goto loc_823342C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823342a0
	if (!ctx.cr6.eq) goto loc_823342A0;
loc_8233428C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r11,3008
	ctx.r5.s64 = ctx.r11.s64 + 3008;
	// addi r4,r10,3024
	ctx.r4.s64 = ctx.r10.s64 + 3024;
	// b 0x823342b8
	goto loc_823342B8;
loc_823342A0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x823342c0
	if (!ctx.cr6.eq) goto loc_823342C0;
	// b 0x8233428c
	goto loc_8233428C;
loc_823342AC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,2992
	ctx.r5.s64 = ctx.r11.s64 + 2992;
loc_823342B8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82333178
	ctx.lr = 0x823342C0;
	sub_82333178(ctx, base);
loc_823342C0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334328
	if (!ctx.cr6.eq) goto loc_82334328;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823342f8
	if (ctx.cr6.eq) goto loc_823342F8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,2224
	ctx.r4.s64 = ctx.r10.s64 + 2224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823342F8;
	sub_826A7620(ctx, base);
loc_823342F8:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232e4a0
	ctx.lr = 0x8233430C;
	sub_8232E4A0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// bl 0x8232be28
	ctx.lr = 0x82334318;
	sub_8232BE28(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r29,r11,3152
	ctx.r29.s64 = ctx.r11.s64 + 3152;
	// b 0x823343f4
	goto loc_823343F4;
loc_82334328:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233438c
	if (!ctx.cr6.eq) goto loc_8233438C;
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233435c
	if (ctx.cr6.eq) goto loc_8233435C;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,2224
	ctx.r4.s64 = ctx.r10.s64 + 2224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8233435C;
	sub_826A7620(ctx, base);
loc_8233435C:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232e4a0
	ctx.lr = 0x82334370;
	sub_8232E4A0(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// bl 0x8232be28
	ctx.lr = 0x8233437C;
	sub_8232BE28(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// addi r29,r11,3168
	ctx.r29.s64 = ctx.r11.s64 + 3168;
	// b 0x823343f4
	goto loc_823343F4;
loc_8233438C:
	// lwz r11,1124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// addi r4,r31,224
	ctx.r4.s64 = ctx.r31.s64 + 224;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823343a0
	if (!ctx.cr6.eq) goto loc_823343A0;
	// addi r4,r31,220
	ctx.r4.s64 = ctx.r31.s64 + 220;
loc_823343A0:
	// lwz r3,1088(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1088);
	// bl 0x82327828
	ctx.lr = 0x823343A8;
	sub_82327828(ctx, base);
	// lwz r11,1092(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823343d4
	if (ctx.cr6.eq) goto loc_823343D4;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r4,r10,2224
	ctx.r4.s64 = ctx.r10.s64 + 2224;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x823343D4;
	sub_826A7620(ctx, base);
loc_823343D4:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r3,1092(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// addi r11,r11,-16640
	ctx.r11.s64 = ctx.r11.s64 + -16640;
	// lfs f1,52(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8232e4a0
	ctx.lr = 0x823343E8;
	sub_8232E4A0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,1048(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// bl 0x8232be28
	ctx.lr = 0x823343F4;
	sub_8232BE28(ctx, base);
loc_823343F4:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82334430
	if (!ctx.cr6.eq) goto loc_82334430;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,3188
	ctx.r3.s64 = ctx.r11.s64 + 3188;
	// bl 0x82547f38
	ctx.lr = 0x82334414;
	sub_82547F38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d038
	ctx.lr = 0x82334424;
	sub_8232D038(ctx, base);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// stw r27,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r27.u32);
	// b 0x82334454
	goto loc_82334454;
loc_82334430:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r11,3212
	ctx.r3.s64 = ctx.r11.s64 + 3212;
	// bl 0x82547f38
	ctx.lr = 0x8233443C;
	sub_82547F38(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,140(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d038
	ctx.lr = 0x8233444C;
	sub_8232D038(ctx, base);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// stw r26,176(r30)
	PPC_STORE_U32(ctx.r30.u32 + 176, ctx.r26.u32);
loc_82334454:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8232d038
	ctx.lr = 0x82334460;
	sub_8232D038(ctx, base);
	// li r9,3
	ctx.r9.s64 = 3;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823322a0
	ctx.lr = 0x82334480;
	sub_823322A0(ctx, base);
loc_82334480:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334488"))) PPC_WEAK_FUNC(sub_82334488);
PPC_FUNC_IMPL(__imp__sub_82334488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82334490;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,376
	ctx.r3.s64 = 376;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// bl 0x82691500
	ctx.lr = 0x823344AC;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82334514
	if (ctx.cr0.eq) goto loc_82334514;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-24032
	ctx.r10.s64 = ctx.r10.s64 + -24032;
	// addic. r31,r30,16
	ctx.xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r31.s64 = ctx.r30.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// beq 0x82334518
	if (ctx.cr0.eq) goto loc_82334518;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r27,0(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518880
	ctx.lr = 0x823344F4;
	sub_82518880(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r28.u32);
	// addi r11,r11,2196
	ctx.r11.s64 = ctx.r11.s64 + 2196;
	// stw r27,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r27.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82334518
	goto loc_82334518;
loc_82334514:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82334518:
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82334530"))) PPC_WEAK_FUNC(sub_82334530);
PPC_FUNC_IMPL(__imp__sub_82334530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82334538;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addic. r31,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r31.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// beq 0x823345f0
	if (ctx.cr0.eq) goto loc_823345F0;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r26,0(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r10,r10,3300
	ctx.r10.s64 = ctx.r10.s64 + 3300;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r24,0(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// bl 0x8226c200
	ctx.lr = 0x823345A0;
	sub_8226C200(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// bl 0x82518b28
	ctx.lr = 0x823345D4;
	sub_82518B28(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r25,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r25.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,2196
	ctx.r11.s64 = ctx.r11.s64 + 2196;
	// stw r26,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r26.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82f91940
	ctx.lr = 0x823345F0;
	sub_82F91940(ctx, base);
loc_823345F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823345FC"))) PPC_WEAK_FUNC(sub_823345FC);
PPC_FUNC_IMPL(__imp__sub_823345FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334600"))) PPC_WEAK_FUNC(sub_82334600);
PPC_FUNC_IMPL(__imp__sub_82334600) {
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
	// bne cr6,0x82334648
	if (!ctx.cr6.eq) goto loc_82334648;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82334624;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82334648
	if (!ctx.cr0.eq) goto loc_82334648;
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
	ctx.lr = 0x82334648;
	sub_82240040(ctx, base);
loc_82334648:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,3252
	ctx.r11.s64 = ctx.r11.s64 + 3252;
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

__attribute__((alias("__imp__sub_82334674"))) PPC_WEAK_FUNC(sub_82334674);
PPC_FUNC_IMPL(__imp__sub_82334674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334678"))) PPC_WEAK_FUNC(sub_82334678);
PPC_FUNC_IMPL(__imp__sub_82334678) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334688"))) PPC_WEAK_FUNC(sub_82334688);
PPC_FUNC_IMPL(__imp__sub_82334688) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19604
	ctx.r3.s64 = ctx.r11.s64 + -19604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334694"))) PPC_WEAK_FUNC(sub_82334694);
PPC_FUNC_IMPL(__imp__sub_82334694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334698"))) PPC_WEAK_FUNC(sub_82334698);
PPC_FUNC_IMPL(__imp__sub_82334698) {
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
	// bne cr6,0x823346e0
	if (!ctx.cr6.eq) goto loc_823346E0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823346BC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x823346e0
	if (!ctx.cr0.eq) goto loc_823346E0;
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
	ctx.lr = 0x823346E0;
	sub_82240040(ctx, base);
loc_823346E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,3276
	ctx.r11.s64 = ctx.r11.s64 + 3276;
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

__attribute__((alias("__imp__sub_8233470C"))) PPC_WEAK_FUNC(sub_8233470C);
PPC_FUNC_IMPL(__imp__sub_8233470C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334710"))) PPC_WEAK_FUNC(sub_82334710);
PPC_FUNC_IMPL(__imp__sub_82334710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,1116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1116, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82334720"))) PPC_WEAK_FUNC(sub_82334720);
PPC_FUNC_IMPL(__imp__sub_82334720) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19548
	ctx.r3.s64 = ctx.r11.s64 + -19548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233472C"))) PPC_WEAK_FUNC(sub_8233472C);
PPC_FUNC_IMPL(__imp__sub_8233472C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334730"))) PPC_WEAK_FUNC(sub_82334730);
PPC_FUNC_IMPL(__imp__sub_82334730) {
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
	// bne cr6,0x82334778
	if (!ctx.cr6.eq) goto loc_82334778;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82334754;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82334778
	if (!ctx.cr0.eq) goto loc_82334778;
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
	ctx.lr = 0x82334778;
	sub_82240040(ctx, base);
loc_82334778:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,3300
	ctx.r11.s64 = ctx.r11.s64 + 3300;
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

__attribute__((alias("__imp__sub_823347A4"))) PPC_WEAK_FUNC(sub_823347A4);
PPC_FUNC_IMPL(__imp__sub_823347A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823347A8"))) PPC_WEAK_FUNC(sub_823347A8);
PPC_FUNC_IMPL(__imp__sub_823347A8) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823347dc
	if (ctx.cr6.eq) goto loc_823347DC;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823347dc
	if (ctx.cr0.eq) goto loc_823347DC;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82332c78
	ctx.lr = 0x823347DC;
	sub_82332C78(ctx, base);
loc_823347DC:
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

__attribute__((alias("__imp__sub_823347F0"))) PPC_WEAK_FUNC(sub_823347F0);
PPC_FUNC_IMPL(__imp__sub_823347F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19492
	ctx.r3.s64 = ctx.r11.s64 + -19492;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823347FC"))) PPC_WEAK_FUNC(sub_823347FC);
PPC_FUNC_IMPL(__imp__sub_823347FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334800"))) PPC_WEAK_FUNC(sub_82334800);
PPC_FUNC_IMPL(__imp__sub_82334800) {
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
	// bne cr6,0x82334848
	if (!ctx.cr6.eq) goto loc_82334848;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82334824;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82334848
	if (!ctx.cr0.eq) goto loc_82334848;
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
	ctx.lr = 0x82334848;
	sub_82240040(ctx, base);
loc_82334848:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,3324
	ctx.r11.s64 = ctx.r11.s64 + 3324;
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

__attribute__((alias("__imp__sub_82334874"))) PPC_WEAK_FUNC(sub_82334874);
PPC_FUNC_IMPL(__imp__sub_82334874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82334878"))) PPC_WEAK_FUNC(sub_82334878);
PPC_FUNC_IMPL(__imp__sub_82334878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm. r9,r9,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x823348a4
	if (ctx.cr0.eq) goto loc_823348A4;
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// andi. r9,r9,247
	ctx.r9.u64 = ctx.r9.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// b 0x823348ac
	goto loc_823348AC;
loc_823348A4:
	// lbz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r9,r9,8
	ctx.r9.u64 = ctx.r9.u64 | 8;
loc_823348AC:
	// stb r9,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r9.u8);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1660(r10)
	PPC_STORE_U32(ctx.r10.u32 + 1660, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823348BC"))) PPC_WEAK_FUNC(sub_823348BC);
PPC_FUNC_IMPL(__imp__sub_823348BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823348C0"))) PPC_WEAK_FUNC(sub_823348C0);
PPC_FUNC_IMPL(__imp__sub_823348C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19436
	ctx.r3.s64 = ctx.r11.s64 + -19436;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823348CC"))) PPC_WEAK_FUNC(sub_823348CC);
PPC_FUNC_IMPL(__imp__sub_823348CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823348D0"))) PPC_WEAK_FUNC(sub_823348D0);
PPC_FUNC_IMPL(__imp__sub_823348D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x823348D8;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,60(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r4,5440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5440, ctx.r4.u32);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r8,-31957
	ctx.r8.s64 = -2094333952;
	// addi r30,r11,14432
	ctx.r30.s64 = ctx.r11.s64 + 14432;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// lfs f31,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,5428(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5428, temp.u32);
	// li r11,6
	ctx.r11.s64 = 6;
	// stfs f31,5436(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5436, temp.u32);
	// stw r25,5444(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5444, ctx.r25.u32);
	// stw r25,5448(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5448, ctx.r25.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r25,5452(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5452, ctx.r25.u32);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r25,5456(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5456, ctx.r25.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r25,5476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5476, ctx.r25.u32);
	// addi r24,r3,5444
	ctx.r24.s64 = ctx.r3.s64 + 5444;
	// stw r25,5492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5492, ctx.r25.u32);
	// addi r23,r3,5452
	ctx.r23.s64 = ctx.r3.s64 + 5452;
	// stw r25,5496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 5496, ctx.r25.u32);
	// lfs f0,20(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// addi r10,r3,-100
	ctx.r10.s64 = ctx.r3.s64 + -100;
	// lfs f0,24(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stfs f0,8(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
	// stw r3,21744(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21744, ctx.r3.u32);
	// lfs f0,28(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// lfs f0,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 16, temp.u32);
	// lfs f0,36(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 20, temp.u32);
	// lfs f0,40(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 24, temp.u32);
	// lfs f0,44(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// lfs f0,48(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 32, temp.u32);
	// lfs f0,52(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,36(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 36, temp.u32);
	// lfs f0,56(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,40(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 40, temp.u32);
	// lfs f0,2188(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2188);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,52(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 52, temp.u32);
	// lfs f0,2192(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2192);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 56, temp.u32);
	// lfs f0,2196(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 60, temp.u32);
	// lfs f0,2200(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2200);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 64, temp.u32);
	// lfs f0,2204(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2204);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,68(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 68, temp.u32);
	// lfs f0,2208(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2208);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 72, temp.u32);
	// lfs f0,2212(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2212);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// lfs f0,2216(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2216);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 80, temp.u32);
	// lfs f0,2220(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2220);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 84, temp.u32);
	// lfs f0,2224(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2224);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 88, temp.u32);
	// lfs f0,2228(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2228);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 92, temp.u32);
	// lfs f0,2232(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2232);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,96(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 96, temp.u32);
	// lfs f0,2236(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2236);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 100, temp.u32);
	// lfs f0,2240(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2240);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,104(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 104, temp.u32);
	// lfs f0,2244(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2244);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 108, temp.u32);
	// lfs f0,2248(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2248);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 112, temp.u32);
	// lfs f0,2252(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2252);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,116(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 116, temp.u32);
	// lfs f0,2256(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2256);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,120(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 120, temp.u32);
	// lfs f0,2260(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2260);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,124(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 124, temp.u32);
	// lfs f0,2264(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2264);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 128, temp.u32);
	// lfs f0,2268(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 132, temp.u32);
	// lfs f0,2272(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2272);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 136, temp.u32);
	// lfs f0,2276(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2276);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,140(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 140, temp.u32);
	// lfs f0,2280(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 2280);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 144, temp.u32);
loc_82334A60:
	// stw r25,128(r10)
	PPC_STORE_U32(ctx.r10.u32 + 128, ctx.r25.u32);
	// stb r25,132(r10)
	PPC_STORE_U8(ctx.r10.u32 + 132, ctx.r25.u8);
	// stbu r25,260(r10)
	ea = 260 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r25.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82334a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82334A60;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r27,r31,80
	ctx.r27.s64 = ctx.r31.s64 + 80;
loc_82334A78:
	// cmpwi cr6,r26,6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 6, ctx.xer);
	// bge cr6,0x82334b48
	if (!ctx.cr6.lt) goto loc_82334B48;
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bge cr6,0x82334b3c
	if (!ctx.cr6.lt) goto loc_82334B3C;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82334b3c
	if (ctx.cr6.eq) goto loc_82334B3C;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82334b3c
	if (ctx.cr0.eq) goto loc_82334B3C;
	// mulli r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 * 260;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82334b3c
	if (!ctx.cr6.eq) goto loc_82334B3C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82546708
	ctx.lr = 0x82334AC8;
	sub_82546708(ctx, base);
	// addi r11,r28,32
	ctx.r11.s64 = ctx.r28.s64 + 32;
	// stw r3,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r3.u32);
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82334ADC:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82334afc
	if (!ctx.cr6.lt) goto loc_82334AFC;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334adc
	if (!ctx.cr0.eq) goto loc_82334ADC;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_82334AFC:
	// bne cr6,0x82334b04
	if (!ctx.cr6.eq) goto loc_82334B04;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334B04:
	// addi r11,r28,160
	ctx.r11.s64 = ctx.r28.s64 + 160;
	// subf r10,r11,r27
	ctx.r10.s64 = ctx.r27.s64 - ctx.r11.s64;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,132
	ctx.r10.s64 = ctx.r10.s64 + 132;
loc_82334B14:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82334b34
	if (!ctx.cr6.lt) goto loc_82334B34;
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334b14
	if (!ctx.cr0.eq) goto loc_82334B14;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
loc_82334B34:
	// bne cr6,0x82334b3c
	if (!ctx.cr6.eq) goto loc_82334B3C;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334B3C:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,264
	ctx.r27.s64 = ctx.r27.s64 + 264;
	// b 0x82334a78
	goto loc_82334A78;
loc_82334B48:
	// li r10,30
	ctx.r10.s64 = 30;
	// addi r11,r29,1460
	ctx.r11.s64 = ctx.r29.s64 + 1460;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82334B54:
	// stbu r25,128(r11)
	ea = 128 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r25.u8);
	ctx.r11.u32 = ea;
	// bdnz 0x82334b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82334B54;
	// li r11,24
	ctx.r11.s64 = 24;
	// addi r8,r31,2288
	ctx.r8.s64 = ctx.r31.s64 + 2288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82334B68:
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// cmpwi cr6,r11,30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 30, ctx.xer);
	// bge cr6,0x82334bc0
	if (!ctx.cr6.lt) goto loc_82334BC0;
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addic. r11,r11,1588
	ctx.xer.ca = ctx.r11.u32 > 4294965707;
	ctx.r11.s64 = ctx.r11.s64 + 1588;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82334b90
	if (ctx.cr0.eq) goto loc_82334B90;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82334bc0
	if (!ctx.cr0.eq) goto loc_82334BC0;
loc_82334B90:
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82334B98:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334bb8
	if (!ctx.cr6.lt) goto loc_82334BB8;
	// lbzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r6,r7
	ctx.r6.s64 = ctx.r7.s8;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334b98
	if (!ctx.cr0.eq) goto loc_82334B98;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334BB8:
	// bne cr6,0x82334bc0
	if (!ctx.cr6.eq) goto loc_82334BC0;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334BC0:
	// addi r8,r8,132
	ctx.r8.s64 = ctx.r8.s64 + 132;
	// bdnz 0x82334b68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82334B68;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,3892
	ctx.r11.s64 = ctx.r29.s64 + 3892;
	// addi r9,r10,-28192
	ctx.r9.s64 = ctx.r10.s64 + -28192;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334BDC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334bfc
	if (!ctx.cr6.lt) goto loc_82334BFC;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334bdc
	if (!ctx.cr0.eq) goto loc_82334BDC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334BFC:
	// bne cr6,0x82334c04
	if (!ctx.cr6.eq) goto loc_82334C04;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334C04:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4020
	ctx.r11.s64 = ctx.r29.s64 + 4020;
	// addi r9,r10,-28212
	ctx.r9.s64 = ctx.r10.s64 + -28212;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334C18:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334c38
	if (!ctx.cr6.lt) goto loc_82334C38;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334c18
	if (!ctx.cr0.eq) goto loc_82334C18;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334C38:
	// bne cr6,0x82334c40
	if (!ctx.cr6.eq) goto loc_82334C40;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334C40:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4148
	ctx.r11.s64 = ctx.r29.s64 + 4148;
	// addi r9,r10,-28168
	ctx.r9.s64 = ctx.r10.s64 + -28168;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334C54:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334c74
	if (!ctx.cr6.lt) goto loc_82334C74;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334c54
	if (!ctx.cr0.eq) goto loc_82334C54;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334C74:
	// bne cr6,0x82334c7c
	if (!ctx.cr6.eq) goto loc_82334C7C;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334C7C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4276
	ctx.r11.s64 = ctx.r29.s64 + 4276;
	// addi r9,r10,-28252
	ctx.r9.s64 = ctx.r10.s64 + -28252;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334C90:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334cb0
	if (!ctx.cr6.lt) goto loc_82334CB0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334c90
	if (!ctx.cr0.eq) goto loc_82334C90;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334CB0:
	// bne cr6,0x82334cb8
	if (!ctx.cr6.eq) goto loc_82334CB8;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334CB8:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4404
	ctx.r11.s64 = ctx.r29.s64 + 4404;
	// addi r9,r10,-28232
	ctx.r9.s64 = ctx.r10.s64 + -28232;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334CCC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334cec
	if (!ctx.cr6.lt) goto loc_82334CEC;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334ccc
	if (!ctx.cr0.eq) goto loc_82334CCC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334CEC:
	// bne cr6,0x82334cf4
	if (!ctx.cr6.eq) goto loc_82334CF4;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334CF4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4532
	ctx.r11.s64 = ctx.r29.s64 + 4532;
	// addi r9,r10,-28144
	ctx.r9.s64 = ctx.r10.s64 + -28144;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334D08:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334d28
	if (!ctx.cr6.lt) goto loc_82334D28;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334d08
	if (!ctx.cr0.eq) goto loc_82334D08;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334D28:
	// bne cr6,0x82334d30
	if (!ctx.cr6.eq) goto loc_82334D30;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334D30:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4660
	ctx.r11.s64 = ctx.r29.s64 + 4660;
	// addi r9,r10,3348
	ctx.r9.s64 = ctx.r10.s64 + 3348;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334D44:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334d64
	if (!ctx.cr6.lt) goto loc_82334D64;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334d44
	if (!ctx.cr0.eq) goto loc_82334D44;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334D64:
	// bne cr6,0x82334d6c
	if (!ctx.cr6.eq) goto loc_82334D6C;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334D6C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4788
	ctx.r11.s64 = ctx.r29.s64 + 4788;
	// addi r9,r10,3372
	ctx.r9.s64 = ctx.r10.s64 + 3372;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334D80:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334da0
	if (!ctx.cr6.lt) goto loc_82334DA0;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334d80
	if (!ctx.cr0.eq) goto loc_82334D80;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334DA0:
	// bne cr6,0x82334da8
	if (!ctx.cr6.eq) goto loc_82334DA8;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334DA8:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,4916
	ctx.r11.s64 = ctx.r29.s64 + 4916;
	// addi r9,r10,3396
	ctx.r9.s64 = ctx.r10.s64 + 3396;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334DBC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334ddc
	if (!ctx.cr6.lt) goto loc_82334DDC;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334dbc
	if (!ctx.cr0.eq) goto loc_82334DBC;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334DDC:
	// bne cr6,0x82334de4
	if (!ctx.cr6.eq) goto loc_82334DE4;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334DE4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,5044
	ctx.r11.s64 = ctx.r29.s64 + 5044;
	// addi r9,r10,3420
	ctx.r9.s64 = ctx.r10.s64 + 3420;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334DF8:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334e18
	if (!ctx.cr6.lt) goto loc_82334E18;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334df8
	if (!ctx.cr0.eq) goto loc_82334DF8;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334E18:
	// bne cr6,0x82334e20
	if (!ctx.cr6.eq) goto loc_82334E20;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334E20:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,5172
	ctx.r11.s64 = ctx.r29.s64 + 5172;
	// addi r9,r10,3444
	ctx.r9.s64 = ctx.r10.s64 + 3444;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334E34:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334e54
	if (!ctx.cr6.lt) goto loc_82334E54;
	// lbzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334e34
	if (!ctx.cr0.eq) goto loc_82334E34;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334E54:
	// bne cr6,0x82334e5c
	if (!ctx.cr6.eq) goto loc_82334E5C;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334E5C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r29,5300
	ctx.r11.s64 = ctx.r29.s64 + 5300;
	// addi r9,r10,3472
	ctx.r9.s64 = ctx.r10.s64 + 3472;
	// addi r10,r11,128
	ctx.r10.s64 = ctx.r11.s64 + 128;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82334E70:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82334e90
	if (!ctx.cr6.lt) goto loc_82334E90;
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// extsb. r7,r8
	ctx.r7.s64 = ctx.r8.s8;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82334e70
	if (!ctx.cr0.eq) goto loc_82334E70;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82334E90:
	// bne cr6,0x82334e98
	if (!ctx.cr6.eq) goto loc_82334E98;
	// stb r25,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r25.u8);
loc_82334E98:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255b198
	ctx.lr = 0x82334EA4;
	sub_8255B198(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r6,1
	ctx.r6.s64 = 1;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lfs f30,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x8255b1e8
	ctx.lr = 0x82334EC0;
	sub_8255B1E8(ctx, base);
	// stw r3,5472(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5472, ctx.r3.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8255b198
	ctx.lr = 0x82334ED0;
	sub_8255B198(ctx, base);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8255b1e8
	ctx.lr = 0x82334EE4;
	sub_8255B1E8(ctx, base);
	// stw r3,5468(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5468, ctx.r3.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,5480(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5480, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r11,5484(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5484, ctx.r11.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,5488(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5488, ctx.r11.u32);
	// bl 0x822e7a80
	ctx.lr = 0x82334F14;
	sub_822E7A80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823f6330
	ctx.lr = 0x82334F20;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334f30
	if (ctx.cr6.eq) goto loc_82334F30;
	// bl 0x82241d18
	ctx.lr = 0x82334F30;
	sub_82241D18(ctx, base);
loc_82334F30:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7a80
	ctx.lr = 0x82334F44;
	sub_822E7A80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f6330
	ctx.lr = 0x82334F50;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334f60
	if (ctx.cr6.eq) goto loc_82334F60;
	// bl 0x82241d18
	ctx.lr = 0x82334F60;
	sub_82241D18(ctx, base);
loc_82334F60:
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x82334F68;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82334f8c
	if (ctx.cr0.eq) goto loc_82334F8C;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8257f968
	ctx.lr = 0x82334F88;
	sub_8257F968(ctx, base);
	// b 0x82334f90
	goto loc_82334F90;
loc_82334F8C:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82334F90:
	// stw r3,5460(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5460, ctx.r3.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82334FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,5460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5460);
	// stw r3,5464(r29)
	PPC_STORE_U32(ctx.r29.u32 + 5464, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233501c
	if (ctx.cr6.eq) goto loc_8233501C;
	// bl 0x826a3ae0
	ctx.lr = 0x82334FB8;
	sub_826A3AE0(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,323
	ctx.r8.u64 = ctx.r8.u64 | 323;
	// bl 0x826a3da0
	ctx.lr = 0x82334FD8;
	sub_826A3DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x823f6330
	ctx.lr = 0x82334FE4;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82334ff4
	if (ctx.cr6.eq) goto loc_82334FF4;
	// bl 0x82241d18
	ctx.lr = 0x82334FF4;
	sub_82241D18(ctx, base);
loc_82334FF4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x82335000;
	sub_826A41D0(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x826a4200
	ctx.lr = 0x8233500C;
	sub_826A4200(ctx, base);
	// lwz r11,5460(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5460);
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r11,408
	ctx.r4.s64 = ctx.r11.s64 + 408;
	// bl 0x826a68b0
	ctx.lr = 0x8233501C;
	sub_826A68B0(ctx, base);
loc_8233501C:
	// bl 0x826a3ae0
	ctx.lr = 0x82335020;
	sub_826A3AE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r5,r31,16
	ctx.r5.s64 = ctx.r31.s64 + 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x826a3c88
	ctx.lr = 0x8233503C;
	sub_826A3C88(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x823f6330
	ctx.lr = 0x82335048;
	sub_823F6330(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335058
	if (ctx.cr6.eq) goto loc_82335058;
	// bl 0x82241d18
	ctx.lr = 0x82335058;
	sub_82241D18(ctx, base);
loc_82335058:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x82335064;
	sub_826A41D0(ctx, base);
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r3,0(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// bl 0x826a4200
	ctx.lr = 0x82335070;
	sub_826A4200(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// vor128 v1,v77,v77
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r10,-32496
	ctx.r11.s64 = ctx.r10.s64 + -32496;
	// lwz r3,5460(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 5460);
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x8250f290
	ctx.lr = 0x82335094;
	sub_8250F290(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823350A8"))) PPC_WEAK_FUNC(sub_823350A8);
PPC_FUNC_IMPL(__imp__sub_823350A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823350B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,5460(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5460);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,21744(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21744, ctx.r28.u32);
	// bl 0x8250f4b0
	ctx.lr = 0x823350D0;
	sub_8250F4B0(ctx, base);
	// lwz r3,5460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5460);
	// lwz r4,5464(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823350E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,5464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5464, ctx.r28.u32);
	// lwz r3,5460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5460);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,5460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82335120
	if (ctx.cr6.eq) goto loc_82335120;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82335120:
	// lwz r30,5468(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5468);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,5460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5460, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x82335148;
	sub_82547D80(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r30,5472(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5472);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82335164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82547d80
	ctx.lr = 0x8233516C;
	sub_82547D80(ctx, base);
	// lwz r11,5444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5444);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823351ac
	if (ctx.cr6.eq) goto loc_823351AC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823351ac
	if (!ctx.cr6.gt) goto loc_823351AC;
loc_82335188:
	// bl 0x826a4210
	ctx.lr = 0x8233518C;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336228
	ctx.lr = 0x8233519C;
	sub_82336228(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82335188
	if (ctx.cr6.lt) goto loc_82335188;
loc_823351AC:
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// li r29,6
	ctx.r29.s64 = 6;
loc_823351B4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823351c8
	if (ctx.cr6.eq) goto loc_823351C8;
	// bl 0x825469e0
	ctx.lr = 0x823351C4;
	sub_825469E0(ctx, base);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_823351C8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,260
	ctx.r30.s64 = ctx.r30.s64 + 260;
	// bne 0x823351b4
	if (!ctx.cr0.eq) goto loc_823351B4;
	// lwz r3,5456(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5456);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823351e4
	if (ctx.cr6.eq) goto loc_823351E4;
	// bl 0x82241d18
	ctx.lr = 0x823351E4;
	sub_82241D18(ctx, base);
loc_823351E4:
	// lwz r3,5448(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5448);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823351f4
	if (ctx.cr6.eq) goto loc_823351F4;
	// bl 0x82241d18
	ctx.lr = 0x823351F4;
	sub_82241D18(ctx, base);
loc_823351F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823351FC"))) PPC_WEAK_FUNC(sub_823351FC);
PPC_FUNC_IMPL(__imp__sub_823351FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82335200"))) PPC_WEAK_FUNC(sub_82335200);
PPC_FUNC_IMPL(__imp__sub_82335200) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82335208;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x823353e8
	ctx.lr = 0x8233521C;
	sub_823353E8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823352fc
	if (ctx.cr6.eq) goto loc_823352FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823353dc
	if (!ctx.cr6.eq) goto loc_823353DC;
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823352ac
	if (ctx.cr6.eq) goto loc_823352AC;
	// lfs f0,5428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// stfs f0,5428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5428, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x823352ac
	if (!ctx.cr6.eq) goto loc_823352AC;
	// lwz r30,5472(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5472);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82825330
	ctx.lr = 0x82335274;
	sub_82825330(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// bl 0x82829b80
	ctx.lr = 0x82335280;
	sub_82829B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823352a0
	if (!ctx.cr0.eq) goto loc_823352A0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8282a7b0
	ctx.lr = 0x823352A0;
	sub_8282A7B0(ctx, base);
loc_823352A0:
	// addi r4,r31,5484
	ctx.r4.s64 = ctx.r31.s64 + 5484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823362f8
	ctx.lr = 0x823352AC;
	sub_823362F8(ctx, base);
loc_823352AC:
	// lwz r11,5508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823352e4
	if (!ctx.cr6.eq) goto loc_823352E4;
	// lwz r3,5472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5472);
	// bl 0x828253a0
	ctx.lr = 0x823352C0;
	sub_828253A0(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,14432
	ctx.r11.s64 = ctx.r11.s64 + 14432;
	// lfs f0,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823352e4
	if (!ctx.cr6.gt) goto loc_823352E4;
	// addi r3,r11,116
	ctx.r3.s64 = ctx.r11.s64 + 116;
	// bl 0x8250f688
	ctx.lr = 0x823352DC;
	sub_8250F688(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,5508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5508, ctx.r11.u32);
loc_823352E4:
	// lwz r3,5472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5472);
	// bl 0x8255b3a0
	ctx.lr = 0x823352EC;
	sub_8255B3A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823353dc
	if (ctx.cr0.eq) goto loc_823353DC;
	// li r4,4
	ctx.r4.s64 = 4;
	// b 0x823353d4
	goto loc_823353D4;
loc_823352FC:
	// lfs f0,5428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// fsubs f12,f0,f31
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r30,r11,14432
	ctx.r30.s64 = ctx.r11.s64 + 14432;
	// lfs f13,31512(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// bge cr6,0x82335344
	if (!ctx.cr6.lt) goto loc_82335344;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82335344
	if (ctx.cr6.lt) goto loc_82335344;
	// lfs f13,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f0,376(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// stfs f0,5436(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5436, temp.u32);
loc_82335344:
	// lwz r11,5500(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5500);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82335374
	if (!ctx.cr6.eq) goto loc_82335374;
	// lwz r3,5468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5468);
	// bl 0x828253a0
	ctx.lr = 0x8233535C;
	sub_828253A0(ctx, base);
	// lfs f0,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82335374
	if (!ctx.cr6.gt) goto loc_82335374;
	// addi r3,r30,52
	ctx.r3.s64 = ctx.r30.s64 + 52;
	// bl 0x8250f688
	ctx.lr = 0x82335370;
	sub_8250F688(ctx, base);
	// stw r29,5500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5500, ctx.r29.u32);
loc_82335374:
	// lwz r11,5504(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823353a0
	if (!ctx.cr6.eq) goto loc_823353A0;
	// lwz r3,5468(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5468);
	// bl 0x828253a0
	ctx.lr = 0x82335388;
	sub_828253A0(ctx, base);
	// lfs f0,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x823353a0
	if (!ctx.cr6.gt) goto loc_823353A0;
	// addi r3,r30,84
	ctx.r3.s64 = ctx.r30.s64 + 84;
	// bl 0x8250f688
	ctx.lr = 0x8233539C;
	sub_8250F688(ctx, base);
	// stw r29,5504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5504, ctx.r29.u32);
loc_823353A0:
	// lwz r11,5428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823353dc
	if (ctx.cr6.eq) goto loc_823353DC;
	// lfs f0,5428(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5428);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsel f13,f12,f0,f13
	ctx.f13.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// stfs f13,5428(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5428, temp.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823353dc
	if (!ctx.cr6.eq) goto loc_823353DC;
	// li r4,1
	ctx.r4.s64 = 1;
loc_823353D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82335d98
	ctx.lr = 0x823353DC;
	sub_82335D98(ctx, base);
loc_823353DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823353E8"))) PPC_WEAK_FUNC(sub_823353E8);
PPC_FUNC_IMPL(__imp__sub_823353E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823353F0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d28
	ctx.lr = 0x823353F8;
	__savefpr_28(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac114
	ctx.lr = 0x82335400;
	__savevmx_116(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,5436(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5436);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// addi r30,r11,-2340
	ctx.r30.s64 = ctx.r11.s64 + -2340;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82335448
	if (ctx.cr6.eq) goto loc_82335448;
	// lfs f0,5436(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5436);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// stfs f0,5436(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 5436, temp.u32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82335448
	if (!ctx.cr6.eq) goto loc_82335448;
	// addi r4,r3,5488
	ctx.r4.s64 = ctx.r3.s64 + 5488;
	// bl 0x823362f8
	ctx.lr = 0x82335448;
	sub_823362F8(ctx, base);
loc_82335448:
	// vspltisw128 v125,0
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lvlx128 v124,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,24
	ctx.r28.s64 = 24;
	// addi r30,r11,14432
	ctx.r30.s64 = ctx.r11.s64 + 14432;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r29,20
	ctx.r29.s64 = 20;
	// vor128 v123,v77,v77
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// vupkd3d128 v127,v125,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v125.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v125.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v127 = vTemp;
	// li r11,28
	ctx.r11.s64 = 28;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// lvlx v13,r30,r28
	temp.u32 = ctx.r30.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v126,r30,r29
	temp.u32 = ctx.r30.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v127,v127
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vrlimi128 v126,v13,4,3
	_mm_store_ps(ctx.v126.f32, _mm_blend_ps(_mm_load_ps(ctx.v126.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvlx v13,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v124,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// vpermwi128 v122,v127,234
	_mm_store_si128((__m128i*)ctx.v122.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x15));
	// vpermwi128 v121,v127,186
	_mm_store_si128((__m128i*)ctx.v121.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x45));
	// lfs f1,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f1.f64 = double(temp.f32);
	// vrlimi128 v12,v0,14,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 228), 14));
	// vpermwi128 v120,v127,174
	_mm_store_si128((__m128i*)ctx.v120.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x51));
	// lfs f30,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f30.f64 = double(temp.f32);
	// lfs f29,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f29.f64 = double(temp.f32);
	// vor128 v119,v122,v122
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v118,v121,v121
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// vrlimi128 v126,v13,3,2
	_mm_store_ps(ctx.v126.f32, _mm_blend_ps(_mm_load_ps(ctx.v126.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vor128 v117,v120,v120
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// vor128 v116,v12,v12
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// bl 0x82574dd0
	ctx.lr = 0x823354C4;
	sub_82574DD0(ctx, base);
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82574dd0
	ctx.lr = 0x823354D4;
	sub_82574DD0(ctx, base);
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82574dd0
	ctx.lr = 0x823354E4;
	sub_82574DD0(ctx, base);
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmuls f8,f12,f9
	ctx.f8.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f12,f0
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmuls f6,f11,f9
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// lfs f10,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,108
	ctx.r11.s64 = ctx.r1.s64 + 108;
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lvlx v13,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// fmuls f3,f8,f13
	ctx.f3.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f8,f7,f11,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 * ctx.f11.f64 + ctx.f8.f64));
	// stfs f8,100(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmsubs f13,f6,f13,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f13.f64 - ctx.f5.f64));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f13,96(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// fmadds f13,f11,f0,f3
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f3.f64));
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmsubs f12,f7,f12,f6
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64 - ctx.f6.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f0,f9,f10
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f13,112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// vrlimi128 v11,v13,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// lvlx v8,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v124,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// vrlimi128 v13,v124,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// vmrghw128 v10,v119,v117
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v117.u32), _mm_load_si128((__m128i*)ctx.v119.u32)));
	// vmrghw128 v9,v118,v116
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v116.u32), _mm_load_si128((__m128i*)ctx.v118.u32)));
	// vor128 v5,v127,v127
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvlx v1,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v7,v119,v117
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v117.u32), _mm_load_si128((__m128i*)ctx.v119.u32)));
	// vrlimi128 v1,v8,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 4));
	// lvlx v8,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v6,v118,v116
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v116.u32), _mm_load_si128((__m128i*)ctx.v118.u32)));
	// vrlimi128 v8,v124,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// vrlimi128 v12,v0,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// vmrghw v0,v10,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vmrglw v13,v10,v9
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vrlimi128 v5,v123,14,0
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v123.f32), 228), 14));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// vmrghw v10,v7,v6
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vrlimi128 v1,v8,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vmrglw v9,v7,v6
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmsum4fp128 v3,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v2,v12,v13
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// vor128 v123,v5,v5
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vmsum4fp128 v5,v11,v13
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v31,v12,v10
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// fmr f1,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = ctx.f31.f64;
	// vmsum4fp128 v30,v11,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v29,v11,v10
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v7,v76,v0
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v6,v76,v13
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v4,v76,v10
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v12,v12,v9
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v28,v76,v9
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v9,v1,v9
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v13,v1,v13
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v10,v1,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v0,v1,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmrghw v5,v5,v30
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v11,v11,v29
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v8,v7,v4
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v7,v3,v31
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v12,v2,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v6,v6,v28
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v13,v13,v9
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw128 v118,v11,v5
	_mm_store_si128((__m128i*)ctx.v118.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw128 v119,v7,v12
	_mm_store_si128((__m128i*)ctx.v119.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw128 v117,v8,v6
	_mm_store_si128((__m128i*)ctx.v117.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw128 v116,v0,v13
	_mm_store_si128((__m128i*)ctx.v116.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// bl 0x82574dd0
	ctx.lr = 0x82335670;
	sub_82574DD0(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// bl 0x82574dd0
	ctx.lr = 0x82335680;
	sub_82574DD0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,108
	ctx.r4.s64 = ctx.r1.s64 + 108;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82574dd0
	ctx.lr = 0x82335690;
	sub_82574DD0(ctx, base);
	// lfs f12,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f12.f64 = double(temp.f32);
	// lfs f10,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f10.f64 = double(temp.f32);
	// addi r11,r1,116
	ctx.r11.s64 = ctx.r1.s64 + 116;
	// lfs f9,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f4,f12,f10
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f10.f64));
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f5,f12,f9
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// lfs f11,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f11.f64 = double(temp.f32);
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f9
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f7,f11,f0
	ctx.f7.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f6,f0,f13
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// fmuls f4,f0,f10
	ctx.f4.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f4,104(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fneg f4,f13
	ctx.f4.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f4,108(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmuls f4,f11,f10
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f10.f64));
	// fmuls f10,f9,f10
	ctx.f10.f64 = double(float(ctx.f9.f64 * ctx.f10.f64));
	// stfs f10,120(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// fmuls f10,f8,f13
	ctx.f10.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmsubs f13,f5,f13,f7
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f7.f64));
	// stfs f13,116(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// fmadds f9,f6,f12,f8
	ctx.f9.f64 = double(float(ctx.f6.f64 * ctx.f12.f64 + ctx.f8.f64));
	// stfs f9,116(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmsubs f13,f6,f11,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f11.f64 - ctx.f5.f64));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lvlx v31,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// vmrghw128 v10,v121,v123
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), _mm_load_si128((__m128i*)ctx.v121.u32)));
	// vrlimi128 v13,v124,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// lvlx v3,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v0,v122,v120
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v120.u32), _mm_load_si128((__m128i*)ctx.v122.u32)));
	// lvlx v1,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v7,v121,v123
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), _mm_load_si128((__m128i*)ctx.v121.u32)));
	// vrlimi128 v11,v3,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 57), 4));
	// lvlx v3,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v9,v122,v120
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v120.u32), _mm_load_si128((__m128i*)ctx.v122.u32)));
	// vrlimi128 v3,v1,4,3
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 57), 4));
	// fmadds f0,f12,f0,f10
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f10.f64));
	// lvlx v1,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v31,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 4));
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// vmrghw v31,v0,v10
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// lvlx v8,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vrlimi128 v1,v124,4,3
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// vrlimi128 v8,v124,4,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v124.f32), 57), 4));
	// vmrghw v10,v9,v7
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vmrglw128 v2,v118,v117
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v117.u32), _mm_load_si128((__m128i*)ctx.v118.u32)));
	// vrlimi128 v3,v1,3,2
	_mm_store_ps(ctx.v3.f32, _mm_blend_ps(_mm_load_ps(ctx.v3.f32), _mm_permute_ps(_mm_load_ps(ctx.v1.f32), 78), 3));
	// vmrglw128 v4,v119,v116
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v116.u32), _mm_load_si128((__m128i*)ctx.v119.u32)));
	// vrlimi128 v12,v8,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 3));
	// vmrglw v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw128 v5,v118,v117
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v117.u32), _mm_load_si128((__m128i*)ctx.v118.u32)));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vmsum4fp128 v1,v11,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw128 v6,v119,v116
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v116.u32), _mm_load_si128((__m128i*)ctx.v119.u32)));
	// vmsum4fp128 v8,v11,v31
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v31.f32), 0xFF));
	// vmrghw v7,v4,v2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrglw v4,v4,v2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmsum4fp128 v30,v3,v9
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v2,v3,v0
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// vmsum4fp128 v29,v12,v9
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmrghw v13,v6,v5
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmsum4fp128 v28,v12,v0
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmrglw v6,v6,v5
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmsum4fp128 v5,v11,v0
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// vmsum4fp128 v27,v12,v10
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// vmsum4fp128 v12,v12,v31
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v31.f32), 0xFF));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// vmsum4fp128 v11,v11,v9
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v9,v76,v9
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vmsum4fp128 v0,v76,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmrghw v8,v8,v1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmsum4fp128 v1,v3,v10
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v3,v3,v31
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v31.f32), 0xFF));
	// vmsum4fp128 v10,v76,v10
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmrghw v2,v2,v30
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmsum4fp128 v31,v76,v31
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v76.f32), _mm_load_ps(ctx.v31.f32), 0xFF));
	// vmrghw v3,v3,v1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v1,v28,v29
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), _mm_load_si128((__m128i*)ctx.v28.u32)));
	// vmrghw v11,v5,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v3,v3,v2
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v12,v12,v27
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmrghw v0,v0,v9
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v10,v31,v10
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// vmrghw v11,v8,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmsum4fp128 v5,v3,v13
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmrghw v12,v12,v1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// vmsum4fp128 v9,v3,v7
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v8,v3,v4
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmrghw v0,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmsum4fp128 v3,v3,v6
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v30,v11,v13
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v31,v11,v7
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v29,v11,v6
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v10,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v2,v12,v7
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v1,v12,v4
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v11,v11,v4
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v7,v0,v7
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v13,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v4,v0,v4
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v12,v12,v6
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmsum4fp128 v0,v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmrghw v9,v5,v9
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v8,v3,v8
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v10,v10,v2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v8,v30,v31
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vmrghw v11,v29,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vmrghw v13,v13,v7
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmrghw v12,v12,v1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v12.u32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghw v0,v0,v4
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v0.u32)));
	// vmrghw v11,v8,v11
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v12,v10,v12
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r6,240(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r8,256(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// ld r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r7,248(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r10,272(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// ld r9,264(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// ld r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x8255f228
	ctx.lr = 0x823358DC;
	sub_8255F228(ctx, base);
	// lwz r11,5476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5476);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// fmr f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f28.f64;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,5476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5476, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x8282b920
	ctx.lr = 0x82335914;
	sub_8282B920(ctx, base);
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// bl 0x8282c0d8
	ctx.lr = 0x8233591C;
	sub_8282C0D8(ctx, base);
	// lwz r11,5476(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5476);
	// lwz r10,5460(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5460);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// li r6,0
	ctx.r6.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8282c270
	ctx.lr = 0x82335948;
	sub_8282C270(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82335d80
	if (ctx.cr6.eq) goto loc_82335D80;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82335d80
	if (ctx.cr6.eq) goto loc_82335D80;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r10,r11,-27072
	ctx.r10.s64 = ctx.r11.s64 + -27072;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r11,30468(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 30468);
	// addi r8,r8,30480
	ctx.r8.s64 = ctx.r8.s64 + 30480;
	// clrlwi. r7,r11,31
	ctx.r7.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// bne 0x823359a8
	if (!ctx.cr0.eq) goto loc_823359A8;
	// lvlx v13,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stw r11,30468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30468, ctx.r11.u32);
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x823359ac
	goto loc_823359AC;
loc_823359A8:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_823359AC:
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm. r7,r11,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r8,r8,30496
	ctx.r8.s64 = ctx.r8.s64 + 30496;
	// bne 0x823359f0
	if (!ctx.cr0.eq) goto loc_823359F0;
	// lvlx v13,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30468, ctx.r11.u32);
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x823359f4
	goto loc_823359F4;
loc_823359F0:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_823359F4:
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm. r4,r11,0,29,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r7,8
	ctx.r7.s64 = 8;
	// addi r8,r8,30512
	ctx.r8.s64 = ctx.r8.s64 + 30512;
	// bne 0x82335a38
	if (!ctx.cr0.eq) goto loc_82335A38;
	// lvlx v13,r10,r28
	temp.u32 = ctx.r10.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30468, ctx.r11.u32);
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v12,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82335a3c
	goto loc_82335A3C;
loc_82335A38:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82335A3C:
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm. r4,r11,0,28,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,30528
	ctx.r8.s64 = ctx.r8.s64 + 30528;
	// bne 0x82335a7c
	if (!ctx.cr0.eq) goto loc_82335A7C;
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvlx v0,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// stw r11,30468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30468, ctx.r11.u32);
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82335a88
	goto loc_82335A88;
loc_82335A7C:
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82335A88:
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// rlwinm. r5,r11,0,27,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,30544
	ctx.r8.s64 = ctx.r8.s64 + 30544;
	// bne 0x82335ac0
	if (!ctx.cr0.eq) goto loc_82335AC0;
	// lvlx v13,r10,r6
	temp.u32 = ctx.r10.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r10,r29
	temp.u32 = ctx.r10.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30468, ctx.r11.u32);
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82335ac4
	goto loc_82335AC4;
loc_82335AC0:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82335AC4:
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r8,r8,30560
	ctx.r8.s64 = ctx.r8.s64 + 30560;
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm. r6,r11,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82335b08
	if (!ctx.cr0.eq) goto loc_82335B08;
	// lvlx v0,r10,r7
	temp.u32 = ctx.r10.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,r10,r28
	temp.u32 = ctx.r10.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r9)
	PPC_STORE_U32(ctx.r9.u32 + 30468, ctx.r11.u32);
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vor v2,v13,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v2,v12,2,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v2,v0,1,1
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 1));
	// stvx128 v2,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82335b0c
	goto loc_82335B0C;
loc_82335B08:
	// lvx128 v2,r0,r8
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82335B0C:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vor128 v11,v77,v77
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r10,12
	ctx.r10.s64 = 12;
	// vor128 v9,v67,v67
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vspltw128 v6,v127,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x0));
	// lis r8,-32243
	ctx.r8.s64 = -2113077248;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r8,r8,31512
	ctx.r8.s64 = ctx.r8.s64 + 31512;
	// lvrx v0,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r11,r7,31008
	ctx.r11.s64 = ctx.r7.s64 + 31008;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// vsldoi v12,v0,v0,4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v0.u8), 12));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r10,r10,30912
	ctx.r10.s64 = ctx.r10.s64 + 30912;
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r9,30928
	ctx.r9.s64 = ctx.r9.s64 + 30928;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// vor v12,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vspltw v8,v10,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vspltw v10,v0,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// addi r11,r11,30864
	ctx.r11.s64 = ctx.r11.s64 + 30864;
	// vspltw v27,v0,3
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// vsel v9,v12,v11,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vspltw v7,v0,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v5,v0,2
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// vspltw v3,v0,3
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r8,30880
	ctx.r11.s64 = ctx.r8.s64 + 30880;
	// vmulfp128 v11,v9,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// vspltw v30,v0,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v28,v0,1
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// addi r10,r10,30944
	ctx.r10.s64 = ctx.r10.s64 + 30944;
	// vspltw v26,v0,2
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// vspltw v24,v0,3
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vspltw v4,v13,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v1,v13,2
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// addi r11,r9,30896
	ctx.r11.s64 = ctx.r9.s64 + 30896;
	// vspltw v31,v13,3
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v29,v12,0
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v22,v13,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltw v20,v13,1
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v16,v13,2
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw128 v62,v13,3
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v0,v11,v27
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v27.f32)));
	// vspltw v27,v12,1
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v25,v12,2
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v23,v12,3
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vrfin v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v8,v10,v0,v11
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v0,v8,v8
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v10,v7,v0,v6
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v13,v0,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v7,v5,v12,v10
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v6,v4,v13,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v9,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v8,v11,v11
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v1,v0,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v7,v3,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v4,v9,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v21,v10,v10
	_mm_store_ps(ctx.v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v5,v9,v11
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v17,v13,v12
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v6,v31,v9,v6
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v7,v30,v10,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v30,v12,v10
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v19,v12,v12
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// vmaddfp v12,v29,v12,v6
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v6.f32)));
	// vspltw v31,v11,0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v63,v0,v13
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v18,v11,1
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// vmulfp128 v15,v13,v13
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v14,v11,2
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// vmaddfp v13,v28,v13,v7
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v60,v8,v0
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r11,r8,-27088
	ctx.r11.s64 = ctx.r8.s64 + -27088;
	// vmulfp128 v61,v0,v0
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v3,v10,v9
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v11,v11,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x0));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// vspltisw v9,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x1)));
	// lvx128 v1,r0,r7
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v29,v126,v126
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// stvx128 v1,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,5476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5476);
	// vcfsx v9,v9,1
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v9.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lfs f1,16(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// vmaddfp v0,v27,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v12,v63,v63
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// vmaddfp v13,v26,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// lwz r3,5460(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5460);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v8,v1,v1
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v1,r0,r9
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v25,v5,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v24,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v23,v3,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v22,v21,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v21.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v31,v30,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v20,v19,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v19.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v18,v17,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v17.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v16,v15,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v15.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddcfp128 v12,v14,v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vor128 v0,v61,v61
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vmaddcfp128 v0,v62,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vmaddcfp128 v13,v11,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vperm v11,v13,v0,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v7,v13,v0,v6
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm v12,v13,v0,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm v8,v13,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vperm v6,v13,v0,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm v0,v13,v0,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vmulfp128 v13,v10,v7
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v11,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vor v1,v29,v29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v29.u8));
	// vmulfp128 v12,v8,v6
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v13,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vrsqrtefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmulfp128 v12,v11,v9
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp128 v8,v11,v125
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v125.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v12,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v2,v0,v10,v8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// bl 0x8250f3b8
	ctx.lr = 0x82335D80;
	sub_8250F3B8(ctx, base);
loc_82335D80:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac3ac
	ctx.lr = 0x82335D8C;
	__restvmx_116(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d74
	ctx.lr = 0x82335D94;
	__restfpr_28(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82335D98"))) PPC_WEAK_FUNC(sub_82335D98);
PPC_FUNC_IMPL(__imp__sub_82335D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82335DA0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r30,31944(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,162
	ctx.r3.s64 = ctx.r1.s64 + 162;
	// sth r30,160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 160, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82335DCC;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,672(r1)
	PPC_STORE_U16(ctx.r1.u32 + 672, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,674
	ctx.r3.s64 = ctx.r1.s64 + 674;
	// bl 0x82fa7cf0
	ctx.lr = 0x82335DE0;
	sub_82FA7CF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// li r28,0
	ctx.r28.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82335DF0:
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// stwu r28,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82335df0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82335DF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// beq cr6,0x82336058
	if (ctx.cr6.eq) goto loc_82336058;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// blt cr6,0x82335fc8
	if (ctx.cr6.lt) goto loc_82335FC8;
	// beq cr6,0x82335e7c
	if (ctx.cr6.eq) goto loc_82335E7C;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// blt cr6,0x82335e70
	if (ctx.cr6.lt) goto loc_82335E70;
	// bne cr6,0x82336058
	if (!ctx.cr6.eq) goto loc_82336058;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r3,5472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5472);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,14432
	ctx.r11.s64 = ctx.r11.s64 + 14432;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f1,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5428, temp.u32);
	// bl 0x82825330
	ctx.lr = 0x82335E50;
	sub_82825330(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,5452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5452);
	// addi r4,r11,-9788
	ctx.r4.s64 = ctx.r11.s64 + -9788;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x82335E68;
	sub_826A7620(ctx, base);
	// stw r28,5508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5508, ctx.r28.u32);
	// b 0x82336058
	goto loc_82336058;
loc_82335E70:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,3536
	ctx.r4.s64 = ctx.r11.s64 + 3536;
	// b 0x82335fb4
	goto loc_82335FB4;
loc_82335E7C:
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// lwz r11,5496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5496);
	// lwz r10,5492(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5492);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r9,r9,14432
	ctx.r9.s64 = ctx.r9.s64 + 14432;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r6,256
	ctx.r6.s64 = 256;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,44(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 44);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,5428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5428, temp.u32);
	// bge cr6,0x82335ef0
	if (!ctx.cr6.lt) goto loc_82335EF0;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// addi r30,r9,21076
	ctx.r30.s64 = ctx.r9.s64 + 21076;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r9,3500
	ctx.r4.s64 = ctx.r9.s64 + 3500;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// and r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x82335ED8;
	sub_8259C8E0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82563c28
	ctx.lr = 0x82335EEC;
	sub_82563C28(ctx, base);
	// b 0x82335f0c
	goto loc_82335F0C;
loc_82335EF0:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r30,r11,21076
	ctx.r30.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,3520
	ctx.r4.s64 = ctx.r10.s64 + 3520;
	// addi r5,r1,672
	ctx.r5.s64 = ctx.r1.s64 + 672;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x82335F0C;
	sub_8259C8E0(ctx, base);
loc_82335F0C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// li r6,256
	ctx.r6.s64 = 256;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r11,1588
	ctx.r4.s64 = ctx.r11.s64 + 1588;
	// bl 0x8259c8e0
	ctx.lr = 0x82335F34;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82335F40;
	sub_822E4D50(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82335F54;
	sub_822E4D50(ctx, base);
	// addi r11,r1,672
	ctx.r11.s64 = ctx.r1.s64 + 672;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r3,5452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5452);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r10,-13556
	ctx.r4.s64 = ctx.r10.s64 + -13556;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x82335F74;
	sub_826A7620(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,4
	ctx.r4.s64 = 4;
	// mulli r11,r11,260
	ctx.r11.s64 = ctx.r11.s64 * 260;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r30,r11,160
	ctx.r30.s64 = ctx.r11.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x82335F90;
	sub_822E4D50(ctx, base);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,5452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5452);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-9820
	ctx.r4.s64 = ctx.r11.s64 + -9820;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x82335FAC;
	sub_826A7620(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-9804
	ctx.r4.s64 = ctx.r11.s64 + -9804;
loc_82335FB4:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,5452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5452);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x82335FC4;
	sub_826A7620(ctx, base);
	// b 0x82336058
	goto loc_82336058;
loc_82335FC8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82336088
	ctx.lr = 0x82335FD4;
	sub_82336088(ctx, base);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,14432
	ctx.r11.s64 = ctx.r11.s64 + 14432;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stfs f0,5428(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 5428, temp.u32);
	// lwz r30,5468(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5468);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82825330
	ctx.lr = 0x82336000;
	sub_82825330(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// bl 0x82829b80
	ctx.lr = 0x8233600C;
	sub_82829B80(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233602c
	if (!ctx.cr0.eq) goto loc_8233602C;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,5464(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5464);
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8282a7b0
	ctx.lr = 0x8233602C;
	sub_8282A7B0(ctx, base);
loc_8233602C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,5452(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5452);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,-10016
	ctx.r4.s64 = ctx.r11.s64 + -10016;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x82336044;
	sub_826A7620(ctx, base);
	// addi r4,r31,5480
	ctx.r4.s64 = ctx.r31.s64 + 5480;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823362f8
	ctx.lr = 0x82336050;
	sub_823362F8(ctx, base);
	// stw r28,5504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5504, ctx.r28.u32);
	// stw r28,5500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 5500, ctx.r28.u32);
loc_82336058:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d00
	ctx.lr = 0x82336060;
	sub_822E4D00(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82336068:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82336074;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82336068
	if (!ctx.cr0.lt) goto loc_82336068;
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336088"))) PPC_WEAK_FUNC(sub_82336088);
PPC_FUNC_IMPL(__imp__sub_82336088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82336090;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
loc_823360B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823360dc
	if (ctx.cr6.eq) goto loc_823360DC;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823360dc
	if (ctx.cr6.eq) goto loc_823360DC;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8234b5f0
	ctx.lr = 0x823360DC;
	sub_8234B5F0(ctx, base);
loc_823360DC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,260
	ctx.r30.s64 = ctx.r30.s64 + 260;
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// blt cr6,0x823360b8
	if (ctx.cr6.lt) goto loc_823360B8;
	// mulli r11,r29,260
	ctx.r11.s64 = ctx.r29.s64 * 260;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336120
	if (ctx.cr6.eq) goto loc_82336120;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8286de68
	ctx.lr = 0x82336110;
	sub_8286DE68(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82336228
	ctx.lr = 0x82336120;
	sub_82336228(ctx, base);
loc_82336120:
	// lwz r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82336208
	if (ctx.cr6.eq) goto loc_82336208;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// subf r29,r28,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lis r26,-31958
	ctx.r26.s64 = -2094399488;
	// lfs f31,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
loc_82336144:
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82336208
	if (!ctx.cr6.lt) goto loc_82336208;
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lwz r11,21292(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21292);
	// srawi r9,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 2;
	// ori r10,r10,26125
	ctx.r10.u64 = ctx.r10.u64 | 26125;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// stw r11,21292(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21292, ctx.r11.u32);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r11,r11,16256
	ctx.r11.u64 = ctx.r11.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwzx r25,r11,r28
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// subf r11,r4,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x823361C8;
	sub_82FA20F0(ctx, base);
	// mulli r11,r25,260
	ctx.r11.s64 = ctx.r25.s64 * 260;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x823361EC;
	sub_8286DE68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82336228
	ctx.lr = 0x823361FC;
	sub_82336228(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82336144
	if (!ctx.cr6.eq) goto loc_82336144;
loc_82336208:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82336218
	if (ctx.cr6.eq) goto loc_82336218;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82691540
	ctx.lr = 0x82336218;
	sub_82691540(ctx, base);
loc_82336218:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336224"))) PPC_WEAK_FUNC(sub_82336224);
PPC_FUNC_IMPL(__imp__sub_82336224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336228"))) PPC_WEAK_FUNC(sub_82336228);
PPC_FUNC_IMPL(__imp__sub_82336228) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,5444(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5444);
	// bl 0x826a4158
	ctx.lr = 0x82336258;
	sub_826A4158(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82336268:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82336268
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82336268;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x82336280;
	sub_822E4D50(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x822e4d50
	ctx.lr = 0x823362A4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// lwz r3,5444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5444);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r4,r10,-16744
	ctx.r4.s64 = ctx.r10.s64 + -16744;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x823362C4;
	sub_826A7620(ctx, base);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_823362CC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x823362D8;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x823362cc
	if (!ctx.cr0.lt) goto loc_823362CC;
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

__attribute__((alias("__imp__sub_823362F8"))) PPC_WEAK_FUNC(sub_823362F8);
PPC_FUNC_IMPL(__imp__sub_823362F8) {
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
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8256d470
	ctx.lr = 0x8233631C;
	sub_8256D470(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82336358
	if (ctx.cr0.eq) goto loc_82336358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,5440(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 5440);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r8,26780
	ctx.r5.s64 = ctx.r8.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,2124(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2124);
	// bl 0x8256f138
	ctx.lr = 0x8233634C;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x82336358;
	sub_82570318(ctx, base);
loc_82336358:
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

__attribute__((alias("__imp__sub_82336370"))) PPC_WEAK_FUNC(sub_82336370);
PPC_FUNC_IMPL(__imp__sub_82336370) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336378"))) PPC_WEAK_FUNC(sub_82336378);
PPC_FUNC_IMPL(__imp__sub_82336378) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3564
	ctx.r11.s64 = ctx.r11.s64 + 3564;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x823363a4
	if (ctx.cr0.eq) goto loc_823363A4;
	// bl 0x82691540
	ctx.lr = 0x823363A4;
	sub_82691540(ctx, base);
loc_823363A4:
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

__attribute__((alias("__imp__sub_823363BC"))) PPC_WEAK_FUNC(sub_823363BC);
PPC_FUNC_IMPL(__imp__sub_823363BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823363C0"))) PPC_WEAK_FUNC(sub_823363C0);
PPC_FUNC_IMPL(__imp__sub_823363C0) {
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
	// bl 0x82336410
	ctx.lr = 0x823363E0;
	sub_82336410(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823363f0
	if (ctx.cr0.eq) goto loc_823363F0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x823363F0;
	sub_82691540(ctx, base);
loc_823363F0:
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

__attribute__((alias("__imp__sub_8233640C"))) PPC_WEAK_FUNC(sub_8233640C);
PPC_FUNC_IMPL(__imp__sub_8233640C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336410"))) PPC_WEAK_FUNC(sub_82336410);
PPC_FUNC_IMPL(__imp__sub_82336410) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,3596
	ctx.r11.s64 = ctx.r11.s64 + 3596;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82336e28
	ctx.lr = 0x82336434;
	sub_82336E28(ctx, base);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336444
	if (ctx.cr6.eq) goto loc_82336444;
	// bl 0x82691540
	ctx.lr = 0x82336444;
	sub_82691540(ctx, base);
loc_82336444:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,3564
	ctx.r10.s64 = ctx.r10.s64 + 3564;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82336474"))) PPC_WEAK_FUNC(sub_82336474);
PPC_FUNC_IMPL(__imp__sub_82336474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336478"))) PPC_WEAK_FUNC(sub_82336478);
PPC_FUNC_IMPL(__imp__sub_82336478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82336480;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r28,r11,31024
	ctx.r28.s64 = ctx.r11.s64 + 31024;
	// addi r29,r31,48
	ctx.r29.s64 = ctx.r31.s64 + 48;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lfs f31,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8256c298
	ctx.lr = 0x823364C4;
	sub_8256C298(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lvx128 v127,r0,r29
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x8255e498
	ctx.lr = 0x823364D4;
	sub_8255E498(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82336538
	if (ctx.cr0.eq) goto loc_82336538;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82336538
	if (ctx.cr6.eq) goto loc_82336538;
	// lwz r11,440(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 440);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltw128 v8,v127,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r8,r11,80
	ctx.r8.s64 = ctx.r11.s64 + 80;
	// vspltw128 v7,v127,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// li r7,16
	ctx.r7.s64 = 16;
	// vspltw128 v6,v127,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// lvx128 v13,r8,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r8,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v11,v8,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r8,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v7,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v6,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82336540
	goto loc_82336540;
loc_82336538:
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82336540:
	// li r10,96
	ctx.r10.s64 = 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r27,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r27.u32);
	// stvx128 v0,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82569be0
	ctx.lr = 0x8233655C;
	sub_82569BE0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r31,16
	ctx.r4.s64 = ctx.r31.s64 + 16;
	// lfs f0,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,688(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 688, temp.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336594
	if (ctx.cr6.eq) goto loc_82336594;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x8256c298
	ctx.lr = 0x82336590;
	sub_8256C298(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
loc_82336594:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r30,r11,27984
	ctx.r30.s64 = ctx.r11.s64 + 27984;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// lfs f13,652(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 652);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8256c298
	ctx.lr = 0x823365D0;
	sub_8256C298(ctx, base);
	// lfs f0,956(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 956);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lfs f13,160(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823365fc
	if (!ctx.cr6.eq) goto loc_823365FC;
	// lfs f13,164(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 164);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x823365fc
	if (!ctx.cr6.eq) goto loc_823365FC;
	// lfs f13,168(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 168);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82336610
	if (ctx.cr6.eq) goto loc_82336610;
loc_823365FC:
	// stfs f0,160(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 160, temp.u32);
	// stw r27,368(r3)
	PPC_STORE_U32(ctx.r3.u32 + 368, ctx.r27.u32);
	// stfs f0,164(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 164, temp.u32);
	// stfs f0,168(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 168, temp.u32);
	// bl 0x82569be0
	ctx.lr = 0x82336610;
	sub_82569BE0(ctx, base);
loc_82336610:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336624"))) PPC_WEAK_FUNC(sub_82336624);
PPC_FUNC_IMPL(__imp__sub_82336624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336628"))) PPC_WEAK_FUNC(sub_82336628);
PPC_FUNC_IMPL(__imp__sub_82336628) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336650
	if (ctx.cr6.eq) goto loc_82336650;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x82336650;
	sub_8256C608(ctx, base);
loc_82336650:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336664
	if (ctx.cr6.eq) goto loc_82336664;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x82336664;
	sub_8256C608(ctx, base);
loc_82336664:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82336678
	if (ctx.cr6.eq) goto loc_82336678;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x82336678;
	sub_8256C608(ctx, base);
loc_82336678:
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

__attribute__((alias("__imp__sub_8233668C"))) PPC_WEAK_FUNC(sub_8233668C);
PPC_FUNC_IMPL(__imp__sub_8233668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336690"))) PPC_WEAK_FUNC(sub_82336690);
PPC_FUNC_IMPL(__imp__sub_82336690) {
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
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x823366d8
	if (!ctx.cr6.eq) goto loc_823366D8;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// beq cr6,0x823366d8
	if (ctx.cr6.eq) goto loc_823366D8;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823366d8
	if (ctx.cr6.eq) goto loc_823366D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x8256cd28
	ctx.lr = 0x823366D8;
	sub_8256CD28(ctx, base);
loc_823366D8:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82336758
	if (ctx.cr6.eq) goto loc_82336758;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// beq cr6,0x82336758
	if (ctx.cr6.eq) goto loc_82336758;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// beq cr6,0x82336730
	if (ctx.cr6.eq) goto loc_82336730;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82336720
	if (ctx.cr6.eq) goto loc_82336720;
	// cmpwi cr6,r30,10
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 10, ctx.xer);
	// beq cr6,0x82336714
	if (ctx.cr6.eq) goto loc_82336714;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// bne cr6,0x82336770
	if (!ctx.cr6.eq) goto loc_82336770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336e28
	ctx.lr = 0x82336710;
	sub_82336E28(ctx, base);
	// b 0x82336770
	goto loc_82336770;
loc_82336714:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82336d80
	ctx.lr = 0x8233671C;
	sub_82336D80(ctx, base);
	// b 0x82336770
	goto loc_82336770;
loc_82336720:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336770
	if (ctx.cr6.eq) goto loc_82336770;
	// b 0x82336748
	goto loc_82336748;
loc_82336730:
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8256cb80
	ctx.lr = 0x8233673C;
	sub_8256CB80(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82336770
	if (!ctx.cr6.eq) goto loc_82336770;
loc_82336748:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8256cb80
	ctx.lr = 0x82336754;
	sub_8256CB80(ctx, base);
	// b 0x82336770
	goto loc_82336770;
loc_82336758:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x8256cd28
	ctx.lr = 0x82336764;
	sub_8256CD28(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// bl 0x8256cd28
	ctx.lr = 0x82336770;
	sub_8256CD28(ctx, base);
loc_82336770:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_8233678C"))) PPC_WEAK_FUNC(sub_8233678C);
PPC_FUNC_IMPL(__imp__sub_8233678C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336790"))) PPC_WEAK_FUNC(sub_82336790);
PPC_FUNC_IMPL(__imp__sub_82336790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82336798;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336c58
	if (ctx.cr6.eq) goto loc_82336C58;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82336c58
	if (!ctx.cr6.eq) goto loc_82336C58;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r25,-31964
	ctx.r25.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f31,-2340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// li r6,32
	ctx.r6.s64 = 32;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r24,2240(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r23,r8,-2340
	ctx.r23.s64 = ctx.r8.s64 + -2340;
	// bl 0x82667c80
	ctx.lr = 0x823367FC;
	sub_82667C80(ctx, base);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r28,1
	ctx.r28.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r7,3
	ctx.r7.s64 = 3;
	// stw r28,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// ori r31,r8,2048
	ctx.r31.u64 = ctx.r8.u64 | 2048;
	// lwz r5,12832(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12832);
	// subfic r5,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r5.s64 = 0 - ctx.r5.s64;
	// subfe r5,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r5.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rldicr r30,r11,37,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u64, 37) & 0xFFFFFFFFFFFFFFFF;
	// lwz r11,10548(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10548);
	// and r10,r5,r28
	ctx.r10.u64 = ctx.r5.u64 & ctx.r28.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwimi r11,r10,0,31,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0x1) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFE);
	// stw r11,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r11.u32);
	// li r8,255
	ctx.r8.s64 = 255;
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r7,14,15,17
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 14) & 0x1C000) | (ctx.r9.u64 & 0xFFFFFFFFFFFE3FFF);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// addi r7,r6,31552
	ctx.r7.s64 = ctx.r6.s64 + 31552;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// ori r9,r9,1792
	ctx.r9.u64 = ctx.r9.u64 | 1792;
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
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
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stb r8,10498(r11)
	PPC_STORE_U8(ctx.r11.u32 + 10498, ctx.r8.u8);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 268435456;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r29.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r29.u32);
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// stw r11,10460(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10460, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,428(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 428);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,28(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// addi r5,r11,240
	ctx.r5.s64 = ctx.r11.s64 + 240;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233693C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r10,15
	ctx.r10.s64 = 15;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r8,-31956
	ctx.r8.s64 = -2094268416;
	// stw r10,12292(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12292, ctx.r10.u32);
	// addi r27,r8,-3808
	ctx.r27.s64 = ctx.r8.s64 + -3808;
	// lwz r11,10460(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10460);
	// lwz r8,12816(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12816);
	// subfic r8,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r8.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// rlwimi r10,r11,0,0,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFFFF0) | (ctx.r10.u64 & 0xFFFFFFFF0000000F);
	// stw r10,10460(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10460, ctx.r10.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10548(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwimi r9,r28,8,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 8) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// stw r9,10548(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10548, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r4,160(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82668790
	ctx.lr = 0x823369A8;
	sub_82668790(ctx, base);
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82668b38
	ctx.lr = 0x823369B4;
	sub_82668B38(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r10,8072
	ctx.r10.s64 = ctx.r10.s64 + 8072;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// stw r10,12240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12240, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82663ea0
	ctx.lr = 0x823369E4;
	sub_82663EA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82663d50
	ctx.lr = 0x823369F0;
	sub_82663D50(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82663dc0
	ctx.lr = 0x823369FC;
	sub_82663DC0(ctx, base);
	// li r4,7
	ctx.r4.s64 = 7;
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82663e30
	ctx.lr = 0x82336A08;
	sub_82663E30(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82663b10
	ctx.lr = 0x82336A14;
	sub_82663B10(ctx, base);
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r10,r10,-17684
	ctx.r10.s64 = ctx.r10.s64 + -17684;
	// lis r5,-31954
	ctx.r5.s64 = -2094137344;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// rldicr r7,r8,63,63
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r5,-4400
	ctx.r5.s64 = ctx.r5.s64 + -4400;
	// li r4,0
	ctx.r4.s64 = 0;
	// lvlx v0,0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,6016(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6016, temp.u32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// stfs f13,6024(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// stfs f12,6028(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 | ctx.r7.u64;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x826682f8
	ctx.lr = 0x82336A90;
	sub_826682F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82664ce8
	ctx.lr = 0x82336A9C;
	sub_82664CE8(ctx, base);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,16
	ctx.r6.s64 = 16;
	// rldicr r30,r10,35,63
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,10688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10688, ctx.r9.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82673da8
	ctx.lr = 0x82336AF8;
	sub_82673DA8(ctx, base);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stfs f31,4(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r7,r10,-22432
	ctx.r7.s64 = ctx.r10.s64 + -22432;
	// stfs f31,8(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,13844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	// lwa r10,192(r7)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r7.u32 + 192));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stfs f31,20(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// stfs f31,28(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
	// lwa r10,192(r7)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r7.u32 + 192));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,32(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 32, temp.u32);
	// lwa r10,196(r7)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r7.u32 + 196));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stfs f31,48(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 48, temp.u32);
	// lwa r10,196(r7)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r7.u32 + 196));
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f13,52(r9)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 52, temp.u32);
	// stfs f31,56(r9)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 56, temp.u32);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// stfs f0,60(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 60, temp.u32);
	// bl 0x82664ce8
	ctx.lr = 0x82336BB4;
	sub_82664CE8(ctx, base);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r28,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r28.u32);
	// lwz r8,10548(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10548);
	// lwz r11,12832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12832);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// rlwimi r8,r11,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r8,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r8.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10568(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r9,r28,1,29,31
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r28.u32, 1) & 0x7) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r9,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r9.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// rlwinm r9,r9,0,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,10688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10688, ctx.r9.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// or r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 | ctx.r30.u64;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// lwz r11,-13544(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r29,12312(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12312, ctx.r29.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -13544);
	// bl 0x82663ea0
	ctx.lr = 0x82336C58;
	sub_82663EA0(ctx, base);
loc_82336C58:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336C64"))) PPC_WEAK_FUNC(sub_82336C64);
PPC_FUNC_IMPL(__imp__sub_82336C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336C68"))) PPC_WEAK_FUNC(sub_82336C68);
PPC_FUNC_IMPL(__imp__sub_82336C68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82336C70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,66
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 66, ctx.xer);
	// beq cr6,0x82336d24
	if (ctx.cr6.eq) goto loc_82336D24;
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// bne cr6,0x82336d78
	if (!ctx.cr6.eq) goto loc_82336D78;
	// lwz r9,88(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82336cec
	if (ctx.cr6.eq) goto loc_82336CEC;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82336CA0:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82336cb8
	if (ctx.cr6.eq) goto loc_82336CB8;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82336ca0
	if (!ctx.cr6.eq) goto loc_82336CA0;
loc_82336CB8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82336cec
	if (ctx.cr6.eq) goto loc_82336CEC;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// b 0x82336ce4
	goto loc_82336CE4;
loc_82336CC8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82336ce0
	if (ctx.cr6.eq) goto loc_82336CE0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82336CE0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82336CE4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82336cc8
	if (!ctx.cr6.eq) goto loc_82336CC8;
loc_82336CEC:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82336d78
	if (ctx.cr6.eq) goto loc_82336D78;
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82336D18;
	sub_82FA20F0(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r11.u32);
	// b 0x82336d78
	goto loc_82336D78;
loc_82336D24:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82336d60
	if (ctx.cr6.eq) goto loc_82336D60;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82336d60
	if (ctx.cr6.eq) goto loc_82336D60;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82336d54
	if (ctx.cr6.eq) goto loc_82336D54;
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82336d60
	if (!ctx.cr6.eq) goto loc_82336D60;
loc_82336D54:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cd28
	ctx.lr = 0x82336D60;
	sub_8256CD28(ctx, base);
loc_82336D60:
	// lwz r11,28(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82336d78
	if (!ctx.cr6.eq) goto loc_82336D78;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8256cd28
	ctx.lr = 0x82336D78;
	sub_8256CD28(ctx, base);
loc_82336D78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336D80"))) PPC_WEAK_FUNC(sub_82336D80);
PPC_FUNC_IMPL(__imp__sub_82336D80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82336D88;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,784(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 784);
	// lwz r29,788(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 788);
	// b 0x82336de8
	goto loc_82336DE8;
loc_82336DA0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82336de4
	if (ctx.cr6.eq) goto loc_82336DE4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82336de4
	if (ctx.cr6.eq) goto loc_82336DE4;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82336de4
	if (ctx.cr6.eq) goto loc_82336DE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8256cd28
	ctx.lr = 0x82336DD0;
	sub_8256CD28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82336de4
	if (ctx.cr0.eq) goto loc_82336DE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x8234b5f0
	ctx.lr = 0x82336DE4;
	sub_8234B5F0(ctx, base);
loc_82336DE4:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82336DE8:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82336da0
	if (ctx.cr6.lt) goto loc_82336DA0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336e08
	if (ctx.cr6.eq) goto loc_82336E08;
	// stw r10,2928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2928, ctx.r10.u32);
loc_82336E08:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,2244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2244);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336E28"))) PPC_WEAK_FUNC(sub_82336E28);
PPC_FUNC_IMPL(__imp__sub_82336E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82336E30;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,84(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r3,84
	ctx.r30.s64 = ctx.r3.s64 + 84;
	// b 0x82336e54
	goto loc_82336E54;
loc_82336E44:
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8256cb80
	ctx.lr = 0x82336E50;
	sub_8256CB80(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82336E54:
	// lwz r11,88(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82336e44
	if (!ctx.cr6.eq) goto loc_82336E44;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82336e90
	if (ctx.cr6.eq) goto loc_82336E90;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82336E88;
	sub_82FA20F0(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82336E90:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,996(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 996);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82336ea8
	if (ctx.cr6.eq) goto loc_82336EA8;
	// stw r10,2928(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2928, ctx.r10.u32);
loc_82336EA8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,2244(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2244);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,184(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 184);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82336EC8"))) PPC_WEAK_FUNC(sub_82336EC8);
PPC_FUNC_IMPL(__imp__sub_82336EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82336ee4
	if (ctx.cr6.gt) goto loc_82336EE4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82336EE4:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336EEC"))) PPC_WEAK_FUNC(sub_82336EEC);
PPC_FUNC_IMPL(__imp__sub_82336EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336EF0"))) PPC_WEAK_FUNC(sub_82336EF0);
PPC_FUNC_IMPL(__imp__sub_82336EF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82336f50
	if (ctx.cr6.eq) goto loc_82336F50;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82336f3c
	if (ctx.cr6.eq) goto loc_82336F3C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// beq cr6,0x82336f1c
	if (ctx.cr6.eq) goto loc_82336F1C;
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// beq cr6,0x82336f50
	if (ctx.cr6.eq) goto loc_82336F50;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82336F1C:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// stb r10,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r10.u8);
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// blr 
	return;
loc_82336F3C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82336F50:
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fsubs f12,f0,f1
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f11,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stfs f12,20(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// lfs f0,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 92, temp.u32);
	// lfs f13,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,96(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 96, temp.u32);
	// stfs f0,80(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 80, temp.u32);
	// stb r8,102(r9)
	PPC_STORE_U8(ctx.r9.u32 + 102, ctx.r8.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82336F94"))) PPC_WEAK_FUNC(sub_82336F94);
PPC_FUNC_IMPL(__imp__sub_82336F94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82336F98"))) PPC_WEAK_FUNC(sub_82336F98);
PPC_FUNC_IMPL(__imp__sub_82336F98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82336FA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,8
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 8, ctx.xer);
	// beq cr6,0x82337084
	if (ctx.cr6.eq) goto loc_82337084;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x82336fcc
	if (ctx.cr6.eq) goto loc_82336FCC;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// beq cr6,0x82336ff8
	if (ctx.cr6.eq) goto loc_82336FF8;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x823370fc
	if (!ctx.cr6.eq) goto loc_823370FC;
loc_82336FCC:
	// li r3,128
	ctx.r3.s64 = 128;
	// bl 0x82691500
	ctx.lr = 0x82336FD4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337074
	if (ctx.cr0.eq) goto loc_82337074;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f1,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825b60f0
	ctx.lr = 0x82336FF4;
	sub_825B60F0(ctx, base);
	// b 0x82337078
	goto loc_82337078;
loc_82336FF8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82337014
	if (ctx.cr6.eq) goto loc_82337014;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r30.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_82337014:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r3,128
	ctx.r3.s64 = 128;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82691500
	ctx.lr = 0x82337024;
	sub_82691500(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f2,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// beq 0x82337048
	if (ctx.cr0.eq) goto loc_82337048;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b60f0
	ctx.lr = 0x82337044;
	sub_825B60F0(ctx, base);
	// b 0x8233704c
	goto loc_8233704C;
loc_82337048:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233704C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stb r30,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r30.u8);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f2,92(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r10.u32 + 92, temp.u32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,102(r10)
	PPC_STORE_U8(ctx.r10.u32 + 102, ctx.r30.u8);
	// stfs f0,80(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 80, temp.u32);
	// stfs f0,96(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 96, temp.u32);
	// b 0x823370fc
	goto loc_823370FC;
loc_82337074:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82337078:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r11.u8);
	// b 0x823370fc
	goto loc_823370FC;
loc_82337084:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823370a0
	if (ctx.cr6.eq) goto loc_823370A0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r30,100(r11)
	PPC_STORE_U8(ctx.r11.u32 + 100, ctx.r30.u8);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
loc_823370A0:
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r3,128
	ctx.r3.s64 = 128;
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// bl 0x82691500
	ctx.lr = 0x823370B0;
	sub_82691500(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lfs f2,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f2.f64 = double(temp.f32);
	// beq 0x823370d4
	if (ctx.cr0.eq) goto loc_823370D4;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b60f0
	ctx.lr = 0x823370D0;
	sub_825B60F0(ctx, base);
	// b 0x823370d8
	goto loc_823370D8;
loc_823370D4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823370D8:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stb r30,103(r3)
	PPC_STORE_U8(ctx.r3.u32 + 103, ctx.r30.u8);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stfs f2,92(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 92, temp.u32);
	// stfs f0,80(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 80, temp.u32);
	// stb r30,102(r11)
	PPC_STORE_U8(ctx.r11.u32 + 102, ctx.r30.u8);
	// stfs f0,96(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 96, temp.u32);
loc_823370FC:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337108"))) PPC_WEAK_FUNC(sub_82337108);
PPC_FUNC_IMPL(__imp__sub_82337108) {
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
	// bl 0x82337158
	ctx.lr = 0x82337128;
	sub_82337158(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337138
	if (ctx.cr0.eq) goto loc_82337138;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82337138;
	sub_82691540(ctx, base);
loc_82337138:
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

__attribute__((alias("__imp__sub_82337154"))) PPC_WEAK_FUNC(sub_82337154);
PPC_FUNC_IMPL(__imp__sub_82337154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337158"))) PPC_WEAK_FUNC(sub_82337158);
PPC_FUNC_IMPL(__imp__sub_82337158) {
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
	// lwz r3,40(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,3660
	ctx.r11.s64 = ctx.r11.s64 + 3660;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82337188
	if (ctx.cr6.eq) goto loc_82337188;
	// bl 0x825469e0
	ctx.lr = 0x82337188;
	sub_825469E0(ctx, base);
loc_82337188:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,3564
	ctx.r11.s64 = ctx.r11.s64 + 3564;
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

__attribute__((alias("__imp__sub_823371A8"))) PPC_WEAK_FUNC(sub_823371A8);
PPC_FUNC_IMPL(__imp__sub_823371A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,28(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,19760(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 19760);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x823371d0
	if (ctx.cr6.lt) goto loc_823371D0;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_823371D0:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfs f13,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// ble cr6,0x823371e4
	if (!ctx.cr6.gt) goto loc_823371E4;
	// fnmsubs f0,f13,f1,f0
	ctx.f0.f64 = double(float(-(ctx.f13.f64 * ctx.f1.f64 - ctx.f0.f64)));
	// b 0x823371e8
	goto loc_823371E8;
loc_823371E4:
	// fmadds f0,f13,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
loc_823371E8:
	// stfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823371F0"))) PPC_WEAK_FUNC(sub_823371F0);
PPC_FUNC_IMPL(__imp__sub_823371F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823371F8;
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lfs f29,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f29.f64 = double(temp.f32);
	// lfs f13,288(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82337248
	if (ctx.cr6.lt) goto loc_82337248;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f13,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82337248
	if (ctx.cr6.gt) goto loc_82337248;
	// lfs f0,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// beq cr6,0x823375dc
	if (ctx.cr6.eq) goto loc_823375DC;
loc_82337248:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lfs f13,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// lfs f12,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// addi r10,r10,-22432
	ctx.r10.s64 = ctx.r10.s64 + -22432;
	// addi r29,r11,-3656
	ctx.r29.s64 = ctx.r11.s64 + -3656;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lis r31,-31964
	ctx.r31.s64 = -2094792704;
	// lwa r11,196(r10)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 196));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwa r10,192(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 192));
	// lwz r4,-144(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -144);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfd f11,80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f0
	ctx.f10.f64 = double(ctx.f0.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f0,31512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmuls f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f30,f12,f0
	ctx.f30.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82668b38
	ctx.lr = 0x823372B0;
	sub_82668B38(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r10,r10,8072
	ctx.r10.s64 = ctx.r10.s64 + 8072;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,180(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 180);
	// stw r10,12240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12240, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663ea0
	ctx.lr = 0x823372E0;
	sub_82663EA0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663d50
	ctx.lr = 0x823372EC;
	sub_82663D50(ctx, base);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663dc0
	ctx.lr = 0x823372F4;
	sub_82663DC0(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82663e30
	ctx.lr = 0x82337300;
	sub_82663E30(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// rldicr r28,r11,63,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u64, 63) & 0xFFFFFFFFFFFFFFFF;
	// addi r5,r10,-4400
	ctx.r5.s64 = ctx.r10.s64 + -4400;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826682f8
	ctx.lr = 0x82337324;
	sub_826682F8(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// beq cr6,0x823373a8
	if (ctx.cr6.eq) goto loc_823373A8;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82668790
	ctx.lr = 0x82337340;
	sub_82668790(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lfs f0,24(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stfs f0,6016(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6016, temp.u32);
	// lfs f0,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6020(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6020, temp.u32);
	// lfs f0,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6024(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6024, temp.u32);
	// lfs f0,36(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,6028(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6028, temp.u32);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// or r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 | ctx.r28.u64;
	// std r10,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r10.u64);
	// bl 0x82f8e170
	ctx.lr = 0x82337378;
	sub_82F8E170(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826631f0
	ctx.lr = 0x82337394;
	sub_826631F0(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286e720
	ctx.lr = 0x823373A4;
	sub_8286E720(ctx, base);
	// b 0x823373ec
	goto loc_823373EC;
loc_823373A8:
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bl 0x82668790
	ctx.lr = 0x823373B0;
	sub_82668790(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82668508
	ctx.lr = 0x823373C8;
	sub_82668508(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82f8e170
	ctx.lr = 0x823373D0;
	sub_82F8E170(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x826631f0
	ctx.lr = 0x823373EC;
	sub_826631F0(ctx, base);
loc_823373EC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82664ce8
	ctx.lr = 0x823373F8;
	sub_82664CE8(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r6,16
	ctx.r6.s64 = 16;
	// ori r29,r10,2048
	ctx.r29.u64 = ctx.r10.u64 | 2048;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// rldicr r28,r10,35,63
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u64, 35) & 0xFFFFFFFFFFFFFFFF;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// lwz r10,10568(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwinm r10,r10,0,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// stw r10,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r10.u32);
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// stw r27,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r27.u32);
	// lwz r11,10548(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10548);
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r11,10548(r10)
	PPC_STORE_U32(ctx.r10.u32 + 10548, ctx.r11.u32);
	// ld r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 16);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,10688(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,10688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10688, ctx.r9.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,32(r10)
	PPC_STORE_U64(ctx.r10.u32 + 32, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x82673da8
	ctx.lr = 0x82337480;
	sub_82673DA8(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// lwz r8,13844(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 13844);
	// stfs f31,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// stfs f30,4(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stfs f29,8(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// stfs f29,12(r3)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stfs f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// stfs f30,20(r10)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r10.u32 + 20, temp.u32);
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// stfs f29,28(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 28, temp.u32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// stfs f13,32(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 32, temp.u32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,36(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 36, temp.u32);
	// stfs f0,40(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 40, temp.u32);
	// stfs f0,44(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 44, temp.u32);
	// stfs f31,48(r10)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r10.u32 + 48, temp.u32);
	// lfs f13,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// fadds f13,f13,f30
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f30.f64));
	// stfs f13,52(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 52, temp.u32);
	// stfs f29,56(r10)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r10.u32 + 56, temp.u32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// bl 0x82664ce8
	ctx.lr = 0x82337504;
	sub_82664CE8(ctx, base);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r10.u32);
	// lwz r8,10548(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10548);
	// lwz r11,12832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12832);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwimi r8,r11,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r8,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r8.u32);
	// oris r6,r6,32768
	ctx.r6.u64 = ctx.r6.u64 | 2147483648;
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,10568(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10568);
	// rlwimi r8,r10,1,29,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x7) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFF8);
	// stw r8,10568(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10568, ctx.r8.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r8,10688(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10688);
	// rlwinm r8,r8,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r8,10688(r11)
	PPC_STORE_U32(ctx.r11.u32 + 10688, ctx.r8.u32);
	// ld r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 32);
	// or r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 | ctx.r28.u64;
	// std r11,32(r9)
	PPC_STORE_U64(ctx.r9.u32 + 32, ctx.r11.u64);
	// lwz r11,-13544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,12308(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12308, ctx.r10.u32);
	// lwz r8,10548(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 10548);
	// lwz r11,12832(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12832);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// rlwimi r8,r11,1,30,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFD);
	// stw r8,10548(r9)
	PPC_STORE_U32(ctx.r9.u32 + 10548, ctx.r8.u32);
	// ld r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r9.u32 + 16);
	// or r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 | ctx.r29.u64;
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// bl 0x826631f0
	ctx.lr = 0x823375C8;
	sub_826631F0(ctx, base);
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -13544);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826631f0
	ctx.lr = 0x823375DC;
	sub_826631F0(ctx, base);
loc_823375DC:
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

__attribute__((alias("__imp__sub_823375F0"))) PPC_WEAK_FUNC(sub_823375F0);
PPC_FUNC_IMPL(__imp__sub_823375F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82337608
	if (!ctx.cr6.eq) goto loc_82337608;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_82337608:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82337618
	if (!ctx.cr6.eq) goto loc_82337618;
	// lfs f0,32(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_82337618:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337620"))) PPC_WEAK_FUNC(sub_82337620);
PPC_FUNC_IMPL(__imp__sub_82337620) {
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
	// bl 0x82337670
	ctx.lr = 0x82337640;
	sub_82337670(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337650
	if (ctx.cr0.eq) goto loc_82337650;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82337650;
	sub_82691540(ctx, base);
loc_82337650:
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

__attribute__((alias("__imp__sub_8233766C"))) PPC_WEAK_FUNC(sub_8233766C);
PPC_FUNC_IMPL(__imp__sub_8233766C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337670"))) PPC_WEAK_FUNC(sub_82337670);
PPC_FUNC_IMPL(__imp__sub_82337670) {
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
	// vor128 v1,v77,v77
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,3692
	ctx.r11.s64 = ctx.r11.s64 + 3692;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f2,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// bl 0x82581308
	ctx.lr = 0x823376B4;
	sub_82581308(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f1,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82581238
	ctx.lr = 0x823376C4;
	sub_82581238(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,3564
	ctx.r11.s64 = ctx.r11.s64 + 3564;
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

__attribute__((alias("__imp__sub_823376E4"))) PPC_WEAK_FUNC(sub_823376E4);
PPC_FUNC_IMPL(__imp__sub_823376E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823376E8"))) PPC_WEAK_FUNC(sub_823376E8);
PPC_FUNC_IMPL(__imp__sub_823376E8) {
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
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f13,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15164
	ctx.r11.s64 = ctx.r11.s64 + 15164;
	// lfs f12,4596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4596);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82337728
	if (ctx.cr6.lt) goto loc_82337728;
	// fadds f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82337740
	if (!ctx.cr6.gt) goto loc_82337740;
loc_82337728:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82337738
	if (!ctx.cr6.gt) goto loc_82337738;
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// b 0x8233773c
	goto loc_8233773C;
loc_82337738:
	// fadds f0,f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
loc_8233773C:
	// stfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
loc_82337740:
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// li r10,48
	ctx.r10.s64 = 48;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// beq 0x8233775c
	if (ctx.cr0.eq) goto loc_8233775C;
	// vaddfp v0,v1,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32)));
loc_8233775C:
	// lfs f13,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lfs f12,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lfs f11,36(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsubs f11,f12,f11
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f9,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f9.f64 = double(temp.f32);
	// fadds f0,f9,f0
	ctx.f0.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// lfs f8,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// fnmsubs f2,f10,f8,f13
	ctx.f2.f64 = double(float(-(ctx.f10.f64 * ctx.f8.f64 - ctx.f13.f64)));
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// fnmsubs f1,f11,f8,f12
	ctx.f1.f64 = double(float(-(ctx.f11.f64 * ctx.f8.f64 - ctx.f12.f64)));
	// bl 0x82581308
	ctx.lr = 0x823377B0;
	sub_82581308(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x82581238
	ctx.lr = 0x823377C8;
	sub_82581238(ctx, base);
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

__attribute__((alias("__imp__sub_823377DC"))) PPC_WEAK_FUNC(sub_823377DC);
PPC_FUNC_IMPL(__imp__sub_823377DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823377E0"))) PPC_WEAK_FUNC(sub_823377E0);
PPC_FUNC_IMPL(__imp__sub_823377E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r10,7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 7, ctx.xer);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82337800
	if (!ctx.cr6.eq) goto loc_82337800;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// beq cr6,0x82337800
	if (ctx.cr6.eq) goto loc_82337800;
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_82337800:
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x82337814
	if (ctx.cr6.eq) goto loc_82337814;
	// cmpwi cr6,r4,12
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 12, ctx.xer);
	// bne cr6,0x82337820
	if (!ctx.cr6.eq) goto loc_82337820;
	// b 0x8233781c
	goto loc_8233781C;
loc_82337814:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f0,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
loc_8233781C:
	// stfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
loc_82337820:
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82337828"))) PPC_WEAK_FUNC(sub_82337828);
PPC_FUNC_IMPL(__imp__sub_82337828) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823378a0
	if (ctx.cr6.eq) goto loc_823378A0;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,16(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823378a0
	if (ctx.cr6.gt) goto loc_823378A0;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82337898
	if (ctx.cr6.eq) goto loc_82337898;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r10,3728
	ctx.r4.s64 = ctx.r10.s64 + 3728;
	// addi r3,r9,3924
	ctx.r3.s64 = ctx.r9.s64 + 3924;
	// li r5,55
	ctx.r5.s64 = 55;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82337898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82337898:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_823378A0:
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

__attribute__((alias("__imp__sub_823378B4"))) PPC_WEAK_FUNC(sub_823378B4);
PPC_FUNC_IMPL(__imp__sub_823378B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823378B8"))) PPC_WEAK_FUNC(sub_823378B8);
PPC_FUNC_IMPL(__imp__sub_823378B8) {
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
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// bne cr6,0x8233792c
	if (!ctx.cr6.eq) goto loc_8233792C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lfs f0,20(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82337924
	if (ctx.cr6.eq) goto loc_82337924;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r7,r10,3728
	ctx.r7.s64 = ctx.r10.s64 + 3728;
	// addi r6,r9,3956
	ctx.r6.s64 = ctx.r9.s64 + 3956;
	// li r8,74
	ctx.r8.s64 = 74;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x82337924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82337924:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_8233792C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82337948"))) PPC_WEAK_FUNC(sub_82337948);
PPC_FUNC_IMPL(__imp__sub_82337948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82337950;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r28,8
	ctx.r28.s64 = 8;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// addi r31,r3,28
	ctx.r31.s64 = ctx.r3.s64 + 28;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r29,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r29.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r29,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x82337988;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823379b4
	if (ctx.cr0.eq) goto loc_823379B4;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,4040
	ctx.r10.s64 = ctx.r10.s64 + 4040;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823379b8
	goto loc_823379B8;
loc_823379B4:
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_823379B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823379c8
	if (ctx.cr6.eq) goto loc_823379C8;
	// bl 0x82241d18
	ctx.lr = 0x823379C8;
	sub_82241D18(ctx, base);
loc_823379C8:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r29.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r29.u32);
	// stw r28,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r28.u32);
	// bl 0x82546708
	ctx.lr = 0x823379EC;
	sub_82546708(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82691500
	ctx.lr = 0x823379F8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337a08
	if (ctx.cr0.eq) goto loc_82337A08;
	// bl 0x82338e38
	ctx.lr = 0x82337A04;
	sub_82338E38(ctx, base);
	// b 0x82337a0c
	goto loc_82337A0C;
loc_82337A08:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82337A0C:
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// li r3,88
	ctx.r3.s64 = 88;
	// bl 0x82691500
	ctx.lr = 0x82337A18;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337a2c
	if (ctx.cr0.eq) goto loc_82337A2C;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82339c50
	ctx.lr = 0x82337A28;
	sub_82339C50(ctx, base);
	// b 0x82337a30
	goto loc_82337A30;
loc_82337A2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82337A30:
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82691500
	ctx.lr = 0x82337A3C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82337a50
	if (ctx.cr0.eq) goto loc_82337A50;
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// bl 0x82339518
	ctx.lr = 0x82337A4C;
	sub_82339518(ctx, base);
	// b 0x82337a54
	goto loc_82337A54;
loc_82337A50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82337A54:
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x82337A60;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82337ad0
	if (ctx.cr0.eq) goto loc_82337AD0;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82337A70;
	sub_8226C3F0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,12
	ctx.r3.s64 = ctx.r27.s64 + 12;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82546708
	ctx.lr = 0x82337A8C;
	sub_82546708(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x825adac8
	ctx.lr = 0x82337AB4;
	sub_825ADAC8(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825aef68
	ctx.lr = 0x82337ABC;
	sub_825AEF68(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337ad4
	if (ctx.cr6.eq) goto loc_82337AD4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825469e0
	ctx.lr = 0x82337ACC;
	sub_825469E0(ctx, base);
	// b 0x82337ad4
	goto loc_82337AD4;
loc_82337AD0:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82337AD4:
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82337ae8
	if (ctx.cr6.eq) goto loc_82337AE8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825469e0
	ctx.lr = 0x82337AE8;
	sub_825469E0(ctx, base);
loc_82337AE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338378
	ctx.lr = 0x82337AF0;
	sub_82338378(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r30,21748(r11)
	PPC_STORE_U32(ctx.r11.u32 + 21748, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337B04"))) PPC_WEAK_FUNC(sub_82337B04);
PPC_FUNC_IMPL(__imp__sub_82337B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337B08"))) PPC_WEAK_FUNC(sub_82337B08);
PPC_FUNC_IMPL(__imp__sub_82337B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82337B10;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,21748(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21748, ctx.r27.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82337B2C;
	sub_8226D8E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226f000
	ctx.lr = 0x82337B34;
	sub_8226F000(ctx, base);
	// lwz r31,16(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337b54
	if (ctx.cr6.eq) goto loc_82337B54;
	// bl 0x825adac8
	ctx.lr = 0x82337B44;
	sub_825ADAC8(ctx, base);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// bl 0x825aefd8
	ctx.lr = 0x82337B4C;
	sub_825AEFD8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82337B54;
	sub_82691540(ctx, base);
loc_82337B54:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82337b8c
	if (ctx.cr6.eq) goto loc_82337B8C;
	// addi r11,r30,56
	ctx.r11.s64 = ctx.r30.s64 + 56;
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82337B6C:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337b7c
	if (ctx.cr6.eq) goto loc_82337B7C;
	// bl 0x82241d18
	ctx.lr = 0x82337B7C;
	sub_82241D18(ctx, base);
loc_82337B7C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82337b6c
	if (!ctx.cr0.lt) goto loc_82337B6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82337B8C;
	sub_82691540(ctx, base);
loc_82337B8C:
	// lwz r31,8(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337bcc
	if (ctx.cr6.eq) goto loc_82337BCC;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8250e3e8
	ctx.lr = 0x82337BA4;
	sub_8250E3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82337bb4
	if (ctx.cr0.eq) goto loc_82337BB4;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8250b630
	ctx.lr = 0x82337BB4;
	sub_8250B630(ctx, base);
loc_82337BB4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337bc4
	if (ctx.cr6.eq) goto loc_82337BC4;
	// bl 0x82241d18
	ctx.lr = 0x82337BC4;
	sub_82241D18(ctx, base);
loc_82337BC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82337BCC;
	sub_82691540(ctx, base);
loc_82337BCC:
	// lwz r31,12(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82337c24
	if (ctx.cr6.eq) goto loc_82337C24;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// bl 0x82507f48
	ctx.lr = 0x82337BE0;
	sub_82507F48(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337c10
	if (ctx.cr6.eq) goto loc_82337C10;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82337c0c
	if (ctx.cr6.eq) goto loc_82337C0C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82337C00:
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82337c00
	if (!ctx.cr6.eq) goto loc_82337C00;
loc_82337C0C:
	// bl 0x82691540
	ctx.lr = 0x82337C10;
	sub_82691540(ctx, base);
loc_82337C10:
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// bl 0x82691540
	ctx.lr = 0x82337C24;
	sub_82691540(ctx, base);
loc_82337C24:
	// lwz r3,32(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337c34
	if (ctx.cr6.eq) goto loc_82337C34;
	// bl 0x82241d18
	ctx.lr = 0x82337C34;
	sub_82241D18(ctx, base);
loc_82337C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82337C3C"))) PPC_WEAK_FUNC(sub_82337C3C);
PPC_FUNC_IMPL(__imp__sub_82337C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337C40"))) PPC_WEAK_FUNC(sub_82337C40);
PPC_FUNC_IMPL(__imp__sub_82337C40) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,68(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// lfs f12,72(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f12,f12,f1
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f1.f64));
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f12,72(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 72, temp.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82337dec
	if (ctx.cr6.gt) goto loc_82337DEC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82337cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82337CFC;
	// bdzf 4*cr6+eq,0x82337d24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82337D24;
	// bdzf 4*cr6+eq,0x82337d30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82337D30;
	// bdzf 4*cr6+eq,0x82337dec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82337DEC;
	// bdzf 4*cr6+eq,0x82337d54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82337D54;
	// bdzf 4*cr6+eq,0x82337d64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82337D64;
	// bne cr6,0x82337d88
	if (!ctx.cr6.eq) goto loc_82337D88;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r30,-31957
	ctx.r30.s64 = -2094333952;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82337cdc
	if (!ctx.cr6.eq) goto loc_82337CDC;
	// bl 0x8250f738
	ctx.lr = 0x82337CC4;
	sub_8250F738(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337cdc
	if (ctx.cr6.eq) goto loc_82337CDC;
	// lwz r11,21752(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 21752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337dec
	if (ctx.cr6.eq) goto loc_82337DEC;
loc_82337CDC:
	// bl 0x8250eb18
	ctx.lr = 0x82337CE0;
	sub_8250EB18(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82337dec
	if (ctx.cr0.eq) goto loc_82337DEC;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r11,21752(r30)
	PPC_STORE_U32(ctx.r30.u32 + 21752, ctx.r11.u32);
	// b 0x82337dec
	goto loc_82337DEC;
loc_82337CFC:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,-21084
	ctx.r11.s64 = ctx.r11.s64 + -21084;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
loc_82337D08:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82337dec
	if (!ctx.cr6.gt) goto loc_82337DEC;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82337D1C:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82337dec
	goto loc_82337DEC;
loc_82337D24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338250
	ctx.lr = 0x82337D2C;
	sub_82338250(ctx, base);
	// b 0x82337dec
	goto loc_82337DEC;
loc_82337D30:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-21084
	ctx.r11.s64 = ctx.r11.s64 + -21084;
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82337dec
	if (!ctx.cr6.gt) goto loc_82337DEC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82337d1c
	goto loc_82337D1C;
loc_82337D54:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,-21084
	ctx.r11.s64 = ctx.r11.s64 + -21084;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82337d08
	goto loc_82337D08;
loc_82337D64:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,-21084
	ctx.r11.s64 = ctx.r11.s64 + -21084;
	// lfs f13,64(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82337dec
	if (!ctx.cr6.gt) goto loc_82337DEC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82337d1c
	goto loc_82337D1C;
loc_82337D88:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82337db4
	if (ctx.cr6.eq) goto loc_82337DB4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x8254a690
	ctx.lr = 0x82337DB0;
	sub_8254A690(ctx, base);
	// b 0x82337dec
	goto loc_82337DEC;
loc_82337DB4:
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82337dec
	if (ctx.cr6.eq) goto loc_82337DEC;
	// lis r9,-31957
	ctx.r9.s64 = -2094333952;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,21752(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21752, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x825496e0
	ctx.lr = 0x82337DEC;
	sub_825496E0(ctx, base);
loc_82337DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82337e10
	ctx.lr = 0x82337DF4;
	sub_82337E10(ctx, base);
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

__attribute__((alias("__imp__sub_82337E0C"))) PPC_WEAK_FUNC(sub_82337E0C);
PPC_FUNC_IMPL(__imp__sub_82337E0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82337E10"))) PPC_WEAK_FUNC(sub_82337E10);
PPC_FUNC_IMPL(__imp__sub_82337E10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82337E18;
	__savegprlr_27(ctx, base);
	// stfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8233823c
	if (ctx.cr6.eq) goto loc_8233823C;
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337e58
	if (ctx.cr0.eq) goto loc_82337E58;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82337e74
	if (!ctx.cr6.eq) goto loc_82337E74;
	// bl 0x8226d8e8
	ctx.lr = 0x82337E4C;
	sub_8226D8E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8226f000
	ctx.lr = 0x82337E54;
	sub_8226F000(ctx, base);
	// b 0x82337e74
	goto loc_82337E74;
loc_82337E58:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8250e3e8
	ctx.lr = 0x82337E64;
	sub_8250E3E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82337e74
	if (ctx.cr0.eq) goto loc_82337E74;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x8250b630
	ctx.lr = 0x82337E74;
	sub_8250B630(ctx, base);
loc_82337E74:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82338200
	if (ctx.cr6.eq) goto loc_82338200;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233813c
	if (ctx.cr6.eq) goto loc_8233813C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82338104
	if (ctx.cr6.eq) goto loc_82338104;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82338098
	if (ctx.cr6.eq) goto loc_82338098;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82337f20
	if (ctx.cr6.eq) goto loc_82337F20;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82337ec4
	if (ctx.cr6.eq) goto loc_82337EC4;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8233823c
	if (!ctx.cr6.eq) goto loc_8233823C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8233a310
	ctx.lr = 0x82337EC0;
	sub_8233A310(ctx, base);
	// b 0x8233823c
	goto loc_8233823C;
loc_82337EC4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r29,52(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82337ef8
	if (ctx.cr6.eq) goto loc_82337EF8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x82337EE8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82337ef8
	if (ctx.cr0.eq) goto loc_82337EF8;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82337EF8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823386d0
	ctx.lr = 0x82337F04;
	sub_823386D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8233a240
	ctx.lr = 0x82337F10;
	sub_8233A240(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233823c
	if (ctx.cr6.eq) goto loc_8233823C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82338134
	goto loc_82338134;
loc_82337F20:
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,9280
	ctx.r11.s64 = ctx.r11.s64 + 9280;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337f3c
	if (!ctx.cr6.eq) goto loc_82337F3C;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// b 0x82337f54
	goto loc_82337F54;
loc_82337F3C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,-11080
	ctx.r10.s64 = ctx.r10.s64 + -11080;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82337F54:
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// addi r11,r11,-31480
	ctx.r11.s64 = ctx.r11.s64 + -31480;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82337f6c
	if (!ctx.cr6.eq) goto loc_82337F6C;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// b 0x82337f84
	goto loc_82337F84;
loc_82337F6C:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r11.u32);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,-11104
	ctx.r10.s64 = ctx.r10.s64 + -11104;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stw r10,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r10.u32);
loc_82337F84:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x82543370
	ctx.lr = 0x82337F90;
	sub_82543370(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823391d0
	ctx.lr = 0x82337F9C;
	sub_823391D0(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82337fc4
	if (ctx.cr6.eq) goto loc_82337FC4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
loc_82337FC4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337fdc
	if (ctx.cr6.eq) goto loc_82337FDC;
	// bl 0x82241d18
	ctx.lr = 0x82337FDC;
	sub_82241D18(ctx, base);
loc_82337FDC:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82337fec
	if (ctx.cr6.eq) goto loc_82337FEC;
	// bl 0x82241d18
	ctx.lr = 0x82337FEC;
	sub_82241D18(ctx, base);
loc_82337FEC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lfs f31,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f31.f64 = double(temp.f32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// lfs f30,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f30.f64 = double(temp.f32);
	// lwz r30,52(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x823f62d0
	ctx.lr = 0x82338008;
	sub_823F62D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// bl 0x82338750
	ctx.lr = 0x82338020;
	sub_82338750(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82339348
	ctx.lr = 0x82338030;
	sub_82339348(ctx, base);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r8.u32);
	// stw r7,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r7.u32);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// bl 0x82339230
	ctx.lr = 0x8233806C;
	sub_82339230(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233807c
	if (ctx.cr6.eq) goto loc_8233807C;
	// bl 0x82241d18
	ctx.lr = 0x8233807C;
	sub_82241D18(ctx, base);
loc_8233807C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x823f62d0
	ctx.lr = 0x82338088;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8233a080
	ctx.lr = 0x82338094;
	sub_8233A080(ctx, base);
	// b 0x8233823c
	goto loc_8233823C;
loc_82338098:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823391d0
	ctx.lr = 0x823380A4;
	sub_823391D0(ctx, base);
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-31576
	ctx.r11.s64 = ctx.r11.s64 + -31576;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823380c4
	if (!ctx.cr6.eq) goto loc_823380C4;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// b 0x823380dc
	goto loc_823380DC;
loc_823380C4:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r10,-11104
	ctx.r10.s64 = ctx.r10.s64 + -11104;
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
loc_823380DC:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82543370
	ctx.lr = 0x823380E8;
	sub_82543370(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823380F4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82338820
	ctx.lr = 0x82338100;
	sub_82338820(ctx, base);
	// b 0x82338128
	goto loc_82338128;
loc_82338104:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823391d0
	ctx.lr = 0x82338110;
	sub_823391D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x8233811C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82339ee8
	ctx.lr = 0x82338128;
	sub_82339EE8(ctx, base);
loc_82338128:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233823c
	if (ctx.cr6.eq) goto loc_8233823C;
loc_82338134:
	// bl 0x82241d18
	ctx.lr = 0x82338138;
	sub_82241D18(ctx, base);
	// b 0x8233823c
	goto loc_8233823C;
loc_8233813C:
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82339e28
	ctx.lr = 0x82338148;
	sub_82339E28(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82338174
	if (ctx.cr6.eq) goto loc_82338174;
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x8233823c
	if (!ctx.cr6.eq) goto loc_8233823C;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x82338164;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8233a3f8
	ctx.lr = 0x82338170;
	sub_8233A3F8(ctx, base);
	// b 0x8233823c
	goto loc_8233823C;
loc_82338174:
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// bl 0x82339738
	ctx.lr = 0x82338190;
	sub_82339738(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r29,8(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823381e0
	if (ctx.cr6.eq) goto loc_823381E0;
loc_823381A8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823381B4;
	sub_823F62D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8250e730
	ctx.lr = 0x823381C4;
	sub_8250E730(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823381d4
	if (ctx.cr6.eq) goto loc_823381D4;
	// bl 0x82241d18
	ctx.lr = 0x823381D4;
	sub_82241D18(ctx, base);
loc_823381D4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823381a8
	if (!ctx.cr6.eq) goto loc_823381A8;
loc_823381E0:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r10.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,72(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 72, temp.u32);
	// bl 0x82507f48
	ctx.lr = 0x823381FC;
	sub_82507F48(ctx, base);
	// b 0x8233823c
	goto loc_8233823C;
loc_82338200:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82338230
	if (ctx.cr6.lt) goto loc_82338230;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// ble cr6,0x82338228
	if (!ctx.cr6.gt) goto loc_82338228;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82338230
	if (!ctx.cr6.eq) goto loc_82338230;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82338234
	goto loc_82338234;
loc_82338228:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82338234
	goto loc_82338234;
loc_82338230:
	// li r4,2
	ctx.r4.s64 = 2;
loc_82338234:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82339d28
	ctx.lr = 0x8233823C;
	sub_82339D28(ctx, base);
loc_8233823C:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f31,-56(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233824C"))) PPC_WEAK_FUNC(sub_8233824C);
PPC_FUNC_IMPL(__imp__sub_8233824C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338250"))) PPC_WEAK_FUNC(sub_82338250);
PPC_FUNC_IMPL(__imp__sub_82338250) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,76(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// beq cr6,0x823382a4
	if (ctx.cr6.eq) goto loc_823382A4;
	// lfs f13,72(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,-21084
	ctx.r11.s64 = ctx.r10.s64 + -21084;
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
loc_82338284:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82338360
	if (!ctx.cr6.gt) goto loc_82338360;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// ble cr6,0x823382b4
	if (!ctx.cr6.gt) goto loc_823382B4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x823382e0
	goto loc_823382E0;
loc_823382A4:
	// lfs f13,68(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r10,-21084
	ctx.r11.s64 = ctx.r10.s64 + -21084;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82338284
	goto loc_82338284;
loc_823382B4:
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x823382e8
	if (ctx.cr6.gt) goto loc_823382E8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x823382d0
	if (ctx.cr6.eq) goto loc_823382D0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x823382e8
	if (!ctx.cr6.eq) goto loc_823382E8;
loc_823382D0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x823382e8
	if (ctx.cr6.eq) goto loc_823382E8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_823382E0:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82338360
	goto loc_82338360;
loc_823382E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823391d0
	ctx.lr = 0x823382F0;
	sub_823391D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82338300:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82338314
	if (ctx.cr6.eq) goto loc_82338314;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82338314:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82338300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338300;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82338348
	if (!ctx.cr6.eq) goto loc_82338348;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x823390e8
	ctx.lr = 0x8233832C;
	sub_823390E8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x82338338;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8233a3f8
	ctx.lr = 0x82338344;
	sub_8233A3F8(ctx, base);
	// b 0x82338350
	goto loc_82338350;
loc_82338348:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82338350:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338360
	if (ctx.cr6.eq) goto loc_82338360;
	// bl 0x82241d18
	ctx.lr = 0x82338360;
	sub_82241D18(ctx, base);
loc_82338360:
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

__attribute__((alias("__imp__sub_82338374"))) PPC_WEAK_FUNC(sub_82338374);
PPC_FUNC_IMPL(__imp__sub_82338374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338378"))) PPC_WEAK_FUNC(sub_82338378);
PPC_FUNC_IMPL(__imp__sub_82338378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82338380;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x82339738
	ctx.lr = 0x823383A4;
	sub_82339738(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r10,r29,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r29.s64;
	// srawi. r31,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x823383d0
	if (!ctx.cr0.eq) goto loc_823383D0;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// b 0x82338424
	goto loc_82338424;
loc_823383D0:
	// lis r11,8191
	ctx.r11.s64 = 536805376;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823383ec
	if (!ctx.cr6.gt) goto loc_823383EC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x823383EC;
	sub_82FA0648(ctx, base);
loc_823383EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338408
	if (ctx.cr6.eq) goto loc_82338408;
	// rlwinm r3,r31,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82691500
	ctx.lr = 0x82338400;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233848c
	if (ctx.cr0.eq) goto loc_8233848C;
loc_82338408:
	// rlwinm r10,r31,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r3,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82338424:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82338464
	if (ctx.cr0.eq) goto loc_82338464;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82338460
	if (ctx.cr6.eq) goto loc_82338460;
	// subf r29,r11,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r11.s64;
loc_8233843C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82338450
	if (ctx.cr6.eq) goto loc_82338450;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82338450;
	sub_823F62D0(ctx, base);
loc_82338450:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x8233843c
	if (!ctx.cr6.eq) goto loc_8233843C;
loc_82338460:
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
loc_82338464:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82338f68
	ctx.lr = 0x82338470;
	sub_82338F68(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8233a578
	ctx.lr = 0x82338478;
	sub_8233A578(ctx, base);
	// stw r30,24(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24, ctx.r30.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82507f48
	ctx.lr = 0x82338484;
	sub_82507F48(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8233848C:
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
	ctx.lr = 0x823384A4;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823384A4"))) PPC_WEAK_FUNC(sub_823384A4);
PPC_FUNC_IMPL(__imp__sub_823384A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823384A8"))) PPC_WEAK_FUNC(sub_823384A8);
PPC_FUNC_IMPL(__imp__sub_823384A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823384B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,21748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21748);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// bl 0x823090c8
	ctx.lr = 0x823384D8;
	sub_823090C8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x823f6330
	ctx.lr = 0x823384E4;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823384f4
	if (ctx.cr6.eq) goto loc_823384F4;
	// bl 0x82241d18
	ctx.lr = 0x823384F4;
	sub_82241D18(ctx, base);
loc_823384F4:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338508"))) PPC_WEAK_FUNC(sub_82338508);
PPC_FUNC_IMPL(__imp__sub_82338508) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,21748(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21748);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82338524"))) PPC_WEAK_FUNC(sub_82338524);
PPC_FUNC_IMPL(__imp__sub_82338524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338528"))) PPC_WEAK_FUNC(sub_82338528);
PPC_FUNC_IMPL(__imp__sub_82338528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82338530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,12(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233856c
	if (ctx.cr6.eq) goto loc_8233856C;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_8233854C:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233855c
	if (ctx.cr6.eq) goto loc_8233855C;
	// bl 0x82241d18
	ctx.lr = 0x8233855C;
	sub_82241D18(ctx, base);
loc_8233855C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8233854c
	if (!ctx.cr0.lt) goto loc_8233854C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x8233856C;
	sub_82691540(ctx, base);
loc_8233856C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338574"))) PPC_WEAK_FUNC(sub_82338574);
PPC_FUNC_IMPL(__imp__sub_82338574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338578"))) PPC_WEAK_FUNC(sub_82338578);
PPC_FUNC_IMPL(__imp__sub_82338578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82338580;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82338598;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823385e8
	ctx.lr = 0x823385A4;
	sub_823385E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823385B0;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338668
	ctx.lr = 0x823385BC;
	sub_82338668(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823385cc
	if (ctx.cr6.eq) goto loc_823385CC;
	// bl 0x82241d18
	ctx.lr = 0x823385CC;
	sub_82241D18(ctx, base);
loc_823385CC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823385dc
	if (ctx.cr6.eq) goto loc_823385DC;
	// bl 0x82241d18
	ctx.lr = 0x823385DC;
	sub_82241D18(ctx, base);
loc_823385DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823385E4"))) PPC_WEAK_FUNC(sub_823385E4);
PPC_FUNC_IMPL(__imp__sub_823385E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823385E8"))) PPC_WEAK_FUNC(sub_823385E8);
PPC_FUNC_IMPL(__imp__sub_823385E8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x823f62d0
	ctx.lr = 0x8233860C;
	sub_823F62D0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8233863c
	if (ctx.cr6.eq) goto loc_8233863C;
	// bl 0x82241d18
	ctx.lr = 0x8233863C;
	sub_82241D18(ctx, base);
loc_8233863C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233864c
	if (ctx.cr6.eq) goto loc_8233864C;
	// bl 0x82241d18
	ctx.lr = 0x8233864C;
	sub_82241D18(ctx, base);
loc_8233864C:
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

__attribute__((alias("__imp__sub_82338664"))) PPC_WEAK_FUNC(sub_82338664);
PPC_FUNC_IMPL(__imp__sub_82338664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338668"))) PPC_WEAK_FUNC(sub_82338668);
PPC_FUNC_IMPL(__imp__sub_82338668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82338670;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
	// bl 0x823f62d0
	ctx.lr = 0x82338688;
	sub_823F62D0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq cr6,0x823386b8
	if (ctx.cr6.eq) goto loc_823386B8;
	// bl 0x82241d18
	ctx.lr = 0x823386B8;
	sub_82241D18(ctx, base);
loc_823386B8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823386c8
	if (ctx.cr6.eq) goto loc_823386C8;
	// bl 0x82241d18
	ctx.lr = 0x823386C8;
	sub_82241D18(ctx, base);
loc_823386C8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823386D0"))) PPC_WEAK_FUNC(sub_823386D0);
PPC_FUNC_IMPL(__imp__sub_823386D0) {
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
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82338704
	if (ctx.cr6.eq) goto loc_82338704;
	// lfs f0,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82338730
	if (!ctx.cr6.lt) goto loc_82338730;
	// b 0x8233872c
	goto loc_8233872C;
loc_82338704:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f12,24(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x8233872c
	if (!ctx.cr6.gt) goto loc_8233872C;
	// lfs f0,28(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82338730
	if (!ctx.cr6.gt) goto loc_82338730;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82338730
	if (!ctx.cr6.gt) goto loc_82338730;
loc_8233872C:
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82338730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82338738;
	sub_823F62D0(ctx, base);
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

__attribute__((alias("__imp__sub_82338750"))) PPC_WEAK_FUNC(sub_82338750);
PPC_FUNC_IMPL(__imp__sub_82338750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82338758;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r5,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r5.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82338790:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823387a4
	if (ctx.cr6.eq) goto loc_823387A4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
loc_823387A4:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82338790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338790;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bne cr6,0x823387f4
	if (!ctx.cr6.eq) goto loc_823387F4;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823387C0;
	sub_823F62D0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r30,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x823387e0
	if (ctx.cr6.eq) goto loc_823387E0;
	// bl 0x82241d18
	ctx.lr = 0x823387E0;
	sub_82241D18(ctx, base);
loc_823387E0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x823387f4
	if (!ctx.cr6.eq) goto loc_823387F4;
	// stfs f30,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x823387fc
	goto loc_823387FC;
loc_823387F4:
	// stfs f30,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stfs f31,8(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
loc_823387FC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233880c
	if (ctx.cr6.eq) goto loc_8233880C;
	// bl 0x82241d18
	ctx.lr = 0x8233880C;
	sub_82241D18(ctx, base);
loc_8233880C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233881C"))) PPC_WEAK_FUNC(sub_8233881C);
PPC_FUNC_IMPL(__imp__sub_8233881C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338820"))) PPC_WEAK_FUNC(sub_82338820);
PPC_FUNC_IMPL(__imp__sub_82338820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82338828;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r31,6
	ctx.r31.s64 = 6;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r29,4
	ctx.r29.s64 = 4;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82338894
	if (ctx.cr6.lt) goto loc_82338894;
	// beq cr6,0x8233888c
	if (ctx.cr6.eq) goto loc_8233888C;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// blt cr6,0x82338884
	if (ctx.cr6.lt) goto loc_82338884;
	// beq cr6,0x8233887c
	if (ctx.cr6.eq) goto loc_8233887C;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x82338874
	if (ctx.cr6.lt) goto loc_82338874;
	// bne cr6,0x82338898
	if (!ctx.cr6.eq) goto loc_82338898;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82338898
	goto loc_82338898;
loc_82338874:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82338898
	goto loc_82338898;
loc_8233887C:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82338898
	goto loc_82338898;
loc_82338884:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82338898
	goto loc_82338898;
loc_8233888C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// b 0x82338898
	goto loc_82338898;
loc_82338894:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82338898:
	// bl 0x8226c3f0
	ctx.lr = 0x8233889C;
	sub_8226C3F0(ctx, base);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x823388B8;
	sub_8226C3F0(ctx, base);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r30.u32);
	// stw r30,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r30.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r29,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r29.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x823388D0;
	sub_8226C3F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r28.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823388E4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823388f8
	if (ctx.cr6.eq) goto loc_823388F8;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_823388F8:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823388e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823388E4;
	// bl 0x8226c3f0
	ctx.lr = 0x82338904;
	sub_8226C3F0(ctx, base);
	// stw r31,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r31.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x8233890C;
	sub_8226C3F0(ctx, base);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82338920:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82338934
	if (ctx.cr6.eq) goto loc_82338934;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82338934:
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// bdnz 0x82338920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338920;
	// subfic r11,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r11.s64 = 1 - ctx.r11.s64;
	// subfe r31,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x8226c3f0
	ctx.lr = 0x82338948;
	sub_8226C3F0(ctx, base);
	// rlwinm r11,r31,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x82338960;
	sub_823F62D0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82338970:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338984
	if (ctx.cr6.eq) goto loc_82338984;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82338984:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82338970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338970;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// addi r31,r25,4
	ctx.r31.s64 = ctx.r25.s64 + 4;
	// beq cr6,0x823389a0
	if (ctx.cr6.eq) goto loc_823389A0;
	// addi r31,r25,8
	ctx.r31.s64 = ctx.r25.s64 + 8;
loc_823389A0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823389ac
	if (ctx.cr6.eq) goto loc_823389AC;
	// bl 0x82241d18
	ctx.lr = 0x823389AC;
	sub_82241D18(ctx, base);
loc_823389AC:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823389C0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823389d4
	if (ctx.cr6.eq) goto loc_823389D4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_823389D4:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x823389c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823389C0;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bge cr6,0x82338ad4
	if (!ctx.cr6.lt) goto loc_82338AD4;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x823389EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82338a14
	if (ctx.cr0.eq) goto loc_82338A14;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-11160
	ctx.r10.s64 = ctx.r10.s64 + -11160;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82338a18
	goto loc_82338A18;
loc_82338A14:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82338A18:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_82338A24:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82338A34;
	sub_823F62D0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82338a54
	if (ctx.cr6.eq) goto loc_82338A54;
	// bl 0x82241d18
	ctx.lr = 0x82338A54;
	sub_82241D18(ctx, base);
loc_82338A54:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82338a88
	if (ctx.cr0.eq) goto loc_82338A88;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82338A6C;
	sub_823F62D0(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f6330
	ctx.lr = 0x82338A78;
	sub_823F6330(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338a88
	if (ctx.cr6.eq) goto loc_82338A88;
	// bl 0x82241d18
	ctx.lr = 0x82338A88;
	sub_82241D18(ctx, base);
loc_82338A88:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82338a24
	if (ctx.cr6.lt) goto loc_82338A24;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r11,12
	ctx.r4.s64 = ctx.r11.s64 + 12;
	// bl 0x82fa77c0
	ctx.lr = 0x82338AA8;
	sub_82FA77C0(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x82338AAC;
	sub_8226C3F0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r3,352
	ctx.r3.s64 = ctx.r3.s64 + 352;
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82fa77c0
	ctx.lr = 0x82338AC0;
	sub_82FA77C0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r28,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338ad4
	if (ctx.cr6.eq) goto loc_82338AD4;
	// bl 0x82241d18
	ctx.lr = 0x82338AD4;
	sub_82241D18(ctx, base);
loc_82338AD4:
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82338AF4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82338b08
	if (ctx.cr6.eq) goto loc_82338B08;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82338B08:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82338af4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338AF4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82338b54
	if (!ctx.cr6.eq) goto loc_82338B54;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x82338B20;
	sub_823F62D0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82338c68
	ctx.lr = 0x82338B38;
	sub_82338C68(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338b48
	if (ctx.cr6.eq) goto loc_82338B48;
	// bl 0x82241d18
	ctx.lr = 0x82338B48;
	sub_82241D18(ctx, base);
loc_82338B48:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// b 0x82338be4
	goto loc_82338BE4;
loc_82338B54:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82338B60:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338b74
	if (ctx.cr6.eq) goto loc_82338B74;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
loc_82338B74:
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// bdnz 0x82338b60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338B60;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82338c30
	if (!ctx.cr6.eq) goto loc_82338C30;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82338B8C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r4,r31,r11
	ctx.r4.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82338B9C;
	sub_823F62D0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r28,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x82338bbc
	if (ctx.cr6.eq) goto loc_82338BBC;
	// bl 0x82241d18
	ctx.lr = 0x82338BBC;
	sub_82241D18(ctx, base);
loc_82338BBC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82338bd8
	if (!ctx.cr6.eq) goto loc_82338BD8;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82338b8c
	if (ctx.cr6.lt) goto loc_82338B8C;
	// b 0x82338c14
	goto loc_82338C14;
loc_82338BD8:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r10,r29,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82338BE4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x82338BEC;
	sub_823F62D0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82338c68
	ctx.lr = 0x82338C04;
	sub_82338C68(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338c14
	if (ctx.cr6.eq) goto loc_82338C14;
	// bl 0x82241d18
	ctx.lr = 0x82338C14;
	sub_82241D18(ctx, base);
loc_82338C14:
	// bl 0x8226d8e8
	ctx.lr = 0x82338C18;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x8226f000
	ctx.lr = 0x82338C20;
	sub_8226F000(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338c30
	if (ctx.cr6.eq) goto loc_82338C30;
	// bl 0x82691540
	ctx.lr = 0x82338C30;
	sub_82691540(ctx, base);
loc_82338C30:
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// bl 0x82549558
	ctx.lr = 0x82338C50;
	sub_82549558(ctx, base);
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338c60
	if (ctx.cr6.eq) goto loc_82338C60;
	// bl 0x82241d18
	ctx.lr = 0x82338C60;
	sub_82241D18(ctx, base);
loc_82338C60:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338C68"))) PPC_WEAK_FUNC(sub_82338C68);
PPC_FUNC_IMPL(__imp__sub_82338C68) {
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
	// bge cr6,0x82338ca0
	if (!ctx.cr6.lt) goto loc_82338CA0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x82338ca4
	if (!ctx.cr6.gt) goto loc_82338CA4;
loc_82338CA0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82338CA4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82338ce8
	if (ctx.cr0.eq) goto loc_82338CE8;
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
	// bne cr6,0x82338ccc
	if (!ctx.cr6.eq) goto loc_82338CCC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338d38
	ctx.lr = 0x82338CCC;
	sub_82338D38(ctx, base);
loc_82338CCC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338d10
	if (ctx.cr6.eq) goto loc_82338D10;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// b 0x82338d0c
	goto loc_82338D0C;
loc_82338CE8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82338cfc
	if (!ctx.cr6.eq) goto loc_82338CFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82338d38
	ctx.lr = 0x82338CFC;
	sub_82338D38(ctx, base);
loc_82338CFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82338d10
	if (ctx.cr6.eq) goto loc_82338D10;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82338D0C:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82338D10:
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

__attribute__((alias("__imp__sub_82338D34"))) PPC_WEAK_FUNC(sub_82338D34);
PPC_FUNC_IMPL(__imp__sub_82338D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82338D38"))) PPC_WEAK_FUNC(sub_82338D38);
PPC_FUNC_IMPL(__imp__sub_82338D38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82338D40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,16383
	ctx.r10.s64 = 1073676288;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r8,r10,65534
	ctx.r8.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82338d74
	if (!ctx.cr6.gt) goto loc_82338D74;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82338D74;
	sub_82FA0648(ctx, base);
loc_82338D74:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// subf r11,r11,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82338e30
	if (!ctx.cr6.gt) goto loc_82338E30;
	// lis r8,16383
	ctx.r8.s64 = 1073676288;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82338dac
	if (ctx.cr6.lt) goto loc_82338DAC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82338DAC:
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82338db8
	if (!ctx.cr6.lt) goto loc_82338DB8;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_82338DB8:
	// cmplw cr6,r29,r8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82338dcc
	if (!ctx.cr6.gt) goto loc_82338DCC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82338DCC;
	sub_82FA0648(ctx, base);
loc_82338DCC:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82338e30
	if (!ctx.cr6.lt) goto loc_82338E30;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830941e0
	ctx.lr = 0x82338DDC;
	sub_830941E0(ctx, base);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x82338DF8;
	sub_82FA20F0(ctx, base);
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
	// beq cr6,0x82338e14
	if (ctx.cr6.eq) goto loc_82338E14;
	// bl 0x82691540
	ctx.lr = 0x82338E14;
	sub_82691540(ctx, base);
loc_82338E14:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82338E30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338E38"))) PPC_WEAK_FUNC(sub_82338E38);
PPC_FUNC_IMPL(__imp__sub_82338E38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82338E40;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,7
	ctx.r10.s64 = 7;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82338E58:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82338e58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338E58;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r26,r23,4
	ctx.r26.s64 = ctx.r23.s64 + 4;
	// li r22,7
	ctx.r22.s64 = 7;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r25,r10,-11160
	ctx.r25.s64 = ctx.r10.s64 + -11160;
	// addi r24,r11,4024
	ctx.r24.s64 = ctx.r11.s64 + 4024;
loc_82338E84:
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82691500
	ctx.lr = 0x82338E8C;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82338f30
	if (ctx.cr0.eq) goto loc_82338F30;
	// addic. r11,r28,12
	ctx.xer.ca = ctx.r28.u32 > 4294967283;
	ctx.r11.s64 = ctx.r28.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// beq 0x82338f28
	if (ctx.cr0.eq) goto loc_82338F28;
	// li r9,2
	ctx.r9.s64 = 2;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82338EB4:
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stwu r30,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82338eb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82338EB4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// li r29,2
	ctx.r29.s64 = 2;
loc_82338ECC:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x82338ED4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82338ef4
	if (ctx.cr0.eq) goto loc_82338EF4;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// b 0x82338ef8
	goto loc_82338EF8;
loc_82338EF4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82338EF8:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f6330
	ctx.lr = 0x82338F0C;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338f1c
	if (ctx.cr6.eq) goto loc_82338F1C;
	// bl 0x82241d18
	ctx.lr = 0x82338F1C;
	sub_82241D18(ctx, base);
loc_82338F1C:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82338ecc
	if (!ctx.cr0.eq) goto loc_82338ECC;
loc_82338F28:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82338f34
	goto loc_82338F34;
loc_82338F30:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82338F34:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// stw r10,-4(r26)
	PPC_STORE_U32(ctx.r26.u32 + -4, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82338f50
	if (ctx.cr6.eq) goto loc_82338F50;
	// bl 0x82241d18
	ctx.lr = 0x82338F50;
	sub_82241D18(ctx, base);
loc_82338F50:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// bne 0x82338e84
	if (!ctx.cr0.eq) goto loc_82338E84;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82338F68"))) PPC_WEAK_FUNC(sub_82338F68);
PPC_FUNC_IMPL(__imp__sub_82338F68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82338F70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// lwz r28,0(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823f62d0
	ctx.lr = 0x82338F90;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x82338FA0;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82338578
	ctx.lr = 0x82338FB0;
	sub_82338578(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,40
	ctx.r4.s64 = ctx.r11.s64 + 40;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lwz r28,8(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x823f62d0
	ctx.lr = 0x82338FC8;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82338FD8;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82338578
	ctx.lr = 0x82338FE8;
	sub_82338578(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// addi r31,r11,8
	ctx.r31.s64 = ctx.r11.s64 + 8;
	// lwz r28,16(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x823f62d0
	ctx.lr = 0x82339000;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82339010;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// bl 0x82338578
	ctx.lr = 0x82339020;
	sub_82338578(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,56
	ctx.r4.s64 = ctx.r11.s64 + 56;
	// addi r31,r11,24
	ctx.r31.s64 = ctx.r11.s64 + 24;
	// lwz r30,24(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x823f62d0
	ctx.lr = 0x82339038;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82339048;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82338578
	ctx.lr = 0x82339058;
	sub_82338578(ctx, base);
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,6
	ctx.r8.s64 = 6;
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// bl 0x82507f48
	ctx.lr = 0x823390E0;
	sub_82507F48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823390E8"))) PPC_WEAK_FUNC(sub_823390E8);
PPC_FUNC_IMPL(__imp__sub_823390E8) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82339348
	ctx.lr = 0x8233910C;
	sub_82339348(ctx, base);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// ori r10,r11,26125
	ctx.r10.u64 = ctx.r11.u64 | 26125;
	// lis r11,15470
	ctx.r11.s64 = 1013841920;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// ori r11,r11,62303
	ctx.r11.u64 = ctx.r11.u64 | 62303;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,21292(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21292);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// clrlwi r7,r10,9
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFFFF;
	// stw r10,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r10.u32);
	// oris r10,r7,16256
	ctx.r10.u64 = ctx.r7.u64 | 1065353216;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f13,24(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// lwz r10,21292(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21292);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// clrlwi r7,r10,9
	ctx.r7.u64 = ctx.r10.u32 & 0x7FFFFF;
	// stw r10,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r10.u32);
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// oris r10,r7,16256
	ctx.r10.u64 = ctx.r7.u64 | 1065353216;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// bl 0x82339230
	ctx.lr = 0x823391A8;
	sub_82339230(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823391b8
	if (ctx.cr6.eq) goto loc_823391B8;
	// bl 0x82241d18
	ctx.lr = 0x823391B8;
	sub_82241D18(ctx, base);
loc_823391B8:
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

__attribute__((alias("__imp__sub_823391D0"))) PPC_WEAK_FUNC(sub_823391D0);
PPC_FUNC_IMPL(__imp__sub_823391D0) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82339348
	ctx.lr = 0x823391EC;
	sub_82339348(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// beq cr6,0x82339218
	if (ctx.cr6.eq) goto loc_82339218;
	// bl 0x82241d18
	ctx.lr = 0x82339218;
	sub_82241D18(ctx, base);
loc_82339218:
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

__attribute__((alias("__imp__sub_82339230"))) PPC_WEAK_FUNC(sub_82339230);
PPC_FUNC_IMPL(__imp__sub_82339230) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x8233932c
	if (ctx.cr6.gt) goto loc_8233932C;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82339348
	ctx.lr = 0x82339260;
	sub_82339348(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823386d0
	ctx.lr = 0x8233926C;
	sub_823386D0(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x823392e4
	if (ctx.cr6.lt) goto loc_823392E4;
	// beq cr6,0x823392c4
	if (ctx.cr6.eq) goto loc_823392C4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x823392b8
	if (ctx.cr6.lt) goto loc_823392B8;
	// beq cr6,0x823392ac
	if (ctx.cr6.eq) goto loc_823392AC;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x823392a0
	if (ctx.cr6.lt) goto loc_823392A0;
	// bne cr6,0x82339300
	if (!ctx.cr6.eq) goto loc_82339300;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x823392cc
	goto loc_823392CC;
loc_823392A0:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// b 0x823392ec
	goto loc_823392EC;
loc_823392AC:
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// b 0x823392cc
	goto loc_823392CC;
loc_823392B8:
	// lwz r30,40(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// b 0x823392ec
	goto loc_823392EC;
loc_823392C4:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
loc_823392CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823392D4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82338668
	ctx.lr = 0x823392E0;
	sub_82338668(ctx, base);
	// b 0x82339300
	goto loc_82339300;
loc_823392E4:
	// lwz r30,32(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
loc_823392EC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823392F4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823385e8
	ctx.lr = 0x82339300;
	sub_823385E8(ctx, base);
loc_82339300:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// beq cr6,0x8233931c
	if (ctx.cr6.eq) goto loc_8233931C;
	// bl 0x82241d18
	ctx.lr = 0x8233931C;
	sub_82241D18(ctx, base);
loc_8233931C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233932c
	if (ctx.cr6.eq) goto loc_8233932C;
	// bl 0x82241d18
	ctx.lr = 0x8233932C;
	sub_82241D18(ctx, base);
loc_8233932C:
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

__attribute__((alias("__imp__sub_82339344"))) PPC_WEAK_FUNC(sub_82339344);
PPC_FUNC_IMPL(__imp__sub_82339344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339348"))) PPC_WEAK_FUNC(sub_82339348);
PPC_FUNC_IMPL(__imp__sub_82339348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82339350;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,56(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// bgt cr6,0x823393b4
	if (ctx.cr6.gt) goto loc_823393B4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82339404
	if (ctx.cr6.eq) goto loc_82339404;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82339390;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82339404
	if (ctx.cr0.eq) goto loc_82339404;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823393a8
	if (ctx.cr6.eq) goto loc_823393A8;
	// bl 0x82241d18
	ctx.lr = 0x823393A8;
	sub_82241D18(ctx, base);
loc_823393A8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// b 0x82339404
	goto loc_82339404;
loc_823393B4:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x823393BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823393e8
	if (ctx.cr0.eq) goto loc_823393E8;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,4040
	ctx.r10.s64 = ctx.r10.s64 + 4040;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823393ec
	goto loc_823393EC;
loc_823393E8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823393EC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823393fc
	if (ctx.cr6.eq) goto loc_823393FC;
	// bl 0x82241d18
	ctx.lr = 0x823393FC;
	sub_82241D18(ctx, base);
loc_823393FC:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82339404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339410"))) PPC_WEAK_FUNC(sub_82339410);
PPC_FUNC_IMPL(__imp__sub_82339410) {
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
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// li r30,1
	ctx.r30.s64 = 1;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82339430:
	// lwzu r3,-8(r31)
	ea = -8 + ctx.r31.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339440
	if (ctx.cr6.eq) goto loc_82339440;
	// bl 0x82241d18
	ctx.lr = 0x82339440;
	sub_82241D18(ctx, base);
loc_82339440:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82339430
	if (!ctx.cr0.lt) goto loc_82339430;
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

__attribute__((alias("__imp__sub_82339460"))) PPC_WEAK_FUNC(sub_82339460);
PPC_FUNC_IMPL(__imp__sub_82339460) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8250f738
	ctx.lr = 0x82339478;
	sub_8250F738(ctx, base);
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r10,48
	ctx.r10.s64 = 48;
	// lwz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// divw r8,r11,r10
	ctx.r8.s32 = ctx.r11.s32 / ctx.r10.s32;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x823394e8
	if (!ctx.cr6.lt) goto loc_823394E8;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x823394e8
	if (ctx.cr6.eq) goto loc_823394E8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823394AC:
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r10,44(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r5,1588(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1588);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823394d8
	if (!ctx.cr6.eq) goto loc_823394D8;
	// lwz r5,1584(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1584);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x823394d8
	if (!ctx.cr6.eq) goto loc_823394D8;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82339500
	if (ctx.cr6.eq) goto loc_82339500;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_823394D8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x823394ac
	if (ctx.cr6.lt) goto loc_823394AC;
loc_823394E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823394EC:
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
loc_82339500:
	// lwz r11,1716(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 1716);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823394e8
	if (ctx.cr6.eq) goto loc_823394E8;
	// lwz r11,176(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x823394ec
	goto loc_823394EC;
}

__attribute__((alias("__imp__sub_82339518"))) PPC_WEAK_FUNC(sub_82339518);
PPC_FUNC_IMPL(__imp__sub_82339518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82339520;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r27,r28,16
	ctx.r27.s64 = ctx.r28.s64 + 16;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// stw r29,16(r28)
	PPC_STORE_U32(ctx.r28.u32 + 16, ctx.r29.u32);
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// stw r29,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r29.u32);
	// bl 0x82546708
	ctx.lr = 0x8233955C;
	sub_82546708(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x823397e8
	ctx.lr = 0x82339568;
	sub_823397E8(ctx, base);
	// bl 0x8226d8e8
	ctx.lr = 0x8233956C;
	sub_8226D8E8(ctx, base);
	// stw r29,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r29.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r23,r29
	ctx.r23.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82339720
	if (!ctx.cr6.gt) goto loc_82339720;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r26,1
	ctx.r26.s64 = 1;
	// li r21,-1
	ctx.r21.s64 = -1;
	// addi r25,r11,-23516
	ctx.r25.s64 = ctx.r11.s64 + -23516;
loc_82339590:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x8233959C;
	sub_8226D8E8(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82339650
	if (!ctx.cr6.lt) goto loc_82339650;
	// bl 0x8226d8e8
	ctx.lr = 0x823395B8;
	sub_8226D8E8(ctx, base);
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x823395ec
	if (!ctx.cr6.lt) goto loc_823395EC;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// lwzx r31,r9,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r8,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r8.u32);
	// b 0x823395f0
	goto loc_823395F0;
loc_823395EC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823395F0:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82691500
	ctx.lr = 0x823395F8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82339620
	if (ctx.cr0.eq) goto loc_82339620;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// stw r26,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r26.u32);
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// beq 0x82339624
	if (ctx.cr0.eq) goto loc_82339624;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// b 0x82339624
	goto loc_82339624;
loc_82339620:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82339624:
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f6330
	ctx.lr = 0x8233963C;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823396f4
	if (ctx.cr6.eq) goto loc_823396F4;
	// bl 0x82241d18
	ctx.lr = 0x8233964C;
	sub_82241D18(ctx, base);
	// b 0x823396f4
	goto loc_823396F4;
loc_82339650:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r11,36
	ctx.r11.s64 = 36;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// divw r11,r9,r11
	ctx.r11.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82339674
	if (!ctx.cr6.lt) goto loc_82339674;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82339674:
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// li r3,60
	ctx.r3.s64 = 60;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82691500
	ctx.lr = 0x82339684;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823396c4
	if (ctx.cr0.eq) goto loc_823396C4;
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// beq 0x823396c8
	if (ctx.cr0.eq) goto loc_823396C8;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r21,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r21.u32);
	// beq cr6,0x823396c8
	if (ctx.cr6.eq) goto loc_823396C8;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823396C0;
	sub_82FA77C0(ctx, base);
	// b 0x823396c8
	goto loc_823396C8;
loc_823396C4:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823396C8:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f6330
	ctx.lr = 0x823396E0;
	sub_823F6330(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823396f0
	if (ctx.cr6.eq) goto loc_823396F0;
	// bl 0x82241d18
	ctx.lr = 0x823396F0;
	sub_82241D18(ctx, base);
loc_823396F0:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
loc_823396F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82433018
	ctx.lr = 0x82339700;
	sub_82433018(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339710
	if (ctx.cr6.eq) goto loc_82339710;
	// bl 0x82241d18
	ctx.lr = 0x82339710;
	sub_82241D18(ctx, base);
loc_82339710:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82339590
	if (ctx.cr6.lt) goto loc_82339590;
loc_82339720:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825469e0
	ctx.lr = 0x82339728;
	sub_825469E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339734"))) PPC_WEAK_FUNC(sub_82339734);
PPC_FUNC_IMPL(__imp__sub_82339734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339738"))) PPC_WEAK_FUNC(sub_82339738);
PPC_FUNC_IMPL(__imp__sub_82339738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82339740;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x823397b8
	if (ctx.cr6.eq) goto loc_823397B8;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82339784
	if (ctx.cr6.eq) goto loc_82339784;
loc_82339768:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6330
	ctx.lr = 0x82339774;
	sub_823F6330(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82339768
	if (!ctx.cr6.eq) goto loc_82339768;
loc_82339784:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823397b4
	if (ctx.cr6.eq) goto loc_823397B4;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
loc_82339794:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823397a4
	if (ctx.cr6.eq) goto loc_823397A4;
	// bl 0x82241d18
	ctx.lr = 0x823397A4;
	sub_82241D18(ctx, base);
loc_823397A4:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82339794
	if (!ctx.cr6.eq) goto loc_82339794;
loc_823397B4:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_823397B8:
	// lwz r31,16(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// b 0x823397d0
	goto loc_823397D0;
loc_823397C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82433018
	ctx.lr = 0x823397CC;
	sub_82433018(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_823397D0:
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823397c0
	if (!ctx.cr6.eq) goto loc_823397C0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823397E4"))) PPC_WEAK_FUNC(sub_823397E4);
PPC_FUNC_IMPL(__imp__sub_823397E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823397E8"))) PPC_WEAK_FUNC(sub_823397E8);
PPC_FUNC_IMPL(__imp__sub_823397E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823397F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x823397FC;
	sub_8226C3F0(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82339864
	if (ctx.cr6.lt) goto loc_82339864;
	// beq cr6,0x8233984c
	if (ctx.cr6.eq) goto loc_8233984C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82339834
	if (ctx.cr6.lt) goto loc_82339834;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27452
	ctx.r3.s64 = ctx.r11.s64 + -27452;
	// bl 0x82547f38
	ctx.lr = 0x82339828;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x82339878
	goto loc_82339878;
loc_82339834:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// bl 0x82547f38
	ctx.lr = 0x82339840;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// b 0x82339878
	goto loc_82339878;
loc_8233984C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// bl 0x82547f38
	ctx.lr = 0x82339858;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27508
	ctx.r3.s64 = ctx.r11.s64 + -27508;
	// b 0x82339878
	goto loc_82339878;
loc_82339864:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// bl 0x82547f38
	ctx.lr = 0x82339870;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27548
	ctx.r3.s64 = ctx.r11.s64 + -27548;
loc_82339878:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// bl 0x82547f38
	ctx.lr = 0x82339884;
	sub_82547F38(ctx, base);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// li r27,2
	ctx.r27.s64 = 2;
loc_8233988C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82546708
	ctx.lr = 0x8233989C;
	sub_82546708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82546b30
	ctx.lr = 0x823398A4;
	sub_82546B30(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// divwu. r31,r3,r11
	ctx.r31.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823398cc
	if (ctx.cr0.eq) goto loc_823398CC;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823398B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82339998
	ctx.lr = 0x823398C0;
	sub_82339998(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// bne 0x823398b4
	if (!ctx.cr0.eq) goto loc_823398B4;
loc_823398CC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823398dc
	if (ctx.cr6.eq) goto loc_823398DC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825469e0
	ctx.lr = 0x823398DC;
	sub_825469E0(ctx, base);
loc_823398DC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x8233988c
	if (!ctx.cr0.eq) goto loc_8233988C;
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r26,0(r26)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82339990
	if (ctx.cr6.eq) goto loc_82339990;
	// addi r31,r26,36
	ctx.r31.s64 = ctx.r26.s64 + 36;
	// li r30,2
	ctx.r30.s64 = 2;
	// b 0x82339988
	goto loc_82339988;
loc_82339904:
	// li r28,32767
	ctx.r28.s64 = 32767;
	// bl 0x82fa4108
	ctx.lr = 0x8233990C;
	sub_82FA4108(ctx, base);
	// clrlwi r29,r3,17
	ctx.r29.u64 = ctx.r3.u32 & 0x7FFF;
	// cmplwi cr6,r30,32767
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 32767, ctx.xer);
	// ble cr6,0x8233993c
	if (!ctx.cr6.gt) goto loc_8233993C;
loc_82339918:
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// beq cr6,0x8233993c
	if (ctx.cr6.eq) goto loc_8233993C;
	// bl 0x82fa4108
	ctx.lr = 0x82339924;
	sub_82FA4108(ctx, base);
	// rlwinm r11,r28,15,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 15) & 0xFFFF8000;
	// rlwimi r3,r29,15,0,16
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r29.u32, 15) & 0xFFFF8000) | (ctx.r3.u64 & 0xFFFFFFFF00007FFF);
	// ori r28,r11,32767
	ctx.r28.u64 = ctx.r11.u64 | 32767;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82339918
	if (ctx.cr6.lt) goto loc_82339918;
loc_8233993C:
	// divwu r11,r29,r30
	ctx.r11.u32 = ctx.r29.u32 / ctx.r30.u32;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r29,r11,r26
	ctx.r29.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82339960;
	sub_82FA77C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82339970;
	sub_82FA77C0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82339980;
	sub_82FA77C0(ctx, base);
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82339988:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82339904
	if (!ctx.cr6.eq) goto loc_82339904;
loc_82339990:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82339998"))) PPC_WEAK_FUNC(sub_82339998);
PPC_FUNC_IMPL(__imp__sub_82339998) {
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
	// bge cr6,0x823399d0
	if (!ctx.cr6.lt) goto loc_823399D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x823399d4
	if (!ctx.cr6.gt) goto loc_823399D4;
loc_823399D0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823399D4:
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq 0x82339a80
	if (ctx.cr0.eq) goto loc_82339A80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,36
	ctx.r11.s64 = 36;
	// subf r7,r10,r30
	ctx.r7.s64 = ctx.r30.s64 - ctx.r10.s64;
	// divw r30,r7,r11
	ctx.r30.s32 = ctx.r7.s32 / ctx.r11.s32;
	// bne cr6,0x82339a64
	if (!ctx.cr6.eq) goto loc_82339A64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lis r7,1820
	ctx.r7.s64 = 119275520;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// ori r7,r7,29126
	ctx.r7.u64 = ctx.r7.u64 | 29126;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82339a1c
	if (!ctx.cr6.gt) goto loc_82339A1C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82339A1C;
	sub_82FA0648(ctx, base);
loc_82339A1C:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82339a64
	if (!ctx.cr6.gt) goto loc_82339A64;
	// lis r8,1820
	ctx.r8.s64 = 119275520;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,29127
	ctx.r8.u64 = ctx.r8.u64 | 29127;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82339a50
	if (ctx.cr6.lt) goto loc_82339A50;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82339A50:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82339a5c
	if (!ctx.cr6.lt) goto loc_82339A5C;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82339A5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339b38
	ctx.lr = 0x82339A64;
	sub_82339B38(ctx, base);
loc_82339A64:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 * 36;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339b10
	if (ctx.cr6.eq) goto loc_82339B10;
	// b 0x82339b08
	goto loc_82339B08;
loc_82339A80:
	// bne cr6,0x82339af8
	if (!ctx.cr6.eq) goto loc_82339AF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,36
	ctx.r11.s64 = 36;
	// lis r7,1820
	ctx.r7.s64 = 119275520;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r7,r7,29126
	ctx.r7.u64 = ctx.r7.u64 | 29126;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82339ab0
	if (!ctx.cr6.gt) goto loc_82339AB0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82339AB0;
	sub_82FA0648(ctx, base);
loc_82339AB0:
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// divw r11,r8,r11
	ctx.r11.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82339af8
	if (!ctx.cr6.gt) goto loc_82339AF8;
	// lis r8,1820
	ctx.r8.s64 = 119275520;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,29127
	ctx.r8.u64 = ctx.r8.u64 | 29127;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82339ae4
	if (ctx.cr6.lt) goto loc_82339AE4;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_82339AE4:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82339af0
	if (!ctx.cr6.lt) goto loc_82339AF0;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_82339AF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82339b38
	ctx.lr = 0x82339AF8;
	sub_82339B38(ctx, base);
loc_82339AF8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339b10
	if (ctx.cr6.eq) goto loc_82339B10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82339B08:
	// li r5,36
	ctx.r5.s64 = 36;
	// bl 0x82fa77c0
	ctx.lr = 0x82339B10;
	sub_82FA77C0(ctx, base);
loc_82339B10:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
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

__attribute__((alias("__imp__sub_82339B34"))) PPC_WEAK_FUNC(sub_82339B34);
PPC_FUNC_IMPL(__imp__sub_82339B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339B38"))) PPC_WEAK_FUNC(sub_82339B38);
PPC_FUNC_IMPL(__imp__sub_82339B38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82339B40;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,1820
	ctx.r11.s64 = 119275520;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,29127
	ctx.r11.u64 = ctx.r11.u64 | 29127;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82339b68
	if (!ctx.cr6.gt) goto loc_82339B68;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82339B68;
	sub_82FA0648(ctx, base);
loc_82339B68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r25,36
	ctx.r25.s64 = 36;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x82339c2c
	if (!ctx.cr6.lt) goto loc_82339C2C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82339ba0
	if (ctx.cr6.eq) goto loc_82339BA0;
	// mulli r3,r26,36
	ctx.r3.s64 = ctx.r26.s64 * 36;
	// bl 0x82691500
	ctx.lr = 0x82339B98;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82339c34
	if (ctx.cr0.eq) goto loc_82339C34;
loc_82339BA0:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82339bd0
	goto loc_82339BD0;
loc_82339BB0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82339bc8
	if (ctx.cr6.eq) goto loc_82339BC8;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82339BC8;
	sub_82FA77C0(ctx, base);
loc_82339BC8:
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
loc_82339BD0:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82339bb0
	if (!ctx.cr6.eq) goto loc_82339BB0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// divw r30,r10,r25
	ctx.r30.s32 = ctx.r10.s32 / ctx.r25.s32;
	// beq cr6,0x82339c10
	if (ctx.cr6.eq) goto loc_82339C10;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82339c0c
	if (ctx.cr6.eq) goto loc_82339C0C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82339C00:
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82339c00
	if (!ctx.cr6.eq) goto loc_82339C00;
loc_82339C0C:
	// bl 0x82691540
	ctx.lr = 0x82339C10;
	sub_82691540(ctx, base);
loc_82339C10:
	// mulli r11,r26,36
	ctx.r11.s64 = ctx.r26.s64 * 36;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mulli r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 * 36;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82339C2C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82339C34:
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
	ctx.lr = 0x82339C50;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82339C50"))) PPC_WEAK_FUNC(sub_82339C50);
PPC_FUNC_IMPL(__imp__sub_82339C50) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r3,52
	ctx.r3.s64 = ctx.r3.s64 + 52;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x823090c8
	ctx.lr = 0x82339C80;
	sub_823090C8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stfs f0,68(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// stfs f0,72(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// bl 0x82546708
	ctx.lr = 0x82339CB8;
	sub_82546708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82fa77c0
	ctx.lr = 0x82339CCC;
	sub_82FA77C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x82339CD4;
	sub_825469E0(ctx, base);
	// lis r11,-32117
	ctx.r11.s64 = -2104819712;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r31,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r31.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// addi r11,r11,9280
	ctx.r11.s64 = ctx.r11.s64 + 9280;
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// stw r9,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r9.u32);
	// bl 0x8250f738
	ctx.lr = 0x82339D00;
	sub_8250F738(ctx, base);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x825349f0
	ctx.lr = 0x82339D08;
	sub_825349F0(ctx, base);
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

__attribute__((alias("__imp__sub_82339D24"))) PPC_WEAK_FUNC(sub_82339D24);
PPC_FUNC_IMPL(__imp__sub_82339D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339D28"))) PPC_WEAK_FUNC(sub_82339D28);
PPC_FUNC_IMPL(__imp__sub_82339D28) {
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
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a6c8
	ctx.lr = 0x82339D4C;
	sub_8233A6C8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4056
	ctx.r4.s64 = ctx.r11.s64 + 4056;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82fa77c0
	ctx.lr = 0x82339D60;
	sub_82FA77C0(ctx, base);
	// li r5,500
	ctx.r5.s64 = 500;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,124
	ctx.r3.s64 = ctx.r1.s64 + 124;
	// bl 0x82fa7cf0
	ctx.lr = 0x82339D70;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt cr6,0x82339da8
	if (ctx.cr6.lt) goto loc_82339DA8;
	// beq cr6,0x82339d9c
	if (ctx.cr6.eq) goto loc_82339D9C;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x82339dbc
	if (!ctx.cr6.lt) goto loc_82339DBC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,4068
	ctx.r5.s64 = ctx.r11.s64 + 4068;
	// b 0x82339db0
	goto loc_82339DB0;
loc_82339D9C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,4084
	ctx.r5.s64 = ctx.r11.s64 + 4084;
	// b 0x82339db0
	goto loc_82339DB0;
loc_82339DA8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,4096
	ctx.r5.s64 = ctx.r11.s64 + 4096;
loc_82339DB0:
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa2df8
	ctx.lr = 0x82339DBC;
	sub_82FA2DF8(ctx, base);
loc_82339DBC:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x82339DC8;
	sub_822E4D50(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x82339DDC;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2180
	ctx.r4.s64 = ctx.r11.s64 + 2180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826a7620
	ctx.lr = 0x82339DF4;
	sub_826A7620(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339e04
	if (ctx.cr6.eq) goto loc_82339E04;
	// bl 0x82241d18
	ctx.lr = 0x82339E04;
	sub_82241D18(ctx, base);
loc_82339E04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d00
	ctx.lr = 0x82339E0C;
	sub_822E4D00(ctx, base);
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
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

__attribute__((alias("__imp__sub_82339E24"))) PPC_WEAK_FUNC(sub_82339E24);
PPC_FUNC_IMPL(__imp__sub_82339E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82339E28"))) PPC_WEAK_FUNC(sub_82339E28);
PPC_FUNC_IMPL(__imp__sub_82339E28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a6c8
	ctx.lr = 0x82339E44;
	sub_8233A6C8(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r10,4108
	ctx.r10.s64 = ctx.r10.s64 + 4108;
	// addi r9,r1,110
	ctx.r9.s64 = ctx.r1.s64 + 110;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82339E5C:
	// lhzu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82339e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82339E5C;
	// li r5,502
	ctx.r5.s64 = 502;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,122
	ctx.r3.s64 = ctx.r1.s64 + 122;
	// bl 0x82fa7cf0
	ctx.lr = 0x82339E78;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x82339E90;
	sub_822E4D50(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x82339EA4;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2180
	ctx.r4.s64 = ctx.r11.s64 + 2180;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826a7620
	ctx.lr = 0x82339EBC;
	sub_826A7620(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339ecc
	if (ctx.cr6.eq) goto loc_82339ECC;
	// bl 0x82241d18
	ctx.lr = 0x82339ECC;
	sub_82241D18(ctx, base);
loc_82339ECC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d00
	ctx.lr = 0x82339ED4;
	sub_822E4D00(ctx, base);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82339EE8"))) PPC_WEAK_FUNC(sub_82339EE8);
PPC_FUNC_IMPL(__imp__sub_82339EE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82339EF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r3,12
	ctx.r4.s64 = ctx.r3.s64 + 12;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a6c8
	ctx.lr = 0x82339F04;
	sub_8233A6C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x823f62d0
	ctx.lr = 0x82339F1C;
	sub_823F62D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82339460
	ctx.lr = 0x82339F24;
	sub_82339460(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82339f3c
	if (ctx.cr6.eq) goto loc_82339F3C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x82339F3C;
	sub_82241D18(ctx, base);
loc_82339F3C:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82519160
	ctx.lr = 0x82339F48;
	sub_82519160(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a4158
	ctx.lr = 0x82339F5C;
	sub_826A4158(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339f6c
	if (ctx.cr6.eq) goto loc_82339F6C;
	// bl 0x82241d18
	ctx.lr = 0x82339F6C;
	sub_82241D18(ctx, base);
loc_82339F6C:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82339F78;
	sub_822E4D50(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x82339F8C;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2032
	ctx.r4.s64 = ctx.r11.s64 + 2032;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x82339FA4;
	sub_826A7620(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82339fb4
	if (ctx.cr6.eq) goto loc_82339FB4;
	// bl 0x82241d18
	ctx.lr = 0x82339FB4;
	sub_82241D18(ctx, base);
loc_82339FB4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x823f62d0
	ctx.lr = 0x82339FC4;
	sub_823F62D0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82339460
	ctx.lr = 0x82339FCC;
	sub_82339460(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82339fe4
	if (ctx.cr6.eq) goto loc_82339FE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x82339FE4;
	sub_82241D18(ctx, base);
loc_82339FE4:
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82519160
	ctx.lr = 0x82339FF0;
	sub_82519160(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a4158
	ctx.lr = 0x8233A004;
	sub_826A4158(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a014
	if (ctx.cr6.eq) goto loc_8233A014;
	// bl 0x82241d18
	ctx.lr = 0x8233A014;
	sub_82241D18(ctx, base);
loc_8233A014:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8233A020;
	sub_822E4D50(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8233A034;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2052
	ctx.r4.s64 = ctx.r11.s64 + 2052;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x8233A04C;
	sub_826A7620(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a05c
	if (ctx.cr6.eq) goto loc_8233A05C;
	// bl 0x82241d18
	ctx.lr = 0x8233A05C;
	sub_82241D18(ctx, base);
loc_8233A05C:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d00
	ctx.lr = 0x8233A064;
	sub_822E4D00(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a074
	if (ctx.cr6.eq) goto loc_8233A074;
	// bl 0x82241d18
	ctx.lr = 0x8233A074;
	sub_82241D18(ctx, base);
loc_8233A074:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A07C"))) PPC_WEAK_FUNC(sub_8233A07C);
PPC_FUNC_IMPL(__imp__sub_8233A07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A080"))) PPC_WEAK_FUNC(sub_8233A080);
PPC_FUNC_IMPL(__imp__sub_8233A080) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233A088;
	__savegprlr_29(ctx, base);
	// stwu r1,-1232(r1)
	ea = -1232 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// addi r4,r3,16
	ctx.r4.s64 = ctx.r3.s64 + 16;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,20(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x8233a6c8
	ctx.lr = 0x8233A0C8;
	sub_8233A6C8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// lhz r30,31944(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r30,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8233A0E4;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r30,688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 688, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,690
	ctx.r3.s64 = ctx.r1.s64 + 690;
	// bl 0x82fa7cf0
	ctx.lr = 0x8233A0F8;
	sub_82FA7CF0(ctx, base);
	// lfs f1,168(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r30,r10,820
	ctx.r30.s64 = ctx.r10.s64 + 820;
	// li r4,256
	ctx.r4.s64 = 256;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x82563c28
	ctx.lr = 0x8233A128;
	sub_82563C28(ctx, base);
	// lfs f1,172(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	ctx.f1.f64 = double(temp.f32);
	// stfd f1,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f1.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// bl 0x82563c28
	ctx.lr = 0x8233A144;
	sub_82563C28(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8233A150;
	sub_822E4D50(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r11,r11,2096
	ctx.r11.s64 = ctx.r11.s64 + 2096;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8233A168;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2120
	ctx.r4.s64 = ctx.r11.s64 + 2120;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x8233A180;
	sub_826A7620(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a190
	if (ctx.cr6.eq) goto loc_8233A190;
	// bl 0x82241d18
	ctx.lr = 0x8233A190;
	sub_82241D18(ctx, base);
loc_8233A190:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8233A19C;
	sub_822E4D50(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8233A1B0;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2140
	ctx.r4.s64 = ctx.r11.s64 + 2140;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x8233A1C8;
	sub_826A7620(ctx, base);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a1d8
	if (ctx.cr6.eq) goto loc_8233A1D8;
	// bl 0x82241d18
	ctx.lr = 0x8233A1D8;
	sub_82241D18(ctx, base);
loc_8233A1D8:
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8233A1E4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,688
	ctx.r11.s64 = ctx.r1.s64 + 688;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8233A1F8;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2160
	ctx.r4.s64 = ctx.r11.s64 + 2160;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x8233A210;
	sub_826A7620(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a220
	if (ctx.cr6.eq) goto loc_8233A220;
	// bl 0x82241d18
	ctx.lr = 0x8233A220;
	sub_82241D18(ctx, base);
loc_8233A220:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d00
	ctx.lr = 0x8233A228;
	sub_822E4D00(ctx, base);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a238
	if (ctx.cr6.eq) goto loc_8233A238;
	// bl 0x82241d18
	ctx.lr = 0x8233A238;
	sub_82241D18(ctx, base);
loc_8233A238:
	// addi r1,r1,1232
	ctx.r1.s64 = ctx.r1.s64 + 1232;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A240"))) PPC_WEAK_FUNC(sub_8233A240);
PPC_FUNC_IMPL(__imp__sub_8233A240) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233A248;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r3,20
	ctx.r4.s64 = ctx.r3.s64 + 20;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a6c8
	ctx.lr = 0x8233A25C;
	sub_8233A6C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82339460
	ctx.lr = 0x8233A270;
	sub_82339460(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82519160
	ctx.lr = 0x8233A280;
	sub_82519160(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x826a4158
	ctx.lr = 0x8233A294;
	sub_826A4158(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a2a4
	if (ctx.cr6.eq) goto loc_8233A2A4;
	// bl 0x82241d18
	ctx.lr = 0x8233A2A4;
	sub_82241D18(ctx, base);
loc_8233A2A4:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8233A2B0;
	sub_822E4D50(ctx, base);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8233A2C4;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2032
	ctx.r4.s64 = ctx.r11.s64 + 2032;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8233A2DC;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a2ec
	if (ctx.cr6.eq) goto loc_8233A2EC;
	// bl 0x82241d18
	ctx.lr = 0x8233A2EC;
	sub_82241D18(ctx, base);
loc_8233A2EC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8233A2F4;
	sub_822E4D00(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a304
	if (ctx.cr6.eq) goto loc_8233A304;
	// bl 0x82241d18
	ctx.lr = 0x8233A304;
	sub_82241D18(ctx, base);
loc_8233A304:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A30C"))) PPC_WEAK_FUNC(sub_8233A30C);
PPC_FUNC_IMPL(__imp__sub_8233A30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A310"))) PPC_WEAK_FUNC(sub_8233A310);
PPC_FUNC_IMPL(__imp__sub_8233A310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233A318;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822ca958
	ctx.lr = 0x8233A324;
	sub_822CA958(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233a348
	if (ctx.cr6.eq) goto loc_8233A348;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233a34c
	if (ctx.cr6.eq) goto loc_8233A34C;
loc_8233A348:
	// li r29,0
	ctx.r29.s64 = 0;
loc_8233A34C:
	// li r3,472
	ctx.r3.s64 = 472;
	// bl 0x82691500
	ctx.lr = 0x8233A354;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233a3b4
	if (ctx.cr0.eq) goto loc_8233A3B4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r3,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r3.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8233a3b8
	if (ctx.cr0.eq) goto loc_8233A3B8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,4140
	ctx.r11.s64 = ctx.r11.s64 + 4140;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r9,r30,28
	ctx.r9.s64 = ctx.r30.s64 + 28;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r30,84
	ctx.r6.s64 = ctx.r30.s64 + 84;
	// addi r5,r30,80
	ctx.r5.s64 = ctx.r30.s64 + 80;
	// addi r4,r30,24
	ctx.r4.s64 = ctx.r30.s64 + 24;
	// bl 0x8252cbc8
	ctx.lr = 0x8233A3B0;
	sub_8252CBC8(ctx, base);
	// b 0x8233a3b8
	goto loc_8233A3B8;
loc_8233A3B4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233A3B8:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x8233A3D0;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233a768
	ctx.lr = 0x8233A3DC;
	sub_8233A768(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233a3ec
	if (ctx.cr6.eq) goto loc_8233A3EC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x8233A3EC;
	sub_82241D18(ctx, base);
loc_8233A3EC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A3F4"))) PPC_WEAK_FUNC(sub_8233A3F4);
PPC_FUNC_IMPL(__imp__sub_8233A3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A3F8"))) PPC_WEAK_FUNC(sub_8233A3F8);
PPC_FUNC_IMPL(__imp__sub_8233A3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8233A400;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8233a6c8
	ctx.lr = 0x8233A418;
	sub_8233A6C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x823386d0
	ctx.lr = 0x8233A424;
	sub_823386D0(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233a450
	if (ctx.cr6.eq) goto loc_8233A450;
	// lfs f0,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8233a470
	if (!ctx.cr6.lt) goto loc_8233A470;
	// b 0x8233a474
	goto loc_8233A474;
loc_8233A450:
	// lfs f13,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x8233a474
	if (!ctx.cr6.gt) goto loc_8233A474;
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x8233a470
	if (!ctx.cr6.gt) goto loc_8233A470;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x8233a474
	if (ctx.cr6.gt) goto loc_8233A474;
loc_8233A470:
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_8233A474:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x823f62d0
	ctx.lr = 0x8233A480;
	sub_823F62D0(ctx, base);
	// lwz r29,128(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x8250e730
	ctx.lr = 0x8233A490;
	sub_8250E730(ctx, base);
	// lwz r28,160(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x8250e730
	ctx.lr = 0x8233A4A0;
	sub_8250E730(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stfs f31,68(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,510
	ctx.r5.s64 = 510;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8233A4C8;
	sub_82FA7CF0(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r11,4120
	ctx.r5.s64 = ctx.r11.s64 + 4120;
	// lwz r7,4(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82563c28
	ctx.lr = 0x8233A4EC;
	sub_82563C28(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8233A4F8;
	sub_822E4D50(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8233A50C;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,2180
	ctx.r4.s64 = ctx.r11.s64 + 2180;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x8233A524;
	sub_826A7620(ctx, base);
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a534
	if (ctx.cr6.eq) goto loc_8233A534;
	// bl 0x82241d18
	ctx.lr = 0x8233A534;
	sub_82241D18(ctx, base);
loc_8233A534:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d00
	ctx.lr = 0x8233A53C;
	sub_822E4D00(ctx, base);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a54c
	if (ctx.cr6.eq) goto loc_8233A54C;
	// bl 0x82241d18
	ctx.lr = 0x8233A54C;
	sub_82241D18(ctx, base);
loc_8233A54C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a55c
	if (ctx.cr6.eq) goto loc_8233A55C;
	// bl 0x82241d18
	ctx.lr = 0x8233A55C;
	sub_82241D18(ctx, base);
loc_8233A55C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a56c
	if (ctx.cr6.eq) goto loc_8233A56C;
	// bl 0x82241d18
	ctx.lr = 0x8233A56C;
	sub_82241D18(ctx, base);
loc_8233A56C:
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A578"))) PPC_WEAK_FUNC(sub_8233A578);
PPC_FUNC_IMPL(__imp__sub_8233A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8233A580;
	__savegprlr_25(ctx, base);
	// stwu r1,-1200(r1)
	ea = -1200 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x8250f738
	ctx.lr = 0x8233A58C;
	sub_8250F738(ctx, base);
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// bl 0x825349f0
	ctx.lr = 0x8233A594;
	sub_825349F0(ctx, base);
	// lwz r26,0(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// b 0x8233a6b0
	goto loc_8233A6B0;
loc_8233A59C:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823f62d0
	ctx.lr = 0x8233A5A8;
	sub_823F62D0(ctx, base);
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r27,r11,15
	ctx.r27.s64 = ctx.r11.s64 + 15;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x8233a694
	if (!ctx.cr6.lt) goto loc_8233A694;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x8226c3f0
	ctx.lr = 0x8233A5C8;
	sub_8226C3F0(ctx, base);
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8226c3f0
	ctx.lr = 0x8233A5D0;
	sub_8226C3F0(ctx, base);
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// bl 0x8226c3f0
	ctx.lr = 0x8233A5D8;
	sub_8226C3F0(ctx, base);
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r28,r11,120
	ctx.r28.s64 = ctx.r11.s64 + 120;
	// beq cr6,0x8233a620
	if (ctx.cr6.eq) goto loc_8233A620;
	// bl 0x8226d8e8
	ctx.lr = 0x8233A5F4;
	sub_8226D8E8(ctx, base);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x8226ed48
	ctx.lr = 0x8233A604;
	sub_8226ED48(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// bl 0x8245c4f0
	ctx.lr = 0x8233A61C;
	sub_8245C4F0(ctx, base);
	// b 0x8233a64c
	goto loc_8233A64C;
loc_8233A620:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82546708
	ctx.lr = 0x8233A630;
	sub_82546708(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// bl 0x8245c5a8
	ctx.lr = 0x8233A64C;
	sub_8245C5A8(ctx, base);
loc_8233A64C:
	// bl 0x8250eb70
	ctx.lr = 0x8233A650;
	sub_8250EB70(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8250e650
	ctx.lr = 0x8233A680;
	sub_8250E650(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8233a69c
	if (ctx.cr6.eq) goto loc_8233A69C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x8233A690;
	sub_825469E0(ctx, base);
	// b 0x8233a69c
	goto loc_8233A69C;
loc_8233A694:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8250e960
	ctx.lr = 0x8233A69C;
	sub_8250E960(ctx, base);
loc_8233A69C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a6ac
	if (ctx.cr6.eq) goto loc_8233A6AC;
	// bl 0x82241d18
	ctx.lr = 0x8233A6AC;
	sub_82241D18(ctx, base);
loc_8233A6AC:
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
loc_8233A6B0:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8233a59c
	if (!ctx.cr6.eq) goto loc_8233A59C;
	// addi r1,r1,1200
	ctx.r1.s64 = ctx.r1.s64 + 1200;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A6C4"))) PPC_WEAK_FUNC(sub_8233A6C4);
PPC_FUNC_IMPL(__imp__sub_8233A6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A6C8"))) PPC_WEAK_FUNC(sub_8233A6C8);
PPC_FUNC_IMPL(__imp__sub_8233A6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233A6D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,360
	ctx.r3.s64 = 360;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x8233A6F0;
	sub_82691500(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233a714
	if (ctx.cr0.eq) goto loc_8233A714;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233a810
	ctx.lr = 0x8233A70C;
	sub_8233A810(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8233a718
	goto loc_8233A718;
loc_8233A714:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8233A718:
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233a744
	if (ctx.cr6.eq) goto loc_8233A744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8233A734;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233a744
	if (ctx.cr0.eq) goto loc_8233A744;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
loc_8233A744:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8233a768
	ctx.lr = 0x8233A750;
	sub_8233A768(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233a760
	if (ctx.cr6.eq) goto loc_8233A760;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x8233A760;
	sub_82241D18(ctx, base);
loc_8233A760:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A768"))) PPC_WEAK_FUNC(sub_8233A768);
PPC_FUNC_IMPL(__imp__sub_8233A768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233A770;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4400(r1)
	ea = -4400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822a3128
	ctx.lr = 0x8233A788;
	sub_822A3128(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8250e3e8
	ctx.lr = 0x8233A794;
	sub_8250E3E8(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233a7ac
	if (ctx.cr0.eq) goto loc_8233A7AC;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x8250b630
	ctx.lr = 0x8233A7A8;
	sub_8250B630(ctx, base);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_8233A7AC:
	// addi r30,r31,52
	ctx.r30.s64 = ctx.r31.s64 + 52;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825af408
	ctx.lr = 0x8233A7BC;
	sub_825AF408(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x825af408
	ctx.lr = 0x8233A7C8;
	sub_825AF408(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8250b348
	ctx.lr = 0x8233A7D0;
	sub_8250B348(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// beq cr6,0x8233a7f8
	if (ctx.cr6.eq) goto loc_8233A7F8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x8233A7F8;
	sub_82241D18(ctx, base);
loc_8233A7F8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233a808
	if (ctx.cr6.eq) goto loc_8233A808;
	// bl 0x82241d18
	ctx.lr = 0x8233A808;
	sub_82241D18(ctx, base);
loc_8233A808:
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A810"))) PPC_WEAK_FUNC(sub_8233A810);
PPC_FUNC_IMPL(__imp__sub_8233A810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8233A818;
	__savegprlr_26(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addic. r30,r3,16
	ctx.xer.ca = ctx.r3.u32 > 4294967279;
	ctx.r30.s64 = ctx.r3.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// beq 0x8233a8c0
	if (ctx.cr0.eq) goto loc_8233A8C0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r10,r10,4164
	ctx.r10.s64 = ctx.r10.s64 + 4164;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// stw r29,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r29.u32);
	// bl 0x8226c200
	ctx.lr = 0x8233A878;
	sub_8226C200(ctx, base);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// bl 0x82518b28
	ctx.lr = 0x8233A8AC;
	sub_82518B28(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r11,4188
	ctx.r11.s64 = ctx.r11.s64 + 4188;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82f91940
	ctx.lr = 0x8233A8C0;
	sub_82F91940(ctx, base);
loc_8233A8C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233A8CC"))) PPC_WEAK_FUNC(sub_8233A8CC);
PPC_FUNC_IMPL(__imp__sub_8233A8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A8D0"))) PPC_WEAK_FUNC(sub_8233A8D0);
PPC_FUNC_IMPL(__imp__sub_8233A8D0) {
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
	// bne cr6,0x8233a918
	if (!ctx.cr6.eq) goto loc_8233A918;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8233A8F4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8233a918
	if (!ctx.cr0.eq) goto loc_8233A918;
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
	ctx.lr = 0x8233A918;
	sub_82240040(ctx, base);
loc_8233A918:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,4140
	ctx.r11.s64 = ctx.r11.s64 + 4140;
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

__attribute__((alias("__imp__sub_8233A944"))) PPC_WEAK_FUNC(sub_8233A944);
PPC_FUNC_IMPL(__imp__sub_8233A944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A948"))) PPC_WEAK_FUNC(sub_8233A948);
PPC_FUNC_IMPL(__imp__sub_8233A948) {
	PPC_FUNC_PROLOGUE();
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
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233a970
	if (ctx.cr0.eq) goto loc_8233A970;
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// andi. r10,r10,247
	ctx.r10.u64 = ctx.r10.u64 & 247;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x8233a978
	goto loc_8233A978;
loc_8233A970:
	// lbz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
loc_8233A978:
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A980"))) PPC_WEAK_FUNC(sub_8233A980);
PPC_FUNC_IMPL(__imp__sub_8233A980) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19380
	ctx.r3.s64 = ctx.r11.s64 + -19380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233A98C"))) PPC_WEAK_FUNC(sub_8233A98C);
PPC_FUNC_IMPL(__imp__sub_8233A98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233A990"))) PPC_WEAK_FUNC(sub_8233A990);
PPC_FUNC_IMPL(__imp__sub_8233A990) {
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
	// bne cr6,0x8233a9d8
	if (!ctx.cr6.eq) goto loc_8233A9D8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8233A9B4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8233a9d8
	if (!ctx.cr0.eq) goto loc_8233A9D8;
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
	ctx.lr = 0x8233A9D8;
	sub_82240040(ctx, base);
loc_8233A9D8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,4164
	ctx.r11.s64 = ctx.r11.s64 + 4164;
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

__attribute__((alias("__imp__sub_8233AA04"))) PPC_WEAK_FUNC(sub_8233AA04);
PPC_FUNC_IMPL(__imp__sub_8233AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AA08"))) PPC_WEAK_FUNC(sub_8233AA08);
PPC_FUNC_IMPL(__imp__sub_8233AA08) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8233aa4c
	if (ctx.cr6.eq) goto loc_8233AA4C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8233aa4c
	if (ctx.cr0.eq) goto loc_8233AA4C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,21076
	ctx.r11.s64 = ctx.r11.s64 + 21076;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8233AA4C;
	sub_8259C8E0(ctx, base);
loc_8233AA4C:
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

__attribute__((alias("__imp__sub_8233AA60"))) PPC_WEAK_FUNC(sub_8233AA60);
PPC_FUNC_IMPL(__imp__sub_8233AA60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-19324
	ctx.r3.s64 = ctx.r11.s64 + -19324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233AA6C"))) PPC_WEAK_FUNC(sub_8233AA6C);
PPC_FUNC_IMPL(__imp__sub_8233AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AA70"))) PPC_WEAK_FUNC(sub_8233AA70);
PPC_FUNC_IMPL(__imp__sub_8233AA70) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4188
	ctx.r11.s64 = ctx.r11.s64 + 4188;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82518fd0
	ctx.lr = 0x8233AA9C;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233aaac
	if (ctx.cr0.eq) goto loc_8233AAAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8233AAAC;
	sub_82691540(ctx, base);
loc_8233AAAC:
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

__attribute__((alias("__imp__sub_8233AAC8"))) PPC_WEAK_FUNC(sub_8233AAC8);
PPC_FUNC_IMPL(__imp__sub_8233AAC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233AAD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82556540
	ctx.lr = 0x8233AAE0;
	sub_82556540(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,4240
	ctx.r10.s64 = ctx.r10.s64 + 4240;
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// addi r4,r9,4228
	ctx.r4.s64 = ctx.r9.s64 + 4228;
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// bl 0x8257cbb8
	ctx.lr = 0x8233AB2C;
	sub_8257CBB8(ctx, base);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x8233AB34;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233ab58
	if (ctx.cr0.eq) goto loc_8233AB58;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r29,72
	ctx.r4.s64 = ctx.r29.s64 + 72;
	// bl 0x8257f968
	ctx.lr = 0x8233AB54;
	sub_8257F968(ctx, base);
	// b 0x8233ab5c
	goto loc_8233AB5C;
loc_8233AB58:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8233AB5C:
	// stw r3,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r3.u32);
	// bl 0x822ca958
	ctx.lr = 0x8233AB64;
	sub_822CA958(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// bl 0x82535b38
	ctx.lr = 0x8233AB74;
	sub_82535B38(ctx, base);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// bl 0x82536228
	ctx.lr = 0x8233AB7C;
	sub_82536228(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233AB88"))) PPC_WEAK_FUNC(sub_8233AB88);
PPC_FUNC_IMPL(__imp__sub_8233AB88) {
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
	// bl 0x8233abd8
	ctx.lr = 0x8233ABA8;
	sub_8233ABD8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233abb8
	if (ctx.cr0.eq) goto loc_8233ABB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8233ABB8;
	sub_82691540(ctx, base);
loc_8233ABB8:
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

__attribute__((alias("__imp__sub_8233ABD4"))) PPC_WEAK_FUNC(sub_8233ABD4);
PPC_FUNC_IMPL(__imp__sub_8233ABD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233ABD8"))) PPC_WEAK_FUNC(sub_8233ABD8);
PPC_FUNC_IMPL(__imp__sub_8233ABD8) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r11,r11,4240
	ctx.r11.s64 = ctx.r11.s64 + 4240;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8257e8d8
	ctx.lr = 0x8233AC00;
	sub_8257E8D8(ctx, base);
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ac3c
	if (ctx.cr6.eq) goto loc_8233AC3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233AC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233ac3c
	if (ctx.cr6.eq) goto loc_8233AC3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233AC3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233AC3C:
	// bl 0x822ca958
	ctx.lr = 0x8233AC40;
	sub_822CA958(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,29092
	ctx.r10.s64 = ctx.r10.s64 + 29092;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822402c8
	ctx.lr = 0x8233AC68;
	sub_822402C8(ctx, base);
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

__attribute__((alias("__imp__sub_8233AC7C"))) PPC_WEAK_FUNC(sub_8233AC7C);
PPC_FUNC_IMPL(__imp__sub_8233AC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AC80"))) PPC_WEAK_FUNC(sub_8233AC80);
PPC_FUNC_IMPL(__imp__sub_8233AC80) {
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
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233ace4
	if (!ctx.cr6.eq) goto loc_8233ACE4;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8257e800
	ctx.lr = 0x8233ACB8;
	sub_8257E800(ctx, base);
	// lis r11,-31956
	ctx.r11.s64 = -2094268416;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-4280
	ctx.r11.s64 = ctx.r11.s64 + -4280;
	// stw r10,432(r30)
	PPC_STORE_U32(ctx.r30.u32 + 432, ctx.r10.u32);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8233ace4
	if (ctx.cr6.eq) goto loc_8233ACE4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r4,r11,4228
	ctx.r4.s64 = ctx.r11.s64 + 4228;
	// bl 0x8257e9e8
	ctx.lr = 0x8233ACE4;
	sub_8257E9E8(ctx, base);
loc_8233ACE4:
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

__attribute__((alias("__imp__sub_8233ACFC"))) PPC_WEAK_FUNC(sub_8233ACFC);
PPC_FUNC_IMPL(__imp__sub_8233ACFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AD00"))) PPC_WEAK_FUNC(sub_8233AD00);
PPC_FUNC_IMPL(__imp__sub_8233AD00) {
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
	// lwz r11,432(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 432);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ad30
	if (ctx.cr6.eq) goto loc_8233AD30;
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// bl 0x8257e8d8
	ctx.lr = 0x8233AD28;
	sub_8257E8D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r11.u32);
loc_8233AD30:
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

__attribute__((alias("__imp__sub_8233AD44"))) PPC_WEAK_FUNC(sub_8233AD44);
PPC_FUNC_IMPL(__imp__sub_8233AD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AD48"))) PPC_WEAK_FUNC(sub_8233AD48);
PPC_FUNC_IMPL(__imp__sub_8233AD48) {
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
	// lwz r11,468(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233ad90
	if (ctx.cr6.eq) goto loc_8233AD90;
	// bl 0x822ca958
	ctx.lr = 0x8233AD64;
	sub_822CA958(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8233ad7c
	if (ctx.cr6.eq) goto loc_8233AD7C;
	// lwz r8,76(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	// b 0x8233ad84
	goto loc_8233AD84;
loc_8233AD7C:
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_8233AD84:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r9,-13544(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13544);
	// b 0x8233ada8
	goto loc_8233ADA8;
loc_8233AD90:
	// bl 0x822ca958
	ctx.lr = 0x8233AD94;
	sub_822CA958(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lwz r9,-13544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -13544);
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
loc_8233ADA8:
	// li r7,255
	ctx.r7.s64 = 255;
	// li r6,240
	ctx.r6.s64 = 240;
	// li r5,320
	ctx.r5.s64 = 320;
	// li r4,50
	ctx.r4.s64 = 50;
	// li r3,800
	ctx.r3.s64 = 800;
	// bl 0x825b67d8
	ctx.lr = 0x8233ADC0;
	sub_825B67D8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233ADD0"))) PPC_WEAK_FUNC(sub_8233ADD0);
PPC_FUNC_IMPL(__imp__sub_8233ADD0) {
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
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r11,-17336
	ctx.r11.s64 = ctx.r11.s64 + -17336;
	// li r9,4
	ctx.r9.s64 = 4;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r7,12
	ctx.r7.s64 = 12;
	// addi r8,r8,-2340
	ctx.r8.s64 = ctx.r8.s64 + -2340;
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lvlx v13,r11,r9
	temp.u32 = ctx.r11.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// addi r10,r10,24448
	ctx.r10.s64 = ctx.r10.s64 + 24448;
	// lvlx v12,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lwz r11,236(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vrlimi128 v0,v12,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// beq cr6,0x8233ae3c
	if (ctx.cr6.eq) goto loc_8233AE3C;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8233ae40
	goto loc_8233AE40;
loc_8233AE3C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233AE40:
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,1
	ctx.r10.s64 = 1;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r10,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r10.u32);
	// addi r4,r9,-32480
	ctx.r4.s64 = ctx.r9.s64 + -32480;
	// stvx128 v0,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8257d6e8
	ctx.lr = 0x8233AE64;
	sub_8257D6E8(ctx, base);
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233aeb0
	if (ctx.cr6.eq) goto loc_8233AEB0;
	// bl 0x822ca958
	ctx.lr = 0x8233AE74;
	sub_822CA958(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,444(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,28(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// b 0x8233ae98
	goto loc_8233AE98;
loc_8233AE88:
	// lwz r8,44(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8233aec4
	if (ctx.cr6.eq) goto loc_8233AEC4;
	// addi r11,r11,104
	ctx.r11.s64 = ctx.r11.s64 + 104;
loc_8233AE98:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233ae88
	if (!ctx.cr6.eq) goto loc_8233AE88;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233AEA4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233aeb0
	if (!ctx.cr6.eq) goto loc_8233AEB0;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
loc_8233AEB0:
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
loc_8233AEC4:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x8233aea4
	goto loc_8233AEA4;
}

__attribute__((alias("__imp__sub_8233AECC"))) PPC_WEAK_FUNC(sub_8233AECC);
PPC_FUNC_IMPL(__imp__sub_8233AECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233AED0"))) PPC_WEAK_FUNC(sub_8233AED0);
PPC_FUNC_IMPL(__imp__sub_8233AED0) {
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
	// li r3,480
	ctx.r3.s64 = 480;
	// bl 0x82691500
	ctx.lr = 0x8233AEEC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233af00
	if (ctx.cr0.eq) goto loc_8233AF00;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8233aac8
	ctx.lr = 0x8233AEFC;
	sub_8233AAC8(ctx, base);
	// b 0x8233af04
	goto loc_8233AF04;
loc_8233AF00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233AF04:
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

__attribute__((alias("__imp__sub_8233AF18"))) PPC_WEAK_FUNC(sub_8233AF18);
PPC_FUNC_IMPL(__imp__sub_8233AF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8233AF20;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// li r28,-1
	ctx.r28.s64 = -1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x822401e0
	ctx.lr = 0x8233AF48;
	sub_822401E0(ctx, base);
	// addi r25,r29,28
	ctx.r25.s64 = ctx.r29.s64 + 28;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x822401e0
	ctx.lr = 0x8233AF60;
	sub_822401E0(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r29,60
	ctx.r9.s64 = ctx.r29.s64 + 60;
	// addi r8,r31,60
	ctx.r8.s64 = ctx.r31.s64 + 60;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lwz r10,56(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// stw r10,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r10.u32);
loc_8233AF7C:
	// lbzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stbx r10,r8,r11
	PPC_STORE_U8(ctx.r8.u32 + ctx.r11.u32, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x8233af7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233AF7C;
	// lwz r11,92(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233AF9C;
	sub_8233B110(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233b064
	if (!ctx.cr6.eq) goto loc_8233B064;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82d28078
	ctx.lr = 0x8233AFB8;
	sub_82D28078(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233b064
	if (ctx.cr6.eq) goto loc_8233B064;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r27,1
	ctx.r27.s64 = 1;
	// ori r11,r11,54464
	ctx.r11.u64 = ctx.r11.u64 | 54464;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ori r31,r10,65535
	ctx.r31.u64 = ctx.r10.u64 | 65535;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d280c8
	ctx.lr = 0x8233AFF8;
	sub_82D280C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233b060
	if (!ctx.cr0.eq) goto loc_8233B060;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,4101
	ctx.r5.s64 = 4101;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d280c8
	ctx.lr = 0x8233B018;
	sub_82D280C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233b060
	if (!ctx.cr0.eq) goto loc_8233B060;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,4102
	ctx.r5.s64 = 4102;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d280c8
	ctx.lr = 0x8233B038;
	sub_82D280C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233b060
	if (!ctx.cr0.eq) goto loc_8233B060;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lis r4,-32764
	ctx.r4.s64 = -2147221504;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// ori r4,r4,26238
	ctx.r4.u64 = ctx.r4.u64 | 26238;
	// bl 0x82d280b0
	ctx.lr = 0x8233B058;
	sub_82D280B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233b064
	if (ctx.cr0.eq) goto loc_8233B064;
loc_8233B060:
	// stw r28,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r28.u32);
loc_8233B064:
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x8233b0dc
	if (ctx.cr6.eq) goto loc_8233B0DC;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r31,r30,156
	ctx.r31.s64 = ctx.r30.s64 + 156;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233B08C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8233b0a8
	if (!ctx.cr0.lt) goto loc_8233B0A8;
loc_8233B094:
	// li r11,13
	ctx.r11.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233B0A4;
	sub_8233B110(ctx, base);
	// b 0x8233b0e4
	goto loc_8233B0E4;
loc_8233B0A8:
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d28150
	ctx.lr = 0x8233B0B8;
	sub_82D28150(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233b0cc
	if (!ctx.cr6.eq) goto loc_8233B0CC;
	// bl 0x82d28370
	ctx.lr = 0x8233B0C4;
	sub_82D28370(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// bne cr6,0x8233b094
	if (!ctx.cr6.eq) goto loc_8233B094;
loc_8233B0CC:
	// bl 0x82547ee0
	ctx.lr = 0x8233B0D0;
	sub_82547EE0(ctx, base);
	// stfd f1,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f1.u64);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x8233b0e0
	goto loc_8233B0E0;
loc_8233B0DC:
	// li r11,13
	ctx.r11.s64 = 13;
loc_8233B0E0:
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
loc_8233B0E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822402c8
	ctx.lr = 0x8233B0F4;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822402c8
	ctx.lr = 0x8233B104;
	sub_822402C8(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B10C"))) PPC_WEAK_FUNC(sub_8233B10C);
PPC_FUNC_IMPL(__imp__sub_8233B10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B110"))) PPC_WEAK_FUNC(sub_8233B110);
PPC_FUNC_IMPL(__imp__sub_8233B110) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233b16c
	if (ctx.cr6.eq) goto loc_8233B16C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82d280a0
	ctx.lr = 0x8233B138;
	sub_82D280A0(ctx, base);
loc_8233B138:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d281e0
	ctx.lr = 0x8233B14C;
	sub_82D281E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233b15c
	if (ctx.cr0.eq) goto loc_8233B15C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233b138
	if (!ctx.cr6.eq) goto loc_8233B138;
loc_8233B15C:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82d28090
	ctx.lr = 0x8233B164;
	sub_82D28090(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_8233B16C:
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

__attribute__((alias("__imp__sub_8233B180"))) PPC_WEAK_FUNC(sub_8233B180);
PPC_FUNC_IMPL(__imp__sub_8233B180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82547ee0
	ctx.lr = 0x8233B198;
	sub_82547EE0(ctx, base);
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,8(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8233b218
	if (!ctx.cr6.lt) goto loc_8233B218;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82d28190
	ctx.lr = 0x8233B1E4;
	sub_82D28190(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233b1f4
	if (!ctx.cr6.eq) goto loc_8233B1F4;
loc_8233B1EC:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x8233b21c
	goto loc_8233B21C;
loc_8233B1F4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x8233b220
	if (!ctx.cr6.gt) goto loc_8233B220;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82d283a8
	ctx.lr = 0x8233B208;
	sub_82D283A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233b1ec
	if (ctx.cr0.eq) goto loc_8233B1EC;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8233b21c
	goto loc_8233B21C;
loc_8233B218:
	// li r11,12
	ctx.r11.s64 = 12;
loc_8233B21C:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_8233B220:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8233B234"))) PPC_WEAK_FUNC(sub_8233B234);
PPC_FUNC_IMPL(__imp__sub_8233B234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B238"))) PPC_WEAK_FUNC(sub_8233B238);
PPC_FUNC_IMPL(__imp__sub_8233B238) {
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
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,176
	ctx.r31.s64 = ctx.r3.s64 + 176;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8233b268
	if (ctx.cr6.lt) goto loc_8233B268;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8233b26c
	goto loc_8233B26C;
loc_8233B268:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_8233B26C:
	// addi r5,r30,144
	ctx.r5.s64 = ctx.r30.s64 + 144;
	// addi r6,r30,148
	ctx.r6.s64 = ctx.r30.s64 + 148;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233b830
	ctx.lr = 0x8233B27C;
	sub_8233B830(ctx, base);
	// lwz r11,144(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x8233b2b0
	if (ctx.cr6.gt) goto loc_8233B2B0;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// blt cr6,0x8233b2a0
	if (ctx.cr6.lt) goto loc_8233B2A0;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8233B2A0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r10,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r10.u32);
	// b 0x8233b2d0
	goto loc_8233B2D0;
loc_8233B2B0:
	// bl 0x82547ee0
	ctx.lr = 0x8233B2B4;
	sub_82547EE0(ctx, base);
	// lfd f0,16(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,24(r30)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 24);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8233b2d0
	if (!ctx.cr6.gt) goto loc_8233B2D0;
	// li r11,14
	ctx.r11.s64 = 14;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
loc_8233B2D0:
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

__attribute__((alias("__imp__sub_8233B2E8"))) PPC_WEAK_FUNC(sub_8233B2E8);
PPC_FUNC_IMPL(__imp__sub_8233B2E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8233B2F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r4,16388
	ctx.r4.s64 = 1074003968;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// ori r4,r4,26239
	ctx.r4.u64 = ctx.r4.u64 | 26239;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82d280b0
	ctx.lr = 0x8233B314;
	sub_82D280B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233b538
	if (!ctx.cr0.eq) goto loc_8233B538;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b538
	if (ctx.cr6.eq) goto loc_8233B538;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d281e0
	ctx.lr = 0x8233B33C;
	sub_82D281E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233b458
	if (ctx.cr6.eq) goto loc_8233B458;
	// addi r30,r25,176
	ctx.r30.s64 = ctx.r25.s64 + 176;
loc_8233B348:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8233b35c
	if (ctx.cr6.lt) goto loc_8233B35C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b360
	goto loc_8233B360;
loc_8233B35C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8233B360:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blt cr6,0x8233b378
	if (ctx.cr6.lt) goto loc_8233B378;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b37c
	goto loc_8233B37C;
loc_8233B378:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233B37C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x8233b38c
	if (ctx.cr6.eq) goto loc_8233B38C;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_8233B38C:
	// li r5,1
	ctx.r5.s64 = 1;
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224ffa0
	ctx.lr = 0x8233B39C;
	sub_8224FFA0(ctx, base);
	// lwz r10,192(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 192);
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x8233b43c
	if (ctx.cr6.lt) goto loc_8233B43C;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8233b3bc
	if (ctx.cr6.lt) goto loc_8233B3BC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b3c0
	goto loc_8233B3C0;
loc_8233B3BC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233B3C0:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -4);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8233b43c
	if (!ctx.cr6.eq) goto loc_8233B43C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8233b3e0
	if (ctx.cr6.lt) goto loc_8233B3E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b3e4
	goto loc_8233B3E4;
loc_8233B3E0:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233B3E4:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-3(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -3);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x8233b43c
	if (!ctx.cr6.eq) goto loc_8233B43C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8233b404
	if (ctx.cr6.lt) goto loc_8233B404;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b408
	goto loc_8233B408;
loc_8233B404:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233B408:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-2(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x8233b43c
	if (!ctx.cr6.eq) goto loc_8233B43C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// blt cr6,0x8233b428
	if (ctx.cr6.lt) goto loc_8233B428;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x8233b42c
	goto loc_8233B42C;
loc_8233B428:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233B42C:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x8233b46c
	if (ctx.cr6.eq) goto loc_8233B46C;
loc_8233B43C:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82d281e0
	ctx.lr = 0x8233B450;
	sub_82D281E0(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233b348
	if (!ctx.cr6.eq) goto loc_8233B348;
loc_8233B458:
	// bl 0x82d28370
	ctx.lr = 0x8233B45C;
	sub_82D28370(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8233b564
	if (ctx.cr6.eq) goto loc_8233B564;
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x8233b560
	goto loc_8233B560;
loc_8233B46C:
	// lwz r28,204(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// addi r26,r25,204
	ctx.r26.s64 = ctx.r25.s64 + 204;
	// lwz r31,208(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 208);
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8233b4bc
	if (ctx.cr6.eq) goto loc_8233B4BC;
	// mr r27,r31
	ctx.r27.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8233b4a8
	if (ctx.cr6.eq) goto loc_8233B4A8;
loc_8233B48C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82251f40
	ctx.lr = 0x8233B498;
	sub_82251F40(ctx, base);
	// addi r27,r27,28
	ctx.r27.s64 = ctx.r27.s64 + 28;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// cmplw cr6,r27,r31
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x8233b48c
	if (!ctx.cr6.eq) goto loc_8233B48C;
loc_8233B4A8:
	// addi r5,r26,12
	ctx.r5.s64 = ctx.r26.s64 + 12;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822cf4e8
	ctx.lr = 0x8233B4B8;
	sub_822CF4E8(ctx, base);
	// stw r28,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r28.u32);
loc_8233B4BC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r28,r11,4436
	ctx.r28.s64 = ctx.r11.s64 + 4436;
	// b 0x8233b514
	goto loc_8233B514;
loc_8233B4CC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8233B4DC;
	sub_822402C8(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822401e0
	ctx.lr = 0x8233B4F0;
	sub_822401E0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8233b8e0
	ctx.lr = 0x8233B4FC;
	sub_8233B8E0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8233B50C;
	sub_822402C8(ctx, base);
	// addi r29,r31,2
	ctx.r29.s64 = ctx.r31.s64 + 2;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_8233B514:
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822cef48
	ctx.lr = 0x8233B524;
	sub_822CEF48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233b4cc
	if (!ctx.cr6.eq) goto loc_8233B4CC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8233b560
	goto loc_8233B560;
loc_8233B538:
	// bl 0x82547ee0
	ctx.lr = 0x8233B53C;
	sub_82547EE0(ctx, base);
	// lfd f0,232(r25)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r25.u32 + 232);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,224(r25)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r25.u32 + 224);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8233b564
	if (!ctx.cr6.gt) goto loc_8233B564;
	// stw r29,140(r25)
	PPC_STORE_U32(ctx.r25.u32 + 140, ctx.r29.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8233b110
	ctx.lr = 0x8233B55C;
	sub_8233B110(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
loc_8233B560:
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
loc_8233B564:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B56C"))) PPC_WEAK_FUNC(sub_8233B56C);
PPC_FUNC_IMPL(__imp__sub_8233B56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B570"))) PPC_WEAK_FUNC(sub_8233B570);
PPC_FUNC_IMPL(__imp__sub_8233B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8233B578;
	__savegprlr_25(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r3,204
	ctx.r31.s64 = ctx.r3.s64 + 204;
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// bl 0x822cef48
	ctx.lr = 0x8233B59C;
	sub_822CEF48(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r29,204(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8233B5B4;
	sub_822402C8(ctx, base);
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822401e0
	ctx.lr = 0x8233B5C8;
	sub_822401E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r7,5
	ctx.r7.s64 = 5;
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r6,r11,4408
	ctx.r6.s64 = ctx.r11.s64 + 4408;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82656348
	ctx.lr = 0x8233B5E4;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233b69c
	if (!ctx.cr0.eq) goto loc_8233B69C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r27,28
	ctx.r27.s64 = 28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw. r11,r11,r27
	ctx.r11.s32 = ctx.r11.s32 / ctx.r27.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233b69c
	if (ctx.cr0.eq) goto loc_8233B69C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r26,r11,4416
	ctx.r26.s64 = ctx.r11.s64 + 4416;
loc_8233B614:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r28,r29,r11
	ctx.r28.u64 = ctx.r29.u64 + ctx.r11.u64;
	// bl 0x822402c8
	ctx.lr = 0x8233B62C;
	sub_822402C8(ctx, base);
	// li r6,16
	ctx.r6.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822401e0
	ctx.lr = 0x8233B640;
	sub_822401E0(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8233b654
	if (!ctx.cr6.lt) goto loc_8233B654;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_8233B654:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82fa4460
	ctx.lr = 0x8233B65C;
	sub_82FA4460(ctx, base);
	// cntlzw r11,r3
	ctx.r11.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x822402c8
	ctx.lr = 0x8233B674;
	sub_822402C8(ctx, base);
	// cmplwi r28,0
	ctx.cr0.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne 0x8233b6bc
	if (!ctx.cr0.eq) goto loc_8233B6BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r11,r27
	ctx.r11.s32 = ctx.r11.s32 / ctx.r27.s32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8233b614
	if (ctx.cr6.lt) goto loc_8233B614;
loc_8233B69C:
	// li r11,16
	ctx.r11.s64 = 16;
loc_8233B6A0:
	// stw r11,132(r25)
	PPC_STORE_U32(ctx.r25.u32 + 132, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822402c8
	ctx.lr = 0x8233B6B4;
	sub_822402C8(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_8233B6BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x822402c8
	ctx.lr = 0x8233B6D8;
	sub_822402C8(ctx, base);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822401e0
	ctx.lr = 0x8233B6EC;
	sub_822401E0(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8233b700
	if (!ctx.cr6.lt) goto loc_8233B700;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_8233B700:
	// bl 0x82fa3918
	ctx.lr = 0x8233B704;
	sub_82FA3918(ctx, base);
	// stw r3,1268(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1268, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x8233B718;
	sub_822402C8(ctx, base);
	// lwz r11,1268(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 1268);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1272(r25)
	PPC_STORE_U32(ctx.r25.u32 + 1272, ctx.r11.u32);
	// ble cr6,0x8233b730
	if (!ctx.cr6.gt) goto loc_8233B730;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8233b6a0
	goto loc_8233B6A0;
loc_8233B730:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8233b6a0
	goto loc_8233B6A0;
}

__attribute__((alias("__imp__sub_8233B738"))) PPC_WEAK_FUNC(sub_8233B738);
PPC_FUNC_IMPL(__imp__sub_8233B738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233B740;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r4,16388
	ctx.r4.s64 = 1074003968;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,26239
	ctx.r4.u64 = ctx.r4.u64 | 26239;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// bl 0x82d280b0
	ctx.lr = 0x8233B764;
	sub_82D280B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233b7fc
	if (!ctx.cr0.eq) goto loc_8233B7FC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233b7fc
	if (ctx.cr6.eq) goto loc_8233B7FC;
	// lwz r5,1272(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// cmpwi cr6,r5,1024
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1024, ctx.xer);
	// blt cr6,0x8233b788
	if (ctx.cr6.lt) goto loc_8233B788;
	// li r5,1024
	ctx.r5.s64 = 1024;
loc_8233B788:
	// addi r30,r31,240
	ctx.r30.s64 = ctx.r31.s64 + 240;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d281e0
	ctx.lr = 0x8233B79C;
	sub_82D281E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x8233b7e8
	if (ctx.cr6.eq) goto loc_8233B7E8;
	// lwz r10,1272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// lwz r11,1304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1304);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r10,1272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1272, ctx.r10.u32);
	// beq cr6,0x8233b7d4
	if (ctx.cr6.eq) goto loc_8233B7D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,1308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1308);
	// lwz r5,1268(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1268);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233B7D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233B7D4:
	// lwz r11,1272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1272);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233b7fc
	if (!ctx.cr6.eq) goto loc_8233B7FC;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x8233b7f8
	goto loc_8233B7F8;
loc_8233B7E8:
	// bl 0x82d28370
	ctx.lr = 0x8233B7EC;
	sub_82D28370(ctx, base);
	// cmpwi cr6,r3,10035
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 10035, ctx.xer);
	// beq cr6,0x8233b7fc
	if (ctx.cr6.eq) goto loc_8233B7FC;
	// li r11,16
	ctx.r11.s64 = 16;
loc_8233B7F8:
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_8233B7FC:
	// bl 0x82547ee0
	ctx.lr = 0x8233B800;
	sub_82547EE0(ctx, base);
	// lfd f0,232(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 232);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,224(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 224);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8233b828
	if (!ctx.cr6.gt) goto loc_8233B828;
	// stw r29,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233b110
	ctx.lr = 0x8233B820;
	sub_8233B110(ctx, base);
	// li r11,17
	ctx.r11.s64 = 17;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
loc_8233B828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B830"))) PPC_WEAK_FUNC(sub_8233B830);
PPC_FUNC_IMPL(__imp__sub_8233B830) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233B838;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8233b8d4
	if (!ctx.cr6.gt) goto loc_8233B8D4;
	// lwz r10,1276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1276);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8233b874
	if (ctx.cr6.eq) goto loc_8233B874;
	// lwz r5,1280(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1280);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8233b874
	if (!ctx.cr6.gt) goto loc_8233B874;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x8233b878
	if (!ctx.cr6.lt) goto loc_8233B878;
loc_8233B874:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_8233B878:
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x8233b8d4
	if (!ctx.cr6.gt) goto loc_8233B8D4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bl 0x82d28298
	ctx.lr = 0x8233B894;
	sub_82D28298(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x8233b8bc
	if (!ctx.cr6.eq) goto loc_8233B8BC;
	// bl 0x82d28370
	ctx.lr = 0x8233B8A0;
	sub_82D28370(ctx, base);
	// cmplwi cr6,r3,10035
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10035, ctx.xer);
	// beq cr6,0x8233b8d4
	if (ctx.cr6.eq) goto loc_8233B8D4;
	// cmplwi cr6,r3,10055
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 10055, ctx.xer);
	// beq cr6,0x8233b8d4
	if (ctx.cr6.eq) goto loc_8233B8D4;
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// b 0x8233b8d4
	goto loc_8233B8D4;
loc_8233B8BC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_8233B8D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233B8DC"))) PPC_WEAK_FUNC(sub_8233B8DC);
PPC_FUNC_IMPL(__imp__sub_8233B8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233B8E0"))) PPC_WEAK_FUNC(sub_8233B8E0);
PPC_FUNC_IMPL(__imp__sub_8233B8E0) {
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
	// bge cr6,0x8233b918
	if (!ctx.cr6.lt) goto loc_8233B918;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x8233b91c
	if (!ctx.cr6.gt) goto loc_8233B91C;
loc_8233B918:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8233B91C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8233b968
	if (ctx.cr0.eq) goto loc_8233B968;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,28
	ctx.r9.s64 = 28;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// divw r30,r10,r9
	ctx.r30.s32 = ctx.r10.s32 / ctx.r9.s32;
	// bne cr6,0x8233b94c
	if (!ctx.cr6.eq) goto loc_8233B94C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e35e8
	ctx.lr = 0x8233B94C;
	sub_822E35E8(ctx, base);
loc_8233B94C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233b994
	if (ctx.cr6.eq) goto loc_8233B994;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 * 28;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8233b990
	goto loc_8233B990;
loc_8233B968:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233b980
	if (!ctx.cr6.eq) goto loc_8233B980;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e35e8
	ctx.lr = 0x8233B980;
	sub_822E35E8(ctx, base);
loc_8233B980:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233b994
	if (ctx.cr6.eq) goto loc_8233B994;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8233B990:
	// bl 0x82251fc0
	ctx.lr = 0x8233B994;
	sub_82251FC0(ctx, base);
loc_8233B994:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
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

__attribute__((alias("__imp__sub_8233B9B8"))) PPC_WEAK_FUNC(sub_8233B9B8);
PPC_FUNC_IMPL(__imp__sub_8233B9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8233B9C0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r5,8
	ctx.r5.s64 = 524288;
	// lis r4,8
	ctx.r4.s64 = 524288;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// lis r30,8
	ctx.r30.s64 = 524288;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// lis r7,8
	ctx.r7.s64 = 524288;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// lis r29,8
	ctx.r29.s64 = 524288;
	// ori r27,r5,132
	ctx.r27.u64 = ctx.r5.u64 | 132;
	// ori r25,r3,168
	ctx.r25.u64 = ctx.r3.u64 | 168;
	// ori r26,r4,136
	ctx.r26.u64 = ctx.r4.u64 | 136;
	// ori r11,r11,104
	ctx.r11.u64 = ctx.r11.u64 | 104;
	// ori r10,r10,108
	ctx.r10.u64 = ctx.r10.u64 | 108;
	// ori r9,r9,112
	ctx.r9.u64 = ctx.r9.u64 | 112;
	// ori r8,r8,116
	ctx.r8.u64 = ctx.r8.u64 | 116;
	// ori r7,r7,124
	ctx.r7.u64 = ctx.r7.u64 | 124;
	// ori r6,r6,128
	ctx.r6.u64 = ctx.r6.u64 | 128;
	// ori r24,r30,188
	ctx.r24.u64 = ctx.r30.u64 | 188;
	// lis r28,-32229
	ctx.r28.s64 = -2112159744;
	// ori r29,r29,192
	ctx.r29.u64 = ctx.r29.u64 | 192;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r5,r28,4496
	ctx.r5.s64 = ctx.r28.s64 + 4496;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r30,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r30.u32);
	// stwx r30,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r30.u32);
	// stwx r30,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.r30.u32);
	// stwx r30,r31,r27
	PPC_STORE_U32(ctx.r31.u32 + ctx.r27.u32, ctx.r30.u32);
	// stwx r30,r31,r26
	PPC_STORE_U32(ctx.r31.u32 + ctx.r26.u32, ctx.r30.u32);
	// stwx r30,r31,r25
	PPC_STORE_U32(ctx.r31.u32 + ctx.r25.u32, ctx.r30.u32);
	// stwx r30,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r30.u32);
	// stdx r30,r31,r29
	PPC_STORE_U64(ctx.r31.u32 + ctx.r29.u32, ctx.r30.u64);
	// bl 0x822402c8
	ctx.lr = 0x8233BA70;
	sub_822402C8(ctx, base);
	// lis r5,8
	ctx.r5.s64 = 524288;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// ori r5,r5,90
	ctx.r5.u64 = ctx.r5.u64 | 90;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x8233BA84;
	sub_82A75988(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r11,r11,172
	ctx.r11.u64 = ctx.r11.u64 | 172;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233BA9C"))) PPC_WEAK_FUNC(sub_8233BA9C);
PPC_FUNC_IMPL(__imp__sub_8233BA9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BAA0"))) PPC_WEAK_FUNC(sub_8233BAA0);
PPC_FUNC_IMPL(__imp__sub_8233BAA0) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,4496
	ctx.r11.s64 = ctx.r11.s64 + 4496;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addis r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,200
	ctx.r3.s64 = ctx.r3.s64 + 200;
	// bl 0x822402c8
	ctx.lr = 0x8233BADC;
	sub_822402C8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233baec
	if (ctx.cr0.eq) goto loc_8233BAEC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8233BAEC;
	sub_82691540(ctx, base);
loc_8233BAEC:
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

__attribute__((alias("__imp__sub_8233BB08"))) PPC_WEAK_FUNC(sub_8233BB08);
PPC_FUNC_IMPL(__imp__sub_8233BB08) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r3,21756(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21756);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233bb4c
	if (!ctx.cr6.eq) goto loc_8233BB4C;
	// lis r3,8
	ctx.r3.s64 = 524288;
	// ori r3,r3,232
	ctx.r3.u64 = ctx.r3.u64 | 232;
	// bl 0x82691500
	ctx.lr = 0x8233BB34;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233bb44
	if (ctx.cr0.eq) goto loc_8233BB44;
	// bl 0x8233b9b8
	ctx.lr = 0x8233BB40;
	sub_8233B9B8(ctx, base);
	// b 0x8233bb48
	goto loc_8233BB48;
loc_8233BB44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233BB48:
	// stw r3,21756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21756, ctx.r3.u32);
loc_8233BB4C:
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

__attribute__((alias("__imp__sub_8233BB60"))) PPC_WEAK_FUNC(sub_8233BB60);
PPC_FUNC_IMPL(__imp__sub_8233BB60) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r30,r4,1736
	ctx.r30.s64 = ctx.r4.s64 + 1736;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,4440
	ctx.r4.s64 = ctx.r11.s64 + 4440;
	// bl 0x82599df8
	ctx.lr = 0x8233BB98;
	sub_82599DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4464
	ctx.r4.s64 = ctx.r10.s64 + 4464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233BBB4;
	sub_82599D70(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8233bbcc
	if (ctx.cr6.lt) goto loc_8233BBCC;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x8233bbd0
	if (!ctx.cr6.gt) goto loc_8233BBD0;
loc_8233BBCC:
	// lis r11,8
	ctx.r11.s64 = 524288;
loc_8233BBD0:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addis r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 524288;
	// ori r10,r10,116
	ctx.r10.u64 = ctx.r10.u64 | 116;
	// addi r3,r3,140
	ctx.r3.s64 = ctx.r3.s64 + 140;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x831791c4
	ctx.lr = 0x8233BBE8;
	__imp__RtlInitializeCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8233BC00"))) PPC_WEAK_FUNC(sub_8233BC00);
PPC_FUNC_IMPL(__imp__sub_8233BC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x8233BC08;
	__savegprlr_15(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mr r20,r9
	ctx.r20.u64 = ctx.r9.u64;
	// mr r15,r10
	ctx.r15.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233bf6c
	if (ctx.cr6.eq) goto loc_8233BF6C;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x8233bc40
	if (!ctx.cr6.eq) goto loc_8233BC40;
	// li r21,6
	ctx.r21.s64 = 6;
loc_8233BC40:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// blt cr6,0x8233bc70
	if (ctx.cr6.lt) goto loc_8233BC70;
	// beq cr6,0x8233bc68
	if (ctx.cr6.eq) goto loc_8233BC68;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// blt cr6,0x8233bc60
	if (ctx.cr6.lt) goto loc_8233BC60;
	// li r23,3
	ctx.r23.s64 = 3;
	// b 0x8233bca0
	goto loc_8233BCA0;
loc_8233BC60:
	// li r23,2
	ctx.r23.s64 = 2;
	// b 0x8233bca0
	goto loc_8233BCA0;
loc_8233BC68:
	// mr r23,r28
	ctx.r23.u64 = ctx.r28.u64;
	// b 0x8233bca0
	goto loc_8233BCA0;
loc_8233BC70:
	// bl 0x8226c3f0
	ctx.lr = 0x8233BC74;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8233bc9c
	if (ctx.cr6.eq) goto loc_8233BC9C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x8233bc9c
	if (ctx.cr6.eq) goto loc_8233BC9C;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// li r10,4
	ctx.r10.s64 = 4;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r23,r11,r10
	ctx.r23.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x8233bca0
	goto loc_8233BCA0;
loc_8233BC9C:
	// li r23,5
	ctx.r23.s64 = 5;
loc_8233BCA0:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// bl 0x829204e8
	ctx.lr = 0x8233BCAC;
	sub_829204E8(ctx, base);
	// addis r18,r31,8
	ctx.r18.s64 = ctx.r31.s64 + 524288;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r18,r18,104
	ctx.r18.s64 = ctx.r18.s64 + 104;
	// subfc r10,r11,r3
	ctx.xer.ca = ctx.r3.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r3.s64 - ctx.r11.s64;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r22,r11,r3
	ctx.r22.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x8233bce0
	if (ctx.cr6.eq) goto loc_8233BCE0;
loc_8233BCD8:
	// li r3,10
	ctx.r3.s64 = 10;
	// b 0x8233bf70
	goto loc_8233BF70;
loc_8233BCE0:
	// addis r17,r31,8
	ctx.r17.s64 = ctx.r31.s64 + 524288;
	// addi r17,r17,140
	ctx.r17.s64 = ctx.r17.s64 + 140;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233BCF0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233bd10
	if (ctx.cr6.eq) goto loc_8233BD10;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x8233bcd8
	if (ctx.cr6.eq) goto loc_8233BCD8;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233BD0C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8233bcd8
	goto loc_8233BCD8;
loc_8233BD10:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stw r28,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r28.u32);
	// beq cr6,0x8233bd24
	if (ctx.cr6.eq) goto loc_8233BD24;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233BD24;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233BD24:
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82d27e28
	ctx.lr = 0x8233BD30;
	sub_82D27E28(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a758f8
	ctx.lr = 0x8233BD38;
	sub_82A758F8(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r19,0
	ctx.r19.s64 = 0;
	// ori r11,r11,136
	ctx.r11.u64 = ctx.r11.u64 | 136;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stwx r19,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r19.u32);
	// blt cr6,0x8233bd78
	if (ctx.cr6.lt) goto loc_8233BD78;
	// cmpwi cr6,r22,4
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 4, ctx.xer);
	// bge cr6,0x8233bd78
	if (!ctx.cr6.lt) goto loc_8233BD78;
	// bl 0x8226d8e8
	ctx.lr = 0x8233BD5C;
	sub_8226D8E8(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// bl 0x8226ec90
	ctx.lr = 0x8233BD64;
	sub_8226EC90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233bd78
	if (ctx.cr0.eq) goto loc_8233BD78;
	// bl 0x82920528
	ctx.lr = 0x8233BD70;
	sub_82920528(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x8233bd7c
	goto loc_8233BD7C;
loc_8233BD78:
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8233BD7C:
	// addis r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r27,r27,116
	ctx.r27.s64 = ctx.r27.s64 + 116;
	// ori r10,r10,192
	ctx.r10.u64 = ctx.r10.u64 | 192;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// addis r26,r31,8
	ctx.r26.s64 = ctx.r31.s64 + 524288;
	// ori r9,r9,108
	ctx.r9.u64 = ctx.r9.u64 | 108;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r26,r26,112
	ctx.r26.s64 = ctx.r26.s64 + 112;
	// stdx r11,r31,r10
	PPC_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u64);
	// li r8,3
	ctx.r8.s64 = 3;
	// divwu r7,r24,r30
	ctx.r7.u32 = ctx.r24.u32 / ctx.r30.u32;
	// divwu r6,r24,r30
	ctx.r6.u32 = ctx.r24.u32 / ctx.r30.u32;
	// stb r8,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r8.u8);
	// mullw r11,r7,r30
	ctx.r11.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r30.s32);
	// stwx r24,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r24.u32);
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// subf. r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r6,16
	ctx.r11.u64 = ctx.r6.u32 & 0xFFFF;
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x8233bdd8
	if (ctx.cr0.eq) goto loc_8233BDD8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8233BDD8:
	// sth r11,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r11.u16);
	// cmplw cr6,r30,r24
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r24.u32, ctx.xer);
	// stb r28,15(r31)
	PPC_STORE_U8(ctx.r31.u32 + 15, ctx.r28.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sth r19,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r19.u16);
	// blt cr6,0x8233bdf4
	if (ctx.cr6.lt) goto loc_8233BDF4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_8233BDF4:
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82fa77c0
	ctx.lr = 0x8233BE08;
	sub_82FA77C0(ctx, base);
	// addis r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 524288;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r4,r4,172
	ctx.r4.s64 = ctx.r4.s64 + 172;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82fa77c0
	ctx.lr = 0x8233BE1C;
	sub_82FA77C0(ctx, base);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8233cc28
	ctx.lr = 0x8233BE24;
	sub_8233CC28(ctx, base);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r28,r29,28
	ctx.r28.s64 = ctx.r29.s64 + 28;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lhz r9,1680(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 1680);
	// sth r9,13(r31)
	PPC_STORE_U16(ctx.r31.u32 + 13, ctx.r9.u16);
	// stw r24,62(r31)
	PPC_STORE_U32(ctx.r31.u32 + 62, ctx.r24.u32);
	// stdx r11,r31,r10
	PPC_STORE_U64(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u64);
	// bl 0x831791a4
	ctx.lr = 0x8233BE50;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,1720(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1720);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r9,1724(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1724);
	// lwz r8,1728(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1728);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r7,1732(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 1732);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// beq cr6,0x8233be84
	if (ctx.cr6.eq) goto loc_8233BE84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233BE84;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233BE84:
	// addi r3,r31,74
	ctx.r3.s64 = ctx.r31.s64 + 74;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// bl 0x82fa77c0
	ctx.lr = 0x8233BE94;
	sub_82FA77C0(ctx, base);
	// rlwimi r21,r15,8,16,23
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r15.u32, 8) & 0xFF00) | (ctx.r21.u64 & 0xFFFFFFFFFFFF00FF);
	// lhz r9,366(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 366);
	// clrlwi r10,r21,16
	ctx.r10.u64 = ctx.r21.u32 & 0xFFFF;
	// lhz r11,358(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 358);
	// rlwimi r23,r10,8,0,23
	ctx.r23.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFFFFFF00) | (ctx.r23.u64 & 0xFFFFFFFF000000FF);
	// rlwimi r11,r9,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r20,r23,8,0,23
	ctx.r20.u64 = (__builtin_rotateleft32(ctx.r23.u32, 8) & 0xFFFFFF00) | (ctx.r20.u64 & 0xFFFFFFFF000000FF);
	// stw r11,90(r31)
	PPC_STORE_U32(ctx.r31.u32 + 90, ctx.r11.u32);
	// stw r20,94(r31)
	PPC_STORE_U32(ctx.r31.u32 + 94, ctx.r20.u32);
	// bl 0x82a773b8
	ctx.lr = 0x8233BEBC;
	sub_82A773B8(ctx, base);
	// sth r3,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r3.u16);
	// bl 0x82a771b8
	ctx.lr = 0x8233BEC4;
	sub_82A771B8(ctx, base);
	// rlwinm r11,r22,4,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 4) & 0xF0;
	// sth r3,100(r31)
	PPC_STORE_U16(ctx.r31.u32 + 100, ctx.r3.u16);
	// addi r3,r31,102
	ctx.r3.s64 = ctx.r31.s64 + 102;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stb r16,61(r31)
	PPC_STORE_U8(ctx.r31.u32 + 61, ctx.r16.u8);
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// bl 0x82a75198
	ctx.lr = 0x8233BEE8;
	sub_82A75198(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,90
	ctx.r30.s64 = ctx.r11.s64 + 90;
	// bl 0x8233c868
	ctx.lr = 0x8233BF00;
	sub_8233C868(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x8233cb40
	ctx.lr = 0x8233BF10;
	sub_8233CB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233bf20
	if (ctx.cr0.eq) goto loc_8233BF20;
	// li r3,11
	ctx.r3.s64 = 11;
	// b 0x8233bf70
	goto loc_8233BF70;
loc_8233BF20:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233BF28;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stw r19,0(r18)
	PPC_STORE_U32(ctx.r18.u32 + 0, ctx.r19.u32);
	// beq cr6,0x8233bf3c
	if (ctx.cr6.eq) goto loc_8233BF3C;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233BF3C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233BF3C:
	// bl 0x8233c868
	ctx.lr = 0x8233BF40;
	sub_8233C868(ctx, base);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233bf54
	if (!ctx.cr6.eq) goto loc_8233BF54;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8233bf70
	goto loc_8233BF70;
loc_8233BF54:
	// bl 0x8233c868
	ctx.lr = 0x8233BF58;
	sub_8233C868(ctx, base);
	// lwz r11,1700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1700);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233bcd8
	if (ctx.cr6.eq) goto loc_8233BCD8;
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x8233bf70
	goto loc_8233BF70;
loc_8233BF6C:
	// li r3,9
	ctx.r3.s64 = 9;
loc_8233BF70:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233BF78"))) PPC_WEAK_FUNC(sub_8233BF78);
PPC_FUNC_IMPL(__imp__sub_8233BF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233BF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,104
	ctx.r11.u64 = ctx.r11.u64 | 104;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233bfe4
	if (ctx.cr6.eq) goto loc_8233BFE4;
	// bl 0x8233c868
	ctx.lr = 0x8233BFA0;
	sub_8233C868(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233BFA8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r29.u32);
	// bl 0x831791b4
	ctx.lr = 0x8233BFB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addis r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 524288;
	// addi r31,r31,140
	ctx.r31.s64 = ctx.r31.s64 + 140;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233BFC8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// ori r11,r11,188
	ctx.r11.u64 = ctx.r11.u64 | 188;
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// beq cr6,0x8233bfe4
	if (ctx.cr6.eq) goto loc_8233BFE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233BFE4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233BFE4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233BFEC"))) PPC_WEAK_FUNC(sub_8233BFEC);
PPC_FUNC_IMPL(__imp__sub_8233BFEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233BFF0"))) PPC_WEAK_FUNC(sub_8233BFF0);
PPC_FUNC_IMPL(__imp__sub_8233BFF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233BFF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,8
	ctx.r29.s64 = ctx.r3.s64 + 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r29,128
	ctx.r29.s64 = ctx.r29.s64 + 128;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c038
	if (ctx.cr6.eq) goto loc_8233C038;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lbz r3,15(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 15);
	// ori r11,r10,132
	ctx.r11.u64 = ctx.r10.u64 | 132;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x8233C034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_8233C038:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// ori r11,r11,112
	ctx.r11.u64 = ctx.r11.u64 | 112;
	// ori r10,r10,108
	ctx.r10.u64 = ctx.r10.u64 | 108;
	// ori r9,r9,104
	ctx.r9.u64 = ctx.r9.u64 | 104;
	// addis r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 524288;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// addi r29,r29,140
	ctx.r29.s64 = ctx.r29.s64 + 140;
	// stwx r30,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r30.u32);
	// stwx r30,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233C06C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,188
	ctx.r11.u64 = ctx.r11.u64 | 188;
	// stwx r30,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r30.u32);
	// bl 0x8233c868
	ctx.lr = 0x8233C07C;
	sub_8233C868(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233C084;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r30,1420(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1420, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233C090;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233c0a0
	if (ctx.cr6.eq) goto loc_8233C0A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233C0A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233C0A0:
	// lis r5,8
	ctx.r5.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,90
	ctx.r5.u64 = ctx.r5.u64 | 90;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82a75988
	ctx.lr = 0x8233C0B4;
	sub_82A75988(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C0BC"))) PPC_WEAK_FUNC(sub_8233C0BC);
PPC_FUNC_IMPL(__imp__sub_8233C0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C0C0"))) PPC_WEAK_FUNC(sub_8233C0C0);
PPC_FUNC_IMPL(__imp__sub_8233C0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233C0C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 11, ctx.xer);
	// beq cr6,0x8233c0e4
	if (ctx.cr6.eq) goto loc_8233C0E4;
	// cmpwi cr6,r5,5
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 5, ctx.xer);
	// bne cr6,0x8233c100
	if (!ctx.cr6.eq) goto loc_8233C100;
loc_8233C0E4:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,188
	ctx.r11.u64 = ctx.r11.u64 | 188;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c100
	if (ctx.cr6.eq) goto loc_8233C100;
	// li r4,12
	ctx.r4.s64 = 12;
	// b 0x8233c2a0
	goto loc_8233C2A0;
loc_8233C100:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8233cc28
	ctx.lr = 0x8233C108;
	sub_8233CC28(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bne cr6,0x8233c1f0
	if (!ctx.cr6.eq) goto loc_8233C1F0;
	// lhz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// addis r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 524288;
	// lhz r10,38(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 38);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r29,r29,116
	ctx.r29.s64 = ctx.r29.s64 + 116;
	// ori r9,r9,136
	ctx.r9.u64 = ctx.r9.u64 | 136;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r8,0
	ctx.r8.s64 = 0;
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stwx r8,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r8.u32);
	// bge cr6,0x8233c1e8
	if (!ctx.cr6.lt) goto loc_8233C1E8;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8233c180
	if (!ctx.cr6.eq) goto loc_8233C180;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,108
	ctx.r11.u64 = ctx.r11.u64 | 108;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// divwu r10,r11,r30
	ctx.r10.u32 = ctx.r11.u32 / ctx.r30.u32;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8233c178
	if (!ctx.cr0.eq) goto loc_8233C178;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8233C178:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x8233c184
	goto loc_8233C184;
loc_8233C180:
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
loc_8233C184:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lhz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// addi r3,r31,102
	ctx.r3.s64 = ctx.r31.s64 + 102;
	// lwz r5,32(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r11,r11,112
	ctx.r11.u64 = ctx.r11.u64 | 112;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233C1A8;
	sub_82A75198(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8233c218
	goto loc_8233C218;
loc_8233C1BC:
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x8233c2a0
	goto loc_8233C2A0;
loc_8233C1C4:
	// bl 0x8233c868
	ctx.lr = 0x8233C1C8;
	sub_8233C868(ctx, base);
	// lwz r11,1700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1700);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8233c1e0
	if (ctx.cr6.eq) goto loc_8233C1E0;
loc_8233C1D8:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x8233c2a4
	goto loc_8233C2A4;
loc_8233C1E0:
	// li r4,10
	ctx.r4.s64 = 10;
	// b 0x8233c2a4
	goto loc_8233C2A4;
loc_8233C1E8:
	// li r4,11
	ctx.r4.s64 = 11;
	// b 0x8233c2a0
	goto loc_8233C2A0;
loc_8233C1F0:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x8233c278
	if (!ctx.cr6.eq) goto loc_8233C278;
	// addis r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 524288;
	// addi r10,r10,136
	ctx.r10.s64 = ctx.r10.s64 + 136;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x8233c24c
	if (!ctx.cr6.lt) goto loc_8233C24C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
loc_8233C218:
	// addi r30,r11,90
	ctx.r30.s64 = ctx.r11.s64 + 90;
	// bl 0x8233c868
	ctx.lr = 0x8233C220;
	sub_8233C868(ctx, base);
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8233cb40
	ctx.lr = 0x8233C230;
	sub_8233CB40(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8233c2a8
	if (!ctx.cr0.eq) goto loc_8233C2A8;
	// bl 0x8233c868
	ctx.lr = 0x8233C23C;
	sub_8233C868(ctx, base);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c1bc
	if (ctx.cr6.eq) goto loc_8233C1BC;
	// b 0x8233c1c4
	goto loc_8233C1C4;
loc_8233C24C:
	// bl 0x8233c868
	ctx.lr = 0x8233C250;
	sub_8233C868(ctx, base);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c1bc
	if (ctx.cr6.eq) goto loc_8233C1BC;
	// bl 0x8233c868
	ctx.lr = 0x8233C260;
	sub_8233C868(ctx, base);
	// lwz r11,1700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1700);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8233c1d8
	if (!ctx.cr6.eq) goto loc_8233C1D8;
	// li r4,5
	ctx.r4.s64 = 5;
	// b 0x8233c2a4
	goto loc_8233C2A4;
loc_8233C278:
	// bl 0x8233c868
	ctx.lr = 0x8233C27C;
	sub_8233C868(ctx, base);
	// lwz r11,1416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c1bc
	if (ctx.cr6.eq) goto loc_8233C1BC;
	// bl 0x8233c868
	ctx.lr = 0x8233C28C;
	sub_8233C868(ctx, base);
	// lwz r11,1700(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1700);
	// li r4,2
	ctx.r4.s64 = 2;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8233c2a0
	if (!ctx.cr6.eq) goto loc_8233C2A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_8233C2A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8233C2A4:
	// bl 0x8233bff0
	ctx.lr = 0x8233C2A8;
	sub_8233BFF0(ctx, base);
loc_8233C2A8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C2B0"))) PPC_WEAK_FUNC(sub_8233C2B0);
PPC_FUNC_IMPL(__imp__sub_8233C2B0) {
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
	// bl 0x8233c300
	ctx.lr = 0x8233C2D0;
	sub_8233C300(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233c2e0
	if (ctx.cr0.eq) goto loc_8233C2E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8233C2E0;
	sub_82691540(ctx, base);
loc_8233C2E0:
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

__attribute__((alias("__imp__sub_8233C2FC"))) PPC_WEAK_FUNC(sub_8233C2FC);
PPC_FUNC_IMPL(__imp__sub_8233C2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C300"))) PPC_WEAK_FUNC(sub_8233C300);
PPC_FUNC_IMPL(__imp__sub_8233C300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233C308;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,4592
	ctx.r11.s64 = ctx.r11.s64 + 4592;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8233c354
	if (ctx.cr6.eq) goto loc_8233C354;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233c340
	if (ctx.cr6.eq) goto loc_8233C340;
	// bl 0x826915c0
	ctx.lr = 0x8233C33C;
	sub_826915C0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8233C340:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691540
	ctx.lr = 0x8233C350;
	sub_82691540(ctx, base);
	// stw r30,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r30.u32);
loc_8233C354:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C35C"))) PPC_WEAK_FUNC(sub_8233C35C);
PPC_FUNC_IMPL(__imp__sub_8233C35C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C360"))) PPC_WEAK_FUNC(sub_8233C360);
PPC_FUNC_IMPL(__imp__sub_8233C360) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r3,21760(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21760);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c3c4
	if (!ctx.cr6.eq) goto loc_8233C3C4;
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82691500
	ctx.lr = 0x8233C388;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233c3bc
	if (ctx.cr0.eq) goto loc_8233C3BC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,4592
	ctx.r10.s64 = ctx.r10.s64 + 4592;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stb r11,24(r3)
	PPC_STORE_U8(ctx.r3.u32 + 24, ctx.r11.u8);
	// stb r11,25(r3)
	PPC_STORE_U8(ctx.r3.u32 + 25, ctx.r11.u8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// b 0x8233c3c0
	goto loc_8233C3C0;
loc_8233C3BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C3C0:
	// stw r3,21760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21760, ctx.r3.u32);
loc_8233C3C4:
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

__attribute__((alias("__imp__sub_8233C3D8"))) PPC_WEAK_FUNC(sub_8233C3D8);
PPC_FUNC_IMPL(__imp__sub_8233C3D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233C3E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// addi r31,r4,1736
	ctx.r31.s64 = ctx.r4.s64 + 1736;
	// stw r28,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r28.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4504
	ctx.r4.s64 = ctx.r11.s64 + 4504;
	// bl 0x82599df8
	ctx.lr = 0x8233C408;
	sub_82599DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,4524
	ctx.r4.s64 = ctx.r10.s64 + 4524;
	// bl 0x82599df8
	ctx.lr = 0x8233C420;
	sub_82599DF8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r10,4564
	ctx.r4.s64 = ctx.r10.s64 + 4564;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233C43C;
	sub_82599D70(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// blt cr6,0x8233c454
	if (ctx.cr6.lt) goto loc_8233C454;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x8233c458
	if (!ctx.cr6.gt) goto loc_8233C458;
loc_8233C454:
	// lis r31,8
	ctx.r31.s64 = 524288;
loc_8233C458:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x8233C460;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8233c484
	if (ctx.cr0.eq) goto loc_8233C484;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691580
	ctx.lr = 0x8233C470;
	sub_82691580(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r28,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r28.u32);
	// b 0x8233c488
	goto loc_8233C488;
loc_8233C484:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_8233C488:
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C494"))) PPC_WEAK_FUNC(sub_8233C494);
PPC_FUNC_IMPL(__imp__sub_8233C494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C498"))) PPC_WEAK_FUNC(sub_8233C498);
PPC_FUNC_IMPL(__imp__sub_8233C498) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c4c4
	if (ctx.cr6.eq) goto loc_8233C4C4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8233c500
	goto loc_8233C500;
loc_8233C4C4:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// sth r4,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r4.u16);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8233cc28
	ctx.lr = 0x8233C4E8;
	sub_8233CC28(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233c5b0
	ctx.lr = 0x8233C4FC;
	sub_8233C5B0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C500:
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

__attribute__((alias("__imp__sub_8233C514"))) PPC_WEAK_FUNC(sub_8233C514);
PPC_FUNC_IMPL(__imp__sub_8233C514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C518"))) PPC_WEAK_FUNC(sub_8233C518);
PPC_FUNC_IMPL(__imp__sub_8233C518) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233c544
	if (!ctx.cr6.eq) goto loc_8233C544;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8233c59c
	goto loc_8233C59C;
loc_8233C544:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bne cr6,0x8233c574
	if (!ctx.cr6.eq) goto loc_8233C574;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233c584
	if (!ctx.cr6.eq) goto loc_8233C584;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c584
	if (ctx.cr6.eq) goto loc_8233C584;
loc_8233C574:
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8233c9f0
	ctx.lr = 0x8233C580;
	sub_8233C9F0(ctx, base);
	// b 0x8233c58c
	goto loc_8233C58C;
loc_8233C584:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_8233C58C:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_8233C59C:
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

__attribute__((alias("__imp__sub_8233C5B0"))) PPC_WEAK_FUNC(sub_8233C5B0);
PPC_FUNC_IMPL(__imp__sub_8233C5B0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233c5e0
	if (!ctx.cr6.eq) goto loc_8233C5E0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8233c63c
	goto loc_8233C63C;
loc_8233C5E0:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233c604
	if (!ctx.cr6.eq) goto loc_8233C604;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8233c638
	if (!ctx.cr6.eq) goto loc_8233C638;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233c638
	if (ctx.cr6.eq) goto loc_8233C638;
loc_8233C604:
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8233c638
	if (ctx.cr6.gt) goto loc_8233C638;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233C62C;
	sub_82A75198(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8233C638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C63C:
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

__attribute__((alias("__imp__sub_8233C654"))) PPC_WEAK_FUNC(sub_8233C654);
PPC_FUNC_IMPL(__imp__sub_8233C654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C658"))) PPC_WEAK_FUNC(sub_8233C658);
PPC_FUNC_IMPL(__imp__sub_8233C658) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8233C660;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,27984
	ctx.r27.s64 = ctx.r11.s64 + 27984;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,64
	ctx.r29.s64 = ctx.r3.s64 + 64;
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r30.u32);
	// addi r28,r29,36
	ctx.r28.s64 = ctx.r29.s64 + 36;
	// lfd f31,112(r27)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r27.u32 + 112);
	// stw r30,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r30.u32);
	// lfd f0,1528(r27)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1528);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfd f13,1536(r27)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1536);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stfd f31,64(r31)
	PPC_STORE_U64(ctx.r31.u32 + 64, ctx.f31.u64);
	// stfd f0,72(r31)
	PPC_STORE_U64(ctx.r31.u32 + 72, ctx.f0.u64);
	// stfd f31,80(r31)
	PPC_STORE_U64(ctx.r31.u32 + 80, ctx.f31.u64);
	// stfd f13,88(r31)
	PPC_STORE_U64(ctx.r31.u32 + 88, ctx.f13.u64);
	// bl 0x822402c8
	ctx.lr = 0x8233C6B8;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x822402c8
	ctx.lr = 0x8233C6C8;
	sub_822402C8(ctx, base);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// addi r29,r29,176
	ctx.r29.s64 = ctx.r29.s64 + 176;
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x822402c8
	ctx.lr = 0x8233C6F0;
	sub_822402C8(ctx, base);
	// stw r30,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r30.u32);
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// li r4,1024
	ctx.r4.s64 = 1024;
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
	// stfd f31,288(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.f31.u64);
	// stfd f31,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f31.u64);
	// stw r30,1332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1332, ctx.r30.u32);
	// stw r30,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r30.u32);
	// stw r30,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r30.u32);
	// stw r30,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r30.u32);
	// bl 0x822e3938
	ctx.lr = 0x8233C724;
	sub_822E3938(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r30.u32);
	// addi r28,r31,1496
	ctx.r28.s64 = ctx.r31.s64 + 1496;
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r30.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r30,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r30.u32);
	// stw r29,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r29.u32);
	// stw r30,1408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1408, ctx.r30.u32);
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// std r30,1464(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1464, ctx.r30.u64);
	// bl 0x822402c8
	ctx.lr = 0x8233C768;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,28
	ctx.r3.s64 = ctx.r28.s64 + 28;
	// bl 0x822402c8
	ctx.lr = 0x8233C778;
	sub_822402C8(ctx, base);
	// stw r30,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r30.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r31,1596
	ctx.r3.s64 = ctx.r31.s64 + 1596;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
	// bl 0x822400d8
	ctx.lr = 0x8233C78C;
	sub_822400D8(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lfd f0,1648(r27)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r27.u32 + 1648);
	// sth r30,1624(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1624, ctx.r30.u16);
	// stfd f0,1648(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1648, ctx.f0.u64);
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// stfd f31,1664(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1664, ctx.f31.u64);
	// li r10,-21589
	ctx.r10.s64 = -21589;
	// stfd f31,1672(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1672, ctx.f31.u64);
	// sth r30,1626(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1626, ctx.r30.u16);
	// addi r3,r31,1736
	ctx.r3.s64 = ctx.r31.s64 + 1736;
	// stw r29,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r29.u32);
	// stw r29,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r29.u32);
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// sth r10,1680(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1680, ctx.r10.u16);
	// stw r30,1688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1688, ctx.r30.u32);
	// stw r30,1692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1692, ctx.r30.u32);
	// stw r30,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r30.u32);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// stw r29,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r29.u32);
	// bl 0x82599a00
	ctx.lr = 0x8233C7EC;
	sub_82599A00(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r30,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r30.u32);
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r11,1816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1816, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r30.u32);
	// addi r3,r31,1424
	ctx.r3.s64 = ctx.r31.s64 + 1424;
	// stb r30,1828(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1828, ctx.r30.u8);
	// bl 0x82a75988
	ctx.lr = 0x8233C810;
	sub_82A75988(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x82a75988
	ctx.lr = 0x8233C820;
	sub_82A75988(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r31,1384
	ctx.r10.s64 = ctx.r31.s64 + 1384;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8233C82C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c83c
	if (ctx.cr6.eq) goto loc_8233C83C;
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
loc_8233C83C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x8233c82c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8233C82C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791c4
	ctx.lr = 0x8233C84C;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x831791c4
	ctx.lr = 0x8233C854;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233C868"))) PPC_WEAK_FUNC(sub_8233C868);
PPC_FUNC_IMPL(__imp__sub_8233C868) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r3,21764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8233c8a8
	if (!ctx.cr6.eq) goto loc_8233C8A8;
	// li r3,1832
	ctx.r3.s64 = 1832;
	// bl 0x82691500
	ctx.lr = 0x8233C890;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233c8a0
	if (ctx.cr0.eq) goto loc_8233C8A0;
	// bl 0x8233c658
	ctx.lr = 0x8233C89C;
	sub_8233C658(ctx, base);
	// b 0x8233c8a4
	goto loc_8233C8A4;
loc_8233C8A0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233C8A4:
	// stw r3,21764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 21764, ctx.r3.u32);
loc_8233C8A8:
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

__attribute__((alias("__imp__sub_8233C8BC"))) PPC_WEAK_FUNC(sub_8233C8BC);
PPC_FUNC_IMPL(__imp__sub_8233C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C8C0"))) PPC_WEAK_FUNC(sub_8233C8C0);
PPC_FUNC_IMPL(__imp__sub_8233C8C0) {
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
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,1736
	ctx.r31.s64 = ctx.r3.s64 + 1736;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82599aa8
	ctx.lr = 0x8233C8E4;
	sub_82599AA8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a7f320
	ctx.lr = 0x8233C8EC;
	sub_82A7F320(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,4600
	ctx.r4.s64 = ctx.r11.s64 + 4600;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82a7f450
	ctx.lr = 0x8233C900;
	sub_82A7F450(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233c920
	if (!ctx.cr0.eq) goto loc_8233C920;
	// bl 0x82a78478
	ctx.lr = 0x8233C90C;
	sub_82A78478(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8233c980
	if (!ctx.cr0.gt) goto loc_8233C980;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// oris r11,r11,32775
	ctx.r11.u64 = ctx.r11.u64 | 2147942400;
	// b 0x8233c980
	goto loc_8233C980;
loc_8233C920:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c978
	if (ctx.cr6.eq) goto loc_8233C978;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233c978
	if (ctx.cr6.eq) goto loc_8233C978;
loc_8233C938:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8259a0d0
	ctx.lr = 0x8233C948;
	sub_8259A0D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233c970
	if (!ctx.cr0.eq) goto loc_8233C970;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8259a410
	ctx.lr = 0x8233C95C;
	sub_8259A410(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233c970
	if (!ctx.cr0.eq) goto loc_8233C970;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8233c938
	if (!ctx.cr6.eq) goto loc_8233C938;
loc_8233C970:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8233c980
	goto loc_8233C980;
loc_8233C978:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,87
	ctx.r11.u64 = ctx.r11.u64 | 87;
loc_8233C980:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233c9d4
	if (!ctx.cr6.eq) goto loc_8233C9D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ddb8
	ctx.lr = 0x8233C990;
	sub_8233DDB8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233ce88
	ctx.lr = 0x8233C998;
	sub_8233CE88(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8233e298
	ctx.lr = 0x8233C9A0;
	sub_8233E298(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a77448
	ctx.lr = 0x8233C9A8;
	sub_82A77448(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// ld r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r11,23072(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23072);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// std r11,1464(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1464, ctx.r11.u64);
	// bl 0x82a758f8
	ctx.lr = 0x8233C9C4;
	sub_82A758F8(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r11,1424(r30)
	PPC_STORE_U64(ctx.r30.u32 + 1424, ctx.r11.u64);
	// bl 0x8233cce0
	ctx.lr = 0x8233C9D4;
	sub_8233CCE0(ctx, base);
loc_8233C9D4:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
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

__attribute__((alias("__imp__sub_8233C9EC"))) PPC_WEAK_FUNC(sub_8233C9EC);
PPC_FUNC_IMPL(__imp__sub_8233C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233C9F0"))) PPC_WEAK_FUNC(sub_8233C9F0);
PPC_FUNC_IMPL(__imp__sub_8233C9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8233C9F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8233ca1c
	if (!ctx.cr6.eq) goto loc_8233CA1C;
	// lwz r28,1388(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1388);
	// b 0x8233ca20
	goto loc_8233CA20;
loc_8233CA1C:
	// lwz r28,1384(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1384);
loc_8233CA20:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x8233ca34
	if (!ctx.cr6.eq) goto loc_8233CA34;
loc_8233CA28:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x8233cb34
	goto loc_8233CB34;
loc_8233CA34:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CA60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x8233ca28
	if (!ctx.cr6.lt) goto loc_8233CA28;
	// lwz r11,1380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r31,1380(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8233cab4
	if (ctx.cr6.gt) goto loc_8233CAB4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233CAA8;
	sub_82A75198(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8233CAB4:
	// lwz r31,1380(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8233caec
	if (ctx.cr6.gt) goto loc_8233CAEC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233CAE0;
	sub_82A75198(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8233CAEC:
	// lwz r11,1380(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1380);
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bne cr6,0x8233cb24
	if (!ctx.cr6.eq) goto loc_8233CB24;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CB20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8233cb30
	goto loc_8233CB30;
loc_8233CB24:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233CB30:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233CB34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CB3C"))) PPC_WEAK_FUNC(sub_8233CB3C);
PPC_FUNC_IMPL(__imp__sub_8233CB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CB40"))) PPC_WEAK_FUNC(sub_8233CB40);
PPC_FUNC_IMPL(__imp__sub_8233CB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8233CB48;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32204
	ctx.r11.s64 = -2110521344;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r27,r11,-16192
	ctx.r27.s64 = ctx.r11.s64 + -16192;
	// bl 0x831791a4
	ctx.lr = 0x8233CB68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cc10
	if (ctx.cr6.eq) goto loc_8233CC10;
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8233cc14
	if (!ctx.cr6.eq) goto loc_8233CC14;
	// bl 0x831791b4
	ctx.lr = 0x8233CB88;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233CBA0;
	sub_82A75198(ctx, base);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r27,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r27.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// bl 0x831791a4
	ctx.lr = 0x8233CBC4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233cbe0
	if (!ctx.cr6.eq) goto loc_8233CBE0;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// beq cr6,0x8233cbe4
	if (ctx.cr6.eq) goto loc_8233CBE4;
loc_8233CBE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233CBE4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233cc10
	if (ctx.cr0.eq) goto loc_8233CC10;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82fa77c0
	ctx.lr = 0x8233CBFC;
	sub_82FA77C0(ctx, base);
	// stw r26,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r26.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233CC08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8233cc1c
	goto loc_8233CC1C;
loc_8233CC10:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8233CC14:
	// bl 0x831791b4
	ctx.lr = 0x8233CC18;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_8233CC1C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CC24"))) PPC_WEAK_FUNC(sub_8233CC24);
PPC_FUNC_IMPL(__imp__sub_8233CC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CC28"))) PPC_WEAK_FUNC(sub_8233CC28);
PPC_FUNC_IMPL(__imp__sub_8233CC28) {
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
	// bl 0x831791a4
	ctx.lr = 0x8233CC44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a77448
	ctx.lr = 0x8233CC4C;
	sub_82A77448(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r10,1464(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1464);
	// addi r30,r11,23072
	ctx.r30.s64 = ctx.r11.s64 + 23072;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ld r11,23072(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 23072);
	// subf r3,r11,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r11.s64;
	// bl 0x82fa9760
	ctx.lr = 0x8233CC6C;
	sub_82FA9760(ctx, base);
	// lfd f0,8(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r10,1824(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1824);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfd f0,272(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 272);
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fdiv f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x8233ccb4
	if (ctx.cr6.gt) goto loc_8233CCB4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8233CCA8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8233cca8
	if (!ctx.cr6.gt) goto loc_8233CCA8;
loc_8233CCB4:
	// stw r30,1824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1824, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233CCC0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8233CCDC"))) PPC_WEAK_FUNC(sub_8233CCDC);
PPC_FUNC_IMPL(__imp__sub_8233CCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CCE0"))) PPC_WEAK_FUNC(sub_8233CCE0);
PPC_FUNC_IMPL(__imp__sub_8233CCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8233CCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1632(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1632);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cd38
	if (ctx.cr6.eq) goto loc_8233CD38;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8233CD04:
	// bl 0x8226d8e8
	ctx.lr = 0x8233CD08;
	sub_8226D8E8(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8226ec90
	ctx.lr = 0x8233CD10;
	sub_8226EC90(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233cd28
	if (ctx.cr0.eq) goto loc_8233CD28;
	// bl 0x82920258
	ctx.lr = 0x8233CD1C;
	sub_82920258(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233cd28
	if (ctx.cr0.eq) goto loc_8233CD28;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8233CD28:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8233cd04
	if (ctx.cr6.lt) goto loc_8233CD04;
	// b 0x8233cd3c
	goto loc_8233CD3C;
loc_8233CD38:
	// li r29,1
	ctx.r29.s64 = 1;
loc_8233CD3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233CD44;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8233cd60
	if (!ctx.cr6.eq) goto loc_8233CD60;
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233cd60
	if (ctx.cr6.eq) goto loc_8233CD60;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r11.u32);
loc_8233CD60:
	// stw r29,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233CD6C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CD74"))) PPC_WEAK_FUNC(sub_8233CD74);
PPC_FUNC_IMPL(__imp__sub_8233CD74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CD78"))) PPC_WEAK_FUNC(sub_8233CD78);
PPC_FUNC_IMPL(__imp__sub_8233CD78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8233CD80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233CD8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r30,r28,1384
	ctx.r30.s64 = ctx.r28.s64 + 1384;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_8233CD9C:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CDB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233ce34
	if (!ctx.cr0.eq) goto loc_8233CE34;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8233cd9c
	if (ctx.cr6.lt) goto loc_8233CD9C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233CDCC:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8233ce04
	if (ctx.cr0.eq) goto loc_8233CE04;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233ce18
	if (ctx.cr0.eq) goto loc_8233CE18;
loc_8233CE04:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x8233cdcc
	if (ctx.cr6.lt) goto loc_8233CDCC;
	// b 0x8233ce38
	goto loc_8233CE38;
loc_8233CE18:
	// addi r11,r31,346
	ctx.r11.s64 = ctx.r31.s64 + 346;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233CE34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8233CE34:
	// li r27,1
	ctx.r27.s64 = 1;
loc_8233CE38:
	// bl 0x82547ee0
	ctx.lr = 0x8233CE3C;
	sub_82547EE0(ctx, base);
	// lfd f0,1672(r28)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r28.u32 + 1672);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,1664(r28)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r28.u32 + 1664);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x8233ce58
	if (!ctx.cr6.lt) goto loc_8233CE58;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8233CE58:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x8233ce6c
	if (ctx.cr6.eq) goto loc_8233CE6C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r31,1
	ctx.r31.s64 = 1;
	// bne cr6,0x8233ce70
	if (!ctx.cr6.eq) goto loc_8233CE70;
loc_8233CE6C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8233CE70:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233CE78;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233CE84"))) PPC_WEAK_FUNC(sub_8233CE84);
PPC_FUNC_IMPL(__imp__sub_8233CE84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233CE88"))) PPC_WEAK_FUNC(sub_8233CE88);
PPC_FUNC_IMPL(__imp__sub_8233CE88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8233CE90;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// bl 0x8233d068
	ctx.lr = 0x8233CE9C;
	sub_8233D068(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r30,r24,1736
	ctx.r30.s64 = ctx.r24.s64 + 1736;
	// addi r4,r11,4608
	ctx.r4.s64 = ctx.r11.s64 + 4608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x82599d70
	ctx.lr = 0x8233CEB4;
	sub_82599D70(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// ori r23,r11,64000
	ctx.r23.u64 = ctx.r11.u64 | 64000;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r10,4636
	ctx.r4.s64 = ctx.r10.s64 + 4636;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233CED4;
	sub_82599D70(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x8233CEE0;
	sub_82691500(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r25,r11,5216
	ctx.r25.s64 = ctx.r11.s64 + 5216;
	// beq 0x8233cf24
	if (ctx.cr0.eq) goto loc_8233CF24;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x8233cefc
	if (!ctx.cr6.lt) goto loc_8233CEFC;
	// li r28,1
	ctx.r28.s64 = 1;
loc_8233CEFC:
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// bl 0x8233e4a8
	ctx.lr = 0x8233CF20;
	sub_8233E4A8(ctx, base);
	// b 0x8233cf2c
	goto loc_8233CF2C;
loc_8233CF24:
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8233CF2C:
	// stw r31,1384(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1384, ctx.r31.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r11,4656
	ctx.r4.s64 = ctx.r11.s64 + 4656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233CF44;
	sub_82599D70(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r11,4696
	ctx.r4.s64 = ctx.r11.s64 + 4696;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233CF5C;
	sub_82599D70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x8233CF68;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233cfa0
	if (ctx.cr0.eq) goto loc_8233CFA0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bge cr6,0x8233cf7c
	if (!ctx.cr6.lt) goto loc_8233CF7C;
	// li r27,1
	ctx.r27.s64 = 1;
loc_8233CF7C:
	// stw r27,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// bl 0x8233e4a8
	ctx.lr = 0x8233CF9C;
	sub_8233E4A8(ctx, base);
	// b 0x8233cfa4
	goto loc_8233CFA4;
loc_8233CFA0:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8233CFA4:
	// stw r31,1388(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1388, ctx.r31.u32);
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x8233cfb4
	if (ctx.cr6.gt) goto loc_8233CFB4;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8233CFB4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,4728
	ctx.r4.s64 = ctx.r11.s64 + 4728;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233CFC8;
	sub_82599D70(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x8233CFD4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233cff8
	if (ctx.cr0.eq) goto loc_8233CFF8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82691580
	ctx.lr = 0x8233CFE4;
	sub_82691580(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// b 0x8233cffc
	goto loc_8233CFFC;
loc_8233CFF8:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8233CFFC:
	// stw r11,1380(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1380, ctx.r11.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// addi r4,r11,4464
	ctx.r4.s64 = ctx.r11.s64 + 4464;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82599d70
	ctx.lr = 0x8233D014;
	sub_82599D70(ctx, base);
	// addi r11,r3,90
	ctx.r11.s64 = ctx.r3.s64 + 90;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x8233d024
	if (ctx.cr6.gt) goto loc_8233D024;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_8233D024:
	// li r3,12
	ctx.r3.s64 = 12;
	// addi r30,r29,61
	ctx.r30.s64 = ctx.r29.s64 + 61;
	// bl 0x82691500
	ctx.lr = 0x8233D030;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8233d054
	if (ctx.cr0.eq) goto loc_8233D054;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691580
	ctx.lr = 0x8233D040;
	sub_82691580(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// b 0x8233d058
	goto loc_8233D058;
loc_8233D054:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_8233D058:
	// stw r11,1376(r24)
	PPC_STORE_U32(ctx.r24.u32 + 1376, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D064"))) PPC_WEAK_FUNC(sub_8233D064);
PPC_FUNC_IMPL(__imp__sub_8233D064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D068"))) PPC_WEAK_FUNC(sub_8233D068);
PPC_FUNC_IMPL(__imp__sub_8233D068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233D070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,1380(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1380);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233d0b0
	if (ctx.cr6.eq) goto loc_8233D0B0;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d09c
	if (ctx.cr6.eq) goto loc_8233D09C;
	// bl 0x826915c0
	ctx.lr = 0x8233D098;
	sub_826915C0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8233D09C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691540
	ctx.lr = 0x8233D0AC;
	sub_82691540(ctx, base);
	// stw r30,1380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1380, ctx.r30.u32);
loc_8233D0B0:
	// addi r31,r28,1384
	ctx.r31.s64 = ctx.r28.s64 + 1384;
	// li r29,2
	ctx.r29.s64 = 2;
loc_8233D0B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d0cc
	if (ctx.cr6.eq) goto loc_8233D0CC;
	// bl 0x82691540
	ctx.lr = 0x8233D0C8;
	sub_82691540(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8233D0CC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x8233d0b8
	if (!ctx.cr0.eq) goto loc_8233D0B8;
	// lwz r31,1376(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1376);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8233d10c
	if (ctx.cr6.eq) goto loc_8233D10C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d0f8
	if (ctx.cr6.eq) goto loc_8233D0F8;
	// bl 0x826915c0
	ctx.lr = 0x8233D0F4;
	sub_826915C0(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_8233D0F8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// bl 0x82691540
	ctx.lr = 0x8233D108;
	sub_82691540(ctx, base);
	// stw r30,1376(r28)
	PPC_STORE_U32(ctx.r28.u32 + 1376, ctx.r30.u32);
loc_8233D10C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D114"))) PPC_WEAK_FUNC(sub_8233D114);
PPC_FUNC_IMPL(__imp__sub_8233D114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D118"))) PPC_WEAK_FUNC(sub_8233D118);
PPC_FUNC_IMPL(__imp__sub_8233D118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233D120;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233D12C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d14c
	if (ctx.cr6.eq) goto loc_8233D14C;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d6e0
	ctx.lr = 0x8233D148;
	sub_8233D6E0(ctx, base);
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
loc_8233D14C:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d168
	if (ctx.cr6.eq) goto loc_8233D168;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d6e0
	ctx.lr = 0x8233D164;
	sub_8233D6E0(ctx, base);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
loc_8233D168:
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d328
	if (ctx.cr6.eq) goto loc_8233D328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d7b0
	ctx.lr = 0x8233D17C;
	sub_8233D7B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233d328
	if (ctx.cr0.eq) goto loc_8233D328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233D18C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r28,1
	ctx.r28.s64 = 1;
loc_8233D190:
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bge cr6,0x8233d24c
	if (!ctx.cr6.lt) goto loc_8233D24C;
	// bl 0x82547ee0
	ctx.lr = 0x8233D1A0;
	sub_82547EE0(ctx, base);
	// lwz r11,1700(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233d2a8
	if (!ctx.cr6.eq) goto loc_8233D2A8;
	// lfd f0,1656(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1656);
	// fsub f0,f1,f0
	ctx.f0.f64 = ctx.f1.f64 - ctx.f0.f64;
	// lfd f13,1648(r31)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r31.u32 + 1648);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x8233d2a8
	if (!ctx.cr6.gt) goto loc_8233D2A8;
	// li r11,32
	ctx.r11.s64 = 32;
	// stfd f1,1656(r31)
	PPC_STORE_U64(ctx.r31.u32 + 1656, ctx.f1.u64);
	// lwz r3,1696(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r31,1556
	ctx.r4.s64 = ctx.r31.s64 + 1556;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D1E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233D1F4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x8233d234
	if (ctx.cr6.lt) goto loc_8233D234;
	// addi r29,r31,28
	ctx.r29.s64 = ctx.r31.s64 + 28;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233D208;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r31,1720
	ctx.r3.s64 = ctx.r31.s64 + 1720;
	// bl 0x82d27e28
	ctx.lr = 0x8233D214;
	sub_82D27E28(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8233d224
	if (ctx.cr6.eq) goto loc_8233D224;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233D224;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233D224:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r10,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r10.u32);
	// b 0x8233d23c
	goto loc_8233D23C;
loc_8233D234:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
loc_8233D23C:
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233D248;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8233d2a8
	goto loc_8233D2A8;
loc_8233D24C:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x8233d260
	if (!ctx.cr6.eq) goto loc_8233D260;
	// bl 0x8233d890
	ctx.lr = 0x8233D25C;
	sub_8233D890(ctx, base);
	// b 0x8233d2a8
	goto loc_8233D2A8;
loc_8233D260:
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x8233d6e0
	ctx.lr = 0x8233D268;
	sub_8233D6E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233D270;
	__imp__RtlEnterCriticalSection(ctx, base);
	// stw r30,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r30.u32);
	// stw r30,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r30.u32);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// stw r30,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r30.u32);
	// stw r30,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r30.u32);
	// stw r30,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r30.u32);
	// bl 0x8233b110
	ctx.lr = 0x8233D28C;
	sub_8233B110(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e298
	ctx.lr = 0x8233D294;
	sub_8233E298(ctx, base);
	// stw r30,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233D2A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82a77720
	ctx.lr = 0x8233D2A8;
	sub_82A77720(ctx, base);
loc_8233D2A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233D2B0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,1412(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1412);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d2cc
	if (ctx.cr6.eq) goto loc_8233D2CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d6e0
	ctx.lr = 0x8233D2C8;
	sub_8233D6E0(ctx, base);
	// stw r30,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r30.u32);
loc_8233D2CC:
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d2e8
	if (ctx.cr6.eq) goto loc_8233D2E8;
	// li r4,12
	ctx.r4.s64 = 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d6e0
	ctx.lr = 0x8233D2E4;
	sub_8233D6E0(ctx, base);
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
loc_8233D2E8:
	// lwz r11,1416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1416);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d304
	if (ctx.cr6.eq) goto loc_8233D304;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233d7b0
	ctx.lr = 0x8233D2FC;
	sub_8233D7B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8233d310
	if (!ctx.cr0.eq) goto loc_8233D310;
loc_8233D304:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
loc_8233D310:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233D318;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82a777f8
	ctx.lr = 0x8233D31C;
	sub_82A777F8(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x8233d190
	if (!ctx.cr6.eq) goto loc_8233D190;
	// b 0x8233d338
	goto loc_8233D338;
loc_8233D328:
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// bl 0x831791b4
	ctx.lr = 0x8233D338;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_8233D338:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D344"))) PPC_WEAK_FUNC(sub_8233D344);
PPC_FUNC_IMPL(__imp__sub_8233D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D348"))) PPC_WEAK_FUNC(sub_8233D348);
PPC_FUNC_IMPL(__imp__sub_8233D348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8233D350;
	__savegprlr_21(ctx, base);
	// stwu r1,-848(r1)
	ea = -848 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1376(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,1688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1688, ctx.r27.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// addi r30,r3,1432
	ctx.r30.s64 = ctx.r3.s64 + 1432;
	// lwz r10,1376(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1376);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,-61
	ctx.r11.s64 = ctx.r11.s64 + -61;
	// lwz r22,0(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
loc_8233D398:
	// bl 0x8226d8e8
	ctx.lr = 0x8233D39C;
	sub_8226D8E8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8226ec90
	ctx.lr = 0x8233D3A4;
	sub_8226EC90(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8233d3e8
	if (ctx.cr0.eq) goto loc_8233D3E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82920500
	ctx.lr = 0x8233D3B4;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233d3e8
	if (ctx.cr0.eq) goto loc_8233D3E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82920518
	ctx.lr = 0x8233D3C4;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8233d3d4
	if (ctx.cr0.eq) goto loc_8233D3D4;
	// std r21,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r21.u64);
	// b 0x8233d3ec
	goto loc_8233D3EC;
loc_8233D3D4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82920528
	ctx.lr = 0x8233D3DC;
	sub_82920528(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// b 0x8233d3ec
	goto loc_8233D3EC;
loc_8233D3E8:
	// std r27,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r27.u64);
loc_8233D3EC:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x8233d398
	if (ctx.cr6.lt) goto loc_8233D398;
	// addi r4,r31,1424
	ctx.r4.s64 = ctx.r31.s64 + 1424;
	// addi r3,r1,181
	ctx.r3.s64 = ctx.r1.s64 + 181;
	// li r5,40
	ctx.r5.s64 = 40;
	// bl 0x82fa77c0
	ctx.lr = 0x8233D40C;
	sub_82FA77C0(ctx, base);
	// lhz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1624);
	// lhz r10,1626(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1626);
	// lhz r9,1680(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 1680);
	// lwz r8,1628(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// stw r27,227(r1)
	PPC_STORE_U32(ctx.r1.u32 + 227, ctx.r27.u32);
	// sth r11,177(r1)
	PPC_STORE_U16(ctx.r1.u32 + 177, ctx.r11.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// sth r10,179(r1)
	PPC_STORE_U16(ctx.r1.u32 + 179, ctx.r10.u16);
	// stw r27,231(r1)
	PPC_STORE_U32(ctx.r1.u32 + 231, ctx.r27.u32);
	// sth r9,235(r1)
	PPC_STORE_U16(ctx.r1.u32 + 235, ctx.r9.u16);
	// beq cr6,0x8233d4ac
	if (ctx.cr6.eq) goto loc_8233D4AC;
	// cmpwi cr6,r25,1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 1, ctx.xer);
	// beq cr6,0x8233d4ac
	if (ctx.cr6.eq) goto loc_8233D4AC;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// lwz r10,1640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r27,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r27.u32);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// stw r27,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r27.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// stw r11,227(r1)
	PPC_STORE_U32(ctx.r1.u32 + 227, ctx.r11.u32);
	// stw r10,231(r1)
	PPC_STORE_U32(ctx.r1.u32 + 231, ctx.r10.u32);
	// bl 0x82a747a8
	ctx.lr = 0x8233D474;
	sub_82A747A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8233d4c0
	if (ctx.cr0.lt) goto loc_8233D4C0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r22,61
	ctx.r4.s64 = ctx.r22.s64 + 61;
	// bl 0x82a74730
	ctx.lr = 0x8233D494;
	sub_82A74730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8233d4a0
	if (ctx.cr0.lt) goto loc_8233D4A0;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
loc_8233D4A0:
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// bl 0x82a74758
	ctx.lr = 0x8233D4A8;
	sub_82A74758(ctx, base);
	// b 0x8233d4b0
	goto loc_8233D4B0;
loc_8233D4AC:
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
loc_8233D4B0:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x8233d4c0
	if (ctx.cr6.eq) goto loc_8233D4C0;
	// stb r21,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r21.u8);
	// b 0x8233d4d8
	goto loc_8233D4D8;
loc_8233D4C0:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r22,61
	ctx.r3.s64 = ctx.r22.s64 + 61;
	// bl 0x82a75198
	ctx.lr = 0x8233D4D0;
	sub_82A75198(ctx, base);
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// stb r27,221(r1)
	PPC_STORE_U8(ctx.r1.u32 + 221, ctx.r27.u8);
loc_8233D4D8:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// li r10,128
	ctx.r10.s64 = 128;
	// stb r25,226(r1)
	PPC_STORE_U8(ctx.r1.u32 + 226, ctx.r25.u8);
	// li r5,61
	ctx.r5.s64 = 61;
	// addi r11,r11,61
	ctx.r11.s64 = ctx.r11.s64 + 61;
	// stb r10,176(r1)
	PPC_STORE_U8(ctx.r1.u32 + 176, ctx.r10.u8);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stw r11,222(r1)
	PPC_STORE_U32(ctx.r1.u32 + 222, ctx.r11.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a75198
	ctx.lr = 0x8233D500;
	sub_82A75198(ctx, base);
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,61
	ctx.r9.s64 = ctx.r9.s64 + 61;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,1376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// lwz r9,222(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 222);
	// lwz r10,1692(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// stw r11,1340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1340, ctx.r11.u32);
	// stw r10,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r10.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x8233d548
	if (ctx.cr6.eq) goto loc_8233D548;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x8233d5e4
	goto loc_8233D5E4;
loc_8233D548:
	// lwz r10,56(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8233d55c
	if (ctx.cr6.lt) goto loc_8233D55C;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8233D55C:
	// lwz r10,84(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// addi r6,r30,64
	ctx.r6.s64 = ctx.r30.s64 + 64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8233d570
	if (ctx.cr6.lt) goto loc_8233D570;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_8233D570:
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r5,r7,4312
	ctx.r5.s64 = ctx.r7.s64 + 4312;
	// addi r8,r10,4284
	ctx.r8.s64 = ctx.r10.s64 + 4284;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82557418
	ctx.lr = 0x8233D590;
	sub_82557418(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_8233D598:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x8233d598
	if (!ctx.cr6.eq) goto loc_8233D598;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r30,176
	ctx.r3.s64 = ctx.r30.s64 + 176;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x82240328
	ctx.lr = 0x8233D5C0;
	sub_82240328(ctx, base);
	// lwz r11,192(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// stw r31,136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 136, ctx.r31.u32);
	// stw r27,148(r30)
	PPC_STORE_U32(ctx.r30.u32 + 148, ctx.r27.u32);
	// stw r22,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r22.u32);
	// stw r27,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r27.u32);
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// bl 0x82547ee0
	ctx.lr = 0x8233D5DC;
	sub_82547EE0(ctx, base);
	// stfd f1,16(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.f1.u64);
	// li r11,3
	ctx.r11.s64 = 3;
loc_8233D5E4:
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// addi r1,r1,848
	ctx.r1.s64 = ctx.r1.s64 + 848;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D5F0"))) PPC_WEAK_FUNC(sub_8233D5F0);
PPC_FUNC_IMPL(__imp__sub_8233D5F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8233D5F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1396(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8233d624
	if (ctx.cr6.eq) goto loc_8233D624;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,1484(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1484);
	// lwz r5,1480(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1480);
	// lwz r4,1472(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1472);
	// stw r11,1400(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1400, ctx.r11.u32);
	// b 0x8233d6d0
	goto loc_8233D6D0;
loc_8233D624:
	// bl 0x831791a4
	ctx.lr = 0x8233D628;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r31,1384
	ctx.r30.s64 = ctx.r31.s64 + 1384;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r28.u32);
loc_8233D638:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8233d670
	if (ctx.cr0.eq) goto loc_8233D670;
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d668
	if (ctx.cr6.eq) goto loc_8233D668;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bne cr6,0x8233d670
	if (!ctx.cr6.eq) goto loc_8233D670;
loc_8233D668:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r11.u32);
loc_8233D670:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x8233d638
	if (ctx.cr6.lt) goto loc_8233D638;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x8233D688;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,1392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8233d6d4
	if (ctx.cr6.eq) goto loc_8233D6D4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D6B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r3,1820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1820, ctx.r3.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8233d6d4
	if (ctx.cr6.eq) goto loc_8233D6D4;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_8233D6D0:
	// bl 0x8233d348
	ctx.lr = 0x8233D6D4;
	sub_8233D348(ctx, base);
loc_8233D6D4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8233D6DC"))) PPC_WEAK_FUNC(sub_8233D6DC);
PPC_FUNC_IMPL(__imp__sub_8233D6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8233D6E0"))) PPC_WEAK_FUNC(sub_8233D6E0);
PPC_FUNC_IMPL(__imp__sub_8233D6E0) {
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
	// stw r4,1408(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1408, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a77720
	ctx.lr = 0x8233D708;
	sub_82A77720(ctx, base);
	// lwz r11,1396(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233d77c
	if (!ctx.cr6.eq) goto loc_8233D77C;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8233d77c
	if (!ctx.cr6.eq) goto loc_8233D77C;
	// lwz r11,1392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8233d788
	if (ctx.cr6.eq) goto loc_8233D788;
	// lwz r11,1712(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8233d770
	if (!ctx.cr6.eq) goto loc_8233D770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x8233D740;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,1392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,1820(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1820);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8233D75C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x8233D76C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x8233d788
	goto loc_8233D788;
loc_8233D770:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r11.u32);
	// b 0x8233d788
	goto loc_8233D788;
loc_8233D77C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// stw r11,1404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1404, ctx.r11.u32);
loc_8233D788:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8233e228
	ctx.lr = 0x8233D794;
	sub_8233E228(ctx, base);
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

__attribute__((alias("__imp__sub_8233D7AC"))) PPC_WEAK_FUNC(sub_8233D7AC);
PPC_FUNC_IMPL(__imp__sub_8233D7AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

