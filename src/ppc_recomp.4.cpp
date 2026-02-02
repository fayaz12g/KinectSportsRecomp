#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8225A3FC"))) PPC_WEAK_FUNC(sub_8225A3FC);
PPC_FUNC_IMPL(__imp__sub_8225A3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A400"))) PPC_WEAK_FUNC(sub_8225A400);
PPC_FUNC_IMPL(__imp__sub_8225A400) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x82259b20
	sub_82259B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A408"))) PPC_WEAK_FUNC(sub_8225A408);
PPC_FUNC_IMPL(__imp__sub_8225A408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225A410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8225a47c
	if (!ctx.cr6.eq) goto loc_8225A47C;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8225a47c
	if (!ctx.cr6.eq) goto loc_8225A47C;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// bgt cr6,0x8225a45c
	if (ctx.cr6.gt) goto loc_8225A45C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x8225a484
	goto loc_8225A484;
loc_8225A45C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82691500
	ctx.lr = 0x8225A464;
	sub_82691500(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8225A474;
	sub_82FA7CF0(ctx, base);
	// stw r27,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r27.u32);
	// b 0x8225a484
	goto loc_8225A484;
loc_8225A47C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_8225A484:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r29,2
	ctx.r10.s64 = ctx.r29.s64 + 2;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x8225a4c8
	if (!ctx.cr6.eq) goto loc_8225A4C8;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bgt cr6,0x8225a4b8
	if (ctx.cr6.gt) goto loc_8225A4B8;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stwx r11,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u32);
	// b 0x8225a4fc
	goto loc_8225A4FC;
loc_8225A4B8:
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r3,r10,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8225A4C4;
	sub_82FA77C0(ctx, base);
	// b 0x8225a4fc
	goto loc_8225A4FC;
loc_8225A4C8:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// addi r11,r28,2
	ctx.r11.s64 = ctx.r28.s64 + 2;
	// bne cr6,0x8225a4ec
	if (!ctx.cr6.eq) goto loc_8225A4EC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r3,r10,r31
	ctx.r3.u64 = ctx.r10.u64 + ctx.r31.u64;
	// bl 0x828cd228
	ctx.lr = 0x8225A4E8;
	sub_828CD228(ctx, base);
	// b 0x8225a4fc
	goto loc_8225A4FC;
loc_8225A4EC:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_8225A4FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A504"))) PPC_WEAK_FUNC(sub_8225A504);
PPC_FUNC_IMPL(__imp__sub_8225A504) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A508"))) PPC_WEAK_FUNC(sub_8225A508);
PPC_FUNC_IMPL(__imp__sub_8225A508) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8225A510;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82252378
	ctx.lr = 0x8225A51C;
	sub_82252378(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r31,764
	ctx.r30.s64 = ctx.r31.s64 + 764;
	// addi r11,r11,-27776
	ctx.r11.s64 = ctx.r11.s64 + -27776;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82252ae8
	ctx.lr = 0x8225A538;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r23,8
	ctx.r23.s64 = 8;
	// addi r29,r11,-29824
	ctx.r29.s64 = ctx.r11.s64 + -29824;
	// stw r23,772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 772, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x828cd338
	ctx.lr = 0x8225A55C;
	sub_828CD338(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// addi r28,r11,-29824
	ctx.r28.s64 = ctx.r11.s64 + -29824;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r28,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r28.u32);
	// bl 0x82252ae8
	ctx.lr = 0x8225A574;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r24,7
	ctx.r24.s64 = 7;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// stw r24,860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 860, ctx.r24.u32);
	// addi r27,r11,-27768
	ctx.r27.s64 = ctx.r11.s64 + -27768;
	// stw r25,868(r31)
	PPC_STORE_U32(ctx.r31.u32 + 868, ctx.r25.u32);
	// stw r26,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r26.u32);
	// addi r22,r31,940
	ctx.r22.s64 = ctx.r31.s64 + 940;
	// stw r27,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r27.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_8225A5A0:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x8224d6d0
	ctx.lr = 0x8225A5A8;
	sub_8224D6D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r22,r22,104
	ctx.r22.s64 = ctx.r22.s64 + 104;
	// bge 0x8225a5a0
	if (!ctx.cr0.lt) goto loc_8225A5A0;
	// addi r30,r31,1772
	ctx.r30.s64 = ctx.r31.s64 + 1772;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82252ae8
	ctx.lr = 0x8225A5C4;
	sub_82252AE8(ctx, base);
	// stw r29,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r29.u32);
	// stw r23,1780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1780, ctx.r23.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x828cd338
	ctx.lr = 0x8225A5DC;
	sub_828CD338(ctx, base);
	// stw r28,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r28.u32);
	// addi r3,r31,1860
	ctx.r3.s64 = ctx.r31.s64 + 1860;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8224dc00
	ctx.lr = 0x8225A5EC;
	sub_8224DC00(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// addi r11,r11,-29612
	ctx.r11.s64 = ctx.r11.s64 + -29612;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// bl 0x8224df90
	ctx.lr = 0x8225A604;
	sub_8224DF90(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2036
	ctx.r3.s64 = ctx.r31.s64 + 2036;
	// addi r11,r11,-29236
	ctx.r11.s64 = ctx.r11.s64 + -29236;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// bl 0x82252218
	ctx.lr = 0x8225A61C;
	sub_82252218(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2132
	ctx.r3.s64 = ctx.r31.s64 + 2132;
	// addi r30,r11,-29856
	ctx.r30.s64 = ctx.r11.s64 + -29856;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r30.u32);
	// bl 0x82252ae8
	ctx.lr = 0x8225A634;
	sub_82252AE8(ctx, base);
	// stw r24,2140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2140, ctx.r24.u32);
	// stw r25,2148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2148, ctx.r25.u32);
	// addi r29,r31,2220
	ctx.r29.s64 = ctx.r31.s64 + 2220;
	// stw r26,2144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2144, ctx.r26.u32);
	// stw r27,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r27.u32);
loc_8225A648:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224d6d0
	ctx.lr = 0x8225A650;
	sub_8224D6D0(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// bge 0x8225a648
	if (!ctx.cr0.lt) goto loc_8225A648;
	// addi r3,r31,3052
	ctx.r3.s64 = ctx.r31.s64 + 3052;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x82252ae8
	ctx.lr = 0x8225A668;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r26,3060(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3060, ctx.r26.u32);
	// addi r3,r31,3140
	ctx.r3.s64 = ctx.r31.s64 + 3140;
	// addi r11,r11,-27640
	ctx.r11.s64 = ctx.r11.s64 + -27640;
	// stb r26,3064(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3064, ctx.r26.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r11.u32);
	// bl 0x82252218
	ctx.lr = 0x8225A688;
	sub_82252218(ctx, base);
	// stw r30,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r30.u32);
	// addi r3,r31,3236
	ctx.r3.s64 = ctx.r31.s64 + 3236;
	// bl 0x82252328
	ctx.lr = 0x8225A694;
	sub_82252328(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A6A0"))) PPC_WEAK_FUNC(sub_8225A6A0);
PPC_FUNC_IMPL(__imp__sub_8225A6A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8225A6A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-27776
	ctx.r11.s64 = ctx.r11.s64 + -27776;
	// addi r30,r10,-27640
	ctx.r30.s64 = ctx.r10.s64 + -27640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,3236
	ctx.r3.s64 = ctx.r3.s64 + 3236;
	// stw r30,3236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3236, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225A6D0;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,3140
	ctx.r3.s64 = ctx.r31.s64 + 3140;
	// addi r29,r11,-29856
	ctx.r29.s64 = ctx.r11.s64 + -29856;
	// stw r29,3140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3140, ctx.r29.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225A6E4;
	sub_828CD0D8(ctx, base);
	// stw r30,3052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3052, ctx.r30.u32);
	// addi r3,r31,3052
	ctx.r3.s64 = ctx.r31.s64 + 3052;
	// bl 0x828cd0d8
	ctx.lr = 0x8225A6F0;
	sub_828CD0D8(ctx, base);
	// addi r28,r31,832
	ctx.r28.s64 = ctx.r31.s64 + 832;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r27,7
	ctx.r27.s64 = 7;
	// addi r30,r28,2220
	ctx.r30.s64 = ctx.r28.s64 + 2220;
	// addi r26,r11,-25620
	ctx.r26.s64 = ctx.r11.s64 + -25620;
loc_8225A704:
	// stwu r26,-104(r30)
	ea = -104 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225A710;
	sub_828CD0D8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x8225a704
	if (!ctx.cr0.lt) goto loc_8225A704;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2132
	ctx.r3.s64 = ctx.r31.s64 + 2132;
	// addi r30,r11,-27768
	ctx.r30.s64 = ctx.r11.s64 + -27768;
	// stw r30,2132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2132, ctx.r30.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225A72C;
	sub_828CD0D8(ctx, base);
	// stw r29,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r29.u32);
	// addi r3,r31,2036
	ctx.r3.s64 = ctx.r31.s64 + 2036;
	// bl 0x828cd0d8
	ctx.lr = 0x8225A738;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1948
	ctx.r3.s64 = ctx.r31.s64 + 1948;
	// addi r11,r11,-29236
	ctx.r11.s64 = ctx.r11.s64 + -29236;
	// stw r11,1948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1948, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225A74C;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1860
	ctx.r3.s64 = ctx.r31.s64 + 1860;
	// addi r11,r11,-29612
	ctx.r11.s64 = ctx.r11.s64 + -29612;
	// stw r11,1860(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1860, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225A760;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1772
	ctx.r3.s64 = ctx.r31.s64 + 1772;
	// addi r29,r11,-29824
	ctx.r29.s64 = ctx.r11.s64 + -29824;
	// stw r29,1772(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1772, ctx.r29.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225A774;
	sub_828CD0D8(ctx, base);
	// addi r28,r28,940
	ctx.r28.s64 = ctx.r28.s64 + 940;
	// li r27,7
	ctx.r27.s64 = 7;
loc_8225A77C:
	// stwu r26,-104(r28)
	ea = -104 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r28.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225A788;
	sub_828CD0D8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x8225a77c
	if (!ctx.cr0.lt) goto loc_8225A77C;
	// stw r30,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r30.u32);
	// addi r3,r31,852
	ctx.r3.s64 = ctx.r31.s64 + 852;
	// bl 0x828cd0d8
	ctx.lr = 0x8225A79C;
	sub_828CD0D8(ctx, base);
	// stw r29,764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 764, ctx.r29.u32);
	// addi r3,r31,764
	ctx.r3.s64 = ctx.r31.s64 + 764;
	// bl 0x828cd0d8
	ctx.lr = 0x8225A7A8;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31676
	ctx.r11.s64 = ctx.r11.s64 + -31676;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224dae0
	ctx.lr = 0x8225A7BC;
	sub_8224DAE0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A7C4"))) PPC_WEAK_FUNC(sub_8225A7C4);
PPC_FUNC_IMPL(__imp__sub_8225A7C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A7C8"))) PPC_WEAK_FUNC(sub_8225A7C8);
PPC_FUNC_IMPL(__imp__sub_8225A7C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8225A7D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8224d9f8
	ctx.lr = 0x8225A7DC;
	sub_8224D9F8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// li r4,8
	ctx.r4.s64 = 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225A7F4;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// addi r30,r11,-29680
	ctx.r30.s64 = ctx.r11.s64 + -29680;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r30.u32);
	// bl 0x828d2e40
	ctx.lr = 0x8225A80C;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r31,912
	ctx.r28.s64 = ctx.r31.s64 + 912;
	// addi r29,r11,-28888
	ctx.r29.s64 = ctx.r11.s64 + -28888;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r27,7
	ctx.r27.s64 = 7;
	// stw r29,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r29.u32);
	// addi r26,r11,-29808
	ctx.r26.s64 = ctx.r11.s64 + -29808;
loc_8225A828:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d2d28
	ctx.lr = 0x8225A834;
	sub_828D2D28(ctx, base);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bge 0x8225a828
	if (!ctx.cr0.lt) goto loc_8225A828;
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x828d2d28
	ctx.lr = 0x8225A850;
	sub_828D2D28(ctx, base);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// addi r3,r31,1668
	ctx.r3.s64 = ctx.r31.s64 + 1668;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x828d2e40
	ctx.lr = 0x8225A860;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// addi r11,r11,-30840
	ctx.r11.s64 = ctx.r11.s64 + -30840;
	// li r4,16
	ctx.r4.s64 = 16;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x828d2e40
	ctx.lr = 0x8225A878;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225A890;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1920
	ctx.r3.s64 = ctx.r31.s64 + 1920;
	// addi r30,r11,-29744
	ctx.r30.s64 = ctx.r11.s64 + -29744;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r30.u32);
	// bl 0x828d2e40
	ctx.lr = 0x8225A8A8;
	sub_828D2E40(ctx, base);
	// addi r28,r31,2004
	ctx.r28.s64 = ctx.r31.s64 + 2004;
	// li r27,7
	ctx.r27.s64 = 7;
	// stw r29,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r29.u32);
loc_8225A8B4:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d2d28
	ctx.lr = 0x8225A8C0;
	sub_828D2D28(ctx, base);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bge 0x8225a8b4
	if (!ctx.cr0.lt) goto loc_8225A8B4;
	// addi r3,r31,2676
	ctx.r3.s64 = ctx.r31.s64 + 2676;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x8225A8DC;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2760
	ctx.r3.s64 = ctx.r31.s64 + 2760;
	// addi r29,r11,-29744
	ctx.r29.s64 = ctx.r11.s64 + -29744;
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r29,2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2676, ctx.r29.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225A8F4;
	sub_828D2D28(ctx, base);
	// stw r30,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r30.u32);
	// addi r3,r31,2844
	ctx.r3.s64 = ctx.r31.s64 + 2844;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x8225A904;
	sub_828D2D28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225A914"))) PPC_WEAK_FUNC(sub_8225A914);
PPC_FUNC_IMPL(__imp__sub_8225A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225A918"))) PPC_WEAK_FUNC(sub_8225A918);
PPC_FUNC_IMPL(__imp__sub_8225A918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8225A920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-27792
	ctx.r11.s64 = ctx.r11.s64 + -27792;
	// addi r30,r10,-29744
	ctx.r30.s64 = ctx.r10.s64 + -29744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,2844
	ctx.r3.s64 = ctx.r3.s64 + 2844;
	// stw r30,2844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2844, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8225A948;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2760
	ctx.r3.s64 = ctx.r31.s64 + 2760;
	// addi r29,r11,-29744
	ctx.r29.s64 = ctx.r11.s64 + -29744;
	// stw r29,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r29.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8225A95C;
	sub_828D2B18(ctx, base);
	// stw r30,2676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2676, ctx.r30.u32);
	// addi r3,r31,2676
	ctx.r3.s64 = ctx.r31.s64 + 2676;
	// bl 0x828d2b18
	ctx.lr = 0x8225A968;
	sub_828D2B18(ctx, base);
	// addi r28,r31,672
	ctx.r28.s64 = ctx.r31.s64 + 672;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r27,7
	ctx.r27.s64 = 7;
	// addi r30,r28,2004
	ctx.r30.s64 = ctx.r28.s64 + 2004;
	// addi r26,r11,-29808
	ctx.r26.s64 = ctx.r11.s64 + -29808;
loc_8225A97C:
	// stwu r26,-84(r30)
	ea = -84 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d2b18
	ctx.lr = 0x8225A988;
	sub_828D2B18(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x8225a97c
	if (!ctx.cr0.lt) goto loc_8225A97C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1920
	ctx.r3.s64 = ctx.r31.s64 + 1920;
	// addi r30,r11,-28888
	ctx.r30.s64 = ctx.r11.s64 + -28888;
	// stw r30,1920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1920, ctx.r30.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8225A9A4;
	sub_828D2B18(ctx, base);
	// stw r29,1836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1836, ctx.r29.u32);
	// addi r3,r31,1836
	ctx.r3.s64 = ctx.r31.s64 + 1836;
	// bl 0x828d2b18
	ctx.lr = 0x8225A9B0;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1752
	ctx.r3.s64 = ctx.r31.s64 + 1752;
	// addi r11,r11,-30552
	ctx.r11.s64 = ctx.r11.s64 + -30552;
	// stw r11,1752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1752, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8225A9C4;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1668
	ctx.r3.s64 = ctx.r31.s64 + 1668;
	// addi r11,r11,-30840
	ctx.r11.s64 = ctx.r11.s64 + -30840;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8225A9D8;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1584
	ctx.r3.s64 = ctx.r31.s64 + 1584;
	// addi r29,r11,-29680
	ctx.r29.s64 = ctx.r11.s64 + -29680;
	// stw r29,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r29.u32);
	// bl 0x828d2b18
	ctx.lr = 0x8225A9EC;
	sub_828D2B18(ctx, base);
	// addi r28,r28,912
	ctx.r28.s64 = ctx.r28.s64 + 912;
	// li r27,7
	ctx.r27.s64 = 7;
loc_8225A9F4:
	// stwu r26,-84(r28)
	ea = -84 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r28.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d2b18
	ctx.lr = 0x8225AA00;
	sub_828D2B18(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x8225a9f4
	if (!ctx.cr0.lt) goto loc_8225A9F4;
	// stw r30,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r30.u32);
	// addi r3,r31,828
	ctx.r3.s64 = ctx.r31.s64 + 828;
	// bl 0x828d2b18
	ctx.lr = 0x8225AA14;
	sub_828D2B18(ctx, base);
	// stw r29,744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 744, ctx.r29.u32);
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// bl 0x828d2b18
	ctx.lr = 0x8225AA20;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-31692
	ctx.r11.s64 = ctx.r11.s64 + -31692;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224d738
	ctx.lr = 0x8225AA34;
	sub_8224D738(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AA3C"))) PPC_WEAK_FUNC(sub_8225AA3C);
PPC_FUNC_IMPL(__imp__sub_8225AA3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AA40"))) PPC_WEAK_FUNC(sub_8225AA40);
PPC_FUNC_IMPL(__imp__sub_8225AA40) {
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
	// bl 0x8225a6a0
	ctx.lr = 0x8225AA60;
	sub_8225A6A0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225aa70
	if (ctx.cr0.eq) goto loc_8225AA70;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225AA70;
	sub_82691540(ctx, base);
loc_8225AA70:
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

__attribute__((alias("__imp__sub_8225AA8C"))) PPC_WEAK_FUNC(sub_8225AA8C);
PPC_FUNC_IMPL(__imp__sub_8225AA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AA90"))) PPC_WEAK_FUNC(sub_8225AA90);
PPC_FUNC_IMPL(__imp__sub_8225AA90) {
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
	// bl 0x8225a918
	ctx.lr = 0x8225AAB0;
	sub_8225A918(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225aac0
	if (ctx.cr0.eq) goto loc_8225AAC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225AAC0;
	sub_82691540(ctx, base);
loc_8225AAC0:
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

__attribute__((alias("__imp__sub_8225AADC"))) PPC_WEAK_FUNC(sub_8225AADC);
PPC_FUNC_IMPL(__imp__sub_8225AADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AAE0"))) PPC_WEAK_FUNC(sub_8225AAE0);
PPC_FUNC_IMPL(__imp__sub_8225AAE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225AAE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c0bb8
	ctx.lr = 0x8225AAF8;
	sub_828C0BB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// addi r11,r11,-27736
	ctx.r11.s64 = ctx.r11.s64 + -27736;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x8224d6d0
	ctx.lr = 0x8225AB0C;
	sub_8224D6D0(ctx, base);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x8224d668
	ctx.lr = 0x8225AB14;
	sub_8224D668(ctx, base);
	// addi r3,r31,260
	ctx.r3.s64 = ctx.r31.s64 + 260;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82252ae8
	ctx.lr = 0x8225AB20;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-27728
	ctx.r11.s64 = ctx.r11.s64 + -27728;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r11,260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 260, ctx.r11.u32);
	// bl 0x82252328
	ctx.lr = 0x8225AB40;
	sub_82252328(ctx, base);
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x82252328
	ctx.lr = 0x8225AB48;
	sub_82252328(ctx, base);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82252ae8
	ctx.lr = 0x8225AB54;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// addi r3,r31,620
	ctx.r3.s64 = ctx.r31.s64 + 620;
	// addi r11,r11,-27640
	ctx.r11.s64 = ctx.r11.s64 + -27640;
	// stb r30,544(r31)
	PPC_STORE_U8(ctx.r31.u32 + 544, ctx.r30.u8);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r11.u32);
	// bl 0x82252ae8
	ctx.lr = 0x8225AB74;
	sub_82252AE8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r30.u32);
	// addi r29,r31,716
	ctx.r29.s64 = ctx.r31.s64 + 716;
	// addi r11,r11,-27712
	ctx.r11.s64 = ctx.r11.s64 + -27712;
	// stw r30,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r30.u32);
	// li r30,14
	ctx.r30.s64 = 14;
	// stw r11,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r11.u32);
loc_8225AB90:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8224d6d0
	ctx.lr = 0x8225AB98;
	sub_8224D6D0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,104
	ctx.r29.s64 = ctx.r29.s64 + 104;
	// bge 0x8225ab90
	if (!ctx.cr0.lt) goto loc_8225AB90;
	// addi r29,r31,2276
	ctx.r29.s64 = ctx.r31.s64 + 2276;
	// li r30,14
	ctx.r30.s64 = 14;
loc_8225ABAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82252328
	ctx.lr = 0x8225ABB4;
	sub_82252328(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bge 0x8225abac
	if (!ctx.cr0.lt) goto loc_8225ABAC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225ABCC"))) PPC_WEAK_FUNC(sub_8225ABCC);
PPC_FUNC_IMPL(__imp__sub_8225ABCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225ABD0"))) PPC_WEAK_FUNC(sub_8225ABD0);
PPC_FUNC_IMPL(__imp__sub_8225ABD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225ABD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27736
	ctx.r11.s64 = ctx.r11.s64 + -27736;
	// addi r30,r3,3596
	ctx.r30.s64 = ctx.r3.s64 + 3596;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,14
	ctx.r28.s64 = 14;
	// addi r29,r11,-27640
	ctx.r29.s64 = ctx.r11.s64 + -27640;
loc_8225ABFC:
	// stwu r29,-88(r30)
	ea = -88 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC08;
	sub_828CD0D8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8225abfc
	if (!ctx.cr0.lt) goto loc_8225ABFC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r31,2276
	ctx.r30.s64 = ctx.r31.s64 + 2276;
	// li r28,14
	ctx.r28.s64 = 14;
	// addi r27,r11,-25620
	ctx.r27.s64 = ctx.r11.s64 + -25620;
loc_8225AC20:
	// stwu r27,-104(r30)
	ea = -104 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC2C;
	sub_828CD0D8(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8225ac20
	if (!ctx.cr0.lt) goto loc_8225AC20;
	// lwz r3,712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 712);
	// addi r30,r31,620
	ctx.r30.s64 = ctx.r31.s64 + 620;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ac48
	if (ctx.cr6.eq) goto loc_8225AC48;
	// bl 0x82241d18
	ctx.lr = 0x8225AC48;
	sub_82241D18(ctx, base);
loc_8225AC48:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC50;
	sub_828CD0D8(ctx, base);
	// stw r29,532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 532, ctx.r29.u32);
	// addi r3,r31,532
	ctx.r3.s64 = ctx.r31.s64 + 532;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC5C;
	sub_828CD0D8(ctx, base);
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// addi r3,r31,444
	ctx.r3.s64 = ctx.r31.s64 + 444;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC68;
	sub_828CD0D8(ctx, base);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
	// addi r3,r31,356
	ctx.r3.s64 = ctx.r31.s64 + 356;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC74;
	sub_828CD0D8(ctx, base);
	// lwz r3,352(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r30,r31,260
	ctx.r30.s64 = ctx.r31.s64 + 260;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ac88
	if (ctx.cr6.eq) goto loc_8225AC88;
	// bl 0x82241d18
	ctx.lr = 0x8225AC88;
	sub_82241D18(ctx, base);
loc_8225AC88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC90;
	sub_828CD0D8(ctx, base);
	// stw r27,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r27.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x828cd0d8
	ctx.lr = 0x8225AC9C;
	sub_828CD0D8(ctx, base);
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// bl 0x828cd0d8
	ctx.lr = 0x8225ACA8;
	sub_828CD0D8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-32104
	ctx.r11.s64 = ctx.r11.s64 + -32104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828c0bf0
	ctx.lr = 0x8225ACBC;
	sub_828C0BF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225ACC4"))) PPC_WEAK_FUNC(sub_8225ACC4);
PPC_FUNC_IMPL(__imp__sub_8225ACC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225ACC8"))) PPC_WEAK_FUNC(sub_8225ACC8);
PPC_FUNC_IMPL(__imp__sub_8225ACC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225ACD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828c1100
	ctx.lr = 0x8225ACDC;
	sub_828C1100(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,-27752
	ctx.r11.s64 = ctx.r11.s64 + -27752;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225ACF4;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// addi r29,r11,-29808
	ctx.r29.s64 = ctx.r11.s64 + -29808;
	// li r4,4
	ctx.r4.s64 = 4;
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225AD0C;
	sub_828D2D28(ctx, base);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// li r4,1064
	ctx.r4.s64 = 1064;
	// bl 0x828d2e40
	ctx.lr = 0x8225AD1C;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// addi r11,r11,-27696
	ctx.r11.s64 = ctx.r11.s64 + -27696;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 240, ctx.r11.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225AD34;
	sub_828D2D28(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// addi r30,r11,-29744
	ctx.r30.s64 = ctx.r11.s64 + -29744;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r30.u32);
	// bl 0x828d2d28
	ctx.lr = 0x8225AD4C;
	sub_828D2D28(ctx, base);
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828d2d28
	ctx.lr = 0x8225AD5C;
	sub_828D2D28(ctx, base);
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x828d2e40
	ctx.lr = 0x8225AD6C;
	sub_828D2E40(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r31,660
	ctx.r28.s64 = ctx.r31.s64 + 660;
	// addi r11,r11,-27696
	ctx.r11.s64 = ctx.r11.s64 + -27696;
	// li r27,14
	ctx.r27.s64 = 14;
	// stw r11,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r11.u32);
loc_8225AD80:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d2d28
	ctx.lr = 0x8225AD8C;
	sub_828D2D28(ctx, base);
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,84
	ctx.r28.s64 = ctx.r28.s64 + 84;
	// bge 0x8225ad80
	if (!ctx.cr0.lt) goto loc_8225AD80;
	// addi r29,r31,1920
	ctx.r29.s64 = ctx.r31.s64 + 1920;
	// li r28,14
	ctx.r28.s64 = 14;
loc_8225ADA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828d2d28
	ctx.lr = 0x8225ADB0;
	sub_828D2D28(ctx, base);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// bge 0x8225ada4
	if (!ctx.cr0.lt) goto loc_8225ADA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225ADCC"))) PPC_WEAK_FUNC(sub_8225ADCC);
PPC_FUNC_IMPL(__imp__sub_8225ADCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225ADD0"))) PPC_WEAK_FUNC(sub_8225ADD0);
PPC_FUNC_IMPL(__imp__sub_8225ADD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225ADD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r27,r3,1260
	ctx.r27.s64 = ctx.r3.s64 + 1260;
	// addi r11,r11,-27752
	ctx.r11.s64 = ctx.r11.s64 + -27752;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r30,r27,1920
	ctx.r30.s64 = ctx.r27.s64 + 1920;
	// li r28,14
	ctx.r28.s64 = 14;
	// addi r29,r11,-29744
	ctx.r29.s64 = ctx.r11.s64 + -29744;
loc_8225AE00:
	// stwu r29,-84(r30)
	ea = -84 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE0C;
	sub_828D2B18(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x8225ae00
	if (!ctx.cr0.lt) goto loc_8225AE00;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r28,r27,660
	ctx.r28.s64 = ctx.r27.s64 + 660;
	// li r27,14
	ctx.r27.s64 = 14;
	// addi r30,r11,-29808
	ctx.r30.s64 = ctx.r11.s64 + -29808;
loc_8225AE24:
	// stwu r30,-84(r28)
	ea = -84 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r28.u32 = ea;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE30;
	sub_828D2B18(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bge 0x8225ae24
	if (!ctx.cr0.lt) goto loc_8225AE24;
	// addi r3,r31,576
	ctx.r3.s64 = ctx.r31.s64 + 576;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE40;
	sub_828D2B18(ctx, base);
	// stw r29,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r29.u32);
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE4C;
	sub_828D2B18(ctx, base);
	// stw r29,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r29.u32);
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE58;
	sub_828D2B18(ctx, base);
	// stw r29,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r29.u32);
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE64;
	sub_828D2B18(ctx, base);
	// addi r3,r31,240
	ctx.r3.s64 = ctx.r31.s64 + 240;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE6C;
	sub_828D2B18(ctx, base);
	// stw r30,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r30.u32);
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE78;
	sub_828D2B18(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x828d2b18
	ctx.lr = 0x8225AE84;
	sub_828D2B18(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-29872
	ctx.r11.s64 = ctx.r11.s64 + -29872;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x828cc810
	ctx.lr = 0x8225AE98;
	sub_828CC810(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AEA0"))) PPC_WEAK_FUNC(sub_8225AEA0);
PPC_FUNC_IMPL(__imp__sub_8225AEA0) {
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
	// bl 0x8225abd0
	ctx.lr = 0x8225AEC0;
	sub_8225ABD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225aed0
	if (ctx.cr0.eq) goto loc_8225AED0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225AED0;
	sub_82691540(ctx, base);
loc_8225AED0:
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

__attribute__((alias("__imp__sub_8225AEEC"))) PPC_WEAK_FUNC(sub_8225AEEC);
PPC_FUNC_IMPL(__imp__sub_8225AEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AEF0"))) PPC_WEAK_FUNC(sub_8225AEF0);
PPC_FUNC_IMPL(__imp__sub_8225AEF0) {
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
	// bl 0x8225add0
	ctx.lr = 0x8225AF10;
	sub_8225ADD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225af20
	if (ctx.cr0.eq) goto loc_8225AF20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225AF20;
	sub_82691540(ctx, base);
loc_8225AF20:
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

__attribute__((alias("__imp__sub_8225AF3C"))) PPC_WEAK_FUNC(sub_8225AF3C);
PPC_FUNC_IMPL(__imp__sub_8225AF3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AF40"))) PPC_WEAK_FUNC(sub_8225AF40);
PPC_FUNC_IMPL(__imp__sub_8225AF40) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254d4a0
	sub_8254D4A0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AF44"))) PPC_WEAK_FUNC(sub_8225AF44);
PPC_FUNC_IMPL(__imp__sub_8225AF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AF48"))) PPC_WEAK_FUNC(sub_8225AF48);
PPC_FUNC_IMPL(__imp__sub_8225AF48) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254d580
	sub_8254D580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AF4C"))) PPC_WEAK_FUNC(sub_8225AF4C);
PPC_FUNC_IMPL(__imp__sub_8225AF4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AF50"))) PPC_WEAK_FUNC(sub_8225AF50);
PPC_FUNC_IMPL(__imp__sub_8225AF50) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254d1b8
	sub_8254D1B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225AF54"))) PPC_WEAK_FUNC(sub_8225AF54);
PPC_FUNC_IMPL(__imp__sub_8225AF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AF58"))) PPC_WEAK_FUNC(sub_8225AF58);
PPC_FUNC_IMPL(__imp__sub_8225AF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// add r11,r4,r6
	ctx.r11.u64 = ctx.r4.u64 + ctx.r6.u64;
	// li r10,7
	ctx.r10.s64 = 7;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// subfic r11,r11,2
	ctx.xer.ca = ctx.r11.u32 <= 2;
	ctx.r11.s64 = 2 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225AF74"))) PPC_WEAK_FUNC(sub_8225AF74);
PPC_FUNC_IMPL(__imp__sub_8225AF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225AF78"))) PPC_WEAK_FUNC(sub_8225AF78);
PPC_FUNC_IMPL(__imp__sub_8225AF78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225AF80;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,-28352(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28352);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x8225afb4
	if (!ctx.cr0.eq) goto loc_8225AFB4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,-28352(r10)
	PPC_STORE_U32(ctx.r10.u32 + -28352, ctx.r11.u32);
	// bl 0x8241a328
	ctx.lr = 0x8225AFA8;
	sub_8241A328(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17080
	ctx.r3.s64 = ctx.r11.s64 + 17080;
	// bl 0x82fa2318
	ctx.lr = 0x8225AFB4;
	sub_82FA2318(ctx, base);
loc_8225AFB4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546708
	ctx.lr = 0x8225AFC4;
	sub_82546708(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225b048
	if (ctx.cr0.eq) goto loc_8225B048;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822400d8
	ctx.lr = 0x8225AFD8;
	sub_822400D8(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r30,r11,-28376
	ctx.r30.s64 = ctx.r11.s64 + -28376;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// bl 0x82262678
	ctx.lr = 0x8225AFF0;
	sub_82262678(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8225B000;
	sub_822402C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8225b038
	if (ctx.cr6.eq) goto loc_8225B038;
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8225b038
	if (!ctx.cr6.eq) goto loc_8225B038;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8225b03c
	goto loc_8225B03C;
loc_8225B038:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225B03C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x8225B044;
	sub_825469E0(ctx, base);
	// b 0x8225b04c
	goto loc_8225B04C;
loc_8225B048:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225B04C:
	// lwz r3,776(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8225b078
	if (ctx.cr6.eq) goto loc_8225B078;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225b074
	if (ctx.cr6.eq) goto loc_8225B074;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225B074:
	// stw r30,776(r29)
	PPC_STORE_U32(ctx.r29.u32 + 776, ctx.r30.u32);
loc_8225B078:
	// lwz r31,776(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 776);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225b0e4
	if (ctx.cr6.eq) goto loc_8225B0E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82920158
	ctx.lr = 0x8225B0A0;
	sub_82920158(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82920158
	ctx.lr = 0x8225B0BC;
	sub_82920158(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82920158
	ctx.lr = 0x8225B0D8;
	sub_82920158(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_8225B0E4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B0EC"))) PPC_WEAK_FUNC(sub_8225B0EC);
PPC_FUNC_IMPL(__imp__sub_8225B0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B0F0"))) PPC_WEAK_FUNC(sub_8225B0F0);
PPC_FUNC_IMPL(__imp__sub_8225B0F0) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x8254d110
	ctx.lr = 0x8225B110;
	sub_8254D110(ctx, base);
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8225b14c
	if (!ctx.cr6.eq) goto loc_8225B14C;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225b14c
	if (!ctx.cr6.eq) goto loc_8225B14C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r31,180(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b140
	if (ctx.cr6.eq) goto loc_8225B140;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8225b144
	goto loc_8225B144;
loc_8225B140:
	// bl 0x822599a0
	ctx.lr = 0x8225B144;
	sub_822599A0(ctx, base);
loc_8225B144:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x822424a0
	ctx.lr = 0x8225B14C;
	sub_822424A0(ctx, base);
loc_8225B14C:
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

__attribute__((alias("__imp__sub_8225B164"))) PPC_WEAK_FUNC(sub_8225B164);
PPC_FUNC_IMPL(__imp__sub_8225B164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B168"))) PPC_WEAK_FUNC(sub_8225B168);
PPC_FUNC_IMPL(__imp__sub_8225B168) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254f1e8
	sub_8254F1E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B16C"))) PPC_WEAK_FUNC(sub_8225B16C);
PPC_FUNC_IMPL(__imp__sub_8225B16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B170"))) PPC_WEAK_FUNC(sub_8225B170);
PPC_FUNC_IMPL(__imp__sub_8225B170) {
	PPC_FUNC_PROLOGUE();
	// b 0x8254f240
	sub_8254F240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B174"))) PPC_WEAK_FUNC(sub_8225B174);
PPC_FUNC_IMPL(__imp__sub_8225B174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B178"))) PPC_WEAK_FUNC(sub_8225B178);
PPC_FUNC_IMPL(__imp__sub_8225B178) {
	PPC_FUNC_PROLOGUE();
	// b 0x8224c928
	sub_8224C928(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B17C"))) PPC_WEAK_FUNC(sub_8225B17C);
PPC_FUNC_IMPL(__imp__sub_8225B17C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B180"))) PPC_WEAK_FUNC(sub_8225B180);
PPC_FUNC_IMPL(__imp__sub_8225B180) {
	PPC_FUNC_PROLOGUE();
	// b 0x82252550
	sub_82252550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B184"))) PPC_WEAK_FUNC(sub_8225B184);
PPC_FUNC_IMPL(__imp__sub_8225B184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B188"))) PPC_WEAK_FUNC(sub_8225B188);
PPC_FUNC_IMPL(__imp__sub_8225B188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225B190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// addi r11,r6,8
	ctx.r11.s64 = ctx.r6.s64 + 8;
	// ble cr6,0x8225b1ac
	if (!ctx.cr6.gt) goto loc_8225B1AC;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
loc_8225B1AC:
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r29,r11,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8224e058
	ctx.lr = 0x8225B1C8;
	sub_8224E058(ctx, base);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne 0x8225b1f0
	if (!ctx.cr0.eq) goto loc_8225B1F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224e2d0
	ctx.lr = 0x8225B1E0;
	sub_8224E2D0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fca8
	ctx.lr = 0x8225B1F0;
	sub_8291FCA8(ctx, base);
loc_8225B1F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B1F8"))) PPC_WEAK_FUNC(sub_8225B1F8);
PPC_FUNC_IMPL(__imp__sub_8225B1F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225B200;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225bb80
	ctx.lr = 0x8225B220;
	sub_8225BB80(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b234
	if (ctx.cr0.eq) goto loc_8225B234;
	// stb r29,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r29.u8);
	// b 0x8225b24c
	goto loc_8225B24C;
loc_8225B234:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225bb80
	ctx.lr = 0x8225B248;
	sub_8225BB80(ctx, base);
	// stb r3,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r3.u8);
loc_8225B24C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225b278
	if (ctx.cr6.eq) goto loc_8225B278;
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224e468
	ctx.lr = 0x8225B278;
	sub_8224E468(ctx, base);
loc_8225B278:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B280"))) PPC_WEAK_FUNC(sub_8225B280);
PPC_FUNC_IMPL(__imp__sub_8225B280) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8224edb8
	ctx.lr = 0x8225B2AC;
	sub_8224EDB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8225b2c0
	if (ctx.cr6.gt) goto loc_8225B2C0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x8225b2c4
	goto loc_8225B2C4;
loc_8225B2C0:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8225B2C4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-30032
	ctx.r4.s64 = ctx.r11.s64 + -30032;
	// bl 0x82251da0
	ctx.lr = 0x8225B2D4;
	sub_82251DA0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82557028
	ctx.lr = 0x8225B2DC;
	sub_82557028(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-30040
	ctx.r4.s64 = ctx.r11.s64 + -30040;
	// bl 0x82251da0
	ctx.lr = 0x8225B2E8;
	sub_82251DA0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa0978
	ctx.lr = 0x8225B2F4;
	sub_82FA0978(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82251a88
	ctx.lr = 0x8225B300;
	sub_82251A88(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stb r10,64(r11)
	PPC_STORE_U8(ctx.r11.u32 + 64, ctx.r10.u8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwimi r10,r9,11,20,22
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 11) & 0xE00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF1FF);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lbz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// bl 0x82251960
	ctx.lr = 0x8225B338;
	sub_82251960(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-30052
	ctx.r4.s64 = ctx.r11.s64 + -30052;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82251da0
	ctx.lr = 0x8225B348;
	sub_82251DA0(ctx, base);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82252010
	ctx.lr = 0x8225B354;
	sub_82252010(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8224fa68
	ctx.lr = 0x8225B35C;
	sub_8224FA68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_8225B378"))) PPC_WEAK_FUNC(sub_8225B378);
PPC_FUNC_IMPL(__imp__sub_8225B378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225B380;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b3b8
	if (ctx.cr6.eq) goto loc_8225B3B8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B3B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225b3bc
	goto loc_8225B3BC;
loc_8225B3B8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B3BC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225b414
	if (!ctx.cr6.eq) goto loc_8225B414;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225b3e8
	if (ctx.cr6.eq) goto loc_8225B3E8;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B3E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225b3ec
	goto loc_8225B3EC;
loc_8225B3E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B3EC:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225b414
	if (!ctx.cr6.eq) goto loc_8225B414;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8225b40c
	if (ctx.cr6.gt) goto loc_8225B40C;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// b 0x8225b428
	goto loc_8225B428;
loc_8225B40C:
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x8225b428
	goto loc_8225B428;
loc_8225B414:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828d2f28
	ctx.lr = 0x8225B41C;
	sub_828D2F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825da298
	ctx.lr = 0x8225B428;
	sub_825DA298(ctx, base);
loc_8225B428:
	// add r4,r3,r29
	ctx.r4.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8225B438;
	sub_82FA77C0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B440"))) PPC_WEAK_FUNC(sub_8225B440);
PPC_FUNC_IMPL(__imp__sub_8225B440) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27768
	ctx.r11.s64 = ctx.r11.s64 + -27768;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x828cd0d8
	ctx.lr = 0x8225B46C;
	sub_828CD0D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b47c
	if (ctx.cr0.eq) goto loc_8225B47C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225B47C;
	sub_82691540(ctx, base);
loc_8225B47C:
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

__attribute__((alias("__imp__sub_8225B498"))) PPC_WEAK_FUNC(sub_8225B498);
PPC_FUNC_IMPL(__imp__sub_8225B498) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r3,88(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// addi r5,r6,8
	ctx.r5.s64 = ctx.r6.s64 + 8;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8225b4b4
	if (!ctx.cr6.gt) goto loc_8225B4B4;
	// lwz r5,8(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
loc_8225B4B4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_8225B4C4"))) PPC_WEAK_FUNC(sub_8225B4C4);
PPC_FUNC_IMPL(__imp__sub_8225B4C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B4C8"))) PPC_WEAK_FUNC(sub_8225B4C8);
PPC_FUNC_IMPL(__imp__sub_8225B4C8) {
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
	// stwu r1,-1168(r1)
	ea = -1168 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x822c3488
	ctx.lr = 0x8225B4F0;
	sub_822C3488(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,88(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225B508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225b54c
	if (ctx.cr6.eq) goto loc_8225B54C;
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,1064
	ctx.r10.s64 = 1064;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x8225B528;
	sub_82691500(ctx, base);
	// li r5,1064
	ctx.r5.s64 = 1064;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8225B538;
	sub_82FA7CF0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224e468
	ctx.lr = 0x8225B54C;
	sub_8224E468(ctx, base);
loc_8225B54C:
	// addi r1,r1,1168
	ctx.r1.s64 = ctx.r1.s64 + 1168;
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

__attribute__((alias("__imp__sub_8225B564"))) PPC_WEAK_FUNC(sub_8225B564);
PPC_FUNC_IMPL(__imp__sub_8225B564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B568"))) PPC_WEAK_FUNC(sub_8225B568);
PPC_FUNC_IMPL(__imp__sub_8225B568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225B570;
	__savegprlr_28(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8224edb8
	ctx.lr = 0x8225B588;
	sub_8224EDB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224edb8
	ctx.lr = 0x8225B598;
	sub_8224EDB8(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r30,r11,11328
	ctx.r30.s64 = ctx.r11.s64 + 11328;
	// addi r29,r10,-29068
	ctx.r29.s64 = ctx.r10.s64 + -29068;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa2a90
	ctx.lr = 0x8225B5B4;
	sub_82FA2A90(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r11,-27824
	ctx.r4.s64 = ctx.r11.s64 + -27824;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82251da0
	ctx.lr = 0x8225B5C8;
	sub_82251DA0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82251da0
	ctx.lr = 0x8225B5D0;
	sub_82251DA0(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82252010
	ctx.lr = 0x8225B5DC;
	sub_82252010(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224fa68
	ctx.lr = 0x8225B5E4;
	sub_8224FA68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa2a90
	ctx.lr = 0x8225B5F0;
	sub_82FA2A90(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r11,-32248
	ctx.r4.s64 = ctx.r11.s64 + -32248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82251da0
	ctx.lr = 0x8225B604;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82251da0
	ctx.lr = 0x8225B60C;
	sub_82251DA0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-32256
	ctx.r4.s64 = ctx.r11.s64 + -32256;
	// bl 0x82251da0
	ctx.lr = 0x8225B618;
	sub_82251DA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d4c8
	ctx.lr = 0x8225B620;
	sub_8224D4C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-30052
	ctx.r4.s64 = ctx.r11.s64 + -30052;
	// bl 0x82251da0
	ctx.lr = 0x8225B62C;
	sub_82251DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8225B63C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// bl 0x82252010
	ctx.lr = 0x8225B648;
	sub_82252010(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8224fa68
	ctx.lr = 0x8225B650;
	sub_8224FA68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B65C"))) PPC_WEAK_FUNC(sub_8225B65C);
PPC_FUNC_IMPL(__imp__sub_8225B65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B660"))) PPC_WEAK_FUNC(sub_8225B660);
PPC_FUNC_IMPL(__imp__sub_8225B660) {
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
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x8224edb8
	ctx.lr = 0x8225B68C;
	sub_8224EDB8(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bgt cr6,0x8225b6a0
	if (ctx.cr6.gt) goto loc_8225B6A0;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x8225b6a4
	goto loc_8225B6A4;
loc_8225B6A0:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8225B6A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224edb8
	ctx.lr = 0x8225B6B4;
	sub_8224EDB8(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82251960
	ctx.lr = 0x8225B6C0;
	sub_82251960(ctx, base);
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82252010
	ctx.lr = 0x8225B6CC;
	sub_82252010(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8224fa68
	ctx.lr = 0x8225B6D4;
	sub_8224FA68(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// addi r4,r11,11328
	ctx.r4.s64 = ctx.r11.s64 + 11328;
	// addi r3,r10,-29020
	ctx.r3.s64 = ctx.r10.s64 + -29020;
	// bl 0x82fa2a90
	ctx.lr = 0x8225B6E8;
	sub_82FA2A90(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,-32248
	ctx.r4.s64 = ctx.r11.s64 + -32248;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82251da0
	ctx.lr = 0x8225B6FC;
	sub_82251DA0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82251da0
	ctx.lr = 0x8225B704;
	sub_82251DA0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-32256
	ctx.r4.s64 = ctx.r11.s64 + -32256;
	// bl 0x82251da0
	ctx.lr = 0x8225B710;
	sub_82251DA0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224d4c8
	ctx.lr = 0x8225B718;
	sub_8224D4C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r11,-30052
	ctx.r4.s64 = ctx.r11.s64 + -30052;
	// bl 0x82251da0
	ctx.lr = 0x8225B724;
	sub_82251DA0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x8225B734;
	sub_822402C8(ctx, base);
	// addi r4,r1,276
	ctx.r4.s64 = ctx.r1.s64 + 276;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82252010
	ctx.lr = 0x8225B740;
	sub_82252010(ctx, base);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8224fa68
	ctx.lr = 0x8225B748;
	sub_8224FA68(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
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

__attribute__((alias("__imp__sub_8225B764"))) PPC_WEAK_FUNC(sub_8225B764);
PPC_FUNC_IMPL(__imp__sub_8225B764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B768"))) PPC_WEAK_FUNC(sub_8225B768);
PPC_FUNC_IMPL(__imp__sub_8225B768) {
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
	// lwz r3,92(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225b794
	if (ctx.cr6.eq) goto loc_8225B794;
	// bl 0x82241d18
	ctx.lr = 0x8225B794;
	sub_82241D18(ctx, base);
loc_8225B794:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cd0d8
	ctx.lr = 0x8225B79C;
	sub_828CD0D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b7ac
	if (ctx.cr0.eq) goto loc_8225B7AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225B7AC;
	sub_82691540(ctx, base);
loc_8225B7AC:
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

__attribute__((alias("__imp__sub_8225B7C8"))) PPC_WEAK_FUNC(sub_8225B7C8);
PPC_FUNC_IMPL(__imp__sub_8225B7C8) {
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
	// bl 0x828d2b18
	ctx.lr = 0x8225B7E8;
	sub_828D2B18(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b7f8
	if (ctx.cr0.eq) goto loc_8225B7F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225B7F8;
	sub_82691540(ctx, base);
loc_8225B7F8:
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

__attribute__((alias("__imp__sub_8225B814"))) PPC_WEAK_FUNC(sub_8225B814);
PPC_FUNC_IMPL(__imp__sub_8225B814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225B818"))) PPC_WEAK_FUNC(sub_8225B818);
PPC_FUNC_IMPL(__imp__sub_8225B818) {
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
	// li r3,2160
	ctx.r3.s64 = 2160;
	// bl 0x82691500
	ctx.lr = 0x8225B834;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b848
	if (ctx.cr0.eq) goto loc_8225B848;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82263460
	ctx.lr = 0x8225B844;
	sub_82263460(ctx, base);
	// b 0x8225b84c
	goto loc_8225B84C;
loc_8225B848:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B84C:
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

__attribute__((alias("__imp__sub_8225B860"))) PPC_WEAK_FUNC(sub_8225B860);
PPC_FUNC_IMPL(__imp__sub_8225B860) {
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
	// li r3,2928
	ctx.r3.s64 = 2928;
	// bl 0x82691500
	ctx.lr = 0x8225B87C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b890
	if (ctx.cr0.eq) goto loc_8225B890;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8225a7c8
	ctx.lr = 0x8225B88C;
	sub_8225A7C8(ctx, base);
	// b 0x8225b894
	goto loc_8225B894;
loc_8225B890:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B894:
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

__attribute__((alias("__imp__sub_8225B8A8"))) PPC_WEAK_FUNC(sub_8225B8A8);
PPC_FUNC_IMPL(__imp__sub_8225B8A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225B8B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3336
	ctx.r3.s64 = 3336;
	// bl 0x82691500
	ctx.lr = 0x8225B8C0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x8225b8f4
	if (ctx.cr0.eq) goto loc_8225B8F4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addic. r3,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r3.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x8225b8f8
	if (ctx.cr0.eq) goto loc_8225B8F8;
	// bl 0x8225a508
	ctx.lr = 0x8225B8F0;
	sub_8225A508(ctx, base);
	// b 0x8225b8f8
	goto loc_8225B8F8;
loc_8225B8F4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8225B8F8:
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// beq cr6,0x8225b93c
	if (ctx.cr6.eq) goto loc_8225B93C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225B914;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225b934
	if (ctx.cr0.eq) goto loc_8225B934;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225b92c
	if (ctx.cr6.eq) goto loc_8225B92C;
	// bl 0x82241d18
	ctx.lr = 0x8225B92C;
	sub_82241D18(ctx, base);
loc_8225B92C:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8225B934:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225B93C;
	sub_82241D18(ctx, base);
loc_8225B93C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225B948"))) PPC_WEAK_FUNC(sub_8225B948);
PPC_FUNC_IMPL(__imp__sub_8225B948) {
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
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82691500
	ctx.lr = 0x8225B964;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b978
	if (ctx.cr0.eq) goto loc_8225B978;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8225c700
	ctx.lr = 0x8225B974;
	sub_8225C700(ctx, base);
	// b 0x8225b97c
	goto loc_8225B97C;
loc_8225B978:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B97C:
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

__attribute__((alias("__imp__sub_8225B990"))) PPC_WEAK_FUNC(sub_8225B990);
PPC_FUNC_IMPL(__imp__sub_8225B990) {
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
	// li r3,3180
	ctx.r3.s64 = 3180;
	// bl 0x82691500
	ctx.lr = 0x8225B9AC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225b9c0
	if (ctx.cr0.eq) goto loc_8225B9C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8225acc8
	ctx.lr = 0x8225B9BC;
	sub_8225ACC8(ctx, base);
	// b 0x8225b9c4
	goto loc_8225B9C4;
loc_8225B9C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225B9C4:
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

__attribute__((alias("__imp__sub_8225B9D8"))) PPC_WEAK_FUNC(sub_8225B9D8);
PPC_FUNC_IMPL(__imp__sub_8225B9D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225B9E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,3608
	ctx.r3.s64 = 3608;
	// bl 0x82691500
	ctx.lr = 0x8225B9F0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r28,0
	ctx.r28.s64 = 0;
	// beq 0x8225ba24
	if (ctx.cr0.eq) goto loc_8225BA24;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addic. r3,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r3.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x8225ba28
	if (ctx.cr0.eq) goto loc_8225BA28;
	// bl 0x8225aae0
	ctx.lr = 0x8225BA20;
	sub_8225AAE0(ctx, base);
	// b 0x8225ba28
	goto loc_8225BA28;
loc_8225BA24:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_8225BA28:
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// beq cr6,0x8225ba6c
	if (ctx.cr6.eq) goto loc_8225BA6C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225BA44;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ba64
	if (ctx.cr0.eq) goto loc_8225BA64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ba5c
	if (ctx.cr6.eq) goto loc_8225BA5C;
	// bl 0x82241d18
	ctx.lr = 0x8225BA5C;
	sub_82241D18(ctx, base);
loc_8225BA5C:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8225BA64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225BA6C;
	sub_82241D18(ctx, base);
loc_8225BA6C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BA78"))) PPC_WEAK_FUNC(sub_8225BA78);
PPC_FUNC_IMPL(__imp__sub_8225BA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225BA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,2160
	ctx.r3.s64 = 2160;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x8225BA98;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225bab4
	if (ctx.cr0.eq) goto loc_8225BAB4;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82262f58
	ctx.lr = 0x8225BAB0;
	sub_82262F58(ctx, base);
	// b 0x8225bab8
	goto loc_8225BAB8;
loc_8225BAB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225BAB8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BAC0"))) PPC_WEAK_FUNC(sub_8225BAC0);
PPC_FUNC_IMPL(__imp__sub_8225BAC0) {
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
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82691500
	ctx.lr = 0x8225BAD4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225bae4
	if (ctx.cr0.eq) goto loc_8225BAE4;
	// bl 0x8291b688
	ctx.lr = 0x8225BAE0;
	sub_8291B688(ctx, base);
	// b 0x8225bae8
	goto loc_8225BAE8;
loc_8225BAE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225BAE8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225BAF8"))) PPC_WEAK_FUNC(sub_8225BAF8);
PPC_FUNC_IMPL(__imp__sub_8225BAF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq 0x8225bb30
	if (ctx.cr0.eq) goto loc_8225BB30;
	// add r8,r3,r5
	ctx.r8.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_8225BB10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8225bb30
	if (!ctx.cr0.eq) goto loc_8225BB30;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x8225bb10
	if (!ctx.cr6.eq) goto loc_8225BB10;
loc_8225BB30:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x8225bb44
	if (!ctx.cr0.lt) goto loc_8225BB44;
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_8225BB44:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225BB54"))) PPC_WEAK_FUNC(sub_8225BB54);
PPC_FUNC_IMPL(__imp__sub_8225BB54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BB58"))) PPC_WEAK_FUNC(sub_8225BB58);
PPC_FUNC_IMPL(__imp__sub_8225BB58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8225bb70
	if (ctx.cr6.lt) goto loc_8225BB70;
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x8225bb74
	goto loc_8225BB74;
loc_8225BB70:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
loc_8225BB74:
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82656348
	sub_82656348(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BB80"))) PPC_WEAK_FUNC(sub_8225BB80);
PPC_FUNC_IMPL(__imp__sub_8225BB80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225BB88;
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
	// bl 0x8291fc98
	ctx.lr = 0x8225BB9C;
	sub_8291FC98(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fc80
	ctx.lr = 0x8225BBA8;
	sub_8291FC80(ctx, base);
	// subf r11,r3,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r3.s64;
	// rlwinm r10,r30,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// subfc r11,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// adde r11,r10,r9
	temp.u8 = (ctx.r10.u32 + ctx.r9.u32 < ctx.r10.u32) | (ctx.r10.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// beq cr6,0x8225bbcc
	if (ctx.cr6.eq) goto loc_8225BBCC;
	// stb r11,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r11.u8);
loc_8225BBCC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bbe4
	if (ctx.cr0.eq) goto loc_8225BBE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fee8
	ctx.lr = 0x8225BBE0;
	sub_8291FEE8(ctx, base);
	// b 0x8225bbe8
	goto loc_8225BBE8;
loc_8225BBE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225BBE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225BBF0"))) PPC_WEAK_FUNC(sub_8225BBF0);
PPC_FUNC_IMPL(__imp__sub_8225BBF0) {
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
	// bl 0x8225bc40
	ctx.lr = 0x8225BC10;
	sub_8225BC40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bc20
	if (ctx.cr0.eq) goto loc_8225BC20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225BC20;
	sub_82691540(ctx, base);
loc_8225BC20:
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

__attribute__((alias("__imp__sub_8225BC3C"))) PPC_WEAK_FUNC(sub_8225BC3C);
PPC_FUNC_IMPL(__imp__sub_8225BC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BC40"))) PPC_WEAK_FUNC(sub_8225BC40);
PPC_FUNC_IMPL(__imp__sub_8225BC40) {
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
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-27228
	ctx.r11.s64 = ctx.r11.s64 + -27228;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82535b38
	ctx.lr = 0x8225BC68;
	sub_82535B38(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,92(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x8225bc88
	if (!ctx.cr6.eq) goto loc_8225BC88;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-15356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,92(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 92, temp.u32);
loc_8225BC88:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225bc9c
	if (!ctx.cr6.eq) goto loc_8225BC9C;
	// bl 0x822599a0
	ctx.lr = 0x8225BC9C;
	sub_822599A0(ctx, base);
loc_8225BC9C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r30,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r30.u8);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225bcb8
	if (ctx.cr6.eq) goto loc_8225BCB8;
	// bl 0x8254b720
	ctx.lr = 0x8225BCB4;
	sub_8254B720(ctx, base);
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
loc_8225BCB8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254bbb0
	ctx.lr = 0x8225BCC0;
	sub_8254BBB0(ctx, base);
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

__attribute__((alias("__imp__sub_8225BCD8"))) PPC_WEAK_FUNC(sub_8225BCD8);
PPC_FUNC_IMPL(__imp__sub_8225BCD8) {
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
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BD08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8225bd98
	if (ctx.cr6.eq) goto loc_8225BD98;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8225bd2c
	if (ctx.cr6.eq) goto loc_8225BD2C;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x8225bda4
	if (!ctx.cr6.eq) goto loc_8225BDA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,68(r30)
	PPC_STORE_U8(ctx.r30.u32 + 68, ctx.r11.u8);
	// b 0x8225bda4
	goto loc_8225BDA4;
loc_8225BD2C:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x8225BD34;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bda4
	if (ctx.cr0.eq) goto loc_8225BDA4;
	// li r3,136
	ctx.r3.s64 = 136;
	// bl 0x82691500
	ctx.lr = 0x8225BD44;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225bd88
	if (ctx.cr0.eq) goto loc_8225BD88;
	// li r5,6
	ctx.r5.s64 = 6;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550538
	ctx.lr = 0x8225BD5C;
	sub_82550538(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-27208
	ctx.r10.s64 = ctx.r10.s64 + -27208;
	// addi r9,r9,-27144
	ctx.r9.s64 = ctx.r9.s64 + -27144;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r9.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x8225bd8c
	goto loc_8225BD8C;
loc_8225BD88:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225BD8C:
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// bl 0x828c5840
	ctx.lr = 0x8225BD94;
	sub_828C5840(ctx, base);
	// b 0x8225bda4
	goto loc_8225BDA4;
loc_8225BD98:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,60(r30)
	PPC_STORE_U8(ctx.r30.u32 + 60, ctx.r11.u8);
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
loc_8225BDA4:
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

__attribute__((alias("__imp__sub_8225BDBC"))) PPC_WEAK_FUNC(sub_8225BDBC);
PPC_FUNC_IMPL(__imp__sub_8225BDBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225BDC0"))) PPC_WEAK_FUNC(sub_8225BDC0);
PPC_FUNC_IMPL(__imp__sub_8225BDC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225BDC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8254bf38
	ctx.lr = 0x8225BDD4;
	sub_8254BF38(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24448
	ctx.r11.s64 = ctx.r11.s64 + 24448;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8225c014
	if (!ctx.cr6.eq) goto loc_8225C014;
	// lbz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 80);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225be04
	if (ctx.cr0.eq) goto loc_8225BE04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c530
	ctx.lr = 0x8225BE00;
	sub_8225C530(ctx, base);
	// stb r29,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r29.u8);
loc_8225BE04:
	// lbz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225be24
	if (ctx.cr0.eq) goto loc_8225BE24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,64(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// bl 0x8225c020
	ctx.lr = 0x8225BE1C;
	sub_8225C020(ctx, base);
	// stb r29,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r29.u8);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
loc_8225BE24:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b00
	ctx.lr = 0x8225BE2C;
	sub_828E3B00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bf6c
	if (!ctx.cr0.eq) goto loc_8225BF6C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b88
	ctx.lr = 0x8225BE3C;
	sub_828E3B88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bf6c
	if (!ctx.cr0.eq) goto loc_8225BF6C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8225BE4C;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// beq 0x8225bf68
	if (ctx.cr0.eq) goto loc_8225BF68;
	// bl 0x828e3fb0
	ctx.lr = 0x8225BE5C;
	sub_828E3FB0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bf6c
	if (!ctx.cr0.eq) goto loc_8225BF6C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8225be94
	if (!ctx.cr0.eq) goto loc_8225BE94;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BE8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,25
	ctx.r4.s64 = 25;
	// b 0x8225bf5c
	goto loc_8225BF5C;
loc_8225BE94:
	// lbz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 68);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8225bebc
	if (ctx.cr0.eq) goto loc_8225BEBC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,26
	ctx.r4.s64 = 26;
	// b 0x8225bf5c
	goto loc_8225BF5C;
loc_8225BEBC:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225bed8
	if (ctx.cr6.eq) goto loc_8225BED8;
	// bl 0x82920258
	ctx.lr = 0x8225BECC;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8225bedc
	if (ctx.cr6.eq) goto loc_8225BEDC;
loc_8225BED8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225BEDC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225beec
	if (!ctx.cr0.eq) goto loc_8225BEEC;
	// li r4,27
	ctx.r4.s64 = 27;
	// b 0x8225bf5c
	goto loc_8225BF5C;
loc_8225BEEC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225bf6c
	if (ctx.cr6.eq) goto loc_8225BF6C;
	// lbz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 68);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225bf10
	if (ctx.cr0.eq) goto loc_8225BF10;
	// bl 0x8225c248
	ctx.lr = 0x8225BF0C;
	sub_8225C248(ctx, base);
	// b 0x8225bf14
	goto loc_8225BF14;
loc_8225BF10:
	// bl 0x8225c0b0
	ctx.lr = 0x8225BF14;
	sub_8225C0B0(ctx, base);
loc_8225BF14:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x8225BF1C;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225bf6c
	if (ctx.cr0.eq) goto loc_8225BF6C;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225a060
	ctx.lr = 0x8225BF2C;
	sub_8225A060(ctx, base);
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bne cr6,0x8225bf6c
	if (!ctx.cr6.eq) goto loc_8225BF6C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828d42b0
	ctx.lr = 0x8225BF3C;
	sub_828D42B0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// beq cr6,0x8225bf6c
	if (ctx.cr6.eq) goto loc_8225BF6C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225BF58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,34
	ctx.r4.s64 = 34;
loc_8225BF5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c020
	ctx.lr = 0x8225BF64;
	sub_8225C020(ctx, base);
	// b 0x8225bf6c
	goto loc_8225BF6C;
loc_8225BF68:
	// bl 0x828e3bc0
	ctx.lr = 0x8225BF6C;
	sub_828E3BC0(ctx, base);
loc_8225BF6C:
	// lis r30,-31955
	ctx.r30.s64 = -2094202880;
	// lwz r11,30428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225bf84
	if (!ctx.cr6.eq) goto loc_8225BF84;
	// bl 0x822599a0
	ctx.lr = 0x8225BF80;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8225BF84:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225c000
	if (ctx.cr0.eq) goto loc_8225C000;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8225BF98;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bfc0
	if (!ctx.cr0.eq) goto loc_8225BFC0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b88
	ctx.lr = 0x8225BFA8;
	sub_828E3B88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225bfc0
	if (!ctx.cr0.eq) goto loc_8225BFC0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3bc0
	ctx.lr = 0x8225BFB8;
	sub_828E3BC0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c000
	if (ctx.cr0.eq) goto loc_8225C000;
loc_8225BFC0:
	// lwz r11,30428(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225bfd4
	if (!ctx.cr6.eq) goto loc_8225BFD4;
	// bl 0x822599a0
	ctx.lr = 0x8225BFD0;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8225BFD4:
	// lwz r11,88(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225c000
	if (!ctx.cr6.eq) goto loc_8225C000;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225c014
	if (!ctx.cr6.eq) goto loc_8225C014;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8254b6b8
	ctx.lr = 0x8225BFF8;
	sub_8254B6B8(ctx, base);
	// stw r3,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r3.u32);
	// b 0x8225c014
	goto loc_8225C014;
loc_8225C000:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225c014
	if (ctx.cr6.eq) goto loc_8225C014;
	// bl 0x8254b720
	ctx.lr = 0x8225C010;
	sub_8254B720(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_8225C014:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C01C"))) PPC_WEAK_FUNC(sub_8225C01C);
PPC_FUNC_IMPL(__imp__sub_8225C01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C020"))) PPC_WEAK_FUNC(sub_8225C020);
PPC_FUNC_IMPL(__imp__sub_8225C020) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x828e3b10
	ctx.lr = 0x8225C044;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c05c
	if (!ctx.cr0.eq) goto loc_8225C05C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b88
	ctx.lr = 0x8225C054;
	sub_828E3B88(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c094
	if (ctx.cr0.eq) goto loc_8225C094;
loc_8225C05C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8225C068;
	sub_828E4C10(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c084
	if (ctx.cr6.eq) goto loc_8225C084;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8225c088
	goto loc_8225C088;
loc_8225C084:
	// bl 0x8254abe0
	ctx.lr = 0x8225C088;
	sub_8254ABE0(ctx, base);
loc_8225C088:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254c5f0
	ctx.lr = 0x8225C094;
	sub_8254C5F0(ctx, base);
loc_8225C094:
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

__attribute__((alias("__imp__sub_8225C0AC"))) PPC_WEAK_FUNC(sub_8225C0AC);
PPC_FUNC_IMPL(__imp__sub_8225C0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C0B0"))) PPC_WEAK_FUNC(sub_8225C0B0);
PPC_FUNC_IMPL(__imp__sub_8225C0B0) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8225C0D0;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c0ec
	if (ctx.cr0.eq) goto loc_8225C0EC;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x8225C0E0;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8225c0f0
	if (!ctx.cr0.eq) goto loc_8225C0F0;
loc_8225C0EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C0F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// beq 0x8225c160
	if (ctx.cr0.eq) goto loc_8225C160;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C110;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C124;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c160
	if (ctx.cr0.eq) goto loc_8225C160;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225c8d8
	ctx.lr = 0x8225C138;
	sub_8225C8D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c160
	if (!ctx.cr0.eq) goto loc_8225C160;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C154;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828df890
	ctx.lr = 0x8225C160;
	sub_828DF890(ctx, base);
loc_8225C160:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225a060
	ctx.lr = 0x8225C168;
	sub_8225A060(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8225c1c4
	if (ctx.cr6.lt) goto loc_8225C1C4;
	// beq cr6,0x8225c1b8
	if (ctx.cr6.eq) goto loc_8225C1B8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x8225c194
	if (ctx.cr6.lt) goto loc_8225C194;
	// bne cr6,0x8225c220
	if (!ctx.cr6.eq) goto loc_8225C220;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225c218
	if (ctx.cr6.eq) goto loc_8225C218;
	// bl 0x8225cc40
	ctx.lr = 0x8225C190;
	sub_8225CC40(ctx, base);
	// b 0x8225c20c
	goto loc_8225C20C;
loc_8225C194:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225c214
	if (ctx.cr6.eq) goto loc_8225C214;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e4f38
	ctx.lr = 0x8225C1A4;
	sub_828E4F38(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c214
	if (ctx.cr0.eq) goto loc_8225C214;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e4f50
	ctx.lr = 0x8225C1B4;
	sub_828E4F50(ctx, base);
	// b 0x8225c20c
	goto loc_8225C20C;
loc_8225C1B8:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8225c21c
	goto loc_8225C21C;
loc_8225C1C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x8225c220
	if (!ctx.cr6.eq) goto loc_8225C220;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r10,24448
	ctx.r10.s64 = ctx.r10.s64 + 24448;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,188
	ctx.r10.s64 = ctx.r10.s64 + 188;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8225C1E4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c1f4
	if (ctx.cr6.eq) goto loc_8225C1F4;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_8225C1F4:
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// bdnz 0x8225c1e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8225C1E4;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8225c220
	if (!ctx.cr6.eq) goto loc_8225C220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225c318
	ctx.lr = 0x8225C20C;
	sub_8225C318(ctx, base);
loc_8225C20C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c220
	if (ctx.cr0.eq) goto loc_8225C220;
loc_8225C214:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_8225C218:
	// li r4,1
	ctx.r4.s64 = 1;
loc_8225C21C:
	// bl 0x8225ca38
	ctx.lr = 0x8225C220;
	sub_8225CA38(ctx, base);
loc_8225C220:
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225a060
	ctx.lr = 0x8225C22C;
	sub_8225A060(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_8225C248"))) PPC_WEAK_FUNC(sub_8225C248);
PPC_FUNC_IMPL(__imp__sub_8225C248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225C250;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// bl 0x8225a060
	ctx.lr = 0x8225C260;
	sub_8225A060(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x828c2c58
	ctx.lr = 0x8225C26C;
	sub_828C2C58(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x828c3ca8
	ctx.lr = 0x8225C278;
	sub_828C3CA8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e5ed0
	ctx.lr = 0x8225C284;
	sub_828E5ED0(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c30c
	if (ctx.cr0.eq) goto loc_8225C30C;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c30c
	if (ctx.cr0.eq) goto loc_8225C30C;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c30c
	if (!ctx.cr0.eq) goto loc_8225C30C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8225c2e4
	if (ctx.cr6.eq) goto loc_8225C2E4;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8225c2d4
	if (ctx.cr6.eq) goto loc_8225C2D4;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x8225c304
	if (!ctx.cr6.eq) goto loc_8225C304;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225c8d8
	ctx.lr = 0x8225C2C0;
	sub_8225C8D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bne 0x8225c2fc
	if (!ctx.cr0.eq) goto loc_8225C2FC;
	// bl 0x8225cd18
	ctx.lr = 0x8225C2D0;
	sub_8225CD18(ctx, base);
	// b 0x8225c304
	goto loc_8225C304;
loc_8225C2D4:
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8225C2E0;
	sub_828E4C10(ctx, base);
	// b 0x8225c304
	goto loc_8225C304;
loc_8225C2E4:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225c8d8
	ctx.lr = 0x8225C2F0;
	sub_8225C8D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c304
	if (ctx.cr0.eq) goto loc_8225C304;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_8225C2FC:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x8225ca38
	ctx.lr = 0x8225C304;
	sub_8225CA38(ctx, base);
loc_8225C304:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
loc_8225C30C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C314"))) PPC_WEAK_FUNC(sub_8225C314);
PPC_FUNC_IMPL(__imp__sub_8225C314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C318"))) PPC_WEAK_FUNC(sub_8225C318);
PPC_FUNC_IMPL(__imp__sub_8225C318) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225C320;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,81(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 81);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c350
	if (ctx.cr0.eq) goto loc_8225C350;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8225C344;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8225c354
	if (!ctx.cr0.eq) goto loc_8225C354;
loc_8225C350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C354:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c374
	if (ctx.cr0.eq) goto loc_8225C374;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,548(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 548);
	// lwz r11,516(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 516);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8225c378
	if (ctx.cr6.eq) goto loc_8225C378;
loc_8225C374:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C378:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c394
	if (ctx.cr0.eq) goto loc_8225C394;
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// bl 0x828e6778
	ctx.lr = 0x8225C388;
	sub_828E6778(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8225c398
	if (ctx.cr0.eq) goto loc_8225C398;
loc_8225C394:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C398:
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225c488
	if (ctx.cr0.eq) goto loc_8225C488;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r31,1
	ctx.r31.s64 = 1;
	// lwz r9,512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// b 0x8225c3f4
	goto loc_8225C3F4;
loc_8225C3B8:
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c3d8
	if (ctx.cr0.eq) goto loc_8225C3D8;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x828d33f0
	ctx.lr = 0x8225C3CC;
	sub_828D33F0(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8225c3dc
	if (ctx.cr6.eq) goto loc_8225C3DC;
loc_8225C3D8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C3DC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8285aa38
	ctx.lr = 0x8225C3E8;
	sub_8285AA38(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,512(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
loc_8225C3F4:
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8225c3b8
	if (!ctx.cr6.eq) goto loc_8225C3B8;
	// clrlwi. r28,r31,24
	ctx.r28.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8225c46c
	if (ctx.cr0.eq) goto loc_8225C46C;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// bl 0x828d6418
	ctx.lr = 0x8225C414;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x8225C41C;
	sub_828C4CB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
loc_8225C428:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828d6418
	ctx.lr = 0x8225C430;
	sub_828D6418(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828c4cb0
	ctx.lr = 0x8225C438;
	sub_828C4CB0(ctx, base);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8225c46c
	if (ctx.cr6.eq) goto loc_8225C46C;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,1136(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1136);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// bl 0x8241a2b0
	ctx.lr = 0x8225C460;
	sub_8241A2B0(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x8225c428
	goto loc_8225C428;
loc_8225C46C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225c480
	if (ctx.cr6.eq) goto loc_8225C480;
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8225c484
	if (!ctx.cr0.eq) goto loc_8225C484;
loc_8225C480:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C484:
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
loc_8225C488:
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c4d4
	if (ctx.cr6.eq) goto loc_8225C4D4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x8225a060
	ctx.lr = 0x8225C4A4;
	sub_8225A060(ctx, base);
	// lwz r11,56(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C4C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C4D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225C4D4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c4e8
	if (ctx.cr0.eq) goto loc_8225C4E8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8225c4ec
	if (ctx.cr6.eq) goto loc_8225C4EC;
loc_8225C4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C4EC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c504
	if (ctx.cr0.eq) goto loc_8225C504;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8225c508
	if (!ctx.cr6.eq) goto loc_8225C508;
loc_8225C504:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C508:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c51c
	if (ctx.cr0.eq) goto loc_8225C51C;
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x8225c520
	if (ctx.cr0.eq) goto loc_8225C520;
loc_8225C51C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225C520:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C52C"))) PPC_WEAK_FUNC(sub_8225C52C);
PPC_FUNC_IMPL(__imp__sub_8225C52C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C530"))) PPC_WEAK_FUNC(sub_8225C530);
PPC_FUNC_IMPL(__imp__sub_8225C530) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225c574
	if (ctx.cr6.eq) goto loc_8225C574;
	// b 0x8225c568
	goto loc_8225C568;
loc_8225C558:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x8225ca38
	ctx.lr = 0x8225C564;
	sub_8225CA38(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
loc_8225C568:
	// bl 0x8225a060
	ctx.lr = 0x8225C56C;
	sub_8225A060(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// blt cr6,0x8225c558
	if (ctx.cr6.lt) goto loc_8225C558;
loc_8225C574:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r7,r11,24448
	ctx.r7.s64 = ctx.r11.s64 + 24448;
	// lwz r11,236(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 236);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c594
	if (ctx.cr6.eq) goto loc_8225C594;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8225c598
	goto loc_8225C598;
loc_8225C594:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_8225C598:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225c624
	if (ctx.cr6.eq) goto loc_8225C624;
	// addi r11,r7,40
	ctx.r11.s64 = ctx.r7.s64 + 40;
loc_8225C5A4:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8225c5f0
	if (ctx.cr6.eq) goto loc_8225C5F0;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r9,r7,232
	ctx.r9.s64 = ctx.r7.s64 + 232;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x8225c5a4
	if (ctx.cr6.lt) goto loc_8225C5A4;
	// li r11,2
	ctx.r11.s64 = 2;
loc_8225C5C4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8225c63c
	if (!ctx.cr6.eq) goto loc_8225C63C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8225c5f8
	if (ctx.cr6.eq) goto loc_8225C5F8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C5EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225c5fc
	goto loc_8225C5FC;
loc_8225C5F0:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x8225c5c4
	goto loc_8225C5C4;
loc_8225C5F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8225C5FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8225c698
	if (ctx.cr6.eq) goto loc_8225C698;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,24856
	ctx.r11.s64 = ctx.r11.s64 + 24856;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8225c624
	if (ctx.cr6.eq) goto loc_8225C624;
	// bl 0x825438d0
	ctx.lr = 0x8225C61C;
	sub_825438D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8225c698
	if (!ctx.cr0.eq) goto loc_8225C698;
loc_8225C624:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// bl 0x8254a690
	ctx.lr = 0x8225C638;
	sub_8254A690(ctx, base);
	// b 0x8225c698
	goto loc_8225C698;
loc_8225C63C:
	// addic. r3,r31,76
	ctx.xer.ca = ctx.r31.u32 > 4294967219;
	ctx.r3.s64 = ctx.r31.s64 + 76;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c698
	if (ctx.cr0.eq) goto loc_8225C698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c698
	if (ctx.cr0.eq) goto loc_8225C698;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82544c50
	ctx.lr = 0x8225C65C;
	sub_82544C50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8225c698
	if (ctx.cr0.eq) goto loc_8225C698;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x825493b0
	ctx.lr = 0x8225C670;
	sub_825493B0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r30.u32);
	// lwz r31,232(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 232);
	// stw r30,232(r7)
	PPC_STORE_U32(ctx.r7.u32 + 232, ctx.r30.u32);
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x8225c698
	if (ctx.cr0.eq) goto loc_8225C698;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82242b68
	ctx.lr = 0x8225C690;
	sub_82242B68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225C698;
	sub_82691540(ctx, base);
loc_8225C698:
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

__attribute__((alias("__imp__sub_8225C6B0"))) PPC_WEAK_FUNC(sub_8225C6B0);
PPC_FUNC_IMPL(__imp__sub_8225C6B0) {
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
	// bl 0x8225c820
	ctx.lr = 0x8225C6D0;
	sub_8225C820(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c6e0
	if (ctx.cr0.eq) goto loc_8225C6E0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8225C6E0;
	sub_82691540(ctx, base);
loc_8225C6E0:
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

__attribute__((alias("__imp__sub_8225C6FC"))) PPC_WEAK_FUNC(sub_8225C6FC);
PPC_FUNC_IMPL(__imp__sub_8225C6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C700"))) PPC_WEAK_FUNC(sub_8225C700);
PPC_FUNC_IMPL(__imp__sub_8225C700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225C708;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x825505b0
	ctx.lr = 0x8225C718;
	sub_825505B0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r11,-27208
	ctx.r11.s64 = ctx.r11.s64 + -27208;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,-27144
	ctx.r10.s64 = ctx.r10.s64 + -27144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stb r29,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r29.u8);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// stw r29,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r29.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r30,80(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// bne cr6,0x8225c75c
	if (!ctx.cr6.eq) goto loc_8225C75C;
	// bl 0x8254abe0
	ctx.lr = 0x8225C758;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8225C75C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c350
	ctx.lr = 0x8225C76C;
	sub_8254C350(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c77c
	if (ctx.cr6.eq) goto loc_8225C77C;
	// stw r31,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r31.u32);
loc_8225C77C:
	// lis r11,-32218
	ctx.r11.s64 = -2111438848;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// stw r31,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r31.u32);
	// addi r11,r11,-7768
	ctx.r11.s64 = ctx.r11.s64 + -7768;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r11.u64);
	// bl 0x82691500
	ctx.lr = 0x8225C7A0;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8225c808
	if (ctx.cr0.eq) goto loc_8225C808;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,-26852
	ctx.r11.s64 = ctx.r11.s64 + -26852;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// li r5,56
	ctx.r5.s64 = 56;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8225C7C4;
	sub_82FA77C0(ctx, base);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f918d8
	ctx.lr = 0x8225C7D4;
	sub_82F918D8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r11,324
	ctx.r3.s64 = ctx.r11.s64 + 324;
	// bl 0x828d1f90
	ctx.lr = 0x8225C7E4;
	sub_828D1F90(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f91940
	ctx.lr = 0x8225C7EC;
	sub_82F91940(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225c7fc
	if (ctx.cr6.eq) goto loc_8225C7FC;
	// bl 0x82241d18
	ctx.lr = 0x8225C7FC;
	sub_82241D18(ctx, base);
loc_8225C7FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_8225C808:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8225C820;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8225C820"))) PPC_WEAK_FUNC(sub_8225C820);
PPC_FUNC_IMPL(__imp__sub_8225C820) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// addi r10,r10,-27208
	ctx.r10.s64 = ctx.r10.s64 + -27208;
	// addi r9,r9,-27144
	ctx.r9.s64 = ctx.r9.s64 + -27144;
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// bne cr6,0x8225c86c
	if (!ctx.cr6.eq) goto loc_8225C86C;
	// bl 0x8254abe0
	ctx.lr = 0x8225C868;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8225C86C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c350
	ctx.lr = 0x8225C87C;
	sub_8254C350(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225c8a4
	if (ctx.cr6.eq) goto loc_8225C8A4;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,33
	ctx.r8.s64 = 33;
	// stb r10,80(r11)
	PPC_STORE_U8(ctx.r11.u32 + 80, ctx.r10.u8);
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// stb r10,60(r11)
	PPC_STORE_U8(ctx.r11.u32 + 60, ctx.r10.u8);
	// stw r8,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r8.u32);
loc_8225C8A4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225c8b4
	if (ctx.cr6.eq) goto loc_8225C8B4;
	// bl 0x82241d18
	ctx.lr = 0x8225C8B4;
	sub_82241D18(ctx, base);
loc_8225C8B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550660
	ctx.lr = 0x8225C8BC;
	sub_82550660(ctx, base);
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

__attribute__((alias("__imp__sub_8225C8D4"))) PPC_WEAK_FUNC(sub_8225C8D4);
PPC_FUNC_IMPL(__imp__sub_8225C8D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225C8D8"))) PPC_WEAK_FUNC(sub_8225C8D8);
PPC_FUNC_IMPL(__imp__sub_8225C8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225C8E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,560(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 560);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x8225c964
	goto loc_8225C964;
loc_8225C904:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225c948
	if (!ctx.cr0.eq) goto loc_8225C948;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// blt cr6,0x8225c94c
	if (ctx.cr6.lt) goto loc_8225C94C;
loc_8225C948:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8225C94C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8285aa38
	ctx.lr = 0x8225C958;
	sub_8285AA38(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,560(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 560);
loc_8225C964:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8225c904
	if (!ctx.cr6.eq) goto loc_8225C904;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225C978"))) PPC_WEAK_FUNC(sub_8225C978);
PPC_FUNC_IMPL(__imp__sub_8225C978) {
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
	// bl 0x828c11f8
	ctx.lr = 0x8225C994;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225c9c0
	if (ctx.cr0.eq) goto loc_8225C9C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225C9B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x828dffd8
	ctx.lr = 0x8225C9C0;
	sub_828DFFD8(ctx, base);
loc_8225C9C0:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lbz r11,38(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 38);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8225ca1c
	if (ctx.cr0.eq) goto loc_8225CA1C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225c9f0
	if (!ctx.cr6.eq) goto loc_8225C9F0;
	// bl 0x8254abe0
	ctx.lr = 0x8225C9EC;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8225C9F0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c350
	ctx.lr = 0x8225CA00;
	sub_8254C350(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,1
	ctx.r11.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r11,68(r10)
	PPC_STORE_U8(ctx.r10.u32 + 68, ctx.r11.u8);
	// beq cr6,0x8225ca1c
	if (ctx.cr6.eq) goto loc_8225CA1C;
	// bl 0x82241d18
	ctx.lr = 0x8225CA1C;
	sub_82241D18(ctx, base);
loc_8225CA1C:
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

__attribute__((alias("__imp__sub_8225CA34"))) PPC_WEAK_FUNC(sub_8225CA34);
PPC_FUNC_IMPL(__imp__sub_8225CA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225CA38"))) PPC_WEAK_FUNC(sub_8225CA38);
PPC_FUNC_IMPL(__imp__sub_8225CA38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225CA40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x8225a060
	ctx.lr = 0x8225CA54;
	sub_8225A060(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// li r10,6
	ctx.r10.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// divw r10,r11,r10
	ctx.r10.s32 = ctx.r11.s32 / ctx.r10.s32;
	// mulli r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 * 6;
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bl 0x828c11f8
	ctx.lr = 0x8225CA70;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cadc
	if (!ctx.cr0.eq) goto loc_8225CADC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CA8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CAA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CAB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CACC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cadc
	if (ctx.cr0.eq) goto loc_8225CADC;
	// cmpw cr6,r3,r29
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x8225cae0
	if (!ctx.cr6.gt) goto loc_8225CAE0;
loc_8225CADC:
	// li r28,1
	ctx.r28.s64 = 1;
loc_8225CAE0:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cb30
	if (ctx.cr0.eq) goto loc_8225CB30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828c11f8
	ctx.lr = 0x8225CAF0;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq 0x8225cb14
	if (ctx.cr0.eq) goto loc_8225CB14;
	// bctrl 
	ctx.lr = 0x8225CB0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// b 0x8225cb1c
	goto loc_8225CB1C;
loc_8225CB14:
	// bctrl 
	ctx.lr = 0x8225CB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
loc_8225CB1C:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x828dffd8
	ctx.lr = 0x8225CB24;
	sub_828DFFD8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225cb38
	ctx.lr = 0x8225CB30;
	sub_8225CB38(ctx, base);
loc_8225CB30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225CB38"))) PPC_WEAK_FUNC(sub_8225CB38);
PPC_FUNC_IMPL(__imp__sub_8225CB38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225CB40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x828e3b10
	ctx.lr = 0x8225CB54;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x8225cb74
	if (ctx.cr0.eq) goto loc_8225CB74;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x828e3618
	ctx.lr = 0x8225CB68;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8225cb78
	if (!ctx.cr0.eq) goto loc_8225CB78;
loc_8225CB74:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225CB78:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x8225cc30
	if (ctx.cr6.eq) goto loc_8225CC30;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x8225cbfc
	if (ctx.cr6.eq) goto loc_8225CBFC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x8225cbe0
	if (ctx.cr6.eq) goto loc_8225CBE0;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bne cr6,0x8225cc38
	if (!ctx.cr6.eq) goto loc_8225CC38;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8225cc38
	if (!ctx.cr0.eq) goto loc_8225CC38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,576
	ctx.r3.s64 = ctx.r3.s64 + 576;
	// bl 0x8225e320
	ctx.lr = 0x8225CBC0;
	sub_8225E320(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x8225CBC8;
	sub_8226C3F0(ctx, base);
	// stw r31,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r31.u32);
	// stw r29,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r29.u32);
	// stw r29,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r29.u32);
	// stw r29,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r29.u32);
	// stw r31,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r31.u32);
	// b 0x8225cc38
	goto loc_8225CC38;
loc_8225CBE0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cbf0
	if (ctx.cr0.eq) goto loc_8225CBF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225cd18
	ctx.lr = 0x8225CBF0;
	sub_8225CD18(ctx, base);
loc_8225CBF0:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x828d6e58
	ctx.lr = 0x8225CBF8;
	sub_828D6E58(ctx, base);
	// b 0x8225cc38
	goto loc_8225CC38;
loc_8225CBFC:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cc18
	if (ctx.cr0.eq) goto loc_8225CC18;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x828d6e60
	ctx.lr = 0x8225CC0C;
	sub_828D6E60(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8225cc1c
	if (!ctx.cr0.eq) goto loc_8225CC1C;
loc_8225CC18:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8225CC1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cc38
	if (ctx.cr0.eq) goto loc_8225CC38;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x828e4f20
	ctx.lr = 0x8225CC2C;
	sub_828E4F20(ctx, base);
	// b 0x8225cc38
	goto loc_8225CC38;
loc_8225CC30:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225d128
	ctx.lr = 0x8225CC38;
	sub_8225D128(ctx, base);
loc_8225CC38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225CC40"))) PPC_WEAK_FUNC(sub_8225CC40);
PPC_FUNC_IMPL(__imp__sub_8225CC40) {
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
	// li r3,1
	ctx.r3.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
loc_8225CC60:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cc8c
	if (ctx.cr0.eq) goto loc_8225CC8C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CC7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,660
	ctx.r11.s64 = ctx.r3.s64 + 660;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x828d01c8
	ctx.lr = 0x8225CC88;
	sub_828D01C8(ctx, base);
	// b 0x8225cc90
	goto loc_8225CC90;
loc_8225CC8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CC90:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ccbc
	if (ctx.cr0.eq) goto loc_8225CCBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CCAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1920
	ctx.r11.s64 = ctx.r3.s64 + 1920;
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x828d01c8
	ctx.lr = 0x8225CCB8;
	sub_828D01C8(ctx, base);
	// b 0x8225ccc0
	goto loc_8225CCC0;
loc_8225CCBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CCC0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cce8
	if (ctx.cr0.eq) goto loc_8225CCE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CCDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,576
	ctx.r3.s64 = ctx.r3.s64 + 576;
	// bl 0x828d01c8
	ctx.lr = 0x8225CCE4;
	sub_828D01C8(ctx, base);
	// b 0x8225ccec
	goto loc_8225CCEC;
loc_8225CCE8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225CCEC:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225cd00
	if (ctx.cr0.eq) goto loc_8225CD00;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmplwi cr6,r30,1260
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1260, ctx.xer);
	// blt cr6,0x8225cc60
	if (ctx.cr6.lt) goto loc_8225CC60;
loc_8225CD00:
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

__attribute__((alias("__imp__sub_8225CD18"))) PPC_WEAK_FUNC(sub_8225CD18);
PPC_FUNC_IMPL(__imp__sub_8225CD18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8225CD20;
	__savegprlr_21(ctx, base);
	// stfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x8226c3f0
	ctx.lr = 0x8225CD34;
	sub_8226C3F0(ctx, base);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// blt cr6,0x8225cdb4
	if (ctx.cr6.lt) goto loc_8225CDB4;
	// beq cr6,0x8225cd94
	if (ctx.cr6.eq) goto loc_8225CD94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8225cd74
	if (ctx.cr6.lt) goto loc_8225CD74;
	// bne cr6,0x8225cddc
	if (!ctx.cr6.eq) goto loc_8225CDDC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27452
	ctx.r3.s64 = ctx.r11.s64 + -27452;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8225CD68;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27432
	ctx.r3.s64 = ctx.r11.s64 + -27432;
	// b 0x8225cdd0
	goto loc_8225CDD0;
loc_8225CD74:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27488
	ctx.r3.s64 = ctx.r11.s64 + -27488;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8225CD88;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27472
	ctx.r3.s64 = ctx.r11.s64 + -27472;
	// b 0x8225cdd0
	goto loc_8225CDD0;
loc_8225CD94:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27528
	ctx.r3.s64 = ctx.r11.s64 + -27528;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8225CDA8;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27508
	ctx.r3.s64 = ctx.r11.s64 + -27508;
	// b 0x8225cdd0
	goto loc_8225CDD0;
loc_8225CDB4:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-27564
	ctx.r3.s64 = ctx.r11.s64 + -27564;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x8225CDC8;
	sub_82547F38(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-27548
	ctx.r3.s64 = ctx.r11.s64 + -27548;
loc_8225CDD0:
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82547f38
	ctx.lr = 0x8225CDDC;
	sub_82547F38(ctx, base);
loc_8225CDDC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8225CDEC;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82546708
	ctx.lr = 0x8225CE00;
	sub_82546708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,36
	ctx.r30.s64 = 36;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225ce20
	if (ctx.cr6.eq) goto loc_8225CE20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82546b30
	ctx.lr = 0x8225CE18;
	sub_82546B30(ctx, base);
	// divwu r21,r3,r30
	ctx.r21.u32 = ctx.r3.u32 / ctx.r30.u32;
	// b 0x8225ce24
	goto loc_8225CE24;
loc_8225CE20:
	// li r21,0
	ctx.r21.s64 = 0;
loc_8225CE24:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225ce3c
	if (ctx.cr6.eq) goto loc_8225CE3C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82546b30
	ctx.lr = 0x8225CE34;
	sub_82546B30(ctx, base);
	// divwu r22,r3,r30
	ctx.r22.u32 = ctx.r3.u32 / ctx.r30.u32;
	// b 0x8225ce40
	goto loc_8225CE40;
loc_8225CE3C:
	// li r22,0
	ctx.r22.s64 = 0;
loc_8225CE40:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225ce50
	if (ctx.cr6.eq) goto loc_8225CE50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x8225CE50;
	sub_825469E0(ctx, base);
loc_8225CE50:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8225ce60
	if (ctx.cr6.eq) goto loc_8225CE60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825469e0
	ctx.lr = 0x8225CE60;
	sub_825469E0(ctx, base);
loc_8225CE60:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// lis r8,15470
	ctx.r8.s64 = 1013841920;
	// li r25,0
	ctx.r25.s64 = 0;
	// lfs f30,31512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f30.f64 = double(temp.f32);
	// ori r29,r9,26125
	ctx.r29.u64 = ctx.r9.u64 | 26125;
	// lfs f31,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// ori r30,r8,62303
	ctx.r30.u64 = ctx.r8.u64 | 62303;
	// lis r26,-31958
	ctx.r26.s64 = -2094399488;
loc_8225CE88:
	// lwz r11,21292(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21292);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r10,r10,16256
	ctx.r10.u64 = ctx.r10.u64 | 1065353216;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bgt cr6,0x8225ceb8
	if (ctx.cr6.gt) goto loc_8225CEB8;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x8225cec4
	goto loc_8225CEC4;
loc_8225CEB8:
	// li r24,0
	ctx.r24.s64 = 0;
	// b 0x8225cec4
	goto loc_8225CEC4;
loc_8225CEC0:
	// lwz r11,21292(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 21292);
loc_8225CEC4:
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r11,21292(r26)
	PPC_STORE_U32(ctx.r26.u32 + 21292, ctx.r11.u32);
	// beq cr6,0x8225cf14
	if (ctx.cr6.eq) goto loc_8225CF14;
	// extsw r10,r21
	ctx.r10.s64 = ctx.r21.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x8225cf4c
	goto loc_8225CF4C;
loc_8225CF14:
	// extsw r10,r22
	ctx.r10.s64 = ctx.r22.s32;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_8225CF4C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CF60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r27,r3,1920
	ctx.r27.s64 = ctx.r3.s64 + 1920;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CF78;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r3,660
	ctx.r31.s64 = ctx.r3.s64 + 660;
	// b 0x8225cfa0
	goto loc_8225CFA0;
loc_8225CF80:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CF94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x8225cfa8
	if (ctx.cr6.eq) goto loc_8225CFA8;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
loc_8225CFA0:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x8225cf80
	if (!ctx.cr6.eq) goto loc_8225CF80;
loc_8225CFA8:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CFBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1920
	ctx.r11.s64 = ctx.r3.s64 + 1920;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225cec0
	if (!ctx.cr6.eq) goto loc_8225CEC0;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225CFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,660
	ctx.r11.s64 = ctx.r3.s64 + 660;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// bl 0x828dffd8
	ctx.lr = 0x8225CFEC;
	sub_828DFFD8(ctx, base);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D000;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,1920
	ctx.r11.s64 = ctx.r3.s64 + 1920;
	// addic r10,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// add r3,r25,r11
	ctx.r3.u64 = ctx.r25.u64 + ctx.r11.u64;
	// subfe r4,r10,r24
	temp.u8 = (~ctx.r10.u32 + ctx.r24.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r24.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r10.u64 + ctx.r24.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x828df890
	ctx.lr = 0x8225D014;
	sub_828DF890(ctx, base);
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// cmplwi cr6,r25,1260
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1260, ctx.xer);
	// blt cr6,0x8225ce88
	if (ctx.cr6.lt) goto loc_8225CE88;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,576
	ctx.r3.s64 = ctx.r3.s64 + 576;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x822a64b0
	ctx.lr = 0x8225D040;
	sub_822A64B0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r23)
	PPC_STORE_U8(ctx.r23.u32 + 128, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D058"))) PPC_WEAK_FUNC(sub_8225D058);
PPC_FUNC_IMPL(__imp__sub_8225D058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225D060;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r3,-1
	ctx.r3.s64 = -1;
	// cmplwi cr6,r4,15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 15, ctx.xer);
	// bge cr6,0x8225d110
	if (!ctx.cr6.lt) goto loc_8225D110;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mulli r28,r4,84
	ctx.r28.s64 = ctx.r4.s64 * 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D094;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r3,r11,1920
	ctx.r3.s64 = ctx.r11.s64 + 1920;
	// lwz r11,1920(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1920);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D0AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8225D0D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,576
	ctx.r3.s64 = ctx.r3.s64 + 576;
	// bl 0x8225e320
	ctx.lr = 0x8225D0DC;
	sub_8225E320(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D0F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// addi r3,r11,660
	ctx.r3.s64 = ctx.r11.s64 + 660;
	// lwz r11,660(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 660);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225D10C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225d120
	goto loc_8225D120;
loc_8225D110:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_8225D120:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D128"))) PPC_WEAK_FUNC(sub_8225D128);
PPC_FUNC_IMPL(__imp__sub_8225D128) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8225d158
	if (!ctx.cr6.eq) goto loc_8225D158;
	// bl 0x8254abe0
	ctx.lr = 0x8225D154;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8225D158:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c350
	ctx.lr = 0x8225D164;
	sub_8254C350(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x8225D170;
	sub_824261E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r31,r11,76
	ctx.r31.s64 = ctx.r11.s64 + 76;
	// bl 0x8226c3f0
	ctx.lr = 0x8225D17C;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r30,r10,24856
	ctx.r30.s64 = ctx.r10.s64 + 24856;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x8225D19C;
	sub_8226C3F0(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r10,140(r30)
	PPC_STORE_U32(ctx.r30.u32 + 140, ctx.r10.u32);
	// bl 0x822fb400
	ctx.lr = 0x8225D1C0;
	sub_822FB400(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d1e8
	if (ctx.cr0.eq) goto loc_8225D1E8;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225d1e0
	if (ctx.cr6.eq) goto loc_8225D1E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f62d0
	ctx.lr = 0x8225D1E0;
	sub_823F62D0(ctx, base);
loc_8225D1E0:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
loc_8225D1E8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825496e0
	ctx.lr = 0x8225D1F8;
	sub_825496E0(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225d208
	if (ctx.cr6.eq) goto loc_8225D208;
	// bl 0x82241d18
	ctx.lr = 0x8225D208;
	sub_82241D18(ctx, base);
loc_8225D208:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225d218
	if (ctx.cr6.eq) goto loc_8225D218;
	// bl 0x82241d18
	ctx.lr = 0x8225D218;
	sub_82241D18(ctx, base);
loc_8225D218:
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

__attribute__((alias("__imp__sub_8225D230"))) PPC_WEAK_FUNC(sub_8225D230);
PPC_FUNC_IMPL(__imp__sub_8225D230) {
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
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a747a8
	ctx.lr = 0x8225D26C;
	sub_82A747A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225d2f0
	if (ctx.cr0.lt) goto loc_8225D2F0;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1000
	ctx.r7.s64 = 1000;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a74730
	ctx.lr = 0x8225D294;
	sub_82A74730(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a74758
	ctx.lr = 0x8225D29C;
	sub_82A74758(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8224e2d0
	ctx.lr = 0x8225D2B0;
	sub_8224E2D0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fca8
	ctx.lr = 0x8225D2C0;
	sub_8291FCA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225d2f0
	if (ctx.cr6.eq) goto loc_8225D2F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// bl 0x8224e2d0
	ctx.lr = 0x8225D2E0;
	sub_8224E2D0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x8225D2F0;
	sub_829201C8(ctx, base);
loc_8225D2F0:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
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

__attribute__((alias("__imp__sub_8225D308"))) PPC_WEAK_FUNC(sub_8225D308);
PPC_FUNC_IMPL(__imp__sub_8225D308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225D310;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8225bb80
	ctx.lr = 0x8225D330;
	sub_8225BB80(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225d39c
	if (ctx.cr0.eq) goto loc_8225D39C;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8224c838
	ctx.lr = 0x8225D350;
	sub_8224C838(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a748c8
	ctx.lr = 0x8225D36C;
	sub_82A748C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8225d39c
	if (ctx.cr0.lt) goto loc_8225D39C;
	// li r11,1000
	ctx.r11.s64 = 1000;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a74868
	ctx.lr = 0x8225D394;
	sub_82A74868(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a74758
	ctx.lr = 0x8225D39C;
	sub_82A74758(ctx, base);
loc_8225D39C:
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D3A4"))) PPC_WEAK_FUNC(sub_8225D3A4);
PPC_FUNC_IMPL(__imp__sub_8225D3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225D3A8"))) PPC_WEAK_FUNC(sub_8225D3A8);
PPC_FUNC_IMPL(__imp__sub_8225D3A8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x822610e8
	sub_822610E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225D3B8"))) PPC_WEAK_FUNC(sub_8225D3B8);
PPC_FUNC_IMPL(__imp__sub_8225D3B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,256
	ctx.r5.s64 = 256;
	// bne cr6,0x8225d3e8
	if (!ctx.cr6.eq) goto loc_8225D3E8;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
loc_8225D3E8:
	// bl 0x82261048
	ctx.lr = 0x8225D3EC;
	sub_82261048(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8225D3FC"))) PPC_WEAK_FUNC(sub_8225D3FC);
PPC_FUNC_IMPL(__imp__sub_8225D3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225D400"))) PPC_WEAK_FUNC(sub_8225D400);
PPC_FUNC_IMPL(__imp__sub_8225D400) {
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
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8224e2d0
	ctx.lr = 0x8225D42C;
	sub_8224E2D0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fca8
	ctx.lr = 0x8225D43C;
	sub_8291FCA8(ctx, base);
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

__attribute__((alias("__imp__sub_8225D454"))) PPC_WEAK_FUNC(sub_8225D454);
PPC_FUNC_IMPL(__imp__sub_8225D454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225D458"))) PPC_WEAK_FUNC(sub_8225D458);
PPC_FUNC_IMPL(__imp__sub_8225D458) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8225bb80
	ctx.lr = 0x8225D480;
	sub_8225BB80(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225d48c
	if (ctx.cr6.eq) goto loc_8225D48C;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_8225D48C:
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

__attribute__((alias("__imp__sub_8225D4A0"))) PPC_WEAK_FUNC(sub_8225D4A0);
PPC_FUNC_IMPL(__imp__sub_8225D4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x8225D4A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-2000(r1)
	ea = -2000 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x8225D4B8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r17,1
	ctx.r17.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// beq 0x8225d514
	if (ctx.cr0.eq) goto loc_8225D514;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x8225d508
	if (ctx.cr0.eq) goto loc_8225D508;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r10,-27068
	ctx.r10.s64 = ctx.r10.s64 + -27068;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x8225D508;
	sub_828E06C0(ctx, base);
loc_8225D508:
	// mr r21,r31
	ctx.r21.u64 = ctx.r31.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// b 0x8225d51c
	goto loc_8225D51C;
loc_8225D514:
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// rotlwi r21,r26,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
loc_8225D51C:
	// li r3,44
	ctx.r3.s64 = 44;
	// addi r25,r21,12
	ctx.r25.s64 = ctx.r21.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x8225D528;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225d578
	if (ctx.cr0.eq) goto loc_8225D578;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x8225d570
	if (ctx.cr0.eq) goto loc_8225D570;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r10,-27044
	ctx.r10.s64 = ctx.r10.s64 + -27044;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x8225D570;
	sub_828E06C0(ctx, base);
loc_8225D570:
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// b 0x8225d57c
	goto loc_8225D57C;
loc_8225D578:
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
loc_8225D57C:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r22,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r22.u32);
	// addi r27,r22,12
	ctx.r27.s64 = ctx.r22.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x8225D58C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225d5dc
	if (ctx.cr0.eq) goto loc_8225D5DC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x8225d5d4
	if (ctx.cr0.eq) goto loc_8225D5D4;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r6,10
	ctx.r6.s64 = 10;
	// addi r10,r10,-27020
	ctx.r10.s64 = ctx.r10.s64 + -27020;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x8225D5D4;
	sub_828E06C0(ctx, base);
loc_8225D5D4:
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// b 0x8225d5e0
	goto loc_8225D5E0;
loc_8225D5DC:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
loc_8225D5E0:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// addi r28,r24,12
	ctx.r28.s64 = ctx.r24.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x8225D5F0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225d640
	if (ctx.cr0.eq) goto loc_8225D640;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x8225d638
	if (ctx.cr0.eq) goto loc_8225D638;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r10,-26996
	ctx.r10.s64 = ctx.r10.s64 + -26996;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x8225D638;
	sub_828E06C0(ctx, base);
loc_8225D638:
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// b 0x8225d644
	goto loc_8225D644;
loc_8225D640:
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
loc_8225D644:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x8225D64C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225d69c
	if (ctx.cr0.eq) goto loc_8225D69C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x8225d694
	if (ctx.cr0.eq) goto loc_8225D694;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r10,-26972
	ctx.r10.s64 = ctx.r10.s64 + -26972;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e0808
	ctx.lr = 0x8225D694;
	sub_828E0808(ctx, base);
loc_8225D694:
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// b 0x8225d6a0
	goto loc_8225D6A0;
loc_8225D69C:
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
loc_8225D6A0:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82691500
	ctx.lr = 0x8225D6A8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225d6e4
	if (ctx.cr0.eq) goto loc_8225D6E4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r3,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r3.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r11,r11,-16484
	ctx.r11.s64 = ctx.r11.s64 + -16484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x8225d6dc
	if (ctx.cr0.eq) goto loc_8225D6DC;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x8225D6DC;
	sub_828E06C0(ctx, base);
loc_8225D6DC:
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
	// b 0x8225d6e8
	goto loc_8225D6E8;
loc_8225D6E4:
	// mr r14,r26
	ctx.r14.u64 = ctx.r26.u64;
loc_8225D6E8:
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8225e8a0
	ctx.lr = 0x8225D6F0;
	sub_8225E8A0(ctx, base);
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x8225D6F8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d734
	if (ctx.cr0.eq) goto loc_8225D734;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r17.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8225d72c
	if (ctx.cr0.eq) goto loc_8225D72C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r10,r10,-27092
	ctx.r10.s64 = ctx.r10.s64 + -27092;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8225D72C:
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// b 0x8225d738
	goto loc_8225D738;
loc_8225D734:
	// mr r16,r26
	ctx.r16.u64 = ctx.r26.u64;
loc_8225D738:
	// addi r29,r16,12
	ctx.r29.s64 = ctx.r16.s64 + 12;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x8225D74C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d788
	if (ctx.cr0.eq) goto loc_8225D788;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r17.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8225d780
	if (ctx.cr0.eq) goto loc_8225D780;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r10,r10,-27140
	ctx.r10.s64 = ctx.r10.s64 + -27140;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8225D780:
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// b 0x8225d78c
	goto loc_8225D78C;
loc_8225D788:
	// mr r15,r26
	ctx.r15.u64 = ctx.r26.u64;
loc_8225D78C:
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x8225D794;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d7d0
	if (ctx.cr0.eq) goto loc_8225D7D0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r17.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8225d7c8
	if (ctx.cr0.eq) goto loc_8225D7C8;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// addi r10,r10,-27116
	ctx.r10.s64 = ctx.r10.s64 + -27116;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_8225D7C8:
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// b 0x8225d7d4
	goto loc_8225D7D4;
loc_8225D7D0:
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
loc_8225D7D4:
	// li r3,28
	ctx.r3.s64 = 28;
	// addi r30,r19,12
	ctx.r30.s64 = ctx.r19.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x8225D7E0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225d7f8
	if (ctx.cr0.eq) goto loc_8225D7F8;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x8225fc28
	ctx.lr = 0x8225D7F0;
	sub_8225FC28(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// b 0x8225d7fc
	goto loc_8225D7FC;
loc_8225D7F8:
	// mr r18,r26
	ctx.r18.u64 = ctx.r26.u64;
loc_8225D7FC:
	// addi r31,r18,12
	ctx.r31.s64 = ctx.r18.s64 + 12;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8225d828
	if (ctx.cr6.eq) goto loc_8225D828;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D818;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d828
	if (ctx.cr0.eq) goto loc_8225D828;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_8225D828:
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// beq cr6,0x8225d850
	if (ctx.cr6.eq) goto loc_8225D850;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D840;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d850
	if (ctx.cr0.eq) goto loc_8225D850;
	// stw r19,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r19.u32);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
loc_8225D850:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// beq cr6,0x8225d878
	if (ctx.cr6.eq) goto loc_8225D878;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D868;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d878
	if (ctx.cr0.eq) goto loc_8225D878;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
loc_8225D878:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x8225d8a0
	if (ctx.cr6.eq) goto loc_8225D8A0;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D890;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d8a0
	if (ctx.cr0.eq) goto loc_8225D8A0;
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_8225D8A0:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// beq cr6,0x8225d8c8
	if (ctx.cr6.eq) goto loc_8225D8C8;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D8B8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d8c8
	if (ctx.cr0.eq) goto loc_8225D8C8;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
loc_8225D8C8:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8225e928
	ctx.lr = 0x8225D8E4;
	sub_8225E928(ctx, base);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// beq cr6,0x8225d90c
	if (ctx.cr6.eq) goto loc_8225D90C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D8FC;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d90c
	if (ctx.cr0.eq) goto loc_8225D90C;
	// stw r16,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r16.u32);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
loc_8225D90C:
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
	// beq cr6,0x8225d934
	if (ctx.cr6.eq) goto loc_8225D934;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D924;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d934
	if (ctx.cr0.eq) goto loc_8225D934;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_8225D934:
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// beq cr6,0x8225d95c
	if (ctx.cr6.eq) goto loc_8225D95C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D94C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d95c
	if (ctx.cr0.eq) goto loc_8225D95C;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
loc_8225D95C:
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// beq cr6,0x8225d984
	if (ctx.cr6.eq) goto loc_8225D984;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D974;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d984
	if (ctx.cr0.eq) goto loc_8225D984;
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
loc_8225D984:
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// beq cr6,0x8225d9ac
	if (ctx.cr6.eq) goto loc_8225D9AC;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D99C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d9ac
	if (ctx.cr0.eq) goto loc_8225D9AC;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r25,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r25.u32);
loc_8225D9AC:
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// beq cr6,0x8225d9d4
	if (ctx.cr6.eq) goto loc_8225D9D4;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225D9C4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225d9d4
	if (ctx.cr0.eq) goto loc_8225D9D4;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_8225D9D4:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8225ea48
	ctx.lr = 0x8225D9F4;
	sub_8225EA48(ctx, base);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// lwz r20,164(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8225da2c
	if (ctx.cr6.eq) goto loc_8225DA2C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225DA14;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225da2c
	if (ctx.cr0.eq) goto loc_8225DA2C;
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
loc_8225DA2C:
	// lwz r21,156(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8225da64
	if (ctx.cr6.eq) goto loc_8225DA64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225DA4C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225da64
	if (ctx.cr0.eq) goto loc_8225DA64;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_8225DA64:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x8225DA6C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225da88
	if (ctx.cr0.eq) goto loc_8225DA88;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x822604c8
	ctx.lr = 0x8225DA80;
	sub_822604C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8225da8c
	goto loc_8225DA8C;
loc_8225DA88:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_8225DA8C:
	// li r11,1036
	ctx.r11.s64 = 1036;
	// stw r26,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r26.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225dacc
	if (ctx.cr6.eq) goto loc_8225DACC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225DAB4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dac4
	if (ctx.cr0.eq) goto loc_8225DAC4;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_8225DAC4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DACC;
	sub_82241D18(ctx, base);
loc_8225DACC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225dadc
	if (ctx.cr6.eq) goto loc_8225DADC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DADC;
	sub_82241D18(ctx, base);
loc_8225DADC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8225daec
	if (ctx.cr6.eq) goto loc_8225DAEC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DAEC;
	sub_82241D18(ctx, base);
loc_8225DAEC:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// addi r4,r11,-27412
	ctx.r4.s64 = ctx.r11.s64 + -27412;
	// bl 0x822400d8
	ctx.lr = 0x8225DAFC;
	sub_822400D8(ctx, base);
	// li r30,6
	ctx.r30.s64 = 6;
	// stw r26,168(r23)
	PPC_STORE_U32(ctx.r23.u32 + 168, ctx.r26.u32);
	// li r3,6
	ctx.r3.s64 = 6;
	// stb r26,244(r23)
	PPC_STORE_U8(ctx.r23.u32 + 244, ctx.r26.u8);
	// addi r31,r23,156
	ctx.r31.s64 = ctx.r23.s64 + 156;
	// stw r26,248(r23)
	PPC_STORE_U32(ctx.r23.u32 + 248, ctx.r26.u32);
	// stw r30,252(r23)
	PPC_STORE_U32(ctx.r23.u32 + 252, ctx.r30.u32);
	// bl 0x82920158
	ctx.lr = 0x8225DB1C;
	sub_82920158(ctx, base);
	// stw r3,256(r23)
	PPC_STORE_U32(ctx.r23.u32 + 256, ctx.r3.u32);
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DB30;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x822402c8
	ctx.lr = 0x8225DB40;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-27392
	ctx.r4.s64 = ctx.r11.s64 + -27392;
	// bl 0x822400d8
	ctx.lr = 0x8225DB50;
	sub_822400D8(ctx, base);
	// stw r26,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r26.u32);
	// stb r26,140(r23)
	PPC_STORE_U8(ctx.r23.u32 + 140, ctx.r26.u8);
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r26,144(r23)
	PPC_STORE_U32(ctx.r23.u32 + 144, ctx.r26.u32);
	// addi r31,r23,52
	ctx.r31.s64 = ctx.r23.s64 + 52;
	// stw r30,148(r23)
	PPC_STORE_U32(ctx.r23.u32 + 148, ctx.r30.u32);
	// bl 0x82920158
	ctx.lr = 0x8225DB6C;
	sub_82920158(ctx, base);
	// stw r3,152(r23)
	PPC_STORE_U32(ctx.r23.u32 + 152, ctx.r3.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DB80;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x822402c8
	ctx.lr = 0x8225DB90;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// addi r4,r11,-27372
	ctx.r4.s64 = ctx.r11.s64 + -27372;
	// bl 0x822400d8
	ctx.lr = 0x8225DBA0;
	sub_822400D8(ctx, base);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8225dbc8
	if (ctx.cr6.eq) goto loc_8225DBC8;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225DBB8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dbc8
	if (ctx.cr0.eq) goto loc_8225DBC8;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// mr r27,r29
	ctx.r27.u64 = ctx.r29.u64;
loc_8225DBC8:
	// addi r3,r1,784
	ctx.r3.s64 = ctx.r1.s64 + 784;
	// bl 0x822c3488
	ctx.lr = 0x8225DBD0;
	sub_822C3488(ctx, base);
	// addi r31,r23,260
	ctx.r31.s64 = ctx.r23.s64 + 260;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225dc00
	if (ctx.cr6.eq) goto loc_8225DC00;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225DBF0;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225dc00
	if (ctx.cr0.eq) goto loc_8225DC00;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8225DC00:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225dc18
	if (ctx.cr6.eq) goto loc_8225DC18;
	// bl 0x82241d18
	ctx.lr = 0x8225DC18;
	sub_82241D18(ctx, base);
loc_8225DC18:
	// li r11,1064
	ctx.r11.s64 = 1064;
	// li r24,7
	ctx.r24.s64 = 7;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// li r3,1064
	ctx.r3.s64 = 1064;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// bl 0x82691500
	ctx.lr = 0x8225DC34;
	sub_82691500(ctx, base);
	// li r5,1064
	ctx.r5.s64 = 1064;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x8225DC44;
	sub_82FA7CF0(ctx, base);
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// ble cr6,0x8225dc5c
	if (!ctx.cr6.gt) goto loc_8225DC5C;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
loc_8225DC5C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225dc70
	if (ctx.cr6.eq) goto loc_8225DC70;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8225DC70;
	sub_82FA77C0(ctx, base);
loc_8225DC70:
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DC80;
	sub_828CD148(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225dc90
	if (ctx.cr6.eq) goto loc_8225DC90;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DC90;
	sub_82241D18(ctx, base);
loc_8225DC90:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// bl 0x822402c8
	ctx.lr = 0x8225DCA0;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r4,r11,-27352
	ctx.r4.s64 = ctx.r11.s64 + -27352;
	// bl 0x822400d8
	ctx.lr = 0x8225DCB0;
	sub_822400D8(ctx, base);
	// stb r26,368(r23)
	PPC_STORE_U8(ctx.r23.u32 + 368, ctx.r26.u8);
	// addi r3,r23,356
	ctx.r3.s64 = ctx.r23.s64 + 356;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DCC4;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x822402c8
	ctx.lr = 0x8225DCD4;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// addi r4,r11,-27332
	ctx.r4.s64 = ctx.r11.s64 + -27332;
	// bl 0x822400d8
	ctx.lr = 0x8225DCE4;
	sub_822400D8(ctx, base);
	// stb r26,456(r23)
	PPC_STORE_U8(ctx.r23.u32 + 456, ctx.r26.u8);
	// addi r3,r23,444
	ctx.r3.s64 = ctx.r23.s64 + 444;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DCF8;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822402c8
	ctx.lr = 0x8225DD08;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r4,r11,-27320
	ctx.r4.s64 = ctx.r11.s64 + -27320;
	// bl 0x822400d8
	ctx.lr = 0x8225DD18;
	sub_822400D8(ctx, base);
	// stb r26,544(r23)
	PPC_STORE_U8(ctx.r23.u32 + 544, ctx.r26.u8);
	// addi r3,r23,532
	ctx.r3.s64 = ctx.r23.s64 + 532;
	// addi r5,r1,368
	ctx.r5.s64 = ctx.r1.s64 + 368;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DD2C;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x822402c8
	ctx.lr = 0x8225DD3C;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r4,r11,-27292
	ctx.r4.s64 = ctx.r11.s64 + -27292;
	// bl 0x822400d8
	ctx.lr = 0x8225DD4C;
	sub_822400D8(ctx, base);
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x8225DD54;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225dda4
	if (ctx.cr0.eq) goto loc_8225DDA4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r17,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r17.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r17,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r17.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x8225dd9c
	if (ctx.cr0.eq) goto loc_8225DD9C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r10,-26972
	ctx.r10.s64 = ctx.r10.s64 + -26972;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x8225DD9C;
	sub_828E06C0(ctx, base);
loc_8225DD9C:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// b 0x8225dda8
	goto loc_8225DDA8;
loc_8225DDA4:
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
loc_8225DDA8:
	// addi r31,r23,620
	ctx.r31.s64 = ctx.r23.s64 + 620;
	// addi r27,r28,12
	ctx.r27.s64 = ctx.r28.s64 + 12;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225ddd8
	if (ctx.cr6.eq) goto loc_8225DDD8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225DDC8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ddd8
	if (ctx.cr0.eq) goto loc_8225DDD8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_8225DDD8:
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r30,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r30.u32);
	// stw r29,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ddf0
	if (ctx.cr6.eq) goto loc_8225DDF0;
	// bl 0x82241d18
	ctx.lr = 0x8225DDF0;
	sub_82241D18(ctx, base);
loc_8225DDF0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r26,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r26.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8225de18
	if (ctx.cr6.gt) goto loc_8225DE18;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8225de1c
	goto loc_8225DE1C;
loc_8225DE18:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8225DE1C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225de28
	if (ctx.cr6.eq) goto loc_8225DE28;
	// stw r17,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r17.u32);
loc_8225DE28:
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DE38;
	sub_828CD148(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8225de48
	if (ctx.cr6.eq) goto loc_8225DE48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DE48;
	sub_82241D18(ctx, base);
loc_8225DE48:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822402c8
	ctx.lr = 0x8225DE58;
	sub_822402C8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// addi r29,r23,2276
	ctx.r29.s64 = ctx.r23.s64 + 2276;
	// addi r31,r23,804
	ctx.r31.s64 = ctx.r23.s64 + 804;
	// addi r28,r11,-27252
	ctx.r28.s64 = ctx.r11.s64 + -27252;
	// addi r27,r10,-27276
	ctx.r27.s64 = ctx.r10.s64 + -27276;
loc_8225DE74:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8224edb8
	ctx.lr = 0x8225DE84;
	sub_8224EDB8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8224edb8
	ctx.lr = 0x8225DE94;
	sub_8224EDB8(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x82251da0
	ctx.lr = 0x8225DEA0;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82557028
	ctx.lr = 0x8225DEA8;
	sub_82557028(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x82251da0
	ctx.lr = 0x8225DEB4;
	sub_82251DA0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82557028
	ctx.lr = 0x8225DEBC;
	sub_82557028(ctx, base);
	// addi r4,r1,628
	ctx.r4.s64 = ctx.r1.s64 + 628;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82252010
	ctx.lr = 0x8225DEC8;
	sub_82252010(ctx, base);
	// li r11,127
	ctx.r11.s64 = 127;
	// stw r26,-76(r31)
	PPC_STORE_U32(ctx.r31.u32 + -76, ctx.r26.u32);
	// li r3,127
	ctx.r3.s64 = 127;
	// stb r26,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r26.u8);
	// stw r26,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r26.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82920158
	ctx.lr = 0x8225DEE4;
	sub_82920158(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,-88
	ctx.r3.s64 = ctx.r31.s64 + -88;
	// bl 0x828cd148
	ctx.lr = 0x8225DEF8;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x822402c8
	ctx.lr = 0x8225DF08;
	sub_822402C8(ctx, base);
	// addi r4,r1,468
	ctx.r4.s64 = ctx.r1.s64 + 468;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x82252010
	ctx.lr = 0x8225DF14;
	sub_82252010(ctx, base);
	// stb r26,12(r29)
	PPC_STORE_U8(ctx.r29.u32 + 12, ctx.r26.u8);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828cd148
	ctx.lr = 0x8225DF28;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// bl 0x822402c8
	ctx.lr = 0x8225DF38;
	sub_822402C8(ctx, base);
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x8224fa68
	ctx.lr = 0x8225DF40;
	sub_8224FA68(ctx, base);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// bl 0x8224fa68
	ctx.lr = 0x8225DF48;
	sub_8224FA68(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,104
	ctx.r31.s64 = ctx.r31.s64 + 104;
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// cmplwi cr6,r30,15
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 15, ctx.xer);
	// blt cr6,0x8225de74
	if (ctx.cr6.lt) goto loc_8225DE74;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x8225df6c
	if (ctx.cr6.eq) goto loc_8225DF6C;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DF6C;
	sub_82241D18(ctx, base);
loc_8225DF6C:
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x8225df7c
	if (ctx.cr6.eq) goto loc_8225DF7C;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DF7C;
	sub_82241D18(ctx, base);
loc_8225DF7C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x8225df8c
	if (ctx.cr6.eq) goto loc_8225DF8C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DF8C;
	sub_82241D18(ctx, base);
loc_8225DF8C:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x8225df9c
	if (ctx.cr6.eq) goto loc_8225DF9C;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DF9C;
	sub_82241D18(ctx, base);
loc_8225DF9C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x8225dfac
	if (ctx.cr6.eq) goto loc_8225DFAC;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DFAC;
	sub_82241D18(ctx, base);
loc_8225DFAC:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x8225dfbc
	if (ctx.cr6.eq) goto loc_8225DFBC;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DFBC;
	sub_82241D18(ctx, base);
loc_8225DFBC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x8225dfcc
	if (ctx.cr6.eq) goto loc_8225DFCC;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DFCC;
	sub_82241D18(ctx, base);
loc_8225DFCC:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225dfdc
	if (ctx.cr6.eq) goto loc_8225DFDC;
	// bl 0x82241d18
	ctx.lr = 0x8225DFDC;
	sub_82241D18(ctx, base);
loc_8225DFDC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x8225dfec
	if (ctx.cr6.eq) goto loc_8225DFEC;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225DFEC;
	sub_82241D18(ctx, base);
loc_8225DFEC:
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225dffc
	if (ctx.cr6.eq) goto loc_8225DFFC;
	// bl 0x82241d18
	ctx.lr = 0x8225DFFC;
	sub_82241D18(ctx, base);
loc_8225DFFC:
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e00c
	if (ctx.cr6.eq) goto loc_8225E00C;
	// bl 0x82241d18
	ctx.lr = 0x8225E00C;
	sub_82241D18(ctx, base);
loc_8225E00C:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e01c
	if (ctx.cr6.eq) goto loc_8225E01C;
	// bl 0x82241d18
	ctx.lr = 0x8225E01C;
	sub_82241D18(ctx, base);
loc_8225E01C:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e02c
	if (ctx.cr6.eq) goto loc_8225E02C;
	// bl 0x82241d18
	ctx.lr = 0x8225E02C;
	sub_82241D18(ctx, base);
loc_8225E02C:
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e03c
	if (ctx.cr6.eq) goto loc_8225E03C;
	// bl 0x82241d18
	ctx.lr = 0x8225E03C;
	sub_82241D18(ctx, base);
loc_8225E03C:
	// addi r1,r1,2000
	ctx.r1.s64 = ctx.r1.s64 + 2000;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E044"))) PPC_WEAK_FUNC(sub_8225E044);
PPC_FUNC_IMPL(__imp__sub_8225E044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E048"))) PPC_WEAK_FUNC(sub_8225E048);
PPC_FUNC_IMPL(__imp__sub_8225E048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225E050;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// addi r5,r30,156
	ctx.r5.s64 = ctx.r30.s64 + 156;
	// bl 0x82265e80
	ctx.lr = 0x8225E06C;
	sub_82265E80(ctx, base);
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82265e80
	ctx.lr = 0x8225E07C;
	sub_82265E80(ctx, base);
	// addi r29,r30,260
	ctx.r29.s64 = ctx.r30.s64 + 260;
	// addi r28,r31,240
	ctx.r28.s64 = ctx.r31.s64 + 240;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab5e88
	ctx.lr = 0x8225E08C;
	sub_82AB5E88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cc968
	ctx.lr = 0x8225E09C;
	sub_828CC968(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828cd780
	ctx.lr = 0x8225E0B8;
	sub_828CD780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234cc28
	ctx.lr = 0x8225E0C0;
	sub_8234CC28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8225a408
	ctx.lr = 0x8225E0D4;
	sub_8225A408(ctx, base);
	// addi r5,r30,356
	ctx.r5.s64 = ctx.r30.s64 + 356;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,324
	ctx.r3.s64 = ctx.r31.s64 + 324;
	// bl 0x82265e80
	ctx.lr = 0x8225E0E4;
	sub_82265E80(ctx, base);
	// addi r5,r30,444
	ctx.r5.s64 = ctx.r30.s64 + 444;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// bl 0x82265e80
	ctx.lr = 0x8225E0F4;
	sub_82265E80(ctx, base);
	// addi r5,r30,532
	ctx.r5.s64 = ctx.r30.s64 + 532;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,492
	ctx.r3.s64 = ctx.r31.s64 + 492;
	// bl 0x82265e80
	ctx.lr = 0x8225E104;
	sub_82265E80(ctx, base);
	// addi r29,r30,620
	ctx.r29.s64 = ctx.r30.s64 + 620;
	// addi r28,r31,576
	ctx.r28.s64 = ctx.r31.s64 + 576;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82ab5e88
	ctx.lr = 0x8225E114;
	sub_82AB5E88(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828cc968
	ctx.lr = 0x8225E124;
	sub_828CC968(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r11.u32);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x828cd780
	ctx.lr = 0x8225E140;
	sub_828CD780(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234cc28
	ctx.lr = 0x8225E148;
	sub_8234CC28(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// bl 0x8225a408
	ctx.lr = 0x8225E15C;
	sub_8225A408(ctx, base);
	// addi r27,r30,2276
	ctx.r27.s64 = ctx.r30.s64 + 2276;
	// addi r28,r30,716
	ctx.r28.s64 = ctx.r30.s64 + 716;
	// addi r29,r31,1920
	ctx.r29.s64 = ctx.r31.s64 + 1920;
	// li r30,15
	ctx.r30.s64 = 15;
loc_8225E16C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,-1260
	ctx.r3.s64 = ctx.r29.s64 + -1260;
	// bl 0x82265e80
	ctx.lr = 0x8225E17C;
	sub_82265E80(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82265e80
	ctx.lr = 0x8225E18C;
	sub_82265E80(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r28,r28,104
	ctx.r28.s64 = ctx.r28.s64 + 104;
	// addi r27,r27,88
	ctx.r27.s64 = ctx.r27.s64 + 88;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// bne 0x8225e16c
	if (!ctx.cr0.eq) goto loc_8225E16C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E1A8"))) PPC_WEAK_FUNC(sub_8225E1A8);
PPC_FUNC_IMPL(__imp__sub_8225E1A8) {
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
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x8225e244
	if (!ctx.cr6.eq) goto loc_8225E244;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x8225e244
	if (!ctx.cr6.eq) goto loc_8225E244;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r11,r3,324
	ctx.r11.s64 = ctx.r3.s64 + 324;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225e244
	if (!ctx.cr6.eq) goto loc_8225E244;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,324
	ctx.r3.s64 = ctx.r3.s64 + 324;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E218;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8225e244
	if (!ctx.cr6.eq) goto loc_8225E244;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,156
	ctx.r3.s64 = ctx.r3.s64 + 156;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828dffd8
	ctx.lr = 0x8225E244;
	sub_828DFFD8(ctx, base);
loc_8225E244:
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

__attribute__((alias("__imp__sub_8225E25C"))) PPC_WEAK_FUNC(sub_8225E25C);
PPC_FUNC_IMPL(__imp__sub_8225E25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E260"))) PPC_WEAK_FUNC(sub_8225E260);
PPC_FUNC_IMPL(__imp__sub_8225E260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E268;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8225e310
	if (ctx.cr6.eq) goto loc_8225E310;
	// bl 0x828c11f8
	ctx.lr = 0x8225E280;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e310
	if (ctx.cr0.eq) goto loc_8225E310;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x8225e300
	goto loc_8225E300;
loc_8225E2A4:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e2e0
	if (ctx.cr0.eq) goto loc_8225E2E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,492
	ctx.r3.s64 = ctx.r3.s64 + 492;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E2D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x8225e2e4
	if (!ctx.cr0.eq) goto loc_8225E2E4;
loc_8225E2E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225E2E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x8285aa38
	ctx.lr = 0x8225E2F0;
	sub_8285AA38(ctx, base);
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_8225E300:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8225e2a4
	if (!ctx.cr6.eq) goto loc_8225E2A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x8225e314
	goto loc_8225E314;
loc_8225E310:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225E314:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E31C"))) PPC_WEAK_FUNC(sub_8225E31C);
PPC_FUNC_IMPL(__imp__sub_8225E31C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E320"))) PPC_WEAK_FUNC(sub_8225E320);
PPC_FUNC_IMPL(__imp__sub_8225E320) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225e358
	if (ctx.cr6.eq) goto loc_8225E358;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E354;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e35c
	goto loc_8225E35C;
loc_8225E358:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225E35C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225e3b8
	if (!ctx.cr6.eq) goto loc_8225E3B8;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225e388
	if (ctx.cr6.eq) goto loc_8225E388;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e38c
	goto loc_8225E38C;
loc_8225E388:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225E38C:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8225e3b8
	if (!ctx.cr6.eq) goto loc_8225E3B8;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x8225e3ac
	if (ctx.cr6.gt) goto loc_8225E3AC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// b 0x8225e3b0
	goto loc_8225E3B0;
loc_8225E3AC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_8225E3B0:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8225e3cc
	goto loc_8225E3CC;
loc_8225E3B8:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x828d2f28
	ctx.lr = 0x8225E3C0;
	sub_828D2F28(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225f1f0
	ctx.lr = 0x8225E3CC;
	sub_8225F1F0(ctx, base);
loc_8225E3CC:
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

__attribute__((alias("__imp__sub_8225E3E0"))) PPC_WEAK_FUNC(sub_8225E3E0);
PPC_FUNC_IMPL(__imp__sub_8225E3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E3E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225e448
	if (ctx.cr6.eq) goto loc_8225E448;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e420
	if (ctx.cr6.eq) goto loc_8225E420;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E41C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e428
	goto loc_8225E428;
loc_8225E420:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225E428:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28968
	ctx.r4.s64 = ctx.r11.s64 + -28968;
	// bl 0x82fa2af0
	ctx.lr = 0x8225E434;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e448
	if (ctx.cr0.eq) goto loc_8225E448;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8225e44c
	goto loc_8225E44C;
loc_8225E448:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225E44C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x8225E458;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E47C"))) PPC_WEAK_FUNC(sub_8225E47C);
PPC_FUNC_IMPL(__imp__sub_8225E47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E480"))) PPC_WEAK_FUNC(sub_8225E480);
PPC_FUNC_IMPL(__imp__sub_8225E480) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E488;
	__savegprlr_29(ctx, base);
	// stwu r1,-1120(r1)
	ea = -1120 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225e4e8
	if (ctx.cr6.eq) goto loc_8225E4E8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e4c0
	if (ctx.cr6.eq) goto loc_8225E4C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e4c8
	goto loc_8225E4C8;
loc_8225E4C0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225E4C8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28968
	ctx.r4.s64 = ctx.r11.s64 + -28968;
	// bl 0x82fa2af0
	ctx.lr = 0x8225E4D4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e4e8
	if (ctx.cr0.eq) goto loc_8225E4E8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225e4ec
	goto loc_8225E4EC;
loc_8225E4E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225E4EC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225e510
	if (ctx.cr6.eq) goto loc_8225E510;
	// bctrl 
	ctx.lr = 0x8225E50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e570
	goto loc_8225E570;
loc_8225E510:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225E518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1004
	ctx.r3.s64 = 1004;
	// bl 0x82691500
	ctx.lr = 0x8225E520;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225e548
	if (ctx.cr0.eq) goto loc_8225E548;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-26828
	ctx.r11.s64 = ctx.r11.s64 + -26828;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x8225E544;
	sub_82FA77C0(ctx, base);
	// b 0x8225e54c
	goto loc_8225E54C;
loc_8225E548:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225E54C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e570
	if (ctx.cr6.eq) goto loc_8225E570;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E570;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225E570:
	// addi r1,r1,1120
	ctx.r1.s64 = ctx.r1.s64 + 1120;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E578"))) PPC_WEAK_FUNC(sub_8225E578);
PPC_FUNC_IMPL(__imp__sub_8225E578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E580;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225e5e0
	if (ctx.cr6.eq) goto loc_8225E5E0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e5b8
	if (ctx.cr6.eq) goto loc_8225E5B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E5B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e5c0
	goto loc_8225E5C0;
loc_8225E5B8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225E5C0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28936
	ctx.r4.s64 = ctx.r11.s64 + -28936;
	// bl 0x82fa2af0
	ctx.lr = 0x8225E5CC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e5e0
	if (ctx.cr0.eq) goto loc_8225E5E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8225e5e4
	goto loc_8225E5E4;
loc_8225E5E0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225E5E4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82fa77c0
	ctx.lr = 0x8225E5F0;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E614"))) PPC_WEAK_FUNC(sub_8225E614);
PPC_FUNC_IMPL(__imp__sub_8225E614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E618"))) PPC_WEAK_FUNC(sub_8225E618);
PPC_FUNC_IMPL(__imp__sub_8225E618) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E620;
	__savegprlr_29(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225e680
	if (ctx.cr6.eq) goto loc_8225E680;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e658
	if (ctx.cr6.eq) goto loc_8225E658;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e660
	goto loc_8225E660;
loc_8225E658:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225E660:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28936
	ctx.r4.s64 = ctx.r11.s64 + -28936;
	// bl 0x82fa2af0
	ctx.lr = 0x8225E66C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e680
	if (ctx.cr0.eq) goto loc_8225E680;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225e684
	goto loc_8225E684;
loc_8225E680:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225E684:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225e6a8
	if (ctx.cr6.eq) goto loc_8225E6A8;
	// bctrl 
	ctx.lr = 0x8225E6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e708
	goto loc_8225E708;
loc_8225E6A8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225E6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82691500
	ctx.lr = 0x8225E6B8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225e6e0
	if (ctx.cr0.eq) goto loc_8225E6E0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-26816
	ctx.r11.s64 = ctx.r11.s64 + -26816;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82fa77c0
	ctx.lr = 0x8225E6DC;
	sub_82FA77C0(ctx, base);
	// b 0x8225e6e4
	goto loc_8225E6E4;
loc_8225E6E0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225E6E4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e708
	if (ctx.cr6.eq) goto loc_8225E708;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225E708:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E710"))) PPC_WEAK_FUNC(sub_8225E710);
PPC_FUNC_IMPL(__imp__sub_8225E710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E718;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225e778
	if (ctx.cr6.eq) goto loc_8225E778;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e750
	if (ctx.cr6.eq) goto loc_8225E750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e758
	goto loc_8225E758;
loc_8225E750:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225E758:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28896
	ctx.r4.s64 = ctx.r11.s64 + -28896;
	// bl 0x82fa2af0
	ctx.lr = 0x8225E764;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e778
	if (ctx.cr0.eq) goto loc_8225E778;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225e77c
	goto loc_8225E77C;
loc_8225E778:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225E77C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E7A8"))) PPC_WEAK_FUNC(sub_8225E7A8);
PPC_FUNC_IMPL(__imp__sub_8225E7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225E7B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225e810
	if (ctx.cr6.eq) goto loc_8225E810;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e7e8
	if (ctx.cr6.eq) goto loc_8225E7E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e7f0
	goto loc_8225E7F0;
loc_8225E7E8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225E7F0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28896
	ctx.r4.s64 = ctx.r11.s64 + -28896;
	// bl 0x82fa2af0
	ctx.lr = 0x8225E7FC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e810
	if (ctx.cr0.eq) goto loc_8225E810;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225e814
	goto loc_8225E814;
loc_8225E810:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225E814:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225e838
	if (ctx.cr6.eq) goto loc_8225E838;
	// bctrl 
	ctx.lr = 0x8225E834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225e894
	goto loc_8225E894;
loc_8225E838:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225E840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8225E848;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e86c
	if (ctx.cr0.eq) goto loc_8225E86C;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26804
	ctx.r10.s64 = ctx.r10.s64 + -26804;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8225e870
	goto loc_8225E870;
loc_8225E86C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225E870:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e894
	if (ctx.cr6.eq) goto loc_8225E894;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225E894;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225E894:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225E89C"))) PPC_WEAK_FUNC(sub_8225E89C);
PPC_FUNC_IMPL(__imp__sub_8225E89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E8A0"))) PPC_WEAK_FUNC(sub_8225E8A0);
PPC_FUNC_IMPL(__imp__sub_8225E8A0) {
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
	// bl 0x82691500
	ctx.lr = 0x8225E8BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e8fc
	if (ctx.cr0.eq) goto loc_8225E8FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-16484
	ctx.r9.s64 = ctx.r11.s64 + -16484;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq 0x8225e900
	if (ctx.cr0.eq) goto loc_8225E900;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,-32128
	ctx.r10.s64 = ctx.r10.s64 + -32128;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x8225e900
	goto loc_8225E900;
loc_8225E8FC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225E900:
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_8225E924"))) PPC_WEAK_FUNC(sub_8225E924);
PPC_FUNC_IMPL(__imp__sub_8225E924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225E928"))) PPC_WEAK_FUNC(sub_8225E928);
PPC_FUNC_IMPL(__imp__sub_8225E928) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8225E930;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x8225E954;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225e980
	if (ctx.cr0.eq) goto loc_8225E980;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822601d0
	ctx.lr = 0x8225E978;
	sub_822601D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8225e984
	goto loc_8225E984;
loc_8225E980:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_8225E984:
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// li r9,768
	ctx.r9.s64 = 768;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// beq cr6,0x8225e9ec
	if (ctx.cr6.eq) goto loc_8225E9EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225E9C4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225e9e4
	if (ctx.cr0.eq) goto loc_8225E9E4;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e9dc
	if (ctx.cr6.eq) goto loc_8225E9DC;
	// bl 0x82241d18
	ctx.lr = 0x8225E9DC;
	sub_82241D18(ctx, base);
loc_8225E9DC:
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_8225E9E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225E9EC;
	sub_82241D18(ctx, base);
loc_8225E9EC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225e9fc
	if (ctx.cr6.eq) goto loc_8225E9FC;
	// bl 0x82241d18
	ctx.lr = 0x8225E9FC;
	sub_82241D18(ctx, base);
loc_8225E9FC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ea0c
	if (ctx.cr6.eq) goto loc_8225EA0C;
	// bl 0x82241d18
	ctx.lr = 0x8225EA0C;
	sub_82241D18(ctx, base);
loc_8225EA0C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ea1c
	if (ctx.cr6.eq) goto loc_8225EA1C;
	// bl 0x82241d18
	ctx.lr = 0x8225EA1C;
	sub_82241D18(ctx, base);
loc_8225EA1C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ea2c
	if (ctx.cr6.eq) goto loc_8225EA2C;
	// bl 0x82241d18
	ctx.lr = 0x8225EA2C;
	sub_82241D18(ctx, base);
loc_8225EA2C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ea3c
	if (ctx.cr6.eq) goto loc_8225EA3C;
	// bl 0x82241d18
	ctx.lr = 0x8225EA3C;
	sub_82241D18(ctx, base);
loc_8225EA3C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EA48"))) PPC_WEAK_FUNC(sub_8225EA48);
PPC_FUNC_IMPL(__imp__sub_8225EA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8225EA50;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x82691500
	ctx.lr = 0x8225EA78;
	sub_82691500(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225eaa8
	if (ctx.cr0.eq) goto loc_8225EAA8;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82260330
	ctx.lr = 0x8225EAA0;
	sub_82260330(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x8225eaac
	goto loc_8225EAAC;
loc_8225EAA8:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8225EAAC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r28,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,20
	ctx.r8.s64 = 20;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// beq cr6,0x8225eb1c
	if (ctx.cr6.eq) goto loc_8225EB1C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225EAF4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225eb14
	if (ctx.cr0.eq) goto loc_8225EB14;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb0c
	if (ctx.cr6.eq) goto loc_8225EB0C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB0C;
	sub_82241D18(ctx, base);
loc_8225EB0C:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_8225EB14:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225EB1C;
	sub_82241D18(ctx, base);
loc_8225EB1C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb2c
	if (ctx.cr6.eq) goto loc_8225EB2C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB2C;
	sub_82241D18(ctx, base);
loc_8225EB2C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb3c
	if (ctx.cr6.eq) goto loc_8225EB3C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB3C;
	sub_82241D18(ctx, base);
loc_8225EB3C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb4c
	if (ctx.cr6.eq) goto loc_8225EB4C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB4C;
	sub_82241D18(ctx, base);
loc_8225EB4C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb5c
	if (ctx.cr6.eq) goto loc_8225EB5C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB5C;
	sub_82241D18(ctx, base);
loc_8225EB5C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb6c
	if (ctx.cr6.eq) goto loc_8225EB6C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB6C;
	sub_82241D18(ctx, base);
loc_8225EB6C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225eb7c
	if (ctx.cr6.eq) goto loc_8225EB7C;
	// bl 0x82241d18
	ctx.lr = 0x8225EB7C;
	sub_82241D18(ctx, base);
loc_8225EB7C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EB88"))) PPC_WEAK_FUNC(sub_8225EB88);
PPC_FUNC_IMPL(__imp__sub_8225EB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225EB90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225ebf0
	if (ctx.cr6.eq) goto loc_8225EBF0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ebc8
	if (ctx.cr6.eq) goto loc_8225EBC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225ebd0
	goto loc_8225EBD0;
loc_8225EBC8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225EBD0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-29020
	ctx.r4.s64 = ctx.r11.s64 + -29020;
	// bl 0x82fa2af0
	ctx.lr = 0x8225EBDC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ebf0
	if (ctx.cr0.eq) goto loc_8225EBF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225ebf4
	goto loc_8225EBF4;
loc_8225EBF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225EBF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EC18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EC20"))) PPC_WEAK_FUNC(sub_8225EC20);
PPC_FUNC_IMPL(__imp__sub_8225EC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225EC28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225ec88
	if (ctx.cr6.eq) goto loc_8225EC88;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ec60
	if (ctx.cr6.eq) goto loc_8225EC60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EC5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225ec68
	goto loc_8225EC68;
loc_8225EC60:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225EC68:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-29020
	ctx.r4.s64 = ctx.r11.s64 + -29020;
	// bl 0x82fa2af0
	ctx.lr = 0x8225EC74;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ec88
	if (ctx.cr0.eq) goto loc_8225EC88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225ec8c
	goto loc_8225EC8C;
loc_8225EC88:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225EC8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225ecb0
	if (ctx.cr6.eq) goto loc_8225ECB0;
	// bctrl 
	ctx.lr = 0x8225ECAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225ed0c
	goto loc_8225ED0C;
loc_8225ECB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225ECB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8225ECC0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225ece4
	if (ctx.cr0.eq) goto loc_8225ECE4;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26792
	ctx.r10.s64 = ctx.r10.s64 + -26792;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8225ece8
	goto loc_8225ECE8;
loc_8225ECE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225ECE8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ed0c
	if (ctx.cr6.eq) goto loc_8225ED0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225ED0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225ED0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225ED14"))) PPC_WEAK_FUNC(sub_8225ED14);
PPC_FUNC_IMPL(__imp__sub_8225ED14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225ED18"))) PPC_WEAK_FUNC(sub_8225ED18);
PPC_FUNC_IMPL(__imp__sub_8225ED18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8225ED20;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8225ED38:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225ED54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225ed64
	if (ctx.cr6.eq) goto loc_8225ED64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_8225ED64:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x8225ed38
	if (!ctx.cr0.eq) goto loc_8225ED38;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225ED78"))) PPC_WEAK_FUNC(sub_8225ED78);
PPC_FUNC_IMPL(__imp__sub_8225ED78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225ED80;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EDA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EDC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,352
	ctx.r5.s64 = ctx.r1.s64 + 352;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EDE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,864
	ctx.r5.s64 = ctx.r1.s64 + 864;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EDFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225ee90
	if (ctx.cr6.eq) goto loc_8225EE90;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// li r5,256
	ctx.r5.s64 = 256;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8225EE34;
	sub_82FA77C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82fa77c0
	ctx.lr = 0x8225EE48;
	sub_82FA77C0(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82fa77c0
	ctx.lr = 0x8225EE5C;
	sub_82FA77C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82fa77c0
	ctx.lr = 0x8225EE70;
	sub_82FA77C0(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r9,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
loc_8225EE90:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EE98"))) PPC_WEAK_FUNC(sub_8225EE98);
PPC_FUNC_IMPL(__imp__sub_8225EE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225EEA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,32(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EEC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EEE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EF00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EF1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EF38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225efa4
	if (ctx.cr6.eq) goto loc_8225EFA4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_8225EFA4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225EFAC"))) PPC_WEAK_FUNC(sub_8225EFAC);
PPC_FUNC_IMPL(__imp__sub_8225EFAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225EFB0"))) PPC_WEAK_FUNC(sub_8225EFB0);
PPC_FUNC_IMPL(__imp__sub_8225EFB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225EFB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EFE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225EFFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225f02c
	if (ctx.cr6.eq) goto loc_8225F02C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// li r5,1036
	ctx.r5.s64 = 1036;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8225F018;
	sub_82FA77C0(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x8225F02C;
	sub_82FA77C0(ctx, base);
loc_8225F02C:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F034"))) PPC_WEAK_FUNC(sub_8225F034);
PPC_FUNC_IMPL(__imp__sub_8225F034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F038"))) PPC_WEAK_FUNC(sub_8225F038);
PPC_FUNC_IMPL(__imp__sub_8225F038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F040;
	__savegprlr_29(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f0a0
	if (ctx.cr6.eq) goto loc_8225F0A0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f078
	if (ctx.cr6.eq) goto loc_8225F078;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F074;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f080
	goto loc_8225F080;
loc_8225F078:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F080:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-29068
	ctx.r4.s64 = ctx.r11.s64 + -29068;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F08C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f0a0
	if (ctx.cr0.eq) goto loc_8225F0A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8225f0a4
	goto loc_8225F0A4;
loc_8225F0A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225F0A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// bl 0x82fa77c0
	ctx.lr = 0x8225F0B0;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F0CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F0D4"))) PPC_WEAK_FUNC(sub_8225F0D4);
PPC_FUNC_IMPL(__imp__sub_8225F0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F0D8"))) PPC_WEAK_FUNC(sub_8225F0D8);
PPC_FUNC_IMPL(__imp__sub_8225F0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F0E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-1184(r1)
	ea = -1184 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f140
	if (ctx.cr6.eq) goto loc_8225F140;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f118
	if (ctx.cr6.eq) goto loc_8225F118;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f120
	goto loc_8225F120;
loc_8225F118:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F120:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-29068
	ctx.r4.s64 = ctx.r11.s64 + -29068;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F12C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f140
	if (ctx.cr0.eq) goto loc_8225F140;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225f144
	goto loc_8225F144;
loc_8225F140:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225F144:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f168
	if (ctx.cr6.eq) goto loc_8225F168;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F164;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f1e4
	goto loc_8225F1E4;
loc_8225F168:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822c3488
	ctx.lr = 0x8225F170;
	sub_822C3488(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F18C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1068
	ctx.r3.s64 = 1068;
	// bl 0x82691500
	ctx.lr = 0x8225F194;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225f1bc
	if (ctx.cr0.eq) goto loc_8225F1BC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-26780
	ctx.r11.s64 = ctx.r11.s64 + -26780;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1064
	ctx.r5.s64 = 1064;
	// bl 0x82fa77c0
	ctx.lr = 0x8225F1B8;
	sub_82FA77C0(ctx, base);
	// b 0x8225f1c0
	goto loc_8225F1C0;
loc_8225F1BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225F1C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f1e4
	if (ctx.cr6.eq) goto loc_8225F1E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F1E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225F1E4:
	// addi r1,r1,1184
	ctx.r1.s64 = ctx.r1.s64 + 1184;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F1EC"))) PPC_WEAK_FUNC(sub_8225F1EC);
PPC_FUNC_IMPL(__imp__sub_8225F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F1F0"))) PPC_WEAK_FUNC(sub_8225F1F0);
PPC_FUNC_IMPL(__imp__sub_8225F1F0) {
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
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f230
	if (ctx.cr6.eq) goto loc_8225F230;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f234
	goto loc_8225F234;
loc_8225F230:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225F234:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f29c
	if (ctx.cr6.eq) goto loc_8225F29C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f264
	if (ctx.cr6.eq) goto loc_8225F264;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F25C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8225f268
	goto loc_8225F268;
loc_8225F264:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225F268:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241a078
	ctx.lr = 0x8225F270;
	sub_8241A078(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_8225F278:
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// addi r10,r3,2
	ctx.r10.s64 = ctx.r3.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bgt cr6,0x8225f290
	if (ctx.cr6.gt) goto loc_8225F290;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x8225f294
	goto loc_8225F294;
loc_8225F290:
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_8225F294:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8225f310
	goto loc_8225F310;
loc_8225F29C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f2bc
	if (ctx.cr6.eq) goto loc_8225F2BC;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F2B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f2c0
	goto loc_8225F2C0;
loc_8225F2BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8225F2C0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f308
	if (ctx.cr6.eq) goto loc_8225F308;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8225f2f0
	if (ctx.cr6.eq) goto loc_8225F2F0;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F2E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x8225f2f4
	goto loc_8225F2F4;
loc_8225F2F0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225F2F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8241a078
	ctx.lr = 0x8225F2FC;
	sub_8241A078(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// b 0x8225f278
	goto loc_8225F278;
loc_8225F308:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8225e320
	ctx.lr = 0x8225F310;
	sub_8225E320(ctx, base);
loc_8225F310:
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

__attribute__((alias("__imp__sub_8225F328"))) PPC_WEAK_FUNC(sub_8225F328);
PPC_FUNC_IMPL(__imp__sub_8225F328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F330;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,84
	ctx.r3.s64 = 84;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x8225F344;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225f3ac
	if (ctx.cr0.eq) goto loc_8225F3AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254b9c8
	ctx.lr = 0x8225F358;
	sub_8254B9C8(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
	// addi r9,r9,-27228
	ctx.r9.s64 = ctx.r9.s64 + -27228;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stb r11,68(r31)
	PPC_STORE_U8(ctx.r31.u32 + 68, ctx.r11.u8);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stb r11,80(r31)
	PPC_STORE_U8(ctx.r31.u32 + 80, ctx.r11.u8);
	// stb r11,81(r31)
	PPC_STORE_U8(ctx.r31.u32 + 81, ctx.r11.u8);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r11,30428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8225f3a0
	if (!ctx.cr6.eq) goto loc_8225F3A0;
	// bl 0x822599a0
	ctx.lr = 0x8225F39C;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8225F3A0:
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r10.u8);
	// b 0x8225f3b0
	goto loc_8225F3B0;
loc_8225F3AC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225F3B0:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F3C0"))) PPC_WEAK_FUNC(sub_8225F3C0);
PPC_FUNC_IMPL(__imp__sub_8225F3C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8225F3C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,100
	ctx.r3.s64 = 100;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x8225F3DC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225f424
	if (ctx.cr0.eq) goto loc_8225F424;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,29016
	ctx.r11.s64 = ctx.r11.s64 + 29016;
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82261158
	ctx.lr = 0x8225F408;
	sub_82261158(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stb r30,92(r31)
	PPC_STORE_U8(ctx.r31.u32 + 92, ctx.r30.u8);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// b 0x8225f428
	goto loc_8225F428;
loc_8225F424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F428:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F438"))) PPC_WEAK_FUNC(sub_8225F438);
PPC_FUNC_IMPL(__imp__sub_8225F438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F440;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f4a0
	if (ctx.cr6.eq) goto loc_8225F4A0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f478
	if (ctx.cr6.eq) goto loc_8225F478;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F474;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f480
	goto loc_8225F480;
loc_8225F478:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F480:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F48C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f4a0
	if (ctx.cr0.eq) goto loc_8225F4A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225f4a4
	goto loc_8225F4A4;
loc_8225F4A0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F4A4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F4C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F4D0"))) PPC_WEAK_FUNC(sub_8225F4D0);
PPC_FUNC_IMPL(__imp__sub_8225F4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F4D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f538
	if (ctx.cr6.eq) goto loc_8225F538;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f510
	if (ctx.cr6.eq) goto loc_8225F510;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F50C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f518
	goto loc_8225F518;
loc_8225F510:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F518:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28872
	ctx.r4.s64 = ctx.r11.s64 + -28872;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F524;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f538
	if (ctx.cr0.eq) goto loc_8225F538;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225f53c
	goto loc_8225F53C;
loc_8225F538:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225F53C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225f560
	if (ctx.cr6.eq) goto loc_8225F560;
	// bctrl 
	ctx.lr = 0x8225F55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f5bc
	goto loc_8225F5BC;
loc_8225F560:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225F568;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8225F570;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225f594
	if (ctx.cr0.eq) goto loc_8225F594;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26768
	ctx.r10.s64 = ctx.r10.s64 + -26768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8225f598
	goto loc_8225F598;
loc_8225F594:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F598:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f5bc
	if (ctx.cr6.eq) goto loc_8225F5BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F5BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225F5BC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F5C4"))) PPC_WEAK_FUNC(sub_8225F5C4);
PPC_FUNC_IMPL(__imp__sub_8225F5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F5C8"))) PPC_WEAK_FUNC(sub_8225F5C8);
PPC_FUNC_IMPL(__imp__sub_8225F5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F5D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f630
	if (ctx.cr6.eq) goto loc_8225F630;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f608
	if (ctx.cr6.eq) goto loc_8225F608;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f610
	goto loc_8225F610;
loc_8225F608:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F610:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28792
	ctx.r4.s64 = ctx.r11.s64 + -28792;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F61C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f630
	if (ctx.cr0.eq) goto loc_8225F630;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225f634
	goto loc_8225F634;
loc_8225F630:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F634:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F660"))) PPC_WEAK_FUNC(sub_8225F660);
PPC_FUNC_IMPL(__imp__sub_8225F660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F668;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f6c8
	if (ctx.cr6.eq) goto loc_8225F6C8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f6a0
	if (ctx.cr6.eq) goto loc_8225F6A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F69C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f6a8
	goto loc_8225F6A8;
loc_8225F6A0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F6A8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28792
	ctx.r4.s64 = ctx.r11.s64 + -28792;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F6B4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f6c8
	if (ctx.cr0.eq) goto loc_8225F6C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225f6cc
	goto loc_8225F6CC;
loc_8225F6C8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225F6CC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225f6f0
	if (ctx.cr6.eq) goto loc_8225F6F0;
	// bctrl 
	ctx.lr = 0x8225F6EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f74c
	goto loc_8225F74C;
loc_8225F6F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225F6F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8225F700;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225f724
	if (ctx.cr0.eq) goto loc_8225F724;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26756
	ctx.r10.s64 = ctx.r10.s64 + -26756;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8225f728
	goto loc_8225F728;
loc_8225F724:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F728:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f74c
	if (ctx.cr6.eq) goto loc_8225F74C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F74C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225F74C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F754"))) PPC_WEAK_FUNC(sub_8225F754);
PPC_FUNC_IMPL(__imp__sub_8225F754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F758"))) PPC_WEAK_FUNC(sub_8225F758);
PPC_FUNC_IMPL(__imp__sub_8225F758) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F760;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f7c0
	if (ctx.cr6.eq) goto loc_8225F7C0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f798
	if (ctx.cr6.eq) goto loc_8225F798;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f7a0
	goto loc_8225F7A0;
loc_8225F798:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F7A0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28712
	ctx.r4.s64 = ctx.r11.s64 + -28712;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F7AC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f7c0
	if (ctx.cr0.eq) goto loc_8225F7C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225f7c4
	goto loc_8225F7C4;
loc_8225F7C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F7C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F7E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F7F0"))) PPC_WEAK_FUNC(sub_8225F7F0);
PPC_FUNC_IMPL(__imp__sub_8225F7F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F7F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f858
	if (ctx.cr6.eq) goto loc_8225F858;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f830
	if (ctx.cr6.eq) goto loc_8225F830;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F82C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f838
	goto loc_8225F838;
loc_8225F830:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F838:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28712
	ctx.r4.s64 = ctx.r11.s64 + -28712;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F844;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f858
	if (ctx.cr0.eq) goto loc_8225F858;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225f85c
	goto loc_8225F85C;
loc_8225F858:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225F85C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225f880
	if (ctx.cr6.eq) goto loc_8225F880;
	// bctrl 
	ctx.lr = 0x8225F87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f8dc
	goto loc_8225F8DC;
loc_8225F880:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225F888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8225F890;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225f8b4
	if (ctx.cr0.eq) goto loc_8225F8B4;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26744
	ctx.r10.s64 = ctx.r10.s64 + -26744;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8225f8b8
	goto loc_8225F8B8;
loc_8225F8B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F8B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f8dc
	if (ctx.cr6.eq) goto loc_8225F8DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F8DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225F8DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F8E4"))) PPC_WEAK_FUNC(sub_8225F8E4);
PPC_FUNC_IMPL(__imp__sub_8225F8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225F8E8"))) PPC_WEAK_FUNC(sub_8225F8E8);
PPC_FUNC_IMPL(__imp__sub_8225F8E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F8F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f950
	if (ctx.cr6.eq) goto loc_8225F950;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f928
	if (ctx.cr6.eq) goto loc_8225F928;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f930
	goto loc_8225F930;
loc_8225F928:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F930:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28640
	ctx.r4.s64 = ctx.r11.s64 + -28640;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F93C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f950
	if (ctx.cr0.eq) goto loc_8225F950;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225f954
	goto loc_8225F954;
loc_8225F950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225F954:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F978;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225F980"))) PPC_WEAK_FUNC(sub_8225F980);
PPC_FUNC_IMPL(__imp__sub_8225F980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225F988;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225f9e8
	if (ctx.cr6.eq) goto loc_8225F9E8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225f9c0
	if (ctx.cr6.eq) goto loc_8225F9C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225F9BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225f9c8
	goto loc_8225F9C8;
loc_8225F9C0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225F9C8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28640
	ctx.r4.s64 = ctx.r11.s64 + -28640;
	// bl 0x82fa2af0
	ctx.lr = 0x8225F9D4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225f9e8
	if (ctx.cr0.eq) goto loc_8225F9E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225f9ec
	goto loc_8225F9EC;
loc_8225F9E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225F9EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225fa10
	if (ctx.cr6.eq) goto loc_8225FA10;
	// bctrl 
	ctx.lr = 0x8225FA0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fa6c
	goto loc_8225FA6C;
loc_8225FA10:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225FA18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8225FA20;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225fa44
	if (ctx.cr0.eq) goto loc_8225FA44;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26732
	ctx.r10.s64 = ctx.r10.s64 + -26732;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x8225fa48
	goto loc_8225FA48;
loc_8225FA44:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225FA48:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fa6c
	if (ctx.cr6.eq) goto loc_8225FA6C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225FA6C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FA74"))) PPC_WEAK_FUNC(sub_8225FA74);
PPC_FUNC_IMPL(__imp__sub_8225FA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FA78"))) PPC_WEAK_FUNC(sub_8225FA78);
PPC_FUNC_IMPL(__imp__sub_8225FA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225FA80;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225fae0
	if (ctx.cr6.eq) goto loc_8225FAE0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fab8
	if (ctx.cr6.eq) goto loc_8225FAB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FAB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fac0
	goto loc_8225FAC0;
loc_8225FAB8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225FAC0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82fa2af0
	ctx.lr = 0x8225FACC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fae0
	if (ctx.cr0.eq) goto loc_8225FAE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8225fae4
	goto loc_8225FAE4;
loc_8225FAE0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225FAE4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FB18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FB20"))) PPC_WEAK_FUNC(sub_8225FB20);
PPC_FUNC_IMPL(__imp__sub_8225FB20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225FB28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225fb88
	if (ctx.cr6.eq) goto loc_8225FB88;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fb60
	if (ctx.cr6.eq) goto loc_8225FB60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FB5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fb68
	goto loc_8225FB68;
loc_8225FB60:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225FB68:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28572
	ctx.r4.s64 = ctx.r11.s64 + -28572;
	// bl 0x82fa2af0
	ctx.lr = 0x8225FB74;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fb88
	if (ctx.cr0.eq) goto loc_8225FB88;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225fb8c
	goto loc_8225FB8C;
loc_8225FB88:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225FB8C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225fbb0
	if (ctx.cr6.eq) goto loc_8225FBB0;
	// bctrl 
	ctx.lr = 0x8225FBAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fc1c
	goto loc_8225FC1C;
loc_8225FBB0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225FBB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x8225FBC0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8225fbf4
	if (ctx.cr0.eq) goto loc_8225FBF4;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-26720
	ctx.r10.s64 = ctx.r10.s64 + -26720;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// b 0x8225fbf8
	goto loc_8225FBF8;
loc_8225FBF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8225FBF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fc1c
	if (ctx.cr6.eq) goto loc_8225FC1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225FC1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FC24"))) PPC_WEAK_FUNC(sub_8225FC24);
PPC_FUNC_IMPL(__imp__sub_8225FC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FC28"))) PPC_WEAK_FUNC(sub_8225FC28);
PPC_FUNC_IMPL(__imp__sub_8225FC28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8225FC30;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addic. r27,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r27.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq 0x8225fcd4
	if (ctx.cr0.eq) goto loc_8225FCD4;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r28,0(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8225fc8c
	if (ctx.cr6.eq) goto loc_8225FC8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8225FC7C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fc8c
	if (ctx.cr0.eq) goto loc_8225FC8C;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8225FC8C:
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
	// addi r11,r27,8
	ctx.r11.s64 = ctx.r27.s64 + 8;
	// addi r10,r10,-26948
	ctx.r10.s64 = ctx.r10.s64 + -26948;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r26,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r26.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r26,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r26.u32);
	// beq cr6,0x8225fcc4
	if (ctx.cr6.eq) goto loc_8225FCC4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_8225FCC4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8225fcd4
	if (ctx.cr6.eq) goto loc_8225FCD4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x8225FCD4;
	sub_82241D18(ctx, base);
loc_8225FCD4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FCE0"))) PPC_WEAK_FUNC(sub_8225FCE0);
PPC_FUNC_IMPL(__imp__sub_8225FCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225FCE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225fd48
	if (ctx.cr6.eq) goto loc_8225FD48;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fd20
	if (ctx.cr6.eq) goto loc_8225FD20;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FD1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fd28
	goto loc_8225FD28;
loc_8225FD20:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225FD28:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// bl 0x82fa2af0
	ctx.lr = 0x8225FD34;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fd48
	if (ctx.cr0.eq) goto loc_8225FD48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8225fd4c
	goto loc_8225FD4C;
loc_8225FD48:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225FD4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,1036
	ctx.r5.s64 = 1036;
	// bl 0x82fa77c0
	ctx.lr = 0x8225FD58;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FD74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FD7C"))) PPC_WEAK_FUNC(sub_8225FD7C);
PPC_FUNC_IMPL(__imp__sub_8225FD7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FD80"))) PPC_WEAK_FUNC(sub_8225FD80);
PPC_FUNC_IMPL(__imp__sub_8225FD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225FD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225fde8
	if (ctx.cr6.eq) goto loc_8225FDE8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fdc0
	if (ctx.cr6.eq) goto loc_8225FDC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FDBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fdc8
	goto loc_8225FDC8;
loc_8225FDC0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225FDC8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28524
	ctx.r4.s64 = ctx.r11.s64 + -28524;
	// bl 0x82fa2af0
	ctx.lr = 0x8225FDD4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fde8
	if (ctx.cr0.eq) goto loc_8225FDE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225fdec
	goto loc_8225FDEC;
loc_8225FDE8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225FDEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225fe10
	if (ctx.cr6.eq) goto loc_8225FE10;
	// bctrl 
	ctx.lr = 0x8225FE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fe70
	goto loc_8225FE70;
loc_8225FE10:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225FE18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1040
	ctx.r3.s64 = 1040;
	// bl 0x82691500
	ctx.lr = 0x8225FE20;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225fe48
	if (ctx.cr0.eq) goto loc_8225FE48;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-26708
	ctx.r11.s64 = ctx.r11.s64 + -26708;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1036
	ctx.r5.s64 = 1036;
	// bl 0x82fa77c0
	ctx.lr = 0x8225FE44;
	sub_82FA77C0(ctx, base);
	// b 0x8225fe4c
	goto loc_8225FE4C;
loc_8225FE48:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225FE4C:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225fe70
	if (ctx.cr6.eq) goto loc_8225FE70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FE70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8225FE70:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FE78"))) PPC_WEAK_FUNC(sub_8225FE78);
PPC_FUNC_IMPL(__imp__sub_8225FE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225FE80;
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225fee0
	if (ctx.cr6.eq) goto loc_8225FEE0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225feb8
	if (ctx.cr6.eq) goto loc_8225FEB8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FEB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225fec0
	goto loc_8225FEC0;
loc_8225FEB8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225FEC0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82fa2af0
	ctx.lr = 0x8225FECC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225fee0
	if (ctx.cr0.eq) goto loc_8225FEE0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x8225fee4
	goto loc_8225FEE4;
loc_8225FEE0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_8225FEE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x8225FEF0;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FF0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8225FF14"))) PPC_WEAK_FUNC(sub_8225FF14);
PPC_FUNC_IMPL(__imp__sub_8225FF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8225FF18"))) PPC_WEAK_FUNC(sub_8225FF18);
PPC_FUNC_IMPL(__imp__sub_8225FF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8225FF20;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x8225ff80
	if (ctx.cr6.eq) goto loc_8225FF80;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8225ff58
	if (ctx.cr6.eq) goto loc_8225FF58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8225FF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8225ff60
	goto loc_8225FF60;
loc_8225FF58:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_8225FF60:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-28472
	ctx.r4.s64 = ctx.r11.s64 + -28472;
	// bl 0x82fa2af0
	ctx.lr = 0x8225FF6C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8225ff80
	if (ctx.cr0.eq) goto loc_8225FF80;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x8225ff84
	goto loc_8225FF84;
loc_8225FF80:
	// li r5,0
	ctx.r5.s64 = 0;
loc_8225FF84:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x8225ffa8
	if (ctx.cr6.eq) goto loc_8225FFA8;
	// bctrl 
	ctx.lr = 0x8225FFA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82260008
	goto loc_82260008;
loc_8225FFA8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x8225FFB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82691500
	ctx.lr = 0x8225FFB8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8225ffe0
	if (ctx.cr0.eq) goto loc_8225FFE0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-26696
	ctx.r11.s64 = ctx.r11.s64 + -26696;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x8225FFDC;
	sub_82FA77C0(ctx, base);
	// b 0x8225ffe4
	goto loc_8225FFE4;
loc_8225FFE0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8225FFE4:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260008
	if (ctx.cr6.eq) goto loc_82260008;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82260008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82260008:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260010"))) PPC_WEAK_FUNC(sub_82260010);
PPC_FUNC_IMPL(__imp__sub_82260010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28968
	ctx.r3.s64 = ctx.r11.s64 + -28968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226001C"))) PPC_WEAK_FUNC(sub_8226001C);
PPC_FUNC_IMPL(__imp__sub_8226001C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260020"))) PPC_WEAK_FUNC(sub_82260020);
PPC_FUNC_IMPL(__imp__sub_82260020) {
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
	// li r3,1004
	ctx.r3.s64 = 1004;
	// bl 0x82691500
	ctx.lr = 0x82260040;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8226006c
	if (ctx.cr0.eq) goto loc_8226006C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-26828
	ctx.r11.s64 = ctx.r11.s64 + -26828;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// bl 0x82fa77c0
	ctx.lr = 0x82260064;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82260070
	goto loc_82260070;
loc_8226006C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260070:
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

__attribute__((alias("__imp__sub_82260088"))) PPC_WEAK_FUNC(sub_82260088);
PPC_FUNC_IMPL(__imp__sub_82260088) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28936
	ctx.r3.s64 = ctx.r11.s64 + -28936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260094"))) PPC_WEAK_FUNC(sub_82260094);
PPC_FUNC_IMPL(__imp__sub_82260094) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260098"))) PPC_WEAK_FUNC(sub_82260098);
PPC_FUNC_IMPL(__imp__sub_82260098) {
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
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82691500
	ctx.lr = 0x822600B8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x822600e4
	if (ctx.cr0.eq) goto loc_822600E4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-26816
	ctx.r11.s64 = ctx.r11.s64 + -26816;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// bl 0x82fa77c0
	ctx.lr = 0x822600DC;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x822600e8
	goto loc_822600E8;
loc_822600E4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822600E8:
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

__attribute__((alias("__imp__sub_82260100"))) PPC_WEAK_FUNC(sub_82260100);
PPC_FUNC_IMPL(__imp__sub_82260100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28896
	ctx.r3.s64 = ctx.r11.s64 + -28896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8226010C"))) PPC_WEAK_FUNC(sub_8226010C);
PPC_FUNC_IMPL(__imp__sub_8226010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260110"))) PPC_WEAK_FUNC(sub_82260110);
PPC_FUNC_IMPL(__imp__sub_82260110) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8226012C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226014c
	if (ctx.cr0.eq) goto loc_8226014C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26804
	ctx.r11.s64 = ctx.r11.s64 + -26804;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82260150
	goto loc_82260150;
loc_8226014C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260150:
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

__attribute__((alias("__imp__sub_82260164"))) PPC_WEAK_FUNC(sub_82260164);
PPC_FUNC_IMPL(__imp__sub_82260164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260168"))) PPC_WEAK_FUNC(sub_82260168);
PPC_FUNC_IMPL(__imp__sub_82260168) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29020
	ctx.r3.s64 = ctx.r11.s64 + -29020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260174"))) PPC_WEAK_FUNC(sub_82260174);
PPC_FUNC_IMPL(__imp__sub_82260174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260178"))) PPC_WEAK_FUNC(sub_82260178);
PPC_FUNC_IMPL(__imp__sub_82260178) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82260194;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822601b4
	if (ctx.cr0.eq) goto loc_822601B4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26792
	ctx.r11.s64 = ctx.r11.s64 + -26792;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x822601b8
	goto loc_822601B8;
loc_822601B4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_822601B8:
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

__attribute__((alias("__imp__sub_822601CC"))) PPC_WEAK_FUNC(sub_822601CC);
PPC_FUNC_IMPL(__imp__sub_822601CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822601D0"))) PPC_WEAK_FUNC(sub_822601D0);
PPC_FUNC_IMPL(__imp__sub_822601D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x822601D8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// addic. r23,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r23.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq 0x82260320
	if (ctx.cr0.eq) goto loc_82260320;
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r28,0(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82260244
	if (ctx.cr6.eq) goto loc_82260244;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260234;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260244
	if (ctx.cr0.eq) goto loc_82260244;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_82260244:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x82260274
	if (ctx.cr6.eq) goto loc_82260274;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260264;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260274
	if (ctx.cr0.eq) goto loc_82260274;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_82260274:
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x822602a4
	if (ctx.cr6.eq) goto loc_822602A4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260294;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822602a4
	if (ctx.cr0.eq) goto loc_822602A4;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_822602A4:
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// beq cr6,0x822602d4
	if (ctx.cr6.eq) goto loc_822602D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x822602C4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822602d4
	if (ctx.cr0.eq) goto loc_822602D4;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_822602D4:
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// beq cr6,0x82260304
	if (ctx.cr6.eq) goto loc_82260304;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x822602F4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260304
	if (ctx.cr0.eq) goto loc_82260304;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
loc_82260304:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82260580
	ctx.lr = 0x82260320;
	sub_82260580(ctx, base);
loc_82260320:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226032C"))) PPC_WEAK_FUNC(sub_8226032C);
PPC_FUNC_IMPL(__imp__sub_8226032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260330"))) PPC_WEAK_FUNC(sub_82260330);
PPC_FUNC_IMPL(__imp__sub_82260330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82260338;
	__savegprlr_22(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// addic. r22,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r22.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x822604b8
	if (ctx.cr0.eq) goto loc_822604B8;
	// lwz r30,4(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x822603a8
	if (ctx.cr6.eq) goto loc_822603A8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260398;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822603a8
	if (ctx.cr0.eq) goto loc_822603A8;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
loc_822603A8:
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r29,0(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x822603d8
	if (ctx.cr6.eq) goto loc_822603D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x822603C8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822603d8
	if (ctx.cr0.eq) goto loc_822603D8;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
loc_822603D8:
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r29,0(r26)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// beq cr6,0x82260408
	if (ctx.cr6.eq) goto loc_82260408;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x822603F8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260408
	if (ctx.cr0.eq) goto loc_82260408;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
loc_82260408:
	// lwz r30,4(r25)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// beq cr6,0x82260438
	if (ctx.cr6.eq) goto loc_82260438;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260428;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260438
	if (ctx.cr0.eq) goto loc_82260438;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
loc_82260438:
	// lwz r30,4(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// lwz r29,0(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// beq cr6,0x82260468
	if (ctx.cr6.eq) goto loc_82260468;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260458;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260468
	if (ctx.cr0.eq) goto loc_82260468;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
loc_82260468:
	// lwz r30,4(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r29,0(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stw r31,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// beq cr6,0x82260498
	if (ctx.cr6.eq) goto loc_82260498;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260488;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260498
	if (ctx.cr0.eq) goto loc_82260498;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r29,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r29.u32);
loc_82260498:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82260768
	ctx.lr = 0x822604B8;
	sub_82260768(ctx, base);
loc_822604B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822604C4"))) PPC_WEAK_FUNC(sub_822604C4);
PPC_FUNC_IMPL(__imp__sub_822604C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822604C8"))) PPC_WEAK_FUNC(sub_822604C8);
PPC_FUNC_IMPL(__imp__sub_822604C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x822604D0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addic. r26,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r26.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// beq 0x82260570
	if (ctx.cr0.eq) goto loc_82260570;
	// lwz r30,4(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// beq cr6,0x82260530
	if (ctx.cr6.eq) goto loc_82260530;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260520;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260530
	if (ctx.cr0.eq) goto loc_82260530;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
loc_82260530:
	// lwz r30,4(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// beq cr6,0x82260560
	if (ctx.cr6.eq) goto loc_82260560;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260550;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260560
	if (ctx.cr0.eq) goto loc_82260560;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
loc_82260560:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x822609a8
	ctx.lr = 0x82260570;
	sub_822609A8(ctx, base);
loc_82260570:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226057C"))) PPC_WEAK_FUNC(sub_8226057C);
PPC_FUNC_IMPL(__imp__sub_8226057C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260580"))) PPC_WEAK_FUNC(sub_82260580);
PPC_FUNC_IMPL(__imp__sub_82260580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82260588;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-26924
	ctx.r11.s64 = ctx.r11.s64 + -26924;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r31.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// addi r30,r3,28
	ctx.r30.s64 = ctx.r3.s64 + 28;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822605fc
	if (ctx.cr6.eq) goto loc_822605FC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x822605DC;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822605fc
	if (ctx.cr0.eq) goto loc_822605FC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822605f4
	if (ctx.cr6.eq) goto loc_822605F4;
	// bl 0x82241d18
	ctx.lr = 0x822605F4;
	sub_82241D18(ctx, base);
loc_822605F4:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_822605FC:
	// stw r31,36(r28)
	PPC_STORE_U32(ctx.r28.u32 + 36, ctx.r31.u32);
	// addi r30,r28,36
	ctx.r30.s64 = ctx.r28.s64 + 36;
	// stw r31,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r31.u32);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// beq cr6,0x82260640
	if (ctx.cr6.eq) goto loc_82260640;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260620;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260640
	if (ctx.cr0.eq) goto loc_82260640;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260638
	if (ctx.cr6.eq) goto loc_82260638;
	// bl 0x82241d18
	ctx.lr = 0x82260638;
	sub_82241D18(ctx, base);
loc_82260638:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82260640:
	// stw r31,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r31.u32);
	// addi r30,r28,44
	ctx.r30.s64 = ctx.r28.s64 + 44;
	// stw r31,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r31.u32);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// beq cr6,0x82260684
	if (ctx.cr6.eq) goto loc_82260684;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260664;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260684
	if (ctx.cr0.eq) goto loc_82260684;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226067c
	if (ctx.cr6.eq) goto loc_8226067C;
	// bl 0x82241d18
	ctx.lr = 0x8226067C;
	sub_82241D18(ctx, base);
loc_8226067C:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82260684:
	// stw r31,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r31.u32);
	// addi r30,r28,52
	ctx.r30.s64 = ctx.r28.s64 + 52;
	// stw r31,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r31.u32);
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r29,4(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822606c8
	if (ctx.cr6.eq) goto loc_822606C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x822606A8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822606c8
	if (ctx.cr0.eq) goto loc_822606C8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822606c0
	if (ctx.cr6.eq) goto loc_822606C0;
	// bl 0x82241d18
	ctx.lr = 0x822606C0;
	sub_82241D18(ctx, base);
loc_822606C0:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_822606C8:
	// stw r31,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r31.u32);
	// addi r30,r28,60
	ctx.r30.s64 = ctx.r28.s64 + 60;
	// stw r31,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r31.u32);
	// lwz r31,4(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226070c
	if (ctx.cr6.eq) goto loc_8226070C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x822606EC;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226070c
	if (ctx.cr0.eq) goto loc_8226070C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260704
	if (ctx.cr6.eq) goto loc_82260704;
	// bl 0x82241d18
	ctx.lr = 0x82260704;
	sub_82241D18(ctx, base);
loc_82260704:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8226070C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226071c
	if (ctx.cr6.eq) goto loc_8226071C;
	// bl 0x82241d18
	ctx.lr = 0x8226071C;
	sub_82241D18(ctx, base);
loc_8226071C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226072c
	if (ctx.cr6.eq) goto loc_8226072C;
	// bl 0x82241d18
	ctx.lr = 0x8226072C;
	sub_82241D18(ctx, base);
loc_8226072C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226073c
	if (ctx.cr6.eq) goto loc_8226073C;
	// bl 0x82241d18
	ctx.lr = 0x8226073C;
	sub_82241D18(ctx, base);
loc_8226073C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226074c
	if (ctx.cr6.eq) goto loc_8226074C;
	// bl 0x82241d18
	ctx.lr = 0x8226074C;
	sub_82241D18(ctx, base);
loc_8226074C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226075c
	if (ctx.cr6.eq) goto loc_8226075C;
	// bl 0x82241d18
	ctx.lr = 0x8226075C;
	sub_82241D18(ctx, base);
loc_8226075C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260768"))) PPC_WEAK_FUNC(sub_82260768);
PPC_FUNC_IMPL(__imp__sub_82260768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82260770;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-26900
	ctx.r11.s64 = ctx.r11.s64 + -26900;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r31,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r31.u32);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// stw r31,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r31.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// lwz r29,4(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// addi r30,r3,32
	ctx.r30.s64 = ctx.r3.s64 + 32;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822607e8
	if (ctx.cr6.eq) goto loc_822607E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x822607C8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822607e8
	if (ctx.cr0.eq) goto loc_822607E8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822607e0
	if (ctx.cr6.eq) goto loc_822607E0;
	// bl 0x82241d18
	ctx.lr = 0x822607E0;
	sub_82241D18(ctx, base);
loc_822607E0:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_822607E8:
	// stw r31,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r31.u32);
	// addi r30,r28,40
	ctx.r30.s64 = ctx.r28.s64 + 40;
	// stw r31,44(r28)
	PPC_STORE_U32(ctx.r28.u32 + 44, ctx.r31.u32);
	// lwz r29,4(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// beq cr6,0x8226082c
	if (ctx.cr6.eq) goto loc_8226082C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x8226080C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226082c
	if (ctx.cr0.eq) goto loc_8226082C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260824
	if (ctx.cr6.eq) goto loc_82260824;
	// bl 0x82241d18
	ctx.lr = 0x82260824;
	sub_82241D18(ctx, base);
loc_82260824:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_8226082C:
	// stw r31,48(r28)
	PPC_STORE_U32(ctx.r28.u32 + 48, ctx.r31.u32);
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
	// stw r31,52(r28)
	PPC_STORE_U32(ctx.r28.u32 + 52, ctx.r31.u32);
	// lwz r29,4(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r27,0(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// beq cr6,0x82260870
	if (ctx.cr6.eq) goto loc_82260870;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260850;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260870
	if (ctx.cr0.eq) goto loc_82260870;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260868
	if (ctx.cr6.eq) goto loc_82260868;
	// bl 0x82241d18
	ctx.lr = 0x82260868;
	sub_82241D18(ctx, base);
loc_82260868:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82260870:
	// stw r31,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r31.u32);
	// addi r30,r28,56
	ctx.r30.s64 = ctx.r28.s64 + 56;
	// stw r31,60(r28)
	PPC_STORE_U32(ctx.r28.u32 + 60, ctx.r31.u32);
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r29,4(r23)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822608b4
	if (ctx.cr6.eq) goto loc_822608B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260894;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822608b4
	if (ctx.cr0.eq) goto loc_822608B4;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822608ac
	if (ctx.cr6.eq) goto loc_822608AC;
	// bl 0x82241d18
	ctx.lr = 0x822608AC;
	sub_82241D18(ctx, base);
loc_822608AC:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_822608B4:
	// stw r31,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r31.u32);
	// addi r30,r28,64
	ctx.r30.s64 = ctx.r28.s64 + 64;
	// stw r31,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r31.u32);
	// lwz r29,4(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r27,0(r22)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x822608f8
	if (ctx.cr6.eq) goto loc_822608F8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x822608D8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822608f8
	if (ctx.cr0.eq) goto loc_822608F8;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822608f0
	if (ctx.cr6.eq) goto loc_822608F0;
	// bl 0x82241d18
	ctx.lr = 0x822608F0;
	sub_82241D18(ctx, base);
loc_822608F0:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_822608F8:
	// stw r31,72(r28)
	PPC_STORE_U32(ctx.r28.u32 + 72, ctx.r31.u32);
	// addi r30,r28,72
	ctx.r30.s64 = ctx.r28.s64 + 72;
	// stw r31,76(r28)
	PPC_STORE_U32(ctx.r28.u32 + 76, ctx.r31.u32);
	// lwz r31,4(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8226093c
	if (ctx.cr6.eq) goto loc_8226093C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x8226091C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226093c
	if (ctx.cr0.eq) goto loc_8226093C;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260934
	if (ctx.cr6.eq) goto loc_82260934;
	// bl 0x82241d18
	ctx.lr = 0x82260934;
	sub_82241D18(ctx, base);
loc_82260934:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_8226093C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226094c
	if (ctx.cr6.eq) goto loc_8226094C;
	// bl 0x82241d18
	ctx.lr = 0x8226094C;
	sub_82241D18(ctx, base);
loc_8226094C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226095c
	if (ctx.cr6.eq) goto loc_8226095C;
	// bl 0x82241d18
	ctx.lr = 0x8226095C;
	sub_82241D18(ctx, base);
loc_8226095C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226096c
	if (ctx.cr6.eq) goto loc_8226096C;
	// bl 0x82241d18
	ctx.lr = 0x8226096C;
	sub_82241D18(ctx, base);
loc_8226096C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226097c
	if (ctx.cr6.eq) goto loc_8226097C;
	// bl 0x82241d18
	ctx.lr = 0x8226097C;
	sub_82241D18(ctx, base);
loc_8226097C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226098c
	if (ctx.cr6.eq) goto loc_8226098C;
	// bl 0x82241d18
	ctx.lr = 0x8226098C;
	sub_82241D18(ctx, base);
loc_8226098C:
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8226099c
	if (ctx.cr6.eq) goto loc_8226099C;
	// bl 0x82241d18
	ctx.lr = 0x8226099C;
	sub_82241D18(ctx, base);
loc_8226099C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822609A8"))) PPC_WEAK_FUNC(sub_822609A8);
PPC_FUNC_IMPL(__imp__sub_822609A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x822609B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-26876
	ctx.r11.s64 = ctx.r11.s64 + -26876;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// addi r31,r3,16
	ctx.r31.s64 = ctx.r3.s64 + 16;
	// lwz r28,4(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq cr6,0x82260a18
	if (ctx.cr6.eq) goto loc_82260A18;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x826abc90
	ctx.lr = 0x822609F8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260a18
	if (ctx.cr0.eq) goto loc_82260A18;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260a10
	if (ctx.cr6.eq) goto loc_82260A10;
	// bl 0x82241d18
	ctx.lr = 0x82260A10;
	sub_82241D18(ctx, base);
loc_82260A10:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82260A18:
	// stw r30,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r30.u32);
	// addi r31,r29,24
	ctx.r31.s64 = ctx.r29.s64 + 24;
	// stw r30,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r30.u32);
	// lwz r30,4(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// beq cr6,0x82260a5c
	if (ctx.cr6.eq) goto loc_82260A5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x82260A3C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82260a5c
	if (ctx.cr0.eq) goto loc_82260A5C;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260a54
	if (ctx.cr6.eq) goto loc_82260A54;
	// bl 0x82241d18
	ctx.lr = 0x82260A54;
	sub_82241D18(ctx, base);
loc_82260A54:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82260A5C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260a6c
	if (ctx.cr6.eq) goto loc_82260A6C;
	// bl 0x82241d18
	ctx.lr = 0x82260A6C;
	sub_82241D18(ctx, base);
loc_82260A6C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260a7c
	if (ctx.cr6.eq) goto loc_82260A7C;
	// bl 0x82241d18
	ctx.lr = 0x82260A7C;
	sub_82241D18(ctx, base);
loc_82260A7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260A88"))) PPC_WEAK_FUNC(sub_82260A88);
PPC_FUNC_IMPL(__imp__sub_82260A88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29068
	ctx.r3.s64 = ctx.r11.s64 + -29068;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260A94"))) PPC_WEAK_FUNC(sub_82260A94);
PPC_FUNC_IMPL(__imp__sub_82260A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260A98"))) PPC_WEAK_FUNC(sub_82260A98);
PPC_FUNC_IMPL(__imp__sub_82260A98) {
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
	// li r3,1068
	ctx.r3.s64 = 1068;
	// bl 0x82691500
	ctx.lr = 0x82260AB8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82260ae4
	if (ctx.cr0.eq) goto loc_82260AE4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-26780
	ctx.r11.s64 = ctx.r11.s64 + -26780;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1064
	ctx.r5.s64 = 1064;
	// bl 0x82fa77c0
	ctx.lr = 0x82260ADC;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82260ae8
	goto loc_82260AE8;
loc_82260AE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260AE8:
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

__attribute__((alias("__imp__sub_82260B00"))) PPC_WEAK_FUNC(sub_82260B00);
PPC_FUNC_IMPL(__imp__sub_82260B00) {
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
	// bne cr6,0x82260b38
	if (!ctx.cr6.eq) goto loc_82260B38;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82691500
	ctx.lr = 0x82260B2C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260b70
	if (ctx.cr0.eq) goto loc_82260B70;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82260B38:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,-26852
	ctx.r11.s64 = ctx.r11.s64 + -26852;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82fa77c0
	ctx.lr = 0x82260B54;
	sub_82FA77C0(ctx, base);
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
loc_82260B70:
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
	ctx.lr = 0x82260B8C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82260B8C"))) PPC_WEAK_FUNC(sub_82260B8C);
PPC_FUNC_IMPL(__imp__sub_82260B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260B90"))) PPC_WEAK_FUNC(sub_82260B90);
PPC_FUNC_IMPL(__imp__sub_82260B90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28416
	ctx.r3.s64 = ctx.r11.s64 + -28416;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260B9C"))) PPC_WEAK_FUNC(sub_82260B9C);
PPC_FUNC_IMPL(__imp__sub_82260B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260BA0"))) PPC_WEAK_FUNC(sub_82260BA0);
PPC_FUNC_IMPL(__imp__sub_82260BA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28872
	ctx.r3.s64 = ctx.r11.s64 + -28872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260BAC"))) PPC_WEAK_FUNC(sub_82260BAC);
PPC_FUNC_IMPL(__imp__sub_82260BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260BB0"))) PPC_WEAK_FUNC(sub_82260BB0);
PPC_FUNC_IMPL(__imp__sub_82260BB0) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82260BCC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260bec
	if (ctx.cr0.eq) goto loc_82260BEC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26768
	ctx.r11.s64 = ctx.r11.s64 + -26768;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82260bf0
	goto loc_82260BF0;
loc_82260BEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260BF0:
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

__attribute__((alias("__imp__sub_82260C04"))) PPC_WEAK_FUNC(sub_82260C04);
PPC_FUNC_IMPL(__imp__sub_82260C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260C08"))) PPC_WEAK_FUNC(sub_82260C08);
PPC_FUNC_IMPL(__imp__sub_82260C08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28792
	ctx.r3.s64 = ctx.r11.s64 + -28792;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260C14"))) PPC_WEAK_FUNC(sub_82260C14);
PPC_FUNC_IMPL(__imp__sub_82260C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260C18"))) PPC_WEAK_FUNC(sub_82260C18);
PPC_FUNC_IMPL(__imp__sub_82260C18) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82260C34;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260c54
	if (ctx.cr0.eq) goto loc_82260C54;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26756
	ctx.r11.s64 = ctx.r11.s64 + -26756;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82260c58
	goto loc_82260C58;
loc_82260C54:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260C58:
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

__attribute__((alias("__imp__sub_82260C6C"))) PPC_WEAK_FUNC(sub_82260C6C);
PPC_FUNC_IMPL(__imp__sub_82260C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260C70"))) PPC_WEAK_FUNC(sub_82260C70);
PPC_FUNC_IMPL(__imp__sub_82260C70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28712
	ctx.r3.s64 = ctx.r11.s64 + -28712;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260C7C"))) PPC_WEAK_FUNC(sub_82260C7C);
PPC_FUNC_IMPL(__imp__sub_82260C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260C80"))) PPC_WEAK_FUNC(sub_82260C80);
PPC_FUNC_IMPL(__imp__sub_82260C80) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82260C9C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260cbc
	if (ctx.cr0.eq) goto loc_82260CBC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26744
	ctx.r11.s64 = ctx.r11.s64 + -26744;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82260cc0
	goto loc_82260CC0;
loc_82260CBC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260CC0:
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

__attribute__((alias("__imp__sub_82260CD4"))) PPC_WEAK_FUNC(sub_82260CD4);
PPC_FUNC_IMPL(__imp__sub_82260CD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260CD8"))) PPC_WEAK_FUNC(sub_82260CD8);
PPC_FUNC_IMPL(__imp__sub_82260CD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28640
	ctx.r3.s64 = ctx.r11.s64 + -28640;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260CE4"))) PPC_WEAK_FUNC(sub_82260CE4);
PPC_FUNC_IMPL(__imp__sub_82260CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260CE8"))) PPC_WEAK_FUNC(sub_82260CE8);
PPC_FUNC_IMPL(__imp__sub_82260CE8) {
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
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82260D04;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260d24
	if (ctx.cr0.eq) goto loc_82260D24;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26732
	ctx.r11.s64 = ctx.r11.s64 + -26732;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82260d28
	goto loc_82260D28;
loc_82260D24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260D28:
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

__attribute__((alias("__imp__sub_82260D3C"))) PPC_WEAK_FUNC(sub_82260D3C);
PPC_FUNC_IMPL(__imp__sub_82260D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260D40"))) PPC_WEAK_FUNC(sub_82260D40);
PPC_FUNC_IMPL(__imp__sub_82260D40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28572
	ctx.r3.s64 = ctx.r11.s64 + -28572;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260D4C"))) PPC_WEAK_FUNC(sub_82260D4C);
PPC_FUNC_IMPL(__imp__sub_82260D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260D50"))) PPC_WEAK_FUNC(sub_82260D50);
PPC_FUNC_IMPL(__imp__sub_82260D50) {
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
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x82260D6C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82260d9c
	if (ctx.cr0.eq) goto loc_82260D9C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r11,r11,-26720
	ctx.r11.s64 = ctx.r11.s64 + -26720;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// b 0x82260da0
	goto loc_82260DA0;
loc_82260D9C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260DA0:
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

__attribute__((alias("__imp__sub_82260DB4"))) PPC_WEAK_FUNC(sub_82260DB4);
PPC_FUNC_IMPL(__imp__sub_82260DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260DB8"))) PPC_WEAK_FUNC(sub_82260DB8);
PPC_FUNC_IMPL(__imp__sub_82260DB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28524
	ctx.r3.s64 = ctx.r11.s64 + -28524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260DC4"))) PPC_WEAK_FUNC(sub_82260DC4);
PPC_FUNC_IMPL(__imp__sub_82260DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260DC8"))) PPC_WEAK_FUNC(sub_82260DC8);
PPC_FUNC_IMPL(__imp__sub_82260DC8) {
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
	// li r3,1040
	ctx.r3.s64 = 1040;
	// bl 0x82691500
	ctx.lr = 0x82260DE8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82260e14
	if (ctx.cr0.eq) goto loc_82260E14;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-26708
	ctx.r11.s64 = ctx.r11.s64 + -26708;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,1036
	ctx.r5.s64 = 1036;
	// bl 0x82fa77c0
	ctx.lr = 0x82260E0C;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82260e18
	goto loc_82260E18;
loc_82260E14:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260E18:
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

__attribute__((alias("__imp__sub_82260E30"))) PPC_WEAK_FUNC(sub_82260E30);
PPC_FUNC_IMPL(__imp__sub_82260E30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-28472
	ctx.r3.s64 = ctx.r11.s64 + -28472;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82260E3C"))) PPC_WEAK_FUNC(sub_82260E3C);
PPC_FUNC_IMPL(__imp__sub_82260E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260E40"))) PPC_WEAK_FUNC(sub_82260E40);
PPC_FUNC_IMPL(__imp__sub_82260E40) {
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
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82691500
	ctx.lr = 0x82260E60;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82260e8c
	if (ctx.cr0.eq) goto loc_82260E8C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,-26696
	ctx.r11.s64 = ctx.r11.s64 + -26696;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// bl 0x82fa77c0
	ctx.lr = 0x82260E84;
	sub_82FA77C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82260e90
	goto loc_82260E90;
loc_82260E8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82260E90:
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

__attribute__((alias("__imp__sub_82260EA8"))) PPC_WEAK_FUNC(sub_82260EA8);
PPC_FUNC_IMPL(__imp__sub_82260EA8) {
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
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260ed4
	if (ctx.cr6.eq) goto loc_82260ED4;
	// bl 0x82241d18
	ctx.lr = 0x82260ED4;
	sub_82241D18(ctx, base);
loc_82260ED4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260ee4
	if (ctx.cr6.eq) goto loc_82260EE4;
	// bl 0x82241d18
	ctx.lr = 0x82260EE4;
	sub_82241D18(ctx, base);
loc_82260EE4:
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260ef4
	if (ctx.cr6.eq) goto loc_82260EF4;
	// bl 0x82241d18
	ctx.lr = 0x82260EF4;
	sub_82241D18(ctx, base);
loc_82260EF4:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260f04
	if (ctx.cr6.eq) goto loc_82260F04;
	// bl 0x82241d18
	ctx.lr = 0x82260F04;
	sub_82241D18(ctx, base);
loc_82260F04:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260f14
	if (ctx.cr6.eq) goto loc_82260F14;
	// bl 0x82241d18
	ctx.lr = 0x82260F14;
	sub_82241D18(ctx, base);
loc_82260F14:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-29912
	ctx.r11.s64 = ctx.r11.s64 + -29912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82260f30
	if (ctx.cr0.eq) goto loc_82260F30;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82260F30;
	sub_82691540(ctx, base);
loc_82260F30:
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

__attribute__((alias("__imp__sub_82260F4C"))) PPC_WEAK_FUNC(sub_82260F4C);
PPC_FUNC_IMPL(__imp__sub_82260F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260F50"))) PPC_WEAK_FUNC(sub_82260F50);
PPC_FUNC_IMPL(__imp__sub_82260F50) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260f7c
	if (ctx.cr6.eq) goto loc_82260F7C;
	// bl 0x82241d18
	ctx.lr = 0x82260F7C;
	sub_82241D18(ctx, base);
loc_82260F7C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82260f8c
	if (ctx.cr6.eq) goto loc_82260F8C;
	// bl 0x82241d18
	ctx.lr = 0x82260F8C;
	sub_82241D18(ctx, base);
loc_82260F8C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// clrlwi. r10,r30,31
	ctx.r10.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-29912
	ctx.r11.s64 = ctx.r11.s64 + -29912;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x82260fa8
	if (ctx.cr0.eq) goto loc_82260FA8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82260FA8;
	sub_82691540(ctx, base);
loc_82260FA8:
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

__attribute__((alias("__imp__sub_82260FC4"))) PPC_WEAK_FUNC(sub_82260FC4);
PPC_FUNC_IMPL(__imp__sub_82260FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82260FC8"))) PPC_WEAK_FUNC(sub_82260FC8);
PPC_FUNC_IMPL(__imp__sub_82260FC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x8225c6b0
	sub_8225C6B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82260FD0"))) PPC_WEAK_FUNC(sub_82260FD0);
PPC_FUNC_IMPL(__imp__sub_82260FD0) {
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
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lwz r5,24(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 4, ctx.xer);
	// bgt cr6,0x82261020
	if (ctx.cr6.gt) goto loc_82261020;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x8226100C;
	sub_82FA77C0(ctx, base);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// b 0x82261030
	goto loc_82261030;
loc_82261020:
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82261030;
	sub_82FA77C0(ctx, base);
loc_82261030:
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

__attribute__((alias("__imp__sub_82261048"))) PPC_WEAK_FUNC(sub_82261048);
PPC_FUNC_IMPL(__imp__sub_82261048) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82261050;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r24,0
	ctx.r24.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// b 0x8226108c
	goto loc_8226108C;
loc_82261078:
	// bge cr6,0x82261088
	if (!ctx.cr6.lt) goto loc_82261088;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// b 0x8226108c
	goto loc_8226108C;
loc_82261088:
	// li r26,1
	ctx.r26.s64 = 1;
loc_8226108C:
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8291fee8
	ctx.lr = 0x82261098;
	sub_8291FEE8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// extsb. r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82261078
	if (!ctx.cr0.eq) goto loc_82261078;
	// bge cr6,0x822610b4
	if (!ctx.cr6.lt) goto loc_822610B4;
	// li r28,1
	ctx.r28.s64 = 1;
	// stbx r24,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r24.u8);
loc_822610B4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822610dc
	if (!ctx.cr0.eq) goto loc_822610DC;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822610dc
	if (ctx.cr0.eq) goto loc_822610DC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x822610d4
	if (ctx.cr6.eq) goto loc_822610D4;
	// add r11,r29,r27
	ctx.r11.u64 = ctx.r29.u64 + ctx.r27.u64;
	// stb r24,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r24.u8);
loc_822610D4:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x822610e0
	goto loc_822610E0;
loc_822610DC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_822610E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_822610E8"))) PPC_WEAK_FUNC(sub_822610E8);
PPC_FUNC_IMPL(__imp__sub_822610E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x822610F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// b 0x82261114
	goto loc_82261114;
loc_82261108:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82261148
	if (ctx.cr6.eq) goto loc_82261148;
	// lbzu r30,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r30.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
loc_82261114:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8224e2d0
	ctx.lr = 0x82261124;
	sub_8224E2D0(ctx, base);
	// extsb r30,r30
	ctx.r30.s64 = ctx.r30.s8;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fca8
	ctx.lr = 0x82261138;
	sub_8291FCA8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82261108
	if (!ctx.cr0.eq) goto loc_82261108;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x8226114c
	goto loc_8226114C;
loc_82261148:
	// li r3,1
	ctx.r3.s64 = 1;
loc_8226114C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82261154"))) PPC_WEAK_FUNC(sub_82261154);
PPC_FUNC_IMPL(__imp__sub_82261154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261158"))) PPC_WEAK_FUNC(sub_82261158);
PPC_FUNC_IMPL(__imp__sub_82261158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82261160;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x8226117C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8226124c
	if (ctx.cr0.eq) goto loc_8226124C;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r29.u8);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r29,53(r11)
	PPC_STORE_U8(ctx.r11.u32 + 53, ctx.r29.u8);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x822611BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82261234
	if (ctx.cr0.eq) goto loc_82261234;
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// addi r11,r31,52
	ctx.r11.s64 = ctx.r31.s64 + 52;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stb r29,73(r11)
	PPC_STORE_U8(ctx.r11.u32 + 73, ctx.r29.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// beq cr6,0x82261224
	if (ctx.cr6.eq) goto loc_82261224;
	// bl 0x82241d18
	ctx.lr = 0x82261224;
	sub_82241D18(ctx, base);
loc_82261224:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82261234:
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
	ctx.lr = 0x8226124C;
	sub_82240040(ctx, base);
loc_8226124C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x82261264;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82261264"))) PPC_WEAK_FUNC(sub_82261264);
PPC_FUNC_IMPL(__imp__sub_82261264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261268"))) PPC_WEAK_FUNC(sub_82261268);
PPC_FUNC_IMPL(__imp__sub_82261268) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82261270;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82556540
	ctx.lr = 0x82261280;
	sub_82556540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r3,64
	ctx.r3.s64 = 64;
	// addi r11,r11,-26640
	ctx.r11.s64 = ctx.r11.s64 + -26640;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x82261294;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x822612a8
	if (ctx.cr0.eq) goto loc_822612A8;
	// bl 0x82261158
	ctx.lr = 0x822612A4;
	sub_82261158(ctx, base);
	// b 0x822612ac
	goto loc_822612AC;
loc_822612A8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_822612AC:
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82691500
	ctx.lr = 0x822612B8;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x822612fc
	if (ctx.cr0.eq) goto loc_822612FC;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82261158
	ctx.lr = 0x822612C8;
	sub_82261158(ctx, base);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r29.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r29,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// stb r29,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r29.u8);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stb r29,76(r30)
	PPC_STORE_U8(ctx.r30.u32 + 76, ctx.r29.u8);
	// stb r29,77(r30)
	PPC_STORE_U8(ctx.r30.u32 + 77, ctx.r29.u8);
	// stw r29,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r29.u32);
	// stb r29,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r29.u8);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
	// b 0x82261300
	goto loc_82261300;
loc_822612FC:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82261300:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r10,72(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lwz r10,76(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 76);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lwz r11,80(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// lfs f13,84(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,68(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 68, temp.u32);
	// lfs f13,88(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// stb r29,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r29.u8);
	// stfs f13,72(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stfs f0,80(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82261354"))) PPC_WEAK_FUNC(sub_82261354);
PPC_FUNC_IMPL(__imp__sub_82261354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261358"))) PPC_WEAK_FUNC(sub_82261358);
PPC_FUNC_IMPL(__imp__sub_82261358) {
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
	// bl 0x822613a8
	ctx.lr = 0x82261378;
	sub_822613A8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261388
	if (ctx.cr0.eq) goto loc_82261388;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82261388;
	sub_82691540(ctx, base);
loc_82261388:
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

__attribute__((alias("__imp__sub_822613A4"))) PPC_WEAK_FUNC(sub_822613A4);
PPC_FUNC_IMPL(__imp__sub_822613A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822613A8"))) PPC_WEAK_FUNC(sub_822613A8);
PPC_FUNC_IMPL(__imp__sub_822613A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x822613B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lwz r30,40(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-26640
	ctx.r11.s64 = ctx.r11.s64 + -26640;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x822613e8
	if (ctx.cr6.eq) goto loc_822613E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261450
	ctx.lr = 0x822613DC;
	sub_82261450(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x822613E4;
	sub_82691540(ctx, base);
	// stw r29,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r29.u32);
loc_822613E8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261428
	if (ctx.cr6.eq) goto loc_82261428;
	// bl 0x82556928
	ctx.lr = 0x822613F8;
	sub_82556928(ctx, base);
	// lwz r30,44(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82261424
	if (ctx.cr6.eq) goto loc_82261424;
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261414
	if (ctx.cr6.eq) goto loc_82261414;
	// bl 0x82241d18
	ctx.lr = 0x82261414;
	sub_82241D18(ctx, base);
loc_82261414:
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// bl 0x82261450
	ctx.lr = 0x8226141C;
	sub_82261450(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82261424;
	sub_82691540(ctx, base);
loc_82261424:
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
loc_82261428:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r11,r11,29092
	ctx.r11.s64 = ctx.r11.s64 + 29092;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x822402c8
	ctx.lr = 0x82261444;
	sub_822402C8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226144C"))) PPC_WEAK_FUNC(sub_8226144C);
PPC_FUNC_IMPL(__imp__sub_8226144C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261450"))) PPC_WEAK_FUNC(sub_82261450);
PPC_FUNC_IMPL(__imp__sub_82261450) {
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
	// lwz r3,56(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261474
	if (ctx.cr6.eq) goto loc_82261474;
	// bl 0x82241d18
	ctx.lr = 0x82261474;
	sub_82241D18(ctx, base);
loc_82261474:
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82261cc8
	ctx.lr = 0x82261488;
	sub_82261CC8(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82691540
	ctx.lr = 0x82261490;
	sub_82691540(ctx, base);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82261c20
	ctx.lr = 0x822614A4;
	sub_82261C20(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82691540
	ctx.lr = 0x822614AC;
	sub_82691540(ctx, base);
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

__attribute__((alias("__imp__sub_822614C0"))) PPC_WEAK_FUNC(sub_822614C0);
PPC_FUNC_IMPL(__imp__sub_822614C0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82261500
	if (!ctx.cr6.eq) goto loc_82261500;
	// bl 0x8254abe0
	ctx.lr = 0x822614FC;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82261500:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c1b0
	ctx.lr = 0x82261510;
	sub_8254C1B0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x8226151C;
	sub_824261E8(ctx, base);
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822615b8
	if (!ctx.cr0.eq) goto loc_822615B8;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82261560
	if (ctx.cr6.eq) goto loc_82261560;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261554
	if (ctx.cr6.eq) goto loc_82261554;
	// bl 0x8225a060
	ctx.lr = 0x82261548;
	sub_8225A060(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82261558
	goto loc_82261558;
loc_82261554:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82261558:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822615b8
	if (!ctx.cr0.eq) goto loc_822615B8;
loc_82261560:
	// lwz r3,44(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82261588
	if (ctx.cr0.eq) goto loc_82261588;
	// bl 0x825566b8
	ctx.lr = 0x82261574;
	sub_825566B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x822615b8
	if (!ctx.cr6.eq) goto loc_822615B8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261ac0
	ctx.lr = 0x82261584;
	sub_82261AC0(ctx, base);
	// b 0x822615b8
	goto loc_822615B8;
loc_82261588:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x822615b0
	if (ctx.cr6.eq) goto loc_822615B0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x82261598;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822615b0
	if (ctx.cr0.eq) goto loc_822615B0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x822615f8
	ctx.lr = 0x822615AC;
	sub_822615F8(ctx, base);
	// b 0x822615b8
	goto loc_822615B8;
loc_822615B0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261930
	ctx.lr = 0x822615B8;
	sub_82261930(ctx, base);
loc_822615B8:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822615c8
	if (ctx.cr6.eq) goto loc_822615C8;
	// bl 0x82241d18
	ctx.lr = 0x822615C8;
	sub_82241D18(ctx, base);
loc_822615C8:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x822615d8
	if (ctx.cr6.eq) goto loc_822615D8;
	// bl 0x82241d18
	ctx.lr = 0x822615D8;
	sub_82241D18(ctx, base);
loc_822615D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_822615F4"))) PPC_WEAK_FUNC(sub_822615F4);
PPC_FUNC_IMPL(__imp__sub_822615F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_822615F8"))) PPC_WEAK_FUNC(sub_822615F8);
PPC_FUNC_IMPL(__imp__sub_822615F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82261600;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r11,31080(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82261634
	if (!ctx.cr6.eq) goto loc_82261634;
	// bl 0x8254abe0
	ctx.lr = 0x82261630;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82261634:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8254c1b0
	ctx.lr = 0x82261644;
	sub_8254C1B0(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x824261e8
	ctx.lr = 0x82261650;
	sub_824261E8(ctx, base);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stb r27,81(r29)
	PPC_STORE_U8(ctx.r29.u32 + 81, ctx.r27.u8);
	// bl 0x8226c3f0
	ctx.lr = 0x82261668;
	sub_8226C3F0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828e3618
	ctx.lr = 0x8226167C;
	sub_828E3618(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261900
	if (ctx.cr0.eq) goto loc_82261900;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828d42b0
	ctx.lr = 0x8226168C;
	sub_828D42B0(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bne cr6,0x822616b4
	if (!ctx.cr6.eq) goto loc_822616B4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8225c318
	ctx.lr = 0x8226169C;
	sub_8225C318(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822616b4
	if (ctx.cr0.eq) goto loc_822616B4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,56(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// bl 0x8225ca38
	ctx.lr = 0x822616B0;
	sub_8225CA38(ctx, base);
	// b 0x82261900
	goto loc_82261900;
loc_822616B4:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x828d4218
	ctx.lr = 0x822616BC;
	sub_828D4218(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bne cr6,0x82261900
	if (!ctx.cr6.eq) goto loc_82261900;
	// lfs f0,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,76(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 76, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82261900
	if (ctx.cr6.lt) goto loc_82261900;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x822616F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82261900
	if (!ctx.cr0.eq) goto loc_82261900;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f80d0
	ctx.lr = 0x82261710;
	sub_828F80D0(ctx, base);
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x828e6c78
	ctx.lr = 0x82261718;
	sub_828E6C78(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261750
	if (ctx.cr0.eq) goto loc_82261750;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r29,3
	ctx.r29.s64 = 3;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f80d0
	ctx.lr = 0x82261738;
	sub_828F80D0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82914fa0
	ctx.lr = 0x82261740;
	sub_82914FA0(ctx, base);
	// bl 0x828e70a8
	ctx.lr = 0x82261744;
	sub_828E70A8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// bne 0x82261754
	if (!ctx.cr0.eq) goto loc_82261754;
loc_82261750:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82261754:
	// rlwinm. r10,r29,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8226176c
	if (ctx.cr0.eq) goto loc_8226176C;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// rlwinm r29,r29,0,31,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// bl 0x828e6d08
	ctx.lr = 0x8226176C;
	sub_828E6D08(ctx, base);
loc_8226176C:
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226177c
	if (ctx.cr0.eq) goto loc_8226177C;
	// addi r3,r1,92
	ctx.r3.s64 = ctx.r1.s64 + 92;
	// bl 0x828e6d08
	ctx.lr = 0x8226177C;
	sub_828E6D08(ctx, base);
loc_8226177C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x822618f0
	if (ctx.cr0.eq) goto loc_822618F0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f80d0
	ctx.lr = 0x82261798;
	sub_828F80D0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82914fa0
	ctx.lr = 0x822617A0;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x828e70c0
	ctx.lr = 0x822617AC;
	sub_828E70C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x828e6d08
	ctx.lr = 0x822617B4;
	sub_828E6D08(ctx, base);
	// b 0x82261828
	goto loc_82261828;
loc_822617B8:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x828d6d98
	ctx.lr = 0x822617C8;
	sub_828D6D98(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828e9780
	ctx.lr = 0x822617D4;
	sub_828E9780(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226181c
	if (!ctx.cr0.eq) goto loc_8226181C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x828d6db8
	ctx.lr = 0x822617E8;
	sub_828D6DB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828e9788
	ctx.lr = 0x822617F4;
	sub_828E9788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8226181c
	if (!ctx.cr0.eq) goto loc_8226181C;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r28,0(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x828d6da8
	ctx.lr = 0x82261808;
	sub_828D6DA8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x828e9778
	ctx.lr = 0x82261814;
	sub_828E9778(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8226187c
	if (ctx.cr0.eq) goto loc_8226187C;
loc_8226181C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82261828:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828f80d0
	ctx.lr = 0x8226183C;
	sub_828F80D0(ctx, base);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82914fa0
	ctx.lr = 0x82261844;
	sub_82914FA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x828e70d0
	ctx.lr = 0x82261850;
	sub_828E70D0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r29,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x828e6d08
	ctx.lr = 0x82261870;
	sub_828E6D08(ctx, base);
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x822617b8
	if (!ctx.cr0.eq) goto loc_822617B8;
	// b 0x822618f0
	goto loc_822618F0;
loc_8226187C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// addi r3,r11,52
	ctx.r3.s64 = ctx.r11.s64 + 52;
	// bl 0x82550238
	ctx.lr = 0x82261898;
	sub_82550238(ctx, base);
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r29,40(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,52(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82556928
	ctx.lr = 0x822618AC;
	sub_82556928(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// stb r27,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r27.u8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stb r27,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r27.u8);
	// stb r26,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r26.u8);
	// stw r26,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r26.u32);
	// beq cr6,0x822618dc
	if (ctx.cr6.eq) goto loc_822618DC;
	// stb r27,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r27.u8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82552700
	ctx.lr = 0x822618D8;
	sub_82552700(ctx, base);
	// b 0x822618e0
	goto loc_822618E0;
loc_822618DC:
	// stb r26,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r26.u8);
loc_822618E0:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
loc_822618F0:
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261900
	if (ctx.cr0.eq) goto loc_82261900;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82261ac0
	ctx.lr = 0x82261900;
	sub_82261AC0(ctx, base);
loc_82261900:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261910
	if (ctx.cr6.eq) goto loc_82261910;
	// bl 0x82241d18
	ctx.lr = 0x82261910;
	sub_82241D18(ctx, base);
loc_82261910:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261920
	if (ctx.cr6.eq) goto loc_82261920;
	// bl 0x82241d18
	ctx.lr = 0x82261920;
	sub_82241D18(ctx, base);
loc_82261920:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8226192C"))) PPC_WEAK_FUNC(sub_8226192C);
PPC_FUNC_IMPL(__imp__sub_8226192C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82261930"))) PPC_WEAK_FUNC(sub_82261930);
PPC_FUNC_IMPL(__imp__sub_82261930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82261938;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,21296
	ctx.r31.s64 = ctx.r11.s64 + 21296;
	// lwz r29,-176(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -176);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82261a24
	if (ctx.cr6.eq) goto loc_82261A24;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82261978
	if (!ctx.cr6.eq) goto loc_82261978;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82920258
	ctx.lr = 0x82261968;
	sub_82920258(ctx, base);
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82261a24
	if (ctx.cr0.eq) goto loc_82261A24;
loc_82261978:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82261a54
	if (ctx.cr6.eq) goto loc_82261A54;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// bl 0x828ebc90
	ctx.lr = 0x82261990;
	sub_828EBC90(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// bl 0x825524e8
	ctx.lr = 0x8226199C;
	sub_825524E8(ctx, base);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r11.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r29,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r29.u32);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,40(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r27,52(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82556928
	ctx.lr = 0x822619DC;
	sub_82556928(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// stb r29,77(r31)
	PPC_STORE_U8(ctx.r31.u32 + 77, ctx.r29.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stb r11,84(r31)
	PPC_STORE_U8(ctx.r31.u32 + 84, ctx.r11.u8);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
	// beq cr6,0x82261a10
	if (ctx.cr6.eq) goto loc_82261A10;
	// stb r11,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r11.u8);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// bl 0x82552700
	ctx.lr = 0x82261A0C;
	sub_82552700(ctx, base);
	// b 0x82261a14
	goto loc_82261A14;
loc_82261A10:
	// stb r29,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r29.u8);
loc_82261A14:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
	// b 0x82261ab8
	goto loc_82261AB8;
loc_82261A24:
	// lbz r11,-100(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -100);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82261ab8
	if (!ctx.cr0.eq) goto loc_82261AB8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82261ab8
	if (ctx.cr6.eq) goto loc_82261AB8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82261ab8
	if (!ctx.cr6.eq) goto loc_82261AB8;
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82261a60
	if (!ctx.cr6.eq) goto loc_82261A60;
loc_82261A54:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,64(r30)
	PPC_STORE_U8(ctx.r30.u32 + 64, ctx.r11.u8);
	// b 0x82261ab8
	goto loc_82261AB8;
loc_82261A60:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82261aa4
	if (!ctx.cr6.eq) goto loc_82261AA4;
	// bl 0x82513ff0
	ctx.lr = 0x82261A6C;
	sub_82513FF0(ctx, base);
loc_82261A6C:
	// cmplwi cr6,r29,255
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 255, ctx.xer);
	// bne cr6,0x82261a7c
	if (!ctx.cr6.eq) goto loc_82261A7C;
	// lwz r3,-176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -176);
	// b 0x82261a84
	goto loc_82261A84;
loc_82261A7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829213a0
	ctx.lr = 0x82261A84;
	sub_829213A0(ctx, base);
loc_82261A84:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82261a9c
	if (!ctx.cr6.eq) goto loc_82261A9C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// blt cr6,0x82261a6c
	if (ctx.cr6.lt) goto loc_82261A6C;
	// b 0x82261aac
	goto loc_82261AAC;
loc_82261A9C:
	// bl 0x825c6c00
	ctx.lr = 0x82261AA0;
	sub_825C6C00(ctx, base);
	// b 0x82261aac
	goto loc_82261AAC;
loc_82261AA4:
	// bl 0x82513ff0
	ctx.lr = 0x82261AA8;
	sub_82513FF0(ctx, base);
	// bl 0x82548600
	ctx.lr = 0x82261AAC;
	sub_82548600(ctx, base);
loc_82261AAC:
	// lwz r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
loc_82261AB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82261AC0"))) PPC_WEAK_FUNC(sub_82261AC0);
PPC_FUNC_IMPL(__imp__sub_82261AC0) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lfs f12,68(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	ctx.f12.f64 = double(temp.f32);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lfs f0,72(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	ctx.f0.f64 = double(temp.f32);
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,8
	ctx.r5.s64 = 8;
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-2340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stfs f0,76(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 76, temp.u32);
	// oris r11,r11,16256
	ctx.r11.u64 = ctx.r11.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lwz r11,31080(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 31080);
	// fmadds f0,f11,f0,f12
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 + ctx.f12.f64));
	// stfs f0,80(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 80, temp.u32);
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// stw r5,44(r10)
	PPC_STORE_U32(ctx.r10.u32 + 44, ctx.r5.u32);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82261b6c
	if (!ctx.cr6.eq) goto loc_82261B6C;
	// bl 0x8254abe0
	ctx.lr = 0x82261B68;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82261B6C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c1b0
	ctx.lr = 0x82261B7C;
	sub_8254C1B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82261bb0
	if (ctx.cr6.eq) goto loc_82261BB0;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r31,40(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82261BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r30,16
	ctx.r3.s64 = ctx.r30.s64 + 16;
	// bl 0x82552700
	ctx.lr = 0x82261BB0;
	sub_82552700(ctx, base);
loc_82261BB0:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82261bc0
	if (ctx.cr6.eq) goto loc_82261BC0;
	// bl 0x82241d18
	ctx.lr = 0x82261BC0;
	sub_82241D18(ctx, base);
loc_82261BC0:
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

__attribute__((alias("__imp__sub_82261BD8"))) PPC_WEAK_FUNC(sub_82261BD8);
PPC_FUNC_IMPL(__imp__sub_82261BD8) {
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
	// li r3,84
	ctx.r3.s64 = 84;
	// bl 0x82691500
	ctx.lr = 0x82261BF4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82261c08
	if (ctx.cr0.eq) goto loc_82261C08;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82261268
	ctx.lr = 0x82261C04;
	sub_82261268(ctx, base);
	// b 0x82261c0c
	goto loc_82261C0C;
loc_82261C08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82261C0C:
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

__attribute__((alias("__imp__sub_82261C20"))) PPC_WEAK_FUNC(sub_82261C20);
PPC_FUNC_IMPL(__imp__sub_82261C20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82261C28;
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
	// bne cr6,0x82261cb0
	if (!ctx.cr6.eq) goto loc_82261CB0;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82261cb0
	if (!ctx.cr6.eq) goto loc_82261CB0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82262510
	ctx.lr = 0x82261C60;
	sub_82262510(ctx, base);
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82261cbc
	goto loc_82261CBC;
loc_82261C90:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8289db58
	ctx.lr = 0x82261C9C;
	sub_8289DB58(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82261d70
	ctx.lr = 0x82261CAC;
	sub_82261D70(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82261CB0:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82261c90
	if (!ctx.cr6.eq) goto loc_82261C90;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_82261CBC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82261CC8"))) PPC_WEAK_FUNC(sub_82261CC8);
PPC_FUNC_IMPL(__imp__sub_82261CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82261CD0;
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
	// bne cr6,0x82261d58
	if (!ctx.cr6.eq) goto loc_82261D58;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82261d58
	if (!ctx.cr6.eq) goto loc_82261D58;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82262588
	ctx.lr = 0x82261D08;
	sub_82262588(ctx, base);
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
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82261d64
	goto loc_82261D64;
loc_82261D38:
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f95e18
	ctx.lr = 0x82261D44;
	sub_82F95E18(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82262140
	ctx.lr = 0x82261D54;
	sub_82262140(ctx, base);
	// lwz r5,164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82261D58:
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82261d38
	if (!ctx.cr6.eq) goto loc_82261D38;
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
loc_82261D64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82261D70"))) PPC_WEAK_FUNC(sub_82261D70);
PPC_FUNC_IMPL(__imp__sub_82261D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82261D78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,53(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 53);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82261da0
	if (ctx.cr0.eq) goto loc_82261DA0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x82261DA0;
	sub_82FA0680(ctx, base);
loc_82261DA0:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x8289db58
	ctx.lr = 0x82261DAC;
	sub_8289DB58(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x82261dc8
	if (ctx.cr0.eq) goto loc_82261DC8;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x82261dec
	goto loc_82261DEC;
loc_82261DC8:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,53(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 53);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82261de0
	if (ctx.cr0.eq) goto loc_82261DE0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x82261dec
	goto loc_82261DEC;
loc_82261DE0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261ec4
	if (!ctx.cr6.eq) goto loc_82261EC4;
loc_82261DEC:
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82261e00
	if (!ctx.cr0.eq) goto loc_82261E00;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82261E00:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261e18
	if (!ctx.cr6.eq) goto loc_82261E18;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82261e30
	goto loc_82261E30;
loc_82261E18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261e2c
	if (!ctx.cr6.eq) goto loc_82261E2C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82261e30
	goto loc_82261E30;
loc_82261E2C:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82261E30:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261e78
	if (!ctx.cr6.eq) goto loc_82261E78;
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82261e54
	if (ctx.cr0.eq) goto loc_82261E54;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82261e74
	goto loc_82261E74;
loc_82261E54:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82261e68
	goto loc_82261E68;
loc_82261E60:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82261E68:
	// lbz r8,53(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82261e60
	if (ctx.cr0.eq) goto loc_82261E60;
loc_82261E74:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82261E78:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261f58
	if (!ctx.cr6.eq) goto loc_82261F58;
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82261e9c
	if (ctx.cr0.eq) goto loc_82261E9C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82261ebc
	goto loc_82261EBC;
loc_82261E9C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82261eb0
	goto loc_82261EB0;
loc_82261EA8:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82261EB0:
	// lbz r8,53(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82261ea8
	if (ctx.cr0.eq) goto loc_82261EA8;
loc_82261EBC:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82261f58
	goto loc_82261F58;
loc_82261EC4:
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
	// bne cr6,0x82261ee4
	if (!ctx.cr6.eq) goto loc_82261EE4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x82261f0c
	goto loc_82261F0C;
loc_82261EE4:
	// lbz r11,53(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 53);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82261ef8
	if (!ctx.cr0.eq) goto loc_82261EF8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_82261EF8:
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
loc_82261F0C:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261f24
	if (!ctx.cr6.eq) goto loc_82261F24;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82261f40
	goto loc_82261F40;
loc_82261F24:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82261f3c
	if (!ctx.cr6.eq) goto loc_82261F3C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82261f40
	goto loc_82261F40;
loc_82261F3C:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82261F40:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 52);
	// lbz r10,52(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 52);
	// stb r10,52(r25)
	PPC_STORE_U8(ctx.r25.u32 + 52, ctx.r10.u8);
	// stb r11,52(r26)
	PPC_STORE_U8(ctx.r26.u32 + 52, ctx.r11.u8);
loc_82261F58:
	// lbz r11,52(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822620f0
	if (!ctx.cr6.eq) goto loc_822620F0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822620ec
	if (ctx.cr6.eq) goto loc_822620EC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82261F7C:
	// lbz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822620ec
	if (!ctx.cr6.eq) goto loc_822620EC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82262034
	if (!ctx.cr6.eq) goto loc_82262034;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82261fbc
	if (!ctx.cr0.eq) goto loc_82261FBC;
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8289ee30
	ctx.lr = 0x82261FB8;
	sub_8289EE30(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82261FBC:
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262088
	if (!ctx.cr0.eq) goto loc_82262088;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82261fe8
	if (!ctx.cr6.eq) goto loc_82261FE8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82262084
	if (ctx.cr6.eq) goto loc_82262084;
loc_82261FE8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82262010
	if (!ctx.cr6.eq) goto loc_82262010;
	// stb r30,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82415f28
	ctx.lr = 0x8226200C;
	sub_82415F28(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82262010:
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// bl 0x8289ee30
	ctx.lr = 0x82262030;
	sub_8289EE30(ctx, base);
	// b 0x822620ec
	goto loc_822620EC;
loc_82262034:
	// lbz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 52);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262058
	if (!ctx.cr0.eq) goto loc_82262058;
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82415f28
	ctx.lr = 0x82262054;
	sub_82415F28(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82262058:
	// lbz r10,53(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 53);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262088
	if (!ctx.cr0.eq) goto loc_82262088;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,52(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 52);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822620a4
	if (!ctx.cr6.eq) goto loc_822620A4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822620a4
	if (!ctx.cr6.eq) goto loc_822620A4;
loc_82262084:
	// stb r29,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r29.u8);
loc_82262088:
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
	// bne cr6,0x82261f7c
	if (!ctx.cr6.eq) goto loc_82261F7C;
	// b 0x822620ec
	goto loc_822620EC;
loc_822620A4:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,52(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 52);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822620cc
	if (!ctx.cr6.eq) goto loc_822620CC;
	// stb r30,52(r10)
	PPC_STORE_U8(ctx.r10.u32 + 52, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8289ee30
	ctx.lr = 0x822620C8;
	sub_8289EE30(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_822620CC:
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// stb r30,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r30.u8);
	// bl 0x82415f28
	ctx.lr = 0x822620EC;
	sub_82415F28(ctx, base);
loc_822620EC:
	// stb r30,52(r28)
	PPC_STORE_U8(ctx.r28.u32 + 52, ctx.r30.u8);
loc_822620F0:
	// lwz r3,44(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82262104
	if (ctx.cr6.eq) goto loc_82262104;
	// bl 0x82241d18
	ctx.lr = 0x82262104;
	sub_82241D18(ctx, base);
loc_82262104:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x82262114;
	sub_822402C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691540
	ctx.lr = 0x8226211C;
	sub_82691540(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262130
	if (ctx.cr6.eq) goto loc_82262130;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82262130:
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

__attribute__((alias("__imp__sub_82262140"))) PPC_WEAK_FUNC(sub_82262140);
PPC_FUNC_IMPL(__imp__sub_82262140) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82262148;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,73(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 73);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82262170
	if (ctx.cr0.eq) goto loc_82262170;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,32172
	ctx.r3.s64 = ctx.r11.s64 + 32172;
	// bl 0x82fa0680
	ctx.lr = 0x82262170;
	sub_82FA0680(ctx, base);
loc_82262170:
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// bl 0x82f95e18
	ctx.lr = 0x8226217C;
	sub_82F95E18(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r25,196(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// beq 0x82262198
	if (ctx.cr0.eq) goto loc_82262198;
	// lwz r28,8(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// b 0x822621bc
	goto loc_822621BC;
loc_82262198:
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lbz r10,73(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x822621b0
	if (ctx.cr0.eq) goto loc_822621B0;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// b 0x822621bc
	goto loc_822621BC;
loc_822621B0:
	// lwz r28,8(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// cmplw cr6,r25,r26
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82262294
	if (!ctx.cr6.eq) goto loc_82262294;
loc_822621BC:
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// lwz r31,4(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822621d0
	if (!ctx.cr0.eq) goto loc_822621D0;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_822621D0:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822621e8
	if (!ctx.cr6.eq) goto loc_822621E8;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82262200
	goto loc_82262200;
loc_822621E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822621fc
	if (!ctx.cr6.eq) goto loc_822621FC;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// b 0x82262200
	goto loc_82262200;
loc_822621FC:
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82262200:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82262248
	if (!ctx.cr6.eq) goto loc_82262248;
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82262224
	if (ctx.cr0.eq) goto loc_82262224;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x82262244
	goto loc_82262244;
loc_82262224:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82262238
	goto loc_82262238;
loc_82262230:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82262238:
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82262230
	if (ctx.cr0.eq) goto loc_82262230;
loc_82262244:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
loc_82262248:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82262328
	if (!ctx.cr6.eq) goto loc_82262328;
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8226226c
	if (ctx.cr0.eq) goto loc_8226226C;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// b 0x8226228c
	goto loc_8226228C;
loc_8226226C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// b 0x82262280
	goto loc_82262280;
loc_82262278:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82262280:
	// lbz r8,73(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82262278
	if (ctx.cr0.eq) goto loc_82262278;
loc_8226228C:
	// stw r10,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r10.u32);
	// b 0x82262328
	goto loc_82262328;
loc_82262294:
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
	// bne cr6,0x822622b4
	if (!ctx.cr6.eq) goto loc_822622B4;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// b 0x822622dc
	goto loc_822622DC;
loc_822622B4:
	// lbz r11,73(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 73);
	// lwz r31,4(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x822622c8
	if (!ctx.cr0.eq) goto loc_822622C8;
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
loc_822622C8:
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
loc_822622DC:
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x822622f4
	if (!ctx.cr6.eq) goto loc_822622F4;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// b 0x82262310
	goto loc_82262310;
loc_822622F4:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r26
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x8226230c
	if (!ctx.cr6.eq) goto loc_8226230C;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// b 0x82262310
	goto loc_82262310;
loc_8226230C:
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
loc_82262310:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// stw r11,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r11.u32);
	// lbz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 72);
	// lbz r10,72(r26)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r26.u32 + 72);
	// stb r10,72(r25)
	PPC_STORE_U8(ctx.r25.u32 + 72, ctx.r10.u8);
	// stb r11,72(r26)
	PPC_STORE_U8(ctx.r26.u32 + 72, ctx.r11.u8);
loc_82262328:
	// lbz r11,72(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822624c0
	if (!ctx.cr6.eq) goto loc_822624C0;
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x822624bc
	if (ctx.cr6.eq) goto loc_822624BC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_8226234C:
	// lbz r11,72(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 72);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x822624bc
	if (!ctx.cr6.eq) goto loc_822624BC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82262404
	if (!ctx.cr6.eq) goto loc_82262404;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x8226238c
	if (!ctx.cr0.eq) goto loc_8226238C;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8254e638
	ctx.lr = 0x82262388;
	sub_8254E638(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8226238C:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262458
	if (!ctx.cr0.eq) goto loc_82262458;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822623b8
	if (!ctx.cr6.eq) goto loc_822623B8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// beq cr6,0x82262454
	if (ctx.cr6.eq) goto loc_82262454;
loc_822623B8:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x822623e0
	if (!ctx.cr6.eq) goto loc_822623E0;
	// stb r30,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8226ff60
	ctx.lr = 0x822623DC;
	sub_8226FF60(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_822623E0:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// bl 0x8254e638
	ctx.lr = 0x82262400;
	sub_8254E638(ctx, base);
	// b 0x822624bc
	goto loc_822624BC;
loc_82262404:
	// lbz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262428
	if (!ctx.cr0.eq) goto loc_82262428;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stb r29,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8226ff60
	ctx.lr = 0x82262424;
	sub_8226FF60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82262428:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82262458
	if (!ctx.cr0.eq) goto loc_82262458;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 72);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82262474
	if (!ctx.cr6.eq) goto loc_82262474;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82262474
	if (!ctx.cr6.eq) goto loc_82262474;
loc_82262454:
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
loc_82262458:
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
	// bne cr6,0x8226234c
	if (!ctx.cr6.eq) goto loc_8226234C;
	// b 0x822624bc
	goto loc_822624BC;
loc_82262474:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r9,72(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 72);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x8226249c
	if (!ctx.cr6.eq) goto loc_8226249C;
	// stb r30,72(r10)
	PPC_STORE_U8(ctx.r10.u32 + 72, ctx.r30.u8);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// stb r29,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r29.u8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8254e638
	ctx.lr = 0x82262498;
	sub_8254E638(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8226249C:
	// lbz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stb r10,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r10.u8);
	// stb r30,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r30.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// bl 0x8226ff60
	ctx.lr = 0x822624BC;
	sub_8226FF60(ctx, base);
loc_822624BC:
	// stb r30,72(r28)
	PPC_STORE_U8(ctx.r28.u32 + 72, ctx.r30.u8);
loc_822624C0:
	// addi r31,r26,12
	ctx.r31.s64 = ctx.r26.s64 + 12;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822402c8
	ctx.lr = 0x822624D4;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822402c8
	ctx.lr = 0x822624E4;
	sub_822402C8(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691540
	ctx.lr = 0x822624EC;
	sub_82691540(ctx, base);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82262500
	if (ctx.cr6.eq) goto loc_82262500;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
loc_82262500:
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

