#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_828322DC"))) PPC_WEAK_FUNC(sub_828322DC);
PPC_FUNC_IMPL(__imp__sub_828322DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828322E0"))) PPC_WEAK_FUNC(sub_828322E0);
PPC_FUNC_IMPL(__imp__sub_828322E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82832890
	sub_82832890(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828322E4"))) PPC_WEAK_FUNC(sub_828322E4);
PPC_FUNC_IMPL(__imp__sub_828322E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828322E8"))) PPC_WEAK_FUNC(sub_828322E8);
PPC_FUNC_IMPL(__imp__sub_828322E8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82832908
	sub_82832908(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828322EC"))) PPC_WEAK_FUNC(sub_828322EC);
PPC_FUNC_IMPL(__imp__sub_828322EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828322F0"))) PPC_WEAK_FUNC(sub_828322F0);
PPC_FUNC_IMPL(__imp__sub_828322F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x828322F8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x828320a0
	ctx.lr = 0x82832320;
	sub_828320A0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8283233c
	if (ctx.cr6.eq) goto loc_8283233C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8282c868
	ctx.lr = 0x8283233C;
	sub_8282C868(ctx, base);
loc_8283233C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832348"))) PPC_WEAK_FUNC(sub_82832348);
PPC_FUNC_IMPL(__imp__sub_82832348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832350;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// bl 0x828321b0
	ctx.lr = 0x82832378;
	sub_828321B0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82832394
	if (ctx.cr6.eq) goto loc_82832394;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8282ca20
	ctx.lr = 0x82832394;
	sub_8282CA20(ctx, base);
loc_82832394:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828323A0"))) PPC_WEAK_FUNC(sub_828323A0);
PPC_FUNC_IMPL(__imp__sub_828323A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x828323A8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82826298
	ctx.lr = 0x828323C8;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828323e8
	if (ctx.cr0.eq) goto loc_828323E8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fdf8
	ctx.lr = 0x828323E8;
	sub_8282FDF8(ctx, base);
loc_828323E8:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832400;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832410;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283241C"))) PPC_WEAK_FUNC(sub_8283241C);
PPC_FUNC_IMPL(__imp__sub_8283241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832420"))) PPC_WEAK_FUNC(sub_82832420);
PPC_FUNC_IMPL(__imp__sub_82832420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82832428;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82826298
	ctx.lr = 0x82832448;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82832468
	if (ctx.cr0.eq) goto loc_82832468;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828300f0
	ctx.lr = 0x82832468;
	sub_828300F0(ctx, base);
loc_82832468:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832480;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832490;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283249C"))) PPC_WEAK_FUNC(sub_8283249C);
PPC_FUNC_IMPL(__imp__sub_8283249C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828324A0"))) PPC_WEAK_FUNC(sub_828324A0);
PPC_FUNC_IMPL(__imp__sub_828324A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x828324A8;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82826298
	ctx.lr = 0x828324C4;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828324e0
	if (ctx.cr0.eq) goto loc_828324E0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828303e8
	ctx.lr = 0x828324E0;
	sub_828303E8(ctx, base);
loc_828324E0:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x828324F8;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832508;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832514"))) PPC_WEAK_FUNC(sub_82832514);
PPC_FUNC_IMPL(__imp__sub_82832514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832518"))) PPC_WEAK_FUNC(sub_82832518);
PPC_FUNC_IMPL(__imp__sub_82832518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832520;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82826298
	ctx.lr = 0x8283253C;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82832558
	if (ctx.cr0.eq) goto loc_82832558;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828305c8
	ctx.lr = 0x82832558;
	sub_828305C8(ctx, base);
loc_82832558:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832570;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832580;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283258C"))) PPC_WEAK_FUNC(sub_8283258C);
PPC_FUNC_IMPL(__imp__sub_8283258C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832590"))) PPC_WEAK_FUNC(sub_82832590);
PPC_FUNC_IMPL(__imp__sub_82832590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82832598;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82826298
	ctx.lr = 0x828325BC;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828325dc
	if (ctx.cr0.eq) goto loc_828325DC;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828307a8
	ctx.lr = 0x828325DC;
	sub_828307A8(ctx, base);
loc_828325DC:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x828325F4;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832604;
	sub_8282F978(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832610"))) PPC_WEAK_FUNC(sub_82832610);
PPC_FUNC_IMPL(__imp__sub_82832610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82832618;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x82826298
	ctx.lr = 0x8283263C;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8283265c
	if (ctx.cr0.eq) goto loc_8283265C;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828308c8
	ctx.lr = 0x8283265C;
	sub_828308C8(ctx, base);
loc_8283265C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832674;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832684;
	sub_8282F978(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832690"))) PPC_WEAK_FUNC(sub_82832690);
PPC_FUNC_IMPL(__imp__sub_82832690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82832698;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82826298
	ctx.lr = 0x828326B8;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828326d8
	if (ctx.cr0.eq) goto loc_828326D8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828309e8
	ctx.lr = 0x828326D8;
	sub_828309E8(ctx, base);
loc_828326D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x828326F0;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832700;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283270C"))) PPC_WEAK_FUNC(sub_8283270C);
PPC_FUNC_IMPL(__imp__sub_8283270C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832710"))) PPC_WEAK_FUNC(sub_82832710);
PPC_FUNC_IMPL(__imp__sub_82832710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82832718;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82826298
	ctx.lr = 0x82832738;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82832758
	if (ctx.cr0.eq) goto loc_82832758;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82830b90
	ctx.lr = 0x82832758;
	sub_82830B90(ctx, base);
loc_82832758:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832770;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832780;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283278C"))) PPC_WEAK_FUNC(sub_8283278C);
PPC_FUNC_IMPL(__imp__sub_8283278C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832790"))) PPC_WEAK_FUNC(sub_82832790);
PPC_FUNC_IMPL(__imp__sub_82832790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82832798;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82826298
	ctx.lr = 0x828327B8;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828327d8
	if (ctx.cr0.eq) goto loc_828327D8;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82831510
	ctx.lr = 0x828327D8;
	sub_82831510(ctx, base);
loc_828327D8:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x828327F0;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832800;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283280C"))) PPC_WEAK_FUNC(sub_8283280C);
PPC_FUNC_IMPL(__imp__sub_8283280C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832810"))) PPC_WEAK_FUNC(sub_82832810);
PPC_FUNC_IMPL(__imp__sub_82832810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82832818;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82826298
	ctx.lr = 0x82832838;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82832858
	if (ctx.cr0.eq) goto loc_82832858;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82831840
	ctx.lr = 0x82832858;
	sub_82831840(ctx, base);
loc_82832858:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832870;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832880;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283288C"))) PPC_WEAK_FUNC(sub_8283288C);
PPC_FUNC_IMPL(__imp__sub_8283288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832890"))) PPC_WEAK_FUNC(sub_82832890);
PPC_FUNC_IMPL(__imp__sub_82832890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832898;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82826298
	ctx.lr = 0x828328B4;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828328d0
	if (ctx.cr0.eq) goto loc_828328D0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82831b28
	ctx.lr = 0x828328D0;
	sub_82831B28(ctx, base);
loc_828328D0:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x828328E8;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x828328F8;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832904"))) PPC_WEAK_FUNC(sub_82832904);
PPC_FUNC_IMPL(__imp__sub_82832904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832908"))) PPC_WEAK_FUNC(sub_82832908);
PPC_FUNC_IMPL(__imp__sub_82832908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832910;
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82826298
	ctx.lr = 0x8283292C;
	sub_82826298(ctx, base);
	// clrlwi. r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82832948
	if (ctx.cr0.eq) goto loc_82832948;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82831de0
	ctx.lr = 0x82832948;
	sub_82831DE0(ctx, base);
loc_82832948:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282fc28
	ctx.lr = 0x82832960;
	sub_8282FC28(ctx, base);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8282f978
	ctx.lr = 0x82832970;
	sub_8282F978(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283297C"))) PPC_WEAK_FUNC(sub_8283297C);
PPC_FUNC_IMPL(__imp__sub_8283297C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832980"))) PPC_WEAK_FUNC(sub_82832980);
PPC_FUNC_IMPL(__imp__sub_82832980) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x828329A0;
	sub_8283B938(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8283b5b8
	ctx.lr = 0x828329B4;
	sub_8283B5B8(ctx, base);
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

__attribute__((alias("__imp__sub_828329C8"))) PPC_WEAK_FUNC(sub_828329C8);
PPC_FUNC_IMPL(__imp__sub_828329C8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828329D0"))) PPC_WEAK_FUNC(sub_828329D0);
PPC_FUNC_IMPL(__imp__sub_828329D0) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x828329F0;
	sub_8283B938(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8283b5b8
	ctx.lr = 0x82832A04;
	sub_8283B5B8(ctx, base);
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

__attribute__((alias("__imp__sub_82832A18"))) PPC_WEAK_FUNC(sub_82832A18);
PPC_FUNC_IMPL(__imp__sub_82832A18) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x82832A38;
	sub_8283B938(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8283b770
	ctx.lr = 0x82832A4C;
	sub_8283B770(ctx, base);
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

__attribute__((alias("__imp__sub_82832A60"))) PPC_WEAK_FUNC(sub_82832A60);
PPC_FUNC_IMPL(__imp__sub_82832A60) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832A64"))) PPC_WEAK_FUNC(sub_82832A64);
PPC_FUNC_IMPL(__imp__sub_82832A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832A68"))) PPC_WEAK_FUNC(sub_82832A68);
PPC_FUNC_IMPL(__imp__sub_82832A68) {
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
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283b938
	ctx.lr = 0x82832A88;
	sub_8283B938(ctx, base);
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r3,r11,13892
	ctx.r3.s64 = ctx.r11.s64 + 13892;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8283b770
	ctx.lr = 0x82832A9C;
	sub_8283B770(ctx, base);
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

__attribute__((alias("__imp__sub_82832AB0"))) PPC_WEAK_FUNC(sub_82832AB0);
PPC_FUNC_IMPL(__imp__sub_82832AB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832AB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828222c8
	ctx.lr = 0x82832AD8;
	sub_828222C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-19824
	ctx.r11.s64 = ctx.r11.s64 + -19824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828217f0
	ctx.lr = 0x82832AF0;
	sub_828217F0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832AFC"))) PPC_WEAK_FUNC(sub_82832AFC);
PPC_FUNC_IMPL(__imp__sub_82832AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832B00"))) PPC_WEAK_FUNC(sub_82832B00);
PPC_FUNC_IMPL(__imp__sub_82832B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828222c8
	ctx.lr = 0x82832B28;
	sub_828222C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-19824
	ctx.r11.s64 = ctx.r11.s64 + -19824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82822180
	ctx.lr = 0x82832B40;
	sub_82822180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832B4C"))) PPC_WEAK_FUNC(sub_82832B4C);
PPC_FUNC_IMPL(__imp__sub_82832B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832B50"))) PPC_WEAK_FUNC(sub_82832B50);
PPC_FUNC_IMPL(__imp__sub_82832B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82832B58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828222c8
	ctx.lr = 0x82832B7C;
	sub_828222C8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r11,r11,-19824
	ctx.r11.s64 = ctx.r11.s64 + -19824;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82822180
	ctx.lr = 0x82832B94;
	sub_82822180(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832BA0"))) PPC_WEAK_FUNC(sub_82832BA0);
PPC_FUNC_IMPL(__imp__sub_82832BA0) {
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
	// bl 0x828220d8
	ctx.lr = 0x82832BB8;
	sub_828220D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828220e0
	ctx.lr = 0x82832BC0;
	sub_828220E0(ctx, base);
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

__attribute__((alias("__imp__sub_82832BD4"))) PPC_WEAK_FUNC(sub_82832BD4);
PPC_FUNC_IMPL(__imp__sub_82832BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832BD8"))) PPC_WEAK_FUNC(sub_82832BD8);
PPC_FUNC_IMPL(__imp__sub_82832BD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82822138
	sub_82822138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832BDC"))) PPC_WEAK_FUNC(sub_82832BDC);
PPC_FUNC_IMPL(__imp__sub_82832BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832BE0"))) PPC_WEAK_FUNC(sub_82832BE0);
PPC_FUNC_IMPL(__imp__sub_82832BE0) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82821930
	ctx.lr = 0x82832C04;
	sub_82821930(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82821938
	ctx.lr = 0x82832C0C;
	sub_82821938(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82832c1c
	if (ctx.cr0.eq) goto loc_82832C1C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82832a18
	ctx.lr = 0x82832C1C;
	sub_82832A18(ctx, base);
loc_82832C1C:
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

__attribute__((alias("__imp__sub_82832C38"))) PPC_WEAK_FUNC(sub_82832C38);
PPC_FUNC_IMPL(__imp__sub_82832C38) {
	PPC_FUNC_PROLOGUE();
	// lha r3,22(r3)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 22));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C40"))) PPC_WEAK_FUNC(sub_82832C40);
PPC_FUNC_IMPL(__imp__sub_82832C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C60"))) PPC_WEAK_FUNC(sub_82832C60);
PPC_FUNC_IMPL(__imp__sub_82832C60) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C68"))) PPC_WEAK_FUNC(sub_82832C68);
PPC_FUNC_IMPL(__imp__sub_82832C68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C70"))) PPC_WEAK_FUNC(sub_82832C70);
PPC_FUNC_IMPL(__imp__sub_82832C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C78"))) PPC_WEAK_FUNC(sub_82832C78);
PPC_FUNC_IMPL(__imp__sub_82832C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C80"))) PPC_WEAK_FUNC(sub_82832C80);
PPC_FUNC_IMPL(__imp__sub_82832C80) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832C88"))) PPC_WEAK_FUNC(sub_82832C88);
PPC_FUNC_IMPL(__imp__sub_82832C88) {
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
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82832cbc
	if (ctx.cr6.lt) goto loc_82832CBC;
	// bne cr6,0x82832cc8
	if (!ctx.cr6.eq) goto loc_82832CC8;
	// lfs f1,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8283c4d0
	ctx.lr = 0x82832CB0;
	sub_8283C4D0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82832cc8
	goto loc_82832CC8;
loc_82832CBC:
	// lfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8283c4d0
	ctx.lr = 0x82832CC4;
	sub_8283C4D0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82832CC8:
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

__attribute__((alias("__imp__sub_82832CDC"))) PPC_WEAK_FUNC(sub_82832CDC);
PPC_FUNC_IMPL(__imp__sub_82832CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832CE0"))) PPC_WEAK_FUNC(sub_82832CE0);
PPC_FUNC_IMPL(__imp__sub_82832CE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832CE8"))) PPC_WEAK_FUNC(sub_82832CE8);
PPC_FUNC_IMPL(__imp__sub_82832CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832CF0"))) PPC_WEAK_FUNC(sub_82832CF0);
PPC_FUNC_IMPL(__imp__sub_82832CF0) {
	PPC_FUNC_PROLOGUE();
	// sth r4,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832CF8"))) PPC_WEAK_FUNC(sub_82832CF8);
PPC_FUNC_IMPL(__imp__sub_82832CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832D00"))) PPC_WEAK_FUNC(sub_82832D00);
PPC_FUNC_IMPL(__imp__sub_82832D00) {
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
	// stfs f1,8(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// beq cr6,0x82832d40
	if (ctx.cr6.eq) goto loc_82832D40;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f1,f2
	ctx.f1.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82832d48
	if (!ctx.cr6.lt) goto loc_82832D48;
	// bl 0x8283c4d0
	ctx.lr = 0x82832D3C;
	sub_8283C4D0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
loc_82832D40:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82832d50
	goto loc_82832D50;
loc_82832D48:
	// bl 0x8283c4d0
	ctx.lr = 0x82832D4C;
	sub_8283C4D0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82832D50:
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

__attribute__((alias("__imp__sub_82832D64"))) PPC_WEAK_FUNC(sub_82832D64);
PPC_FUNC_IMPL(__imp__sub_82832D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82832D68"))) PPC_WEAK_FUNC(sub_82832D68);
PPC_FUNC_IMPL(__imp__sub_82832D68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82832dc4
	if (ctx.cr6.eq) goto loc_82832DC4;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f1.f64));
	// fmuls f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f2.f64));
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// bge cr6,0x82832dbc
	if (!ctx.cr6.lt) goto loc_82832DBC;
	// bl 0x8283c4d0
	ctx.lr = 0x82832DB0;
	sub_8283C4D0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82832dc4
	goto loc_82832DC4;
loc_82832DBC:
	// bl 0x8283c4d0
	ctx.lr = 0x82832DC0;
	sub_8283C4D0(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_82832DC4:
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

__attribute__((alias("__imp__sub_82832DD8"))) PPC_WEAK_FUNC(sub_82832DD8);
PPC_FUNC_IMPL(__imp__sub_82832DD8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832DE0"))) PPC_WEAK_FUNC(sub_82832DE0);
PPC_FUNC_IMPL(__imp__sub_82832DE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// sth r10,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r10.u16);
	// blt cr6,0x82832edc
	if (ctx.cr6.lt) goto loc_82832EDC;
	// beq cr6,0x82832e94
	if (ctx.cr6.eq) goto loc_82832E94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82832e2c
	if (!ctx.cr6.gt) goto loc_82832E2C;
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82832E2C:
	// fctiwz f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f12,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f12.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// bgt cr6,0x82832e4c
	if (ctx.cr6.gt) goto loc_82832E4C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
loc_82832E4C:
	// lha r11,22(r3)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 22));
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addze r10,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lfs f12,12(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// stfs f13,12(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x82832f48
	goto loc_82832F48;
loc_82832E94:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82832eb8
	if (!ctx.cr6.gt) goto loc_82832EB8;
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
loc_82832EB0:
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// b 0x82832f48
	goto loc_82832F48;
loc_82832EB8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f13.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82832eb0
	goto loc_82832EB0;
loc_82832EDC:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82832f0c
	if (ctx.cr6.lt) goto loc_82832F0C;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// b 0x82832f3c
	goto loc_82832F3C;
loc_82832F0C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-10(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -10);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sth r11,22(r3)
	PPC_STORE_U16(ctx.r3.u32 + 22, ctx.r11.u16);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82832F3C:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
loc_82832F48:
	// stfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82832F50"))) PPC_WEAK_FUNC(sub_82832F50);
PPC_FUNC_IMPL(__imp__sub_82832F50) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// lfs f31,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,12(r3)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8283c4d0
	ctx.lr = 0x82832F88;
	sub_8283C4D0(ctx, base);
	// stfs f1,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82832d00
	ctx.lr = 0x82832F9C;
	sub_82832D00(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r31,22(r30)
	PPC_STORE_U16(ctx.r30.u32 + 22, ctx.r31.u16);
	// sth r31,20(r30)
	PPC_STORE_U16(ctx.r30.u32 + 20, ctx.r31.u16);
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
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

__attribute__((alias("__imp__sub_82832FD0"))) PPC_WEAK_FUNC(sub_82832FD0);
PPC_FUNC_IMPL(__imp__sub_82832FD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f0,f1,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// b 0x82832de0
	sub_82832DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832FE0"))) PPC_WEAK_FUNC(sub_82832FE0);
PPC_FUNC_IMPL(__imp__sub_82832FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// stfs f1,0(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f1,f13,f0,f1
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f1.f64));
	// b 0x82832de0
	sub_82832DE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82832FF8"))) PPC_WEAK_FUNC(sub_82832FF8);
PPC_FUNC_IMPL(__imp__sub_82832FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,152(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 152);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833004"))) PPC_WEAK_FUNC(sub_82833004);
PPC_FUNC_IMPL(__imp__sub_82833004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833008"))) PPC_WEAK_FUNC(sub_82833008);
PPC_FUNC_IMPL(__imp__sub_82833008) {
	PPC_FUNC_PROLOGUE();
	// fmr f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f3.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833010"))) PPC_WEAK_FUNC(sub_82833010);
PPC_FUNC_IMPL(__imp__sub_82833010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833030"))) PPC_WEAK_FUNC(sub_82833030);
PPC_FUNC_IMPL(__imp__sub_82833030) {
	PPC_FUNC_PROLOGUE();
	// fsubs f0,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fmadds f1,f0,f1,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283303C"))) PPC_WEAK_FUNC(sub_8283303C);
PPC_FUNC_IMPL(__imp__sub_8283303C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833040"))) PPC_WEAK_FUNC(sub_82833040);
PPC_FUNC_IMPL(__imp__sub_82833040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17892);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f11,21500(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21500);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f12,25272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25272);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f3,f12,f2
	ctx.f12.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f2.f64)));
	// fmsubs f11,f4,f11,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmsubs f13,f3,f13,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f0,f4,f0,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fmadds f13,f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f1,f0,f1,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833098"))) PPC_WEAK_FUNC(sub_82833098);
PPC_FUNC_IMPL(__imp__sub_82833098) {
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
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x828330f0
	if (ctx.cr6.gt) goto loc_828330F0;
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// b 0x828330f8
	goto loc_828330F8;
loc_828330F0:
	// bl 0x8283bd78
	ctx.lr = 0x828330F4;
	sub_8283BD78(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_828330F8:
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
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

__attribute__((alias("__imp__sub_82833118"))) PPC_WEAK_FUNC(sub_82833118);
PPC_FUNC_IMPL(__imp__sub_82833118) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82833120;
	__savegprlr_29(ctx, base);
	// stfd f29,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f29.u64);
	// stfd f30,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm. r10,r6,0,24,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xE0;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	// bne 0x8283315c
	if (!ctx.cr0.eq) goto loc_8283315C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
loc_82833154:
	// stfs f0,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82833240
	goto loc_82833240;
loc_8283315C:
	// rlwinm r11,r11,0,27,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1C;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// bne cr6,0x828331a8
	if (!ctx.cr6.eq) goto loc_828331A8;
	// fmuls f12,f0,f0
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f11,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f12,f11,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f12.f64));
	// fmadds f12,f10,f10,f12
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f12.f64));
	// fsubs f1,f13,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82833154
	if (!ctx.cr6.gt) goto loc_82833154;
	// bl 0x8283bd78
	ctx.lr = 0x828331A0;
	sub_8283BD78(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x82833240
	goto loc_82833240;
loc_828331A8:
	// fmuls f13,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lfs f11,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f30,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stfs f11,104(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// fmadds f0,f12,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x828331e4
	if (ctx.cr6.gt) goto loc_828331E4;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x828331ec
	goto loc_828331EC;
loc_828331E4:
	// bl 0x8283bd78
	ctx.lr = 0x828331E8;
	sub_8283BD78(ctx, base);
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_828331EC:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f12,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x82833224
	if (ctx.cr6.gt) goto loc_82833224;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x8283322c
	goto loc_8283322C;
loc_82833224:
	// bl 0x8283bd78
	ctx.lr = 0x82833228;
	sub_8283BD78(ctx, base);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_8283322C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828409a0
	ctx.lr = 0x82833240;
	sub_828409A0(ctx, base);
loc_82833240:
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r11,0(r29)
	PPC_STORE_U16(ctx.r29.u32 + 0, ctx.r11.u16);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_8283325C"))) PPC_WEAK_FUNC(sub_8283325C);
PPC_FUNC_IMPL(__imp__sub_8283325C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833260"))) PPC_WEAK_FUNC(sub_82833260);
PPC_FUNC_IMPL(__imp__sub_82833260) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82833268;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82833290
	if (!ctx.cr6.eq) goto loc_82833290;
	// bl 0x8282b568
	ctx.lr = 0x8283328C;
	sub_8282B568(ctx, base);
	// b 0x82833294
	goto loc_82833294;
loc_82833290:
	// bl 0x8282dc70
	ctx.lr = 0x82833294;
	sub_8282DC70(ctx, base);
loc_82833294:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r25,r24,164
	ctx.r25.s64 = ctx.r24.s64 + 164;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f31,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x82832c80
	ctx.lr = 0x828332C0;
	sub_82832C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828332f0
	if (ctx.cr0.eq) goto loc_828332F0;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82832c80
	ctx.lr = 0x828332D0;
	sub_82832C80(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
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
	ctx.lr = 0x828332EC;
	sub_8283CDF8(ctx, base);
	// fmuls f31,f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64 * ctx.f31.f64));
loc_828332F0:
	// clrlwi r30,r31,16
	ctx.r30.u64 = ctx.r31.u32 & 0xFFFF;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r31,r30,-1
	ctx.r31.s64 = ctx.r30.s64 + -1;
	// extsw r10,r31
	ctx.r10.s64 = ctx.r31.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// fmadds f1,f30,f31,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 * ctx.f31.f64 + ctx.f0.f64));
	// bl 0x8283c678
	ctx.lr = 0x8283331C;
	sub_8283C678(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// addi r27,r11,-1
	ctx.r27.s64 = ctx.r11.s64 + -1;
	// clrlwi. r26,r27,16
	ctx.r26.u64 = ctx.r27.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82833344
	if (!ctx.cr0.eq) goto loc_82833344;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x828334e0
	goto loc_828334E0;
loc_82833344:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8283cdf8
	ctx.lr = 0x8283334C;
	sub_8283CDF8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// divw r10,r31,r11
	ctx.r10.s32 = ctx.r31.s32 / ctx.r11.s32;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82832c68
	ctx.lr = 0x8283337C;
	sub_82832C68(ctx, base);
	// subf r11,r31,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r31.s64;
	// fmuls f0,f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// ble cr6,0x828333ec
	if (!ctx.cr6.gt) goto loc_828333EC;
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// lfs f0,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// bl 0x8283cdf8
	ctx.lr = 0x828333E0;
	sub_8283CDF8(ctx, base);
	// lfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// b 0x8283341c
	goto loc_8283341C;
loc_828333EC:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lhz r11,94(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 94);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
loc_8283341C:
	// stfs f0,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82832c60
	ctx.lr = 0x82833428;
	sub_82832C60(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bne 0x82833438
	if (!ctx.cr0.eq) goto loc_82833438;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82833438:
	// lwz r11,188(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 188);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82833460
	if (!ctx.cr6.eq) goto loc_82833460;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82833458
	if (!ctx.cr6.eq) goto loc_82833458;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x8283345c
	goto loc_8283345C;
loc_82833458:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_8283345C:
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
loc_82833460:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82832c80
	ctx.lr = 0x82833468;
	sub_82832C80(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x828334e0
	if (ctx.cr0.eq) goto loc_828334E0;
	// addi r31,r28,-4
	ctx.r31.s64 = ctx.r28.s64 + -4;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82833478:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82832c80
	ctx.lr = 0x82833484;
	sub_82832C80(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,88(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x8283c678
	ctx.lr = 0x828334A4;
	sub_8283C678(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x828334d4
	if (!ctx.cr6.lt) goto loc_828334D4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f0,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f0,f30
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// bl 0x8283c678
	ctx.lr = 0x828334C8;
	sub_8283C678(ctx, base);
	// fctidz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_828334D4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// bne 0x82833478
	if (!ctx.cr0.eq) goto loc_82833478;
loc_828334E0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828334F0"))) PPC_WEAK_FUNC(sub_828334F0);
PPC_FUNC_IMPL(__imp__sub_828334F0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bl 0x82833260
	ctx.lr = 0x82833518;
	sub_82833260(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833528"))) PPC_WEAK_FUNC(sub_82833528);
PPC_FUNC_IMPL(__imp__sub_82833528) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82833538
	if (ctx.cr6.eq) goto loc_82833538;
	// b 0x82834760
	sub_82834760(ctx, base);
	return;
loc_82833538:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833540"))) PPC_WEAK_FUNC(sub_82833540);
PPC_FUNC_IMPL(__imp__sub_82833540) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,24(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82834770
	sub_82834770(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833560"))) PPC_WEAK_FUNC(sub_82833560);
PPC_FUNC_IMPL(__imp__sub_82833560) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82833564"))) PPC_WEAK_FUNC(sub_82833564);
PPC_FUNC_IMPL(__imp__sub_82833564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833568"))) PPC_WEAK_FUNC(sub_82833568);
PPC_FUNC_IMPL(__imp__sub_82833568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82833570;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82834b58
	ctx.lr = 0x8283359C;
	sub_82834B58(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834bc8
	ctx.lr = 0x828335A8;
	sub_82834BC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82834bc0
	ctx.lr = 0x828335B4;
	sub_82834BC0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82834bd8
	ctx.lr = 0x828335C0;
	sub_82834BD8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lhz r4,278(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 278);
	// bl 0x82834bb0
	ctx.lr = 0x828335CC;
	sub_82834BB0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x828335D4;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x828335e8
	if (ctx.cr6.lt) goto loc_828335E8;
	// bne cr6,0x828335f4
	if (!ctx.cr6.eq) goto loc_828335F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x828335ec
	goto loc_828335EC;
loc_828335E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828335EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834bb8
	ctx.lr = 0x828335F4;
	sub_82834BB8(ctx, base);
loc_828335F4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834be0
	ctx.lr = 0x82833608;
	sub_82834BE0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82833624
	if (ctx.cr6.eq) goto loc_82833624;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828345f8
	ctx.lr = 0x82833624;
	sub_828345F8(ctx, base);
loc_82833624:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833630"))) PPC_WEAK_FUNC(sub_82833630);
PPC_FUNC_IMPL(__imp__sub_82833630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82833638;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82834b58
	ctx.lr = 0x82833668;
	sub_82834B58(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834bc8
	ctx.lr = 0x82833674;
	sub_82834BC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82834bc0
	ctx.lr = 0x82833680;
	sub_82834BC0(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,28800
	ctx.r4.s64 = ctx.r11.s64 + 28800;
	// bl 0x82834ba0
	ctx.lr = 0x82833690;
	sub_82834BA0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,284(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// bl 0x82834bd8
	ctx.lr = 0x8283369C;
	sub_82834BD8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834ba8
	ctx.lr = 0x828336A8;
	sub_82834BA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834b90
	ctx.lr = 0x828336B4;
	sub_82834B90(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834bb0
	ctx.lr = 0x828336C0;
	sub_82834BB0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,156(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// bl 0x82834b98
	ctx.lr = 0x828336CC;
	sub_82834B98(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x828336D4;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x828336e8
	if (ctx.cr6.lt) goto loc_828336E8;
	// bne cr6,0x828336f4
	if (!ctx.cr6.eq) goto loc_828336F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x828336ec
	goto loc_828336EC;
loc_828336E8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_828336EC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834bb8
	ctx.lr = 0x828336F4;
	sub_82834BB8(ctx, base);
loc_828336F4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82834be0
	ctx.lr = 0x82833708;
	sub_82834BE0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82833724
	if (ctx.cr6.eq) goto loc_82833724;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828345f8
	ctx.lr = 0x82833724;
	sub_828345F8(ctx, base);
loc_82833724:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833730"))) PPC_WEAK_FUNC(sub_82833730);
PPC_FUNC_IMPL(__imp__sub_82833730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82833738;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82833768
	if (ctx.cr6.eq) goto loc_82833768;
loc_82833750:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8283b9e0
	ctx.lr = 0x8283375C;
	sub_8283B9E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82833750
	if (ctx.cr6.lt) goto loc_82833750;
loc_82833768:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833770"))) PPC_WEAK_FUNC(sub_82833770);
PPC_FUNC_IMPL(__imp__sub_82833770) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82833778;
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
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// lhz r10,262(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 262);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mullw r26,r11,r10
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x8282b3c8
	ctx.lr = 0x828337AC;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x828337d4
	if (ctx.cr6.lt) goto loc_828337D4;
	// bne cr6,0x828337f4
	if (!ctx.cr6.eq) goto loc_828337F4;
	// lhz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x828337d8
	goto loc_828337D8;
loc_828337D4:
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_828337D8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lhz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x828337fc
	goto loc_828337FC;
loc_828337F4:
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_828337FC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833804;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82833860
	if (ctx.cr6.lt) goto loc_82833860;
	// bne cr6,0x828338d8
	if (!ctx.cr6.eq) goto loc_828338D8;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828338ac
	if (ctx.cr6.eq) goto loc_828338AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r30,0
	ctx.r30.s64 = 0;
	// subf r29,r31,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r31.s64;
	// subf r28,r31,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r31.s64;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_8283382C:
	// lfs f4,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfsx f3,r29,r31
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82833030
	ctx.lr = 0x82833844;
	sub_82833030(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// stfsx f1,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x8283382c
	if (ctx.cr6.lt) goto loc_8283382C;
	// b 0x828338ac
	goto loc_828338AC;
loc_82833860:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828338ac
	if (ctx.cr6.eq) goto loc_828338AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r31,0
	ctx.r31.s64 = 0;
	// subf r30,r28,r29
	ctx.r30.s64 = ctx.r29.s64 - ctx.r28.s64;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82833878:
	// lfsx f3,r30,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	ctx.f3.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82833008
	ctx.lr = 0x82833890;
	sub_82833008(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stfs f1,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82833878
	if (ctx.cr6.lt) goto loc_82833878;
loc_828338AC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x828338d8
	if (ctx.cr6.eq) goto loc_828338D8;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x828338d8
	if (ctx.cr6.eq) goto loc_828338D8;
loc_828338C0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x8283b9e0
	ctx.lr = 0x828338CC;
	sub_8283B9E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x828338c0
	if (ctx.cr6.lt) goto loc_828338C0;
loc_828338D8:
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

__attribute__((alias("__imp__sub_828338E8"))) PPC_WEAK_FUNC(sub_828338E8);
PPC_FUNC_IMPL(__imp__sub_828338E8) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828338F0"))) PPC_WEAK_FUNC(sub_828338F0);
PPC_FUNC_IMPL(__imp__sub_828338F0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828338F8"))) PPC_WEAK_FUNC(sub_828338F8);
PPC_FUNC_IMPL(__imp__sub_828338F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82833900;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// clrlwi r29,r6,16
	ctx.r29.u64 = ctx.r6.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 * 48;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r28,128
	ctx.r28.s64 = 128;
	// bl 0x82a75988
	ctx.lr = 0x82833948;
	sub_82A75988(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x828339d4
	if (ctx.cr6.eq) goto loc_828339D4;
	// rlwinm r26,r26,2,14,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3FFFC;
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// li r25,16
	ctx.r25.s64 = 16;
loc_82833960:
	// cmplwi cr6,r28,128
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 128, ctx.xer);
	// blt cr6,0x82833974
	if (ctx.cr6.lt) goto loc_82833974;
	// addi r28,r28,-128
	ctx.r28.s64 = ctx.r28.s64 + -128;
	// li r11,256
	ctx.r11.s64 = 256;
	// dcbt r11,r31
loc_82833974:
	// li r11,32
	ctx.r11.s64 = 32;
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r25,r31
	temp.u32 = ctx.r25.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r10,44
	ctx.r10.s64 = 44;
	// li r9,28
	ctx.r9.s64 = 28;
	// vor v1,v0,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvlx v12,r25,r31
	temp.u32 = ctx.r25.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,-16
	ctx.r8.s64 = -16;
	// lvrx v0,r11,r31
	temp.u32 = ctx.r11.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v12,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvrx v13,r10,r31
	temp.u32 = ctx.r10.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v12,r9,r31
	temp.u32 = ctx.r9.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v12,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stvx128 v0,r30,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82837690
	ctx.lr = 0x828339B4;
	sub_82837690(ctx, base);
	// li r11,-32
	ctx.r11.s64 = -32;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// cmplw cr6,r27,r29
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r29.u32, ctx.xer);
	// stvx128 v1,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
	// blt cr6,0x82833960
	if (ctx.cr6.lt) goto loc_82833960;
loc_828339D4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828339DC"))) PPC_WEAK_FUNC(sub_828339DC);
PPC_FUNC_IMPL(__imp__sub_828339DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828339E0"))) PPC_WEAK_FUNC(sub_828339E0);
PPC_FUNC_IMPL(__imp__sub_828339E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x828339E8;
	__savegprlr_21(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r31
	// dcbt r9,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r30
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi r25,r7,16
	ctx.r25.u64 = ctx.r7.u32 & 0xFFFF;
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r5,r25,48
	ctx.r5.s64 = ctx.r25.s64 * 48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v127,v0,3
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r27,128
	ctx.r27.s64 = 128;
	// bl 0x82a75988
	ctx.lr = 0x82833A6C;
	sub_82A75988(ctx, base);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82833b54
	if (ctx.cr6.eq) goto loc_82833B54;
	// rlwinm r24,r28,2,14,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FFFC;
	// addi r28,r29,16
	ctx.r28.s64 = ctx.r29.s64 + 16;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r21,32
	ctx.r21.s64 = 32;
	// li r22,44
	ctx.r22.s64 = 44;
	// li r23,28
	ctx.r23.s64 = 28;
loc_82833A90:
	// cmplwi cr6,r27,128
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 128, ctx.xer);
	// blt cr6,0x82833aa8
	if (ctx.cr6.lt) goto loc_82833AA8;
	// addi r27,r27,-128
	ctx.r27.s64 = ctx.r27.s64 + -128;
	// li r11,256
	ctx.r11.s64 = 256;
	// dcbt r11,r31
	// dcbt r11,r30
loc_82833AA8:
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r29,r31
	temp.u32 = ctx.r29.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v1,v0,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// bl 0x82837690
	ctx.lr = 0x82833AB8;
	sub_82837690(ctx, base);
	// lvlx v0,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r29,r30
	temp.u32 = ctx.r29.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor v1,v0,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// bl 0x82837690
	ctx.lr = 0x82833ACC;
	sub_82837690(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v3,v127,v127
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82836430
	ctx.lr = 0x82833ADC;
	sub_82836430(ctx, base);
	// vmsum4fp128 v10,v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xFF));
	// lvlx v13,r29,r31
	temp.u32 = ctx.r29.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvrx v0,r21,r31
	temp.u32 = ctx.r21.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvrx v12,r22,r31
	temp.u32 = ctx.r22.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,r23,r31
	temp.u32 = ctx.r23.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r24,r27
	ctx.r27.u64 = ctx.r24.u64 + ctx.r27.u64;
	// vor v13,v13,v12
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvrx v11,r22,r30
	temp.u32 = ctx.r22.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v12,r23,r30
	temp.u32 = ctx.r23.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// vor v12,v12,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// lvrx v9,r21,r30
	temp.u32 = ctx.r21.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,r29,r30
	temp.u32 = ctx.r29.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r30,r24,r30
	ctx.r30.u64 = ctx.r24.u64 + ctx.r30.u64;
	// vor v11,v11,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// vsubfp v12,v12,v13
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v11,v11,v0
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vrsqrtefp v10,v10
	_mm_store_ps(ctx.v10.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v10.f32))));
	// vmaddfp128 v13,v127,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp128 v0,v127,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v1,v10
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v13,r28,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// blt cr6,0x82833a90
	if (ctx.cr6.lt) goto loc_82833A90;
loc_82833B54:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833B6C"))) PPC_WEAK_FUNC(sub_82833B6C);
PPC_FUNC_IMPL(__imp__sub_82833B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82833B70"))) PPC_WEAK_FUNC(sub_82833B70);
PPC_FUNC_IMPL(__imp__sub_82833B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82833B78;
	__savegprlr_19(ctx, base);
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82fac13c
	ctx.lr = 0x82833B80;
	__savevmx_121(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lhz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 0);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mullw r6,r10,r11
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r5,12(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// mullw r5,r5,r10
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r5,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r28,r6,r11
	ctx.r28.u64 = ctx.r6.u64 + ctx.r11.u64;
	// dcbt r10,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r29
	// dcbt r9,r11
	// dcbt r10,r31
	// dcbt r8,r11
	// dcbt r10,r30
	// dcbt r6,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r28
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stfs f1,156(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// clrlwi r20,r7,16
	ctx.r20.u64 = ctx.r7.u32 & 0xFFFF;
	// addi r10,r10,-19792
	ctx.r10.s64 = ctx.r10.s64 + -19792;
	// vspltisw v12,-1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// li r4,0
	ctx.r4.s64 = 0;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v127,v0,3
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v10,v127,v127
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32)));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v8,v13,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vupkd3d128 v11,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// vslw v12,v12,v12
	ctx.v12.u32[0] = ctx.v12.u32[0] << (ctx.v12.u8[0] & 0x1F);
	ctx.v12.u32[1] = ctx.v12.u32[1] << (ctx.v12.u8[4] & 0x1F);
	ctx.v12.u32[2] = ctx.v12.u32[2] << (ctx.v12.u8[8] & 0x1F);
	ctx.v12.u32[3] = ctx.v12.u32[3] << (ctx.v12.u8[12] & 0x1F);
	// vspltw v6,v0,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vpermwi128 v7,v0,64
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xBF));
	// vor128 v9,v127,v127
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mulli r5,r20,48
	ctx.r5.s64 = ctx.r20.s64 * 48;
	// vrlimi128 v8,v0,4,2
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 4));
	// vspltw v11,v11,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x0));
	// vxor v0,v0,v12
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsldoi v12,v6,v13,4
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vrlimi128 v7,v13,2,0
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 2));
	// vrlimi128 v9,v11,1,0
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 1));
	// vsldoi v13,v0,v13,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vrlimi128 v12,v11,4,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 4));
	// vrlimi128 v8,v0,8,3
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 8));
	// vmulfp128 v6,v127,v10
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v10.f32)));
	// vrlimi128 v7,v11,1,0
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 1));
	// vrlimi128 v9,v10,4,0
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 228), 4));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// li r24,128
	ctx.r24.s64 = 128;
	// vrlimi128 v9,v6,8,0
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 228), 8));
	// vmsum4fp128 v126,v9,v12
	_mm_store_ps(ctx.v126.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v125,v9,v7
	_mm_store_ps(ctx.v125.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v124,v9,v13
	_mm_store_ps(ctx.v124.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v123,v9,v8
	_mm_store_ps(ctx.v123.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// bl 0x82a75988
	ctx.lr = 0x82833C98;
	sub_82A75988(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82833de0
	if (ctx.cr6.eq) goto loc_82833DE0;
	// rlwinm r25,r26,2,14,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0x3FFFC;
	// addi r26,r27,16
	ctx.r26.s64 = ctx.r27.s64 + 16;
	// li r27,16
	ctx.r27.s64 = 16;
	// li r21,32
	ctx.r21.s64 = 32;
	// li r22,44
	ctx.r22.s64 = 44;
	// li r23,28
	ctx.r23.s64 = 28;
loc_82833CBC:
	// cmplwi cr6,r24,128
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 128, ctx.xer);
	// blt cr6,0x82833cdc
	if (ctx.cr6.lt) goto loc_82833CDC;
	// addi r24,r24,-128
	ctx.r24.s64 = ctx.r24.s64 + -128;
	// li r11,256
	ctx.r11.s64 = 256;
	// dcbt r11,r29
	// dcbt r11,r31
	// dcbt r11,r30
	// dcbt r11,r28
loc_82833CDC:
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r27,r31
	temp.u32 = ctx.r27.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v1,v0,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// bl 0x82837690
	ctx.lr = 0x82833CEC;
	sub_82837690(ctx, base);
	// lvlx v0,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v13,r27,r30
	temp.u32 = ctx.r27.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v122,v1,v1
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor v1,v0,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// bl 0x82837690
	ctx.lr = 0x82833D00;
	sub_82837690(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v3,v127,v127
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v1,v122,v122
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// bl 0x82836430
	ctx.lr = 0x82833D10;
	sub_82836430(ctx, base);
	// lvrx v0,r21,r28
	temp.u32 = ctx.r21.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,r27,r28
	temp.u32 = ctx.r27.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v122,v1,v1
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor v4,v13,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvrx v12,r21,r30
	temp.u32 = ctx.r21.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v11,r27,r30
	temp.u32 = ctx.r27.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v123,v123
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// lvrx v10,r21,r31
	temp.u32 = ctx.r21.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v7,v124,v124
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// lvlx v9,r27,r31
	temp.u32 = ctx.r27.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v125,v125
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lvrx v0,r21,r29
	temp.u32 = ctx.r21.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v3,v11,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx v13,r27,r29
	temp.u32 = ctx.r27.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v126,v126
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vor v2,v9,v10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vor v1,v13,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// bl 0x828358f0
	ctx.lr = 0x82833D58;
	sub_828358F0(ctx, base);
	// vmsum4fp128 v0,v122,v122
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v122.f32), 0xFF));
	// lvrx v13,r22,r28
	temp.u32 = ctx.r22.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v121,v1,v1
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvlx v12,r23,r28
	temp.u32 = ctx.r23.u32 + ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,-16
	ctx.r11.s64 = -16;
	// vor v4,v12,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvrx v11,r22,r30
	temp.u32 = ctx.r22.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v10,r23,r30
	temp.u32 = ctx.r23.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v8,v123,v123
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// lvrx v9,r22,r31
	temp.u32 = ctx.r22.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v7,v124,v124
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// lvlx v13,r23,r29
	temp.u32 = ctx.r23.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v125,v125
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lvlx v2,r23,r31
	temp.u32 = ctx.r23.u32 + ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v5,v126,v126
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvrx v1,r22,r29
	temp.u32 = ctx.r22.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v3,v10,v11
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vor v2,v2,v9
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vor v1,v13,v1
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vrsqrtefp v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v0.f32))));
	// vmulfp128 v0,v122,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r26,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x828358f0
	ctx.lr = 0x82833DB4;
	sub_828358F0(ctx, base);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stvx128 v121,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r26,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r24,r25,r24
	ctx.r24.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// addi r26,r26,48
	ctx.r26.s64 = ctx.r26.s64 + 48;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// cmplw cr6,r19,r20
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r20.u32, ctx.xer);
	// blt cr6,0x82833cbc
	if (ctx.cr6.lt) goto loc_82833CBC;
loc_82833DE0:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// addi r12,r1,-112
	ctx.r12.s64 = ctx.r1.s64 + -112;
	// bl 0x82fac3d4
	ctx.lr = 0x82833DEC;
	__restvmx_121(ctx, base);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82833DF0"))) PPC_WEAK_FUNC(sub_82833DF0);
PPC_FUNC_IMPL(__imp__sub_82833DF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82833DF8;
	__savegprlr_23(ctx, base);
	// stfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f30.u64);
	// stfd f31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82833e4c
	if (ctx.cr6.eq) goto loc_82833E4C;
	// clrlwi. r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x82833e4c
	if (ctx.cr0.eq) goto loc_82833E4C;
loc_82833E34:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8283b9e0
	ctx.lr = 0x82833E40;
	sub_8283B9E0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82833e34
	if (ctx.cr6.lt) goto loc_82833E34;
loc_82833E4C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833E54;
	sub_8282B3C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82833e78
	if (!ctx.cr0.eq) goto loc_82833E78;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lhz r7,294(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 294);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828338f8
	ctx.lr = 0x82833E74;
	sub_828338F8(ctx, base);
	// b 0x8283405c
	goto loc_8283405C;
loc_82833E78:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833E80;
	sub_8282B3C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82833ea8
	if (!ctx.cr6.eq) goto loc_82833EA8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lhz r8,294(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 294);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828339e0
	ctx.lr = 0x82833EA4;
	sub_828339E0(ctx, base);
	// b 0x8283405c
	goto loc_8283405C;
loc_82833EA8:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833EB0;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82833ed8
	if (ctx.cr6.lt) goto loc_82833ED8;
	// bne cr6,0x82833ef8
	if (!ctx.cr6.eq) goto loc_82833EF8;
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,8(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82833edc
	goto loc_82833EDC;
loc_82833ED8:
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82833EDC:
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82833f00
	goto loc_82833F00;
loc_82833EF8:
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r30,100(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_82833F00:
	// clrlwi. r24,r26,16
	ctx.r24.u64 = ctx.r26.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// beq 0x8283405c
	if (ctx.cr0.eq) goto loc_8283405C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lhz r26,294(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 294);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82833F1C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82833F20:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833F28;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82833f54
	if (ctx.cr6.lt) goto loc_82833F54;
	// bne cr6,0x82833f64
	if (!ctx.cr6.eq) goto loc_82833F64;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stfsx f0,r11,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// b 0x82833f60
	goto loc_82833F60;
loc_82833F54:
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r29
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
loc_82833F60:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82833F64:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82833f20
	if (ctx.cr6.lt) goto loc_82833F20;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833F7C;
	sub_8282B3C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bne 0x82833f90
	if (!ctx.cr0.eq) goto loc_82833F90;
	// bl 0x82833010
	ctx.lr = 0x82833F8C;
	sub_82833010(ctx, base);
	// b 0x82833fa4
	goto loc_82833FA4;
loc_82833F90:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r6,224
	ctx.r6.s64 = 224;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82833118
	ctx.lr = 0x82833FA4;
	sub_82833118(ctx, base);
loc_82833FA4:
	// li r11,4
	ctx.r11.s64 = 4;
	// cmplw cr6,r31,r26
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r26.u32, ctx.xer);
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bge cr6,0x82834044
	if (!ctx.cr6.lt) goto loc_82834044;
loc_82833FB4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82833FBC;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82833fe8
	if (ctx.cr6.lt) goto loc_82833FE8;
	// bne cr6,0x82834010
	if (!ctx.cr6.eq) goto loc_82834010;
	// lfs f4,0(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// lfs f3,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82833030
	ctx.lr = 0x82833FE0;
	sub_82833030(ctx, base);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// b 0x82834000
	goto loc_82834000;
loc_82833FE8:
	// lfs f3,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// fmr f5,f31
	ctx.f5.f64 = ctx.f31.f64;
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82833008
	ctx.lr = 0x82834000;
	sub_82833008(ctx, base);
loc_82834000:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stfsx f1,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r29.u32, temp.u32);
loc_82834010:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,6
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 6, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// bne cr6,0x82834030
	if (!ctx.cr6.eq) goto loc_82834030;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_82834030:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82833fb4
	if (ctx.cr6.lt) goto loc_82833FB4;
loc_82834044:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82833f1c
	if (ctx.cr6.lt) goto loc_82833F1C;
loc_8283405C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// lfd f31,-88(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283406C"))) PPC_WEAK_FUNC(sub_8283406C);
PPC_FUNC_IMPL(__imp__sub_8283406C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834070"))) PPC_WEAK_FUNC(sub_82834070);
PPC_FUNC_IMPL(__imp__sub_82834070) {
	PPC_FUNC_PROLOGUE();
	// li r11,8
	ctx.r11.s64 = 8;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283407C"))) PPC_WEAK_FUNC(sub_8283407C);
PPC_FUNC_IMPL(__imp__sub_8283407C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834080"))) PPC_WEAK_FUNC(sub_82834080);
PPC_FUNC_IMPL(__imp__sub_82834080) {
	PPC_FUNC_PROLOGUE();
	// li r11,4
	ctx.r11.s64 = 4;
	// sth r11,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283408C"))) PPC_WEAK_FUNC(sub_8283408C);
PPC_FUNC_IMPL(__imp__sub_8283408C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834090"))) PPC_WEAK_FUNC(sub_82834090);
PPC_FUNC_IMPL(__imp__sub_82834090) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x828340a0
	if (ctx.cr6.eq) goto loc_828340A0;
	// b 0x82838338
	sub_82838338(ctx, base);
	return;
loc_828340A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828340A8"))) PPC_WEAK_FUNC(sub_828340A8);
PPC_FUNC_IMPL(__imp__sub_828340A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x828383b8
	sub_828383B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828340C4"))) PPC_WEAK_FUNC(sub_828340C4);
PPC_FUNC_IMPL(__imp__sub_828340C4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828340C8"))) PPC_WEAK_FUNC(sub_828340C8);
PPC_FUNC_IMPL(__imp__sub_828340C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,24(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x828383b8
	sub_828383B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828340E4"))) PPC_WEAK_FUNC(sub_828340E4);
PPC_FUNC_IMPL(__imp__sub_828340E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828340E8"))) PPC_WEAK_FUNC(sub_828340E8);
PPC_FUNC_IMPL(__imp__sub_828340E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x828340F0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82839b50
	ctx.lr = 0x82834120;
	sub_82839B50(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839bc8
	ctx.lr = 0x8283412C;
	sub_82839BC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82839c28
	ctx.lr = 0x82834138;
	sub_82839C28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839be8
	ctx.lr = 0x82834144;
	sub_82839BE8(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839bd0
	ctx.lr = 0x82834150;
	sub_82839BD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839be0
	ctx.lr = 0x8283415C;
	sub_82839BE0(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,29088
	ctx.r4.s64 = ctx.r11.s64 + 29088;
	// bl 0x82839c18
	ctx.lr = 0x8283416C;
	sub_82839C18(ctx, base);
	// li r4,12
	ctx.r4.s64 = 12;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c20
	ctx.lr = 0x82834178;
	sub_82839C20(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c10
	ctx.lr = 0x82834184;
	sub_82839C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82837700
	ctx.lr = 0x82834190;
	sub_82837700(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,156(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	// bl 0x82839bc0
	ctx.lr = 0x8283419C;
	sub_82839BC0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x828341A4;
	sub_8282B3C8(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x828341d8
	if (ctx.cr6.lt) goto loc_828341D8;
	// bne cr6,0x828341f8
	if (!ctx.cr6.eq) goto loc_828341F8;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r27,r11,28848
	ctx.r27.s64 = ctx.r11.s64 + 28848;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82839bf0
	ctx.lr = 0x828341C4;
	sub_82839BF0(ctx, base);
	// addi r4,r27,192
	ctx.r4.s64 = ctx.r27.s64 + 192;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c00
	ctx.lr = 0x828341D0;
	sub_82839C00(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// b 0x828341f0
	goto loc_828341F0;
loc_828341D8:
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,28848
	ctx.r11.s64 = ctx.r11.s64 + 28848;
	// addi r4,r11,144
	ctx.r4.s64 = ctx.r11.s64 + 144;
	// bl 0x82839c00
	ctx.lr = 0x828341EC;
	sub_82839C00(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
loc_828341F0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c08
	ctx.lr = 0x828341F8;
	sub_82839C08(ctx, base);
loc_828341F8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283a7b8
	ctx.lr = 0x8283420C;
	sub_8283A7B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82834228
	if (ctx.cr6.eq) goto loc_82834228;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c30
	ctx.lr = 0x82834228;
	sub_82839C30(ctx, base);
loc_82834228:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82834234"))) PPC_WEAK_FUNC(sub_82834234);
PPC_FUNC_IMPL(__imp__sub_82834234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834238"))) PPC_WEAK_FUNC(sub_82834238);
PPC_FUNC_IMPL(__imp__sub_82834238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f13,f13,f3
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f3.f64));
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fmuls f13,f13,f2
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// stfs f13,0(r7)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283427C"))) PPC_WEAK_FUNC(sub_8283427C);
PPC_FUNC_IMPL(__imp__sub_8283427C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834280"))) PPC_WEAK_FUNC(sub_82834280);
PPC_FUNC_IMPL(__imp__sub_82834280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f1,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f13.f64));
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828342C0"))) PPC_WEAK_FUNC(sub_828342C0);
PPC_FUNC_IMPL(__imp__sub_828342C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,12(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// lfs f0,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// lfs f13,17892(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 17892);
	ctx.f13.f64 = double(temp.f32);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f11,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f11.f64 = double(temp.f32);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfs f12,25272(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 25272);
	ctx.f12.f64 = double(temp.f32);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fadds f9,f9,f3
	ctx.f9.f64 = double(float(ctx.f9.f64 + ctx.f3.f64));
	// fadds f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f3.f64));
	// fadds f8,f8,f3
	ctx.f8.f64 = double(float(ctx.f8.f64 + ctx.f3.f64));
	// fadds f10,f10,f3
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f3.f64));
	// fmuls f9,f9,f2
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f2.f64));
	// fmuls f7,f7,f2
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f2.f64));
	// fmuls f8,f8,f2
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f2.f64));
	// fmuls f10,f10,f2
	ctx.f10.f64 = double(float(ctx.f10.f64 * ctx.f2.f64));
	// fmuls f9,f9,f0
	ctx.f9.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f6,f8,f13
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fnmsubs f12,f10,f12,f7
	ctx.f12.f64 = double(float(-(ctx.f10.f64 * ctx.f12.f64 - ctx.f7.f64)));
	// fmsubs f11,f8,f11,f9
	ctx.f11.f64 = double(float(ctx.f8.f64 * ctx.f11.f64 - ctx.f9.f64));
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// fmsubs f13,f10,f13,f6
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 - ctx.f6.f64));
	// fmsubs f0,f8,f0,f5
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f13,f13,f9
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// fmadds f13,f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f0,f0,f1,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f10.f64));
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834394"))) PPC_WEAK_FUNC(sub_82834394);
PPC_FUNC_IMPL(__imp__sub_82834394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834398"))) PPC_WEAK_FUNC(sub_82834398);
PPC_FUNC_IMPL(__imp__sub_82834398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x828343A0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x82839b50
	ctx.lr = 0x828343D0;
	sub_82839B50(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839bc8
	ctx.lr = 0x828343DC;
	sub_82839BC8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82839c28
	ctx.lr = 0x828343E8;
	sub_82839C28(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839be8
	ctx.lr = 0x828343F4;
	sub_82839BE8(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c10
	ctx.lr = 0x82834400;
	sub_82839C10(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// bl 0x82837700
	ctx.lr = 0x8283440C;
	sub_82837700(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8282b3c8
	ctx.lr = 0x82834414;
	sub_8282B3C8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82834438
	if (!ctx.cr6.eq) goto loc_82834438;
	// lis r11,-32125
	ctx.r11.s64 = -2105344000;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,17024
	ctx.r4.s64 = ctx.r11.s64 + 17024;
	// bl 0x82839bf8
	ctx.lr = 0x8283442C;
	sub_82839BF8(ctx, base);
	// li r4,6
	ctx.r4.s64 = 6;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c08
	ctx.lr = 0x82834438;
	sub_82839C08(ctx, base);
loc_82834438:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8283a7b8
	ctx.lr = 0x8283444C;
	sub_8283A7B8(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82834468
	if (ctx.cr6.eq) goto loc_82834468;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82839c30
	ctx.lr = 0x82834468;
	sub_82839C30(ctx, base);
loc_82834468:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82834474"))) PPC_WEAK_FUNC(sub_82834474);
PPC_FUNC_IMPL(__imp__sub_82834474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834478"))) PPC_WEAK_FUNC(sub_82834478);
PPC_FUNC_IMPL(__imp__sub_82834478) {
	PPC_FUNC_PROLOGUE();
	// lhz r3,228(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834480"))) PPC_WEAK_FUNC(sub_82834480);
PPC_FUNC_IMPL(__imp__sub_82834480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82834488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,228(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 228);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x828344e0
	if (ctx.cr0.eq) goto loc_828344E0;
loc_828344A4:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8282f4c0
	ctx.lr = 0x828344BC;
	sub_8282F4C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x828344ec
	if (ctx.cr0.eq) goto loc_828344EC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// blt cr6,0x828344a4
	if (ctx.cr6.lt) goto loc_828344A4;
loc_828344E0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_828344E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_828344EC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x828344e4
	goto loc_828344E4;
}

__attribute__((alias("__imp__sub_828344F4"))) PPC_WEAK_FUNC(sub_828344F4);
PPC_FUNC_IMPL(__imp__sub_828344F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828344F8"))) PPC_WEAK_FUNC(sub_828344F8);
PPC_FUNC_IMPL(__imp__sub_828344F8) {
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
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8282f4c0
	ctx.lr = 0x82834518;
	sub_8282F4C0(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834530"))) PPC_WEAK_FUNC(sub_82834530);
PPC_FUNC_IMPL(__imp__sub_82834530) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8282f428
	ctx.lr = 0x8283454C;
	sub_8282F428(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bne 0x8283455c
	if (!ctx.cr0.eq) goto loc_8283455C;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_8283455C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283456C"))) PPC_WEAK_FUNC(sub_8283456C);
PPC_FUNC_IMPL(__imp__sub_8283456C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834570"))) PPC_WEAK_FUNC(sub_82834570);
PPC_FUNC_IMPL(__imp__sub_82834570) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8282f428
	ctx.lr = 0x8283458C;
	sub_8282F428(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8283459c
	if (!ctx.cr0.eq) goto loc_8283459C;
	// li r11,-1
	ctx.r11.s64 = -1;
loc_8283459C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828345B8"))) PPC_WEAK_FUNC(sub_828345B8);
PPC_FUNC_IMPL(__imp__sub_828345B8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// subfic r8,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r9,r7,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828345F4"))) PPC_WEAK_FUNC(sub_828345F4);
PPC_FUNC_IMPL(__imp__sub_828345F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828345F8"))) PPC_WEAK_FUNC(sub_828345F8);
PPC_FUNC_IMPL(__imp__sub_828345F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82834600;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// addi r23,r4,16
	ctx.r23.s64 = ctx.r4.s64 + 16;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82834758
	if (!ctx.cr6.gt) goto loc_82834758;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,3
	ctx.r22.s64 = 3;
loc_82834638:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x828346dc
	if (ctx.cr6.eq) goto loc_828346DC;
	// lwz r8,28(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 28);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8283465c
	if (ctx.cr6.eq) goto loc_8283465C;
	// lhzx r11,r25,r8
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r8.u32);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x828346c4
	if (!ctx.cr6.eq) goto loc_828346C4;
loc_8283465C:
	// lhz r9,10(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x828346c4
	if (ctx.cr0.eq) goto loc_828346C4;
loc_82834670:
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r6,r30,27
	ctx.r6.u64 = ctx.r30.u32 & 0x1F;
	// slw r5,r22,r6
	ctx.r5.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r6.u8 & 0x3F));
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// srw r11,r11,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r6.u8 & 0x3F));
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82834698
	if (ctx.cr6.eq) goto loc_82834698;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x8283469c
	if (!ctx.cr6.eq) goto loc_8283469C;
loc_82834698:
	// li r7,1
	ctx.r7.s64 = 1;
loc_8283469C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82834670
	if (ctx.cr6.lt) goto loc_82834670;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x828346c4
	if (ctx.cr6.eq) goto loc_828346C4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8283b9e0
	ctx.lr = 0x828346C0;
	sub_8283B9E0(ctx, base);
	// b 0x82834748
	goto loc_82834748;
loc_828346C4:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82834748
	if (!ctx.cr6.eq) goto loc_82834748;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8283ba38
	ctx.lr = 0x828346D8;
	sub_8283BA38(ctx, base);
	// b 0x82834748
	goto loc_82834748;
loc_828346DC:
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82834748
	if (ctx.cr0.eq) goto loc_82834748;
loc_828346EC:
	// rlwinm r11,r30,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// slw r9,r22,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r22.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r23.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82834724
	if (ctx.cr6.eq) goto loc_82834724;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82834724
	if (ctx.cr6.eq) goto loc_82834724;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8283ba38
	ctx.lr = 0x82834720;
	sub_8283BA38(ctx, base);
	// b 0x82834730
	goto loc_82834730;
loc_82834724:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8283b9e0
	ctx.lr = 0x82834730;
	sub_8283B9E0(ctx, base);
loc_82834730:
	// lhz r11,10(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828346ec
	if (ctx.cr6.lt) goto loc_828346EC;
loc_82834748:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82834638
	if (ctx.cr6.lt) goto loc_82834638;
loc_82834758:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82834760"))) PPC_WEAK_FUNC(sub_82834760);
PPC_FUNC_IMPL(__imp__sub_82834760) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283476C"))) PPC_WEAK_FUNC(sub_8283476C);
PPC_FUNC_IMPL(__imp__sub_8283476C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834770"))) PPC_WEAK_FUNC(sub_82834770);
PPC_FUNC_IMPL(__imp__sub_82834770) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm. r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82fa7cf0
	sub_82FA7CF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283478C"))) PPC_WEAK_FUNC(sub_8283478C);
PPC_FUNC_IMPL(__imp__sub_8283478C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834790"))) PPC_WEAK_FUNC(sub_82834790);
PPC_FUNC_IMPL(__imp__sub_82834790) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82834798;
	__savegprlr_19(ctx, base);
	// lwz r26,4(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r22,r4,16
	ctx.r22.s64 = ctx.r4.s64 + 16;
	// lwz r29,32(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// std r26,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r26.u64);
	// lfd f13,-160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ble cr6,0x82834948
	if (!ctx.cr6.gt) goto loc_82834948;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r27,r5,-4
	ctx.r27.s64 = ctx.r5.s64 + -4;
	// addi r11,r11,-12
	ctx.r11.s64 = ctx.r11.s64 + -12;
	// li r28,1
	ctx.r28.s64 = 1;
loc_828347E4:
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283480c
	if (ctx.cr6.eq) goto loc_8283480C;
	// lbzx r10,r10,r23
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r23.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8283480c
	if (!ctx.cr0.eq) goto loc_8283480C;
	// lhz r10,10(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r24,r10,r24
	ctx.r24.u64 = ctx.r10.u64 + ctx.r24.u64;
	// b 0x82834930
	goto loc_82834930;
loc_8283480C:
	// lhz r10,10(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82834930
	if (ctx.cr0.eq) goto loc_82834930;
loc_8283481C:
	// rlwinm r10,r24,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r24,27
	ctx.r9.u64 = ctx.r24.u32 & 0x1F;
	// li r8,3
	ctx.r8.s64 = 3;
	// slw r8,r8,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r22
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r22.u32);
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// srw. r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8283484c
	if (!ctx.cr0.eq) goto loc_8283484C;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rlwinm r9,r25,2,14,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0x3FFFC;
	// lfsx f0,r9,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82834b2c
	goto loc_82834B2C;
loc_8283484C:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x8283485c
	if (!ctx.cr6.eq) goto loc_8283485C;
	// lfsu f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// b 0x82834b2c
	goto loc_82834B2C;
loc_8283485C:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bne cr6,0x8283494c
	if (!ctx.cr6.eq) goto loc_8283494C;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// slw r7,r28,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r10.u8 & 0x3F));
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r5,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 29) & 0x1FFFFFFC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrlwi r5,r5,27
	ctx.r5.u64 = ctx.r5.u32 & 0x1F;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// subfic r30,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r5.s64;
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r5,r31,r30
	ctx.r5.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// or r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 | ctx.r9.u64;
	// and r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 & ctx.r7.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r9,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r9.u64);
	// lfd f0,-160(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// beq cr6,0x82834b28
	if (ctx.cr6.eq) goto loc_82834B28;
	// lwz r9,8(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lfs f10,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// subfic r8,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// slw r9,r5,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.r10.u64);
	// lfd f9,-120(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmadds f13,f9,f13,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
	// stfsu f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r27.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r27.u32 = ea;
loc_82834930:
	// addi r10,r23,1
	ctx.r10.s64 = ctx.r23.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x828347e4
	if (ctx.cr6.lt) goto loc_828347E4;
loc_82834948:
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_8283494C:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lhz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// subfic r31,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r31.s64 = 31 - ctx.r5.s64;
	// slw r8,r28,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r9,r9,r31
	ctx.r9.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// and r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 & ctx.r8.u64;
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x828349a8
	if (!ctx.cr6.lt) goto loc_828349A8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_828349A8:
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r31,r9,29,3,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r30,r9,27
	ctx.r30.u64 = ctx.r9.u32 & 0x1F;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subfic r21,r30,31
	ctx.xer.ca = ctx.r30.u32 <= 31;
	ctx.r21.s64 = 31 - ctx.r30.s64;
	// lwz r20,4(r9)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r20,r20,1,0,30
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r30.u8 & 0x3F));
	// slw r30,r20,r21
	ctx.r30.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r20.u32 << (ctx.r21.u8 & 0x3F));
	// b 0x82834a18
	goto loc_82834A18;
loc_828349DC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r31,r9,29,3,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r30,r9,27
	ctx.r30.u64 = ctx.r9.u32 & 0x1F;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lwz r21,4(r9)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfic r20,r30,31
	ctx.xer.ca = ctx.r30.u32 <= 31;
	ctx.r20.s64 = 31 - ctx.r30.s64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// srw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r30.u8 & 0x3F));
	// rlwinm r30,r21,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r30,r30,r20
	ctx.r30.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r20.u8 & 0x3F));
loc_82834A18:
	// lhz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// or r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 | ctx.r9.u64;
	// slw r31,r28,r8
	ctx.r31.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r8.u8 & 0x3F));
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// and r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 & ctx.r31.u64;
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x828349dc
	if (!ctx.cr6.lt) goto loc_828349DC;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r21,4(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfs f12,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// add r8,r31,r8
	ctx.r8.u64 = ctx.r31.u64 + ctx.r8.u64;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// rlwinm r31,r8,29,3,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r20,r8,27
	ctx.r20.u64 = ctx.r8.u32 & 0x1F;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// subfic r19,r20,31
	ctx.xer.ca = ctx.r20.u32 <= 31;
	ctx.r19.s64 = 31 - ctx.r20.s64;
	// slw r30,r28,r30
	ctx.r30.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r30.u8 & 0x3F));
	// lwz r21,4(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r21,r21,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r31,r31,r20
	ctx.r31.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r20.u8 & 0x3F));
	// slw r21,r21,r19
	ctx.r21.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r19.u8 & 0x3F));
	// or r31,r21,r31
	ctx.r31.u64 = ctx.r21.u64 | ctx.r31.u64;
	// and r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 & ctx.r30.u64;
	// clrldi r31,r31,32
	ctx.r31.u64 = ctx.r31.u64 & 0xFFFFFFFF;
	// std r31,-152(r1)
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.r31.u64);
	// lfd f0,-152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// beq cr6,0x82834b24
	if (ctx.cr6.eq) goto loc_82834B24;
	// clrldi r31,r5,32
	ctx.r31.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// subf r9,r5,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r5.s64;
	// std r31,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.r31.u64);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rlwinm r7,r8,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// std r9,-136(r1)
	PPC_STORE_U64(ctx.r1.u32 + -136, ctx.r9.u64);
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subfic r7,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r8.s64;
	// lwz r5,4(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r10,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r8.u8 & 0x3F));
	// lfd f10,-144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -144);
	// slw r9,r5,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r7.u8 & 0x3F));
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// lfd f9,-136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -136);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r10.u64);
	// lfd f8,-128(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fdivs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 / ctx.f9.f64));
	// frsp f9,f8
	ctx.f9.f64 = double(float(ctx.f8.f64));
	// fmadds f13,f9,f13,f12
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f10,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f10.f64 + ctx.f0.f64));
loc_82834B24:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82834B28:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82834B2C:
	// clrlwi r10,r25,16
	ctx.r10.u64 = ctx.r25.u32 & 0xFFFF;
	// stfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lhz r9,10(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 10);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// clrlwi r25,r10,16
	ctx.r25.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r25,r9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x8283481c
	if (ctx.cr6.lt) goto loc_8283481C;
	// b 0x82834930
	goto loc_82834930;
}

__attribute__((alias("__imp__sub_82834B54"))) PPC_WEAK_FUNC(sub_82834B54);
PPC_FUNC_IMPL(__imp__sub_82834B54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834B58"))) PPC_WEAK_FUNC(sub_82834B58);
PPC_FUNC_IMPL(__imp__sub_82834B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
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
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834B8C"))) PPC_WEAK_FUNC(sub_82834B8C);
PPC_FUNC_IMPL(__imp__sub_82834B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834B90"))) PPC_WEAK_FUNC(sub_82834B90);
PPC_FUNC_IMPL(__imp__sub_82834B90) {
	PPC_FUNC_PROLOGUE();
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834B98"))) PPC_WEAK_FUNC(sub_82834B98);
PPC_FUNC_IMPL(__imp__sub_82834B98) {
	PPC_FUNC_PROLOGUE();
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BA0"))) PPC_WEAK_FUNC(sub_82834BA0);
PPC_FUNC_IMPL(__imp__sub_82834BA0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BA8"))) PPC_WEAK_FUNC(sub_82834BA8);
PPC_FUNC_IMPL(__imp__sub_82834BA8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BB0"))) PPC_WEAK_FUNC(sub_82834BB0);
PPC_FUNC_IMPL(__imp__sub_82834BB0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BB8"))) PPC_WEAK_FUNC(sub_82834BB8);
PPC_FUNC_IMPL(__imp__sub_82834BB8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BC0"))) PPC_WEAK_FUNC(sub_82834BC0);
PPC_FUNC_IMPL(__imp__sub_82834BC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BC8"))) PPC_WEAK_FUNC(sub_82834BC8);
PPC_FUNC_IMPL(__imp__sub_82834BC8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BD4"))) PPC_WEAK_FUNC(sub_82834BD4);
PPC_FUNC_IMPL(__imp__sub_82834BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82834BD8"))) PPC_WEAK_FUNC(sub_82834BD8);
PPC_FUNC_IMPL(__imp__sub_82834BD8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82834BE0"))) PPC_WEAK_FUNC(sub_82834BE0);
PPC_FUNC_IMPL(__imp__sub_82834BE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82834BE8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d28
	ctx.lr = 0x82834BF0;
	__savefpr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r23,4(r6)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r17,0
	ctx.r17.s64 = 0;
	// lfs f0,16(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,32(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// std r23,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r23.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f29,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f29.f64 = double(temp.f32);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// fmr f31,f29
	ctx.f31.f64 = ctx.f29.f64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// addi r18,r4,16
	ctx.r18.s64 = ctx.r4.s64 + 16;
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// fadds f30,f13,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// ble cr6,0x828354a4
	if (!ctx.cr6.gt) goto loc_828354A4;
	// addi r31,r11,-12
	ctx.r31.s64 = ctx.r11.s64 + -12;
	// stw r17,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r17.u32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// li r15,3
	ctx.r15.s64 = 3;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
loc_82834C70:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// mr r27,r17
	ctx.r27.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82834c94
	if (ctx.cr6.eq) goto loc_82834C94;
	// lhzx r11,r11,r14
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r14.u32);
	// cmplw cr6,r11,r16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82835488
	if (!ctx.cr6.eq) goto loc_82835488;
	// addi r14,r14,2
	ctx.r14.s64 = ctx.r14.s64 + 2;
	// stw r14,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r14.u32);
loc_82834C94:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82834d1c
	if (ctx.cr6.eq) goto loc_82834D1C;
	// lbzx r11,r11,r16
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r16.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82834d1c
	if (!ctx.cr0.eq) goto loc_82834D1C;
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// lwz r4,24(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82a75220
	ctx.lr = 0x82834CC0;
	sub_82A75220(ctx, base);
	// lhz r10,10(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82835494
	if (ctx.cr0.eq) goto loc_82835494;
loc_82834CD0:
	// rlwinm r11,r19,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r19,27
	ctx.r8.u64 = ctx.r19.u32 & 0x1F;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// slw r7,r15,r8
	ctx.r7.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82834d08
	if (ctx.cr6.eq) goto loc_82834D08;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82834d08
	if (ctx.cr6.eq) goto loc_82834D08;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82834d0c
	if (!ctx.cr6.eq) goto loc_82834D0C;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82834D08:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_82834D0C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82834cd0
	if (ctx.cr6.lt) goto loc_82834CD0;
	// b 0x82835494
	goto loc_82835494;
loc_82834D1C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// mr r21,r17
	ctx.r21.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82835130
	if (ctx.cr6.eq) goto loc_82835130;
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// addi r4,r20,-4
	ctx.r4.s64 = ctx.r20.s64 + -4;
loc_82834D38:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828350e8
	if (!ctx.cr6.lt) goto loc_828350E8;
	// rlwinm r11,r19,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r19,27
	ctx.r10.u64 = ctx.r19.u32 & 0x1F;
	// slw r9,r15,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82834d88
	if (!ctx.cr0.eq) goto loc_82834D88;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r10,r1,200
	ctx.r10.s64 = ctx.r1.s64 + 200;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lfsx f0,r11,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r29,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stfsx f29,r29,r9
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r9.u32, temp.u32);
	// b 0x828350d4
	goto loc_828350D4;
loc_82834D88:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82834db4
	if (!ctx.cr6.eq) goto loc_82834DB4;
	// addi r11,r1,200
	ctx.r11.s64 = ctx.r1.s64 + 200;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// stfsx f0,r29,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, temp.u32);
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stfsx f29,r29,r10
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r10.u32, temp.u32);
	// b 0x828350d0
	goto loc_828350D0;
loc_82834DB4:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82834eb8
	if (!ctx.cr6.eq) goto loc_82834EB8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// slw r7,r30,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// mullw r8,r9,r11
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r9,r8,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r8,27
	ctx.r5.u64 = ctx.r8.u32 & 0x1F;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
	// subfic r3,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r5.s64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r7,4(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r7,r7,r3
	ctx.r7.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r3.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 & ctx.r9.u64;
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bne cr6,0x82834e48
	if (!ctx.cr6.eq) goto loc_82834E48;
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828350d0
	if (!ctx.cr6.eq) goto loc_828350D0;
	// b 0x82834eb0
	goto loc_82834EB0;
loc_82834E48:
	// lwz r8,8(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r8,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r8,r8,27
	ctx.r8.u64 = ctx.r8.u32 & 0x1F;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subfic r10,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r10.s64 = 31 - ctx.r8.s64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfs f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfs f31,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f31.f64 = double(temp.f32);
	// stfsx f31,r29,r6
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r6.u32, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r29,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, temp.u32);
loc_82834EB0:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// b 0x828350d0
	goto loc_828350D0;
loc_82834EB8:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// subfic r6,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r7.s64;
	// slw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// and r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82834f14
	if (!ctx.cr6.lt) goto loc_82834F14;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stw r17,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
loc_82834F14:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subfic r3,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r5.s64;
	// lwz r15,4(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r15,r15,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r5,r15,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r3.u8 & 0x3F));
	// b 0x82834f84
	goto loc_82834F84;
loc_82834F48:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r3,4(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subfic r15,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r15.s64 = 31 - ctx.r5.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r5,r3,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r5,r5,r15
	ctx.r5.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r15.u8 & 0x3F));
loc_82834F84:
	// lhz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// slw r6,r30,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82834f48
	if (!ctx.cr6.lt) goto loc_82834F48;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f13,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r15,4(r26)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// slw r3,r30,r5
	ctx.r3.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r5.u8 & 0x3F));
	// rlwinm r6,r9,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r14,r9,27
	ctx.r14.u64 = ctx.r9.u32 & 0x1F;
	// add r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subfic r6,r14,31
	ctx.xer.ca = ctx.r14.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r14.s64;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// addi r6,r3,-1
	ctx.r6.s64 = ctx.r3.s64 + -1;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r3,4(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r5,r5,r14
	ctx.r5.u64 = ctx.r14.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r14.u8 & 0x3F));
	// lwz r15,88(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r3,r3,r15
	ctx.r3.u64 = ctx.r15.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r15.u8 & 0x3F));
	// or r5,r3,r5
	ctx.r5.u64 = ctx.r3.u64 | ctx.r5.u64;
	// and r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 & ctx.r6.u64;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// std r5,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r5.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmadds f12,f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bne cr6,0x82835030
	if (!ctx.cr6.eq) goto loc_82835030;
	// stfs f12,4(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828350c4
	if (!ctx.cr6.eq) goto loc_828350C4;
	// b 0x828350c0
	goto loc_828350C0;
loc_82835030:
	// clrldi r5,r7,32
	ctx.r5.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r10,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r10.u64);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subfic r8,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// addi r7,r1,200
	ctx.r7.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stfsu f12,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
	// rlwinm r5,r5,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// slw r10,r5,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r8.u8 & 0x3F));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// lfd f11,136(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ctx.r6.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f12,f30,f12
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f12.f64));
	// fdivs f31,f12,f11
	ctx.f31.f64 = double(float(ctx.f12.f64 / ctx.f11.f64));
	// stfsx f31,r29,r3
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r3.u32, temp.u32);
	// frsp f12,f10
	ctx.f12.f64 = double(float(ctx.f10.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfsx f0,r29,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + ctx.r7.u32, temp.u32);
loc_828350C0:
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_828350C4:
	// lwz r14,80(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// li r15,3
	ctx.r15.s64 = 3;
loc_828350D0:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_828350D4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// blt cr6,0x82834d38
	if (ctx.cr6.lt) goto loc_82834D38;
loc_828350E8:
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stfsx f28,r11,r20
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r20.u32, temp.u32);
	// beq cr6,0x82835130
	if (ctx.cr6.eq) goto loc_82835130;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82835120
	if (!ctx.cr6.eq) goto loc_82835120;
	// lfs f0,12(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82835130
	if (!ctx.cr6.lt) goto loc_82835130;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,12(r20)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r20.u32 + 12, temp.u32);
	// b 0x82835130
	goto loc_82835130;
loc_82835120:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8283a8d8
	ctx.lr = 0x82835130;
	sub_8283A8D8(ctx, base);
loc_82835130:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82835488
	if (!ctx.cr6.lt) goto loc_82835488;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// addi r4,r11,-4
	ctx.r4.s64 = ctx.r11.s64 + -4;
loc_82835148:
	// rlwinm r11,r19,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r19,27
	ctx.r10.u64 = ctx.r19.u32 & 0x1F;
	// slw r9,r15,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r15.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r18
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// srw. r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82835174
	if (!ctx.cr0.eq) goto loc_82835174;
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r10,r21,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82835180
	goto loc_82835180;
loc_82835174:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8283518c
	if (!ctx.cr6.eq) goto loc_8283518C;
	// lfsu f0,16(r31)
	ctx.fpscr.disableFlushMode();
	ea = 16 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
loc_82835180:
	// stfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x8283545c
	goto loc_8283545C;
loc_8283518C:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82835268
	if (!ctx.cr6.eq) goto loc_82835268;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// slw r8,r30,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r11.u8 & 0x3F));
	// mullw r7,r10,r11
	ctx.r7.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r6,4(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// rlwinm r10,r7,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r7,r7,27
	ctx.r7.u64 = ctx.r7.u32 & 0x1F;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// subfic r5,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r5.s64 = 31 - ctx.r7.s64;
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r10,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r7.u8 & 0x3F));
	// slw r7,r6,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r5.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// and r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 & ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// lfd f0,152(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// beq cr6,0x8283525c
	if (ctx.cr6.eq) goto loc_8283525C;
	// lwz r10,8(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// lfs f11,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r10,r10,27
	ctx.r10.u64 = ctx.r10.u32 & 0x1F;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subfic r9,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r9.s64 = 31 - ctx.r10.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r10,r7,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r11.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f13,f10,f13,f12
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f11,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f11.f64 + ctx.f0.f64));
loc_8283525C:
	// stfs f0,4(r4)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82835458
	goto loc_82835458;
loc_82835268:
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// clrlwi r7,r9,27
	ctx.r7.u64 = ctx.r9.u32 & 0x1F;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// subfic r6,r7,31
	ctx.xer.ca = ctx.r7.u32 <= 31;
	ctx.r6.s64 = 31 - ctx.r7.s64;
	// slw r9,r30,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r10.u8 & 0x3F));
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm r8,r5,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r7.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,16
	ctx.r8.u64 = ctx.r10.u32 & 0xFFFF;
	// and r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 & ctx.r9.u64;
	// cmplw cr6,r23,r7
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x828352c4
	if (!ctx.cr6.lt) goto loc_828352C4;
	// mr r7,r17
	ctx.r7.u64 = ctx.r17.u64;
	// stw r17,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r17.u32);
loc_828352C4:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subfic r3,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r3.s64 = 31 - ctx.r5.s64;
	// lwz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r29,r29,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r10,r10,r5
	ctx.r10.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r5.u8 & 0x3F));
	// slw r5,r29,r3
	ctx.r5.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r3.u8 & 0x3F));
	// or r10,r5,r10
	ctx.r10.u64 = ctx.r5.u64 | ctx.r10.u64;
	// b 0x8283533c
	goto loc_8283533C;
loc_828352FC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r6,r10,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r5,r10,27
	ctx.r5.u64 = ctx.r10.u32 & 0x1F;
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subfic r29,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r29.s64 = 31 - ctx.r5.s64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// srw r5,r3,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r5.u8 & 0x3F));
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r29.u8 & 0x3F));
	// or r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 | ctx.r5.u64;
loc_8283533C:
	// lhz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 8);
	// slw r6,r30,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r9.u8 & 0x3F));
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x828352fc
	if (!ctx.cr6.lt) goto loc_828352FC;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lfs f13,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lfs f12,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// rlwinm r6,r9,29,3,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r9,27
	ctx.r29.u64 = ctx.r9.u32 & 0x1F;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// subfic r27,r29,31
	ctx.xer.ca = ctx.r29.u32 <= 31;
	ctx.r27.s64 = 31 - ctx.r29.s64;
	// slw r5,r30,r5
	ctx.r5.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r30.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// lwz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r6,r6,r29
	ctx.r6.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r29.u8 & 0x3F));
	// slw r3,r3,r27
	ctx.r3.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r27.u8 & 0x3F));
	// or r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 | ctx.r6.u64;
	// and r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 & ctx.r5.u64;
	// clrldi r6,r6,32
	ctx.r6.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// lfd f0,168(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmadds f0,f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f12.f64));
	// bne cr6,0x828353cc
	if (!ctx.cr6.eq) goto loc_828353CC;
	// stfs f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 4, temp.u32);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// b 0x82835454
	goto loc_82835454;
loc_828353CC:
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r8,r9,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r10,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r10.u64);
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subfic r8,r9,31
	ctx.xer.ca = ctx.r9.u32 <= 31;
	ctx.r8.s64 = 31 - ctx.r9.s64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// lfd f11,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// slw r10,r7,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f10,184(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f9,192(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fsubs f11,f30,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 - ctx.f11.f64));
	// fdivs f31,f11,f10
	ctx.f31.f64 = double(float(ctx.f11.f64 / ctx.f10.f64));
	// frsp f11,f9
	ctx.f11.f64 = double(float(ctx.f9.f64));
	// fmadds f13,f11,f13,f12
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fmadds f0,f13,f31,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f31.f64 + ctx.f0.f64));
	// stfsu f0,4(r4)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r4.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r4.u32 = ea;
loc_82835454:
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
loc_82835458:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
loc_8283545C:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82835478
	if (ctx.cr6.eq) goto loc_82835478;
	// cmplwi cr6,r21,5
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 5, ctx.xer);
	// bne cr6,0x82835478
	if (!ctx.cr6.eq) goto loc_82835478;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
loc_82835478:
	// lhz r11,10(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 10);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82835148
	if (ctx.cr6.lt) goto loc_82835148;
loc_82835488:
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r20,r11,r20
	ctx.r20.u64 = ctx.r11.u64 + ctx.r20.u64;
loc_82835494:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82834c70
	if (ctx.cr6.lt) goto loc_82834C70;
loc_828354A4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d74
	ctx.lr = 0x828354B0;
	__restfpr_28(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828354B4"))) PPC_WEAK_FUNC(sub_828354B4);
PPC_FUNC_IMPL(__imp__sub_828354B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828354B8"))) PPC_WEAK_FUNC(sub_828354B8);
PPC_FUNC_IMPL(__imp__sub_828354B8) {
	PPC_FUNC_PROLOGUE();
	// vor v0,v1,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vslb v13,v13,v0
	ctx.v13.u8[0] = ctx.v13.u8[0] << (ctx.v0.u8[0] & 0x7);
	ctx.v13.u8[1] = ctx.v13.u8[1] << (ctx.v0.u8[1] & 0x7);
	ctx.v13.u8[2] = ctx.v13.u8[2] << (ctx.v0.u8[2] & 0x7);
	ctx.v13.u8[3] = ctx.v13.u8[3] << (ctx.v0.u8[3] & 0x7);
	ctx.v13.u8[4] = ctx.v13.u8[4] << (ctx.v0.u8[4] & 0x7);
	ctx.v13.u8[5] = ctx.v13.u8[5] << (ctx.v0.u8[5] & 0x7);
	ctx.v13.u8[6] = ctx.v13.u8[6] << (ctx.v0.u8[6] & 0x7);
	ctx.v13.u8[7] = ctx.v13.u8[7] << (ctx.v0.u8[7] & 0x7);
	ctx.v13.u8[8] = ctx.v13.u8[8] << (ctx.v0.u8[8] & 0x7);
	ctx.v13.u8[9] = ctx.v13.u8[9] << (ctx.v0.u8[9] & 0x7);
	ctx.v13.u8[10] = ctx.v13.u8[10] << (ctx.v0.u8[10] & 0x7);
	ctx.v13.u8[11] = ctx.v13.u8[11] << (ctx.v0.u8[11] & 0x7);
	ctx.v13.u8[12] = ctx.v13.u8[12] << (ctx.v0.u8[12] & 0x7);
	ctx.v13.u8[13] = ctx.v13.u8[13] << (ctx.v0.u8[13] & 0x7);
	ctx.v13.u8[14] = ctx.v13.u8[14] << (ctx.v0.u8[14] & 0x7);
	ctx.v13.u8[15] = ctx.v13.u8[15] << (ctx.v0.u8[15] & 0x7);
	// vsrb v13,v13,v0
	// vaddubs v13,v13,v2
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vspltb v1,v13,15
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_set1_epi8(char(0x0))));
	// vaddsbs v13,v12,v1
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v12.s8), simd::load_i8(ctx.v1.s8)));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vxor v13,v13,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsr v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835504"))) PPC_WEAK_FUNC(sub_82835504);
PPC_FUNC_IMPL(__imp__sub_82835504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835508"))) PPC_WEAK_FUNC(sub_82835508);
PPC_FUNC_IMPL(__imp__sub_82835508) {
	PPC_FUNC_PROLOGUE();
	// vslo v0,v2,v1
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v1.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v0.v128 = simd::zero_i128();
	} else {
		ctx.v0.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v2.v128, 16 - shift);
	}
	// vsl v0,v0,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vsubuwm v1,v0,v2
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835518"))) PPC_WEAK_FUNC(sub_82835518);
PPC_FUNC_IMPL(__imp__sub_82835518) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835520"))) PPC_WEAK_FUNC(sub_82835520);
PPC_FUNC_IMPL(__imp__sub_82835520) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835528"))) PPC_WEAK_FUNC(sub_82835528);
PPC_FUNC_IMPL(__imp__sub_82835528) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82835530;
	__savegprlr_29(ctx, base);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r29,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r29.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r7,r10,27
	ctx.r7.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r9,r10,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	// rlwinm r10,r10,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r11,r11,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828355C0"))) PPC_WEAK_FUNC(sub_828355C0);
PPC_FUNC_IMPL(__imp__sub_828355C0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x828355C8;
	__savegprlr_21(ctx, base);
	// lhz r28,28(r3)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r3.u32 + 28);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lwz r5,4(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mullw r31,r11,r28
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lhz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lwz r27,12(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lhz r10,26(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 26);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mullw r30,r5,r28
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// lwz r5,124(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mullw r29,r29,r28
	ctx.r29.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// mullw r28,r27,r28
	ctx.r28.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r28.s32);
	// add r30,r30,r11
	ctx.r30.u64 = ctx.r30.u64 + ctx.r11.u64;
	// add r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r27,r31,r10
	ctx.r27.u64 = ctx.r31.u64 + ctx.r10.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r6,116(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r31,r29,r10
	ctx.r31.u64 = ctx.r29.u64 + ctx.r10.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r29,r27,r9
	ctx.r29.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r10,r30,r9
	ctx.r10.u64 = ctx.r30.u64 + ctx.r9.u64;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,3,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,3,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,3,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,3,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x18;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// stw r11,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// stw r11,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltb v0,v0,15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0x0))));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltb v0,v0,15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0x0))));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltb v0,v0,15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0x0))));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltb v0,v0,15
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0x0))));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283571C"))) PPC_WEAK_FUNC(sub_8283571C);
PPC_FUNC_IMPL(__imp__sub_8283571C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835720"))) PPC_WEAK_FUNC(sub_82835720);
PPC_FUNC_IMPL(__imp__sub_82835720) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17892(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 17892);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f5,f0
	ctx.f10.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f9,f2,f0
	ctx.f9.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// lfs f11,21500(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 21500);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f12,25272(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 25272);
	ctx.f12.f64 = double(temp.f32);
	// fnmsubs f12,f3,f12,f2
	ctx.f12.f64 = double(float(-(ctx.f3.f64 * ctx.f12.f64 - ctx.f2.f64)));
	// fmsubs f11,f4,f11,f10
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 - ctx.f10.f64));
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// fmsubs f13,f3,f13,f8
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f13.f64 - ctx.f8.f64));
	// fmsubs f0,f4,f0,f9
	ctx.f0.f64 = double(float(ctx.f4.f64 * ctx.f0.f64 - ctx.f9.f64));
	// fadds f12,f12,f11
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fadds f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f10.f64));
	// fmadds f13,f13,f1,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f12.f64));
	// fmadds f0,f13,f1,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f1.f64 + ctx.f0.f64));
	// fmadds f1,f0,f1,f3
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f1.f64 + ctx.f3.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835778"))) PPC_WEAK_FUNC(sub_82835778);
PPC_FUNC_IMPL(__imp__sub_82835778) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82835780;
	__savegprlr_20(ctx, base);
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,16
	ctx.r29.s64 = 16;
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r27,r11,29136
	ctx.r27.s64 = ctx.r11.s64 + 29136;
	// lwz r26,100(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r11,32
	ctx.r11.s64 = 32;
	// lwz r25,108(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r24,80
	ctx.r24.s64 = 80;
	// lwz r23,116(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// li r22,48
	ctx.r22.s64 = 48;
	// li r21,64
	ctx.r21.s64 = 64;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,16
	ctx.r4.s64 = 16;
	// lvx128 v0,r27,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// li r10,28
	ctx.r10.s64 = 28;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,12
	ctx.r29.s64 = 12;
	// lvx128 v0,r27,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r30,40
	ctx.r30.s64 = 40;
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r20,24
	ctx.r20.s64 = 24;
	// lvx128 v0,r27,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// li r28,48
	ctx.r28.s64 = 48;
	// stvx128 v0,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r27,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lvlx v13,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r4,r27
	temp.u32 = ctx.r4.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lvrx v0,r10,r5
	temp.u32 = ctx.r10.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,r29,r5
	temp.u32 = ctx.r29.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lvlx v13,r20,r10
	temp.u32 = ctx.r20.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lvlx v13,r4,r10
	temp.u32 = ctx.r4.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,84(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lvrx v0,r28,r10
	temp.u32 = ctx.r28.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v13,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82835864"))) PPC_WEAK_FUNC(sub_82835864);
PPC_FUNC_IMPL(__imp__sub_82835864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835868"))) PPC_WEAK_FUNC(sub_82835868);
PPC_FUNC_IMPL(__imp__sub_82835868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vmulfp128 v12,v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32)));
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vor v11,v1,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r11,r11,-19792
	ctx.r11.s64 = ctx.r11.s64 + -19792;
	// vupkd3d128 v10,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v10 = vTemp;
	// vor v9,v13,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vslw v8,v0,v0
	ctx.v8.u32[0] = ctx.v0.u32[0] << (ctx.v0.u8[0] & 0x1F);
	ctx.v8.u32[1] = ctx.v0.u32[1] << (ctx.v0.u8[4] & 0x1F);
	ctx.v8.u32[2] = ctx.v0.u32[2] << (ctx.v0.u8[8] & 0x1F);
	ctx.v8.u32[3] = ctx.v0.u32[3] << (ctx.v0.u8[12] & 0x1F);
	// vspltw v10,v10,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vxor v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vrlimi128 v9,v0,4,2
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 4));
	// vpermwi128 v7,v0,64
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xBF));
	// vspltw v0,v0,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v6,v1,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v12.f32)));
	// vrlimi128 v11,v10,1,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 228), 1));
	// vsldoi v5,v8,v13,4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vrlimi128 v7,v13,2,0
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 2));
	// vsldoi v0,v0,v13,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// vrlimi128 v9,v8,8,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 57), 8));
	// vrlimi128 v11,v12,4,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 228), 4));
	// vrlimi128 v7,v10,1,0
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 228), 1));
	// vrlimi128 v0,v10,4,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 228), 4));
	// vrlimi128 v11,v6,8,0
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 228), 8));
	// vmsum4fp128 v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v13,v11,v7
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vmsum4fp128 v12,v11,v5
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmsum4fp128 v11,v11,v9
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828358F0"))) PPC_WEAK_FUNC(sub_828358F0);
PPC_FUNC_IMPL(__imp__sub_828358F0) {
	PPC_FUNC_PROLOGUE();
	// vmulfp128 v0,v5,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v0,v6,v2,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v7,v3,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v1,v8,v4,v0
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v0.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82835904"))) PPC_WEAK_FUNC(sub_82835904);
PPC_FUNC_IMPL(__imp__sub_82835904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82835908"))) PPC_WEAK_FUNC(sub_82835908);
PPC_FUNC_IMPL(__imp__sub_82835908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82835910;
	__savegprlr_22(ctx, base);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r31,16
	ctx.r31.s64 = 16;
	// li r11,28
	ctx.r11.s64 = 28;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r8,40
	ctx.r8.s64 = 40;
	// li r7,24
	ctx.r7.s64 = 24;
	// lvrx v0,r31,r27
	temp.u32 = ctx.r31.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r9,r5,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// lvlx v13,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r29,r5,3,27,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x18;
	// vor v30,v13,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvlx v0,r10,r27
	temp.u32 = ctx.r10.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v12,r11,r27
	temp.u32 = ctx.r11.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v31,v0,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvrx v13,r8,r27
	temp.u32 = ctx.r8.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v0,r7,r27
	temp.u32 = ctx.r7.u32 + ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v29,v0,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// dcbt r0,r9
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// dcbt r0,r11
	// lwz r26,36(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// dcbt r0,r26
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// dcbt r0,r11
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// lhz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// li r24,32
	ctx.r24.s64 = 32;
	// stw r29,-100(r1)
	PPC_STORE_U32(ctx.r1.u32 + -100, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltb v13,v0,15
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_set1_epi8(char(0x0))));
	// beq 0x82836428
	if (ctx.cr0.eq) goto loc_82836428;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lhz r23,30(r3)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// addi r3,r6,16
	ctx.r3.s64 = ctx.r6.s64 + 16;
	// addi r11,r11,29136
	ctx.r11.s64 = ctx.r11.s64 + 29136;
	// vspltisw v2,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_set1_epi32(int(0x0)));
	// li r10,64
	ctx.r10.s64 = 64;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,32
	ctx.r7.s64 = 32;
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r25,-16
	ctx.r25.s64 = -16;
	// lvx128 v1,r11,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r28,-8192
	ctx.r28.s64 = -536870912;
	// lvx128 v0,r11,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r11,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r11,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
loc_828359D8:
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// blt cr6,0x82835a0c
	if (ctx.cr6.lt) goto loc_82835A0C;
	// addi r24,r24,-32
	ctx.r24.s64 = ctx.r24.s64 + -32;
	// addi r11,r3,-16
	ctx.r11.s64 = ctx.r3.s64 + -16;
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r9
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// dcbt r10,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// dcbt r11,r10
loc_82835A0C:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v11,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// vor v11,v12,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// lwzx r8,r26,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r30.u32);
	// add r7,r26,r30
	ctx.r7.u64 = ctx.r26.u64 + ctx.r30.u64;
	// lvx128 v6,r3,r25
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// rlwinm r6,r8,0,0,5
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFC000000;
	// vor v10,v2,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// lvrx v12,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r7,0
	ctx.r7.s64 = 0;
	// vor v8,v9,v12
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v12,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// vor v12,v9,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vpermwi128 v9,v11,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x1B));
	// vor v11,v2,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vupkhsh v8,v8
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v8.s16))));
	// vpermwi128 v8,v8,228
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x1B));
	// bne cr6,0x82835b3c
	if (!ctx.cr6.eq) goto loc_82835B3C;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v27,v10,v10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// vslo v26,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vspltb v25,v12,0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vaddsbs v10,v13,v7
	simd::store_i8(ctx.v10.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vsl v7,v26,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vor v13,v25,v25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v25.u8));
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vspltb v26,v12,0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v25,v9,v10
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vsubuwm v7,v7,v0
	// vslo v24,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v24.v128 = simd::zero_i128();
	} else {
		ctx.v24.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vaddsbs v23,v10,v13
	simd::store_i8(ctx.v23.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vsr v25,v25,v10
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v28,v24,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vor v13,v26,v26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v26.u8));
	// vor v10,v23,v23
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vsubuwm v28,v28,v0
	// vslo v26,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsro v9,v9,v10
	// vrlimi128 v27,v7,8,3
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
	// vpermwi128 v7,v8,198
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vand v28,v25,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vsl v26,v26,v13
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v9,v9,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddsbs v13,v10,v13
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vaddsws v8,v28,v8
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v28), simd::to_vec128i(ctx.v8)));
	// vsubuwm v28,v26,v0
	// vrlimi128 v27,v8,4,2
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 4));
	// vand v10,v9,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v9,v27,v27
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v27.u8));
	// vaddsws v10,v10,v7
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v7)));
	// vrlimi128 v9,v10,2,1
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 147), 2));
	// vor v10,v9,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// b 0x82835c30
	goto loc_82835C30;
loc_82835B3C:
	// rlwinm. r6,r8,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82835b8c
	if (ctx.cr0.eq) goto loc_82835B8C;
	// rlwinm. r6,r8,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82835b84
	if (!ctx.cr0.eq) goto loc_82835B84;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,8,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
loc_82835B84:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82835B8C:
	// rlwinm. r6,r8,0,1,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82835be0
	if (ctx.cr0.eq) goto loc_82835BE0;
	// rlwinm. r6,r8,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82835bd8
	if (!ctx.cr0.eq) goto loc_82835BD8;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,4,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 4));
loc_82835BD8:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82835BE0:
	// rlwinm. r6,r8,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82835c30
	if (ctx.cr0.eq) goto loc_82835C30;
	// rlwinm. r6,r8,0,5,5
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82835c2c
	if (!ctx.cr0.eq) goto loc_82835C2C;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v9,v9,v13
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// vslo v28,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v28.v128 = simd::zero_i128();
	} else {
		ctx.v28.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v9,v9,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v9,v9,v8
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v9,2,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
loc_82835C2C:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82835C30:
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v10.u32)));
	// vupkd3d128 v8,v2,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v2.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v2.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v8 = vTemp;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// vand v13,v13,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// rlwinm r6,r8,0,6,7
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x3000000;
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// rlwinm r5,r7,29,3,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// vspltw v8,v8,3
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x0));
	// lis r22,256
	ctx.r22.s64 = 16777216;
	// clrlwi r29,r7,27
	ctx.r29.u64 = ctx.r7.u32 & 0x1F;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// vmulfp128 v10,v30,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v10.f32)));
	// vsel v11,v6,v10,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// vmsum3fp128 v10,v11,v11
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vor v7,v11,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vsubfp v11,v8,v10
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaxfp v10,v11,v2
	_mm_store_ps(ctx.v10.f32, _mm_max_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v2.f32)));
	// vrsqrtefp v8,v10
	_mm_store_ps(ctx.v8.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v10.f32))));
	// vor v11,v10,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vcmpeqfp v9,v10,v2
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v10,v8,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vsel v9,v10,v11,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vrlimi128 v7,v9,1,0
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 228), 1));
	// stvx128 v7,r3,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82835ef0
	if (ctx.cr6.eq) goto loc_82835EF0;
	// lis r7,512
	ctx.r7.s64 = 33554432;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82836010
	if (ctx.cr6.eq) goto loc_82836010;
	// lis r7,768
	ctx.r7.s64 = 50331648;
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82836368
	if (!ctx.cr6.eq) goto loc_82836368;
	// lvrx v9,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v10,v2,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vor v11,v11,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvrx v8,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r8,0,0,5
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFC000000;
	// vor v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// vupkhsh v8,v11
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16))));
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// vor v11,v2,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// vpermwi128 v9,v9,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// vpermwi128 v8,v8,228
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x1B));
	// bne cr6,0x82835dd0
	if (!ctx.cr6.eq) goto loc_82835DD0;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v27,v10,v10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lbz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r6,r10,6
	ctx.r6.s64 = ctx.r10.s64 + 6;
	// vslo v26,v0,v7
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vspltb v25,v12,0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vaddsbs v10,v13,v7
	simd::store_i8(ctx.v10.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// vsl v7,v26,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vor v13,v25,v25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v25.u8));
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// vspltb v26,v12,0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v25,v9,v10
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vsubuwm v7,v7,v0
	// vslo v24,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v24.v128 = simd::zero_i128();
	} else {
		ctx.v24.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vaddsbs v23,v10,v13
	simd::store_i8(ctx.v23.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vsr v25,v25,v10
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v28,v24,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vor v13,v26,v26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v26.u8));
	// vor v10,v23,v23
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vsubuwm v28,v28,v0
	// vslo v26,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsro v9,v9,v10
	// vrlimi128 v27,v7,8,3
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
	// vpermwi128 v7,v8,198
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vand v28,v25,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vsl v26,v26,v13
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v9,v9,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddsbs v13,v10,v13
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vaddsws v8,v28,v8
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v28), simd::to_vec128i(ctx.v8)));
	// vsubuwm v28,v26,v0
	// vrlimi128 v27,v8,4,2
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 4));
	// vand v10,v9,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v9,v27,v27
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v27.u8));
	// vaddsws v10,v10,v7
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v7)));
	// vrlimi128 v9,v10,2,1
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 147), 2));
	// vor v10,v9,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// b 0x82835ec4
	goto loc_82835EC4;
loc_82835DD0:
	// rlwinm. r5,r8,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82835e20
	if (ctx.cr0.eq) goto loc_82835E20;
	// rlwinm. r6,r8,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82835e18
	if (!ctx.cr0.eq) goto loc_82835E18;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,8,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
loc_82835E18:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r6,r10,2
	ctx.r6.s64 = ctx.r10.s64 + 2;
loc_82835E20:
	// rlwinm. r10,r8,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82835e74
	if (ctx.cr0.eq) goto loc_82835E74;
	// rlwinm. r10,r8,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82835e6c
	if (!ctx.cr0.eq) goto loc_82835E6C;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,4,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 4));
loc_82835E6C:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_82835E74:
	// rlwinm. r10,r8,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82835ec4
	if (ctx.cr0.eq) goto loc_82835EC4;
	// rlwinm. r10,r8,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82835ec0
	if (!ctx.cr0.eq) goto loc_82835EC0;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v9,v9,v13
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vslo v28,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v28.v128 = simd::zero_i128();
	} else {
		ctx.v28.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v9,v9,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v9,v9,v8
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v9,2,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
loc_82835EC0:
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
loc_82835EC4:
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v10.u32)));
	// add r10,r7,r29
	ctx.r10.u64 = ctx.r7.u64 + ctx.r29.u64;
	// vand v13,v13,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// stw r6,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r6.u32);
	// rlwinm r7,r10,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vmulfp128 v10,v31,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v10.f32)));
	// vsel v11,v6,v10,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82835EF0:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v10,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r7,r8,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// vor v9,v11,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// rlwinm r6,r7,0,0,5
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFC000000;
	// lvx128 v6,r3,r31
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// vor v10,v2,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lvrx v11,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// li r8,0
	ctx.r8.s64 = 0;
	// lvlx v8,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplw cr6,r6,r28
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r28.u32, ctx.xer);
	// vor v8,v8,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vpermwi128 v9,v9,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// vor v11,v2,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vupkhsh v8,v8
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v8.s16))));
	// vpermwi128 v8,v8,228
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x1B));
	// bne cr6,0x82836248
	if (!ctx.cr6.eq) goto loc_82836248;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v27,v10,v10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r6,1(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// vslo v26,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vspltb v25,v12,0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vaddsbs v10,v13,v7
	simd::store_i8(ctx.v10.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vsl v7,v26,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vor v13,v25,v25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v25.u8));
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// vspltb v26,v12,0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v25,v9,v10
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vsubuwm v7,v7,v0
	// vslo v24,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v24.v128 = simd::zero_i128();
	} else {
		ctx.v24.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vaddsbs v23,v10,v13
	simd::store_i8(ctx.v23.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vsr v25,v25,v10
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v28,v24,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vor v13,v26,v26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v26.u8));
	// vor v10,v23,v23
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vsubuwm v28,v28,v0
	// vslo v26,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsro v9,v9,v10
	// vrlimi128 v27,v7,8,3
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
	// vpermwi128 v7,v8,198
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vand v28,v25,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vsl v26,v26,v13
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v9,v9,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddsbs v13,v10,v13
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vaddsws v8,v28,v8
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v28), simd::to_vec128i(ctx.v8)));
	// vsubuwm v28,v26,v0
	// vrlimi128 v27,v8,4,2
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 4));
	// vand v10,v9,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v9,v27,v27
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v27.u8));
	// vaddsws v10,v10,v7
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v7)));
	// vrlimi128 v9,v10,2,1
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 147), 2));
	// vor v10,v9,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// b 0x8283633c
	goto loc_8283633C;
loc_82836010:
	// lvrx v9,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r6,r8,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v10,v2,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vor v11,v11,v9
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvrx v8,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r6,0,0,5
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFC000000;
	// vor v9,v9,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// vupkhsh v8,v11
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16))));
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// vor v11,v2,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// vpermwi128 v9,v9,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// vpermwi128 v8,v8,228
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x1B));
	// bne cr6,0x8283612c
	if (!ctx.cr6.eq) goto loc_8283612C;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v27,v10,v10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r7,r10,6
	ctx.r7.s64 = ctx.r10.s64 + 6;
	// vslo v26,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vspltb v25,v12,0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vaddsbs v10,v13,v7
	simd::store_i8(ctx.v10.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// vsl v7,v26,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// vor v13,v25,v25
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v25.u8));
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vspltb v26,v12,0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v25,v9,v10
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vsubuwm v7,v7,v0
	// vslo v24,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v24.v128 = simd::zero_i128();
	} else {
		ctx.v24.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vaddsbs v23,v10,v13
	simd::store_i8(ctx.v23.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vsr v25,v25,v10
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v28,v24,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vor v13,v26,v26
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v26.u8));
	// vor v10,v23,v23
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vsubuwm v28,v28,v0
	// vslo v26,v0,v13
	simd::vec128i shift_amt = simd::srli_i16(ctx.v13.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v26.v128 = simd::zero_i128();
	} else {
		ctx.v26.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsro v9,v9,v10
	// vrlimi128 v27,v7,8,3
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
	// vpermwi128 v7,v8,198
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// vand v28,v25,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vsl v26,v26,v13
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v9,v9,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddsbs v13,v10,v13
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v10.s8), simd::load_i8(ctx.v13.s8)));
	// vaddsws v8,v28,v8
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v28), simd::to_vec128i(ctx.v8)));
	// vsubuwm v28,v26,v0
	// vrlimi128 v27,v8,4,2
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 78), 4));
	// vand v10,v9,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v9,v27,v27
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v27.u8));
	// vaddsws v10,v10,v7
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v7)));
	// vrlimi128 v9,v10,2,1
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 147), 2));
	// vor v10,v9,v9
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// b 0x82836220
	goto loc_82836220;
loc_8283612C:
	// rlwinm. r5,r6,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x8283617c
	if (ctx.cr0.eq) goto loc_8283617C;
	// rlwinm. r7,r6,0,3,3
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82836174
	if (!ctx.cr0.eq) goto loc_82836174;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,8,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
loc_82836174:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r7,r10,2
	ctx.r7.s64 = ctx.r10.s64 + 2;
loc_8283617C:
	// rlwinm. r10,r6,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828361d0
	if (ctx.cr0.eq) goto loc_828361D0;
	// rlwinm. r10,r6,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x828361c8
	if (!ctx.cr0.eq) goto loc_828361C8;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,4,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 4));
loc_828361C8:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_828361D0:
	// rlwinm. r10,r6,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82836220
	if (ctx.cr0.eq) goto loc_82836220;
	// rlwinm. r10,r6,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8283621c
	if (!ctx.cr0.eq) goto loc_8283621C;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v9,v9,v13
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vslo v28,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v28.v128 = simd::zero_i128();
	} else {
		ctx.v28.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v9,v9,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v9,v9,v8
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v9,2,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
loc_8283621C:
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
loc_82836220:
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v10.u32)));
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// rlwinm r8,r10,29,3,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r10,27
	ctx.r29.u64 = ctx.r10.u32 & 0x1F;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// vmulfp128 v10,v31,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v10.f32)));
	// vsel v11,v6,v10,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82836360
	goto loc_82836360;
loc_82836248:
	// rlwinm. r6,r7,0,0,0
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82836298
	if (ctx.cr0.eq) goto loc_82836298;
	// rlwinm. r6,r7,0,3,3
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82836290
	if (!ctx.cr0.eq) goto loc_82836290;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,8,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
loc_82836290:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_82836298:
	// rlwinm. r6,r7,0,1,1
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x828362ec
	if (ctx.cr0.eq) goto loc_828362EC;
	// rlwinm. r6,r7,0,4,4
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x828362e4
	if (!ctx.cr0.eq) goto loc_828362E4;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v28,v9,v13
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v3
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// vslo v27,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v27,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v7,v8
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v7,4,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 4));
loc_828362E4:
	// vpermwi128 v8,v8,198
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x39));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_828362EC:
	// rlwinm. r6,r7,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x8283633c
	if (ctx.cr0.eq) goto loc_8283633C;
	// rlwinm. r7,r7,0,5,5
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82836338
	if (!ctx.cr0.eq) goto loc_82836338;
	// vspltb v7,v12,0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// vsro v9,v9,v13
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// vsldoi v12,v12,v12,1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v12.u8), 15));
	// vor v11,v11,v4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// vslo v28,v0,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v28.v128 = simd::zero_i128();
	} else {
		ctx.v28.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v0.v128, 16 - shift);
	}
	// vsr v9,v9,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddsbs v13,v13,v7
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v7.s8)));
	// vsl v7,v28,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v7,v0
	// vand v9,v9,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v9,v9,v8
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v8)));
	// vrlimi128 v10,v9,2,1
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
loc_82836338:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
loc_8283633C:
	// vcfsx v10,v10,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v10.u32)));
	// add r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 + ctx.r29.u64;
	// stw r10,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r10.u32);
	// rlwinm r7,r8,29,3,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r29,r8,27
	ctx.r29.u64 = ctx.r8.u32 & 0x1F;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// vmulfp128 v10,v29,v10
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v10.f32)));
	// vsel v11,v6,v10,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8))));
	// stvx128 v11,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82836360:
	// stw r11,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r11.u32);
	// vand v13,v13,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
loc_82836368:
	// cmplwi cr6,r23,10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 10, ctx.xer);
	// bne cr6,0x8283641c
	if (!ctx.cr6.eq) goto loc_8283641C;
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8283641c
	if (ctx.cr0.eq) goto loc_8283641C;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82836410
	if (!ctx.cr0.eq) goto loc_82836410;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// lwz r10,48(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r5,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r5.s64 = 31 - ctx.r11.s64;
	// lwz r22,40(r4)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// srw r6,r6,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 >> (ctx.r11.u8 & 0x3F));
	// vspltb v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_set1_epi8(char(0xF))));
	// slw r8,r8,r5
	ctx.r8.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// or r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 | ctx.r6.u64;
	// lha r22,0(r22)
	ctx.r22.s64 = int16_t(PPC_LOAD_U16(ctx.r22.u32 + 0));
	// slw r8,r7,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// vaddsbs v13,v13,v12
	simd::store_i8(ctx.v13.s8, simd::add_saturate_i8(simd::load_i8(ctx.v13.s8), simd::load_i8(ctx.v12.s8)));
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// lfs f0,36(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f0.f64 = double(temp.f32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// vand v13,v13,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// stw r7,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r7.u32);
	// clrldi r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// std r8,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.r8.u64);
	// lfd f13,-112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,28(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 28, temp.u32);
loc_82836410:
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
loc_8283641C:
	// addi r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 + 48;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// bdnz 0x828359d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828359D8;
loc_82836428:
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283642C"))) PPC_WEAK_FUNC(sub_8283642C);
PPC_FUNC_IMPL(__imp__sub_8283642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82836430"))) PPC_WEAK_FUNC(sub_82836430);
PPC_FUNC_IMPL(__imp__sub_82836430) {
	PPC_FUNC_PROLOGUE();
	PPCVRegister vTemp{};
	// vspltisw v13,-1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// vmsum4fp128 v12,v1,v2
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32), 0xFF));
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// vslw v13,v13,v13
	ctx.v13.u32[0] = ctx.v13.u32[0] << (ctx.v13.u8[0] & 0x1F);
	ctx.v13.u32[1] = ctx.v13.u32[1] << (ctx.v13.u8[4] & 0x1F);
	ctx.v13.u32[2] = ctx.v13.u32[2] << (ctx.v13.u8[8] & 0x1F);
	ctx.v13.u32[3] = ctx.v13.u32[3] << (ctx.v13.u8[12] & 0x1F);
	// vupkd3d128 v10,v11,0
	vTemp.u32[0] = ctx.v11.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v11.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v11.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v11.u8[2] | 0x3F800000;
	ctx.v10 = vTemp;
	// vxor v13,v3,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddfp v10,v13,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpgefp v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v11,v10,v1
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v1.f32)));
	// vsel v12,v3,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v3.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmaddfp v1,v12,v2,v11
	_mm_store_ps(ctx.v1.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v11.f32)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82836460"))) PPC_WEAK_FUNC(sub_82836460);
PPC_FUNC_IMPL(__imp__sub_82836460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82836468;
	__savegprlr_17(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vspltisw v23,0
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// addi r24,r1,192
	ctx.r24.s64 = ctx.r1.s64 + 192;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lis r10,-31976
	ctx.r10.s64 = -2095579136;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r10,29136
	ctx.r10.s64 = ctx.r10.s64 + 29136;
	// vor v20,v23,v23
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// vor v19,v23,v23
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvx128 v13,r10,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r8,80
	ctx.r8.s64 = 80;
	// li r7,48
	ctx.r7.s64 = 48;
	// li r6,64
	ctx.r6.s64 = 64;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r1,272
	ctx.r28.s64 = ctx.r1.s64 + 272;
	// lvx128 v12,r10,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r27,r1,208
	ctx.r27.s64 = ctx.r1.s64 + 208;
	// lvx128 v11,r10,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r25,r1,240
	ctx.r25.s64 = ctx.r1.s64 + 240;
	// lvx128 v10,r10,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r10,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// addi r9,r1,416
	ctx.r9.s64 = ctx.r1.s64 + 416;
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,448
	ctx.r8.s64 = ctx.r1.s64 + 448;
	// stvx128 v11,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// stvx128 v10,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,432
	ctx.r6.s64 = ctx.r1.s64 + 432;
	// stvx128 v9,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82835778
	ctx.lr = 0x82836534;
	sub_82835778(ctx, base);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r7,r1,152
	ctx.r7.s64 = ctx.r1.s64 + 152;
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// addi r9,r1,156
	ctx.r9.s64 = ctx.r1.s64 + 156;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r8,r1,140
	ctx.r8.s64 = ctx.r1.s64 + 140;
	// addi r7,r1,136
	ctx.r7.s64 = ctx.r1.s64 + 136;
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x828355c0
	ctx.lr = 0x82836584;
	sub_828355C0(ctx, base);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// dcbt r0,r7
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// dcbt r0,r9
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// dcbt r0,r10
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// dcbt r0,r8
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// dcbt r0,r11
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// dcbt r0,r11
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// dcbt r0,r11
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// vspltisb v4,4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_set1_epi8(char(0x4)));
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// vor v3,v23,v23
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v1,v0,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// bl 0x82835868
	ctx.lr = 0x828365EC;
	sub_82835868(ctx, base);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// li r24,32
	ctx.r24.s64 = 32;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82837688
	if (ctx.cr0.eq) goto loc_82837688;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vspltisw v13,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x1)));
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// vcsxwfp128 v60,v13,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// addi r25,r30,44
	ctx.r25.s64 = ctx.r30.s64 + 44;
	// lvx128 v56,r0,r6
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,432
	ctx.r30.s64 = ctx.r1.s64 + 432;
	// lvx128 v55,r0,r5
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvx128 v24,r0,r3
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,336
	ctx.r4.s64 = ctx.r1.s64 + 336;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// vslw v0,v0,v0
	ctx.v0.u32[0] = ctx.v0.u32[0] << (ctx.v0.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v0.u32[1] << (ctx.v0.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v0.u32[2] << (ctx.v0.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v0.u32[3] << (ctx.v0.u8[12] & 0x1F);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lvx128 v58,r0,r30
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,368
	ctx.r30.s64 = ctx.r1.s64 + 368;
	// lvx128 v15,r0,r6
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v14,r0,r5
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// lis r29,-32255
	ctx.r29.s64 = -2113863680;
	// lvx128 v11,r0,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vxor128 v59,v1,v0
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r30,16
	ctx.r30.s64 = 16;
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lfs f10,21500(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 21500);
	ctx.f10.f64 = double(temp.f32);
	// lfs f11,25272(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 25272);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,17892(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 17892);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// b 0x828366d0
	goto loc_828366D0;
loc_828366C0:
	// lwz r8,140(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_828366D0:
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// blt cr6,0x82836714
	if (ctx.cr6.lt) goto loc_82836714;
	// addi r24,r24,-32
	ctx.r24.s64 = ctx.r24.s64 + -32;
	// addi r11,r25,-44
	ctx.r11.s64 = ctx.r25.s64 + -44;
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r7
	// dcbt r11,r9
	// dcbt r11,r10
	// dcbt r11,r8
	// li r8,128
	ctx.r8.s64 = 128;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// dcbt r8,r11
	// li r11,128
	ctx.r11.s64 = 128;
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// dcbt r11,r8
loc_82836714:
	// rlwinm r8,r27,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r8,16
	ctx.r4.s64 = ctx.r8.s64 + 16;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lvlx v9,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvrx v30,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v6,v23,v23
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lvlx v10,r8,r6
	temp.u32 = ctx.r8.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v17,v23,v23
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lvlx v31,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v16,v23,v23
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lvrx v2,r4,r6
	temp.u32 = ctx.r4.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lwzx r29,r28,r7
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lvrx v5,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v10,v10,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vor v5,v31,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvrx v31,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvx128 v2,r0,r5
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor v9,v9,v31
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// lvlx v7,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm. r9,r29,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vperm v10,v10,v10,v2
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vor v7,v7,v30
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vupkhsh v29,v5
	_mm_store_si128((__m128i*)ctx.v29.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v5.s16))));
	// stvx128 v6,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v2,v9,228
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// vor v30,v23,v23
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// vor v5,v23,v23
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// vpermwi128 v31,v7,228
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x1B));
	// vsr v10,v10,v3
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vpermwi128 v9,v29,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x1B));
	// beq 0x82836838
	if (ctx.cr0.eq) goto loc_82836838;
	// rlwinm. r10,r29,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836818
	if (!ctx.cr0.eq) goto loc_82836818;
	// vslb v7,v10,v4
	ctx.v7.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v7.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v7.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v7.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v7.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v7.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v7.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v7.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v7.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v7.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v7.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v7.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v7.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v7.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v7.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v7.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vsro v5,v2,v0
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v29,v31,v13
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsrb v7,v7,v4
	// vsr v5,v5,v0
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vaddubs v7,v7,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vspltb v7,v7,15
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_set1_epi8(char(0x0))));
	// vslo v28,v8,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v28.v128 = simd::zero_i128();
	} else {
		ctx.v28.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v6,v6,v7
	simd::store_i8(ctx.v6.s8, simd::add_saturate_i8(simd::load_i8(ctx.v6.s8), simd::load_i8(ctx.v7.s8)));
	// vaddubs v12,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddubs v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v28,v28,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddubs v13,v13,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v6,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v28,v8
	// vand v29,v29,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vand v5,v5,v7
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v29,v9,v29
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v7,v9,v5
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v5)));
loc_82836818:
	// vor v28,v30,v30
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vor v5,v30,v30
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v28,v29,8,3
	_mm_store_ps(ctx.v28.f32, _mm_blend_ps(_mm_load_ps(ctx.v28.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 57), 8));
	// vrlimi128 v5,v7,8,3
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 57), 8));
	// vor v30,v28,v28
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v28.u8));
loc_82836838:
	// rlwinm. r11,r29,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828368cc
	if (ctx.cr0.eq) goto loc_828368CC;
	// rlwinm. r11,r29,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x828368b4
	if (!ctx.cr0.eq) goto loc_828368B4;
	// vslb v7,v10,v4
	ctx.v7.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v7.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v7.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v7.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v7.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v7.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v7.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v7.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v7.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v7.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v7.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v7.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v7.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v7.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v7.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v7.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsro v29,v2,v0
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v28,v31,v13
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsrb v7,v7,v4
	// vsr v29,v29,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v28,v28,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vaddubs v7,v7,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vspltb v7,v7,15
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_set1_epi8(char(0x0))));
	// vslo v27,v8,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v6,v6,v7
	simd::store_i8(ctx.v6.s8, simd::add_saturate_i8(simd::load_i8(ctx.v6.s8), simd::load_i8(ctx.v7.s8)));
	// vaddubs v12,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddubs v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v27,v27,v7
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddubs v13,v13,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v27,v8
	// vand v29,v29,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vand v28,v28,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v9,v29
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v28
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v28)));
loc_828368B4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v5,v7,4,2
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 4));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v30,v29,4,2
	_mm_store_ps(ctx.v30.f32, _mm_blend_ps(_mm_load_ps(ctx.v30.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 78), 4));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_828368CC:
	// rlwinm. r11,r29,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82836958
	if (ctx.cr0.eq) goto loc_82836958;
	// rlwinm. r11,r29,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836944
	if (!ctx.cr0.eq) goto loc_82836944;
	// vslb v7,v10,v4
	ctx.v7.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v7.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v7.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v7.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v7.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v7.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v7.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v7.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v7.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v7.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v7.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v7.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v7.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v7.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v7.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v7.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsro v2,v2,v0
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v31,v13
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vsrb v7,v7,v4
	// vsr v2,v2,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v31,v31,v13
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vaddubs v7,v7,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vspltb v7,v7,15
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_set1_epi8(char(0x0))));
	// vslo v29,v8,v7
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v7.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v29.v128 = simd::zero_i128();
	} else {
		ctx.v29.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v6,v6,v7
	simd::store_i8(ctx.v6.s8, simd::add_saturate_i8(simd::load_i8(ctx.v6.s8), simd::load_i8(ctx.v7.s8)));
	// vaddubs v12,v12,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddubs v0,v0,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsl v29,v29,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddubs v13,v13,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubuwm v7,v29,v8
	// vand v6,v2,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vand v2,v31,v7
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddsws v7,v9,v6
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v6)));
	// vaddsws v9,v9,v2
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v2)));
loc_82836944:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vrlimi128 v5,v7,2,1
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 147), 2));
	// vrlimi128 v30,v9,2,1
	_mm_store_ps(ctx.v30.f32, _mm_blend_ps(_mm_load_ps(ctx.v30.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82836958:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// vand v12,v12,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// vand v0,v0,v24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// vand v13,v13,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// vand v11,v11,v24
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82835528
	ctx.lr = 0x82836998;
	sub_82835528(ctx, base);
	// vcfsx v9,v5,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v5.u32)));
	// vcfsx v7,v30,0
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v30.u32)));
	// vupkd3d128 v6,v23,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v23.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v23.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v6 = vTemp;
	// vupkd3d128 v5,v23,0
	vTemp.u32[0] = ctx.v23.u8[3] | 0x3F800000;
	vTemp.u32[1] = ctx.v23.u8[0] | 0x3F800000;
	vTemp.u32[2] = ctx.v23.u8[1] | 0x3F800000;
	vTemp.u32[3] = ctx.v23.u8[2] | 0x3F800000;
	ctx.v5 = vTemp;
	// vor128 v29,v59,v59
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vor128 v30,v60,v60
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// rlwinm r11,r29,0,6,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x3000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// vspltw v2,v6,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0x0));
	// vaddfp128 v26,v59,v5
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v5.f32)));
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// vmulfp128 v9,v61,v9
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v6,v61,v7
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v5,v9,v9
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vmsum3fp128 v9,v6,v6
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vsubfp v5,v2,v5
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp v9,v2,v9
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaxfp v2,v5,v23
	_mm_store_ps(ctx.v2.f32, _mm_max_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v23.f32)));
	// vmaxfp v25,v9,v23
	_mm_store_ps(ctx.v25.f32, _mm_max_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v23.f32)));
	// vrsqrtefp v9,v2
	_mm_store_ps(ctx.v9.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v2.f32))));
	// vor v5,v2,v2
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vrsqrtefp v18,v25
	_mm_store_ps(ctx.v18.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v25.f32))));
	// vcmpeqfp v28,v2,v23
	_mm_store_ps(ctx.v28.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v23.f32)));
	// vcmpeqfp v27,v25,v23
	_mm_store_ps(ctx.v27.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v23.f32)));
	// vmulfp128 v9,v9,v2
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v2,v18,v25
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v25.f32)));
	// vsel v28,v9,v5,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vsel v9,v2,v25,v27
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v25.u8))));
	// vrlimi128 v7,v28,1,0
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v28.f32), 228), 1));
	// vrlimi128 v6,v9,1,0
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 228), 1));
	// vmulfp128 v5,v26,v7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum4fp128 v9,v7,v6
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vcmpgefp v9,v23,v9
	_mm_store_ps(ctx.v9.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v9.f32)));
	// vsel v9,v1,v29,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v1.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v29.u8))));
	// vmaddfp v28,v9,v6,v5
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v5.f32)));
	// vmsum4fp128 v2,v28,v28
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v28.f32), 0xFF));
	// vrsqrtefp v9,v2
	_mm_store_ps(ctx.v9.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v2.f32))));
	// vor v31,v2,v2
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vmulfp128 v5,v2,v60
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v60.f32)));
	// vcmpeqfp v29,v2,v23
	_mm_store_ps(ctx.v29.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v23.f32)));
	// vmulfp128 v2,v9,v9
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vnmsubfp128 v30,v5,v2,v30
	_mm_store_ps(ctx.v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v30.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v9,v9,v30,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v30.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v9,v28,v9
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v9.f32)));
	// vsel v18,v9,v31,v29
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v31.u8))));
	// beq cr6,0x82836d98
	if (ctx.cr6.eq) goto loc_82836D98;
	// lis r10,512
	ctx.r10.s64 = 33554432;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82837168
	if (ctx.cr6.eq) goto loc_82837168;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x828370dc
	if (!ctx.cr6.eq) goto loc_828370DC;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// vor v2,v23,v23
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r29,r29,8,0,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm. r5,r29,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lvrx v5,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v9,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v9,v9,v5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvrx v28,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v27,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v5,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v5,v5,v28
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v31,v31,v27
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// lvrx v28,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v27,r30,r7
	temp.u32 = ctx.r30.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vupkhsh v9,v9
	_mm_store_si128((__m128i*)ctx.v9.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v9.s16))));
	// lvlx v30,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v30,v30,v28
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v29,v29,v27
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v28,v5,228
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x1B));
	// vpermwi128 v27,v31,228
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x1B));
	// vpermwi128 v26,v30,228
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x1B));
	// vpermwi128 v9,v9,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// vpermwi128 v25,v29,228
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x1B));
	// beq 0x82836bac
	if (ctx.cr0.eq) goto loc_82836BAC;
	// rlwinm. r10,r29,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vor128 v17,v17,v57
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836b90
	if (!ctx.cr0.eq) goto loc_82836B90;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vsro v31,v28,v12
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v30,v27,v0
	// vsro v29,v26,v13
	// vsrb v5,v5,v4
	// vsro v20,v25,v11
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v20,v20,v11
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v19,v8,v5
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v19.v128 = simd::zero_i128();
	} else {
		ctx.v19.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v19,v19,v5
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v19,v8
	// vand v31,v31,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v30,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v29,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v20,v20,v5
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v31
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v31,v9,v30
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v30,v9,v29
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v20
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v20)));
loc_82836B90:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v22,v5,8,3
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 8));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v7,v31,8,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 8));
	// vrlimi128 v6,v30,8,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 57), 8));
	// vrlimi128 v21,v29,8,3
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 57), 8));
loc_82836BAC:
	// rlwinm. r11,r29,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82836c74
	if (ctx.cr0.eq) goto loc_82836C74;
	// rlwinm. r11,r29,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v17,v17,v56
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836c54
	if (!ctx.cr0.eq) goto loc_82836C54;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsro v31,v28,v12
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v30,v27,v0
	// vsro v29,v26,v13
	// vsrb v5,v5,v4
	// vsro v20,v25,v11
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v20,v20,v11
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v19,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v19.v128 = simd::zero_i128();
	} else {
		ctx.v19.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v19,v19,v5
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v19,v8
	// vand v31,v31,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v30,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v29,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v20,v20,v5
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v31
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v31,v9,v30
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v30,v9,v29
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v20
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v20)));
loc_82836C54:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v22,v5,4,2
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 78), 4));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v7,v31,4,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 78), 4));
	// vrlimi128 v6,v30,4,2
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 78), 4));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v21,v29,4,2
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 78), 4));
loc_82836C74:
	// rlwinm. r11,r29,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82836d34
	if (ctx.cr0.eq) goto loc_82836D34;
	// rlwinm. r11,r29,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v17,v17,v55
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836d18
	if (!ctx.cr0.eq) goto loc_82836D18;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsro v30,v27,v0
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v29,v26,v13
	// vsrb v5,v5,v4
	// vsro v28,v25,v11
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v28,v28,v11
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v27,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v27,v27,v5
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v27,v8
	// vand v2,v31,v5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v31,v30,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v29,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v28,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v2
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v2)));
	// vaddsws v31,v9,v31
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v30,v9,v30
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v9,v9,v29
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
loc_82836D18:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vrlimi128 v22,v5,2,1
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 147), 2));
	// vrlimi128 v7,v31,2,1
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 147), 2));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v6,v30,2,1
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 147), 2));
	// vrlimi128 v21,v9,2,1
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82836D34:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// vand v12,v12,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// vand v0,v0,v24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// vand v13,v13,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// vand v11,v11,v24
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82835528
	ctx.lr = 0x82836D74;
	sub_82835528(ctx, base);
	// vcfsx v22,v22,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v22.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v22.u32)));
	// vcfsx v7,v7,0
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v7.u32)));
	// vcfsx v6,v6,0
	_mm_store_ps(ctx.v6.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v6.u32)));
	// vcfsx v21,v21,0
	_mm_store_ps(ctx.v21.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v21.u32)));
	// vmulfp128 v9,v62,v22
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v22.f32)));
	// vmaddfp128 v9,v63,v7,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v14,v6,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v15,v21,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v21.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v20,v58,v9
	_mm_store_ps(ctx.v20.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v9.f32)));
loc_82836D98:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// vor v2,v23,v23
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r6,r29,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm. r4,r6,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lvlx v5,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v9,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v9,v5,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvrx v28,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v27,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v5,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v5,v5,v28
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v31,v31,v27
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// lvrx v28,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v27,r30,r7
	temp.u32 = ctx.r30.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vupkhsh v9,v9
	_mm_store_si128((__m128i*)ctx.v9.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v9.s16))));
	// lvlx v30,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v30,v30,v28
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v29,v29,v27
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// stvx128 v2,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v28,v5,228
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x1B));
	// vpermwi128 v27,v31,228
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x1B));
	// vpermwi128 v26,v30,228
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x1B));
	// vpermwi128 v9,v9,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// vpermwi128 v25,v29,228
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x1B));
	// beq 0x82836ee0
	if (ctx.cr0.eq) goto loc_82836EE0;
	// rlwinm. r10,r6,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vor128 v16,v16,v57
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836ec4
	if (!ctx.cr0.eq) goto loc_82836EC4;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v30,v27,v0
	// vsrb v5,v5,v4
	// vor128 v54,v10,v10
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsro v29,v26,v13
	// vsro v19,v25,v11
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vsr v19,v19,v11
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v10,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v10.v128 = simd::zero_i128();
	} else {
		ctx.v10.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v10,v10,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v10,v8
	// vor128 v10,v54,v54
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vand v31,v31,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v30,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v29,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v19,v19,v5
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v31
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v31,v9,v30
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v30,v9,v29
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v19
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v19)));
loc_82836EC4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v22,v5,8,3
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 8));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v7,v31,8,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 8));
	// vrlimi128 v6,v30,8,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 57), 8));
	// vrlimi128 v21,v29,8,3
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 57), 8));
loc_82836EE0:
	// rlwinm. r11,r6,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82836fb0
	if (ctx.cr0.eq) goto loc_82836FB0;
	// rlwinm. r11,r6,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v16,v16,v56
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82836f90
	if (!ctx.cr0.eq) goto loc_82836F90;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v30,v27,v0
	// vsrb v5,v5,v4
	// vor128 v54,v10,v10
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsro v29,v26,v13
	// vsro v19,v25,v11
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vsr v19,v19,v11
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v10,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v10.v128 = simd::zero_i128();
	} else {
		ctx.v10.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v10,v10,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v10,v8
	// vor128 v10,v54,v54
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vand v31,v31,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v30,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v29,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v19,v19,v5
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v31
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v31,v9,v30
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v30,v9,v29
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v19
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v19)));
loc_82836F90:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v22,v5,4,2
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 78), 4));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v7,v31,4,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 78), 4));
	// vrlimi128 v6,v30,4,2
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 78), 4));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v21,v29,4,2
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 78), 4));
loc_82836FB0:
	// rlwinm. r11,r6,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82837070
	if (ctx.cr0.eq) goto loc_82837070;
	// rlwinm. r11,r6,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v16,v16,v55
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82837054
	if (!ctx.cr0.eq) goto loc_82837054;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsro v30,v27,v0
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v29,v26,v13
	// vsrb v5,v5,v4
	// vsro v28,v25,v11
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v28,v28,v11
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v27,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v27,v27,v5
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v27,v8
	// vand v2,v31,v5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v31,v30,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v29,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v28,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v2
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v2)));
	// vaddsws v31,v9,v31
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v30,v9,v30
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v9,v9,v29
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
loc_82837054:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vrlimi128 v22,v5,2,1
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 147), 2));
	// vrlimi128 v7,v31,2,1
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 147), 2));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v6,v30,2,1
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 147), 2));
	// vrlimi128 v21,v9,2,1
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82837070:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// vand v12,v12,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// vand v0,v0,v24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// vand v13,v13,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// vand v11,v11,v24
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82835528
	ctx.lr = 0x828370B0;
	sub_82835528(ctx, base);
	// vcfsx v22,v22,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v22.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v22.u32)));
	// vcfsx v9,v6,0
	_mm_store_ps(ctx.v9.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v6.u32)));
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// vcfsx v7,v7,0
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v7.u32)));
	// vcfsx v21,v21,0
	_mm_store_ps(ctx.v21.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v21.u32)));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v62,v22
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v22.f32)));
	// vmaddcfp128 v7,v63,v7,v6
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v9,v14,v9,v7
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v9,v15,v21,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v21.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v19,v5,v9
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
loc_828370DC:
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// addi r11,r25,-12
	ctx.r11.s64 = ctx.r25.s64 + -12;
	// li r8,-44
	ctx.r8.s64 = -44;
	// li r7,-16
	ctx.r7.s64 = -16;
	// lvx128 v5,r0,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsel v2,v5,v19,v16
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)ctx.v19.u8))));
	// vsel v6,v7,v20,v17
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v20.u8))));
	// stvx128 v18,r25,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v6,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lhz r11,30(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 30);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bne cr6,0x82837670
	if (!ctx.cr6.eq) goto loc_82837670;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// rlwinm. r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82837670
	if (ctx.cr0.eq) goto loc_82837670;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lha r11,0(r10)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// lfd f12,176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// beq 0x828374a8
	if (ctx.cr0.eq) goto loc_828374A8;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lfs f9,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// stfs f12,0(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// b 0x82837670
	goto loc_82837670;
loc_82837168:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// vor v2,v23,v23
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r6,r29,8,0,23
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r8,136(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r7,140(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// rlwinm. r4,r6,0,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// lvlx v5,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx v9,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor v9,v5,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvrx v28,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v27,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx v5,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v5,v5,v28
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v31,v31,v27
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// lvrx v28,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvrx v27,r30,r7
	temp.u32 = ctx.r30.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vupkhsh v9,v9
	_mm_store_si128((__m128i*)ctx.v9.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v9.s16))));
	// lvlx v30,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v30,v30,v28
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v28.u8)));
	// vor v29,v29,v27
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v27.u8)));
	// stvx128 v2,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v28,v5,228
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x1B));
	// vpermwi128 v27,v31,228
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x1B));
	// vpermwi128 v26,v30,228
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x1B));
	// vpermwi128 v9,v9,228
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x1B));
	// vpermwi128 v25,v29,228
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x1B));
	// beq 0x828372b0
	if (ctx.cr0.eq) goto loc_828372B0;
	// rlwinm. r10,r6,0,3,3
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vor128 v17,v17,v57
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82837294
	if (!ctx.cr0.eq) goto loc_82837294;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v30,v27,v0
	// vsrb v5,v5,v4
	// vor128 v54,v10,v10
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsro v29,v26,v13
	// vsro v20,v25,v11
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vsr v20,v20,v11
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v10,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v10.v128 = simd::zero_i128();
	} else {
		ctx.v10.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v10,v10,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v10,v8
	// vor128 v10,v54,v54
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vand v31,v31,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v30,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v29,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v20,v20,v5
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v31
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v31,v9,v30
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v30,v9,v29
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v20
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v20)));
loc_82837294:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v22,v5,8,3
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 8));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v7,v31,8,3
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 57), 8));
	// vrlimi128 v6,v30,8,3
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 57), 8));
	// vrlimi128 v21,v29,8,3
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 57), 8));
loc_828372B0:
	// rlwinm. r11,r6,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82837380
	if (ctx.cr0.eq) goto loc_82837380;
	// rlwinm. r11,r6,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x8000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v17,v17,v56
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// vor v29,v9,v9
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82837360
	if (!ctx.cr0.eq) goto loc_82837360;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v30,v27,v0
	// vsrb v5,v5,v4
	// vor128 v54,v10,v10
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsro v29,v26,v13
	// vsro v20,v25,v11
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vsr v20,v20,v11
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v10,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v10.v128 = simd::zero_i128();
	} else {
		ctx.v10.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v10,v10,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v10,v8
	// vor128 v10,v54,v54
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vand v31,v31,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v30,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v29,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v20,v20,v5
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v31
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v31,v9,v30
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v30,v9,v29
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
	// vaddsws v29,v9,v20
	simd::store_u32(ctx.v29.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v20)));
loc_82837360:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vpermwi128 v9,v9,198
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x39));
	// vrlimi128 v22,v5,4,2
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 78), 4));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v7,v31,4,2
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 78), 4));
	// vrlimi128 v6,v30,4,2
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 78), 4));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// vrlimi128 v21,v29,4,2
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 78), 4));
loc_82837380:
	// rlwinm. r11,r6,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82837440
	if (ctx.cr0.eq) goto loc_82837440;
	// rlwinm. r11,r6,0,5,5
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x4000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v17,v17,v55
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v31,v9,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v5,v9,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// bne 0x82837424
	if (!ctx.cr0.eq) goto loc_82837424;
	// vslb v5,v10,v4
	ctx.v5.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v5.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v5.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v5.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v5.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v5.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v5.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v5.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v5.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v5.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v5.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v5.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v5.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v5.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v5.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v5.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vsro v30,v27,v0
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// vsro v31,v28,v12
	// vsro v29,v26,v13
	// vsrb v5,v5,v4
	// vsro v28,v25,v11
	// vsr v31,v31,v12
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// vsr v30,v30,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddubs v5,v5,v8
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vsr v29,v29,v13
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsr v28,v28,v11
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vsr v10,v10,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_vsr(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vspltb v5,v5,15
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_set1_epi8(char(0x0))));
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vslo v27,v8,v5
	ctx.fpscr.enableFlushMode();
	simd::vec128i shift_amt = simd::srli_i16(ctx.v5.v128, 3);
	int shift = simd::extract_u8(shift_amt, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v27.v128 = simd::zero_i128();
	} else {
		ctx.v27.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v8.v128, 16 - shift);
	}
	// vaddsbs v2,v2,v5
	simd::store_i8(ctx.v2.s8, simd::add_saturate_i8(simd::load_i8(ctx.v2.s8), simd::load_i8(ctx.v5.s8)));
	// vaddubs v12,v12,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v0,v0,v5
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsl v27,v27,v5
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_vsl(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddubs v13,v13,v5
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddubs v11,v11,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vsubuwm v5,v27,v8
	// vand v2,v31,v5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v31,v30,v5
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v30,v29,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vand v29,v28,v5
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vaddsws v5,v9,v2
	simd::store_u32(ctx.v5.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v2)));
	// vaddsws v31,v9,v31
	simd::store_u32(ctx.v31.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v31)));
	// vaddsws v30,v9,v30
	simd::store_u32(ctx.v30.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v30)));
	// vaddsws v9,v9,v29
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v29)));
loc_82837424:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// vrlimi128 v22,v5,2,1
	_mm_store_ps(ctx.v22.f32, _mm_blend_ps(_mm_load_ps(ctx.v22.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 147), 2));
	// vrlimi128 v7,v31,2,1
	_mm_store_ps(ctx.v7.f32, _mm_blend_ps(_mm_load_ps(ctx.v7.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 147), 2));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vrlimi128 v6,v30,2,1
	_mm_store_ps(ctx.v6.f32, _mm_blend_ps(_mm_load_ps(ctx.v6.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 147), 2));
	// vrlimi128 v21,v9,2,1
	_mm_store_ps(ctx.v21.f32, _mm_blend_ps(_mm_load_ps(ctx.v21.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 2));
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82837440:
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// vand v12,v12,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// vand v0,v0,v24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// vand v13,v13,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// vand v11,v11,v24
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82835528
	ctx.lr = 0x82837480;
	sub_82835528(ctx, base);
	// vcfsx v22,v22,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v22.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v22.u32)));
	// vcfsx v7,v7,0
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v7.u32)));
	// vcfsx v6,v6,0
	_mm_store_ps(ctx.v6.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v6.u32)));
	// vcfsx v21,v21,0
	_mm_store_ps(ctx.v21.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v21.u32)));
	// vmulfp128 v9,v62,v22
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v22.f32)));
	// vmaddfp128 v9,v63,v7,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v14,v6,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v9,v15,v21,v9
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v21.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v20,v58,v9
	_mm_store_ps(ctx.v20.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v9.f32)));
	// b 0x828370dc
	goto loc_828370DC;
loc_828374A8:
	// vslb v10,v10,v4
	ctx.v10.u8[0] = ctx.v10.u8[0] << (ctx.v4.u8[0] & 0x7);
	ctx.v10.u8[1] = ctx.v10.u8[1] << (ctx.v4.u8[1] & 0x7);
	ctx.v10.u8[2] = ctx.v10.u8[2] << (ctx.v4.u8[2] & 0x7);
	ctx.v10.u8[3] = ctx.v10.u8[3] << (ctx.v4.u8[3] & 0x7);
	ctx.v10.u8[4] = ctx.v10.u8[4] << (ctx.v4.u8[4] & 0x7);
	ctx.v10.u8[5] = ctx.v10.u8[5] << (ctx.v4.u8[5] & 0x7);
	ctx.v10.u8[6] = ctx.v10.u8[6] << (ctx.v4.u8[6] & 0x7);
	ctx.v10.u8[7] = ctx.v10.u8[7] << (ctx.v4.u8[7] & 0x7);
	ctx.v10.u8[8] = ctx.v10.u8[8] << (ctx.v4.u8[8] & 0x7);
	ctx.v10.u8[9] = ctx.v10.u8[9] << (ctx.v4.u8[9] & 0x7);
	ctx.v10.u8[10] = ctx.v10.u8[10] << (ctx.v4.u8[10] & 0x7);
	ctx.v10.u8[11] = ctx.v10.u8[11] << (ctx.v4.u8[11] & 0x7);
	ctx.v10.u8[12] = ctx.v10.u8[12] << (ctx.v4.u8[12] & 0x7);
	ctx.v10.u8[13] = ctx.v10.u8[13] << (ctx.v4.u8[13] & 0x7);
	ctx.v10.u8[14] = ctx.v10.u8[14] << (ctx.v4.u8[14] & 0x7);
	ctx.v10.u8[15] = ctx.v10.u8[15] << (ctx.v4.u8[15] & 0x7);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfs f9,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f9.f64 = double(temp.f32);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// lwz r10,148(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// vsrb v10,v10,v4
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// clrlwi r3,r10,24
	ctx.r3.u64 = ctx.r10.u32 & 0xFF;
	// lwz r5,144(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// clrlwi r29,r8,24
	ctx.r29.u64 = ctx.r8.u32 & 0xFF;
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subfic r22,r4,31
	ctx.xer.ca = ctx.r4.u32 <= 31;
	ctx.r22.s64 = 31 - ctx.r4.s64;
	// vaddubs v10,v10,v8
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// clrlwi r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	// lwz r10,136(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r19,4(r11)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subfic r21,r3,31
	ctx.xer.ca = ctx.r3.u32 <= 31;
	ctx.r21.s64 = 31 - ctx.r3.s64;
	// subfic r20,r29,31
	ctx.xer.ca = ctx.r29.u32 <= 31;
	ctx.r20.s64 = 31 - ctx.r29.s64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// vspltb v10,v10,15
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_set1_epi8(char(0x0))));
	// srw r9,r9,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r5.u8 & 0x3F));
	// stvx128 v10,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subfic r17,r5,31
	ctx.xer.ca = ctx.r5.u32 <= 31;
	ctx.r17.s64 = 31 - ctx.r5.s64;
	// rlwinm r5,r19,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// vxor v3,v3,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// rlwinm r18,r8,1,0,30
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// slw r5,r5,r22
	ctx.r5.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r22.u8 & 0x3F));
	// slw r7,r18,r17
	ctx.r7.u64 = ctx.r17.u8 & 0x20 ? 0 : (ctx.r18.u32 << (ctx.r17.u8 & 0x3F));
	// lwz r19,4(r8)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r22,268(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// srw r4,r11,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r4.u8 & 0x3F));
	// clrlwi r22,r22,24
	ctx.r22.u64 = ctx.r22.u32 & 0xFF;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// or r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 | ctx.r9.u64;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// slw r11,r6,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r22.u8 & 0x3F));
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// srw r10,r10,r29
	ctx.r10.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r29.u8 & 0x3F));
	// slw r7,r7,r20
	ctx.r7.u64 = ctx.r20.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r20.u8 & 0x3F));
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r6,r5,r4
	ctx.r6.u64 = ctx.r5.u64 | ctx.r4.u64;
	// std r9,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r9.u64);
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// and r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 & ctx.r11.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// std r10,224(r1)
	PPC_STORE_U64(ctx.r1.u32 + 224, ctx.r10.u64);
	// rlwinm r10,r19,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 1) & 0xFFFFFFFE;
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// srw r9,r8,r3
	ctx.r9.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r8.u32 >> (ctx.r3.u8 & 0x3F));
	// slw r10,r10,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r21.u8 & 0x3F));
	// lfd f8,240(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// lfd f7,208(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lfd f6,224(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r11.u64);
	// lfd f5,192(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// fmuls f4,f7,f0
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fsubs f2,f8,f4
	ctx.f2.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// fmsubs f8,f6,f10,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 * ctx.f10.f64 - ctx.f8.f64));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fnmsubs f7,f5,f11,f7
	ctx.f7.f64 = double(float(-(ctx.f5.f64 * ctx.f11.f64 - ctx.f7.f64)));
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// fmsubs f3,f5,f13,f3
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f13.f64 - ctx.f3.f64));
	// addi r8,r1,148
	ctx.r8.s64 = ctx.r1.s64 + 148;
	// fmsubs f6,f6,f0,f4
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f4.f64));
	// addi r7,r1,156
	ctx.r7.s64 = ctx.r1.s64 + 156;
	// lfs f4,36(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f4.f64 = double(temp.f32);
	// addi r6,r1,140
	ctx.r6.s64 = ctx.r1.s64 + 140;
	// addi r5,r1,136
	ctx.r5.s64 = ctx.r1.s64 + 136;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fadds f8,f7,f8
	ctx.f8.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// fadds f3,f3,f2
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fmadds f8,f3,f9,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fmadds f8,f8,f9,f6
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f6.f64));
	// fmadds f9,f8,f9,f5
	ctx.f9.f64 = double(float(ctx.f8.f64 * ctx.f9.f64 + ctx.f5.f64));
	// fadds f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 + ctx.f12.f64));
	// fmuls f12,f12,f4
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f4.f64));
	// stfs f12,0(r25)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// bl 0x82835528
	ctx.lr = 0x82837650;
	sub_82835528(ctx, base);
	// vaddubs v12,v12,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddubs v0,v0,v10
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddubs v13,v13,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vaddubs v11,v11,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_adds_epu8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vand v12,v12,v24
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// vand v0,v0,v24
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// vand v13,v13,v24
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
	// vand v11,v11,v24
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v24.u8)));
loc_82837670:
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,48
	ctx.r25.s64 = ctx.r25.s64 + 48;
	// addi r24,r24,12
	ctx.r24.s64 = ctx.r24.s64 + 12;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828366c0
	if (ctx.cr6.lt) goto loc_828366C0;
loc_82837688:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82837690"))) PPC_WEAK_FUNC(sub_82837690);
PPC_FUNC_IMPL(__imp__sub_82837690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vmsum3fp128 v0,v1,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// vupkd3d128 v12,v13,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v13.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v12 = vTemp;
	// vspltw v12,v12,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vsubfp v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaxfp v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_max_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vrsqrtefp v12,v0
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v0.f32))));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vcmpeqfp v13,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vrlimi128 v1,v13,1,0
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 1));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828376C4"))) PPC_WEAK_FUNC(sub_828376C4);
PPC_FUNC_IMPL(__imp__sub_828376C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828376C8"))) PPC_WEAK_FUNC(sub_828376C8);
PPC_FUNC_IMPL(__imp__sub_828376C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r8,r5,24
	ctx.r8.u64 = ctx.r5.u32 & 0xFF;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r7,r10,31
	ctx.xer.ca = ctx.r10.u32 <= 31;
	ctx.r7.s64 = 31 - ctx.r10.s64;
	// li r6,1
	ctx.r6.s64 = 1;
	// slw r7,r11,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// srw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r11,r6,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r8.u8 & 0x3F));
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837700"))) PPC_WEAK_FUNC(sub_82837700);
PPC_FUNC_IMPL(__imp__sub_82837700) {
	PPC_FUNC_PROLOGUE();
	// stw r4,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837708"))) PPC_WEAK_FUNC(sub_82837708);
PPC_FUNC_IMPL(__imp__sub_82837708) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837740"))) PPC_WEAK_FUNC(sub_82837740);
PPC_FUNC_IMPL(__imp__sub_82837740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stfsx f1,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// stfsx f1,r9,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, temp.u32);
	// stfsx f1,r8,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// stfsx f1,r7,r10
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837768"))) PPC_WEAK_FUNC(sub_82837768);
PPC_FUNC_IMPL(__imp__sub_82837768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82837770;
	__savegprlr_23(ctx, base);
	// lis r31,-32256
	ctx.r31.s64 = -2113929216;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,100(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r26,128
	ctx.r26.s64 = 128;
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r27,r10,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,5184(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
loc_82837790:
	// lhz r31,30(r3)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82837930
	if (!ctx.cr6.lt) goto loc_82837930;
	// clrlwi r30,r8,24
	ctx.r30.u64 = ctx.r8.u32 & 0xFF;
	// and. r31,r30,r26
	ctx.r31.u64 = ctx.r30.u64 & ctx.r26.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x828378dc
	if (ctx.cr0.eq) goto loc_828378DC;
	// lbz r31,38(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq 0x828377cc
	if (ctx.cr0.eq) goto loc_828377CC;
	// addi r25,r31,4
	ctx.r25.s64 = ctx.r31.s64 + 4;
	// lwa r31,0(r31)
	ctx.r31.s64 = int32_t(PPC_LOAD_U32(ctx.r31.u32 + 0));
	// std r31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.r31.u64);
	// lfd f0,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x828377dc
	goto loc_828377DC;
loc_828377CC:
	// addi r25,r31,2
	ctx.r25.s64 = ctx.r31.s64 + 2;
	// lha r31,0(r31)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r31.u32 + 0));
	// std r31,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.r31.u64);
	// lfd f0,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
loc_828377DC:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r31,r26,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 29) & 0x1FFFFFFF;
	// stw r25,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r25.u32);
	// and. r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// beq 0x82837804
	if (ctx.cr0.eq) goto loc_82837804;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lfsx f12,r31,r27
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// b 0x828378e4
	goto loc_828378E4;
loc_82837804:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82837830
	if (ctx.cr6.eq) goto loc_82837830;
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r24,1
	ctx.r24.s64 = 1;
	// lwz r31,44(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// rlwinm r30,r25,29,3,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r25,r25,27
	ctx.r25.u64 = ctx.r25.u32 & 0x1F;
	// slw r25,r24,r25
	ctx.r25.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r25.u8 & 0x3F));
	// lwzx r24,r30,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r31.u32);
	// or r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 | ctx.r24.u64;
	// stwx r25,r30,r31
	PPC_STORE_U32(ctx.r30.u32 + ctx.r31.u32, ctx.r25.u32);
loc_82837830:
	// lbz r31,38(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 38);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// beq 0x8283786c
	if (ctx.cr0.eq) goto loc_8283786C;
	// lbz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r30,0(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// lwz r31,0(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// b 0x828378b8
	goto loc_828378B8;
loc_8283786C:
	// lbz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lbz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r30,r30,2,24,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFC;
	// lwz r25,0(r6)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// srw r31,r31,r30
	ctx.r31.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r30.u8 & 0x3F));
	// clrlwi r31,r31,28
	ctx.r31.u64 = ctx.r31.u32 & 0xF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stb r31,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r31.u8);
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r31.u32);
	// lbz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// lbz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cntlzw r31,r31
	ctx.r31.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r31,r31,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 27) & 0x1;
	// stb r31,0(r28)
	PPC_STORE_U8(ctx.r28.u32 + 0, ctx.r31.u8);
loc_828378B8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r25,8(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r24,12(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stfsx f13,r11,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stfsx f13,r30,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r25,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// stfsx f13,r24,r11
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// b 0x82837904
	goto loc_82837904;
loc_828378DC:
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfsx f0,r31,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	ctx.f0.f64 = double(temp.f32);
loc_828378E4:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r25,4(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r24,8(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r23,12(r29)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// stfsx f0,r11,r30
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// stfsx f0,r25,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r24,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r24.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r23,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r23.u32 + ctx.r11.u32, temp.u32);
loc_82837904:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8283791c
	if (ctx.cr6.eq) goto loc_8283791C;
	// lwz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
loc_8283791C:
	// rlwinm r26,r26,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r26,16
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 16, ctx.xer);
	// bne cr6,0x82837790
	if (!ctx.cr6.eq) goto loc_82837790;
loc_82837930:
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82837934"))) PPC_WEAK_FUNC(sub_82837934);
PPC_FUNC_IMPL(__imp__sub_82837934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837938"))) PPC_WEAK_FUNC(sub_82837938);
PPC_FUNC_IMPL(__imp__sub_82837938) {
	PPC_FUNC_PROLOGUE();
	// lhz r9,30(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,128
	ctx.r11.s64 = 128;
loc_82837944:
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// clrlwi r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	// and. r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82837968
	if (ctx.cr0.eq) goto loc_82837968;
	// rlwinm r8,r11,29,3,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82837968
	if (!ctx.cr0.eq) goto loc_82837968;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82837968:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82837944
	if (!ctx.cr6.eq) goto loc_82837944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283797C"))) PPC_WEAK_FUNC(sub_8283797C);
PPC_FUNC_IMPL(__imp__sub_8283797C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82837980"))) PPC_WEAK_FUNC(sub_82837980);
PPC_FUNC_IMPL(__imp__sub_82837980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lhz r9,34(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// beq 0x82837b50
	if (ctx.cr0.eq) goto loc_82837B50;
	// lhz r31,30(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 30);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828379A4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82837b4c
	if (ctx.cr6.eq) goto loc_82837B4C;
	// li r4,6
	ctx.r4.s64 = 6;
loc_828379B0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r4,-6
	ctx.r9.s64 = ctx.r4.s64 + -6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
loc_828379C0:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x828379f4
	if (!ctx.cr6.lt) goto loc_828379F4;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// and. r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x828379e4
	if (ctx.cr0.eq) goto loc_828379E4;
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x828379e4
	if (!ctx.cr0.eq) goto loc_828379E4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_828379E4:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x828379c0
	if (!ctx.cr6.eq) goto loc_828379C0;
loc_828379F4:
	// clrlwi r10,r7,30
	ctx.r10.u64 = ctx.r7.u32 & 0x3;
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82837af0
	if (ctx.cr6.eq) goto loc_82837AF0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82837aa8
	if (ctx.cr6.eq) goto loc_82837AA8;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82837b38
	if (!ctx.cr6.eq) goto loc_82837B38;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r8,r4,-3
	ctx.r8.s64 = ctx.r4.s64 + -3;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82837A24:
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82837a58
	if (!ctx.cr6.lt) goto loc_82837A58;
	// clrlwi r7,r6,24
	ctx.r7.u64 = ctx.r6.u32 & 0xFF;
	// and. r5,r7,r10
	ctx.r5.u64 = ctx.r7.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82837a48
	if (ctx.cr0.eq) goto loc_82837A48;
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82837a48
	if (!ctx.cr0.eq) goto loc_82837A48;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82837A48:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x82837a24
	if (!ctx.cr6.eq) goto loc_82837A24;
loc_82837A58:
	// add r5,r9,r3
	ctx.r5.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82837A6C:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82837aa0
	if (!ctx.cr6.lt) goto loc_82837AA0;
	// clrlwi r8,r6,24
	ctx.r8.u64 = ctx.r6.u32 & 0xFF;
	// and. r3,r8,r10
	ctx.r3.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82837a90
	if (ctx.cr0.eq) goto loc_82837A90;
	// rlwinm r3,r10,29,3,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r8,r3,r8
	ctx.r8.u64 = ctx.r3.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82837a90
	if (!ctx.cr0.eq) goto loc_82837A90;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82837A90:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x82837a6c
	if (!ctx.cr6.eq) goto loc_82837A6C;
loc_82837AA0:
	// add r3,r7,r5
	ctx.r3.u64 = ctx.r7.u64 + ctx.r5.u64;
	// b 0x82837b38
	goto loc_82837B38;
loc_82837AA8:
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r9,r4,-3
	ctx.r9.s64 = ctx.r4.s64 + -3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82837AB8:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82837b34
	if (!ctx.cr6.lt) goto loc_82837B34;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// and. r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82837adc
	if (ctx.cr0.eq) goto loc_82837ADC;
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82837adc
	if (!ctx.cr0.eq) goto loc_82837ADC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82837ADC:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x82837ab8
	if (!ctx.cr6.eq) goto loc_82837AB8;
	// b 0x82837b34
	goto loc_82837B34;
loc_82837AF0:
	// lbzu r7,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r10,128
	ctx.r10.s64 = 128;
loc_82837B00:
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82837b34
	if (!ctx.cr6.lt) goto loc_82837B34;
	// clrlwi r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	// and. r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82837b24
	if (ctx.cr0.eq) goto loc_82837B24;
	// rlwinm r5,r10,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82837b24
	if (!ctx.cr0.eq) goto loc_82837B24;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82837B24:
	// rlwinm r10,r10,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// bne cr6,0x82837b00
	if (!ctx.cr6.eq) goto loc_82837B00;
loc_82837B34:
	// add r3,r6,r3
	ctx.r3.u64 = ctx.r6.u64 + ctx.r3.u64;
loc_82837B38:
	// addi r4,r4,9
	ctx.r4.s64 = ctx.r4.s64 + 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r4,-6
	ctx.r10.s64 = ctx.r4.s64 + -6;
	// cmplw cr6,r10,r31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x828379b0
	if (ctx.cr6.lt) goto loc_828379B0;
loc_82837B4C:
	// bdnz 0x828379a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828379A4;
loc_82837B50:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82837B58"))) PPC_WEAK_FUNC(sub_82837B58);
PPC_FUNC_IMPL(__imp__sub_82837B58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82837B60;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lwz r7,52(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r3,3
	ctx.r10.s64 = ctx.r3.s64 * 3;
	// stw r5,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r5.u32);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r8,20(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r5,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r5.u32);
	// lwz r22,12(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// rlwinm r9,r3,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r8,r3,1,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFC;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// rlwinm r7,r10,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// li r6,-1
	ctx.r6.s64 = -1;
	// stb r21,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r21.u8);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r21,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r21.u32);
	// add r31,r9,r11
	ctx.r31.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r21,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r21.u32);
	// add r24,r8,r11
	ctx.r24.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// add r23,r7,r11
	ctx.r23.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// stw r6,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r6.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82837C20;
	sub_82FA7CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82837C30;
	sub_82FA7CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82fa7cf0
	ctx.lr = 0x82837C40;
	sub_82FA7CF0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r5,4(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82fa7cf0
	ctx.lr = 0x82837C50;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x828380e0
	if (ctx.cr6.eq) goto loc_828380E0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
loc_82837C6C:
	// lhz r11,30(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x828380b0
	if (ctx.cr0.eq) goto loc_828380B0;
loc_82837C84:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82837c98
	if (ctx.cr6.eq) goto loc_82837C98;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82837cac
	if (!ctx.cr6.eq) goto loc_82837CAC;
loc_82837C98:
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82837cac
	if (ctx.cr6.eq) goto loc_82837CAC;
	// addi r29,r1,176
	ctx.r29.s64 = ctx.r1.s64 + 176;
loc_82837CAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82837d58
	if (!ctx.cr6.eq) goto loc_82837D58;
	// lwz r11,60(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82837d58
	if (ctx.cr6.eq) goto loc_82837D58;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lbz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82837768
	ctx.lr = 0x82837CF8;
	sub_82837768(ctx, base);
	// lfs f0,4(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x82837d38
	if (ctx.cr6.gt) goto loc_82837D38;
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f31,r11,r25
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// stfsx f31,r11,r31
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stfsx f31,r11,r24
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, temp.u32);
	// stfsx f31,r11,r23
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// b 0x82837d90
	goto loc_82837D90;
loc_82837D38:
	// bl 0x8283bd78
	ctx.lr = 0x82837D3C;
	sub_8283BD78(ctx, base);
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f1,r11,r25
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// stfsx f1,r11,r31
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
	// stfsx f1,r11,r24
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, temp.u32);
	// stfsx f1,r11,r23
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r23.u32, temp.u32);
	// b 0x82837d90
	goto loc_82837D90;
loc_82837D58:
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lbz r8,0(r22)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82837768
	ctx.lr = 0x82837D90;
	sub_82837768(ctx, base);
loc_82837D90:
	// lbz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82837fa8
	if (ctx.cr6.lt) goto loc_82837FA8;
	// beq cr6,0x82837ef4
	if (ctx.cr6.eq) goto loc_82837EF4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82837e3c
	if (ctx.cr6.lt) goto loc_82837E3C;
	// bne cr6,0x8283809c
	if (!ctx.cr6.eq) goto loc_8283809C;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lbzu r8,1(r22)
	ea = 1 + ctx.r22.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82837768
	ctx.lr = 0x82837DF4;
	sub_82837768(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r10,r27,6
	ctx.r10.s64 = ctx.r27.s64 + 6;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lbzu r8,1(r22)
	ea = 1 + ctx.r22.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// bl 0x82837768
	ctx.lr = 0x82837E2C;
	sub_82837768(ctx, base);
loc_82837E2C:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x8283809c
	goto loc_8283809C;
loc_82837E3C:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lbzu r8,1(r22)
	ea = 1 + ctx.r22.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82837768
	ctx.lr = 0x82837E74;
	sub_82837768(ctx, base);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r27,6
	ctx.r11.s64 = ctx.r27.s64 + 6;
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// lhz r10,30(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82838090
	if (!ctx.cr6.lt) goto loc_82838090;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r27,9
	ctx.r4.s64 = ctx.r27.s64 + 9;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r31,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r31.s64;
	// subf r7,r31,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r31.s64;
	// subf r6,r31,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82837EAC:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82838090
	if (!ctx.cr6.lt) goto loc_82838090;
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lfsx f0,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stfsx f0,r8,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// stfsx f0,r7,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// stfsx f0,r6,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lhz r30,30(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82837eac
	if (ctx.cr6.lt) goto loc_82837EAC;
	// b 0x82838090
	goto loc_82838090;
loc_82837EF4:
	// lhz r11,30(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82837f64
	if (!ctx.cr6.lt) goto loc_82837F64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r27,6
	ctx.r5.s64 = ctx.r27.s64 + 6;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r31,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r31.s64;
	// subf r7,r31,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r31.s64;
	// subf r6,r31,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82837F20:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82837f64
	if (!ctx.cr6.lt) goto loc_82837F64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfsx f0,r4,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r4,30(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82837f20
	if (ctx.cr6.lt) goto loc_82837F20;
loc_82837F64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lbzu r8,1(r22)
	ea = 1 + ctx.r22.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r22.u32 = ea;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// addi r10,r27,6
	ctx.r10.s64 = ctx.r27.s64 + 6;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,124
	ctx.r5.s64 = ctx.r1.s64 + 124;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82837768
	ctx.lr = 0x82837FA4;
	sub_82837768(ctx, base);
	// b 0x82837e2c
	goto loc_82837E2C;
loc_82837FA8:
	// lhz r4,30(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// addi r10,r27,3
	ctx.r10.s64 = ctx.r27.s64 + 3;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82838018
	if (!ctx.cr6.lt) goto loc_82838018;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r27,6
	ctx.r5.s64 = ctx.r27.s64 + 6;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r31,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r31.s64;
	// subf r7,r31,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r31.s64;
	// subf r6,r31,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_82837FD4:
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82838018
	if (!ctx.cr6.lt) goto loc_82838018;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// lfsx f0,r4,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r4,30(r28)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82837fd4
	if (ctx.cr6.lt) goto loc_82837FD4;
loc_82838018:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r27,6
	ctx.r10.s64 = ctx.r27.s64 + 6;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82838090
	if (!ctx.cr6.lt) goto loc_82838090;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r27,9
	ctx.r4.s64 = ctx.r27.s64 + 9;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r31,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r31.s64;
	// subf r7,r31,r24
	ctx.r7.s64 = ctx.r24.s64 - ctx.r31.s64;
	// subf r6,r31,r23
	ctx.r6.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_8283804C:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82838090
	if (!ctx.cr6.lt) goto loc_82838090;
	// lwz r30,8(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwz r29,116(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lfsx f0,r30,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lhz r30,30(r28)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// cmplw cr6,r10,r30
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x8283804c
	if (ctx.cr6.lt) goto loc_8283804C;
loc_82838090:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_8283809C:
	// lhz r11,30(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 30);
	// addi r27,r27,9
	ctx.r27.s64 = ctx.r27.s64 + 9;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82837c84
	if (ctx.cr6.lt) goto loc_82837C84;
loc_828380B0:
	// lhz r11,50(r26)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r26.u32 + 50);
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r25,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r25.u32);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r24,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r24.u32);
	// stw r23,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r23.u32);
	// bne 0x82837c6c
	if (!ctx.cr0.eq) goto loc_82837C6C;
loc_828380E0:
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828380F0"))) PPC_WEAK_FUNC(sub_828380F0);
PPC_FUNC_IMPL(__imp__sub_828380F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x828380F8;
	__savegprlr_25(ctx, base);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r31,128
	ctx.r31.s64 = 128;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82838108:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838210
	if (!ctx.cr6.lt) goto loc_82838210;
	// and. r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828381f0
	if (ctx.cr0.eq) goto loc_828381F0;
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838138
	if (ctx.cr0.eq) goto loc_82838138;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// b 0x828381f0
	goto loc_828381F0;
loc_82838138:
	// lwz r10,44(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r28,r10,4
	ctx.r28.s64 = ctx.r10.s64 + 4;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r28,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r28.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// slw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// stw r27,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r27.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// std r28,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r28.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r25,0(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfsx f13,r28,r9
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r27,4(r27)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lbz r29,0(r6)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// subfic r28,r29,31
	ctx.xer.ca = ctx.r29.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r29.s64;
	// rlwinm r27,r27,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,0(r5)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// srw r29,r25,r29
	ctx.r29.u64 = ctx.r29.u8 & 0x20 ? 0 : (ctx.r25.u32 >> (ctx.r29.u8 & 0x3F));
	// slw r28,r27,r28
	ctx.r28.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r28.u8 & 0x3F));
	// or r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 | ctx.r29.u64;
	// and r10,r29,r10
	ctx.r10.u64 = ctx.r29.u64 & ctx.r10.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r10.u64);
	// lfd f12,-72(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// stb r29,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r29.u8);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_828381F0:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bne cr6,0x82838108
	if (!ctx.cr6.eq) goto loc_82838108;
loc_82838210:
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82838214"))) PPC_WEAK_FUNC(sub_82838214);
PPC_FUNC_IMPL(__imp__sub_82838214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82838218"))) PPC_WEAK_FUNC(sub_82838218);
PPC_FUNC_IMPL(__imp__sub_82838218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82838220;
	__savegprlr_25(ctx, base);
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// li r31,128
	ctx.r31.s64 = 128;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82838230:
	// lhz r11,30(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838334
	if (!ctx.cr6.lt) goto loc_82838334;
	// and. r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838314
	if (ctx.cr0.eq) goto loc_82838314;
	// rlwinm r11,r31,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838260
	if (ctx.cr0.eq) goto loc_82838260;
	// lwz r11,40(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r11.u32);
	// b 0x82838314
	goto loc_82838314;
loc_82838260:
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// li r29,1
	ctx.r29.s64 = 1;
	// lwz r11,48(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// addi r28,r10,2
	ctx.r28.s64 = ctx.r10.s64 + 2;
	// addi r27,r11,1
	ctx.r27.s64 = ctx.r11.s64 + 1;
	// lha r10,0(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// stw r28,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r28.u32);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r27,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r27.u32);
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// std r10,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r10.u64);
	// lfd f0,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r26,0(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subfic r25,r27,31
	ctx.xer.ca = ctx.r27.u32 <= 31;
	ctx.r25.s64 = 31 - ctx.r27.s64;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// slw r28,r28,r25
	ctx.r28.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r25.u8 & 0x3F));
	// lwz r25,0(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// srw r27,r26,r27
	ctx.r27.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r26.u32 >> (ctx.r27.u8 & 0x3F));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfsx f13,r29,r9
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	ctx.f13.f64 = double(temp.f32);
	// or r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 | ctx.r27.u64;
	// and r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 & ctx.r10.u64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r10,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r10.u64);
	// lfd f12,-72(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// lbz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// clrlwi r29,r11,27
	ctx.r29.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// stb r29,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r29.u8);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82838314:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r31,r31,31,1,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// bne cr6,0x82838230
	if (!ctx.cr6.eq) goto loc_82838230;
loc_82838334:
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82838338"))) PPC_WEAK_FUNC(sub_82838338);
PPC_FUNC_IMPL(__imp__sub_82838338) {
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
	// lhz r11,34(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 34);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lhz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mullw r31,r11,r10
	ctx.r31.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82837980
	ctx.lr = 0x82838360;
	sub_82837980(ctx, base);
	// lhz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r3,3
	ctx.r8.s64 = ctx.r3.s64 + 3;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// addi r7,r31,31
	ctx.r7.s64 = ctx.r31.s64 + 31;
	// rlwinm r10,r11,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r8,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r10,r10,37
	ctx.r10.s64 = ctx.r10.s64 + 37;
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r7,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
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

__attribute__((alias("__imp__sub_828383B8"))) PPC_WEAK_FUNC(sub_828383B8);
PPC_FUNC_IMPL(__imp__sub_828383B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x828383C0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r10,32(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r9,34(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 34);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lhz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 36);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mullw r28,r9,r10
	ctx.r28.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r28,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// addi r10,r29,127
	ctx.r10.s64 = ctx.r29.s64 + 127;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r11,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r25,r10,0,0,24
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// bl 0x82837980
	ctx.lr = 0x828383FC;
	sub_82837980(ctx, base);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r9,r28,31
	ctx.r9.s64 = ctx.r28.s64 + 31;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r9,3
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 3;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// addi r9,r3,3
	ctx.r9.s64 = ctx.r3.s64 + 3;
	// rlwinm r5,r10,0,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// rlwinm r10,r9,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lis r9,4660
	ctx.r9.s64 = 305397760;
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r9,r9,22136
	ctx.r9.u64 = ctx.r9.u64 | 22136;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lhz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 32);
	// sth r11,50(r31)
	PPC_STORE_U16(ctx.r31.u32 + 50, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82838460;
	sub_82FA7CF0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82838470:
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r9,-12(r10)
	PPC_STORE_U32(ctx.r10.u32 + -12, ctx.r9.u32);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82838470
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82838470;
	// lhz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x828384a8
	if (ctx.cr0.eq) goto loc_828384A8;
loc_8283848C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,255
	ctx.r9.s64 = 255;
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lhz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 36);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x8283848c
	if (ctx.cr6.lt) goto loc_8283848C;
loc_828384A8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lhz r3,34(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 34);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82837b58
	ctx.lr = 0x828384B8;
	sub_82837B58(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828384C0"))) PPC_WEAK_FUNC(sub_828384C0);
PPC_FUNC_IMPL(__imp__sub_828384C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x828384C8;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828384f4
	if (!ctx.cr6.eq) goto loc_828384F4;
	// bl 0x82835908
	ctx.lr = 0x828384F0;
	sub_82835908(ctx, base);
	// b 0x82838ba0
	goto loc_82838BA0;
loc_828384F4:
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// rlwinm r30,r5,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r5,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x18;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82838ba0
	if (ctx.cr0.eq) goto loc_82838BA0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r25,1
	ctx.r25.s64 = 1;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
loc_82838528:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// ble cr6,0x82838544
	if (!ctx.cr6.gt) goto loc_82838544;
	// addi r24,r24,-32
	ctx.r24.s64 = ctx.r24.s64 + -32;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r23
	// dcbt r11,r30
loc_82838544:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82838b7c
	if (ctx.cr0.eq) goto loc_82838B7C;
loc_82838554:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82838568:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838654
	if (!ctx.cr6.lt) goto loc_82838654;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8283863c
	if (ctx.cr0.eq) goto loc_8283863C;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838598
	if (ctx.cr0.eq) goto loc_82838598;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x8283863c
	goto loc_8283863C;
loc_82838598:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lwz r21,4(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// lfsx f13,r21,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// clrlwi r28,r9,27
	ctx.r28.u64 = ctx.r9.u32 & 0x1F;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8283863C:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838568
	if (!ctx.cr6.eq) goto loc_82838568;
loc_82838654:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828386ac
	if (!ctx.cr6.eq) goto loc_828386AC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828386ac
	if (ctx.cr6.eq) goto loc_828386AC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828386a8
	if (!ctx.cr6.eq) goto loc_828386A8;
	// lfs f0,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x828386a0
	if (ctx.cr6.gt) goto loc_828386A0;
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x828386a8
	goto loc_828386A8;
loc_828386A0:
	// bl 0x8283bd78
	ctx.lr = 0x828386A4;
	sub_8283BD78(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_828386A8:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_828386AC:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82838a44
	if (ctx.cr6.eq) goto loc_82838A44;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82838920
	if (ctx.cr6.eq) goto loc_82838920;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x828386f4
	if (ctx.cr6.eq) goto loc_828386F4;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828386ec
	if (!ctx.cr6.eq) goto loc_828386EC;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828386ec
	if (ctx.cr6.eq) goto loc_828386EC;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_828386EC:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// b 0x82838b60
	goto loc_82838B60;
loc_828386F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82838710:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828387fc
	if (!ctx.cr6.lt) goto loc_828387FC;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828387e4
	if (ctx.cr0.eq) goto loc_828387E4;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838740
	if (ctx.cr0.eq) goto loc_82838740;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x828387e4
	goto loc_828387E4;
loc_82838740:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r21,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r21.s64 = 31 - ctx.r11.s64;
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r20,0(r30)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r19,4(r27)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r28,r4,27
	ctx.r28.u64 = ctx.r4.u32 & 0x1F;
	// slw r10,r10,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r21.u8 & 0x3F));
	// srw r11,r20,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r20.u32 >> (ctx.r11.u8 & 0x3F));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// lfsx f13,r19,r8
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_828387E4:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838710
	if (!ctx.cr6.eq) goto loc_82838710;
loc_828387FC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82838818
	if (!ctx.cr6.eq) goto loc_82838818;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82838818
	if (ctx.cr6.eq) goto loc_82838818;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82838818:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 6;
	// li r7,128
	ctx.r7.s64 = 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82838838:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838b60
	if (!ctx.cr6.lt) goto loc_82838B60;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838904
	if (ctx.cr0.eq) goto loc_82838904;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838868
	if (ctx.cr0.eq) goto loc_82838868;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82838904
	goto loc_82838904;
loc_82838868:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lha r21,0(r10)
	ctx.r21.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// std r21,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r21.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f13,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838904:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838838
	if (!ctx.cr6.eq) goto loc_82838838;
	// b 0x82838b60
	goto loc_82838B60;
loc_82838920:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_8283893C:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838a20
	if (!ctx.cr6.lt) goto loc_82838A20;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838a08
	if (ctx.cr0.eq) goto loc_82838A08;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8283896c
	if (ctx.cr0.eq) goto loc_8283896C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82838a08
	goto loc_82838A08;
loc_8283896C:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lha r21,0(r10)
	ctx.r21.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// std r21,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r21.u64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfsx f13,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838A08:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x8283893c
	if (!ctx.cr6.eq) goto loc_8283893C;
loc_82838A20:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82838a3c
	if (!ctx.cr6.eq) goto loc_82838A3C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82838a3c
	if (ctx.cr6.eq) goto loc_82838A3C;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82838A3C:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// b 0x82838b60
	goto loc_82838B60;
loc_82838A44:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82838a60
	if (!ctx.cr6.eq) goto loc_82838A60;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82838a60
	if (ctx.cr6.eq) goto loc_82838A60;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82838A60:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,6
	ctx.r10.s64 = ctx.r26.s64 + 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82838A80:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838b60
	if (!ctx.cr6.lt) goto loc_82838B60;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838b48
	if (ctx.cr0.eq) goto loc_82838B48;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838ab0
	if (ctx.cr0.eq) goto loc_82838AB0;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82838b48
	goto loc_82838B48;
loc_82838AB0:
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lha r10,0(r10)
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// stw r4,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r4.u32);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r21,4(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// lfsx f13,r21,r8
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838B48:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838a80
	if (!ctx.cr6.eq) goto loc_82838A80;
loc_82838B60:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r26,9
	ctx.r26.s64 = ctx.r26.s64 + 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82838554
	if (ctx.cr6.lt) goto loc_82838554;
loc_82838B7C:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// lhz r11,50(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// blt cr6,0x82838528
	if (ctx.cr6.lt) goto loc_82838528;
loc_82838BA0:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82838BB0"))) PPC_WEAK_FUNC(sub_82838BB0);
PPC_FUNC_IMPL(__imp__sub_82838BB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82838BB8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,72(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 72);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// rlwinm r30,r5,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// rlwinm r28,r5,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x18;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82839274
	if (ctx.cr0.eq) goto loc_82839274;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r25,1
	ctx.r25.s64 = 1;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
loc_82838C00:
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// ble cr6,0x82838c1c
	if (!ctx.cr6.gt) goto loc_82838C1C;
	// addi r24,r24,-32
	ctx.r24.s64 = ctx.r24.s64 + -32;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r23
	// dcbt r11,r30
loc_82838C1C:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82839250
	if (ctx.cr0.eq) goto loc_82839250;
loc_82838C2C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82838C40:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838d28
	if (!ctx.cr6.lt) goto loc_82838D28;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838d10
	if (ctx.cr0.eq) goto loc_82838D10;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838c70
	if (ctx.cr0.eq) goto loc_82838C70;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82838d10
	goto loc_82838D10;
loc_82838C70:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r21,4(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// srw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// lfsx f13,r21,r8
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// clrlwi r28,r9,27
	ctx.r28.u64 = ctx.r9.u32 & 0x1F;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838D10:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838c40
	if (!ctx.cr6.eq) goto loc_82838C40;
loc_82838D28:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82838d80
	if (!ctx.cr6.eq) goto loc_82838D80;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82838d80
	if (ctx.cr6.eq) goto loc_82838D80;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82838d7c
	if (!ctx.cr6.eq) goto loc_82838D7C;
	// lfs f0,4(r23)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x82838d74
	if (ctx.cr6.gt) goto loc_82838D74;
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82838d7c
	goto loc_82838D7C;
loc_82838D74:
	// bl 0x8283bd78
	ctx.lr = 0x82838D78;
	sub_8283BD78(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838D7C:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82838D80:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82839118
	if (ctx.cr6.eq) goto loc_82839118;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82838ff0
	if (ctx.cr6.eq) goto loc_82838FF0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82838dc8
	if (ctx.cr6.eq) goto loc_82838DC8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82838dc0
	if (!ctx.cr6.eq) goto loc_82838DC0;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82838dc0
	if (ctx.cr6.eq) goto loc_82838DC0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82838DC0:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// b 0x82839234
	goto loc_82839234;
loc_82838DC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82838DE4:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82838ec8
	if (!ctx.cr6.lt) goto loc_82838EC8;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838eb0
	if (ctx.cr0.eq) goto loc_82838EB0;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838e14
	if (ctx.cr0.eq) goto loc_82838E14;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82838eb0
	goto loc_82838EB0;
loc_82838E14:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r21,0(r10)
	ctx.r21.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r21,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r21.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r3,r3,r28
	ctx.r3.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r28.u8 & 0x3F));
	// lfsx f13,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// or r3,r3,r11
	ctx.r3.u64 = ctx.r3.u64 | ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// and r9,r3,r9
	ctx.r9.u64 = ctx.r3.u64 & ctx.r9.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838EB0:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838de4
	if (!ctx.cr6.eq) goto loc_82838DE4;
loc_82838EC8:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82838ee4
	if (!ctx.cr6.eq) goto loc_82838EE4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82838ee4
	if (ctx.cr6.eq) goto loc_82838EE4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82838EE4:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 6;
	// li r7,128
	ctx.r7.s64 = 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82838F04:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82839234
	if (!ctx.cr6.lt) goto loc_82839234;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838fd4
	if (ctx.cr0.eq) goto loc_82838FD4;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82838f34
	if (ctx.cr0.eq) goto loc_82838F34;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82838fd4
	goto loc_82838FD4;
loc_82838F34:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r21,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r21.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfd f13,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r10,r21
	ctx.r10.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r21.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f0,r28,r8
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// clrlwi r28,r4,27
	ctx.r28.u64 = ctx.r4.u32 & 0x1F;
	// fadds f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82838FD4:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82838f04
	if (!ctx.cr6.eq) goto loc_82838F04;
	// b 0x82839234
	goto loc_82839234;
loc_82838FF0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_8283900C:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828390f4
	if (!ctx.cr6.lt) goto loc_828390F4;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828390dc
	if (ctx.cr0.eq) goto loc_828390DC;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8283903c
	if (ctx.cr0.eq) goto loc_8283903C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x828390dc
	goto loc_828390DC;
loc_8283903C:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r21,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r21.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// slw r9,r25,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r20,4(r27)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r11,r21
	ctx.r11.u64 = ctx.r21.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r21.u8 & 0x3F));
	// or r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 | ctx.r4.u64;
	// lfsx f13,r20,r8
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// and r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_828390DC:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x8283900c
	if (!ctx.cr6.eq) goto loc_8283900C;
loc_828390F4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82839110
	if (!ctx.cr6.eq) goto loc_82839110;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82839110
	if (ctx.cr6.eq) goto loc_82839110;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82839110:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// b 0x82839234
	goto loc_82839234;
loc_82839118:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82839134
	if (!ctx.cr6.eq) goto loc_82839134;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82839134
	if (ctx.cr6.eq) goto loc_82839134;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82839134:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,6
	ctx.r10.s64 = ctx.r26.s64 + 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82839154:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82839234
	if (!ctx.cr6.lt) goto loc_82839234;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8283921c
	if (ctx.cr0.eq) goto loc_8283921C;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839184
	if (ctx.cr0.eq) goto loc_82839184;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x8283921c
	goto loc_8283921C;
loc_82839184:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// slw r9,r25,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r10.u8 & 0x3F));
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r21,4(r27)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// lfsx f13,r21,r8
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8283921C:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82839154
	if (!ctx.cr6.eq) goto loc_82839154;
loc_82839234:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r26,9
	ctx.r26.s64 = ctx.r26.s64 + 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82838c2c
	if (ctx.cr6.lt) goto loc_82838C2C;
loc_82839250:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// cmpw cr6,r22,r10
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r10.s32, ctx.xer);
	// lhz r11,50(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r23,r10,r23
	ctx.r23.u64 = ctx.r10.u64 + ctx.r23.u64;
	// blt cr6,0x82838c00
	if (ctx.cr6.lt) goto loc_82838C00;
loc_82839274:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82839284"))) PPC_WEAK_FUNC(sub_82839284);
PPC_FUNC_IMPL(__imp__sub_82839284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839288"))) PPC_WEAK_FUNC(sub_82839288);
PPC_FUNC_IMPL(__imp__sub_82839288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82839290;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r25,100(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// dcbt r0,r11
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// dcbt r0,r11
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// dcbt r10,r11
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r11
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// dcbt r10,r11
	// lwz r15,16(r3)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r17,4
	ctx.r17.s64 = 4;
	// addi r18,r25,28
	ctx.r18.s64 = ctx.r25.s64 + 28;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
loc_828392E8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828392fc
	if (ctx.cr6.eq) goto loc_828392FC;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_828392FC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828392e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828392E8;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r16,r6,24
	ctx.r16.u64 = ctx.r6.u32 & 0xFF;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// li r24,1
	ctx.r24.s64 = 1;
loc_8283931C:
	// slw r11,r24,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 & ctx.r16.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839348
	if (ctx.cr0.eq) goto loc_82839348;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,8(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82839348
	if (ctx.cr6.eq) goto loc_82839348;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r17,r11,r25
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, ctx.r17.u32);
loc_82839348:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x8283931c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8283931C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
loc_8283936C:
	// slw r11,r24,r19
	ctx.r11.u64 = ctx.r19.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r19.u8 & 0x3F));
	// and. r11,r11,r16
	ctx.r11.u64 = ctx.r11.u64 & ctx.r16.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839b20
	if (ctx.cr0.eq) goto loc_82839B20;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82839b20
	if (!ctx.cr6.eq) goto loc_82839B20;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// mtctr r17
	ctx.ctr.u64 = ctx.r17.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
loc_828393A4:
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// clrlwi r5,r8,24
	ctx.r5.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x828393bc
	if (!ctx.cr6.lt) goto loc_828393BC;
	// clrlwi r8,r10,24
	ctx.r8.u64 = ctx.r10.u32 & 0xFF;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_828393BC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bdnz 0x828393a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828393A4;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// dcbt r10,r9
	// addi r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r10,r25
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r25.u32);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x828393f4
	if (ctx.cr6.eq) goto loc_828393F4;
	// li r8,255
	ctx.r8.s64 = 255;
	// stbx r8,r9,r6
	PPC_STORE_U8(ctx.r9.u32 + ctx.r6.u32, ctx.r8.u8);
loc_828393F4:
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r8,r11,7
	ctx.r8.s64 = ctx.r11.s64 + 7;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r9,r10,r25
	PPC_STORE_U32(ctx.r10.u32 + ctx.r25.u32, ctx.r9.u32);
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r9,8(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stbx r11,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r11.u8);
	// stwx r17,r8,r25
	PPC_STORE_U32(ctx.r8.u32 + ctx.r25.u32, ctx.r17.u32);
	// lwz r10,12(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r10,52(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,16(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82839b20
	if (ctx.cr6.eq) goto loc_82839B20;
	// lhz r8,28(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 28);
	// lwz r9,0(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lhz r10,26(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 26);
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r8,24(r27)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r27.u32 + 24);
	// lbz r7,38(r27)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r27.u32 + 38);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lhz r8,72(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// add r5,r10,r15
	ctx.r5.u64 = ctx.r10.u64 + ctx.r15.u64;
	// beq 0x82839afc
	if (ctx.cr0.eq) goto loc_82839AFC;
	// lwz r9,4(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// rlwinm r30,r5,0,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r28,r5,3,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0x18;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// li r23,0
	ctx.r23.s64 = 0;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82839b20
	if (ctx.cr0.eq) goto loc_82839B20;
loc_82839498:
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r23,32
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 32, ctx.xer);
	// ble cr6,0x828394b4
	if (!ctx.cr6.gt) goto loc_828394B4;
	// addi r23,r23,-32
	ctx.r23.s64 = ctx.r23.s64 + -32;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r22
	// dcbt r11,r30
loc_828394B4:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82839ad4
	if (ctx.cr0.eq) goto loc_82839AD4;
loc_828394C4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_828394D8:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x828395bc
	if (!ctx.cr6.lt) goto loc_828395BC;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828395a4
	if (ctx.cr0.eq) goto loc_828395A4;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839508
	if (ctx.cr0.eq) goto loc_82839508;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x828395a4
	goto loc_828395A4;
loc_82839508:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r14,0(r10)
	ctx.r14.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// std r14,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r14.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f13,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_828395A4:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x828394d8
	if (!ctx.cr6.eq) goto loc_828394D8;
loc_828395BC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82839614
	if (!ctx.cr6.eq) goto loc_82839614;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82839614
	if (ctx.cr6.eq) goto loc_82839614;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82839610
	if (!ctx.cr6.eq) goto loc_82839610;
	// lfs f0,4(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x82839608
	if (ctx.cr6.gt) goto loc_82839608;
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// b 0x82839610
	goto loc_82839610;
loc_82839608:
	// bl 0x8283bd78
	ctx.lr = 0x8283960C;
	sub_8283BD78(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82839610:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82839614:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x8283999c
	if (ctx.cr6.eq) goto loc_8283999C;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82839878
	if (ctx.cr6.eq) goto loc_82839878;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x8283965c
	if (ctx.cr6.eq) goto loc_8283965C;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82839654
	if (!ctx.cr6.eq) goto loc_82839654;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82839654
	if (ctx.cr6.eq) goto loc_82839654;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82839654:
	// addi r29,r29,24
	ctx.r29.s64 = ctx.r29.s64 + 24;
	// b 0x82839ab8
	goto loc_82839AB8;
loc_8283965C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82839678:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82839758
	if (!ctx.cr6.lt) goto loc_82839758;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839740
	if (ctx.cr0.eq) goto loc_82839740;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828396a8
	if (ctx.cr0.eq) goto loc_828396A8;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82839740
	goto loc_82839740;
loc_828396A8:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 | ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// and r9,r4,r9
	ctx.r9.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// clrldi r10,r9,32
	ctx.r10.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfsx f13,r3,r8
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82839740:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82839678
	if (!ctx.cr6.eq) goto loc_82839678;
loc_82839758:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82839774
	if (!ctx.cr6.eq) goto loc_82839774;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82839774
	if (ctx.cr6.eq) goto loc_82839774;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82839774:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r26,6
	ctx.r11.s64 = ctx.r26.s64 + 6;
	// li r7,128
	ctx.r7.s64 = 128;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
loc_82839794:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82839ab8
	if (!ctx.cr6.lt) goto loc_82839AB8;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8283985c
	if (ctx.cr0.eq) goto loc_8283985C;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828397c4
	if (ctx.cr0.eq) goto loc_828397C4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x8283985c
	goto loc_8283985C;
loc_828397C4:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// slw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// srw r11,r4,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 >> (ctx.r11.u8 & 0x3F));
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r3,r3,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r3,r3,r28
	ctx.r3.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r28.u8 & 0x3F));
	// or r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 | ctx.r11.u64;
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// and r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ctx.r9.u64;
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfsx f13,r4,r8
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_8283985C:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82839794
	if (!ctx.cr6.eq) goto loc_82839794;
	// b 0x82839ab8
	goto loc_82839AB8;
loc_82839878:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,3
	ctx.r10.s64 = ctx.r26.s64 + 3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// li r7,128
	ctx.r7.s64 = 128;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82839894:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82839978
	if (!ctx.cr6.lt) goto loc_82839978;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839960
	if (ctx.cr0.eq) goto loc_82839960;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828398c4
	if (ctx.cr0.eq) goto loc_828398C4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82839960
	goto loc_82839960;
loc_828398C4:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r14,0(r10)
	ctx.r14.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// std r14,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r14.u64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// lfd f0,128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// slw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r14,4(r27)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// rlwinm r11,r10,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFC;
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f13,r14,r8
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r28,r10,27
	ctx.r28.u64 = ctx.r10.u32 & 0x1F;
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82839960:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x82839894
	if (!ctx.cr6.eq) goto loc_82839894;
loc_82839978:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82839994
	if (!ctx.cr6.eq) goto loc_82839994;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82839994
	if (ctx.cr6.eq) goto loc_82839994;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82839994:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// b 0x82839ab8
	goto loc_82839AB8;
loc_8283999C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x828399b8
	if (!ctx.cr6.eq) goto loc_828399B8;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r10,60(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x828399b8
	if (ctx.cr6.eq) goto loc_828399B8;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_828399B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r26,6
	ctx.r10.s64 = ctx.r26.s64 + 6;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// li r7,128
	ctx.r7.s64 = 128;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_828399D8:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82839ab8
	if (!ctx.cr6.lt) goto loc_82839AB8;
	// and. r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839aa0
	if (ctx.cr0.eq) goto loc_82839AA0;
	// rlwinm r11,r7,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82839a08
	if (ctx.cr0.eq) goto loc_82839A08;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// b 0x82839aa0
	goto loc_82839AA0;
loc_82839A08:
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// clrlwi r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r4,r10,4
	ctx.r4.s64 = ctx.r10.s64 + 4;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// subfic r28,r11,31
	ctx.xer.ca = ctx.r11.u32 <= 31;
	ctx.r28.s64 = 31 - ctx.r11.s64;
	// lwa r10,0(r10)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + 0));
	// stw r4,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r4.u32);
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r3,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r3.u32);
	// slw r9,r24,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r24.u32 << (ctx.r10.u8 & 0x3F));
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// srw r3,r3,r11
	ctx.r3.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r11.u8 & 0x3F));
	// rlwinm r4,r4,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// slw r4,r4,r28
	ctx.r4.u64 = ctx.r28.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r28.u8 & 0x3F));
	// lwz r28,4(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// lfsx f13,r28,r8
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// and r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 & ctx.r9.u64;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// rlwinm r11,r9,29,3,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// clrlwi r28,r9,27
	ctx.r28.u64 = ctx.r9.u32 & 0x1F;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
loc_82839AA0:
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmplwi cr6,r7,16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 16, ctx.xer);
	// bne cr6,0x828399d8
	if (!ctx.cr6.eq) goto loc_828399D8;
loc_82839AB8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r26,r26,9
	ctx.r26.s64 = ctx.r26.s64 + 9;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828394c4
	if (ctx.cr6.lt) goto loc_828394C4;
loc_82839AD4:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lhz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// lhz r11,50(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r23,r11,r23
	ctx.r23.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r22,r10,r22
	ctx.r22.u64 = ctx.r10.u64 + ctx.r22.u64;
	// blt cr6,0x82839498
	if (ctx.cr6.lt) goto loc_82839498;
	// b 0x82839b20
	goto loc_82839B20;
loc_82839AFC:
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r9,50(r25)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r25.u32 + 50);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mullw r7,r9,r8
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x828384c0
	ctx.lr = 0x82839B20;
	sub_828384C0(ctx, base);
loc_82839B20:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmpwi cr6,r19,4
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 4, ctx.xer);
	// blt cr6,0x8283936c
	if (ctx.cr6.lt) goto loc_8283936C;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82839B40"))) PPC_WEAK_FUNC(sub_82839B40);
PPC_FUNC_IMPL(__imp__sub_82839B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// stw r3,29232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 29232, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839B4C"))) PPC_WEAK_FUNC(sub_82839B4C);
PPC_FUNC_IMPL(__imp__sub_82839B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839B50"))) PPC_WEAK_FUNC(sub_82839B50);
PPC_FUNC_IMPL(__imp__sub_82839B50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// li r7,15
	ctx.r7.s64 = 15;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// sth r9,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r9.u16);
	// sth r8,74(r3)
	PPC_STORE_U16(ctx.r3.u32 + 74, ctx.r8.u16);
	// stb r7,68(r3)
	PPC_STORE_U8(ctx.r3.u32 + 68, ctx.r7.u8);
	// stb r11,69(r3)
	PPC_STORE_U8(ctx.r3.u32 + 69, ctx.r11.u8);
	// stb r11,70(r3)
	PPC_STORE_U8(ctx.r3.u32 + 70, ctx.r11.u8);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// stb r6,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r6.u8);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BC0"))) PPC_WEAK_FUNC(sub_82839BC0);
PPC_FUNC_IMPL(__imp__sub_82839BC0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BC8"))) PPC_WEAK_FUNC(sub_82839BC8);
PPC_FUNC_IMPL(__imp__sub_82839BC8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,72(r3)
	PPC_STORE_U16(ctx.r3.u32 + 72, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BD0"))) PPC_WEAK_FUNC(sub_82839BD0);
PPC_FUNC_IMPL(__imp__sub_82839BD0) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r4,16
	ctx.r11.u64 = ctx.r4.u32 & 0xFFFF;
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BDC"))) PPC_WEAK_FUNC(sub_82839BDC);
PPC_FUNC_IMPL(__imp__sub_82839BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839BE0"))) PPC_WEAK_FUNC(sub_82839BE0);
PPC_FUNC_IMPL(__imp__sub_82839BE0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BE8"))) PPC_WEAK_FUNC(sub_82839BE8);
PPC_FUNC_IMPL(__imp__sub_82839BE8) {
	PPC_FUNC_PROLOGUE();
	// sth r4,74(r3)
	PPC_STORE_U16(ctx.r3.u32 + 74, ctx.r4.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BF0"))) PPC_WEAK_FUNC(sub_82839BF0);
PPC_FUNC_IMPL(__imp__sub_82839BF0) {
	PPC_FUNC_PROLOGUE();
	// stw r4,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839BF8"))) PPC_WEAK_FUNC(sub_82839BF8);
PPC_FUNC_IMPL(__imp__sub_82839BF8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C00"))) PPC_WEAK_FUNC(sub_82839C00);
PPC_FUNC_IMPL(__imp__sub_82839C00) {
	PPC_FUNC_PROLOGUE();
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C08"))) PPC_WEAK_FUNC(sub_82839C08);
PPC_FUNC_IMPL(__imp__sub_82839C08) {
	PPC_FUNC_PROLOGUE();
	// stb r4,71(r3)
	PPC_STORE_U8(ctx.r3.u32 + 71, ctx.r4.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C10"))) PPC_WEAK_FUNC(sub_82839C10);
PPC_FUNC_IMPL(__imp__sub_82839C10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C18"))) PPC_WEAK_FUNC(sub_82839C18);
PPC_FUNC_IMPL(__imp__sub_82839C18) {
	PPC_FUNC_PROLOGUE();
	// stw r4,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C20"))) PPC_WEAK_FUNC(sub_82839C20);
PPC_FUNC_IMPL(__imp__sub_82839C20) {
	PPC_FUNC_PROLOGUE();
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C28"))) PPC_WEAK_FUNC(sub_82839C28);
PPC_FUNC_IMPL(__imp__sub_82839C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839C30"))) PPC_WEAK_FUNC(sub_82839C30);
PPC_FUNC_IMPL(__imp__sub_82839C30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82839C38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82839d54
	if (ctx.cr6.eq) goto loc_82839D54;
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82839e74
	if (ctx.cr0.eq) goto loc_82839E74;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82839C68:
	// lwz r7,88(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82839c84
	if (ctx.cr6.eq) goto loc_82839C84;
	// lhzx r10,r29,r7
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + ctx.r7.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82839d2c
	if (!ctx.cr6.eq) goto loc_82839D2C;
loc_82839C84:
	// lhz r9,30(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82839d2c
	if (!ctx.cr0.gt) goto loc_82839D2C;
loc_82839C98:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r6,r10,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// clrlwi. r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r6,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// ble 0x82839d08
	if (!ctx.cr0.gt) goto loc_82839D08;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// ble cr6,0x82839cf0
	if (!ctx.cr6.gt) goto loc_82839CF0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82839d08
	if (!ctx.cr6.eq) goto loc_82839D08;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r6,r6,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r6,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// or r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 | ctx.r11.u64;
	// subfe r10,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82839d00
	goto loc_82839D00;
loc_82839CF0:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r10,r10,0,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// addic r6,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r6.s64 = ctx.r10.s64 + -1;
	// subfe r10,r6,r10
	temp.u8 = (~ctx.r6.u32 + ctx.r10.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82839D00:
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82839D08:
	// addi r8,r8,9
	ctx.r8.s64 = ctx.r8.s64 + 9;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82839c98
	if (ctx.cr6.lt) goto loc_82839C98;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82839d2c
	if (ctx.cr6.eq) goto loc_82839D2C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8283b9e0
	ctx.lr = 0x82839D28;
	sub_8283B9E0(ctx, base);
	// b 0x82839d40
	goto loc_82839D40;
loc_82839D2C:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82839d40
	if (!ctx.cr6.eq) goto loc_82839D40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x8283ba38
	ctx.lr = 0x82839D40;
	sub_8283BA38(ctx, base);
loc_82839D40:
	// lhz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82839c68
	if (ctx.cr6.lt) goto loc_82839C68;
	// b 0x82839e74
	goto loc_82839E74;
loc_82839D54:
	// lhz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 72);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82839e74
	if (ctx.cr0.eq) goto loc_82839E74;
loc_82839D6C:
	// lhz r9,30(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82839e54
	if (!ctx.cr0.gt) goto loc_82839E54;
loc_82839D80:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// subfic r8,r10,24
	ctx.xer.ca = ctx.r10.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r10.s64;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// rlwinm r4,r9,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// slw r8,r4,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r8.u8 & 0x3F));
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82839dec
	if (ctx.cr6.eq) goto loc_82839DEC;
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// beq cr6,0x82839de4
	if (ctx.cr6.eq) goto loc_82839DE4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82839e04
	if (!ctx.cr6.eq) goto loc_82839E04;
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// lbzu r8,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// addi r3,r9,24
	ctx.r3.s64 = ctx.r9.s64 + 24;
	// rlwinm r4,r4,0,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r8,r8,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// slw r4,r4,r3
	ctx.r4.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r3.u8 & 0x3F));
	// addi r9,r9,21
	ctx.r9.s64 = ctx.r9.s64 + 21;
	// or r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 | ctx.r11.u64;
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// b 0x82839dfc
	goto loc_82839DFC;
loc_82839DE4:
	// subfic r8,r10,24
	ctx.xer.ca = ctx.r10.u32 <= 24;
	ctx.r8.s64 = 24 - ctx.r10.s64;
	// b 0x82839df0
	goto loc_82839DF0;
loc_82839DEC:
	// subfic r8,r10,21
	ctx.xer.ca = ctx.r10.u32 <= 21;
	ctx.r8.s64 = 21 - ctx.r10.s64;
loc_82839DF0:
	// lbz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// rlwinm r9,r9,0,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
loc_82839DFC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
loc_82839E04:
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82839e14
	if (!ctx.cr6.gt) goto loc_82839E14;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
loc_82839E14:
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// blt cr6,0x82839e44
	if (ctx.cr6.lt) goto loc_82839E44;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r8,r10,0,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF8;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r7,r8,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r8.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82839E30:
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// stb r9,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r9.u8);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bdnz 0x82839e30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82839E30;
loc_82839E44:
	// lhz r9,30(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// addi r6,r6,9
	ctx.r6.s64 = ctx.r6.s64 + 9;
	// cmpw cr6,r6,r9
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82839d80
	if (ctx.cr6.lt) goto loc_82839D80;
loc_82839E54:
	// lhz r9,72(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 72);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82839d6c
	if (ctx.cr6.lt) goto loc_82839D6C;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82839e74
	if (ctx.cr6.eq) goto loc_82839E74;
	// rlwinm r11,r11,8,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// stb r11,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r11.u8);
loc_82839E74:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82839E7C"))) PPC_WEAK_FUNC(sub_82839E7C);
PPC_FUNC_IMPL(__imp__sub_82839E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839E80"))) PPC_WEAK_FUNC(sub_82839E80);
PPC_FUNC_IMPL(__imp__sub_82839E80) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839E88"))) PPC_WEAK_FUNC(sub_82839E88);
PPC_FUNC_IMPL(__imp__sub_82839E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lhz r8,30(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 30);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x82839f18
	if (!ctx.cr0.gt) goto loc_82839F18;
loc_82839EA4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
	// srw r9,r3,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82839f04
	if (ctx.cr6.lt) goto loc_82839F04;
	// beq cr6,0x82839ef8
	if (ctx.cr6.eq) goto loc_82839EF8;
	// cmplwi cr6,r9,3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 3, ctx.xer);
	// blt cr6,0x82839eec
	if (ctx.cr6.lt) goto loc_82839EEC;
	// bne cr6,0x82839f08
	if (!ctx.cr6.eq) goto loc_82839F08;
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 | ctx.r3.u64;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r6,r6,16
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 16);
	// or r3,r6,r9
	ctx.r3.u64 = ctx.r6.u64 | ctx.r9.u64;
	// b 0x82839f04
	goto loc_82839F04;
loc_82839EEC:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// b 0x82839f00
	goto loc_82839F00;
loc_82839EF8:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// rotlwi r9,r9,16
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 16);
loc_82839F00:
	// or r3,r9,r3
	ctx.r3.u64 = ctx.r9.u64 | ctx.r3.u64;
loc_82839F04:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82839F08:
	// addi r7,r7,9
	ctx.r7.s64 = ctx.r7.s64 + 9;
	// addi r10,r10,24
	ctx.r10.s64 = ctx.r10.s64 + 24;
	// cmpw cr6,r7,r8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82839ea4
	if (ctx.cr6.lt) goto loc_82839EA4;
loc_82839F18:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839F20"))) PPC_WEAK_FUNC(sub_82839F20);
PPC_FUNC_IMPL(__imp__sub_82839F20) {
	PPC_FUNC_PROLOGUE();
	// li r9,4
	ctx.r9.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// addi r8,r3,32
	ctx.r8.s64 = ctx.r3.s64 + 32;
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82839F3C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82839f64
	if (ctx.cr6.eq) goto loc_82839F64;
	// rotlwi r9,r9,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r9,r9,0,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFC;
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r9,3,27,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x18;
	// stbx r9,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u8);
	// b 0x82839f6c
	goto loc_82839F6C;
loc_82839F64:
	// stwx r6,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r6.u32);
	// stbx r6,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u8);
loc_82839F6C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82839f3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82839F3C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82839F7C"))) PPC_WEAK_FUNC(sub_82839F7C);
PPC_FUNC_IMPL(__imp__sub_82839F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82839F80"))) PPC_WEAK_FUNC(sub_82839F80);
PPC_FUNC_IMPL(__imp__sub_82839F80) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82839F9C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a028
	if (ctx.cr6.eq) goto loc_8283A028;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82839ff8
	if (!ctx.cr6.eq) goto loc_82839FF8;
	// lbz r8,71(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// slw r7,r6,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// and. r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82839ff8
	if (ctx.cr0.eq) goto loc_82839FF8;
	// add r8,r9,r3
	ctx.r8.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// lbz r8,32(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r30,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r30.s64 = 31 - ctx.r8.s64;
	// srw r8,r31,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r8.u8 & 0x3F));
	// slw r7,r7,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r30.u8 & 0x3F));
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
loc_82839FF8:
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r7,r4,24
	ctx.r7.u64 = ctx.r4.u32 & 0xFF;
	// addi r8,r11,32
	ctx.r8.s64 = ctx.r11.s64 + 32;
	// lbz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// clrlwi r7,r8,27
	ctx.r7.u64 = ctx.r8.u32 & 0x1F;
	// rlwinm r8,r8,29,27,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1C;
	// stb r7,32(r11)
	PPC_STORE_U8(ctx.r11.u32 + 32, ctx.r7.u8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8283A028:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82839f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82839F9C;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283A040"))) PPC_WEAK_FUNC(sub_8283A040);
PPC_FUNC_IMPL(__imp__sub_8283A040) {
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
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r6,24
	ctx.r30.u64 = ctx.r6.u32 & 0xFF;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// subf r6,r9,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r9.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8283A074:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// and. r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x8283a0a8
	if (ctx.cr0.eq) goto loc_8283A0A8;
	// lhz r9,28(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 28);
	// lwzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lhz r10,26(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 26);
	// mullw r8,r8,r9
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// lhz r9,24(r4)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r4.u32 + 24);
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// b 0x8283a0ac
	goto loc_8283A0AC;
loc_8283A0A8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8283A0AC:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8283a074
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8283A074;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82839f20
	ctx.lr = 0x8283A0C4;
	sub_82839F20(ctx, base);
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

__attribute__((alias("__imp__sub_8283A0DC"))) PPC_WEAK_FUNC(sub_8283A0DC);
PPC_FUNC_IMPL(__imp__sub_8283A0DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A0E0"))) PPC_WEAK_FUNC(sub_8283A0E0);
PPC_FUNC_IMPL(__imp__sub_8283A0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x8283A0E8;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// lwz r10,36(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lhz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lbz r25,0(r10)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// li r24,128
	ctx.r24.s64 = 128;
loc_8283A124:
	// lhz r10,30(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 30);
	// clrlwi r23,r11,16
	ctx.r23.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r23,r10
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x8283a384
	if (!ctx.cr6.lt) goto loc_8283A384;
	// lwz r9,4(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// clrlwi r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	// rlwinm r29,r23,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// and r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 & ctx.r11.u64;
	// clrlwi. r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lfsx f2,r9,r29
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	ctx.f2.f64 = double(temp.f32);
	// beq 0x8283a2e8
	if (ctx.cr0.eq) goto loc_8283A2E8;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,38(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 38);
	// beq 0x8283a1b8
	if (ctx.cr0.eq) goto loc_8283A1B8;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8283a188
	if (ctx.cr0.eq) goto loc_8283A188;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwa r11,0(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// b 0x8283a1a0
	goto loc_8283A1A0;
loc_8283A188:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_8283A1A0:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfsx f0,r11,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, temp.u32);
	// b 0x8283a2d8
	goto loc_8283A2D8;
loc_8283A1B8:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8283a1dc
	if (ctx.cr0.eq) goto loc_8283A1DC;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lwa r11,0(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 0));
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// b 0x8283a1f4
	goto loc_8283A1F4;
loc_8283A1DC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r10,r11,2
	ctx.r10.s64 = ctx.r11.s64 + 2;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_8283A1F4:
	// fcfid f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(ctx.f0.s64);
	// lbz r11,38(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 38);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// beq 0x8283a224
	if (ctx.cr0.eq) goto loc_8283A224;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// b 0x8283a254
	goto loc_8283A254;
loc_8283A224:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lbz r11,69(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 69);
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r11,2,24,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// srw r11,r7,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// stb r10,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r10.u8);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
loc_8283A254:
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82839f80
	ctx.lr = 0x8283A260;
	sub_82839F80(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x8283a360
	if (!ctx.cr6.eq) goto loc_8283A360;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a2a4
	if (ctx.cr6.eq) goto loc_8283A2A4;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283a2a4
	if (ctx.cr6.eq) goto loc_8283A2A4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_8283A284:
	// rlwinm r11,r30,2,14,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x8283A2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8283a314
	goto loc_8283A314;
loc_8283A2A4:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8283a284
	if (!ctx.cr6.eq) goto loc_8283A284;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fadds f0,f0,f3
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f3.f64));
	// fmuls f13,f0,f2
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
	// stfsx f13,r10,r28
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// fmuls f0,f0,f2
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f2.f64));
loc_8283A2D8:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// stfsx f0,r11,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, temp.u32);
	// b 0x8283a30c
	goto loc_8283A30C;
loc_8283A2E8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// rlwinm r10,r30,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0x3FFFC;
	// lfsx f0,r29,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r10,r28
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r28.u32, temp.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfsx f0,r29,r11
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r10,r10,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 2);
	// stfsx f0,r10,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, temp.u32);
loc_8283A30C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// bne cr6,0x8283a35c
	if (!ctx.cr6.eq) goto loc_8283A35C;
loc_8283A314:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8283a35c
	if (ctx.cr6.eq) goto loc_8283A35C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a35c
	if (ctx.cr6.eq) goto loc_8283A35C;
	// lwzx r10,r11,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283a35c
	if (ctx.cr6.eq) goto loc_8283A35C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283A354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// b 0x8283a370
	goto loc_8283A370;
loc_8283A35C:
	// lhz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
loc_8283A360:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
loc_8283A370:
	// rlwinm r24,r24,31,25,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 31) & 0x7F;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r24,16
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 16, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x8283a124
	if (!ctx.cr6.eq) goto loc_8283A124;
loc_8283A384:
	// sth r30,0(r22)
	PPC_STORE_U16(ctx.r22.u32 + 0, ctx.r30.u16);
	// sth r11,0(r21)
	PPC_STORE_U16(ctx.r21.u32 + 0, ctx.r11.u16);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283A394"))) PPC_WEAK_FUNC(sub_8283A394);
PPC_FUNC_IMPL(__imp__sub_8283A394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A398"))) PPC_WEAK_FUNC(sub_8283A398);
PPC_FUNC_IMPL(__imp__sub_8283A398) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x8283A3A0;
	__savegprlr_18(ctx, base);
	// stfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f31.u64);
	// stwu r1,-736(r1)
	ea = -736 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 72);
	// li r19,0
	ctx.r19.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// sth r19,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r19.u16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// sth r19,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r19.u16);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
	// beq 0x8283a7ac
	if (ctx.cr0.eq) goto loc_8283A7AC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_8283A3DC:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a400
	if (ctx.cr6.eq) goto loc_8283A400;
	// lhzx r11,r18,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r18.u32 + ctx.r11.u32);
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x8283a400
	if (ctx.cr6.eq) goto loc_8283A400;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8283a798
	goto loc_8283A798;
loc_8283A400:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r18,r18,2
	ctx.r18.s64 = ctx.r18.s64 + 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a420
	if (ctx.cr6.eq) goto loc_8283A420;
	// lbzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8283a424
	if (ctx.cr0.eq) goto loc_8283A424;
loc_8283A420:
	// mr r23,r19
	ctx.r23.u64 = ctx.r19.u64;
loc_8283A424:
	// lhz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 74);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x8283a43c
	if (ctx.cr6.eq) goto loc_8283A43C;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// mr r22,r19
	ctx.r22.u64 = ctx.r19.u64;
	// bge cr6,0x8283a440
	if (!ctx.cr6.lt) goto loc_8283A440;
loc_8283A43C:
	// li r22,1
	ctx.r22.s64 = 1;
loc_8283A440:
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8283a724
	if (ctx.cr0.eq) goto loc_8283A724;
	// li r24,3
	ctx.r24.s64 = 3;
	// li r21,12
	ctx.r21.s64 = 12;
loc_8283A454:
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8283a0e0
	ctx.lr = 0x8283A478;
	sub_8283A0E0(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// clrlwi r10,r10,30
	ctx.r10.u64 = ctx.r10.u32 & 0x3;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8283a650
	if (ctx.cr6.lt) goto loc_8283A650;
	// beq cr6,0x8283a59c
	if (ctx.cr6.eq) goto loc_8283A59C;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8283a4fc
	if (ctx.cr6.lt) goto loc_8283A4FC;
	// bne cr6,0x8283a700
	if (!ctx.cr6.eq) goto loc_8283A700;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8283a0e0
	ctx.lr = 0x8283A4C8;
	sub_8283A0E0(ctx, base);
loc_8283A4C8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8283a0e0
	ctx.lr = 0x8283A4F8;
	sub_8283A0E0(ctx, base);
	// b 0x8283a700
	goto loc_8283A700;
loc_8283A4FC:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,82
	ctx.r8.s64 = ctx.r1.s64 + 82;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8283a0e0
	ctx.lr = 0x8283A528;
	sub_8283A0E0(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8283a700
	if (!ctx.cr6.eq) goto loc_8283A700;
	// lhz r10,30(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// addi r11,r24,3
	ctx.r11.s64 = ctx.r24.s64 + 3;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x8283a700
	if (!ctx.cr6.lt) goto loc_8283A700;
	// addi r8,r24,6
	ctx.r8.s64 = ctx.r24.s64 + 6;
	// addi r10,r21,12
	ctx.r10.s64 = ctx.r21.s64 + 12;
loc_8283A548:
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x8283a700
	if (!ctx.cr6.lt) goto loc_8283A700;
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r7,8(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rotlwi r6,r9,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 2);
	// lhz r9,82(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lfsx f0,r7,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r9,1
	ctx.r7.s64 = ctx.r9.s64 + 1;
	// stfsx f0,r6,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r25.u32, temp.u32);
	// lhz r6,30(r27)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// sth r7,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r7.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x8283a548
	if (ctx.cr6.lt) goto loc_8283A548;
	// b 0x8283a700
	goto loc_8283A700;
loc_8283A59C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8283a4c8
	if (!ctx.cr6.eq) goto loc_8283A4C8;
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8283a4c8
	if (!ctx.cr6.lt) goto loc_8283A4C8;
	// lhz r28,82(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r26,r24,3
	ctx.r26.s64 = ctx.r24.s64 + 3;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8283A5C0:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8283a4c8
	if (!ctx.cr6.lt) goto loc_8283A4C8;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a61c
	if (ctx.cr6.eq) goto loc_8283A61C;
	// rlwinm r10,r28,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8283a61c
	if (ctx.cr6.eq) goto loc_8283A61C;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283A618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8283a628
	goto loc_8283A628;
loc_8283A61C:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_8283A628:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r10,30(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// blt cr6,0x8283a5c0
	if (ctx.cr6.lt) goto loc_8283A5C0;
	// b 0x8283a4c8
	goto loc_8283A4C8;
loc_8283A650:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x8283a700
	if (!ctx.cr6.eq) goto loc_8283A700;
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// mr r29,r24
	ctx.r29.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x8283a700
	if (!ctx.cr6.lt) goto loc_8283A700;
	// lhz r28,82(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// addi r26,r24,6
	ctx.r26.s64 = ctx.r24.s64 + 6;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
loc_8283A674:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x8283a700
	if (!ctx.cr6.lt) goto loc_8283A700;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lfsx f0,r10,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a6d0
	if (ctx.cr6.eq) goto loc_8283A6D0;
	// rlwinm r10,r28,2,14,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0x3FFFC;
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8283a6d0
	if (ctx.cr6.eq) goto loc_8283A6D0;
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283A6CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8283a6dc
	goto loc_8283A6DC;
loc_8283A6D0:
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
loc_8283A6DC:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// lhz r10,30(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// blt cr6,0x8283a674
	if (ctx.cr6.lt) goto loc_8283A674;
loc_8283A700:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r24,r24,9
	ctx.r24.s64 = ctx.r24.s64 + 9;
	// addi r21,r21,36
	ctx.r21.s64 = ctx.r21.s64 + 36;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r24,-3
	ctx.r10.s64 = ctx.r24.s64 + -3;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lhz r11,30(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 30);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8283a454
	if (ctx.cr6.lt) goto loc_8283A454;
loc_8283A724:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8283a77c
	if (ctx.cr6.eq) goto loc_8283A77C;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8283a760
	if (!ctx.cr6.gt) goto loc_8283A760;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
loc_8283A740:
	// lwz r9,84(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsx f0,r11,r9
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r25
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r25.u32, temp.u32);
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8283a740
	if (ctx.cr6.lt) goto loc_8283A740;
loc_8283A760:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a774
	if (ctx.cr6.eq) goto loc_8283A774;
loc_8283A76C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x8283a790
	goto loc_8283A790;
loc_8283A774:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x8283a76c
	goto loc_8283A76C;
loc_8283A77C:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8283a76c
	if (!ctx.cr6.eq) goto loc_8283A76C;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rotlwi r11,r11,2
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
loc_8283A790:
	// sth r19,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r19.u16);
	// sth r19,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r19.u16);
loc_8283A798:
	// add r25,r11,r25
	ctx.r25.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// cmpw cr6,r20,r11
	ctx.cr6.compare<int32_t>(ctx.r20.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8283a3dc
	if (ctx.cr6.lt) goto loc_8283A3DC;
loc_8283A7AC:
	// addi r1,r1,736
	ctx.r1.s64 = ctx.r1.s64 + 736;
	// lfd f31,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283A7B8"))) PPC_WEAK_FUNC(sub_8283A7B8);
PPC_FUNC_IMPL(__imp__sub_8283A7B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8283A7C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a824
	if (ctx.cr6.eq) goto loc_8283A824;
	// lis r11,-31976
	ctx.r11.s64 = -2095579136;
	// lwz r11,29232(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29232);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a824
	if (ctx.cr6.eq) goto loc_8283A824;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8283a824
	if (!ctx.cr6.eq) goto loc_8283A824;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lbz r6,71(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82839288
	ctx.lr = 0x8283A810;
	sub_82839288(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283b4e0
	ctx.lr = 0x8283A820;
	sub_8283B4E0(ctx, base);
	// b 0x8283a8cc
	goto loc_8283A8CC;
loc_8283A824:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,69(r31)
	PPC_STORE_U8(ctx.r31.u32 + 69, ctx.r11.u8);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lbz r10,38(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 38);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8283a8a8
	if (!ctx.cr0.eq) goto loc_8283A8A8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x8283a8a8
	if (!ctx.cr6.eq) goto loc_8283A8A8;
	// lbz r10,71(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// bne cr6,0x8283a8a8
	if (!ctx.cr6.eq) goto loc_8283A8A8;
	// lwz r10,88(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8283a8a8
	if (!ctx.cr6.eq) goto loc_8283A8A8;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8283a8a8
	if (ctx.cr6.eq) goto loc_8283A8A8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283a8a8
	if (ctx.cr6.eq) goto loc_8283A8A8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82836460
	ctx.lr = 0x8283A8A4;
	sub_82836460(ctx, base);
	// b 0x8283a8cc
	goto loc_8283A8CC;
loc_8283A8A8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lbz r6,71(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 71);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8283a040
	ctx.lr = 0x8283A8BC;
	sub_8283A040(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8283a398
	ctx.lr = 0x8283A8CC;
	sub_8283A398(ctx, base);
loc_8283A8CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283A8D4"))) PPC_WEAK_FUNC(sub_8283A8D4);
PPC_FUNC_IMPL(__imp__sub_8283A8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283A8D8"))) PPC_WEAK_FUNC(sub_8283A8D8);
PPC_FUNC_IMPL(__imp__sub_8283A8D8) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lfs f0,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lfs f11,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stfs f12,104(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lfs f31,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f0,f12,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8283a94c
	if (ctx.cr6.gt) goto loc_8283A94C;
	// stfs f31,108(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// b 0x8283a954
	goto loc_8283A954;
loc_8283A94C:
	// bl 0x8283bd78
	ctx.lr = 0x8283A950;
	sub_8283BD78(ctx, base);
	// stfs f1,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_8283A954:
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f12,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f11,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,80(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f12,88(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// fmadds f0,f12,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f13.f64));
	// fmadds f0,f11,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8283a98c
	if (ctx.cr6.gt) goto loc_8283A98C;
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x8283a994
	goto loc_8283A994;
loc_8283A98C:
	// bl 0x8283bd78
	ctx.lr = 0x8283A990;
	sub_8283BD78(ctx, base);
	// stfs f1,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
loc_8283A994:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82840598
	ctx.lr = 0x8283A9A8;
	sub_82840598(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82840c38
	ctx.lr = 0x8283A9B4;
	sub_82840C38(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-48(r1)
	ctx.fpscr.disableFlushMode();
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

__attribute__((alias("__imp__sub_8283A9D8"))) PPC_WEAK_FUNC(sub_8283A9D8);
PPC_FUNC_IMPL(__imp__sub_8283A9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8283A9E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r27,50(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 50);
	// lwz r5,56(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// lbzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x8283AA1C;
	sub_82A75220(ctx, base);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8283aa70
	if (ctx.cr0.eq) goto loc_8283AA70;
	// rlwinm r27,r27,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283AA34:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283aa5c
	if (ctx.cr6.eq) goto loc_8283AA5C;
	// lbzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283aa5c
	if (!ctx.cr0.eq) goto loc_8283AA5C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r3,r29,r28
	ctx.r3.u64 = ctx.r29.u64 + ctx.r28.u64;
	// bl 0x82a75220
	ctx.lr = 0x8283AA5C;
	sub_82A75220(ctx, base);
loc_8283AA5C:
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283aa34
	if (ctx.cr6.lt) goto loc_8283AA34;
loc_8283AA70:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283AA78"))) PPC_WEAK_FUNC(sub_8283AA78);
PPC_FUNC_IMPL(__imp__sub_8283AA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8283AA80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r9,50(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 50);
	// lbzx r10,r7,r8
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq 0x8283ab0c
	if (ctx.cr0.eq) goto loc_8283AB0C;
	// rlwinm r28,r9,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283AAC4:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283aae4
	if (ctx.cr6.eq) goto loc_8283AAE4;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283aae4
	if (!ctx.cr0.eq) goto loc_8283AAE4;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x8283aae8
	goto loc_8283AAE8;
loc_8283AAE4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_8283AAE8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8283AAF4;
	sub_82FA77C0(ctx, base);
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r28,r30
	ctx.r30.u64 = ctx.r28.u64 + ctx.r30.u64;
	// add r27,r28,r27
	ctx.r27.u64 = ctx.r28.u64 + ctx.r27.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283aac4
	if (ctx.cr6.lt) goto loc_8283AAC4;
loc_8283AB0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283AB14"))) PPC_WEAK_FUNC(sub_8283AB14);
PPC_FUNC_IMPL(__imp__sub_8283AB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AB18"))) PPC_WEAK_FUNC(sub_8283AB18);
PPC_FUNC_IMPL(__imp__sub_8283AB18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8283AB20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r25,50(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 50);
	// lbzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x8283abf4
	if (ctx.cr0.eq) goto loc_8283ABF4;
	// rlwinm r26,r25,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
loc_8283AB74:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283aba0
	if (ctx.cr6.eq) goto loc_8283ABA0;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283aba0
	if (!ctx.cr0.eq) goto loc_8283ABA0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,84(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8283AB9C;
	sub_82FA77C0(ctx, base);
	// b 0x8283abd8
	goto loc_8283ABD8;
loc_8283ABA0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8283abd8
	if (ctx.cr6.eq) goto loc_8283ABD8;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r9,r30,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r30.s64;
loc_8283ABB8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8283abb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8283ABB8;
loc_8283ABD8:
	// lhz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 72);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// add r28,r26,r28
	ctx.r28.u64 = ctx.r26.u64 + ctx.r28.u64;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283ab74
	if (ctx.cr6.lt) goto loc_8283AB74;
loc_8283ABF4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283ABFC"))) PPC_WEAK_FUNC(sub_8283ABFC);
PPC_FUNC_IMPL(__imp__sub_8283ABFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283AC00"))) PPC_WEAK_FUNC(sub_8283AC00);
PPC_FUNC_IMPL(__imp__sub_8283AC00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8283AC08;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lhz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,4(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r27,50(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 50);
	// lbzx r10,r9,r7
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r7.u32);
	// lbzx r9,r8,r7
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r7.u32);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// beq 0x8283ad80
	if (ctx.cr0.eq) goto loc_8283AD80;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// rlwinm r25,r27,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f30.f64 = double(temp.f32);
loc_8283AC74:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283aca0
	if (ctx.cr6.eq) goto loc_8283ACA0;
	// lbzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283aca0
	if (!ctx.cr0.eq) goto loc_8283ACA0;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8283AC9C;
	sub_82FA77C0(ctx, base);
	// b 0x8283ad64
	goto loc_8283AD64;
loc_8283ACA0:
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8283accc
	if (ctx.cr6.gt) goto loc_8283ACCC;
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// b 0x8283acd4
	goto loc_8283ACD4;
loc_8283ACCC:
	// bl 0x8283bd78
	ctx.lr = 0x8283ACD0;
	sub_8283BD78(ctx, base);
	// stfs f1,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
loc_8283ACD4:
	// lfs f0,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// lfs f13,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,8(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fmadds f0,f12,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fsubs f1,f30,f0
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fcmpu cr6,f1,f31
	ctx.cr6.compare(ctx.f1.f64, ctx.f31.f64);
	// bgt cr6,0x8283ad00
	if (ctx.cr6.gt) goto loc_8283AD00;
	// stfs f31,12(r28)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// b 0x8283ad08
	goto loc_8283AD08;
loc_8283AD00:
	// bl 0x8283bd78
	ctx.lr = 0x8283AD04;
	sub_8283BD78(ctx, base);
	// stfs f1,12(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
loc_8283AD08:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82840598
	ctx.lr = 0x8283AD1C;
	sub_82840598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82840c38
	ctx.lr = 0x8283AD28;
	sub_82840C38(ctx, base);
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// ble cr6,0x8283ad64
	if (!ctx.cr6.gt) goto loc_8283AD64;
	// addi r10,r27,-4
	ctx.r10.s64 = ctx.r27.s64 + -4;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// subf r9,r31,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8283AD44:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f12,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f0,f13,f12,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// stfsx f0,r8,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8283ad44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8283AD44;
loc_8283AD64:
	// lhz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 72);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283ac74
	if (ctx.cr6.lt) goto loc_8283AC74;
loc_8283AD80:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283AD90"))) PPC_WEAK_FUNC(sub_8283AD90);
PPC_FUNC_IMPL(__imp__sub_8283AD90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8283AD98;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fa8d28
	ctx.lr = 0x8283ADA0;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r23,50(r10)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r10.u32 + 50);
	// lhz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// lbzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbzx r8,r7,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lbzx r7,r6,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r26,r7,r11
	ctx.r26.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq 0x8283aef8
	if (ctx.cr0.eq) goto loc_8283AEF8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r25,r23,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f28,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,25272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25272);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,17892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17892);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,11556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11556);
	ctx.f31.f64 = double(temp.f32);
loc_8283AE34:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283ae60
	if (ctx.cr6.eq) goto loc_8283AE60;
	// lbzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283ae60
	if (!ctx.cr0.eq) goto loc_8283AE60;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,84(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8283AE5C;
	sub_82FA77C0(ctx, base);
	// b 0x8283aed4
	goto loc_8283AED4;
loc_8283AE60:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x8283aed4
	if (ctx.cr6.eq) goto loc_8283AED4;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// subf r10,r31,r26
	ctx.r10.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r9,r31,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
	// subf r7,r31,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r31.s64;
loc_8283AE80:
	// lfsx f13,r9,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfsx f11,r10,r11
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfsx f9,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f13,f9,f29,f13
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// lfs f8,64(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f0,f31,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f10.f64));
	// fmsubs f12,f9,f30,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f12.f64));
	// fmsubs f0,f0,f28,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f11.f64));
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f12,f8,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f0,f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfsx f0,r7,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8283ae80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8283AE80;
loc_8283AED4:
	// lhz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 72);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// cmplw cr6,r24,r11
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283ae34
	if (ctx.cr6.lt) goto loc_8283AE34;
loc_8283AEF8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fa8d74
	ctx.lr = 0x8283AF04;
	__restfpr_28(ctx, base);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283AF08"))) PPC_WEAK_FUNC(sub_8283AF08);
PPC_FUNC_IMPL(__imp__sub_8283AF08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8283AF10;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fa8d28
	ctx.lr = 0x8283AF18;
	__savefpr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,100(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r23,0
	ctx.r23.s64 = 0;
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r6,12(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r5,8(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,4(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lhz r24,50(r10)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r10.u32 + 50);
	// lhz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// lbzx r10,r5,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// lbzx r9,r8,r5
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r5.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lbzx r8,r7,r5
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r5.u32);
	// mullw r10,r10,r4
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lbzx r7,r6,r5
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r5.u32);
	// mullw r9,r9,r4
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r7,r7,r4
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r31,r8,r11
	ctx.r31.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r26,r7,r11
	ctx.r26.u64 = ctx.r7.u64 + ctx.r11.u64;
	// beq 0x8283b094
	if (ctx.cr0.eq) goto loc_8283B094;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f28,21500(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,25272(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 25272);
	ctx.f29.f64 = double(temp.f32);
	// lfs f30,17892(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 17892);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,11556(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11556);
	ctx.f31.f64 = double(temp.f32);
loc_8283AFAC:
	// lwz r11,80(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283afd8
	if (ctx.cr6.eq) goto loc_8283AFD8;
	// lbzx r11,r11,r23
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283afd8
	if (!ctx.cr0.eq) goto loc_8283AFD8;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r4,84(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8283AFD4;
	sub_82FA77C0(ctx, base);
	// b 0x8283b070
	goto loc_8283B070;
loc_8283AFD8:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,64(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f1.f64 = double(temp.f32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82840598
	ctx.lr = 0x8283AFEC;
	sub_82840598(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82840c38
	ctx.lr = 0x8283AFF8;
	sub_82840C38(ctx, base);
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// ble cr6,0x8283b070
	if (!ctx.cr6.gt) goto loc_8283B070;
	// addi r10,r24,-4
	ctx.r10.s64 = ctx.r24.s64 + -4;
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// subf r9,r31,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r31.s64;
	// subf r8,r31,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r31.s64;
	// subf r7,r31,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r31.s64;
	// subf r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8283B01C:
	// lfsx f13,r8,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f10,f13,f31
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfsx f11,r9,r11
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fmuls f11,f11,f31
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// lfsx f9,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f9.f64 = double(temp.f32);
	// fnmsubs f13,f9,f29,f13
	ctx.f13.f64 = double(float(-(ctx.f9.f64 * ctx.f29.f64 - ctx.f13.f64)));
	// lfs f8,64(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f0,f31,f10
	ctx.f7.f64 = double(float(ctx.f0.f64 * ctx.f31.f64 - ctx.f10.f64));
	// fmsubs f12,f9,f30,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f30.f64 - ctx.f12.f64));
	// fmsubs f0,f0,f28,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 - ctx.f11.f64));
	// fsubs f10,f11,f10
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fadds f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f10.f64));
	// fmadds f0,f12,f8,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f8.f64 + ctx.f0.f64));
	// fmadds f0,f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f7.f64));
	// fmadds f0,f0,f8,f9
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f8.f64 + ctx.f9.f64));
	// stfsx f0,r6,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8283b01c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8283B01C;
loc_8283B070:
	// lhz r11,72(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 72);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// add r30,r25,r30
	ctx.r30.u64 = ctx.r25.u64 + ctx.r30.u64;
	// add r27,r25,r27
	ctx.r27.u64 = ctx.r25.u64 + ctx.r27.u64;
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r31,r25,r31
	ctx.r31.u64 = ctx.r25.u64 + ctx.r31.u64;
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283afac
	if (ctx.cr6.lt) goto loc_8283AFAC;
loc_8283B094:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fa8d74
	ctx.lr = 0x8283B0A0;
	__restfpr_28(ctx, base);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B0A4"))) PPC_WEAK_FUNC(sub_8283B0A4);
PPC_FUNC_IMPL(__imp__sub_8283B0A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B0A8"))) PPC_WEAK_FUNC(sub_8283B0A8);
PPC_FUNC_IMPL(__imp__sub_8283B0A8) {
	PPC_FUNC_PROLOGUE();
	// lvx128 v1,r3,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B0B0"))) PPC_WEAK_FUNC(sub_8283B0B0);
PPC_FUNC_IMPL(__imp__sub_8283B0B0) {
	PPC_FUNC_PROLOGUE();
	// stvx128 v1,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B0B8"))) PPC_WEAK_FUNC(sub_8283B0B8);
PPC_FUNC_IMPL(__imp__sub_8283B0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x8283B0C0;
	__savegprlr_17(ctx, base);
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fac11c
	ctx.lr = 0x8283B0C8;
	__savevmx_117(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,100(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r5,56(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// bl 0x82a75988
	ctx.lr = 0x8283B0F0;
	sub_82A75988(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vspltisw128 v126,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_set1_epi32(int(0x0)));
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// addi r11,r11,-19792
	ctx.r11.s64 = ctx.r11.s64 + -19792;
	// lfs f0,64(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// lwz r10,8(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// vor128 v12,v126,v126
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vupkd3d128 v13,v126,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v126.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v13 = vTemp;
	// vslw v11,v0,v0
	ctx.v11.u32[0] = ctx.v0.u32[0] << (ctx.v0.u8[0] & 0x1F);
	ctx.v11.u32[1] = ctx.v0.u32[1] << (ctx.v0.u8[4] & 0x1F);
	ctx.v11.u32[2] = ctx.v0.u32[2] << (ctx.v0.u8[8] & 0x1F);
	ctx.v11.u32[3] = ctx.v0.u32[3] << (ctx.v0.u8[12] & 0x1F);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// li r21,128
	ctx.r21.s64 = 128;
	// vspltw v13,v13,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lhz r4,72(r24)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r24.u32 + 72);
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// vxor v11,v0,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// vrlimi128 v12,v0,4,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 4));
	// vpermwi128 v10,v0,64
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xBF));
	// vspltw v0,v0,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lbzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r10.u32);
	// lbzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// vsldoi128 v9,v11,v126,4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v126.u8), 12));
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// vrlimi128 v12,v11,8,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 57), 8));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v125,v11,0
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vrlimi128 v10,v126,2,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 228), 2));
	// vmulfp128 v11,v125,v125
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v125.f32)));
	// vsldoi128 v0,v0,v126,4
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v126.u8), 12));
	// vor128 v8,v125,v125
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// mullw r10,r8,r5
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// vrlimi128 v10,v13,1,0
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 1));
	// vrlimi128 v0,v13,4,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 4));
	// vrlimi128 v8,v13,1,0
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 1));
	// mullw r11,r11,r5
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// vmulfp128 v13,v125,v11
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v11.f32)));
	// vrlimi128 v8,v11,4,0
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 228), 4));
	// mullw r9,r7,r5
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// vrlimi128 v8,v13,8,0
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 8));
	// vmsum4fp128 v123,v8,v0
	_mm_store_ps(ctx.v123.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vmsum4fp128 v122,v8,v10
	_mm_store_ps(ctx.v122.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v121,v8,v9
	_mm_store_ps(ctx.v121.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// mullw r8,r6,r5
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r5.s32);
	// vmsum4fp128 v120,v8,v12
	_mm_store_ps(ctx.v120.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// add r23,r11,r30
	ctx.r23.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r26,r10,r30
	ctx.r26.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r25,r9,r30
	ctx.r25.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r22,r8,r30
	ctx.r22.u64 = ctx.r8.u64 + ctx.r30.u64;
	// beq 0x8283b320
	if (ctx.cr0.eq) goto loc_8283B320;
	// addi r20,r25,-256
	ctx.r20.s64 = ctx.r25.s64 + -256;
	// addi r19,r26,-256
	ctx.r19.s64 = ctx.r26.s64 + -256;
	// addi r18,r29,-256
	ctx.r18.s64 = ctx.r29.s64 + -256;
	// li r27,16
	ctx.r27.s64 = 16;
	// li r28,32
	ctx.r28.s64 = 32;
loc_8283B1EC:
	// cmpwi cr6,r21,128
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 128, ctx.xer);
	// blt cr6,0x8283b20c
	if (ctx.cr6.lt) goto loc_8283B20C;
	// addi r21,r21,-128
	ctx.r21.s64 = ctx.r21.s64 + -128;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// dcbt r11,r23
	// dcbt r11,r26
	// dcbt r11,r25
	// dcbt r11,r22
loc_8283B20C:
	// lwz r11,80(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283b238
	if (ctx.cr6.eq) goto loc_8283B238;
	// lbzx r11,r11,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283b238
	if (!ctx.cr0.eq) goto loc_8283B238;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,84(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75220
	ctx.lr = 0x8283B234;
	sub_82A75220(ctx, base);
	// b 0x8283b308
	goto loc_8283B308;
loc_8283B238:
	// addi r30,r31,256
	ctx.r30.s64 = ctx.r31.s64 + 256;
	// vor128 v3,v125,v125
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lvx128 v2,r20,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r19,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r19.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// bl 0x82836430
	ctx.lr = 0x8283B24C;
	sub_82836430(ctx, base);
	// add r11,r31,r22
	ctx.r11.u64 = ctx.r31.u64 + ctx.r22.u64;
	// vor128 v8,v120,v120
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// vor128 v7,v121,v121
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// add r9,r31,r26
	ctx.r9.u64 = ctx.r31.u64 + ctx.r26.u64;
	// vor128 v6,v122,v122
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// add r8,r31,r23
	ctx.r8.u64 = ctx.r31.u64 + ctx.r23.u64;
	// vor128 v5,v123,v123
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vor128 v119,v1,v1
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v4,r11,r27
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r10,r27
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r9,r27
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r8,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// bl 0x828358f0
	ctx.lr = 0x8283B284;
	sub_828358F0(ctx, base);
	// vmsum4fp128 v118,v119,v119
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v118.f32, _mm_dp_ps(_mm_load_ps(ctx.v119.f32), _mm_load_ps(ctx.v119.f32), 0xFF));
	// add r11,r31,r22
	ctx.r11.u64 = ctx.r31.u64 + ctx.r22.u64;
	// add r10,r31,r25
	ctx.r10.u64 = ctx.r31.u64 + ctx.r25.u64;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// add r9,r31,r26
	ctx.r9.u64 = ctx.r31.u64 + ctx.r26.u64;
	// vor128 v8,v120,v120
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// add r8,r31,r23
	ctx.r8.u64 = ctx.r31.u64 + ctx.r23.u64;
	// vor128 v7,v121,v121
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// vor128 v6,v122,v122
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v5,v123,v123
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// lvx128 v4,r11,r28
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vor128 v117,v1,v1
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v3,r10,r28
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r9,r28
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v124,v0,1
	_mm_store_ps(ctx.v124.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v1,r8,r28
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp128 v127,v118
	_mm_store_ps(ctx.v127.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v118.f32))));
	// bl 0x828358f0
	ctx.lr = 0x8283B2CC;
	sub_828358F0(ctx, base);
	// vmulfp128 v0,v118,v124
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v118.f32), _mm_load_ps(ctx.v124.f32)));
	// vor128 v11,v124,v124
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vmulfp128 v13,v127,v127
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32)));
	// vor128 v12,v118,v118
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v118.u8));
	// vcmpeqfp128 v10,v118,v126
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v118.f32), _mm_load_ps(ctx.v126.f32)));
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// stvx128 v117,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vnmsubfp128 v11,v0,v13,v11
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmaddcfp128 v0,v127,v0,v127
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v0,v119,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v119.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// stvx128 v13,r18,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8283B308:
	// lhz r11,72(r24)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r24.u32 + 72);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r21,r21,48
	ctx.r21.s64 = ctx.r21.s64 + 48;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283b1ec
	if (ctx.cr6.lt) goto loc_8283B1EC;
loc_8283B320:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// addi r12,r1,-128
	ctx.r12.s64 = ctx.r1.s64 + -128;
	// bl 0x82fac3b4
	ctx.lr = 0x8283B32C;
	__restvmx_117(ctx, base);
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B330"))) PPC_WEAK_FUNC(sub_8283B330);
PPC_FUNC_IMPL(__imp__sub_8283B330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x8283B338;
	__savegprlr_20(ctx, base);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a75988
	ctx.lr = 0x8283B378;
	sub_82A75988(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,4(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// vspltisw v0,-1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// vspltisw128 v125,0
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_set1_epi32(int(0x0)));
	// lhz r7,72(r27)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r27.u32 + 72);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r24,128
	ctx.r24.s64 = 128;
	// lvlx v13,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vslw v0,v0,v0
	ctx.v0.u32[0] = ctx.v0.u32[0] << (ctx.v0.u8[0] & 0x1F);
	ctx.v0.u32[1] = ctx.v0.u32[1] << (ctx.v0.u8[4] & 0x1F);
	ctx.v0.u32[2] = ctx.v0.u32[2] << (ctx.v0.u8[8] & 0x1F);
	ctx.v0.u32[3] = ctx.v0.u32[3] << (ctx.v0.u8[12] & 0x1F);
	// li r20,0
	ctx.r20.s64 = 0;
	// vspltw128 v127,v13,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vxor128 v126,v127,v0
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lbzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r29,r10,r29
	ctx.r29.u64 = ctx.r10.u64 + ctx.r29.u64;
	// beq 0x8283b4c0
	if (ctx.cr0.eq) goto loc_8283B4C0;
	// addi r23,r28,-256
	ctx.r23.s64 = ctx.r28.s64 + -256;
	// addi r22,r29,-256
	ctx.r22.s64 = ctx.r29.s64 + -256;
	// addi r21,r30,-256
	ctx.r21.s64 = ctx.r30.s64 + -256;
	// li r25,16
	ctx.r25.s64 = 16;
	// li r26,32
	ctx.r26.s64 = 32;
loc_8283B3E8:
	// cmpwi cr6,r24,128
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 128, ctx.xer);
	// blt cr6,0x8283b400
	if (ctx.cr6.lt) goto loc_8283B400;
	// addi r24,r24,-128
	ctx.r24.s64 = ctx.r24.s64 + -128;
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// dcbt r11,r28
	// dcbt r11,r29
loc_8283B400:
	// lwz r11,80(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8283b42c
	if (ctx.cr6.eq) goto loc_8283B42C;
	// lbzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r20.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8283b42c
	if (!ctx.cr0.eq) goto loc_8283B42C;
	// li r5,48
	ctx.r5.s64 = 48;
	// lwz r4,84(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x8283B428;
	sub_82A75220(ctx, base);
	// b 0x8283b4a8
	goto loc_8283B4A8;
loc_8283B42C:
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// vor128 v13,v126,v126
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// add r9,r31,r29
	ctx.r9.u64 = ctx.r31.u64 + ctx.r29.u64;
	// vor128 v12,v127,v127
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// add r10,r31,r28
	ctx.r10.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r8,r31,r28
	ctx.r8.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r7,r31,r29
	ctx.r7.u64 = ctx.r31.u64 + ctx.r29.u64;
	// lvx128 v0,r23,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r6,r31,r30
	ctx.r6.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lvx128 v11,r22,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r22.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v8,v0,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmsum4fp128 v9,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// lvx128 v7,r9,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r8,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// add r9,r31,r30
	ctx.r9.u64 = ctx.r31.u64 + ctx.r30.u64;
	// lvx128 v6,r7,r26
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmaddcfp128 v8,v126,v8,v0
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r10,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsubfp v7,v7,v0
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v6,v6,v10
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpgefp128 v9,v125,v9
	_mm_store_ps(ctx.v9.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddcfp128 v7,v127,v7,v0
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v10,v127,v6,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v10.f32)));
	// vsel v0,v12,v13,v9
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v7,r6,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r9,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v0,v11,v8
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmsum4fp128 v13,v0,v0
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xFF));
	// vrsqrtefp v13,v13
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v13.f32))));
	// vmulfp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r21,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8283B4A8:
	// lhz r11,72(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 72);
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// addi r24,r24,48
	ctx.r24.s64 = ctx.r24.s64 + 48;
	// cmplw cr6,r20,r11
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8283b3e8
	if (ctx.cr6.lt) goto loc_8283B3E8;
loc_8283B4C0:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B4E0"))) PPC_WEAK_FUNC(sub_8283B4E0);
PPC_FUNC_IMPL(__imp__sub_8283B4E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// dcbt r10,r9
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// dcbt r10,r9
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r10,r9
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 * 3;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// dcbt r10,r8
	// lbz r10,71(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 71);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x8283b544
	if (!ctx.cr6.eq) goto loc_8283B544;
	// b 0x8283a9d8
	sub_8283A9D8(ctx, base);
	return;
loc_8283B544:
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bne cr6,0x8283b560
	if (!ctx.cr6.eq) goto loc_8283B560;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8283b55c
	if (!ctx.cr6.eq) goto loc_8283B55C;
	// b 0x8283b330
	sub_8283B330(ctx, base);
	return;
loc_8283B55C:
	// b 0x8283ab18
	sub_8283AB18(ctx, base);
	return;
loc_8283B560:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8283b56c
	if (!ctx.cr6.eq) goto loc_8283B56C;
	// b 0x8283b0b8
	sub_8283B0B8(ctx, base);
	return;
loc_8283B56C:
	// b 0x8283ad90
	sub_8283AD90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B570"))) PPC_WEAK_FUNC(sub_8283B570);
PPC_FUNC_IMPL(__imp__sub_8283B570) {
	PPC_FUNC_PROLOGUE();
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B578"))) PPC_WEAK_FUNC(sub_8283B578);
PPC_FUNC_IMPL(__imp__sub_8283B578) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82661168
	sub_82661168(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B588"))) PPC_WEAK_FUNC(sub_8283B588);
PPC_FUNC_IMPL(__imp__sub_8283B588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B58C"))) PPC_WEAK_FUNC(sub_8283B58C);
PPC_FUNC_IMPL(__imp__sub_8283B58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B590"))) PPC_WEAK_FUNC(sub_8283B590);
PPC_FUNC_IMPL(__imp__sub_8283B590) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-19776
	ctx.r11.s64 = ctx.r11.s64 + -19776;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B5A8"))) PPC_WEAK_FUNC(sub_8283B5A8);
PPC_FUNC_IMPL(__imp__sub_8283B5A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r11,r11,-19776
	ctx.r11.s64 = ctx.r11.s64 + -19776;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B5B8"))) PPC_WEAK_FUNC(sub_8283B5B8);
PPC_FUNC_IMPL(__imp__sub_8283B5B8) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8283b5e4
	if (!ctx.cr6.eq) goto loc_8283B5E4;
	// bl 0x82661168
	ctx.lr = 0x8283B5E4;
	sub_82661168(ctx, base);
loc_8283B5E4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283B5FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8283B614"))) PPC_WEAK_FUNC(sub_8283B614);
PPC_FUNC_IMPL(__imp__sub_8283B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B618"))) PPC_WEAK_FUNC(sub_8283B618);
PPC_FUNC_IMPL(__imp__sub_8283B618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8283B620;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8283b640
	if (!ctx.cr6.eq) goto loc_8283B640;
	// bl 0x82661168
	ctx.lr = 0x8283B640;
	sub_82661168(ctx, base);
loc_8283B640:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283B65C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B664"))) PPC_WEAK_FUNC(sub_8283B664);
PPC_FUNC_IMPL(__imp__sub_8283B664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B668"))) PPC_WEAK_FUNC(sub_8283B668);
PPC_FUNC_IMPL(__imp__sub_8283B668) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8283b694
	if (!ctx.cr6.eq) goto loc_8283B694;
	// bl 0x82661168
	ctx.lr = 0x8283B694;
	sub_82661168(ctx, base);
loc_8283B694:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283B6AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8283B6C4"))) PPC_WEAK_FUNC(sub_8283B6C4);
PPC_FUNC_IMPL(__imp__sub_8283B6C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B6C8"))) PPC_WEAK_FUNC(sub_8283B6C8);
PPC_FUNC_IMPL(__imp__sub_8283B6C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8283B6D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8283b6f0
	if (!ctx.cr6.eq) goto loc_8283B6F0;
	// bl 0x82661168
	ctx.lr = 0x8283B6F0;
	sub_82661168(ctx, base);
loc_8283B6F0:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283B70C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B714"))) PPC_WEAK_FUNC(sub_8283B714);
PPC_FUNC_IMPL(__imp__sub_8283B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B718"))) PPC_WEAK_FUNC(sub_8283B718);
PPC_FUNC_IMPL(__imp__sub_8283B718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8283B720;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8283b744
	if (!ctx.cr6.eq) goto loc_8283B744;
	// bl 0x82661168
	ctx.lr = 0x8283B744;
	sub_82661168(ctx, base);
loc_8283B744:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283B764;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8283B76C"))) PPC_WEAK_FUNC(sub_8283B76C);
PPC_FUNC_IMPL(__imp__sub_8283B76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B770"))) PPC_WEAK_FUNC(sub_8283B770);
PPC_FUNC_IMPL(__imp__sub_8283B770) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8283b79c
	if (!ctx.cr6.eq) goto loc_8283B79C;
	// bl 0x82661168
	ctx.lr = 0x8283B79C;
	sub_82661168(ctx, base);
loc_8283B79C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8283B7B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_8283B7CC"))) PPC_WEAK_FUNC(sub_8283B7CC);
PPC_FUNC_IMPL(__imp__sub_8283B7CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B7D0"))) PPC_WEAK_FUNC(sub_8283B7D0);
PPC_FUNC_IMPL(__imp__sub_8283B7D0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x8283b834
	if (ctx.cr6.lt) goto loc_8283B834;
	// beq cr6,0x8283b820
	if (ctx.cr6.eq) goto loc_8283B820;
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x8283b818
	if (ctx.cr6.lt) goto loc_8283B818;
	// beq cr6,0x8283b834
	if (ctx.cr6.eq) goto loc_8283B834;
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x8283b830
	if (ctx.cr6.lt) goto loc_8283B830;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x8283b834
	goto loc_8283B834;
loc_8283B818:
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x8283b824
	goto loc_8283B824;
loc_8283B820:
	// li r9,1028
	ctx.r9.s64 = 1028;
loc_8283B824:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
loc_8283B830:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8283B834:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B83C"))) PPC_WEAK_FUNC(sub_8283B83C);
PPC_FUNC_IMPL(__imp__sub_8283B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B840"))) PPC_WEAK_FUNC(sub_8283B840);
PPC_FUNC_IMPL(__imp__sub_8283B840) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B85C"))) PPC_WEAK_FUNC(sub_8283B85C);
PPC_FUNC_IMPL(__imp__sub_8283B85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B860"))) PPC_WEAK_FUNC(sub_8283B860);
PPC_FUNC_IMPL(__imp__sub_8283B860) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B878"))) PPC_WEAK_FUNC(sub_8283B878);
PPC_FUNC_IMPL(__imp__sub_8283B878) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B894"))) PPC_WEAK_FUNC(sub_8283B894);
PPC_FUNC_IMPL(__imp__sub_8283B894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8283B898"))) PPC_WEAK_FUNC(sub_8283B898);
PPC_FUNC_IMPL(__imp__sub_8283B898) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x8283b8fc
	if (!ctx.cr6.eq) goto loc_8283B8FC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8283b8fc
	if (!ctx.cr6.eq) goto loc_8283B8FC;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8283b8fc
	if (!ctx.cr6.eq) goto loc_8283B8FC;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8283b8fc
	if (!ctx.cr6.eq) goto loc_8283B8FC;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8283b8fc
	if (!ctx.cr6.eq) goto loc_8283B8FC;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x8283b900
	if (ctx.cr6.eq) goto loc_8283B900;
loc_8283B8FC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8283B900:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8283B908"))) PPC_WEAK_FUNC(sub_8283B908);
PPC_FUNC_IMPL(__imp__sub_8283B908) {
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
	// bl 0x8283b898
	ctx.lr = 0x8283B918;
	sub_8283B898(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

