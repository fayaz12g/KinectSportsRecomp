#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F88C00"))) PPC_WEAK_FUNC(sub_82F88C00);
PPC_FUNC_IMPL(__imp__sub_82F88C00) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f87d48
	sub_82F87D48(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88C0C"))) PPC_WEAK_FUNC(sub_82F88C0C);
PPC_FUNC_IMPL(__imp__sub_82F88C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88C10"))) PPC_WEAK_FUNC(sub_82F88C10);
PPC_FUNC_IMPL(__imp__sub_82F88C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88C18;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f880d8
	ctx.lr = 0x82F88C4C;
	sub_82F880D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f886c8
	ctx.lr = 0x82F88C68;
	sub_82F886C8(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88C70"))) PPC_WEAK_FUNC(sub_82F88C70);
PPC_FUNC_IMPL(__imp__sub_82F88C70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88C78;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f882f8
	ctx.lr = 0x82F88CAC;
	sub_82F882F8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f886c8
	ctx.lr = 0x82F88CC8;
	sub_82F886C8(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88CD0"))) PPC_WEAK_FUNC(sub_82F88CD0);
PPC_FUNC_IMPL(__imp__sub_82F88CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88CD8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88490
	ctx.lr = 0x82F88D0C;
	sub_82F88490(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f886c8
	ctx.lr = 0x82F88D28;
	sub_82F886C8(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88D30"))) PPC_WEAK_FUNC(sub_82F88D30);
PPC_FUNC_IMPL(__imp__sub_82F88D30) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f87e90
	sub_82F87E90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88D3C"))) PPC_WEAK_FUNC(sub_82F88D3C);
PPC_FUNC_IMPL(__imp__sub_82F88D3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88D40"))) PPC_WEAK_FUNC(sub_82F88D40);
PPC_FUNC_IMPL(__imp__sub_82F88D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88D48;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f880d8
	ctx.lr = 0x82F88D7C;
	sub_82F880D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88810
	ctx.lr = 0x82F88D98;
	sub_82F88810(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88DA0"))) PPC_WEAK_FUNC(sub_82F88DA0);
PPC_FUNC_IMPL(__imp__sub_82F88DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f882f8
	ctx.lr = 0x82F88DDC;
	sub_82F882F8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88810
	ctx.lr = 0x82F88DF8;
	sub_82F88810(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88E00"))) PPC_WEAK_FUNC(sub_82F88E00);
PPC_FUNC_IMPL(__imp__sub_82F88E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88E08;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88490
	ctx.lr = 0x82F88E3C;
	sub_82F88490(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88810
	ctx.lr = 0x82F88E58;
	sub_82F88810(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88E60"))) PPC_WEAK_FUNC(sub_82F88E60);
PPC_FUNC_IMPL(__imp__sub_82F88E60) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f87f90
	sub_82F87F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88E6C"))) PPC_WEAK_FUNC(sub_82F88E6C);
PPC_FUNC_IMPL(__imp__sub_82F88E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F88E70"))) PPC_WEAK_FUNC(sub_82F88E70);
PPC_FUNC_IMPL(__imp__sub_82F88E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f880d8
	ctx.lr = 0x82F88EAC;
	sub_82F880D8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88a88
	ctx.lr = 0x82F88EC8;
	sub_82F88A88(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88ED0"))) PPC_WEAK_FUNC(sub_82F88ED0);
PPC_FUNC_IMPL(__imp__sub_82F88ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88ED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,3
	ctx.r9.s64 = 3;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f882f8
	ctx.lr = 0x82F88F0C;
	sub_82F882F8(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88a88
	ctx.lr = 0x82F88F28;
	sub_82F88A88(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88F30"))) PPC_WEAK_FUNC(sub_82F88F30);
PPC_FUNC_IMPL(__imp__sub_82F88F30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F88F38;
	__savegprlr_28(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// slw r28,r10,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r9,5
	ctx.r9.s64 = 5;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88490
	ctx.lr = 0x82F88F6C;
	sub_82F88490(ctx, base);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f88a88
	ctx.lr = 0x82F88F88;
	sub_82F88A88(ctx, base);
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F88F90"))) PPC_WEAK_FUNC(sub_82F88F90);
PPC_FUNC_IMPL(__imp__sub_82F88F90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F88F98;
	__savegprlr_27(ctx, base);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r8,-50(r1)
	PPC_STORE_U16(ctx.r1.u32 + -50, ctx.r8.u16);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(2)));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v61,r3,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v6,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v60,r29,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vperm128 v11,v62,v61,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vperm128 v10,v63,v60,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// vspltish v12,4
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(4)));
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v59,r0,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmrghb v2,v0,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r27,r1,-64
	ctx.r27.s64 = ctx.r1.s64 + -64;
	// add r29,r31,r4
	ctx.r29.u64 = ctx.r31.u64 + ctx.r4.u64;
	// vmrghb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v56,r9,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v55,r10,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r9
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r9,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v5,v59,v55,v7
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v54,r28,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubshs v4,v10,v2
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vperm128 v9,v58,v57,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v53,r10,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v56,v54,v6
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v52,r31,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r8,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v50,r29,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vslh v1,v4,v13
	ctx.v1.u16[0] = ctx.v4.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v1.u16[1] = ctx.v4.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v1.u16[2] = ctx.v4.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v1.u16[3] = ctx.v4.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v1.u16[4] = ctx.v4.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v1.u16[5] = ctx.v4.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v1.u16[6] = ctx.v4.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v1.u16[7] = ctx.v4.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v31,r0,r27
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vperm128 v30,v53,v51,v6
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v29,v52,v50,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v49,r8,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsplth v11,v31,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u16), _mm_set1_epi16(short(0x100))));
	// add r4,r10,r3
	ctx.r4.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vmrghb v8,v0,v3
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v48,r31,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v9,v0,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vmrghb v6,v0,v5
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vaddshs v27,v1,v11
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vperm128 v26,v49,v48,v7
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v47,r0,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vsubshs v28,v9,v10
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// lvx128 v46,r4,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubshs v25,v8,v9
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// add r31,r30,r6
	ctx.r31.u64 = ctx.r30.u64 + ctx.r6.u64;
	// vsubshs v24,v6,v8
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vperm128 v21,v47,v46,v7
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsrah v22,v27,v12
	ctx.v22.s16[0] = ctx.v27.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v22.s16[1] = ctx.v27.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v22.s16[2] = ctx.v27.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v22.s16[3] = ctx.v27.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v22.s16[4] = ctx.v27.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v22.s16[5] = ctx.v27.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v22.s16[6] = ctx.v27.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v22.s16[7] = ctx.v27.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vmrghb v5,v0,v30
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v23,v28,v13
	ctx.v23.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v23.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v23.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v23.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v23.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v23.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v23.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v23.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v4,v0,v26
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v20,v25,v13
	ctx.v20.u16[0] = ctx.v25.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v25.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v25.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v25.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v25.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v25.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v25.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v25.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v3,v0,v29
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v19,v24,v13
	ctx.v19.u16[0] = ctx.v24.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v24.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v24.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v24.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v24.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v24.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v24.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v24.u16[7] << (ctx.v13.u16[7] & 0xF);
	// li r10,4
	ctx.r10.s64 = 4;
	// vaddshs v17,v22,v2
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vaddshs v18,v23,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrghb v16,v0,v21
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v15,v20,v11
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v14,v19,v11
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsubshs v7,v5,v6
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vpkshus128 v45,v17,v17
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// vsubshs v2,v4,v5
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vsubshs v1,v3,v4
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vsubshs v31,v16,v3
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vslh v30,v7,v13
	ctx.v30.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v30.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v30.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v30.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v30.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v30.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v30.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v30.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v29,v2,v13
	ctx.v29.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v0,v18,v12
	ctx.v0.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v0.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v0.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v0.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v0.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v0.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v0.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v0.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vslh v28,v1,v13
	ctx.v28.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v28.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v28.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v28.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v28.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v28.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v28.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v28.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvewx128 v45,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v30,v11
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v45,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v27,v15,v12
	ctx.v27.s16[0] = ctx.v15.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v27.s16[1] = ctx.v15.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v27.s16[2] = ctx.v15.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v27.s16[3] = ctx.v15.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v27.s16[4] = ctx.v15.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v27.s16[5] = ctx.v15.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v27.s16[6] = ctx.v15.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v27.s16[7] = ctx.v15.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vslh v25,v31,v13
	ctx.v25.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v24,v29,v11
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v23,v14,v12
	ctx.v23.s16[0] = ctx.v14.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v23.s16[1] = ctx.v14.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v23.s16[2] = ctx.v14.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v23.s16[3] = ctx.v14.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v23.s16[4] = ctx.v14.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v23.s16[5] = ctx.v14.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v23.s16[6] = ctx.v14.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v23.s16[7] = ctx.v14.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v21,v0,v10
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vaddshs v22,v28,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v20,v26,v12
	ctx.v20.s16[0] = ctx.v26.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v20.s16[1] = ctx.v26.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v20.s16[2] = ctx.v26.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v20.s16[3] = ctx.v26.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v20.s16[4] = ctx.v26.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v20.s16[5] = ctx.v26.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v20.s16[6] = ctx.v26.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v20.s16[7] = ctx.v26.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v19,v25,v11
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v18,v27,v9
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vpkshus128 v44,v21,v21
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vsrah v16,v24,v12
	ctx.v16.s16[0] = ctx.v24.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v16.s16[1] = ctx.v24.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v16.s16[2] = ctx.v24.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v16.s16[3] = ctx.v24.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v16.s16[4] = ctx.v24.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v16.s16[5] = ctx.v24.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v16.s16[6] = ctx.v24.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v16.s16[7] = ctx.v24.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v15,v23,v8
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vsrah v14,v22,v12
	ctx.v14.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v14.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v14.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v14.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v14.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v14.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v14.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v14.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v0,v20,v6
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vpkshus128 v43,v18,v18
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// vsrah v13,v19,v12
	ctx.v13.s16[0] = ctx.v19.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v13.s16[1] = ctx.v19.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v13.s16[2] = ctx.v19.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v13.s16[3] = ctx.v19.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v13.s16[4] = ctx.v19.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v13.s16[5] = ctx.v19.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v13.s16[6] = ctx.v19.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v13.s16[7] = ctx.v19.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v12,v16,v5
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vpkshus128 v42,v15,v15
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// vaddshs v11,v14,v4
	_mm_store_si128((__m128i*)ctx.v11.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// stvewx128 v44,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v0,v0
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// stvewx128 v44,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v10,v13,v3
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v13.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vpkshus128 v40,v12,v12
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// stvewx128 v43,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v39,v11,v11
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v43,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v38,v10,v10
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// stvewx128 v42,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F891A8"))) PPC_WEAK_FUNC(sub_82F891A8);
PPC_FUNC_IMPL(__imp__sub_82F891A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82F891B0;
	__savegprlr_21(ctx, base);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// sth r11,-98(r1)
	PPC_STORE_U16(ctx.r1.u32 + -98, ctx.r11.u16);
	// addi r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 + 3;
	// li r7,1
	ctx.r7.s64 = 1;
	// vspltish v12,2
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(2)));
	// slw r11,r7,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r8.u8 & 0x3F));
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsplth v11,v11,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x100))));
	// bne cr6,0x82f893d4
	if (!ctx.cr6.eq) goto loc_82F893D4;
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lvx128 v61,r3,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r31,r9,r5
	ctx.r31.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lvx128 v60,r10,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v5,v62,v61,v7
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r10,r9,r3
	ctx.r10.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vperm128 v4,v63,v60,v6
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v59,r0,r8
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r8,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r29,r8,r4
	ctx.r29.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vmrghb v3,v0,v5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v56,r8,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r10
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v59,v58,v2
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v54,r10,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v52,r29,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r28,r7,r4
	ctx.r28.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vaddshs v31,v3,v10
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v4,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v1
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v57,r10,r4
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v55,v54,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v53,r9,r11
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v56,v52,v4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v6,v31,v13
	ctx.v6.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v6.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v6.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v6.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v6.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v6.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v6.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v6.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v51,r9,r4
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// vperm128 v2,v57,v53,v5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v50,r7,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v9,v0,v3
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v31,v6,v11
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrghb v7,v0,v1
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v49,r28,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v30,v10,v8
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// lvx128 v48,r0,r28
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmrghb v6,v0,v2
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v51,v50,v5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// vsrah v29,v31,v12
	ctx.v29.s16[0] = ctx.v31.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v29.s16[1] = ctx.v31.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v29.s16[2] = ctx.v31.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v29.s16[3] = ctx.v31.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v29.s16[4] = ctx.v31.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v29.s16[5] = ctx.v31.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v29.s16[6] = ctx.v31.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v29.s16[7] = ctx.v31.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vperm128 v2,v48,v49,v4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vaddshs v1,v8,v7
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// vaddshs v31,v7,v9
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vslh v27,v30,v13
	ctx.v27.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v5,v0,v3
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v28,v9,v6
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lvx128 v47,r0,r3
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r9,r4,r6
	ctx.r9.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lvx128 v46,r3,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v4,v0,v2
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vpkshus128 v45,v29,v29
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vslh v3,v1,v13
	ctx.v3.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v3.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v3.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v3.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v3.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v3.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v3.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v3.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r27,r5,r6
	ctx.r27.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vslh v2,v31,v13
	ctx.v2.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v2.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v2.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v2.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v2.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v2.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v2.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v2.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r8,r30,r6
	ctx.r8.u64 = ctx.r30.u64 + ctx.r6.u64;
	// li r10,4
	ctx.r10.s64 = 4;
	// vslh v1,v28,v13
	ctx.v1.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v1.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v1.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v1.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v1.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v1.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v1.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v1.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vaddshs v31,v27,v11
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vperm128 v30,v47,v46,v7
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v29,v6,v5
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vmrghb v25,v0,v30
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v28,v5,v4
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vaddshs v27,v3,v11
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v45,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vslh v24,v29,v13
	ctx.v24.u16[0] = ctx.v29.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v29.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v29.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v29.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v29.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v29.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v29.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v29.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvewx128 v45,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v2,v11
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v20,v4,v25
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v25.s16)));
	// vslh v22,v28,v13
	ctx.v22.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v22.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v22.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v22.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v22.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v22.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v22.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v22.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v23,v31,v12
	ctx.v23.s16[0] = ctx.v31.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v23.s16[1] = ctx.v31.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v23.s16[2] = ctx.v31.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v23.s16[3] = ctx.v31.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v23.s16[4] = ctx.v31.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v23.s16[5] = ctx.v31.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v23.s16[6] = ctx.v31.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v23.s16[7] = ctx.v31.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v21,v1,v11
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v16,v20,v13
	ctx.v16.u16[0] = ctx.v20.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v20.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v20.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v20.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v20.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v20.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v20.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v20.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v19,v27,v12
	ctx.v19.s16[0] = ctx.v27.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v19.s16[1] = ctx.v27.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v19.s16[2] = ctx.v27.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v19.s16[3] = ctx.v27.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v19.s16[4] = ctx.v27.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v19.s16[5] = ctx.v27.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v19.s16[6] = ctx.v27.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v19.s16[7] = ctx.v27.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v18,v24,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v44,v23,v23
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vsrah v17,v26,v12
	ctx.v17.s16[0] = ctx.v26.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v17.s16[1] = ctx.v26.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v17.s16[2] = ctx.v26.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v17.s16[3] = ctx.v26.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v17.s16[4] = ctx.v26.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v17.s16[5] = ctx.v26.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v17.s16[6] = ctx.v26.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v17.s16[7] = ctx.v26.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v15,v22,v11
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v14,v21,v12
	ctx.v14.s16[0] = ctx.v21.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v14.s16[1] = ctx.v21.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v14.s16[2] = ctx.v21.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v14.s16[3] = ctx.v21.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v14.s16[4] = ctx.v21.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v14.s16[5] = ctx.v21.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v14.s16[6] = ctx.v21.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v14.s16[7] = ctx.v21.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v43,v19,v19
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// vaddshs v0,v16,v11
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v13,v18,v12
	ctx.v13.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v13.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v13.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v13.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v13.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v13.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v13.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v13.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v42,v17,v17
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// vsrah v11,v15,v12
	ctx.v11.s16[0] = ctx.v15.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v11.s16[1] = ctx.v15.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v11.s16[2] = ctx.v15.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v11.s16[3] = ctx.v15.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v11.s16[4] = ctx.v15.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v11.s16[5] = ctx.v15.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v11.s16[6] = ctx.v15.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v11.s16[7] = ctx.v15.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v41,v14,v14
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v14.s16)));
	// stvewx128 v44,r5,r6
	ea = (ctx.r5.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v10,v0,v12
	ctx.v10.s16[0] = ctx.v0.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v10.s16[1] = ctx.v0.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v10.s16[2] = ctx.v0.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v10.s16[3] = ctx.v0.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v10.s16[4] = ctx.v0.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v10.s16[5] = ctx.v0.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v10.s16[6] = ctx.v0.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v10.s16[7] = ctx.v0.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v44,r27,r10
	ea = (ctx.r27.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v13,v13
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v13.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// stvewx128 v43,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v39,v11,v11
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v43,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r30,r6
	ea = (ctx.r30.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v38,v10,v10
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// stvewx128 v42,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r31,r6
	ea = (ctx.r31.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r4,r6
	ea = (ctx.r4.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r9,r6
	ea = (ctx.r9.u32 + ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82F893D4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82f89664
	if (!ctx.cr6.gt) goto loc_82F89664;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r26,r4,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r24,r4,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r6,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r6,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82F89408:
	// add r10,r25,r3
	ctx.r10.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lvx128 v37,r0,r3
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r9,r26,r3
	ctx.r9.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lvx128 v35,r26,r3
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v34,r3,r4
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v33,r3,r11
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v62,r10,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r9,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v37,v33,v5
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v61,r30,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r29,r7,r4
	ctx.r29.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r28,r22,r5
	ctx.r28.u64 = ctx.r22.u64 + ctx.r5.u64;
	// lvsl v4,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r27,r23,r5
	ctx.r27.u64 = ctx.r23.u64 + ctx.r5.u64;
	// lvx128 v36,r25,r3
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vperm128 v10,v35,v63,v7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v34,v61,v4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v32,r9,r4
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v4,v0,v3
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r31,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v7,v36,v62,v6
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvsl v2,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v1,v0,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v59,r10,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v31,v0,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v58,r8,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v8,v32,v60,v2
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v57,r8,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v29,v0,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v56,r7,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v53,v7,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vaddshs v2,v31,v1
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// lvsl v5,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v6,v59,v57,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vaddshs v26,v4,v31
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vperm128 v5,v58,v56,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v55,r7,r4
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r29,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r9,r24,r3
	ctx.r9.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lvsl v7,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vaddshs v1,v1,v30
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vmrghb v28,v0,v6
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v30,v30,v29
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vmrghb v27,v0,v5
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v25,v2,v13
	ctx.v25.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm128 v4,v55,v54,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v20,v26,v13
	ctx.v20.u16[0] = ctx.v26.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v26.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v26.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v26.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v26.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v26.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v26.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v26.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v24,v0,v3
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vor128 v7,v53,v53
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v53.u8));
	// vaddshs v23,v29,v28
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vmrglb v9,v0,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v22,v28,v27
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// lvx128 v52,r9,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r24,r3
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r24.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r10,r28,r6
	ctx.r10.u64 = ctx.r28.u64 + ctx.r6.u64;
	// lvsl v3,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v21,v1,v13
	ctx.v21.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v1,v30,v13
	ctx.v1.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v1.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v1.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v1.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v1.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v1.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v1.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v1.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v26,v0,v4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v2,v51,v52,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrglb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v31,v23,v13
	ctx.v31.u16[0] = ctx.v23.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v31.u16[1] = ctx.v23.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v31.u16[2] = ctx.v23.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v31.u16[3] = ctx.v23.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v31.u16[4] = ctx.v23.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v31.u16[5] = ctx.v23.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v31.u16[6] = ctx.v23.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v31.u16[7] = ctx.v23.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v30,v22,v13
	ctx.v30.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v30.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v30.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v30.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v30.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v30.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v30.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v30.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v7,v0,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v29,v20,v11
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrglb v6,v0,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v28,v24,v9
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vmrglb v5,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v25,v25,v11
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrglb v4,v0,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v22,v9,v10
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vmrghb v19,v0,v2
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v24,v21,v11
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrglb v21,v0,v2
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v20,v10,v8
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// vaddshs v18,v8,v7
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// vaddshs v17,v7,v6
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vaddshs v15,v6,v5
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vslh v16,v28,v13
	ctx.v16.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v10,v5,v4
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vaddshs v9,v27,v26
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// vslh v14,v22,v13
	ctx.v14.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v14.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v14.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v14.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v14.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v14.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v14.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v14.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v7,v4,v21
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vaddshs v6,v26,v19
	_mm_store_si128((__m128i*)ctx.v6.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// vslh v8,v20,v13
	ctx.v8.u16[0] = ctx.v20.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v8.u16[1] = ctx.v20.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v8.u16[2] = ctx.v20.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v8.u16[3] = ctx.v20.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v8.u16[4] = ctx.v20.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v8.u16[5] = ctx.v20.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v8.u16[6] = ctx.v20.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v8.u16[7] = ctx.v20.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v5,v18,v13
	ctx.v5.u16[0] = ctx.v18.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v5.u16[1] = ctx.v18.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v5.u16[2] = ctx.v18.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v5.u16[3] = ctx.v18.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v5.u16[4] = ctx.v18.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v5.u16[5] = ctx.v18.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v5.u16[6] = ctx.v18.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v5.u16[7] = ctx.v18.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v4,v17,v13
	ctx.v4.u16[0] = ctx.v17.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v4.u16[1] = ctx.v17.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v4.u16[2] = ctx.v17.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v4.u16[3] = ctx.v17.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v4.u16[4] = ctx.v17.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v4.u16[5] = ctx.v17.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v4.u16[6] = ctx.v17.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v4.u16[7] = ctx.v17.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v3,v16,v11
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v23,v1,v11
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v2,v15,v13
	ctx.v2.u16[0] = ctx.v15.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v2.u16[1] = ctx.v15.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v2.u16[2] = ctx.v15.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v2.u16[3] = ctx.v15.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v2.u16[4] = ctx.v15.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v2.u16[5] = ctx.v15.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v2.u16[6] = ctx.v15.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v2.u16[7] = ctx.v15.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v1,v14,v11
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v28,v10,v13
	ctx.v28.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v28.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v28.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v28.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v28.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v28.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v28.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v28.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v27,v9,v13
	ctx.v27.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v26,v8,v11
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v22,v7,v13
	ctx.v22.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v22.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v22.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v22.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v22.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v22.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v22.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v22.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v21,v6,v13
	ctx.v21.u16[0] = ctx.v6.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v6.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v6.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v6.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v6.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v6.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v6.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v6.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v20,v5,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v19,v4,v11
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v18,v31,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v17,v3,v12
	ctx.v17.s16[0] = ctx.v3.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v17.s16[1] = ctx.v3.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v17.s16[2] = ctx.v3.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v17.s16[3] = ctx.v3.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v17.s16[4] = ctx.v3.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v17.s16[5] = ctx.v3.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v17.s16[6] = ctx.v3.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v17.s16[7] = ctx.v3.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v16,v29,v12
	ctx.v16.s16[0] = ctx.v29.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v16.s16[1] = ctx.v29.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v16.s16[2] = ctx.v29.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v16.s16[3] = ctx.v29.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v16.s16[4] = ctx.v29.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v16.s16[5] = ctx.v29.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v16.s16[6] = ctx.v29.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v16.s16[7] = ctx.v29.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v15,v2,v11
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v14,v30,v11
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v10,v1,v12
	ctx.v10.s16[0] = ctx.v1.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v10.s16[1] = ctx.v1.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v10.s16[2] = ctx.v1.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v10.s16[3] = ctx.v1.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v10.s16[4] = ctx.v1.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v10.s16[5] = ctx.v1.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v10.s16[6] = ctx.v1.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v10.s16[7] = ctx.v1.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v9,v25,v12
	ctx.v9.s16[0] = ctx.v25.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v9.s16[1] = ctx.v25.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v9.s16[2] = ctx.v25.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v9.s16[3] = ctx.v25.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v9.s16[4] = ctx.v25.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v9.s16[5] = ctx.v25.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v9.s16[6] = ctx.v25.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v9.s16[7] = ctx.v25.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v50,v16,v17
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// vaddshs v8,v28,v11
	_mm_store_si128((__m128i*)ctx.v8.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v7,v27,v11
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v6,v26,v12
	ctx.v6.s16[0] = ctx.v26.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v6.s16[1] = ctx.v26.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v6.s16[2] = ctx.v26.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v6.s16[3] = ctx.v26.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v6.s16[4] = ctx.v26.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v6.s16[5] = ctx.v26.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v6.s16[6] = ctx.v26.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v6.s16[7] = ctx.v26.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v5,v24,v12
	ctx.v5.s16[0] = ctx.v24.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v5.s16[1] = ctx.v24.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v5.s16[2] = ctx.v24.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v5.s16[3] = ctx.v24.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v5.s16[4] = ctx.v24.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v5.s16[5] = ctx.v24.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v5.s16[6] = ctx.v24.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v5.s16[7] = ctx.v24.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v49,v9,v10
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vaddshs v4,v22,v11
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v3,v21,v11
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v2,v20,v12
	ctx.v2.s16[0] = ctx.v20.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v2.s16[1] = ctx.v20.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v2.s16[2] = ctx.v20.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v2.s16[3] = ctx.v20.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v2.s16[4] = ctx.v20.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v2.s16[5] = ctx.v20.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v2.s16[6] = ctx.v20.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v2.s16[7] = ctx.v20.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvx128 v50,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsrah v1,v23,v12
	ctx.v1.s16[0] = ctx.v23.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v1.s16[1] = ctx.v23.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v1.s16[2] = ctx.v23.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v1.s16[3] = ctx.v23.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v1.s16[4] = ctx.v23.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v1.s16[5] = ctx.v23.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v1.s16[6] = ctx.v23.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v1.s16[7] = ctx.v23.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v48,v5,v6
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vsrah v31,v19,v12
	ctx.v31.s16[0] = ctx.v19.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v31.s16[1] = ctx.v19.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v31.s16[2] = ctx.v19.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v31.s16[3] = ctx.v19.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v31.s16[4] = ctx.v19.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v31.s16[5] = ctx.v19.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v31.s16[6] = ctx.v19.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v31.s16[7] = ctx.v19.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v30,v18,v12
	ctx.v30.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v30.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v30.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v30.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v30.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v30.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v30.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v30.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v29,v15,v12
	ctx.v29.s16[0] = ctx.v15.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v29.s16[1] = ctx.v15.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v29.s16[2] = ctx.v15.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v29.s16[3] = ctx.v15.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v29.s16[4] = ctx.v15.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v29.s16[5] = ctx.v15.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v29.s16[6] = ctx.v15.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v29.s16[7] = ctx.v15.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvx128 v49,r5,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsrah v28,v14,v12
	ctx.v28.s16[0] = ctx.v14.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v28.s16[1] = ctx.v14.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v28.s16[2] = ctx.v14.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v28.s16[3] = ctx.v14.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v28.s16[4] = ctx.v14.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v28.s16[5] = ctx.v14.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v28.s16[6] = ctx.v14.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v28.s16[7] = ctx.v14.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v47,v1,v2
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vsrah v27,v8,v12
	ctx.v27.s16[0] = ctx.v8.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v27.s16[1] = ctx.v8.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v27.s16[2] = ctx.v8.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v27.s16[3] = ctx.v8.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v27.s16[4] = ctx.v8.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v27.s16[5] = ctx.v8.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v27.s16[6] = ctx.v8.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v27.s16[7] = ctx.v8.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v26,v7,v12
	ctx.v26.s16[0] = ctx.v7.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v26.s16[1] = ctx.v7.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v26.s16[2] = ctx.v7.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v26.s16[3] = ctx.v7.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v26.s16[4] = ctx.v7.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v26.s16[5] = ctx.v7.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v26.s16[6] = ctx.v7.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v26.s16[7] = ctx.v7.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v46,v30,v31
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vsrah v25,v4,v12
	ctx.v25.s16[0] = ctx.v4.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v25.s16[1] = ctx.v4.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v25.s16[2] = ctx.v4.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v25.s16[3] = ctx.v4.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v25.s16[4] = ctx.v4.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v25.s16[5] = ctx.v4.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v25.s16[6] = ctx.v4.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v25.s16[7] = ctx.v4.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvx128 v48,r23,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsrah v24,v3,v12
	ctx.v24.s16[0] = ctx.v3.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v24.s16[1] = ctx.v3.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v24.s16[2] = ctx.v3.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v24.s16[3] = ctx.v3.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v24.s16[4] = ctx.v3.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v24.s16[5] = ctx.v3.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v24.s16[6] = ctx.v3.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v24.s16[7] = ctx.v3.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v45,v28,v29
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vpkshus128 v44,v26,v27
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// stvx128 v47,r27,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpkshus128 v43,v24,v25
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v24.s16)));
	// stvx128 v46,r22,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r5,r21,r5
	ctx.r5.u64 = ctx.r21.u64 + ctx.r5.u64;
	// stvx128 v45,r28,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v43,r8,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82f89408
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F89408;
loc_82F89664:
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F89668"))) PPC_WEAK_FUNC(sub_82F89668);
PPC_FUNC_IMPL(__imp__sub_82F89668) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F89670;
	__savegprlr_28(ctx, base);
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r7,r10,r5
	ctx.r7.u64 = ctx.r10.u64 + ctx.r5.u64;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// sth r11,-50(r1)
	PPC_STORE_U16(ctx.r1.u32 + -50, ctx.r11.u16);
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v13,2
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(2)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vspltish v12,4
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(4)));
	// li r11,16
	ctx.r11.s64 = 16;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r30,r8,r5
	ctx.r30.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r10,r4
	ctx.r8.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v58,r10,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v55,r0,r10
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r31,r8,r4
	ctx.r31.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v54,r10,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r9,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r9,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v55,v54,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// lvx128 v57,r29,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v11,v60,v59,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v53,r8,r11
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v56,r28,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v10,v63,v57,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v5,v58,v53,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v52,r31,r4
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v8,v61,v56,v6
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v50,r10,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v9,v0,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r29,r29,r3
	ctx.r29.u64 = ctx.r29.u64 + ctx.r3.u64;
	// vperm128 v3,v52,v50,v6
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v51,r3,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v6,v0,v4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v49,r8,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v48,r31,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v31,r0,r9
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrghb v5,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v47,r0,r29
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vperm128 v30,v62,v51,v7
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v46,r29,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubshs v2,v10,v9
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vsubshs v1,v9,v8
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vsplth v11,v31,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u16), _mm_set1_epi16(short(0x100))));
	// vsubshs v27,v8,v6
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vperm128 v26,v49,v48,v7
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubshs v25,v6,v5
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vperm128 v24,v47,v46,v7
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v29,v2,v13
	ctx.v29.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v23,v0,v30
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v28,v1,v13
	ctx.v28.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v28.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v28.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v28.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v28.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v28.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v28.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v28.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vslh v20,v27,v13
	ctx.v20.u16[0] = ctx.v27.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v27.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v27.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v27.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v27.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v27.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v27.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v27.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vslh v19,v25,v13
	ctx.v19.u16[0] = ctx.v25.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v25.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v25.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v25.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v25.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v25.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v25.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v25.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r31,r30,r6
	ctx.r31.u64 = ctx.r30.u64 + ctx.r6.u64;
	// vaddshs v22,v29,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrghb v4,v0,v26
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v21,v28,v11
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// li r10,4
	ctx.r10.s64 = 4;
	// vmrghb v3,v0,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vmrghb v2,v0,v24
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v18,v20,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsubshs v17,v23,v10
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vaddshs v16,v19,v11
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v0,v17,v13
	ctx.v0.u16[0] = ctx.v17.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v0.u16[1] = ctx.v17.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v0.u16[2] = ctx.v17.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v0.u16[3] = ctx.v17.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v0.u16[4] = ctx.v17.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v0.u16[5] = ctx.v17.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v0.u16[6] = ctx.v17.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v0.u16[7] = ctx.v17.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsubshs v7,v5,v4
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vsubshs v1,v4,v3
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vsubshs v31,v3,v2
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vaddshs v30,v0,v11
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v29,v7,v13
	ctx.v29.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v15,v22,v12
	ctx.v15.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vslh v28,v1,v13
	ctx.v28.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v28.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v28.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v28.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v28.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v28.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v28.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v28.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v26,v30,v12
	ctx.v26.s16[0] = ctx.v30.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v26.s16[1] = ctx.v30.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v26.s16[2] = ctx.v30.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v26.s16[3] = ctx.v30.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v26.s16[4] = ctx.v30.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v26.s16[5] = ctx.v30.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v26.s16[6] = ctx.v30.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v26.s16[7] = ctx.v30.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v14,v21,v12
	ctx.v14.s16[0] = ctx.v21.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v14.s16[1] = ctx.v21.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v14.s16[2] = ctx.v21.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v14.s16[3] = ctx.v21.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v14.s16[4] = ctx.v21.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v14.s16[5] = ctx.v21.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v14.s16[6] = ctx.v21.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v14.s16[7] = ctx.v21.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vslh v27,v31,v13
	ctx.v27.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v25,v29,v11
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v22,v26,v10
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vsrah v24,v18,v12
	ctx.v24.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v24.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v24.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v24.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v24.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v24.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v24.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v24.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v23,v28,v11
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v21,v15,v9
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vsrah v20,v16,v12
	ctx.v20.s16[0] = ctx.v16.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v20.s16[1] = ctx.v16.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v20.s16[2] = ctx.v16.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v20.s16[3] = ctx.v16.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v20.s16[4] = ctx.v16.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v20.s16[5] = ctx.v16.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v20.s16[6] = ctx.v16.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v20.s16[7] = ctx.v16.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v45,v22,v22
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v22.s16)));
	// vaddshs v19,v27,v11
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v18,v14,v8
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vsrah v17,v25,v12
	ctx.v17.s16[0] = ctx.v25.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v17.s16[1] = ctx.v25.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v17.s16[2] = ctx.v25.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v17.s16[3] = ctx.v25.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v17.s16[4] = ctx.v25.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v17.s16[5] = ctx.v25.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v17.s16[6] = ctx.v25.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v17.s16[7] = ctx.v25.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v44,v21,v21
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vaddshs v16,v24,v6
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vsrah v15,v23,v12
	ctx.v15.s16[0] = ctx.v23.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v23.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v23.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v23.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v23.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v23.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v23.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v23.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v14,v20,v5
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vpkshus128 v43,v18,v18
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// vsrah v0,v19,v12
	ctx.v0.s16[0] = ctx.v19.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v0.s16[1] = ctx.v19.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v0.s16[2] = ctx.v19.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v0.s16[3] = ctx.v19.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v0.s16[4] = ctx.v19.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v0.s16[5] = ctx.v19.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v0.s16[6] = ctx.v19.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v0.s16[7] = ctx.v19.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v45,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v13,v17,v4
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vpkshus128 v42,v16,v16
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// vaddshs v12,v15,v3
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// stvewx128 v45,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v14,v14
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v14.s16)));
	// stvewx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v11,v0,v2
	_mm_store_si128((__m128i*)ctx.v11.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// stvewx128 v44,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v13,v13
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v13.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// stvewx128 v43,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v39,v12,v12
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// stvewx128 v43,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v38,v11,v11
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v42,r31,r10
	ea = (ctx.r31.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v39,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v39.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v38,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v38.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F89884"))) PPC_WEAK_FUNC(sub_82F89884);
PPC_FUNC_IMPL(__imp__sub_82F89884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F89888"))) PPC_WEAK_FUNC(sub_82F89888);
PPC_FUNC_IMPL(__imp__sub_82F89888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F89890;
	__savegprlr_29(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// srawi r7,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 2;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,2
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(2)));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// sth r7,-50(r1)
	PPC_STORE_U16(ctx.r1.u32 + -50, ctx.r7.u16);
	// lvx128 v60,r9,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v61,r3,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vperm128 v10,v63,v60,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v58,r0,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v57,r10,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v62,v61,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v59,r10,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// vperm128 v9,v58,v57,v5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v56,r9,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v53,r8,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrglb v2,v0,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v52,r8,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrglb v1,v0,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// stvx128 v5,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghb v11,v0,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v5,v56,v52,v3
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v54,r9,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r9,-2924(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2924);
	// lvx128 v51,r10,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lvx128 v50,r3,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v6,v55,v54,v4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v49,r10,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vperm128 v4,v53,v51,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v48,r30,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vperm v24,v11,v2,v7
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v25,r0,r29
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vperm v23,v10,v1,v7
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vmrglb v31,v0,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrglb v29,v0,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglb v28,v0,v5
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsubshs v22,v24,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vmrglb v27,v0,v4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsubshs v21,v23,v10
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vmrghb v9,v0,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v6,v0,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v3,r0,r8
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vperm128 v8,v59,v50,v3
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v3,v49,v48,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vmrglb v30,v0,v8
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglb v26,v0,v3
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v20,v9,v31,v7
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vsplth v12,v25,7
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u16), _mm_set1_epi16(short(0x100))));
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vperm v19,v8,v30,v7
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v17,v6,v29,v7
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmrghb v0,v0,v3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsubshs v18,v20,v9
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vperm v15,v5,v28,v7
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v16,v22,v12
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v2,v19,v8
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vperm v3,v4,v27,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v14,v21,v12
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v31,v17,v6
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vperm v1,v0,v26,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v30,v18,v12
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v29,v15,v5
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vsrah v28,v16,v13
	ctx.v28.s16[0] = ctx.v16.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v28.s16[1] = ctx.v16.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v28.s16[2] = ctx.v16.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v28.s16[3] = ctx.v16.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v28.s16[4] = ctx.v16.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v28.s16[5] = ctx.v16.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v28.s16[6] = ctx.v16.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v28.s16[7] = ctx.v16.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v27,v2,v12
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsrah v25,v14,v13
	ctx.v25.s16[0] = ctx.v14.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v25.s16[1] = ctx.v14.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v25.s16[2] = ctx.v14.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v25.s16[3] = ctx.v14.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v25.s16[4] = ctx.v14.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v25.s16[5] = ctx.v14.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v25.s16[6] = ctx.v14.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v25.s16[7] = ctx.v14.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vsubshs v26,v3,v4
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vaddshs v24,v31,v12
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsrah v23,v30,v13
	ctx.v23.s16[0] = ctx.v30.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v23.s16[1] = ctx.v30.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v23.s16[2] = ctx.v30.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v23.s16[3] = ctx.v30.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v23.s16[4] = ctx.v30.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v23.s16[5] = ctx.v30.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v23.s16[6] = ctx.v30.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v23.s16[7] = ctx.v30.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vsubshs v22,v1,v0
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vaddshs v20,v28,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v21,v29,v12
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsrah v19,v27,v13
	ctx.v19.s16[0] = ctx.v27.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v19.s16[1] = ctx.v27.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v19.s16[2] = ctx.v27.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v19.s16[3] = ctx.v27.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v19.s16[4] = ctx.v27.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v19.s16[5] = ctx.v27.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v19.s16[6] = ctx.v27.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v19.s16[7] = ctx.v27.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v18,v26,v12
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vaddshs v17,v25,v10
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vpkshus128 v47,v20,v20
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v20.s16)));
	// vsrah v16,v24,v13
	ctx.v16.s16[0] = ctx.v24.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v16.s16[1] = ctx.v24.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v16.s16[2] = ctx.v24.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v16.s16[3] = ctx.v24.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v16.s16[4] = ctx.v24.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v16.s16[5] = ctx.v24.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v16.s16[6] = ctx.v24.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v16.s16[7] = ctx.v24.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v15,v22,v12
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vaddshs v14,v23,v9
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vsrah v12,v21,v13
	ctx.v12.s16[0] = ctx.v21.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v12.s16[1] = ctx.v21.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v12.s16[2] = ctx.v21.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v12.s16[3] = ctx.v21.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v12.s16[4] = ctx.v21.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v12.s16[5] = ctx.v21.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v12.s16[6] = ctx.v21.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v12.s16[7] = ctx.v21.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vpkshus128 v46,v17,v17
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// vaddshs v11,v19,v8
	_mm_store_si128((__m128i*)ctx.v11.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vsrah v10,v18,v13
	ctx.v10.s16[0] = ctx.v18.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v10.s16[1] = ctx.v18.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v10.s16[2] = ctx.v18.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v10.s16[3] = ctx.v18.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v10.s16[4] = ctx.v18.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v10.s16[5] = ctx.v18.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v10.s16[6] = ctx.v18.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v10.s16[7] = ctx.v18.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v9,v16,v6
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vpkshus128 v45,v14,v14
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v14.s16)));
	// vsrah v8,v15,v13
	ctx.v8.s16[0] = ctx.v15.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v8.s16[1] = ctx.v15.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v8.s16[2] = ctx.v15.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v8.s16[3] = ctx.v15.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v8.s16[4] = ctx.v15.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v8.s16[5] = ctx.v15.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v8.s16[6] = ctx.v15.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v8.s16[7] = ctx.v15.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// stvewx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v7,v12,v5
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vpkshus128 v44,v11,v11
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v6,v10,v4
	_mm_store_si128((__m128i*)ctx.v6.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// stvewx128 v47,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v9,v9
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// stvewx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v5,v8,v0
	_mm_store_si128((__m128i*)ctx.v5.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// stvewx128 v46,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v42,v7,v7
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// stvewx128 v45,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v6,v6
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// stvewx128 v45,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v5,v5
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// stvewx128 v44,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F89AD8"))) PPC_WEAK_FUNC(sub_82F89AD8);
PPC_FUNC_IMPL(__imp__sub_82F89AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82F89AE0;
	__savegprlr_18(ctx, base);
	// srawi r11,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 2;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// addi r9,r1,-256
	ctx.r9.s64 = ctx.r1.s64 + -256;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// sth r11,-242(r1)
	PPC_STORE_U16(ctx.r1.u32 + -242, ctx.r11.u16);
	// lis r8,-31954
	ctx.r8.s64 = -2094137344;
	// li r11,1
	ctx.r11.s64 = 1;
	// vspltish v12,2
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(2)));
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// lvsl v6,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// slw r10,r11,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r7.u8 & 0x3F));
	// lwz r11,-2924(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -2924);
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r10,8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 8, ctx.xer);
	// vsplth v11,v11,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x100))));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bne cr6,0x82f89d34
	if (!ctx.cr6.eq) goto loc_82F89D34;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r3,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v61,r3,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r29,r8,r4
	ctx.r29.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v59,r10,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lvx128 v55,r30,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r7,r9,r4
	ctx.r7.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v63,v61,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v60,r10,r4
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v9,v58,v59,v5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v57,r8,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v8,v62,v55,v3
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v56,r0,r8
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// add r10,r7,r4
	ctx.r10.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvsl v4,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v1,v0,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v52,r9,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v56,v57,v4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v54,r8,r4
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrglb v30,v0,v8
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v50,r29,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v60,v52,v5
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrglb v29,v0,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v5,v54,v50,v2
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v51,r7,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v6,v0,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v49,r10,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v1,v10,v1,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v53,v51,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvsl v2,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v28,v0,v5
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v5,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v2,v48,v49,v2
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vperm v23,v8,v30,v7
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v1,v10,v1
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vmrglb v31,v0,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vmrglb v27,v0,v4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vmrglb v26,v0,v3
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vmrglb v25,v0,v2
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v18,v8,v23
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vmrghb v9,v0,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r4,r8,r6
	ctx.r4.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vmrghb v4,v0,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vmrghb v3,v0,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v0,v0,v2
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v24,v1,v13
	ctx.v24.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm v22,v6,v29,v7
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v10,v18,v13
	ctx.v10.u16[0] = ctx.v18.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v10.u16[1] = ctx.v18.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v10.u16[2] = ctx.v18.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v10.u16[3] = ctx.v18.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v10.u16[4] = ctx.v18.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v10.u16[5] = ctx.v18.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v10.u16[6] = ctx.v18.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v10.u16[7] = ctx.v18.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm v21,v5,v28,v7
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v20,v9,v31,v7
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v19,v4,v27,v7
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v17,v3,v26,v7
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v16,v6,v22
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v22.s16)));
	// vperm v15,v0,v25,v7
	_mm_store_si128((__m128i*)ctx.v15.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v14,v5,v21
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vaddshs v9,v9,v20
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v20.s16)));
	// vslh v8,v16,v13
	ctx.v8.u16[0] = ctx.v16.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v8.u16[1] = ctx.v16.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v8.u16[2] = ctx.v16.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v8.u16[3] = ctx.v16.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v8.u16[4] = ctx.v16.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v8.u16[5] = ctx.v16.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v8.u16[6] = ctx.v16.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v8.u16[7] = ctx.v16.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v7,v4,v19
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// vaddshs v6,v24,v11
	_mm_store_si128((__m128i*)ctx.v6.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v4,v3,v17
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// vslh v5,v14,v13
	ctx.v5.u16[0] = ctx.v14.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v5.u16[1] = ctx.v14.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v5.u16[2] = ctx.v14.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v5.u16[3] = ctx.v14.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v5.u16[4] = ctx.v14.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v5.u16[5] = ctx.v14.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v5.u16[6] = ctx.v14.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v5.u16[7] = ctx.v14.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v3,v10,v11
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v2,v9,v13
	ctx.v2.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v2.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v2.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v2.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v2.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v2.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v2.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v2.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v1,v0,v15
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// vaddshs v31,v8,v11
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v30,v6,v12
	ctx.v30.s16[0] = ctx.v6.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v30.s16[1] = ctx.v6.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v30.s16[2] = ctx.v6.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v30.s16[3] = ctx.v6.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v30.s16[4] = ctx.v6.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v30.s16[5] = ctx.v6.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v30.s16[6] = ctx.v6.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v30.s16[7] = ctx.v6.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vslh v29,v7,v13
	ctx.v29.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v28,v5,v11
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v27,v4,v13
	ctx.v27.u16[0] = ctx.v4.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v4.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v4.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v4.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v4.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v4.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v4.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v4.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v26,v3,v12
	ctx.v26.s16[0] = ctx.v3.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v26.s16[1] = ctx.v3.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v26.s16[2] = ctx.v3.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v26.s16[3] = ctx.v3.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v26.s16[4] = ctx.v3.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v26.s16[5] = ctx.v3.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v26.s16[6] = ctx.v3.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v26.s16[7] = ctx.v3.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v47,v30,v30
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vaddshs v25,v2,v11
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v24,v1,v13
	ctx.v24.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v23,v31,v12
	ctx.v23.s16[0] = ctx.v31.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v23.s16[1] = ctx.v31.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v23.s16[2] = ctx.v31.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v23.s16[3] = ctx.v31.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v23.s16[4] = ctx.v31.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v23.s16[5] = ctx.v31.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v23.s16[6] = ctx.v31.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v23.s16[7] = ctx.v31.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v22,v29,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v46,v26,v26
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// vsrah v21,v28,v12
	ctx.v21.s16[0] = ctx.v28.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v21.s16[1] = ctx.v28.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v21.s16[2] = ctx.v28.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v21.s16[3] = ctx.v28.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v21.s16[4] = ctx.v28.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v21.s16[5] = ctx.v28.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v21.s16[6] = ctx.v28.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v21.s16[7] = ctx.v28.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v20,v27,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v19,v25,v12
	ctx.v19.s16[0] = ctx.v25.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v19.s16[1] = ctx.v25.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v19.s16[2] = ctx.v25.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v19.s16[3] = ctx.v25.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v19.s16[4] = ctx.v25.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v19.s16[5] = ctx.v25.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v19.s16[6] = ctx.v25.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v19.s16[7] = ctx.v25.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v45,v23,v23
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vaddshs v18,v24,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v17,v22,v12
	ctx.v17.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v17.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v17.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v17.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v17.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v17.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v17.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v17.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v44,v21,v21
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vsrah v16,v20,v12
	ctx.v16.s16[0] = ctx.v20.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v16.s16[1] = ctx.v20.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v16.s16[2] = ctx.v20.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v16.s16[3] = ctx.v20.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v16.s16[4] = ctx.v20.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v16.s16[5] = ctx.v20.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v16.s16[6] = ctx.v20.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v16.s16[7] = ctx.v20.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v47,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v19,v19
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// stvewx128 v46,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v15,v18,v12
	ctx.v15.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v46,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v42,v17,v17
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// stvewx128 v45,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v16,v16
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// stvewx128 v45,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v15,v15
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// stvewx128 v44,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82F89D34:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r25,r4,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r4,1,0,30
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r6,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r6,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r6,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82F89D50:
	// add r7,r3,r4
	ctx.r7.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lbz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// add r11,r25,r3
	ctx.r11.u64 = ctx.r25.u64 + ctx.r3.u64;
	// lvx128 v39,r0,r3
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r10,r24,r3
	ctx.r10.u64 = ctx.r24.u64 + ctx.r3.u64;
	// lvx128 v38,r25,r3
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r24,r3
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r24.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// lbz r30,16(r7)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// addi r29,r7,16
	ctx.r29.s64 = ctx.r7.s64 + 16;
	// sth r8,-256(r1)
	PPC_STORE_U16(ctx.r1.u32 + -256, ctx.r8.u16);
	// addi r28,r10,16
	ctx.r28.s64 = ctx.r10.s64 + 16;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v36,r0,r7
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v35,r11,r4
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v34,r0,r3
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// sth r30,-192(r1)
	PPC_STORE_U16(ctx.r1.u32 + -192, ctx.r30.u16);
	// lvx128 v33,r0,r29
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r0,r28
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r26,r11,16
	ctx.r26.s64 = ctx.r11.s64 + 16;
	// addi r3,r9,16
	ctx.r3.s64 = ctx.r9.s64 + 16;
	// lvx128 v63,r10,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r27,r31,16
	ctx.r27.s64 = ctx.r31.s64 + 16;
	// lvx128 v62,r9,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r29,r8,16
	ctx.r29.s64 = ctx.r8.s64 + 16;
	// lvx128 v61,r8,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r28,r7,16
	ctx.r28.s64 = ctx.r7.s64 + 16;
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// lvx128 v60,r0,r26
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v39,v34,v6
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v59,r0,r3
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lbz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// lvx128 v58,r0,r27
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,-256
	ctx.r11.s64 = ctx.r1.s64 + -256;
	// lvx128 v57,r0,r29
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lbz r26,16(r10)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r10.u32 + 16);
	// lvx128 v56,r0,r28
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lbz r31,16(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// lbz r8,16(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 16);
	// addi r28,r1,-192
	ctx.r28.s64 = ctx.r1.s64 + -192;
	// lbz r29,16(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + 16);
	// vperm128 v31,v36,v33,v6
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v30,v37,v32,v6
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r30,r22,r5
	ctx.r30.u64 = ctx.r22.u64 + ctx.r5.u64;
	// vperm128 v29,v63,v58,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r18,r1,-208
	ctx.r18.s64 = ctx.r1.s64 + -208;
	// vperm128 v28,v38,v60,v6
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r10,r30,r6
	ctx.r10.u64 = ctx.r30.u64 + ctx.r6.u64;
	// vperm128 v27,v35,v59,v6
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r27,r1,-160
	ctx.r27.s64 = ctx.r1.s64 + -160;
	// vperm128 v26,v62,v57,v6
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r20,r1,-240
	ctx.r20.s64 = ctx.r1.s64 + -240;
	// vperm128 v25,v61,v56,v6
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r19,r1,-224
	ctx.r19.s64 = ctx.r1.s64 + -224;
	// vmrglb v10,v0,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v24,v0,v4
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// sth r9,-208(r1)
	PPC_STORE_U16(ctx.r1.u32 + -208, ctx.r9.u16);
	// vmrglb v9,v0,v31
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v54,r0,r28
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmrglb v8,v0,v30
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r11,r23,r5
	ctx.r11.u64 = ctx.r23.u64 + ctx.r5.u64;
	// vmrglb v5,v0,v29
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// sth r26,-160(r1)
	PPC_STORE_U16(ctx.r1.u32 + -160, ctx.r26.u16);
	// vmrglb v4,v0,v28
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// sth r31,-240(r1)
	PPC_STORE_U16(ctx.r1.u32 + -240, ctx.r31.u16);
	// vmrglb v3,v0,v27
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// sth r3,-224(r1)
	PPC_STORE_U16(ctx.r1.u32 + -224, ctx.r3.u16);
	// sth r8,-176(r1)
	PPC_STORE_U16(ctx.r1.u32 + -176, ctx.r8.u16);
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// sth r29,-144(r1)
	PPC_STORE_U16(ctx.r1.u32 + -144, ctx.r29.u16);
	// vmrglb v2,v0,v26
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglb v1,v0,v25
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v31,v0,v31
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v30,v0,v30
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v29,v0,v29
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v27,v0,v27
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v22,v24,v10,v7
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v53,r0,r27
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vperm128 v23,v10,v55,v7
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v51,r0,r19
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vperm128 v21,v9,v54,v7
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v52,r0,r20
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vperm v20,v31,v9,v7
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v50,r0,r18
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// vaddshs v17,v24,v22
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v22.s16)));
	// vperm128 v18,v8,v53,v7
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v19,v10,v23
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vperm128 v14,v4,v51,v7
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v15,v9,v21
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vperm128 v16,v5,v52,v7
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v10,v31,v20
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v20.s16)));
	// vperm v31,v29,v5,v7
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v9,v30,v8,v7
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v22,v17,v13
	ctx.v22.u16[0] = ctx.v17.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v22.u16[1] = ctx.v17.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v22.u16[2] = ctx.v17.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v22.u16[3] = ctx.v17.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v22.u16[4] = ctx.v17.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v22.u16[5] = ctx.v17.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v22.u16[6] = ctx.v17.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v22.u16[7] = ctx.v17.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm v23,v28,v4,v7
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v24,v19,v13
	ctx.v24.u16[0] = ctx.v19.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v19.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v19.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v19.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v19.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v19.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v19.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v19.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v21,v15,v13
	ctx.v21.u16[0] = ctx.v15.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v15.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v15.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v15.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v15.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v15.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v15.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v15.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm v17,v27,v3,v7
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v15,v8,v18
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// vperm128 v20,v3,v50,v7
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v19,v10,v13
	ctx.v19.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// addi r8,r1,-176
	ctx.r8.s64 = ctx.r1.s64 + -176;
	// vaddshs v8,v4,v14
	_mm_store_si128((__m128i*)ctx.v8.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v14.s16)));
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// vaddshs v10,v5,v16
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// vmrghb v26,v0,v26
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v4,v29,v31
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vmrghb v25,v0,v25
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v5,v30,v9
	_mm_store_si128((__m128i*)ctx.v5.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// add r3,r7,r4
	ctx.r3.u64 = ctx.r7.u64 + ctx.r4.u64;
	// vaddshs v31,v28,v23
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// lvx128 v49,r0,r8
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddshs v30,v24,v11
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v48,r0,r31
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddshs v29,v22,v11
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vperm128 v28,v2,v49,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v24,v21,v11
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vperm128 v23,v1,v48,v7
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v22,v19,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v21,v15,v13
	ctx.v21.u16[0] = ctx.v15.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v15.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v15.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v15.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v15.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v15.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v15.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v15.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v19,v10,v13
	ctx.v19.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v18,v5,v13
	ctx.v18.u16[0] = ctx.v5.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v18.u16[1] = ctx.v5.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v18.u16[2] = ctx.v5.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v18.u16[3] = ctx.v5.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v18.u16[4] = ctx.v5.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v18.u16[5] = ctx.v5.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v18.u16[6] = ctx.v5.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v18.u16[7] = ctx.v5.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v16,v8,v13
	ctx.v16.u16[0] = ctx.v8.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v8.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v8.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v8.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v8.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v8.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v8.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v8.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v15,v3,v20
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v20.s16)));
	// vslh v14,v4,v13
	ctx.v14.u16[0] = ctx.v4.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v14.u16[1] = ctx.v4.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v14.u16[2] = ctx.v4.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v14.u16[3] = ctx.v4.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v14.u16[4] = ctx.v4.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v14.u16[5] = ctx.v4.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v14.u16[6] = ctx.v4.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v14.u16[7] = ctx.v4.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v9,v27,v17
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// vslh v10,v31,v13
	ctx.v10.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v10.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v10.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v10.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v10.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v10.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v10.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v10.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vsrah v8,v30,v12
	ctx.v8.s16[0] = ctx.v30.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v8.s16[1] = ctx.v30.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v8.s16[2] = ctx.v30.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v8.s16[3] = ctx.v30.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v8.s16[4] = ctx.v30.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v8.s16[5] = ctx.v30.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v8.s16[6] = ctx.v30.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v8.s16[7] = ctx.v30.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v5,v29,v12
	ctx.v5.s16[0] = ctx.v29.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v5.s16[1] = ctx.v29.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v5.s16[2] = ctx.v29.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v5.s16[3] = ctx.v29.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v5.s16[4] = ctx.v29.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v5.s16[5] = ctx.v29.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v5.s16[6] = ctx.v29.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v5.s16[7] = ctx.v29.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v4,v24,v12
	ctx.v4.s16[0] = ctx.v24.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v4.s16[1] = ctx.v24.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v4.s16[2] = ctx.v24.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v4.s16[3] = ctx.v24.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v4.s16[4] = ctx.v24.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v4.s16[5] = ctx.v24.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v4.s16[6] = ctx.v24.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v4.s16[7] = ctx.v24.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v3,v22,v12
	ctx.v3.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v3.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v3.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v3.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v3.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v3.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v3.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v3.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v31,v21,v11
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v29,v19,v11
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v47,v5,v8
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vaddshs v24,v16,v11
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v22,v10,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v46,v3,v4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vslh v21,v15,v13
	ctx.v21.u16[0] = ctx.v15.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v15.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v15.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v15.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v15.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v15.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v15.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v15.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v20,v9,v13
	ctx.v20.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v30,v18,v11
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v27,v14,v11
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v19,v31,v12
	ctx.v19.s16[0] = ctx.v31.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v19.s16[1] = ctx.v31.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v19.s16[2] = ctx.v31.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v19.s16[3] = ctx.v31.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v19.s16[4] = ctx.v31.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v19.s16[5] = ctx.v31.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v19.s16[6] = ctx.v31.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v19.s16[7] = ctx.v31.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvx128 v47,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v17,v21,v11
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v18,v30,v12
	ctx.v18.s16[0] = ctx.v30.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v18.s16[1] = ctx.v30.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v18.s16[2] = ctx.v30.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v18.s16[3] = ctx.v30.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v18.s16[4] = ctx.v30.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v18.s16[5] = ctx.v30.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v18.s16[6] = ctx.v30.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v18.s16[7] = ctx.v30.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvx128 v46,r5,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v16,v20,v11
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v15,v29,v12
	ctx.v15.s16[0] = ctx.v29.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v29.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v29.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v29.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v29.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v29.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v29.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v29.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v14,v27,v12
	ctx.v14.s16[0] = ctx.v27.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v14.s16[1] = ctx.v27.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v14.s16[2] = ctx.v27.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v14.s16[3] = ctx.v27.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v14.s16[4] = ctx.v27.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v14.s16[5] = ctx.v27.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v14.s16[6] = ctx.v27.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v14.s16[7] = ctx.v27.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v10,v24,v12
	ctx.v10.s16[0] = ctx.v24.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v10.s16[1] = ctx.v24.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v10.s16[2] = ctx.v24.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v10.s16[3] = ctx.v24.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v10.s16[4] = ctx.v24.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v10.s16[5] = ctx.v24.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v10.s16[6] = ctx.v24.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v10.s16[7] = ctx.v24.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v45,v18,v19
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// vsrah v9,v22,v12
	ctx.v9.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v9.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v9.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v9.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v9.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v9.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v9.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v9.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v8,v17,v12
	ctx.v8.s16[0] = ctx.v17.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v8.s16[1] = ctx.v17.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v8.s16[2] = ctx.v17.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v8.s16[3] = ctx.v17.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v8.s16[4] = ctx.v17.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v8.s16[5] = ctx.v17.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v8.s16[6] = ctx.v17.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v8.s16[7] = ctx.v17.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v5,v16,v12
	ctx.v5.s16[0] = ctx.v16.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v5.s16[1] = ctx.v16.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v5.s16[2] = ctx.v16.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v5.s16[3] = ctx.v16.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v5.s16[4] = ctx.v16.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v5.s16[5] = ctx.v16.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v5.s16[6] = ctx.v16.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v5.s16[7] = ctx.v16.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v44,v14,v15
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v14.s16)));
	// vaddshs v4,v2,v28
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vpkshus128 v43,v9,v10
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vperm v3,v26,v2,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v2,v1,v23
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vperm v1,v25,v1,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vslh v31,v4,v13
	ctx.v31.u16[0] = ctx.v4.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v31.u16[1] = ctx.v4.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v31.u16[2] = ctx.v4.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v31.u16[3] = ctx.v4.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v31.u16[4] = ctx.v4.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v31.u16[5] = ctx.v4.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v31.u16[6] = ctx.v4.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v31.u16[7] = ctx.v4.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vpkshus128 v42,v5,v8
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// stvx128 v45,r23,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v44,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r5,r21,r5
	ctx.r5.u64 = ctx.r21.u64 + ctx.r5.u64;
	// vaddshs v30,v26,v3
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// stvx128 v43,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v29,v25,v1
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vslh v28,v2,v13
	ctx.v28.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v28.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v28.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v28.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v28.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v28.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v28.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v28.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v27,v31,v11
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v26,v30,v13
	ctx.v26.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v26.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v26.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v26.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v26.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v26.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v26.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v26.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v25,v29,v13
	ctx.v25.u16[0] = ctx.v29.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v29.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v29.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v29.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v29.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v29.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v29.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v29.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v42,r30,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v24,v28,v11
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v23,v27,v12
	ctx.v23.s16[0] = ctx.v27.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v23.s16[1] = ctx.v27.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v23.s16[2] = ctx.v27.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v23.s16[3] = ctx.v27.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v23.s16[4] = ctx.v27.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v23.s16[5] = ctx.v27.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v23.s16[6] = ctx.v27.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v23.s16[7] = ctx.v27.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v22,v26,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v21,v25,v11
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v20,v24,v12
	ctx.v20.s16[0] = ctx.v24.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v20.s16[1] = ctx.v24.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v20.s16[2] = ctx.v24.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v20.s16[3] = ctx.v24.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v20.s16[4] = ctx.v24.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v20.s16[5] = ctx.v24.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v20.s16[6] = ctx.v24.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v20.s16[7] = ctx.v24.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v19,v22,v12
	ctx.v19.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v19.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v19.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v19.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v19.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v19.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v19.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v19.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v18,v21,v12
	ctx.v18.s16[0] = ctx.v21.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v18.s16[1] = ctx.v21.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v18.s16[2] = ctx.v21.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v18.s16[3] = ctx.v21.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v18.s16[4] = ctx.v21.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v18.s16[5] = ctx.v21.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v18.s16[6] = ctx.v21.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v18.s16[7] = ctx.v21.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v41,v19,v23
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// vpkshus128 v40,v18,v20
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// stvx128 v41,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r9,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82f89d50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F89D50;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8A04C"))) PPC_WEAK_FUNC(sub_82F8A04C);
PPC_FUNC_IMPL(__imp__sub_82F8A04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A050"))) PPC_WEAK_FUNC(sub_82F8A050);
PPC_FUNC_IMPL(__imp__sub_82F8A050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8A058;
	__savegprlr_29(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r9,r3,r4
	ctx.r9.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// srawi r31,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 2;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r31,-50(r1)
	PPC_STORE_U16(ctx.r1.u32 + -50, ctx.r31.u16);
	// add r7,r8,r5
	ctx.r7.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lvx128 v61,r3,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r9,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r31,-31954
	ctx.r31.s64 = -2094137344;
	// vperm128 v11,v62,v61,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// vperm128 v10,v63,v60,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vspltish v13,2
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(2)));
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v59,r10,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmrglb v2,v0,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v57,r10,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v56,r9,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrglb v1,v0,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v54,r8,r4
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v9,v58,v57,v5
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v52,r8,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvsl v3,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// addi r8,r1,-48
	ctx.r8.s64 = ctx.r1.s64 + -48;
	// lvsl v5,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v50,r3,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrglb v31,v0,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r11
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v9,v0,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v5,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v5,v56,v52,v3
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v3,r0,r8
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v8,v59,v50,v3
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lwz r9,-2924(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + -2924);
	// lvx128 v51,r10,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvsl v7,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v6,v55,v53,v4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v49,r10,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lvx128 v48,r30,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v54,v51,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsl v3,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrglb v30,v0,v8
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmrglb v29,v0,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v3,v49,v48,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vmrglb v28,v0,v5
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrglb v27,v0,v4
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vmrghb v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r4,r31,r6
	ctx.r4.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vmrglb v26,v0,v3
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v25,r0,r29
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vmrghb v6,v0,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vmrghb v5,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v0,v0,v3
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm v3,v11,v2,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v2,v10,v1,v7
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm v1,v9,v31,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubshs v24,v11,v3
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vsplth v12,v25,7
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u16), _mm_set1_epi16(short(0x100))));
	// vsubshs v23,v10,v2
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vperm v31,v8,v30,v7
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vperm v30,v6,v29,v7
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubshs v22,v9,v1
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vperm v29,v5,v28,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v20,v24,v12
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vperm v28,v4,v27,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vsubshs v21,v8,v31
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vperm v7,v0,v26,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v19,v23,v12
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v18,v6,v30
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vaddshs v17,v22,v12
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsrah v15,v20,v13
	ctx.v15.s16[0] = ctx.v20.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v20.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v20.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v20.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v20.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v20.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v20.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v20.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vsubshs v16,v5,v29
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vaddshs v14,v21,v12
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v11,v4,v28
	_mm_store_si128((__m128i*)ctx.v11.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vsrah v10,v19,v13
	ctx.v10.s16[0] = ctx.v19.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v10.s16[1] = ctx.v19.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v10.s16[2] = ctx.v19.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v10.s16[3] = ctx.v19.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v10.s16[4] = ctx.v19.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v10.s16[5] = ctx.v19.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v10.s16[6] = ctx.v19.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v10.s16[7] = ctx.v19.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v9,v18,v12
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsrah v8,v17,v13
	ctx.v8.s16[0] = ctx.v17.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v8.s16[1] = ctx.v17.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v8.s16[2] = ctx.v17.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v8.s16[3] = ctx.v17.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v8.s16[4] = ctx.v17.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v8.s16[5] = ctx.v17.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v8.s16[6] = ctx.v17.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v8.s16[7] = ctx.v17.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vsubshs v6,v0,v7
	_mm_store_si128((__m128i*)ctx.v6.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// vaddshs v4,v15,v3
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vaddshs v5,v16,v12
	_mm_store_si128((__m128i*)ctx.v5.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsrah v3,v14,v13
	ctx.v3.s16[0] = ctx.v14.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v3.s16[1] = ctx.v14.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v3.s16[2] = ctx.v14.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v3.s16[3] = ctx.v14.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v3.s16[4] = ctx.v14.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v3.s16[5] = ctx.v14.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v3.s16[6] = ctx.v14.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v3.s16[7] = ctx.v14.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v27,v11,v12
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vaddshs v26,v10,v2
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vpkshus128 v47,v4,v4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vsrah v25,v9,v13
	ctx.v25.s16[0] = ctx.v9.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v25.s16[1] = ctx.v9.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v25.s16[2] = ctx.v9.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v25.s16[3] = ctx.v9.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v25.s16[4] = ctx.v9.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v25.s16[5] = ctx.v9.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v25.s16[6] = ctx.v9.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v25.s16[7] = ctx.v9.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v24,v6,v12
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vaddshs v23,v8,v1
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vsrah v22,v5,v13
	ctx.v22.s16[0] = ctx.v5.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v22.s16[1] = ctx.v5.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v22.s16[2] = ctx.v5.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v22.s16[3] = ctx.v5.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v22.s16[4] = ctx.v5.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v22.s16[5] = ctx.v5.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v22.s16[6] = ctx.v5.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v22.s16[7] = ctx.v5.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vpkshus128 v46,v26,v26
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// vaddshs v21,v3,v31
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vsrah v20,v27,v13
	ctx.v20.s16[0] = ctx.v27.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v20.s16[1] = ctx.v27.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v20.s16[2] = ctx.v27.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v20.s16[3] = ctx.v27.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v20.s16[4] = ctx.v27.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v20.s16[5] = ctx.v27.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v20.s16[6] = ctx.v27.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v20.s16[7] = ctx.v27.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// vaddshs v19,v25,v30
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vpkshus128 v45,v23,v23
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vsrah v18,v24,v13
	ctx.v18.s16[0] = ctx.v24.s16[0] >> (ctx.v13.u16[0] & 0xF);
	ctx.v18.s16[1] = ctx.v24.s16[1] >> (ctx.v13.u16[1] & 0xF);
	ctx.v18.s16[2] = ctx.v24.s16[2] >> (ctx.v13.u16[2] & 0xF);
	ctx.v18.s16[3] = ctx.v24.s16[3] >> (ctx.v13.u16[3] & 0xF);
	ctx.v18.s16[4] = ctx.v24.s16[4] >> (ctx.v13.u16[4] & 0xF);
	ctx.v18.s16[5] = ctx.v24.s16[5] >> (ctx.v13.u16[5] & 0xF);
	ctx.v18.s16[6] = ctx.v24.s16[6] >> (ctx.v13.u16[6] & 0xF);
	ctx.v18.s16[7] = ctx.v24.s16[7] >> (ctx.v13.u16[7] & 0xF);
	// stvewx128 v47,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v17,v22,v29
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vpkshus128 v44,v21,v21
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v21.s16)));
	// vaddshs v16,v20,v28
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// stvewx128 v47,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v47.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v43,v19,v19
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v19.s16)));
	// stvewx128 v46,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v15,v18,v7
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// stvewx128 v46,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v46.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v42,v17,v17
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// stvewx128 v45,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v41,v16,v16
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// stvewx128 v45,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v45.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v44,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v40,v15,v15
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// stvewx128 v44,r4,r11
	ea = (ctx.r4.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v44.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v43,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v43.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v42,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v42.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v41,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v41.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v40,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v40.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8A2A0"))) PPC_WEAK_FUNC(sub_82F8A2A0);
PPC_FUNC_IMPL(__imp__sub_82F8A2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8A2A8;
	__savegprlr_27(ctx, base);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r3
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r3,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// add r30,r3,r4
	ctx.r30.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v55,r3,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// vperm128 v4,v63,v55,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v59,r10,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v57,r30,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r29,r4,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r28,r27,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v6,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r6,r4
	ctx.r30.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vperm128 v2,v62,v57,v6
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v54,r9,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v60,v59,v5
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r31,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v5,v0,v4
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v53,r9,r4
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r10,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v12,v0,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v7,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r9,r29,r3
	ctx.r9.u64 = ctx.r29.u64 + ctx.r3.u64;
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v52,r8,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v51,r6,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v31,v56,v58,v3
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v50,r8,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v61,v54,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r8,r28,r5
	ctx.r8.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lvsl v4,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v2,v53,v52,v6
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v49,r30,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v50,v51,v4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v47,r6,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvsl v7,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v31
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v48,r9,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v9,v0,v3
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v46,r0,r9
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v47,v49,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v2
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v7,v0,v1
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v3,v5,v13
	ctx.v3.u16[0] = ctx.v5.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v3.u16[1] = ctx.v5.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v3.u16[2] = ctx.v5.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v3.u16[3] = ctx.v5.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v3.u16[4] = ctx.v5.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v3.u16[5] = ctx.v5.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v3.u16[6] = ctx.v5.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v3.u16[7] = ctx.v5.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm128 v1,v46,v48,v6
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vslh v2,v12,v13
	ctx.v2.u16[0] = ctx.v12.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v2.u16[1] = ctx.v12.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v2.u16[2] = ctx.v12.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v2.u16[3] = ctx.v12.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v2.u16[4] = ctx.v12.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v2.u16[5] = ctx.v12.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v2.u16[6] = ctx.v12.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v2.u16[7] = ctx.v12.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v31,v11,v13
	ctx.v31.u16[0] = ctx.v11.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v31.u16[1] = ctx.v11.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v31.u16[2] = ctx.v11.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v31.u16[3] = ctx.v11.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v31.u16[4] = ctx.v11.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v31.u16[5] = ctx.v11.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v31.u16[6] = ctx.v11.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v31.u16[7] = ctx.v11.u16[7] << (ctx.v13.u16[7] & 0xF);
	// rlwinm r6,r27,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r8
	ctx.r30.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vslh v30,v10,v13
	ctx.v30.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v30.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v30.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v30.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v30.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v30.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v30.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v30.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v6,v0,v4
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r29,r6,r5
	ctx.r29.u64 = ctx.r6.u64 + ctx.r5.u64;
	// vslh v29,v9,v13
	ctx.v29.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vadduhm v28,v3,v5
	_mm_store_si128((__m128i*)ctx.v28.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v3.u16), _mm_load_si128((__m128i*)ctx.v5.u16)));
	// vmrghb v27,v0,v1
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// vslh v26,v8,v13
	ctx.v26.u16[0] = ctx.v8.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v26.u16[1] = ctx.v8.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v26.u16[2] = ctx.v8.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v26.u16[3] = ctx.v8.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v26.u16[4] = ctx.v8.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v26.u16[5] = ctx.v8.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v26.u16[6] = ctx.v8.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v26.u16[7] = ctx.v8.u16[7] << (ctx.v13.u16[7] & 0xF);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// vadduhm v25,v2,v12
	_mm_store_si128((__m128i*)ctx.v25.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v2.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// vslh v24,v7,v13
	ctx.v24.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v23,v31,v11
	_mm_store_si128((__m128i*)ctx.v23.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v31.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// vslh v21,v6,v13
	ctx.v21.u16[0] = ctx.v6.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v6.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v6.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v6.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v6.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v6.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v6.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v6.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v22,v30,v10
	_mm_store_si128((__m128i*)ctx.v22.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v30.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// vadduhm v20,v29,v9
	_mm_store_si128((__m128i*)ctx.v20.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v29.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// vadduhm v19,v28,v12
	_mm_store_si128((__m128i*)ctx.v19.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v28.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// vadduhm v18,v26,v8
	_mm_store_si128((__m128i*)ctx.v18.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v26.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// vadduhm v17,v25,v11
	_mm_store_si128((__m128i*)ctx.v17.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v25.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// vadduhm v16,v24,v7
	_mm_store_si128((__m128i*)ctx.v16.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v24.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// vadduhm v15,v23,v10
	_mm_store_si128((__m128i*)ctx.v15.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v23.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// stvx128 v19,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v14,v21,v6
	_mm_store_si128((__m128i*)ctx.v14.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v21.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// vadduhm v0,v22,v9
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v22.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// stvx128 v17,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v13,v20,v8
	_mm_store_si128((__m128i*)ctx.v13.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v20.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// vadduhm v12,v18,v7
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v18.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// stvx128 v15,r6,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v11,v16,v6
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v16.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// vadduhm v10,v14,v27
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v14.u16), _mm_load_si128((__m128i*)ctx.v27.u16)));
	// stvx128 v0,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82f8a490
	if (!ctx.cr6.gt) goto loc_82F8A490;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82F8A458:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r30,r11,r4
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// rotlwi r5,r8,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lbzx r29,r31,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// rotlwi r3,r30,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r8,r30,r3
	ctx.r8.u64 = ctx.r30.u64 + ctx.r3.u64;
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// add r3,r8,r29
	ctx.r3.u64 = ctx.r8.u64 + ctx.r29.u64;
	// sth r5,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sthx r3,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// add r9,r6,r9
	ctx.r9.u64 = ctx.r6.u64 + ctx.r9.u64;
	// bdnz 0x82f8a458
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8A458;
loc_82F8A490:
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8A494"))) PPC_WEAK_FUNC(sub_82F8A494);
PPC_FUNC_IMPL(__imp__sub_82F8A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8A498"))) PPC_WEAK_FUNC(sub_82F8A498);
PPC_FUNC_IMPL(__imp__sub_82F8A498) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82F8A4A0;
	__savegprlr_19(ctx, base);
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// bne cr6,0x82f8a660
	if (!ctx.cr6.eq) goto loc_82F8A660;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r4,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// li r11,16
	ctx.r11.s64 = 16;
	// add r7,r8,r4
	ctx.r7.u64 = ctx.r8.u64 + ctx.r4.u64;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lvx128 v48,r9,r4
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r29,r3,r4
	ctx.r29.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v53,r9,r11
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r28,r31,r4
	ctx.r28.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lvx128 v58,r7,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r10,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v5,v61,v53,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v55,r30,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r9,4
	ctx.r9.s64 = 4;
	// lvsl v4,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r30,r6,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v52,r0,r10
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvsl v3,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v1,v58,v55,v4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v57,r31,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v8,v0,v5
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v54,r29,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v52,v56,v3
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v60,r0,r31
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v12,v0,v1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v2,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// lvx128 v59,r31,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v31,v60,v57,v6
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v51,r28,r11
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v2,v63,v54,v2
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v46,r3,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r6,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvsl v3,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r29,r4,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v29,v62,v46,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v50,r8,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v30,v59,v51,v3
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v49,r7,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v47,r8,r4
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v11,v0,v2
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v10,v0,v31
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v2,v0,v4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v30
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r8,r10,r30
	ctx.r8.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vperm128 v1,v48,v50,v6
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 + ctx.r5.u64;
	// vperm128 v31,v47,v49,v3
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vadduhm v30,v10,v11
	_mm_store_si128((__m128i*)ctx.v30.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// vmrghb v25,v0,v29
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vadduhm v27,v2,v12
	_mm_store_si128((__m128i*)ctx.v27.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v2.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// vadduhm v28,v9,v10
	_mm_store_si128((__m128i*)ctx.v28.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v9.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// vmrghb v7,v0,v1
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vadduhm v26,v8,v9
	_mm_store_si128((__m128i*)ctx.v26.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v8.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// vmrghb v6,v0,v31
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// vadduhm v18,v11,v25
	_mm_store_si128((__m128i*)ctx.v18.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v25.u16)));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// vslh v24,v27,v13
	ctx.v24.u16[0] = ctx.v27.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v27.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v27.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v27.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v27.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v27.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v27.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v27.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v23,v7,v8
	_mm_store_si128((__m128i*)ctx.v23.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v7.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// vadduhm v22,v6,v7
	_mm_store_si128((__m128i*)ctx.v22.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v6.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// vslh v21,v30,v13
	ctx.v21.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v20,v12,v6
	_mm_store_si128((__m128i*)ctx.v20.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// vslh v19,v28,v13
	ctx.v19.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v17,v26,v13
	ctx.v17.u16[0] = ctx.v26.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v17.u16[1] = ctx.v26.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v17.u16[2] = ctx.v26.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v17.u16[3] = ctx.v26.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v17.u16[4] = ctx.v26.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v17.u16[5] = ctx.v26.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v17.u16[6] = ctx.v26.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v17.u16[7] = ctx.v26.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v16,v18,v13
	ctx.v16.u16[0] = ctx.v18.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v18.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v18.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v18.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v18.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v18.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v18.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v18.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v15,v23,v13
	ctx.v15.u16[0] = ctx.v23.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v15.u16[1] = ctx.v23.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v15.u16[2] = ctx.v23.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v15.u16[3] = ctx.v23.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v15.u16[4] = ctx.v23.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v15.u16[5] = ctx.v23.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v15.u16[6] = ctx.v23.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v15.u16[7] = ctx.v23.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v16,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslh v14,v22,v13
	ctx.v14.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v14.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v14.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v14.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v14.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v14.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v14.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v14.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v21,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslh v0,v20,v13
	ctx.v0.u16[0] = ctx.v20.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v0.u16[1] = ctx.v20.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v0.u16[2] = ctx.v20.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v0.u16[3] = ctx.v20.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v0.u16[4] = ctx.v20.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v0.u16[5] = ctx.v20.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v0.u16[6] = ctx.v20.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v0.u16[7] = ctx.v20.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v19,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v17,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// stvx128 v15,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v14,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v14.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v24,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82F8A62C:
	// lbzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r5,r29,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r3,r7,r6
	ctx.r3.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r6,r5,r6
	ctx.r6.u64 = ctx.r5.u64 + ctx.r6.u64;
	// rlwinm r7,r3,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r7.u16);
	// sthx r3,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// bdnz 0x82f8a62c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8A62C;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82F8A660:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82f8a874
	if (!ctx.cr6.gt) goto loc_82F8A874;
	// addi r11,r7,-1
	ctx.r11.s64 = ctx.r7.s64 + -1;
	// rlwinm r25,r6,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r24,r6,3,0,28
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r23,r4,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r22,r4,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r4,3,0,28
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r6,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,16
	ctx.r11.s64 = 16;
loc_82F8A694:
	// add r9,r22,r3
	ctx.r9.u64 = ctx.r22.u64 + ctx.r3.u64;
	// lvx128 v43,r23,r3
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r23.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r8,r23,r3
	ctx.r8.u64 = ctx.r23.u64 + ctx.r3.u64;
	// lvx128 v42,r3,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v45,r0,r3
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r27,r3,r4
	ctx.r27.u64 = ctx.r3.u64 + ctx.r4.u64;
	// lvx128 v44,r22,r3
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r22.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r30,r31,r4
	ctx.r30.u64 = ctx.r31.u64 + ctx.r4.u64;
	// lvx128 v41,r3,r11
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r28,r8,r4
	ctx.r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v40,r9,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r8,r11
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r26,r30,r4
	ctx.r26.u64 = ctx.r30.u64 + ctx.r4.u64;
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r29,r21,r3
	ctx.r29.u64 = ctx.r21.u64 + ctx.r3.u64;
	// lvx128 v35,r27,r11
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvsl v7,r0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v11,v43,v37,v6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v39,r8,r4
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// add r27,r24,r5
	ctx.r27.u64 = ctx.r24.u64 + ctx.r5.u64;
	// lvx128 v38,r31,r4
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v12,v42,v35,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v36,r28,r11
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r8,r25,r5
	ctx.r8.u64 = ctx.r25.u64 + ctx.r5.u64;
	// lvx128 v34,r9,r11
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v33,r31,r11
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r30,r11
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvsl v5,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r28,r10,r8
	ctx.r28.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvsl v4,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvsl v3,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v10,v39,v36,v5
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v9,v44,v34,v4
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvsl v1,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v8,v40,v33,v3
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm128 v7,v38,v32,v2
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v63,r26,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v6,v45,v41,v1
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// lvx128 v62,r30,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v3,v0,v12
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r29,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v2,v0,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r21,r3
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r21.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmrghb v1,v0,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v5,r0,r26
	temp.u32 = ctx.r26.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v31,v0,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v4,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v30,v0,v8
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r31,r10,r27
	ctx.r31.u64 = ctx.r10.u64 + ctx.r27.u64;
	// vmrghb v29,v0,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vadduhm v27,v2,v3
	_mm_store_si128((__m128i*)ctx.v27.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v2.u16), _mm_load_si128((__m128i*)ctx.v3.u16)));
	// vmrghb v26,v0,v6
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vadduhm v25,v1,v2
	_mm_store_si128((__m128i*)ctx.v25.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v1.u16), _mm_load_si128((__m128i*)ctx.v2.u16)));
	// vperm128 v5,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vadduhm v24,v31,v1
	_mm_store_si128((__m128i*)ctx.v24.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v31.u16), _mm_load_si128((__m128i*)ctx.v1.u16)));
	// vperm128 v4,v60,v61,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vadduhm v23,v30,v31
	_mm_store_si128((__m128i*)ctx.v23.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v30.u16), _mm_load_si128((__m128i*)ctx.v31.u16)));
	// vadduhm v22,v29,v30
	_mm_store_si128((__m128i*)ctx.v22.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v29.u16), _mm_load_si128((__m128i*)ctx.v30.u16)));
	// add r9,r10,r31
	ctx.r9.u64 = ctx.r10.u64 + ctx.r31.u64;
	// vadduhm v21,v3,v26
	_mm_store_si128((__m128i*)ctx.v21.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v3.u16), _mm_load_si128((__m128i*)ctx.v26.u16)));
	// add r26,r10,r5
	ctx.r26.u64 = ctx.r10.u64 + ctx.r5.u64;
	// vmrghb v28,v0,v5
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// vmrghb v14,v0,v4
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v20,v27,v13
	ctx.v20.u16[0] = ctx.v27.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v27.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v27.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v27.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v27.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v27.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v27.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v27.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v12,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v19,v25,v13
	ctx.v19.u16[0] = ctx.v25.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v25.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v25.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v25.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v25.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v25.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v25.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v25.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v11,v0,v11
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v18,v21,v13
	ctx.v18.u16[0] = ctx.v21.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v18.u16[1] = ctx.v21.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v18.u16[2] = ctx.v21.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v18.u16[3] = ctx.v21.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v18.u16[4] = ctx.v21.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v18.u16[5] = ctx.v21.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v18.u16[6] = ctx.v21.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v18.u16[7] = ctx.v21.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v10,v0,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v17,v24,v13
	ctx.v17.u16[0] = ctx.v24.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v17.u16[1] = ctx.v24.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v17.u16[2] = ctx.v24.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v17.u16[3] = ctx.v24.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v17.u16[4] = ctx.v24.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v17.u16[5] = ctx.v24.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v17.u16[6] = ctx.v24.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v17.u16[7] = ctx.v24.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v9,v0,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v16,v23,v13
	ctx.v16.u16[0] = ctx.v23.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v23.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v23.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v23.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v23.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v23.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v23.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v23.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v8,v0,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v15,v22,v13
	ctx.v15.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v15.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v15.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v15.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v15.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v15.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v15.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v15.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrglb v7,v0,v7
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglb v5,v0,v5
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglb v6,v0,v6
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrglb v4,v0,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpacklo_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vadduhm v3,v28,v29
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v28.u16), _mm_load_si128((__m128i*)ctx.v29.u16)));
	// stvx128 v18,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v2,v14,v28
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v14.u16), _mm_load_si128((__m128i*)ctx.v28.u16)));
	// stvx128 v20,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v1,v12,v6
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// stvx128 v19,r25,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v31,v11,v12
	_mm_store_si128((__m128i*)ctx.v31.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// stvx128 v17,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v30,v10,v11
	_mm_store_si128((__m128i*)ctx.v30.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// stvx128 v16,r24,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslh v29,v3,v13
	ctx.v29.u16[0] = ctx.v3.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v3.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v3.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v3.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v3.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v3.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v3.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v3.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v15,r10,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v28,v9,v10
	_mm_store_si128((__m128i*)ctx.v28.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v9.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// vslh v27,v2,v13
	ctx.v27.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v26,v8,v9
	_mm_store_si128((__m128i*)ctx.v26.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v8.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// vslh v25,v1,v13
	ctx.v25.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v29,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v24,v7,v8
	_mm_store_si128((__m128i*)ctx.v24.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v7.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// vslh v23,v31,v13
	ctx.v23.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v23.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v23.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v23.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v23.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v23.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v23.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v23.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v27,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v22,v5,v7
	_mm_store_si128((__m128i*)ctx.v22.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v5.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// vslh v21,v30,v13
	ctx.v21.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v25,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v20,v4,v5
	_mm_store_si128((__m128i*)ctx.v20.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v4.u16), _mm_load_si128((__m128i*)ctx.v5.u16)));
	// add r5,r10,r30
	ctx.r5.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vslh v19,v28,v13
	ctx.v19.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v19.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v19.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v19.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v19.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v19.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v19.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v19.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v23,r26,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslh v18,v26,v13
	ctx.v18.u16[0] = ctx.v26.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v18.u16[1] = ctx.v26.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v18.u16[2] = ctx.v26.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v18.u16[3] = ctx.v26.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v18.u16[4] = ctx.v26.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v18.u16[5] = ctx.v26.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v18.u16[6] = ctx.v26.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v18.u16[7] = ctx.v26.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v17,v24,v13
	ctx.v17.u16[0] = ctx.v24.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v17.u16[1] = ctx.v24.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v17.u16[2] = ctx.v24.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v17.u16[3] = ctx.v24.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v17.u16[4] = ctx.v24.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v17.u16[5] = ctx.v24.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v17.u16[6] = ctx.v24.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v17.u16[7] = ctx.v24.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v21,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v21.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vslh v16,v22,v13
	ctx.v16.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v15,v20,v13
	ctx.v15.u16[0] = ctx.v20.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v15.u16[1] = ctx.v20.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v15.u16[2] = ctx.v20.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v15.u16[3] = ctx.v20.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v15.u16[4] = ctx.v20.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v15.u16[5] = ctx.v20.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v15.u16[6] = ctx.v20.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v15.u16[7] = ctx.v20.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvx128 v19,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v18,r27,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v17,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v16,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v15,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82f8a694
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8A694;
loc_82F8A874:
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r20,16
	ctx.r11.s64 = ctx.r20.s64 + 16;
	// addi r10,r19,32
	ctx.r10.s64 = ctx.r19.s64 + 32;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82f8a8d4
	if (!ctx.cr6.gt) goto loc_82F8A8D4;
	// addi r8,r7,-1
	ctx.r8.s64 = ctx.r7.s64 + -1;
	// rlwinm r5,r6,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82F8A8A0:
	// lbzx r7,r11,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r31,r9,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r31,r7
	ctx.r8.u64 = ctx.r31.u64 + ctx.r7.u64;
	// rlwinm r6,r6,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// rlwinm r6,r8,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// sthx r6,r5,r10
	PPC_STORE_U16(ctx.r5.u32 + ctx.r10.u32, ctx.r6.u16);
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bdnz 0x82f8a8a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8A8A0;
loc_82F8A8D4:
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8A8D8"))) PPC_WEAK_FUNC(sub_82F8A8D8);
PPC_FUNC_IMPL(__imp__sub_82F8A8D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8A8E0;
	__savegprlr_27(ctx, base);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r3,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r8,r4,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r10,r8,r3
	ctx.r10.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lvsl v7,r0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// li r11,16
	ctx.r11.s64 = 16;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// add r31,r3,r4
	ctx.r31.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r30,r10,r4
	ctx.r30.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r8,r9,r4
	ctx.r8.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r10,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r6,r8,r4
	ctx.r6.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lvx128 v56,r31,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r28,r27,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lvsl v6,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r29,r6,r4
	ctx.r29.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lvx128 v57,r30,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v59,r10,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v63,v56,v6
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvsl v5,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r31,r31,r3
	ctx.r31.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lvsl v4,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// rlwinm r10,r27,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// lvx128 v55,r9,r11
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v60,v58,v5
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvsl v2,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v31,v59,v57,v4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// lvx128 v54,r8,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v12,v0,v3
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v30,v61,v55,v2
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v51,r9,r4
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvsl v6,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v11,v0,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v53,r6,r11
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v31
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v50,r8,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v31,v51,v54,v6
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v48,r3,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghb v9,v0,v30
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvsl v3,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// add r30,r28,r5
	ctx.r30.u64 = ctx.r28.u64 + ctx.r5.u64;
	// lvx128 v52,r29,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v2,v62,v48,v7
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v49,r6,r4
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v30,v50,v53,v3
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvsl v1,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vmrghb v8,v0,v31
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v47,r31,r11
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vslh v29,v12,v13
	ctx.v29.u16[0] = ctx.v12.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v12.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v12.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v12.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v12.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v12.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v12.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v12.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v46,r0,r31
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vperm128 v28,v49,v52,v1
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// lvsl v7,r0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vslh v4,v11,v13
	ctx.v4.u16[0] = ctx.v11.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v4.u16[1] = ctx.v11.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v4.u16[2] = ctx.v11.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v4.u16[3] = ctx.v11.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v4.u16[4] = ctx.v11.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v4.u16[5] = ctx.v11.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v4.u16[6] = ctx.v11.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v4.u16[7] = ctx.v11.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v3,v10,v13
	ctx.v3.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v3.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v3.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v3.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v3.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v3.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v3.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v3.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// rlwinm r8,r27,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// vperm128 v31,v46,v47,v7
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// add r6,r10,r30
	ctx.r6.u64 = ctx.r10.u64 + ctx.r30.u64;
	// vmrghb v7,v0,v30
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vmrghb v6,v0,v28
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v1,v9,v13
	ctx.v1.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v1.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v1.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v1.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v1.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v1.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v1.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v1.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vmrghb v30,v0,v2
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r29,r8,r5
	ctx.r29.u64 = ctx.r8.u64 + ctx.r5.u64;
	// add r28,r10,r6
	ctx.r28.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vmrghb v5,v0,v31
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// rlwinm r31,r4,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vslh v28,v8,v13
	ctx.v28.u16[0] = ctx.v8.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v28.u16[1] = ctx.v8.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v28.u16[2] = ctx.v8.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v28.u16[3] = ctx.v8.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v28.u16[4] = ctx.v8.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v28.u16[5] = ctx.v8.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v28.u16[6] = ctx.v8.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v28.u16[7] = ctx.v8.u16[7] << (ctx.v13.u16[7] & 0xF);
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
	// vslh v27,v7,v13
	ctx.v27.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// addi r9,r5,16
	ctx.r9.s64 = ctx.r5.s64 + 16;
	// vadduhm v26,v4,v12
	_mm_store_si128((__m128i*)ctx.v26.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v4.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// vslh v25,v6,v13
	ctx.v25.u16[0] = ctx.v6.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v6.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v6.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v6.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v6.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v6.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v6.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v6.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v24,v3,v11
	_mm_store_si128((__m128i*)ctx.v24.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v3.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// vadduhm v23,v29,v30
	_mm_store_si128((__m128i*)ctx.v23.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v29.u16), _mm_load_si128((__m128i*)ctx.v30.u16)));
	// vslh v21,v5,v13
	ctx.v21.u16[0] = ctx.v5.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v5.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v5.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v5.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v5.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v5.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v5.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v5.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vadduhm v22,v1,v10
	_mm_store_si128((__m128i*)ctx.v22.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v1.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// vadduhm v20,v28,v9
	_mm_store_si128((__m128i*)ctx.v20.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v28.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// vadduhm v18,v23,v12
	_mm_store_si128((__m128i*)ctx.v18.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v23.u16), _mm_load_si128((__m128i*)ctx.v12.u16)));
	// vadduhm v19,v27,v8
	_mm_store_si128((__m128i*)ctx.v19.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v27.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// vadduhm v17,v26,v11
	_mm_store_si128((__m128i*)ctx.v17.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v26.u16), _mm_load_si128((__m128i*)ctx.v11.u16)));
	// vadduhm v16,v25,v7
	_mm_store_si128((__m128i*)ctx.v16.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v25.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// vadduhm v15,v24,v10
	_mm_store_si128((__m128i*)ctx.v15.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v24.u16), _mm_load_si128((__m128i*)ctx.v10.u16)));
	// stvx128 v18,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v14,v21,v6
	_mm_store_si128((__m128i*)ctx.v14.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v21.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// vadduhm v0,v22,v9
	_mm_store_si128((__m128i*)ctx.v0.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v22.u16), _mm_load_si128((__m128i*)ctx.v9.u16)));
	// stvx128 v17,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v13,v20,v8
	_mm_store_si128((__m128i*)ctx.v13.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v20.u16), _mm_load_si128((__m128i*)ctx.v8.u16)));
	// vadduhm v12,v19,v7
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v19.u16), _mm_load_si128((__m128i*)ctx.v7.u16)));
	// stvx128 v15,r8,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v15.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vadduhm v11,v16,v6
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v16.u16), _mm_load_si128((__m128i*)ctx.v6.u16)));
	// vadduhm v10,v14,v5
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v14.u16), _mm_load_si128((__m128i*)ctx.v5.u16)));
	// stvx128 v0,r10,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82f8aad0
	if (!ctx.cr6.gt) goto loc_82F8AAD0;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rlwinm r7,r7,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82F8AA90:
	// lbzx r6,r11,r4
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// lbzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// lbz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r5,r6,1
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// rotlwi r30,r30,1
	ctx.r30.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// add r5,r7,r5
	ctx.r5.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 + ctx.r7.u64;
	// sth r5,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r5.u16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// sthx r3,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r3.u16);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x82f8aa90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8AA90;
loc_82F8AAD0:
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8AAD4"))) PPC_WEAK_FUNC(sub_82F8AAD4);
PPC_FUNC_IMPL(__imp__sub_82F8AAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8AAD8"))) PPC_WEAK_FUNC(sub_82F8AAD8);
PPC_FUNC_IMPL(__imp__sub_82F8AAD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8AAE0;
	__savegprlr_28(ctx, base);
	// sth r8,-50(r1)
	PPC_STORE_U16(ctx.r1.u32 + -50, ctx.r8.u16);
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v12,4
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(4)));
	// rlwinm r8,r4,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r31,-2924(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2924);
	// vslh v0,v10,v13
	ctx.v0.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v0.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v0.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v0.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v0.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v0.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v0.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v0.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r29,r1,-64
	ctx.r29.s64 = ctx.r1.s64 + -64;
	// vaddshs v5,v0,v10
	_mm_store_si128((__m128i*)ctx.v5.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// add r30,r11,r9
	ctx.r30.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v63,r3,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r11,r3
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v7,r11,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vslh v4,v9,v13
	ctx.v4.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v4.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v4.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v4.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v4.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v4.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v4.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v4.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v10,v63,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vslh v2,v8,v13
	ctx.v2.u16[0] = ctx.v8.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v2.u16[1] = ctx.v8.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v2.u16[2] = ctx.v8.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v2.u16[3] = ctx.v8.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v2.u16[4] = ctx.v8.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v2.u16[5] = ctx.v8.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v2.u16[6] = ctx.v8.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v2.u16[7] = ctx.v8.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v31,v7,v13
	ctx.v31.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v31.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v31.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v31.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v31.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v31.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v31.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v31.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v62,r4,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vslh v30,v6,v13
	ctx.v30.u16[0] = ctx.v6.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v30.u16[1] = ctx.v6.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v30.u16[2] = ctx.v6.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v30.u16[3] = ctx.v6.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v30.u16[4] = ctx.v6.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v30.u16[5] = ctx.v6.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v30.u16[6] = ctx.v6.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v30.u16[7] = ctx.v6.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v61,r9,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r30,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddshs v29,v5,v3
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// lvx128 v59,r8,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v28,v9,v62,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v1,r0,r29
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vperm128 v27,v8,v61,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v26,v4,v9
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vperm128 v25,v7,v60,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsplth v11,v1,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u16), _mm_set1_epi16(short(0x100))));
	// vaddshs v24,v2,v8
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vaddshs v22,v31,v7
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// vperm128 v23,v6,v59,v0
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v21,v30,v6
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vaddshs v19,v26,v28
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vaddshs v20,v29,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// vaddshs v18,v24,v27
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// lvx128 v5,r11,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddshs v17,v22,v25
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v25.s16)));
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v16,v21,v23
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vsrah v15,v20,v12
	ctx.v15.s16[0] = ctx.v20.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v20.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v20.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v20.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v20.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v20.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v20.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v20.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// add r3,r29,r5
	ctx.r3.u64 = ctx.r29.u64 + ctx.r5.u64;
	// vaddshs v14,v19,v11
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v58,r4,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddshs v10,v18,v11
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r31,r8,r6
	ctx.r31.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vaddshs v9,v17,v11
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v4,r11,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddshs v8,v16,v11
	_mm_store_si128((__m128i*)ctx.v8.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v3,r11,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vslh v7,v5,v13
	ctx.v7.u16[0] = ctx.v5.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v7.u16[1] = ctx.v5.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v7.u16[2] = ctx.v5.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v7.u16[3] = ctx.v5.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v7.u16[4] = ctx.v5.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v7.u16[5] = ctx.v5.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v7.u16[6] = ctx.v5.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v7.u16[7] = ctx.v5.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r28,r11,r9
	ctx.r28.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v57,r9,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r29,r3,r6
	ctx.r29.u64 = ctx.r3.u64 + ctx.r6.u64;
	// vsrah v6,v14,v12
	ctx.v6.s16[0] = ctx.v14.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v6.s16[1] = ctx.v14.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v6.s16[2] = ctx.v14.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v6.s16[3] = ctx.v14.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v6.s16[4] = ctx.v14.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v6.s16[5] = ctx.v14.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v6.s16[6] = ctx.v14.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v6.s16[7] = ctx.v14.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// li r11,4
	ctx.r11.s64 = 4;
	// vsrah v2,v10,v12
	ctx.v2.s16[0] = ctx.v10.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v2.s16[1] = ctx.v10.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v2.s16[2] = ctx.v10.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v2.s16[3] = ctx.v10.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v2.s16[4] = ctx.v10.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v2.s16[5] = ctx.v10.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v2.s16[6] = ctx.v10.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v2.s16[7] = ctx.v10.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vperm128 v1,v5,v58,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsrah v31,v9,v12
	ctx.v31.s16[0] = ctx.v9.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v31.s16[1] = ctx.v9.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v31.s16[2] = ctx.v9.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v31.s16[3] = ctx.v9.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v31.s16[4] = ctx.v9.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v31.s16[5] = ctx.v9.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v31.s16[6] = ctx.v9.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v31.s16[7] = ctx.v9.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// vsrah v30,v8,v12
	ctx.v30.s16[0] = ctx.v8.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v30.s16[1] = ctx.v8.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v30.s16[2] = ctx.v8.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v30.s16[3] = ctx.v8.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v30.s16[4] = ctx.v8.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v30.s16[5] = ctx.v8.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v30.s16[6] = ctx.v8.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v30.s16[7] = ctx.v8.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v56,v15,v15
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// vslh v29,v4,v13
	ctx.v29.u16[0] = ctx.v4.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v4.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v4.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v4.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v4.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v4.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v4.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v4.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v28,v7,v5
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vslh v27,v3,v13
	ctx.v27.u16[0] = ctx.v3.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v3.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v3.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v3.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v3.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v3.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v3.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v3.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v55,r28,r10
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v26,v4,v57,v0
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v25,v29,v4
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vpkshus128 v54,v6,v6
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vperm128 v24,v3,v55,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v22,v27,v3
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vaddshs v23,v28,v1
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vpkshus128 v53,v2,v2
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vpkshus128 v52,v31,v31
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// stvewx128 v56,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v21,v25,v26
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// vpkshus128 v51,v30,v30
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vaddshs v19,v22,v24
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v24.s16)));
	// stvewx128 v56,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v20,v23,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v54,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v18,v21,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v54,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v16,v19,v11
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v17,v20,v12
	ctx.v17.s16[0] = ctx.v20.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v17.s16[1] = ctx.v20.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v17.s16[2] = ctx.v20.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v17.s16[3] = ctx.v20.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v17.s16[4] = ctx.v20.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v17.s16[5] = ctx.v20.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v17.s16[6] = ctx.v20.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v17.s16[7] = ctx.v20.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v53,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r0,r29
	ea = (ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v15,v18,v12
	ctx.v15.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v52,r29,r11
	ea = (ctx.r29.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v14,v16,v12
	ctx.v14.s16[0] = ctx.v16.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v14.s16[1] = ctx.v16.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v14.s16[2] = ctx.v16.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v14.s16[3] = ctx.v16.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v14.s16[4] = ctx.v16.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v14.s16[5] = ctx.v16.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v14.s16[6] = ctx.v16.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v14.s16[7] = ctx.v16.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v51,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v50,v17,v17
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// stvewx128 v51,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v49,v15,v15
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// vpkshus128 v48,v14,v14
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v14.s16)));
	// stvewx128 v50,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r31,r11
	ea = (ctx.r31.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8ACBC"))) PPC_WEAK_FUNC(sub_82F8ACBC);
PPC_FUNC_IMPL(__imp__sub_82F8ACBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8ACC0"))) PPC_WEAK_FUNC(sub_82F8ACC0);
PPC_FUNC_IMPL(__imp__sub_82F8ACC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82F8ACC8;
	__savegprlr_22(ctx, base);
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// sth r8,-98(r1)
	PPC_STORE_U16(ctx.r1.u32 + -98, ctx.r8.u16);
	// vspltish v12,4
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(4)));
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lwz r11,-2924(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -2924);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsplth v11,v0,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u16), _mm_set1_epi16(short(0x100))));
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bne cr6,0x82f8ae8c
	if (!ctx.cr6.eq) goto loc_82F8AE8C;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r3
	ctx.r30.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r7,r4,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lvx128 v63,r3,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// add r7,r7,r3
	ctx.r7.u64 = ctx.r7.u64 + ctx.r3.u64;
	// lvx128 v5,r10,r3
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v10,v63,v0
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r31,r10,r8
	ctx.r31.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lvx128 v61,r30,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// vperm128 v2,v5,v61,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r10,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddshs v31,v4,v10
	_mm_store_si128((__m128i*)ctx.v31.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v4.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r10,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r8,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v28,v2,v5
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// lvx128 v60,r31,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vslh v25,v31,v13
	ctx.v25.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v59,r7,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v3,v9,v62,v0
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v58,r4,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v7,v60,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v29,v8,v59,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v20,v28,v13
	ctx.v20.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm128 v27,v6,v58,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v19,v25,v11
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v30,v3,v9
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// lvx128 v4,r10,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddshs v26,v1,v7
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// lvx128 v57,r3,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v23,v29,v8
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// vaddshs v22,v27,v6
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vperm128 v17,v4,v57,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v9,v20,v11
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vslh v24,v30,v13
	ctx.v24.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// li r10,4
	ctx.r10.s64 = 4;
	// vslh v21,v26,v13
	ctx.v21.u16[0] = ctx.v26.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v21.u16[1] = ctx.v26.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v21.u16[2] = ctx.v26.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v21.u16[3] = ctx.v26.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v21.u16[4] = ctx.v26.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v21.u16[5] = ctx.v26.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v21.u16[6] = ctx.v26.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v21.u16[7] = ctx.v26.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vslh v18,v23,v13
	ctx.v18.u16[0] = ctx.v23.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v18.u16[1] = ctx.v23.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v18.u16[2] = ctx.v23.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v18.u16[3] = ctx.v23.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v18.u16[4] = ctx.v23.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v18.u16[5] = ctx.v23.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v18.u16[6] = ctx.v23.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v18.u16[7] = ctx.v23.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vslh v16,v22,v13
	ctx.v16.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vsrah v6,v19,v12
	ctx.v6.s16[0] = ctx.v19.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v6.s16[1] = ctx.v19.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v6.s16[2] = ctx.v19.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v6.s16[3] = ctx.v19.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v6.s16[4] = ctx.v19.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v6.s16[5] = ctx.v19.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v6.s16[6] = ctx.v19.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v6.s16[7] = ctx.v19.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// lvx128 v10,r0,r31
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vsrah v5,v9,v12
	ctx.v5.s16[0] = ctx.v9.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v5.s16[1] = ctx.v9.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v5.s16[2] = ctx.v9.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v5.s16[3] = ctx.v9.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v5.s16[4] = ctx.v9.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v5.s16[5] = ctx.v9.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v5.s16[6] = ctx.v9.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v5.s16[7] = ctx.v9.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// lvx128 v56,r31,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v15,v24,v11
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r4,r7,r6
	ctx.r4.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vaddshs v14,v21,v11
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r30,r8,r6
	ctx.r30.u64 = ctx.r8.u64 + ctx.r6.u64;
	// vpkshus128 v55,v6,v6
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// vaddshs v8,v18,v11
	_mm_store_si128((__m128i*)ctx.v8.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v7,v16,v11
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v54,v5,v5
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// vaddshs v30,v17,v4
	_mm_store_si128((__m128i*)ctx.v30.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// add r6,r4,r6
	ctx.r6.u64 = ctx.r4.u64 + ctx.r6.u64;
	// vsrah v3,v15,v12
	ctx.v3.s16[0] = ctx.v15.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v3.s16[1] = ctx.v15.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v3.s16[2] = ctx.v15.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v3.s16[3] = ctx.v15.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v3.s16[4] = ctx.v15.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v3.s16[5] = ctx.v15.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v3.s16[6] = ctx.v15.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v3.s16[7] = ctx.v15.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vperm128 v28,v10,v56,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsrah v2,v14,v12
	ctx.v2.s16[0] = ctx.v14.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v2.s16[1] = ctx.v14.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v2.s16[2] = ctx.v14.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v2.s16[3] = ctx.v14.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v2.s16[4] = ctx.v14.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v2.s16[5] = ctx.v14.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v2.s16[6] = ctx.v14.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v2.s16[7] = ctx.v14.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v1,v8,v12
	ctx.v1.s16[0] = ctx.v8.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v1.s16[1] = ctx.v8.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v1.s16[2] = ctx.v8.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v1.s16[3] = ctx.v8.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v1.s16[4] = ctx.v8.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v1.s16[5] = ctx.v8.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v1.s16[6] = ctx.v8.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v1.s16[7] = ctx.v8.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v31,v7,v12
	ctx.v31.s16[0] = ctx.v7.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v31.s16[1] = ctx.v7.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v31.s16[2] = ctx.v7.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v31.s16[3] = ctx.v7.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v31.s16[4] = ctx.v7.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v31.s16[5] = ctx.v7.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v31.s16[6] = ctx.v7.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v31.s16[7] = ctx.v7.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vslh v29,v30,v13
	ctx.v29.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v29.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v29.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v29.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v29.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v29.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v29.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v29.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvewx128 v55,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v55,r5,r10
	ea = (ctx.r5.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v53,v3,v3
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vpkshus128 v52,v2,v2
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// stvewx128 v54,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v51,v1,v1
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v1.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vaddshs v27,v29,v11
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v50,v31,v31
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vaddshs v26,v28,v10
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// stvewx128 v54,r3,r10
	ea = (ctx.r3.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v25,v27,v12
	ctx.v25.s16[0] = ctx.v27.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v25.s16[1] = ctx.v27.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v25.s16[2] = ctx.v27.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v25.s16[3] = ctx.v27.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v25.s16[4] = ctx.v27.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v25.s16[5] = ctx.v27.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v25.s16[6] = ctx.v27.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v25.s16[7] = ctx.v27.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v53,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v53,r8,r10
	ea = (ctx.r8.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vslh v24,v26,v13
	ctx.v24.u16[0] = ctx.v26.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v26.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v26.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v26.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v26.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v26.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v26.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v26.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvewx128 v52,r30,r10
	ea = (ctx.r30.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v49,v25,v25
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v25.s16)));
	// stvewx128 v51,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r9,r10
	ea = (ctx.r9.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v23,v24,v11
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// stvewx128 v50,r7,r10
	ea = (ctx.r7.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v22,v23,v12
	ctx.v22.s16[0] = ctx.v23.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v22.s16[1] = ctx.v23.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v22.s16[2] = ctx.v23.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v22.s16[3] = ctx.v23.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v22.s16[4] = ctx.v23.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v22.s16[5] = ctx.v23.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v22.s16[6] = ctx.v23.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v22.s16[7] = ctx.v23.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v49,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r4,r10
	ea = (ctx.r4.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v48,v22,v22
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v22.s16)));
	// stvewx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r6,r10
	ea = (ctx.r6.u32 + ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82F8AE8C:
	// li r11,2
	ctx.r11.s64 = 2;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r4,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r25,r6,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r9,r4,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r23,r4,4,0,27
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r22,r6,3,0,28
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
loc_82F8AEB8:
	// add r8,r27,r3
	ctx.r8.u64 = ctx.r27.u64 + ctx.r3.u64;
	// lvx128 v28,r9,r3
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r29,r9,r3
	ctx.r29.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lvx128 v1,r27,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r7,r26,r3
	ctx.r7.u64 = ctx.r26.u64 + ctx.r3.u64;
	// lvx128 v31,r26,r3
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lvx128 v4,r3,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r4,r9,r7
	ctx.r4.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lvx128 v2,r0,r3
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r8,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r28,r24,r5
	ctx.r28.u64 = ctx.r24.u64 + ctx.r5.u64;
	// lvx128 v10,r29,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// add r31,r9,r4
	ctx.r31.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvx128 v44,r29,r10
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm v25,v1,v9,v0
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v47,r8,r10
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm v22,v28,v10,v0
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v8,r30,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v18,v10,v44,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v43,r30,r10
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v21,v9,v47,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v7,r7,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm v24,v2,v4,v0
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v46,r7,r10
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v17,v8,v43,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v6,r4,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v10,v18,v10
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// lvx128 v45,r4,r10
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v20,v7,v46,v0
	_mm_store_si128((__m128i*)ctx.v20.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v5,r31,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v16,v21,v9
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vperm128 v19,v6,v45,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v42,r31,r10
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddshs v9,v17,v8
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vperm v23,v31,v7,v0
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v15,v20,v7
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// vperm128 v14,v5,v42,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v18,v10,v13
	ctx.v18.u16[0] = ctx.v10.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v18.u16[1] = ctx.v10.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v18.u16[2] = ctx.v10.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v18.u16[3] = ctx.v10.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v18.u16[4] = ctx.v10.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v18.u16[5] = ctx.v10.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v18.u16[6] = ctx.v10.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v18.u16[7] = ctx.v10.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v30,r9,r8
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddshs v7,v19,v6
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// add r8,r9,r31
	ctx.r8.u64 = ctx.r9.u64 + ctx.r31.u64;
	// vslh v20,v16,v13
	ctx.v20.u16[0] = ctx.v16.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v16.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v16.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v16.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v16.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v16.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v16.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v16.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v41,r3,r10
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vslh v17,v9,v13
	ctx.v17.u16[0] = ctx.v9.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v17.u16[1] = ctx.v9.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v17.u16[2] = ctx.v9.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v17.u16[3] = ctx.v9.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v17.u16[4] = ctx.v9.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v17.u16[5] = ctx.v9.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v17.u16[6] = ctx.v9.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v17.u16[7] = ctx.v9.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm v21,v30,v8,v0
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v16,v15,v13
	ctx.v16.u16[0] = ctx.v15.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v16.u16[1] = ctx.v15.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v16.u16[2] = ctx.v15.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v16.u16[3] = ctx.v15.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v16.u16[4] = ctx.v15.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v16.u16[5] = ctx.v15.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v16.u16[6] = ctx.v15.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v16.u16[7] = ctx.v15.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm128 v19,v4,v41,v0
	_mm_store_si128((__m128i*)ctx.v19.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v15,v7,v13
	ctx.v15.u16[0] = ctx.v7.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v15.u16[1] = ctx.v7.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v15.u16[2] = ctx.v7.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v15.u16[3] = ctx.v7.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v15.u16[4] = ctx.v7.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v15.u16[5] = ctx.v7.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v15.u16[6] = ctx.v7.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v15.u16[7] = ctx.v7.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v27,r9,r4
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddshs v14,v14,v5
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// lvx128 v29,r9,r7
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vaddshs v10,v18,v11
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v26,r9,r31
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddshs v9,v20,v11
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v3,r8,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddshs v8,v17,v11
	_mm_store_si128((__m128i*)ctx.v8.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// lvx128 v40,r8,r10
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddshs v7,v16,v11
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r4,r28,r6
	ctx.r4.u64 = ctx.r28.u64 + ctx.r6.u64;
	// vaddshs v20,v15,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vperm v18,v27,v5,v0
	_mm_store_si128((__m128i*)ctx.v18.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v17,v14,v13
	ctx.v17.u16[0] = ctx.v14.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v17.u16[1] = ctx.v14.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v17.u16[2] = ctx.v14.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v17.u16[3] = ctx.v14.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v17.u16[4] = ctx.v14.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v17.u16[5] = ctx.v14.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v17.u16[6] = ctx.v14.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v17.u16[7] = ctx.v14.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r7,r25,r5
	ctx.r7.u64 = ctx.r25.u64 + ctx.r5.u64;
	// vsrah v15,v10,v12
	ctx.v15.s16[0] = ctx.v10.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v10.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v10.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v10.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v10.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v10.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v10.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v10.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// add r31,r4,r6
	ctx.r31.u64 = ctx.r4.u64 + ctx.r6.u64;
	// vsrah v10,v9,v12
	ctx.v10.s16[0] = ctx.v9.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v10.s16[1] = ctx.v9.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v10.s16[2] = ctx.v9.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v10.s16[3] = ctx.v9.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v10.s16[4] = ctx.v9.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v10.s16[5] = ctx.v9.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v10.s16[6] = ctx.v9.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v10.s16[7] = ctx.v9.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vperm v6,v29,v6,v0
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsrah v9,v8,v12
	ctx.v9.s16[0] = ctx.v8.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v9.s16[1] = ctx.v8.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v9.s16[2] = ctx.v8.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v9.s16[3] = ctx.v8.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v9.s16[4] = ctx.v8.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v9.s16[5] = ctx.v8.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v9.s16[6] = ctx.v8.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v9.s16[7] = ctx.v8.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vperm128 v16,v3,v40,v0
	_mm_store_si128((__m128i*)ctx.v16.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v2,v24,v2
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vperm v14,v26,v3,v0
	_mm_store_si128((__m128i*)ctx.v14.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsrah v8,v7,v12
	ctx.v8.s16[0] = ctx.v7.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v8.s16[1] = ctx.v7.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v8.s16[2] = ctx.v7.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v8.s16[3] = ctx.v7.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v8.s16[4] = ctx.v7.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v8.s16[5] = ctx.v7.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v8.s16[6] = ctx.v7.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v8.s16[7] = ctx.v7.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// add r3,r23,r3
	ctx.r3.u64 = ctx.r23.u64 + ctx.r3.u64;
	// vaddshs v28,v22,v28
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vaddshs v24,v21,v30
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vsrah v7,v20,v12
	ctx.v7.s16[0] = ctx.v20.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v7.s16[1] = ctx.v20.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v7.s16[2] = ctx.v20.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v7.s16[3] = ctx.v20.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v7.s16[4] = ctx.v20.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v7.s16[5] = ctx.v20.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v7.s16[6] = ctx.v20.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v7.s16[7] = ctx.v20.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v5,v17,v11
	_mm_store_si128((__m128i*)ctx.v5.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v25,v25,v1
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vaddshs v22,v19,v4
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vaddshs v21,v23,v31
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// vaddshs v19,v6,v29
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vslh v20,v2,v13
	ctx.v20.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v17,v22,v13
	ctx.v17.u16[0] = ctx.v22.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v17.u16[1] = ctx.v22.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v17.u16[2] = ctx.v22.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v17.u16[3] = ctx.v22.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v17.u16[4] = ctx.v22.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v17.u16[5] = ctx.v22.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v17.u16[6] = ctx.v22.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v17.u16[7] = ctx.v22.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v4,v18,v27
	_mm_store_si128((__m128i*)ctx.v4.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// vslh v6,v28,v13
	ctx.v6.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v6.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v6.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v6.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v6.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v6.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v6.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v6.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v1,v14,v26
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// vaddshs v3,v16,v3
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vslh v2,v25,v13
	ctx.v2.u16[0] = ctx.v25.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v2.u16[1] = ctx.v25.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v2.u16[2] = ctx.v25.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v2.u16[3] = ctx.v25.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v2.u16[4] = ctx.v25.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v2.u16[5] = ctx.v25.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v2.u16[6] = ctx.v25.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v2.u16[7] = ctx.v25.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v31,v24,v13
	ctx.v31.u16[0] = ctx.v24.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v31.u16[1] = ctx.v24.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v31.u16[2] = ctx.v24.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v31.u16[3] = ctx.v24.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v31.u16[4] = ctx.v24.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v31.u16[5] = ctx.v24.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v31.u16[6] = ctx.v24.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v31.u16[7] = ctx.v24.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v30,v21,v13
	ctx.v30.u16[0] = ctx.v21.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v30.u16[1] = ctx.v21.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v30.u16[2] = ctx.v21.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v30.u16[3] = ctx.v21.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v30.u16[4] = ctx.v21.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v30.u16[5] = ctx.v21.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v30.u16[6] = ctx.v21.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v30.u16[7] = ctx.v21.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v29,v17,v11
	_mm_store_si128((__m128i*)ctx.v29.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v28,v20,v11
	_mm_store_si128((__m128i*)ctx.v28.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v27,v19,v13
	ctx.v27.u16[0] = ctx.v19.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v19.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v19.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v19.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v19.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v19.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v19.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v19.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v26,v6,v11
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v6.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v25,v4,v13
	ctx.v25.u16[0] = ctx.v4.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v4.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v4.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v4.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v4.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v4.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v4.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v4.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vslh v24,v3,v13
	ctx.v24.u16[0] = ctx.v3.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v3.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v3.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v3.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v3.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v3.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v3.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v3.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v23,v2,v11
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v22,v1,v13
	ctx.v22.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v22.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v22.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v22.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v22.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v22.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v22.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v22.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v21,v31,v11
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v20,v30,v11
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v19,v29,v12
	ctx.v19.s16[0] = ctx.v29.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v19.s16[1] = ctx.v29.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v19.s16[2] = ctx.v29.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v19.s16[3] = ctx.v29.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v19.s16[4] = ctx.v29.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v19.s16[5] = ctx.v29.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v19.s16[6] = ctx.v29.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v19.s16[7] = ctx.v29.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v18,v28,v12
	ctx.v18.s16[0] = ctx.v28.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v18.s16[1] = ctx.v28.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v18.s16[2] = ctx.v28.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v18.s16[3] = ctx.v28.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v18.s16[4] = ctx.v28.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v18.s16[5] = ctx.v28.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v18.s16[6] = ctx.v28.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v18.s16[7] = ctx.v28.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v17,v27,v11
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v16,v26,v12
	ctx.v16.s16[0] = ctx.v26.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v16.s16[1] = ctx.v26.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v16.s16[2] = ctx.v26.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v16.s16[3] = ctx.v26.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v16.s16[4] = ctx.v26.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v16.s16[5] = ctx.v26.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v16.s16[6] = ctx.v26.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v16.s16[7] = ctx.v26.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v14,v25,v11
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v6,v24,v11
	_mm_store_si128((__m128i*)ctx.v6.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v39,v18,v19
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// vsrah v4,v23,v12
	ctx.v4.s16[0] = ctx.v23.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v4.s16[1] = ctx.v23.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v4.s16[2] = ctx.v23.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v4.s16[3] = ctx.v23.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v4.s16[4] = ctx.v23.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v4.s16[5] = ctx.v23.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v4.s16[6] = ctx.v23.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v4.s16[7] = ctx.v23.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v3,v22,v11
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v38,v16,v15
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// vsrah v2,v21,v12
	ctx.v2.s16[0] = ctx.v21.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v2.s16[1] = ctx.v21.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v2.s16[2] = ctx.v21.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v2.s16[3] = ctx.v21.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v2.s16[4] = ctx.v21.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v2.s16[5] = ctx.v21.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v2.s16[6] = ctx.v21.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v2.s16[7] = ctx.v21.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v1,v20,v12
	ctx.v1.s16[0] = ctx.v20.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v1.s16[1] = ctx.v20.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v1.s16[2] = ctx.v20.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v1.s16[3] = ctx.v20.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v1.s16[4] = ctx.v20.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v1.s16[5] = ctx.v20.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v1.s16[6] = ctx.v20.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v1.s16[7] = ctx.v20.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v31,v17,v12
	ctx.v31.s16[0] = ctx.v17.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v31.s16[1] = ctx.v17.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v31.s16[2] = ctx.v17.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v31.s16[3] = ctx.v17.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v31.s16[4] = ctx.v17.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v31.s16[5] = ctx.v17.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v31.s16[6] = ctx.v17.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v31.s16[7] = ctx.v17.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v37,v4,v10
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vsrah v30,v5,v12
	ctx.v30.s16[0] = ctx.v5.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v30.s16[1] = ctx.v5.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v30.s16[2] = ctx.v5.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v30.s16[3] = ctx.v5.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v30.s16[4] = ctx.v5.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v30.s16[5] = ctx.v5.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v30.s16[6] = ctx.v5.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v30.s16[7] = ctx.v5.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v29,v14,v12
	ctx.v29.s16[0] = ctx.v14.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v29.s16[1] = ctx.v14.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v29.s16[2] = ctx.v14.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v29.s16[3] = ctx.v14.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v29.s16[4] = ctx.v14.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v29.s16[5] = ctx.v14.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v29.s16[6] = ctx.v14.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v29.s16[7] = ctx.v14.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v36,v2,v9
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// vsrah v28,v6,v12
	ctx.v28.s16[0] = ctx.v6.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v28.s16[1] = ctx.v6.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v28.s16[2] = ctx.v6.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v28.s16[3] = ctx.v6.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v28.s16[4] = ctx.v6.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v28.s16[5] = ctx.v6.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v28.s16[6] = ctx.v6.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v28.s16[7] = ctx.v6.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v35,v1,v8
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vsrah v27,v3,v12
	ctx.v27.s16[0] = ctx.v3.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v27.s16[1] = ctx.v3.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v27.s16[2] = ctx.v3.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v27.s16[3] = ctx.v3.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v27.s16[4] = ctx.v3.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v27.s16[5] = ctx.v3.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v27.s16[6] = ctx.v3.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v27.s16[7] = ctx.v3.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v34,v31,v7
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// stvx128 v39,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpkshus128 v33,v29,v30
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// stvx128 v38,r5,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r25,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r5,r22,r5
	ctx.r5.u64 = ctx.r22.u64 + ctx.r5.u64;
	// vpkshus128 v32,v27,v28
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// stvx128 v36,r7,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r28,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bdnz 0x82f8aeb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8AEB8;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B0D4"))) PPC_WEAK_FUNC(sub_82F8B0D4);
PPC_FUNC_IMPL(__imp__sub_82F8B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B0D8"))) PPC_WEAK_FUNC(sub_82F8B0D8);
PPC_FUNC_IMPL(__imp__sub_82F8B0D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8B0E0;
	__savegprlr_29(ctx, base);
	// lis r7,-31954
	ctx.r7.s64 = -2094137344;
	// sth r8,-34(r1)
	PPC_STORE_U16(ctx.r1.u32 + -34, ctx.r8.u16);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v13,1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_set1_epi16(short(1)));
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// vspltish v12,4
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_set1_epi16(short(4)));
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r8,-2924(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + -2924);
	// addi r30,r1,-48
	ctx.r30.s64 = ctx.r1.s64 + -48;
	// lvx128 v63,r3,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r4,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r3
	ctx.r4.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lvx128 v9,r11,r3
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r7,r6,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v7,r11,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// vperm128 v2,v10,v63,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v62,r9,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lvx128 v61,r4,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// vperm128 v31,v8,v62,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v9,v61,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v5,v2,v13
	ctx.v5.u16[0] = ctx.v2.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v5.u16[1] = ctx.v2.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v5.u16[2] = ctx.v2.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v5.u16[3] = ctx.v2.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v5.u16[4] = ctx.v2.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v5.u16[5] = ctx.v2.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v5.u16[6] = ctx.v2.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v5.u16[7] = ctx.v2.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v60,r8,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r31,r11,r4
	ctx.r31.u64 = ctx.r11.u64 + ctx.r4.u64;
	// lvx128 v59,r9,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v29,v6,v60,v0
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v58,r4,r10
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vslh v27,v31,v13
	ctx.v27.u16[0] = ctx.v31.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v31.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v31.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v31.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v31.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v31.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v31.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v31.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v3,v5,v10
	_mm_store_si128((__m128i*)ctx.v3.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v5.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// lvx128 v4,r0,r30
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vperm128 v30,v7,v59,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v5,r11,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsplth v11,v4,7
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u16), _mm_set1_epi16(short(0x100))));
	// vslh v25,v1,v13
	ctx.v25.u16[0] = ctx.v1.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v25.u16[1] = ctx.v1.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v25.u16[2] = ctx.v1.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v25.u16[3] = ctx.v1.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v25.u16[4] = ctx.v1.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v25.u16[5] = ctx.v1.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v25.u16[6] = ctx.v1.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v25.u16[7] = ctx.v1.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vperm128 v28,v5,v58,v0
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v23,v29,v13
	ctx.v23.u16[0] = ctx.v29.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v23.u16[1] = ctx.v29.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v23.u16[2] = ctx.v29.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v23.u16[3] = ctx.v29.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v23.u16[4] = ctx.v29.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v23.u16[5] = ctx.v29.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v23.u16[6] = ctx.v29.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v23.u16[7] = ctx.v29.u16[7] << (ctx.v13.u16[7] & 0xF);
	// vaddshs v26,v3,v2
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v3.s16), _mm_load_si128((__m128i*)ctx.v2.s16)));
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// vslh v24,v30,v13
	ctx.v24.u16[0] = ctx.v30.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v24.u16[1] = ctx.v30.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v24.u16[2] = ctx.v30.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v24.u16[3] = ctx.v30.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v24.u16[4] = ctx.v30.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v24.u16[5] = ctx.v30.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v24.u16[6] = ctx.v30.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v24.u16[7] = ctx.v30.u16[7] << (ctx.v13.u16[7] & 0xF);
	// lvx128 v4,r11,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vaddshs v19,v27,v8
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// lvx128 v57,r31,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddshs v21,v25,v9
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// rlwinm r3,r6,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// vaddshs v22,v26,v11
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 + ctx.r6.u64;
	// vaddshs v17,v24,v7
	_mm_store_si128((__m128i*)ctx.v17.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v24.s16), _mm_load_si128((__m128i*)ctx.v7.s16)));
	// vperm128 v27,v4,v57,v0
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v16,v23,v6
	_mm_store_si128((__m128i*)ctx.v16.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v6.s16)));
	// lvx128 v56,r29,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vslh v20,v28,v13
	ctx.v20.u16[0] = ctx.v28.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v20.u16[1] = ctx.v28.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v20.u16[2] = ctx.v28.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v20.u16[3] = ctx.v28.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v20.u16[4] = ctx.v28.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v20.u16[5] = ctx.v28.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v20.u16[6] = ctx.v28.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v20.u16[7] = ctx.v28.u16[7] << (ctx.v13.u16[7] & 0xF);
	// add r3,r3,r5
	ctx.r3.u64 = ctx.r3.u64 + ctx.r5.u64;
	// vsrah v18,v22,v12
	ctx.v18.s16[0] = ctx.v22.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v18.s16[1] = ctx.v22.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v18.s16[2] = ctx.v22.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v18.s16[3] = ctx.v22.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v18.s16[4] = ctx.v22.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v18.s16[5] = ctx.v22.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v18.s16[6] = ctx.v22.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v18.s16[7] = ctx.v22.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// lvx128 v3,r11,r31
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// vaddshs v15,v21,v1
	_mm_store_si128((__m128i*)ctx.v15.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// vaddshs v10,v19,v31
	_mm_store_si128((__m128i*)ctx.v10.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v19.s16), _mm_load_si128((__m128i*)ctx.v31.s16)));
	// add r30,r5,r6
	ctx.r30.u64 = ctx.r5.u64 + ctx.r6.u64;
	// vaddshs v14,v20,v5
	_mm_store_si128((__m128i*)ctx.v14.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v5.s16)));
	// add r8,r3,r6
	ctx.r8.u64 = ctx.r3.u64 + ctx.r6.u64;
	// vpkshus128 v55,v18,v18
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v18.s16), _mm_load_si128((__m128i*)ctx.v18.s16)));
	// vaddshs v9,v17,v30
	_mm_store_si128((__m128i*)ctx.v9.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// vaddshs v8,v16,v29
	_mm_store_si128((__m128i*)ctx.v8.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vperm128 v0,v3,v56,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r11,4
	ctx.r11.s64 = 4;
	// vaddshs v6,v15,v11
	_mm_store_si128((__m128i*)ctx.v6.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// vaddshs v7,v14,v28
	_mm_store_si128((__m128i*)ctx.v7.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v14.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vaddshs v5,v10,v11
	_mm_store_si128((__m128i*)ctx.v5.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v2,v9,v11
	_mm_store_si128((__m128i*)ctx.v2.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vaddshs v1,v8,v11
	_mm_store_si128((__m128i*)ctx.v1.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vslh v31,v27,v13
	ctx.v31.u16[0] = ctx.v27.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v31.u16[1] = ctx.v27.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v31.u16[2] = ctx.v27.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v31.u16[3] = ctx.v27.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v31.u16[4] = ctx.v27.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v31.u16[5] = ctx.v27.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v31.u16[6] = ctx.v27.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v31.u16[7] = ctx.v27.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvewx128 v55,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vslh v30,v0,v13
	ctx.v30.u16[0] = ctx.v0.u16[0] << (ctx.v13.u16[0] & 0xF);
	ctx.v30.u16[1] = ctx.v0.u16[1] << (ctx.v13.u16[1] & 0xF);
	ctx.v30.u16[2] = ctx.v0.u16[2] << (ctx.v13.u16[2] & 0xF);
	ctx.v30.u16[3] = ctx.v0.u16[3] << (ctx.v13.u16[3] & 0xF);
	ctx.v30.u16[4] = ctx.v0.u16[4] << (ctx.v13.u16[4] & 0xF);
	ctx.v30.u16[5] = ctx.v0.u16[5] << (ctx.v13.u16[5] & 0xF);
	ctx.v30.u16[6] = ctx.v0.u16[6] << (ctx.v13.u16[6] & 0xF);
	ctx.v30.u16[7] = ctx.v0.u16[7] << (ctx.v13.u16[7] & 0xF);
	// stvewx128 v55,r5,r11
	ea = (ctx.r5.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddshs v26,v31,v4
	_mm_store_si128((__m128i*)ctx.v26.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vsrah v29,v6,v12
	ctx.v29.s16[0] = ctx.v6.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v29.s16[1] = ctx.v6.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v29.s16[2] = ctx.v6.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v29.s16[3] = ctx.v6.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v29.s16[4] = ctx.v6.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v29.s16[5] = ctx.v6.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v29.s16[6] = ctx.v6.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v29.s16[7] = ctx.v6.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v28,v5,v12
	ctx.v28.s16[0] = ctx.v5.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v28.s16[1] = ctx.v5.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v28.s16[2] = ctx.v5.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v28.s16[3] = ctx.v5.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v28.s16[4] = ctx.v5.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v28.s16[5] = ctx.v5.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v28.s16[6] = ctx.v5.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v28.s16[7] = ctx.v5.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vaddshs v25,v30,v3
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v30.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vaddshs v22,v26,v27
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// vaddshs v24,v7,v11
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v7.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshus128 v54,v29,v29
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v29.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vsrah v23,v2,v12
	ctx.v23.s16[0] = ctx.v2.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v23.s16[1] = ctx.v2.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v23.s16[2] = ctx.v2.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v23.s16[3] = ctx.v2.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v23.s16[4] = ctx.v2.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v23.s16[5] = ctx.v2.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v23.s16[6] = ctx.v2.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v23.s16[7] = ctx.v2.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v53,v28,v28
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v28.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vaddshs v21,v25,v0
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v25.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vaddshs v19,v22,v11
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v22.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v20,v1,v12
	ctx.v20.s16[0] = ctx.v1.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v20.s16[1] = ctx.v1.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v20.s16[2] = ctx.v1.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v20.s16[3] = ctx.v1.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v20.s16[4] = ctx.v1.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v20.s16[5] = ctx.v1.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v20.s16[6] = ctx.v1.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v20.s16[7] = ctx.v1.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vsrah v17,v24,v12
	ctx.v17.s16[0] = ctx.v24.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v17.s16[1] = ctx.v24.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v17.s16[2] = ctx.v24.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v17.s16[3] = ctx.v24.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v17.s16[4] = ctx.v24.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v17.s16[5] = ctx.v24.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v17.s16[6] = ctx.v24.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v17.s16[7] = ctx.v24.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// vpkshus128 v52,v23,v23
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v23.s16), _mm_load_si128((__m128i*)ctx.v23.s16)));
	// vaddshs v18,v21,v11
	_mm_store_si128((__m128i*)ctx.v18.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v21.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsrah v16,v19,v12
	ctx.v16.s16[0] = ctx.v19.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v16.s16[1] = ctx.v19.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v16.s16[2] = ctx.v19.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v16.s16[3] = ctx.v19.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v16.s16[4] = ctx.v19.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v16.s16[5] = ctx.v19.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v16.s16[6] = ctx.v19.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v16.s16[7] = ctx.v19.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v54,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v51,v20,v20
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v20.s16), _mm_load_si128((__m128i*)ctx.v20.s16)));
	// stvewx128 v54,r30,r11
	ea = (ctx.r30.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v50,v17,v17
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v17.s16), _mm_load_si128((__m128i*)ctx.v17.s16)));
	// stvewx128 v53,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// vsrah v15,v18,v12
	ctx.v15.s16[0] = ctx.v18.s16[0] >> (ctx.v12.u16[0] & 0xF);
	ctx.v15.s16[1] = ctx.v18.s16[1] >> (ctx.v12.u16[1] & 0xF);
	ctx.v15.s16[2] = ctx.v18.s16[2] >> (ctx.v12.u16[2] & 0xF);
	ctx.v15.s16[3] = ctx.v18.s16[3] >> (ctx.v12.u16[3] & 0xF);
	ctx.v15.s16[4] = ctx.v18.s16[4] >> (ctx.v12.u16[4] & 0xF);
	ctx.v15.s16[5] = ctx.v18.s16[5] >> (ctx.v12.u16[5] & 0xF);
	ctx.v15.s16[6] = ctx.v18.s16[6] >> (ctx.v12.u16[6] & 0xF);
	ctx.v15.s16[7] = ctx.v18.s16[7] >> (ctx.v12.u16[7] & 0xF);
	// stvewx128 v53,r3,r11
	ea = (ctx.r3.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v49,v16,v16
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v16.s16), _mm_load_si128((__m128i*)ctx.v16.s16)));
	// stvewx128 v52,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v52,r8,r11
	ea = (ctx.r8.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v52.u32[3 - ((ea & 0xF) >> 2)]);
	// vpkshus128 v48,v15,v15
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v15.s16), _mm_load_si128((__m128i*)ctx.v15.s16)));
	// stvewx128 v51,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v51,r7,r11
	ea = (ctx.r7.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v50,r9,r11
	ea = (ctx.r9.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v49,r10,r11
	ea = (ctx.r10.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v48,r6,r11
	ea = (ctx.r6.u32 + ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B2BC"))) PPC_WEAK_FUNC(sub_82F8B2BC);
PPC_FUNC_IMPL(__imp__sub_82F8B2BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B2C0"))) PPC_WEAK_FUNC(sub_82F8B2C0);
PPC_FUNC_IMPL(__imp__sub_82F8B2C0) {
	PPC_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f88f90
	sub_82F88F90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B2CC"))) PPC_WEAK_FUNC(sub_82F8B2CC);
PPC_FUNC_IMPL(__imp__sub_82F8B2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B2D0"))) PPC_WEAK_FUNC(sub_82F8B2D0);
PPC_FUNC_IMPL(__imp__sub_82F8B2D0) {
	PPC_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f891a8
	sub_82F891A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B2DC"))) PPC_WEAK_FUNC(sub_82F8B2DC);
PPC_FUNC_IMPL(__imp__sub_82F8B2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B2E0"))) PPC_WEAK_FUNC(sub_82F8B2E0);
PPC_FUNC_IMPL(__imp__sub_82F8B2E0) {
	PPC_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f89668
	sub_82F89668(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B2EC"))) PPC_WEAK_FUNC(sub_82F8B2EC);
PPC_FUNC_IMPL(__imp__sub_82F8B2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B2F0"))) PPC_WEAK_FUNC(sub_82F8B2F0);
PPC_FUNC_IMPL(__imp__sub_82F8B2F0) {
	PPC_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f89888
	sub_82F89888(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B2FC"))) PPC_WEAK_FUNC(sub_82F8B2FC);
PPC_FUNC_IMPL(__imp__sub_82F8B2FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B300"))) PPC_WEAK_FUNC(sub_82F8B300);
PPC_FUNC_IMPL(__imp__sub_82F8B300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B308;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a2a0
	ctx.lr = 0x82F8B330;
	sub_82F8A2A0(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8aad8
	ctx.lr = 0x82F8B348;
	sub_82F8AAD8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B350"))) PPC_WEAK_FUNC(sub_82F8B350);
PPC_FUNC_IMPL(__imp__sub_82F8B350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B358;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a498
	ctx.lr = 0x82F8B380;
	sub_82F8A498(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8aad8
	ctx.lr = 0x82F8B39C;
	sub_82F8AAD8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B3A4"))) PPC_WEAK_FUNC(sub_82F8B3A4);
PPC_FUNC_IMPL(__imp__sub_82F8B3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B3A8"))) PPC_WEAK_FUNC(sub_82F8B3A8);
PPC_FUNC_IMPL(__imp__sub_82F8B3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a8d8
	ctx.lr = 0x82F8B3D8;
	sub_82F8A8D8(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8aad8
	ctx.lr = 0x82F8B3F4;
	sub_82F8AAD8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B3FC"))) PPC_WEAK_FUNC(sub_82F8B3FC);
PPC_FUNC_IMPL(__imp__sub_82F8B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B400"))) PPC_WEAK_FUNC(sub_82F8B400);
PPC_FUNC_IMPL(__imp__sub_82F8B400) {
	PPC_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f89ad8
	sub_82F89AD8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B40C"))) PPC_WEAK_FUNC(sub_82F8B40C);
PPC_FUNC_IMPL(__imp__sub_82F8B40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B410"))) PPC_WEAK_FUNC(sub_82F8B410);
PPC_FUNC_IMPL(__imp__sub_82F8B410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B418;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a2a0
	ctx.lr = 0x82F8B440;
	sub_82F8A2A0(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8acc0
	ctx.lr = 0x82F8B458;
	sub_82F8ACC0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B460"))) PPC_WEAK_FUNC(sub_82F8B460);
PPC_FUNC_IMPL(__imp__sub_82F8B460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B468;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a498
	ctx.lr = 0x82F8B490;
	sub_82F8A498(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8acc0
	ctx.lr = 0x82F8B4AC;
	sub_82F8ACC0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B4B4"))) PPC_WEAK_FUNC(sub_82F8B4B4);
PPC_FUNC_IMPL(__imp__sub_82F8B4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B4B8"))) PPC_WEAK_FUNC(sub_82F8B4B8);
PPC_FUNC_IMPL(__imp__sub_82F8B4B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B4C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a8d8
	ctx.lr = 0x82F8B4E8;
	sub_82F8A8D8(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8acc0
	ctx.lr = 0x82F8B504;
	sub_82F8ACC0(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B50C"))) PPC_WEAK_FUNC(sub_82F8B50C);
PPC_FUNC_IMPL(__imp__sub_82F8B50C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B510"))) PPC_WEAK_FUNC(sub_82F8B510);
PPC_FUNC_IMPL(__imp__sub_82F8B510) {
	PPC_FUNC_PROLOGUE();
	// subfic r8,r10,8
	ctx.xer.ca = ctx.r10.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r10.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// b 0x82f8a050
	sub_82F8A050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B51C"))) PPC_WEAK_FUNC(sub_82F8B51C);
PPC_FUNC_IMPL(__imp__sub_82F8B51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B520"))) PPC_WEAK_FUNC(sub_82F8B520);
PPC_FUNC_IMPL(__imp__sub_82F8B520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B528;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a2a0
	ctx.lr = 0x82F8B550;
	sub_82F8A2A0(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8b0d8
	ctx.lr = 0x82F8B568;
	sub_82F8B0D8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B570"))) PPC_WEAK_FUNC(sub_82F8B570);
PPC_FUNC_IMPL(__imp__sub_82F8B570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B578;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a498
	ctx.lr = 0x82F8B5A0;
	sub_82F8A498(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8b0d8
	ctx.lr = 0x82F8B5BC;
	sub_82F8B0D8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B5C4"))) PPC_WEAK_FUNC(sub_82F8B5C4);
PPC_FUNC_IMPL(__imp__sub_82F8B5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B5C8"))) PPC_WEAK_FUNC(sub_82F8B5C8);
PPC_FUNC_IMPL(__imp__sub_82F8B5C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8B5D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-896(r1)
	ea = -896 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm r28,r11,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82f8a8d8
	ctx.lr = 0x82F8B5F8;
	sub_82F8A8D8(ctx, base);
	// subfic r8,r29,8
	ctx.xer.ca = ctx.r29.u32 <= 8;
	ctx.r8.s64 = 8 - ctx.r29.s64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8b0d8
	ctx.lr = 0x82F8B614;
	sub_82F8B0D8(ctx, base);
	// addi r1,r1,896
	ctx.r1.s64 = ctx.r1.s64 + 896;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B61C"))) PPC_WEAK_FUNC(sub_82F8B61C);
PPC_FUNC_IMPL(__imp__sub_82F8B61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B620"))) PPC_WEAK_FUNC(sub_82F8B620);
PPC_FUNC_IMPL(__imp__sub_82F8B620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8B628;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,33296
	ctx.r3.u64 = ctx.r3.u64 | 33296;
	// bl 0x82f8b8b0
	ctx.lr = 0x82F8B63C;
	sub_82F8B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8b658
	if (ctx.cr0.eq) goto loc_82F8B658;
	// bl 0x82f8ba48
	ctx.lr = 0x82F8B648;
	sub_82F8BA48(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r31,r11,4304
	ctx.r31.s64 = ctx.r11.s64 + 4304;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x82f8b668
	goto loc_82F8B668;
loc_82F8B658:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,4304
	ctx.r31.s64 = ctx.r10.s64 + 4304;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82F8B668:
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82F8B670:
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82f8b8b0
	ctx.lr = 0x82F8B678;
	sub_82F8B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8b68c
	if (ctx.cr0.eq) goto loc_82F8B68C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f91050
	ctx.lr = 0x82F8B688;
	sub_82F91050(ctx, base);
	// b 0x82f8b690
	goto loc_82F8B690;
loc_82F8B68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8B690:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f8b670
	if (ctx.cr6.lt) goto loc_82F8B670;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82F8B6BC:
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82F8B6C4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8b6dc
	if (ctx.cr0.eq) goto loc_82F8B6DC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f8ffe8
	ctx.lr = 0x82F8B6D4;
	sub_82F8FFE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82f8b6e0
	goto loc_82F8B6E0;
loc_82F8B6DC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82F8B6E0:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f90720
	ctx.lr = 0x82F8B6F0;
	sub_82F90720(ctx, base);
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f90058
	ctx.lr = 0x82F8B704;
	sub_82F90058(ctx, base);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f8b6bc
	if (ctx.cr6.lt) goto loc_82F8B6BC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B724"))) PPC_WEAK_FUNC(sub_82F8B724);
PPC_FUNC_IMPL(__imp__sub_82F8B724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B728"))) PPC_WEAK_FUNC(sub_82F8B728);
PPC_FUNC_IMPL(__imp__sub_82F8B728) {
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
	// bl 0x822d2890
	ctx.lr = 0x82F8B744;
	sub_822D2890(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// addi r30,r11,4304
	ctx.r30.s64 = ctx.r11.s64 + 4304;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8b760
	if (ctx.cr6.eq) goto loc_82F8B760;
	// bl 0x82f8bad8
	ctx.lr = 0x82F8B760;
	sub_82F8BAD8(ctx, base);
loc_82F8B760:
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82f8e1e8
	ctx.lr = 0x82F8B768;
	sub_82F8E1E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f8b778
	if (ctx.cr0.eq) goto loc_82F8B778;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82f8e570
	ctx.lr = 0x82F8B778;
	sub_82F8E570(ctx, base);
loc_82F8B778:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F8B77C:
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f90058
	ctx.lr = 0x82F8B790;
	sub_82F90058(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f8b77c
	if (ctx.cr6.lt) goto loc_82F8B77C;
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

__attribute__((alias("__imp__sub_82F8B7BC"))) PPC_WEAK_FUNC(sub_82F8B7BC);
PPC_FUNC_IMPL(__imp__sub_82F8B7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B7C0"))) PPC_WEAK_FUNC(sub_82F8B7C0);
PPC_FUNC_IMPL(__imp__sub_82F8B7C0) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,4312
	ctx.r30.s64 = ctx.r11.s64 + 4312;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82F8B7E0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8b7f0
	if (ctx.cr6.eq) goto loc_82F8B7F0;
	// bl 0x82f91198
	ctx.lr = 0x82F8B7F0;
	sub_82F91198(ctx, base);
loc_82F8B7F0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f8b7e0
	if (ctx.cr6.lt) goto loc_82F8B7E0;
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

__attribute__((alias("__imp__sub_82F8B818"))) PPC_WEAK_FUNC(sub_82F8B818);
PPC_FUNC_IMPL(__imp__sub_82F8B818) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4320(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4320);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8b834
	if (ctx.cr6.eq) goto loc_82F8B834;
	// clrlwi r4,r3,24
	ctx.r4.u64 = ctx.r3.u32 & 0xFF;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82f8ba38
	sub_82F8BA38(ctx, base);
	return;
loc_82F8B834:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B83C"))) PPC_WEAK_FUNC(sub_82F8B83C);
PPC_FUNC_IMPL(__imp__sub_82F8B83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B840"))) PPC_WEAK_FUNC(sub_82F8B840);
PPC_FUNC_IMPL(__imp__sub_82F8B840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4304
	ctx.r11.s64 = ctx.r11.s64 + 4304;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B854"))) PPC_WEAK_FUNC(sub_82F8B854);
PPC_FUNC_IMPL(__imp__sub_82F8B854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B858"))) PPC_WEAK_FUNC(sub_82F8B858);
PPC_FUNC_IMPL(__imp__sub_82F8B858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,4320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82f8bb20
	sub_82F8BB20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B86C"))) PPC_WEAK_FUNC(sub_82F8B86C);
PPC_FUNC_IMPL(__imp__sub_82F8B86C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B870"))) PPC_WEAK_FUNC(sub_82F8B870);
PPC_FUNC_IMPL(__imp__sub_82F8B870) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,4320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4320);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x828b2440
	sub_828B2440(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B884"))) PPC_WEAK_FUNC(sub_82F8B884);
PPC_FUNC_IMPL(__imp__sub_82F8B884) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B888"))) PPC_WEAK_FUNC(sub_82F8B888);
PPC_FUNC_IMPL(__imp__sub_82F8B888) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,4312
	ctx.r11.s64 = ctx.r11.s64 + 4312;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B89C"))) PPC_WEAK_FUNC(sub_82F8B89C);
PPC_FUNC_IMPL(__imp__sub_82F8B89C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B8A0"))) PPC_WEAK_FUNC(sub_82F8B8A0);
PPC_FUNC_IMPL(__imp__sub_82F8B8A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,4320(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4320);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B8AC"))) PPC_WEAK_FUNC(sub_82F8B8AC);
PPC_FUNC_IMPL(__imp__sub_82F8B8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B8B0"))) PPC_WEAK_FUNC(sub_82F8B8B0);
PPC_FUNC_IMPL(__imp__sub_82F8B8B0) {
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
	// bl 0x822d2818
	ctx.lr = 0x82F8B8C0;
	sub_822D2818(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f8b8e4
	if (!ctx.cr0.eq) goto loc_82F8B8E4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32226
	ctx.r10.s64 = -2111963136;
	// addi r11,r11,-14800
	ctx.r11.s64 = ctx.r11.s64 + -14800;
	// addi r4,r10,11264
	ctx.r4.s64 = ctx.r10.s64 + 11264;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa7d90
	ctx.lr = 0x82F8B8E4;
	sub_82FA7D90(ctx, base);
loc_82F8B8E4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8B8F4"))) PPC_WEAK_FUNC(sub_82F8B8F4);
PPC_FUNC_IMPL(__imp__sub_82F8B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B8F8"))) PPC_WEAK_FUNC(sub_82F8B8F8);
PPC_FUNC_IMPL(__imp__sub_82F8B8F8) {
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
	// bl 0x82f8eb80
	ctx.lr = 0x82F8B914;
	sub_82F8EB80(ctx, base);
	// bl 0x82f94970
	ctx.lr = 0x82F8B918;
	sub_82F94970(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r4,-13544(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13544);
	// bl 0x82f94a98
	ctx.lr = 0x82F8B928;
	sub_82F94A98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f8b950
	if (ctx.cr0.lt) goto loc_82F8B950;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8B934:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8bc10
	ctx.lr = 0x82F8B940;
	sub_82F8BC10(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,3328
	ctx.r30.s64 = ctx.r30.s64 + 3328;
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// blt cr6,0x82f8b934
	if (ctx.cr6.lt) goto loc_82F8B934;
loc_82F8B950:
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

__attribute__((alias("__imp__sub_82F8B968"))) PPC_WEAK_FUNC(sub_82F8B968);
PPC_FUNC_IMPL(__imp__sub_82F8B968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8B970;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x822d2830
	ctx.lr = 0x82F8B97C;
	sub_822D2830(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82f8e1b8
	ctx.lr = 0x82F8B988;
	sub_82F8E1B8(ctx, base);
	// addis r27,r30,1
	ctx.r27.s64 = ctx.r30.s64 + 65536;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r27,r27,-32256
	ctx.r27.s64 = ctx.r27.s64 + -32256;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f8b9ec
	if (ctx.cr6.eq) goto loc_82F8B9EC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8B9AC:
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8d258
	ctx.lr = 0x82F8B9C4;
	sub_82F8D258(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,3328
	ctx.r30.s64 = ctx.r30.s64 + 3328;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// blt cr6,0x82f8b9ac
	if (ctx.cr6.lt) goto loc_82F8B9AC;
	// bl 0x82a78340
	ctx.lr = 0x82F8B9D8;
	sub_82A78340(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
loc_82F8B9EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8B9F4"))) PPC_WEAK_FUNC(sub_82F8B9F4);
PPC_FUNC_IMPL(__imp__sub_82F8B9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8B9F8"))) PPC_WEAK_FUNC(sub_82F8B9F8);
PPC_FUNC_IMPL(__imp__sub_82F8B9F8) {
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
	// bl 0x82a78340
	ctx.lr = 0x82F8BA10;
	sub_82A78340(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,33280
	ctx.r11.u64 = ctx.r11.u64 | 33280;
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
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

__attribute__((alias("__imp__sub_82F8BA38"))) PPC_WEAK_FUNC(sub_82F8BA38);
PPC_FUNC_IMPL(__imp__sub_82F8BA38) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,3328
	ctx.r11.s64 = ctx.r4.s64 * 3328;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BA44"))) PPC_WEAK_FUNC(sub_82F8BA44);
PPC_FUNC_IMPL(__imp__sub_82F8BA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BA48"))) PPC_WEAK_FUNC(sub_82F8BA48);
PPC_FUNC_IMPL(__imp__sub_82F8BA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8BA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,9
	ctx.r31.s64 = 9;
loc_82F8BA60:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8dae8
	ctx.lr = 0x82F8BA68;
	sub_82F8DAE8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,3328
	ctx.r30.s64 = ctx.r30.s64 + 3328;
	// bge 0x82f8ba60
	if (!ctx.cr0.lt) goto loc_82F8BA60;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82f8b8b0
	ctx.lr = 0x82F8BA7C;
	sub_82F8B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82f8ba9c
	if (ctx.cr0.eq) goto loc_82F8BA9C;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82f8baa0
	goto loc_82F8BAA0;
loc_82F8BA9C:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82F8BAA0:
	// addis r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 65536;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r9,r9,-32256
	ctx.r9.s64 = ctx.r9.s64 + -32256;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82f8b8f8
	ctx.lr = 0x82F8BAC8;
	sub_82F8B8F8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8BAD4"))) PPC_WEAK_FUNC(sub_82F8BAD4);
PPC_FUNC_IMPL(__imp__sub_82F8BAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BAD8"))) PPC_WEAK_FUNC(sub_82F8BAD8);
PPC_FUNC_IMPL(__imp__sub_82F8BAD8) {
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
	// bl 0x82f8ef88
	ctx.lr = 0x82F8BAF0;
	sub_82F8EF88(ctx, base);
	// bl 0x82f8de28
	ctx.lr = 0x82F8BAF4;
	sub_82F8DE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f8bb04
	if (ctx.cr0.eq) goto loc_82F8BB04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8b968
	ctx.lr = 0x82F8BB04;
	sub_82F8B968(ctx, base);
loc_82F8BB04:
	// bl 0x82f8b7c0
	ctx.lr = 0x82F8BB08;
	sub_82F8B7C0(ctx, base);
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

__attribute__((alias("__imp__sub_82F8BB20"))) PPC_WEAK_FUNC(sub_82F8BB20);
PPC_FUNC_IMPL(__imp__sub_82F8BB20) {
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
	// li r31,10
	ctx.r31.s64 = 10;
loc_82F8BB3C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8d9c0
	ctx.lr = 0x82F8BB44;
	sub_82F8D9C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,3328
	ctx.r30.s64 = ctx.r30.s64 + 3328;
	// bne 0x82f8bb3c
	if (!ctx.cr0.eq) goto loc_82F8BB3C;
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

__attribute__((alias("__imp__sub_82F8BB68"))) PPC_WEAK_FUNC(sub_82F8BB68);
PPC_FUNC_IMPL(__imp__sub_82F8BB68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94430
	ctx.lr = 0x82F8BB9C;
	sub_82F94430(ctx, base);
	// li r11,80
	ctx.r11.s64 = 80;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// stvx128 v1,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f948d8
	ctx.lr = 0x82F8BBAC;
	sub_82F948D8(ctx, base);
	// addi r3,r31,2128
	ctx.r3.s64 = ctx.r31.s64 + 2128;
	// bl 0x82f948d8
	ctx.lr = 0x82F8BBB4;
	sub_82F948D8(ctx, base);
	// addi r3,r31,4160
	ctx.r3.s64 = ctx.r31.s64 + 4160;
	// bl 0x82f948d8
	ctx.lr = 0x82F8BBBC;
	sub_82F948D8(ctx, base);
	// stfs f31,6192(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6192, temp.u32);
	// addi r3,r31,6196
	ctx.r3.s64 = ctx.r31.s64 + 6196;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x830afa30
	ctx.lr = 0x82F8BBD4;
	sub_830AFA30(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F8BBF8"))) PPC_WEAK_FUNC(sub_82F8BBF8);
PPC_FUNC_IMPL(__imp__sub_82F8BBF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-18840
	ctx.r3.s64 = ctx.r11.s64 + -18840;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BC04"))) PPC_WEAK_FUNC(sub_82F8BC04);
PPC_FUNC_IMPL(__imp__sub_82F8BC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BC08"))) PPC_WEAK_FUNC(sub_82F8BC08);
PPC_FUNC_IMPL(__imp__sub_82F8BC08) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,3216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BC10"))) PPC_WEAK_FUNC(sub_82F8BC10);
PPC_FUNC_IMPL(__imp__sub_82F8BC10) {
	PPC_FUNC_PROLOGUE();
	// stw r4,3216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 3216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BC18"))) PPC_WEAK_FUNC(sub_82F8BC18);
PPC_FUNC_IMPL(__imp__sub_82F8BC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f1,3220(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3220);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BC20"))) PPC_WEAK_FUNC(sub_82F8BC20);
PPC_FUNC_IMPL(__imp__sub_82F8BC20) {
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
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lbz r10,3249(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 3249);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f3,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f3.f64 = double(temp.f32);
	// beq 0x82f8bc54
	if (ctx.cr0.eq) goto loc_82F8BC54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f1,5180(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82f8bc58
	goto loc_82F8BC58;
loc_82F8BC54:
	// fmr f1,f3
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f3.f64;
loc_82F8BC58:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f3
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f3.f64;
	// lfs f4,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x82f94430
	ctx.lr = 0x82F8BC68;
	sub_82F94430(ctx, base);
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F8BC84"))) PPC_WEAK_FUNC(sub_82F8BC84);
PPC_FUNC_IMPL(__imp__sub_82F8BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BC88"))) PPC_WEAK_FUNC(sub_82F8BC88);
PPC_FUNC_IMPL(__imp__sub_82F8BC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F8BC90;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,308(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8bd20
	if (ctx.cr6.eq) goto loc_82F8BD20;
	// lwz r11,3312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3312);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4160
	ctx.r4.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f94800
	ctx.lr = 0x82F8BCD4;
	sub_82F94800(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ld r9,288(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// ld r10,296(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// bl 0x82f95178
	ctx.lr = 0x82F8BD00;
	sub_82F95178(ctx, base);
	// stvx128 v1,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f8bc20
	ctx.lr = 0x82F8BD10;
	sub_82F8BC20(ctx, base);
	// lvx128 v1,r0,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r3
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8BD1C;
	sub_82F94480(ctx, base);
	// stvx128 v1,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82F8BD20:
	// lwz r30,324(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8bd68
	if (ctx.cr6.eq) goto loc_82F8BD68;
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,4160
	ctx.r4.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f94810
	ctx.lr = 0x82F8BD40;
	sub_82F94810(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f8bc20
	ctx.lr = 0x82F8BD58;
	sub_82F8BC20(ctx, base);
	// lvx128 v1,r0,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r3
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8BD64;
	sub_82F94480(ctx, base);
	// stvx128 v1,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82F8BD68:
	// lwz r30,332(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8bdb4
	if (ctx.cr6.eq) goto loc_82F8BDB4;
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4160
	ctx.r4.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f94828
	ctx.lr = 0x82F8BD88;
	sub_82F94828(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r11,3249(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3249);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8bdb4
	if (ctx.cr0.eq) goto loc_82F8BDB4;
	// lfs f0,4(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,4(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 4, temp.u32);
	// stfs f13,8(r30)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 8, temp.u32);
loc_82F8BDB4:
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f94840
	ctx.lr = 0x82F8BDC4;
	sub_82F94840(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8BDCC"))) PPC_WEAK_FUNC(sub_82F8BDCC);
PPC_FUNC_IMPL(__imp__sub_82F8BDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BDD0"))) PPC_WEAK_FUNC(sub_82F8BDD0);
PPC_FUNC_IMPL(__imp__sub_82F8BDD0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f8bc20
	ctx.lr = 0x82F8BDF4;
	sub_82F8BC20(ctx, base);
	// lvx128 v1,r0,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r3
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8BE00;
	sub_82F94480(ctx, base);
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82F8BE20"))) PPC_WEAK_FUNC(sub_82F8BE20);
PPC_FUNC_IMPL(__imp__sub_82F8BE20) {
	PPC_FUNC_PROLOGUE();
	// li r11,3264
	ctx.r11.s64 = 3264;
	// lvx128 v0,r4,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BE30"))) PPC_WEAK_FUNC(sub_82F8BE30);
PPC_FUNC_IMPL(__imp__sub_82F8BE30) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8be64
	if (!ctx.cr0.eq) goto loc_82F8BE64;
	// li r11,3264
	ctx.r11.s64 = 3264;
	// lvx128 v0,r4,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82f8bec4
	goto loc_82F8BEC4;
loc_82F8BE64:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne 0x82f8be98
	if (!ctx.cr0.eq) goto loc_82F8BE98;
	// bl 0x82f8bdd0
	ctx.lr = 0x82F8BE78;
	sub_82F8BDD0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f946e0
	ctx.lr = 0x82F8BE88;
	sub_82F946E0(ctx, base);
	// li r11,3264
	ctx.r11.s64 = 3264;
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v1,r31,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// b 0x82f8bebc
	goto loc_82F8BEBC;
loc_82F8BE98:
	// bl 0x82f8bdd0
	ctx.lr = 0x82F8BE9C;
	sub_82F8BDD0(ctx, base);
	// li r11,3280
	ctx.r11.s64 = 3280;
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r31,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8BEAC;
	sub_82F94480(ctx, base);
	// addi r3,r31,3296
	ctx.r3.s64 = ctx.r31.s64 + 3296;
	// bl 0x82f946e0
	ctx.lr = 0x82F8BEB4;
	sub_82F946E0(ctx, base);
	// li r11,3264
	ctx.r11.s64 = 3264;
	// lvx128 v2,r31,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82F8BEBC:
	// bl 0x830a06d8
	ctx.lr = 0x82F8BEC0;
	sub_830A06D8(ctx, base);
	// stvx128 v1,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82F8BEC4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82F8BEE0"))) PPC_WEAK_FUNC(sub_82F8BEE0);
PPC_FUNC_IMPL(__imp__sub_82F8BEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,3296(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3296);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// lfs f0,3300(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3300);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,3304(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 3304);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BEFC"))) PPC_WEAK_FUNC(sub_82F8BEFC);
PPC_FUNC_IMPL(__imp__sub_82F8BEFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BF00"))) PPC_WEAK_FUNC(sub_82F8BF00);
PPC_FUNC_IMPL(__imp__sub_82F8BF00) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3249(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3249);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BF08"))) PPC_WEAK_FUNC(sub_82F8BF08);
PPC_FUNC_IMPL(__imp__sub_82F8BF08) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,3312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3312);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// b 0x82f94858
	sub_82F94858(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8BF14"))) PPC_WEAK_FUNC(sub_82F8BF14);
PPC_FUNC_IMPL(__imp__sub_82F8BF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BF18"))) PPC_WEAK_FUNC(sub_82F8BF18);
PPC_FUNC_IMPL(__imp__sub_82F8BF18) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,3248(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 3248);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BF20"))) PPC_WEAK_FUNC(sub_82F8BF20);
PPC_FUNC_IMPL(__imp__sub_82F8BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// vor v0,v2,v2
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v127,v3,v3
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vor128 v126,v4,v4
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vor v1,v0,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// bl 0x82f958d0
	ctx.lr = 0x82F8BF54;
	sub_82F958D0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f956e0
	ctx.lr = 0x82F8BF60;
	sub_82F956E0(ctx, base);
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f958d0
	ctx.lr = 0x82F8BF68;
	sub_82F958D0(ctx, base);
	// bl 0x82f95790
	ctx.lr = 0x82F8BF6C;
	sub_82F95790(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8BF8C"))) PPC_WEAK_FUNC(sub_82F8BF8C);
PPC_FUNC_IMPL(__imp__sub_82F8BF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8BF90"))) PPC_WEAK_FUNC(sub_82F8BF90);
PPC_FUNC_IMPL(__imp__sub_82F8BF90) {
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
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f3,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f3.f64 = double(temp.f32);
	// lfs f4,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f4.f64 = double(temp.f32);
	// fmr f1,f3
	ctx.f1.f64 = ctx.f3.f64;
	// lfs f2,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82f94430
	ctx.lr = 0x82F8BFC4;
	sub_82F94430(ctx, base);
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F8BFE0"))) PPC_WEAK_FUNC(sub_82F8BFE0);
PPC_FUNC_IMPL(__imp__sub_82F8BFE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8BFE8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lvx128 v1,r10,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82f94860
	ctx.lr = 0x82F8C014;
	sub_82F94860(ctx, base);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r29,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// bl 0x82f948b8
	ctx.lr = 0x82F8C028;
	sub_82F948B8(ctx, base);
	// lwzx r11,r29,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r28.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f8c044
	if (!ctx.cr6.eq) goto loc_82F8C044;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v1,r0,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f94870
	ctx.lr = 0x82F8C044;
	sub_82F94870(ctx, base);
loc_82F8C044:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8C04C"))) PPC_WEAK_FUNC(sub_82F8C04C);
PPC_FUNC_IMPL(__imp__sub_82F8C04C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8C050"))) PPC_WEAK_FUNC(sub_82F8C050);
PPC_FUNC_IMPL(__imp__sub_82F8C050) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F8C058;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C07C;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C094;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,2
	ctx.r6.s64 = 2;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C0AC;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,3
	ctx.r6.s64 = 3;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C0C4;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,4
	ctx.r6.s64 = 4;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C0DC;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,6
	ctx.r6.s64 = 6;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C0F4;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,5
	ctx.r6.s64 = 5;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C10C;
	sub_82F8BFE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f94800
	ctx.lr = 0x82F8C11C;
	sub_82F94800(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f94800
	ctx.lr = 0x82F8C130;
	sub_82F94800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v2,r0,r26
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lfs f1,11504(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11504);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f94410
	ctx.lr = 0x82F8C144;
	sub_82F94410(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82f94860
	ctx.lr = 0x82F8C150;
	sub_82F94860(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,7
	ctx.r6.s64 = 7;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C168;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,8
	ctx.r7.s64 = 8;
	// li r6,8
	ctx.r6.s64 = 8;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C180;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,9
	ctx.r7.s64 = 9;
	// li r6,9
	ctx.r6.s64 = 9;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C198;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,10
	ctx.r7.s64 = 10;
	// li r6,10
	ctx.r6.s64 = 10;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C1B0;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,11
	ctx.r7.s64 = 11;
	// li r6,11
	ctx.r6.s64 = 11;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C1C8;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,2
	ctx.r7.s64 = 2;
	// li r6,12
	ctx.r6.s64 = 12;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C1E0;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,13
	ctx.r6.s64 = 13;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C1F8;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,5
	ctx.r7.s64 = 5;
	// li r6,14
	ctx.r6.s64 = 14;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C210;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,6
	ctx.r7.s64 = 6;
	// li r6,15
	ctx.r6.s64 = 15;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C228;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,7
	ctx.r7.s64 = 7;
	// li r6,16
	ctx.r6.s64 = 16;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C240;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,17
	ctx.r6.s64 = 17;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C258;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,17
	ctx.r7.s64 = 17;
	// li r6,18
	ctx.r6.s64 = 18;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C270;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,18
	ctx.r7.s64 = 18;
	// li r6,19
	ctx.r6.s64 = 19;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C288;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// li r6,20
	ctx.r6.s64 = 20;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C2A0;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,12
	ctx.r7.s64 = 12;
	// li r6,21
	ctx.r6.s64 = 21;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C2B8;
	sub_82F8BFE0(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,13
	ctx.r7.s64 = 13;
	// li r6,22
	ctx.r6.s64 = 22;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C2D0;
	sub_82F8BFE0(ctx, base);
	// li r7,14
	ctx.r7.s64 = 14;
	// li r6,23
	ctx.r6.s64 = 23;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C2E8;
	sub_82F8BFE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r7,15
	ctx.r7.s64 = 15;
	// li r6,24
	ctx.r6.s64 = 24;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f8bfe0
	ctx.lr = 0x82F8C300;
	sub_82F8BFE0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f948c8
	ctx.lr = 0x82F8C30C;
	sub_82F948C8(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82f948d0
	ctx.lr = 0x82F8C320;
	sub_82F948D0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f94800
	ctx.lr = 0x82F8C330;
	sub_82F94800(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94860
	ctx.lr = 0x82F8C350;
	sub_82F94860(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8C358"))) PPC_WEAK_FUNC(sub_82F8C358);
PPC_FUNC_IMPL(__imp__sub_82F8C358) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8C360;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fac14c
	ctx.lr = 0x82F8C368;
	__savevmx_123(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// vor128 v124,v3,v3
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// vor128 v125,v4,v4
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82f94800
	ctx.lr = 0x82F8C390;
	sub_82F94800(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f94800
	ctx.lr = 0x82F8C3A4;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r28
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8C3B0;
	sub_82F943F0(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8C3B4;
	sub_82F944A8(ctx, base);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r30,r11,31636
	ctx.r30.s64 = ctx.r11.s64 + 31636;
	// lbz r11,-18579(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + -18579);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8c3dc
	if (ctx.cr0.eq) goto loc_82F8C3DC;
	// li r11,-68
	ctx.r11.s64 = -68;
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// b 0x82f8c3e0
	goto loc_82F8C3E0;
loc_82F8C3DC:
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
loc_82F8C3E0:
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f958d0
	ctx.lr = 0x82F8C3E8;
	sub_82F958D0(ctx, base);
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// vor128 v123,v1,v1
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// beq 0x82f8c46c
	if (ctx.cr0.eq) goto loc_82F8C46C;
	// vor128 v4,v125,v125
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// vor128 v3,v125,v125
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// vor128 v2,v124,v124
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f8bf20
	ctx.lr = 0x82F8C408;
	sub_82F8BF20(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lbz r11,-18580(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -18580);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8c45c
	if (ctx.cr0.eq) goto loc_82F8C45C;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f94528
	ctx.lr = 0x82F8C424;
	sub_82F94528(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8c450
	if (!ctx.cr6.gt) goto loc_82F8C450;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f95be0
	ctx.lr = 0x82F8C440;
	sub_82F95BE0(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f95a28
	ctx.lr = 0x82F8C448;
	sub_82F95A28(ctx, base);
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// b 0x82f8c45c
	goto loc_82F8C45C;
loc_82F8C450:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,4544
	ctx.r11.s64 = ctx.r11.s64 + 4544;
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82F8C45C:
	// vor128 v2,v123,v123
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f95560
	ctx.lr = 0x82F8C468;
	sub_82F95560(ctx, base);
	// vor128 v123,v1,v1
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
loc_82F8C46C:
	// vor128 v1,v123,v123
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// bl 0x82f95790
	ctx.lr = 0x82F8C474;
	sub_82F95790(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fac3e4
	ctx.lr = 0x82F8C480;
	__restvmx_123(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8C484"))) PPC_WEAK_FUNC(sub_82F8C484);
PPC_FUNC_IMPL(__imp__sub_82F8C484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8C488"))) PPC_WEAK_FUNC(sub_82F8C488);
PPC_FUNC_IMPL(__imp__sub_82F8C488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F8C490;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8cad4
	if (ctx.cr6.eq) goto loc_82F8CAD4;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f94800
	ctx.lr = 0x82F8C4CC;
	sub_82F94800(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,13
	ctx.r5.s64 = 13;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f94800
	ctx.lr = 0x82F8C4E0;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8C4EC;
	sub_82F943F0(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f94800
	ctx.lr = 0x82F8C500;
	sub_82F94800(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f94800
	ctx.lr = 0x82F8C514;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8C520;
	sub_82F943F0(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f94488
	ctx.lr = 0x82F8C528;
	sub_82F94488(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8C52C;
	sub_82F944A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r10,48
	ctx.r10.s64 = 48;
	// addi r30,r11,31504
	ctx.r30.s64 = ctx.r11.s64 + 31504;
	// lvx128 v2,r30,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94488
	ctx.lr = 0x82F8C540;
	sub_82F94488(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94488
	ctx.lr = 0x82F8C54C;
	sub_82F94488(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// li r10,64
	ctx.r10.s64 = 64;
	// lis r29,-31969
	ctx.r29.s64 = -2095120384;
	// li r5,5
	ctx.r5.s64 = 5;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r4,6
	ctx.r4.s64 = 6;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// bl 0x82f8c358
	ctx.lr = 0x82F8C580;
	sub_82F8C358(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C58C;
	sub_82F948A0(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,64
	ctx.r10.s64 = 64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,5
	ctx.r4.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C5B8;
	sub_82F8C358(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C5C4;
	sub_82F948A0(ctx, base);
	// li r11,80
	ctx.r11.s64 = 80;
	// li r10,112
	ctx.r10.s64 = 112;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,8
	ctx.r5.s64 = 8;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C5F0;
	sub_82F8C358(ctx, base);
	// li r4,8
	ctx.r4.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C5FC;
	sub_82F948A0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v4,r30,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// vor v3,v4,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,9
	ctx.r5.s64 = 9;
	// lvx128 v2,r0,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v1,r30,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C628;
	sub_82F8C358(ctx, base);
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C634;
	sub_82F948A0(ctx, base);
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f94800
	ctx.lr = 0x82F8C644;
	sub_82F94800(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f94800
	ctx.lr = 0x82F8C658;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r28
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8C664;
	sub_82F943F0(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8C668;
	sub_82F944A8(ctx, base);
	// lis r28,-31969
	ctx.r28.s64 = -2095120384;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lbz r11,-18577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -18577);
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,64
	ctx.r11.s64 = 64;
	// bne 0x82f8c68c
	if (!ctx.cr0.eq) goto loc_82F8C68C;
	// li r11,80
	ctx.r11.s64 = 80;
loc_82F8C68C:
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f958d0
	ctx.lr = 0x82F8C698;
	sub_82F958D0(ctx, base);
	// lis r27,-31958
	ctx.r27.s64 = -2094399488;
	// lfs f2,132(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// vor128 v125,v1,v1
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lfs f1,4640(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4640);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f95d28
	ctx.lr = 0x82F8C6AC;
	sub_82F95D28(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f0,32240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32240);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lfs f31,-19520(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19520);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82f95a28
	ctx.lr = 0x82F8C6CC;
	sub_82F95A28(ctx, base);
	// vor128 v2,v125,v125
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82f95560
	ctx.lr = 0x82F8C6D4;
	sub_82F95560(ctx, base);
	// bl 0x82f95790
	ctx.lr = 0x82F8C6D8;
	sub_82F95790(ctx, base);
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C6E4;
	sub_82F948A0(ctx, base);
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,112
	ctx.r10.s64 = 112;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,13
	ctx.r5.s64 = 13;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C710;
	sub_82F8C358(ctx, base);
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C71C;
	sub_82F948A0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v2,r0,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,14
	ctx.r5.s64 = 14;
	// li r4,15
	ctx.r4.s64 = 15;
	// lvx128 v4,r30,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor v3,v4,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// lvx128 v1,r30,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C748;
	sub_82F8C358(ctx, base);
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C754;
	sub_82F948A0(ctx, base);
	// li r5,14
	ctx.r5.s64 = 14;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f94800
	ctx.lr = 0x82F8C764;
	sub_82F94800(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,15
	ctx.r5.s64 = 15;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f94800
	ctx.lr = 0x82F8C778;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r26
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8C784;
	sub_82F943F0(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8C788;
	sub_82F944A8(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lbz r11,-18577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -18577);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,64
	ctx.r11.s64 = 64;
	// stvx128 v126,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x82f8c7a8
	if (!ctx.cr0.eq) goto loc_82F8C7A8;
	// li r11,32
	ctx.r11.s64 = 32;
loc_82F8C7A8:
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f958d0
	ctx.lr = 0x82F8C7B4;
	sub_82F958D0(ctx, base);
	// lfs f1,4640(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4640);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f2.f64 = double(temp.f32);
	// vor128 v125,v1,v1
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// bl 0x82f95d28
	ctx.lr = 0x82F8C7C4;
	sub_82F95D28(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lfs f0,18904(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18904);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// fmuls f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// bl 0x82f95a28
	ctx.lr = 0x82F8C7DC;
	sub_82F95A28(ctx, base);
	// vor128 v2,v125,v125
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82f95560
	ctx.lr = 0x82F8C7E4;
	sub_82F95560(ctx, base);
	// bl 0x82f95790
	ctx.lr = 0x82F8C7E8;
	sub_82F95790(ctx, base);
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C7F4;
	sub_82F948A0(ctx, base);
	// li r11,48
	ctx.r11.s64 = 48;
	// li r10,64
	ctx.r10.s64 = 64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,3
	ctx.r5.s64 = 3;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C820;
	sub_82F8C358(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C82C;
	sub_82F948A0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f94800
	ctx.lr = 0x82F8C83C;
	sub_82F94800(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8C848;
	sub_82F943F0(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8C84C;
	sub_82F944A8(ctx, base);
	// li r10,48
	ctx.r10.s64 = 48;
	// lbz r11,-18577(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + -18577);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lvx128 v1,r30,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v125,v1,v1
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// beq 0x82f8c870
	if (ctx.cr0.eq) goto loc_82F8C870;
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// b 0x82f8c874
	goto loc_82F8C874;
loc_82F8C870:
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
loc_82F8C874:
	// bl 0x82f958d0
	ctx.lr = 0x82F8C878;
	sub_82F958D0(ctx, base);
	// lbz r11,-18576(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8c8d8
	if (ctx.cr0.eq) goto loc_82F8C8D8;
	// li r11,64
	ctx.r11.s64 = 64;
	// vor128 v3,v127,v127
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r10,48
	ctx.r10.s64 = 48;
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lvx128 v4,r30,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r30,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8bf20
	ctx.lr = 0x82F8C8A4;
	sub_82F8BF20(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lbz r11,-18578(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -18578);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f8c8cc
	if (ctx.cr0.eq) goto loc_82F8C8CC;
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f95be0
	ctx.lr = 0x82F8C8C4;
	sub_82F95BE0(ctx, base);
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82f95a28
	ctx.lr = 0x82F8C8CC;
	sub_82F95A28(ctx, base);
loc_82F8C8CC:
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f95560
	ctx.lr = 0x82F8C8D4;
	sub_82F95560(ctx, base);
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
loc_82F8C8D8:
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f95790
	ctx.lr = 0x82F8C8E0;
	sub_82F95790(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C8EC;
	sub_82F948A0(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f94828
	ctx.lr = 0x82F8C8FC;
	sub_82F94828(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82f94828
	ctx.lr = 0x82F8C910;
	sub_82F94828(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lvx128 v2,r0,r28
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lfs f1,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f95ad0
	ctx.lr = 0x82F8C924;
	sub_82F95AD0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C930;
	sub_82F948A0(ctx, base);
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,64
	ctx.r10.s64 = 64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,17
	ctx.r5.s64 = 17;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C95C;
	sub_82F8C358(ctx, base);
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C968;
	sub_82F948A0(ctx, base);
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,64
	ctx.r10.s64 = 64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,18
	ctx.r5.s64 = 18;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C994;
	sub_82F8C358(ctx, base);
	// li r4,18
	ctx.r4.s64 = 18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C9A0;
	sub_82F948A0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,19
	ctx.r5.s64 = 19;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8C9CC;
	sub_82F8C358(ctx, base);
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8C9D8;
	sub_82F948A0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,21
	ctx.r5.s64 = 21;
	// li r4,22
	ctx.r4.s64 = 22;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v4,r30,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,96
	ctx.r11.s64 = 96;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// bl 0x82f8c358
	ctx.lr = 0x82F8CA04;
	sub_82F8C358(ctx, base);
	// li r4,21
	ctx.r4.s64 = 21;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8CA10;
	sub_82F948A0(ctx, base);
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r11,96
	ctx.r11.s64 = 96;
	// li r10,64
	ctx.r10.s64 = 64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,23
	ctx.r4.s64 = 23;
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8c358
	ctx.lr = 0x82F8CA3C;
	sub_82F8C358(ctx, base);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8CA48;
	sub_82F948A0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// li r5,23
	ctx.r5.s64 = 23;
	// lbz r6,-18576(r29)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + -18576);
	// li r4,24
	ctx.r4.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v3,r30,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v3,v3
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v4,r30,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f8c358
	ctx.lr = 0x82F8CA74;
	sub_82F8C358(ctx, base);
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8CA80;
	sub_82F948A0(ctx, base);
	// li r11,64
	ctx.r11.s64 = 64;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v2,r30,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f958d0
	ctx.lr = 0x82F8CA90;
	sub_82F958D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// bl 0x82f948a0
	ctx.lr = 0x82F8CAA0;
	sub_82F948A0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r11,r11,4560
	ctx.r11.s64 = ctx.r11.s64 + 4560;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f95560
	ctx.lr = 0x82F8CAB4;
	sub_82F95560(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8CAC0;
	sub_82F948A0(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f95790
	ctx.lr = 0x82F8CAC8;
	sub_82F95790(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f948a0
	ctx.lr = 0x82F8CAD4;
	sub_82F948A0(ctx, base);
loc_82F8CAD4:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8CAF8"))) PPC_WEAK_FUNC(sub_82F8CAF8);
PPC_FUNC_IMPL(__imp__sub_82F8CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8CB00;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// bl 0x82f94858
	ctx.lr = 0x82F8CB14;
	sub_82F94858(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f8cb68
	if (!ctx.cr0.eq) goto loc_82F8CB68;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,31928
	ctx.r29.s64 = ctx.r11.s64 + 31928;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,4
	ctx.r31.s64 = ctx.r29.s64 + 4;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82F8CB34:
	// lfs f3,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// lfs f2,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-4(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f94430
	ctx.lr = 0x82F8CB48;
	sub_82F94430(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f94860
	ctx.lr = 0x82F8CB54;
	sub_82F94860(ctx, base);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r11,r29,304
	ctx.r11.s64 = ctx.r29.s64 + 304;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f8cb34
	if (ctx.cr6.lt) goto loc_82F8CB34;
loc_82F8CB68:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8CB74"))) PPC_WEAK_FUNC(sub_82F8CB74);
PPC_FUNC_IMPL(__imp__sub_82F8CB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8CB78"))) PPC_WEAK_FUNC(sub_82F8CB78);
PPC_FUNC_IMPL(__imp__sub_82F8CB78) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f8bf90
	ctx.lr = 0x82F8CBA4;
	sub_82F8BF90(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r31,0
	ctx.r31.s64 = 0;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82F8CBB0:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f94800
	ctx.lr = 0x82F8CBC0;
	sub_82F94800(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8CBCC;
	sub_82F94480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f94860
	ctx.lr = 0x82F8CBD8;
	sub_82F94860(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f94810
	ctx.lr = 0x82F8CBE8;
	sub_82F94810(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8CBF4;
	sub_82F94480(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f94888
	ctx.lr = 0x82F8CC00;
	sub_82F94888(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// blt cr6,0x82f8cbb0
	if (ctx.cr6.lt) goto loc_82F8CBB0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82F8CC2C"))) PPC_WEAK_FUNC(sub_82F8CC2C);
PPC_FUNC_IMPL(__imp__sub_82F8CC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8CC30"))) PPC_WEAK_FUNC(sub_82F8CC30);
PPC_FUNC_IMPL(__imp__sub_82F8CC30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8CC38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r11,16
	ctx.r11.s64 = 16;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stvx128 v0,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f94800
	ctx.lr = 0x82F8CC5C;
	sub_82F94800(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r31,0
	ctx.r31.s64 = 0;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82F8CC68:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f94800
	ctx.lr = 0x82F8CC78;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r30
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8CC84;
	sub_82F943F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f94860
	ctx.lr = 0x82F8CC90;
	sub_82F94860(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// blt cr6,0x82f8cc68
	if (ctx.cr6.lt) goto loc_82F8CC68;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8CCA4"))) PPC_WEAK_FUNC(sub_82F8CCA4);
PPC_FUNC_IMPL(__imp__sub_82F8CCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8CCA8"))) PPC_WEAK_FUNC(sub_82F8CCA8);
PPC_FUNC_IMPL(__imp__sub_82F8CCA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8CCB0;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3312);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82f94850
	ctx.lr = 0x82F8CCD0;
	sub_82F94850(ctx, base);
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x82f94850
	ctx.lr = 0x82F8CCE0;
	sub_82F94850(ctx, base);
	// subf r11,r3,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r3.s64;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfd f0,32232(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 32232);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// lfs f31,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// lfs f2,-14924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14924);
	ctx.f2.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82f95d48
	ctx.lr = 0x82F8CD18;
	sub_82F95D48(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// li r31,0
	ctx.r31.s64 = 0;
	// fdivs f31,f31,f1
	ctx.f31.f64 = double(float(ctx.f31.f64 / ctx.f1.f64));
loc_82F8CD24:
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,2128
	ctx.r4.s64 = ctx.r11.s64 + 2128;
	// bl 0x82f94800
	ctx.lr = 0x82F8CD38;
	sub_82F94800(ctx, base);
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f94800
	ctx.lr = 0x82F8CD50;
	sub_82F94800(ctx, base);
	// lvx128 v2,r0,r28
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8CD5C;
	sub_82F943F0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f94888
	ctx.lr = 0x82F8CD68;
	sub_82F94888(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f94810
	ctx.lr = 0x82F8CD78;
	sub_82F94810(ctx, base);
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8CD84;
	sub_82F94450(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f94888
	ctx.lr = 0x82F8CD90;
	sub_82F94888(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// blt cr6,0x82f8cd24
	if (ctx.cr6.lt) goto loc_82F8CD24;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8CDB0"))) PPC_WEAK_FUNC(sub_82F8CDB0);
PPC_FUNC_IMPL(__imp__sub_82F8CDB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,31640
	ctx.r11.s64 = ctx.r11.s64 + 31640;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8CDC4"))) PPC_WEAK_FUNC(sub_82F8CDC4);
PPC_FUNC_IMPL(__imp__sub_82F8CDC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8CDC8"))) PPC_WEAK_FUNC(sub_82F8CDC8);
PPC_FUNC_IMPL(__imp__sub_82F8CDC8) {
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
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4528);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8ce18
	if (!ctx.cr6.eq) goto loc_82F8CE18;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82691580
	ctx.lr = 0x82F8CDF0;
	sub_82691580(ctx, base);
	// stw r3,4528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4528, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82ae0468
	ctx.lr = 0x82F8CE08;
	sub_82AE0468(ctx, base);
	// lwz r11,4528(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4528);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8ce1c
	if (ctx.cr6.eq) goto loc_82F8CE1C;
loc_82F8CE18:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82F8CE1C:
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

__attribute__((alias("__imp__sub_82F8CE30"))) PPC_WEAK_FUNC(sub_82F8CE30);
PPC_FUNC_IMPL(__imp__sub_82F8CE30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,-18768
	ctx.r11.s64 = ctx.r11.s64 + -18768;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8CE44"))) PPC_WEAK_FUNC(sub_82F8CE44);
PPC_FUNC_IMPL(__imp__sub_82F8CE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8CE48"))) PPC_WEAK_FUNC(sub_82F8CE48);
PPC_FUNC_IMPL(__imp__sub_82F8CE48) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// bne cr6,0x82f8ce9c
	if (!ctx.cr6.eq) goto loc_82F8CE9C;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r10,4576
	ctx.r10.s64 = ctx.r10.s64 + 4576;
	// addi r9,r3,-8
	ctx.r9.s64 = ctx.r3.s64 + -8;
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82F8CE8C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82f8ce8c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8CE8C;
	// b 0x82f8cff4
	goto loc_82F8CFF4;
loc_82F8CE9C:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// bne cr6,0x82f8ceb8
	if (!ctx.cr6.eq) goto loc_82F8CEB8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f8bdd0
	ctx.lr = 0x82F8CEB0;
	sub_82F8BDD0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// b 0x82f8cef0
	goto loc_82F8CEF0;
loc_82F8CEB8:
	// cmpwi cr6,r5,3
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 3, ctx.xer);
	// bne cr6,0x82f8cee8
	if (!ctx.cr6.eq) goto loc_82F8CEE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82f8bdd0
	ctx.lr = 0x82F8CECC;
	sub_82F8BDD0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// li r10,3280
	ctx.r10.s64 = 3280;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r31,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94480
	ctx.lr = 0x82F8CEE0;
	sub_82F94480(ctx, base);
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// b 0x82f8cef4
	goto loc_82F8CEF4;
loc_82F8CEE8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r11,r11,31504
	ctx.r11.s64 = ctx.r11.s64 + 31504;
loc_82F8CEF0:
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82F8CEF4:
	// li r11,3264
	ctx.r11.s64 = 3264;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lvx128 v1,r31,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94f28
	ctx.lr = 0x82F8CF04;
	sub_82F94F28(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82f94f28
	ctx.lr = 0x82F8CF10;
	sub_82F94F28(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// lfs f3,3304(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3304);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,3300(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3300);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,3296(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 3296);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f951d8
	ctx.lr = 0x82F8CF24;
	sub_82F951D8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,368
	ctx.r4.s64 = ctx.r1.s64 + 368;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F8CF34;
	sub_82FA77C0(ctx, base);
	// ld r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 296);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// ld r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r6,256(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// ld r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// ld r8,272(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// ld r9,280(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// ld r10,288(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82f94ff0
	ctx.lr = 0x82F8CF60;
	sub_82F94FF0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F8CF70;
	sub_82FA77C0(ctx, base);
	// ld r11,232(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// ld r4,176(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r6,192(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r7,200(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r8,208(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r9,216(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r10,224(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82f94ff0
	ctx.lr = 0x82F8CF9C;
	sub_82F94FF0(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// li r8,32
	ctx.r8.s64 = 32;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,48
	ctx.r6.s64 = 48;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r11,8
	ctx.r11.s64 = 8;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r3,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,168
	ctx.r10.s64 = ctx.r1.s64 + 168;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r30,-8
	ctx.r9.s64 = ctx.r30.s64 + -8;
	// lvx128 v0,r3,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82F8CFE8:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82f8cfe8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8CFE8;
loc_82F8CFF4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
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

__attribute__((alias("__imp__sub_82F8D018"))) PPC_WEAK_FUNC(sub_82F8D018);
PPC_FUNC_IMPL(__imp__sub_82F8D018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F8D020;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82f8ce48
	ctx.lr = 0x82F8D048;
	sub_82F8CE48(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// addi r4,r31,48
	ctx.r4.s64 = ctx.r31.s64 + 48;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82F8D06C;
	sub_82FA77C0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// ld r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// ld r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// ld r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// ld r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// bl 0x82f8bc88
	ctx.lr = 0x82F8D090;
	sub_82F8BC88(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8D098"))) PPC_WEAK_FUNC(sub_82F8D098);
PPC_FUNC_IMPL(__imp__sub_82F8D098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8D0A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,3312(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3312);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f948d0
	ctx.lr = 0x82F8D0BC;
	sub_82F948D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8caf8
	ctx.lr = 0x82F8D0C8;
	sub_82F8CAF8(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8cca8
	ctx.lr = 0x82F8D0D4;
	sub_82F8CCA8(ctx, base);
	// stfs f1,3220(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 3220, temp.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f8c488
	ctx.lr = 0x82F8D0E0;
	sub_82F8C488(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8D0E4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f94800
	ctx.lr = 0x82F8D0F4;
	sub_82F94800(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94860
	ctx.lr = 0x82F8D10C;
	sub_82F94860(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f94810
	ctx.lr = 0x82F8D11C;
	sub_82F94810(ctx, base);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94888
	ctx.lr = 0x82F8D134;
	sub_82F94888(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f94840
	ctx.lr = 0x82F8D140;
	sub_82F94840(ctx, base);
	// lwz r11,3312(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3312);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x82f948b8
	ctx.lr = 0x82F8D154;
	sub_82F948B8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,25
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 25, ctx.xer);
	// blt cr6,0x82f8d0e4
	if (ctx.cr6.lt) goto loc_82F8D0E4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8D168"))) PPC_WEAK_FUNC(sub_82F8D168);
PPC_FUNC_IMPL(__imp__sub_82F8D168) {
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
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// vor v0,v1,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,31552
	ctx.r11.s64 = ctx.r11.s64 + 31552;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lfs f31,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v2,r0,r8
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f958d0
	ctx.lr = 0x82F8D1C0;
	sub_82F958D0(ctx, base);
	// lfs f2,252(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94430
	ctx.lr = 0x82F8D1D8;
	sub_82F94430(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f95470
	ctx.lr = 0x82F8D1E4;
	sub_82F95470(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82F8D1F0:
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vspltw v0,v12,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vspltw v13,v12,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmaddcfp128 v0,v10,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmaddfp128 v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v0,v12,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82f8d1f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8D1F0;
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
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8D258"))) PPC_WEAK_FUNC(sub_82F8D258);
PPC_FUNC_IMPL(__imp__sub_82F8D258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F8D260;
	__savegprlr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82f8d438
	if (ctx.cr6.lt) goto loc_82F8D438;
	// cmpwi cr6,r5,6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 6, ctx.xer);
	// bge cr6,0x82f8d438
	if (!ctx.cr6.lt) goto loc_82F8D438;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r3,r3,480
	ctx.r3.s64 = ctx.r3.s64 + 480;
	// bl 0x8254a968
	ctx.lr = 0x82F8D294;
	sub_8254A968(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// mulli r10,r30,28
	ctx.r10.s64 = ctx.r30.s64 * 28;
	// stw r30,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r30.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r9,r10,5
	ctx.r9.s64 = ctx.r10.s64 + 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
loc_82F8D2B0:
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r8,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// bdnz 0x82f8d2b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8D2B0;
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,16
	ctx.r27.s64 = 16;
	// beq 0x82f8d2e8
	if (ctx.cr0.eq) goto loc_82F8D2E8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// lvx128 v1,r28,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8d168
	ctx.lr = 0x82F8D2E8;
	sub_82F8D168(ctx, base);
loc_82F8D2E8:
	// lwz r10,3312(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v0,r28,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// mulli r11,r30,448
	ctx.r11.s64 = ctx.r30.s64 * 448;
	// stvx128 v0,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,3312(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r11,48
	ctx.r29.s64 = ctx.r11.s64 + 48;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stw r11,6212(r8)
	PPC_STORE_U32(ctx.r8.u32 + 6212, ctx.r11.u32);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
loc_82F8D32C:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stwx r10,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82f8d32c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8D32C;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// addi r3,r11,2128
	ctx.r3.s64 = ctx.r11.s64 + 2128;
	// bl 0x82f94908
	ctx.lr = 0x82F8D34C;
	sub_82F94908(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// lwz r7,6212(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6212);
	// bl 0x82f8c050
	ctx.lr = 0x82F8D368;
	sub_82F8C050(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x82f8cb78
	ctx.lr = 0x82F8D378;
	sub_82F8CB78(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// bl 0x82f8caf8
	ctx.lr = 0x82F8D388;
	sub_82F8CAF8(ctx, base);
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8254a968
	ctx.lr = 0x82F8D398;
	sub_8254A968(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// mulli r10,r30,112
	ctx.r10.s64 = ctx.r30.s64 * 112;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r1,152
	ctx.r11.s64 = ctx.r1.s64 + 152;
	// addi r7,r10,100
	ctx.r7.s64 = ctx.r10.s64 + 100;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
loc_82F8D3B8:
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwz r5,3312(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// lfs f13,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f12,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// lfsu f0,16(r11)
	ea = 16 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// lwzx r6,r6,r28
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// stwx r6,r5,r8
	PPC_STORE_U32(ctx.r5.u32 + ctx.r8.u32, ctx.r6.u32);
	// stfs f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + 8, temp.u32);
	// stfs f12,12(r10)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 12, temp.u32);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// stfsu f0,16(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f8d3b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8D3B8;
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f94908
	ctx.lr = 0x82F8D408;
	sub_82F94908(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4160
	ctx.r4.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f8cc30
	ctx.lr = 0x82F8D418;
	sub_82F8CC30(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4160
	ctx.r4.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f8cca8
	ctx.lr = 0x82F8D428;
	sub_82F8CCA8(ctx, base);
	// stfs f1,3220(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3220, temp.u32);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f8c488
	ctx.lr = 0x82F8D438;
	sub_82F8C488(ctx, base);
loc_82F8D438:
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8D440"))) PPC_WEAK_FUNC(sub_82F8D440);
PPC_FUNC_IMPL(__imp__sub_82F8D440) {
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
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fac0fc
	ctx.lr = 0x82F8D460;
	__savevmx_113(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,23
	ctx.r4.s64 = 23;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D48C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D4AC;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,22
	ctx.r4.s64 = 22;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D4CC;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,18
	ctx.r4.s64 = 18;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D4EC;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,21
	ctx.r4.s64 = 21;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D50C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D52C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D54C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,11
	ctx.r4.s64 = 11;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D56C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,15
	ctx.r4.s64 = 15;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D58C;
	sub_82F8D018(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D5AC;
	sub_82F8D018(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D5CC;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,9
	ctx.r4.s64 = 9;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D5EC;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,13
	ctx.r4.s64 = 13;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D60C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D62C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D64C;
	sub_82F8D018(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D66C;
	sub_82F8D018(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f8d018
	ctx.lr = 0x82F8D68C;
	sub_82F8D018(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lfs f31,32264(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32264);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D6A4;
	sub_82F94450(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// vor128 v124,v1,v1
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f94450
	ctx.lr = 0x82F8D6B8;
	sub_82F94450(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vor128 v123,v1,v1
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D6D4;
	sub_82F943F0(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lfs f31,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f31.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D6EC;
	sub_82F94468(ctx, base);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f30,16548(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16548);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D6FC;
	sub_82F94450(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vor128 v122,v1,v1
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D718;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D728;
	sub_82F94468(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D730;
	sub_82F94450(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// vor128 v121,v1,v1
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v125,r0,r11
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v125,v125
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D748;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D758;
	sub_82F94468(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfs f30,32260(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32260);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D768;
	sub_82F94450(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vor128 v120,v1,v1
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D780;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D790;
	sub_82F94468(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D798;
	sub_82F94450(ctx, base);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// vor128 v119,v1,v1
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lfs f30,32256(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32256);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D7B8;
	sub_82F94450(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vor128 v118,v1,v1
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// lvx128 v125,r0,r11
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82f94450
	ctx.lr = 0x82F8D7D0;
	sub_82F94450(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// vor128 v117,v1,v1
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D7E8;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D7F8;
	sub_82F94468(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfs f30,32252(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32252);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D808;
	sub_82F94450(ctx, base);
	// addi r11,r1,288
	ctx.r11.s64 = ctx.r1.s64 + 288;
	// vor128 v116,v1,v1
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D820;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D830;
	sub_82F94468(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D838;
	sub_82F94450(ctx, base);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// vor128 v115,v1,v1
	_mm_store_si128((__m128i*)ctx.v115.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v125,r0,r11
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v125,v125
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D850;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D860;
	sub_82F94468(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,11976(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11976);
	ctx.f30.f64 = double(temp.f32);
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D870;
	sub_82F94450(ctx, base);
	// addi r11,r1,336
	ctx.r11.s64 = ctx.r1.s64 + 336;
	// vor128 v125,v1,v1
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D888;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D898;
	sub_82F94468(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82f94450
	ctx.lr = 0x82F8D8A0;
	sub_82F94450(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vor128 v114,v1,v1
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D8BC;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D8CC;
	sub_82F94468(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfs f1,32248(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32248);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f94450
	ctx.lr = 0x82F8D8D8;
	sub_82F94450(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// vor128 v113,v1,v1
	_mm_store_si128((__m128i*)ctx.v113.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v126,r0,r11
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor128 v2,v126,v126
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// bl 0x82f943f0
	ctx.lr = 0x82F8D8F0;
	sub_82F943F0(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94468
	ctx.lr = 0x82F8D900;
	sub_82F94468(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lfs f1,32244(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32244);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82f94450
	ctx.lr = 0x82F8D90C;
	sub_82F94450(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// vor128 v2,v124,v124
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r11,r11,31504
	ctx.r11.s64 = ctx.r11.s64 + 31504;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D924;
	sub_830A06D8(ctx, base);
	// vor128 v2,v123,v123
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D92C;
	sub_830A06D8(ctx, base);
	// vor128 v2,v122,v122
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D934;
	sub_830A06D8(ctx, base);
	// vor128 v2,v121,v121
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D93C;
	sub_830A06D8(ctx, base);
	// vor128 v2,v120,v120
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D944;
	sub_830A06D8(ctx, base);
	// vor128 v2,v119,v119
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v119.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D94C;
	sub_830A06D8(ctx, base);
	// vor128 v2,v118,v118
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v118.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D954;
	sub_830A06D8(ctx, base);
	// vor128 v2,v117,v117
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v117.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D95C;
	sub_830A06D8(ctx, base);
	// vor128 v2,v116,v116
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v116.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D964;
	sub_830A06D8(ctx, base);
	// vor128 v2,v115,v115
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v115.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D96C;
	sub_830A06D8(ctx, base);
	// vor128 v2,v125,v125
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D974;
	sub_830A06D8(ctx, base);
	// vor128 v2,v114,v114
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v114.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D97C;
	sub_830A06D8(ctx, base);
	// vor128 v2,v113,v113
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v113.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D984;
	sub_830A06D8(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8D98C;
	sub_830A06D8(ctx, base);
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fac394
	ctx.lr = 0x82F8D9A0;
	__restvmx_113(ctx, base);
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

__attribute__((alias("__imp__sub_82F8D9BC"))) PPC_WEAK_FUNC(sub_82F8D9BC);
PPC_FUNC_IMPL(__imp__sub_82F8D9BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8D9C0"))) PPC_WEAK_FUNC(sub_82F8D9C0);
PPC_FUNC_IMPL(__imp__sub_82F8D9C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8D9C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// li r4,448
	ctx.r4.s64 = 448;
	// bl 0x822d2820
	ctx.lr = 0x82F8D9DC;
	sub_822D2820(ctx, base);
	// addi r3,r31,480
	ctx.r3.s64 = ctx.r31.s64 + 480;
	// li r4,2736
	ctx.r4.s64 = 2736;
	// bl 0x822d2820
	ctx.lr = 0x82F8D9E8;
	sub_822D2820(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// addi r3,r11,96
	ctx.r3.s64 = ctx.r11.s64 + 96;
	// bl 0x82f947f8
	ctx.lr = 0x82F8D9F4;
	sub_82F947F8(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f947f8
	ctx.lr = 0x82F8DA00;
	sub_82F947F8(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,80
	ctx.r4.s64 = 80;
	// stw r30,6212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 6212, ctx.r30.u32);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// addi r3,r11,6228
	ctx.r3.s64 = ctx.r11.s64 + 6228;
	// bl 0x822d2820
	ctx.lr = 0x82F8DA1C;
	sub_822D2820(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r3,r11,6328
	ctx.r3.s64 = ctx.r11.s64 + 6328;
	// bl 0x822d2820
	ctx.lr = 0x82F8DA2C;
	sub_822D2820(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r10,3264
	ctx.r10.s64 = 3264;
	// addi r29,r11,31504
	ctx.r29.s64 = ctx.r11.s64 + 31504;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x830afa18
	ctx.lr = 0x82F8DA4C;
	sub_830AFA18(ctx, base);
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// lis r9,-32232
	ctx.r9.s64 = -2112356352;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,3232
	ctx.r7.s64 = 3232;
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// stw r5,3296(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3296, ctx.r5.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,3300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3300, ctx.r11.u32);
	// lfs f0,-14924(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14924);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lvx128 v0,r29,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stfs f0,3220(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3220, temp.u32);
	// stb r30,3249(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3249, ctx.r30.u8);
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r6,3248(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3248, ctx.r6.u8);
	// stw r11,3304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3304, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8d098
	ctx.lr = 0x82F8DAA0;
	sub_82F8D098(ctx, base);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// addi r3,r11,4160
	ctx.r3.s64 = ctx.r11.s64 + 4160;
	// bl 0x82f94908
	ctx.lr = 0x82F8DAB0;
	sub_82F94908(ctx, base);
	// li r11,20
	ctx.r11.s64 = 20;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// stfs f0,6428(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 6428, temp.u32);
loc_82F8DACC:
	// lwz r11,3312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3312);
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82f8dacc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8DACC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8DAE4"))) PPC_WEAK_FUNC(sub_82F8DAE4);
PPC_FUNC_IMPL(__imp__sub_82F8DAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DAE8"))) PPC_WEAK_FUNC(sub_82F8DAE8);
PPC_FUNC_IMPL(__imp__sub_82F8DAE8) {
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
	// addi r3,r3,3296
	ctx.r3.s64 = ctx.r3.s64 + 3296;
	// bl 0x828b2440
	ctx.lr = 0x82F8DB08;
	sub_828B2440(ctx, base);
	// li r3,6432
	ctx.r3.s64 = 6432;
	// bl 0x82f8b8b0
	ctx.lr = 0x82F8DB10;
	sub_82F8B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8db24
	if (ctx.cr0.eq) goto loc_82F8DB24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f8bb68
	ctx.lr = 0x82F8DB20;
	sub_82F8BB68(ctx, base);
	// b 0x82f8db28
	goto loc_82F8DB28;
loc_82F8DB24:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8DB28:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r3,3312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3312, ctx.r3.u32);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r30,r11,31504
	ctx.r30.s64 = ctx.r11.s64 + 31504;
	// li r11,16
	ctx.r11.s64 = 16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stfs f0,3308(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 3308, temp.u32);
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f8d9c0
	ctx.lr = 0x82F8DB54;
	sub_82F8D9C0(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,3280
	ctx.r10.s64 = 3280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v0,r30,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F8DB80"))) PPC_WEAK_FUNC(sub_82F8DB80);
PPC_FUNC_IMPL(__imp__sub_82F8DB80) {
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
	// bl 0x82f91a08
	ctx.lr = 0x82F8DB98;
	sub_82F91A08(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,32284
	ctx.r11.s64 = ctx.r11.s64 + 32284;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4656);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lwz r11,4656(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4656);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4656(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4656, ctx.r11.u32);
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F8DBDC"))) PPC_WEAK_FUNC(sub_82F8DBDC);
PPC_FUNC_IMPL(__imp__sub_82F8DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DBE0"))) PPC_WEAK_FUNC(sub_82F8DBE0);
PPC_FUNC_IMPL(__imp__sub_82F8DBE0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// addi r10,r10,4688
	ctx.r10.s64 = ctx.r10.s64 + 4688;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// li r5,448
	ctx.r5.s64 = 448;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x8254a968
	sub_8254A968(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8DC14"))) PPC_WEAK_FUNC(sub_82F8DC14);
PPC_FUNC_IMPL(__imp__sub_82F8DC14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8DC18"))) PPC_WEAK_FUNC(sub_82F8DC18);
PPC_FUNC_IMPL(__imp__sub_82F8DC18) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r9,r11,4688
	ctx.r9.s64 = ctx.r11.s64 + 4688;
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// ld r11,4688(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 4688);
	// li r6,32
	ctx.r6.s64 = 32;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lvx128 v0,r9,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r9,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8DC64"))) PPC_WEAK_FUNC(sub_82F8DC64);
PPC_FUNC_IMPL(__imp__sub_82F8DC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DC68"))) PPC_WEAK_FUNC(sub_82F8DC68);
PPC_FUNC_IMPL(__imp__sub_82F8DC68) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32284
	ctx.r11.s64 = ctx.r11.s64 + 32284;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82f91a20
	ctx.lr = 0x82F8DC94;
	sub_82F91A20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8dca4
	if (ctx.cr0.eq) goto loc_82F8DCA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82F8DCA4;
	sub_82691540(ctx, base);
loc_82F8DCA4:
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

__attribute__((alias("__imp__sub_82F8DCC0"))) PPC_WEAK_FUNC(sub_82F8DCC0);
PPC_FUNC_IMPL(__imp__sub_82F8DCC0) {
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
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r11,r11,4688
	ctx.r11.s64 = ctx.r11.s64 + 4688;
	// li r7,0
	ctx.r7.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r8,r11,-396
	ctx.r8.s64 = ctx.r11.s64 + -396;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F8DCEC:
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82f8dcec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8DCEC;
	// li r9,6
	ctx.r9.s64 = 6;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F8DD00:
	// lwzu r9,448(r8)
	ea = 448 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stwx r9,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82f8dd00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8DD00;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r9,r1,76
	ctx.r9.s64 = ctx.r1.s64 + 76;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82F8DD28:
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82f8dd48
	if (!ctx.cr6.eq) goto loc_82F8DD48;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bge cr6,0x82f8dd48
	if (!ctx.cr6.lt) goto loc_82F8DD48;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_82F8DD48:
	// addi r6,r6,448
	ctx.r6.s64 = ctx.r6.s64 + 448;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82f8dd28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8DD28;
	// rlwinm r8,r7,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r10,6
	ctx.r10.s64 = 6;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82F8DD74:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82f8dd94
	if (ctx.cr6.eq) goto loc_82F8DD94;
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bge cr6,0x82f8dd94
	if (!ctx.cr6.lt) goto loc_82F8DD94;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_82F8DD94:
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82f8dd74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8DD74;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,4660
	ctx.r3.s64 = ctx.r11.s64 + 4660;
loc_82F8DDB0:
	// li r10,2
	ctx.r10.s64 = 2;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82F8DDC0:
	// cmpw cr6,r6,r7
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r7.s32, ctx.xer);
	// beq cr6,0x82f8ddf0
	if (ctx.cr6.eq) goto loc_82F8DDF0;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r9,r11,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82f8ddf0
	if (!ctx.cr6.eq) goto loc_82F8DDF0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f8ddf0
	if (ctx.cr6.eq) goto loc_82F8DDF0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
loc_82F8DDF0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82f8ddc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8DDC0;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// blt cr6,0x82f8ddb0
	if (ctx.cr6.lt) goto loc_82F8DDB0;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8254a968
	ctx.lr = 0x82F8DE18;
	sub_8254A968(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8DE28"))) PPC_WEAK_FUNC(sub_82F8DE28);
PPC_FUNC_IMPL(__imp__sub_82F8DE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8DE38"))) PPC_WEAK_FUNC(sub_82F8DE38);
PPC_FUNC_IMPL(__imp__sub_82F8DE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8DE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lis r27,-31958
	ctx.r27.s64 = -2094399488;
	// addi r11,r11,-18488
	ctx.r11.s64 = ctx.r11.s64 + -18488;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r11,-8
	ctx.r30.s64 = ctx.r11.s64 + -8;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r11,4684(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4684);
	// li r29,3
	ctx.r29.s64 = 3;
loc_82F8DE64:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// li r6,2
	ctx.r6.s64 = 2;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzu r4,12(r30)
	ea = 12 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82a0a6e0
	ctx.lr = 0x82F8DE88;
	sub_82A0A6E0(ctx, base);
	// lwz r11,4684(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4684);
	// add r10,r31,r11
	ctx.r10.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r9,r3,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// stw r28,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r28.u32);
	// stw r9,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r9.u32);
	// bne 0x82f8de64
	if (!ctx.cr0.eq) goto loc_82F8DE64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8DEB4"))) PPC_WEAK_FUNC(sub_82F8DEB4);
PPC_FUNC_IMPL(__imp__sub_82F8DEB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8DEB8"))) PPC_WEAK_FUNC(sub_82F8DEB8);
PPC_FUNC_IMPL(__imp__sub_82F8DEB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8DEC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,4684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4684);
loc_82F8DED4:
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8df58
	if (ctx.cr6.eq) goto loc_82F8DF58;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// srawi r9,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 1;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r30,r9,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r10,r31,r30
	ctx.r10.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a09aa0
	ctx.lr = 0x82F8DF18;
	sub_82A09AA0(ctx, base);
	// lwz r11,4684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4684);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f8df58
	if (ctx.cr0.lt) goto loc_82F8DF58;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// beq cr6,0x82f8df50
	if (ctx.cr6.eq) goto loc_82F8DF50;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82a09dc8
	ctx.lr = 0x82F8DF4C;
	sub_82A09DC8(ctx, base);
	// lwz r11,4684(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4684);
loc_82F8DF50:
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r30,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r30.u32);
loc_82F8DF58:
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// addi r28,r28,20
	ctx.r28.s64 = ctx.r28.s64 + 20;
	// cmplwi cr6,r31,15
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 15, ctx.xer);
	// blt cr6,0x82f8ded4
	if (ctx.cr6.lt) goto loc_82F8DED4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8DF70"))) PPC_WEAK_FUNC(sub_82F8DF70);
PPC_FUNC_IMPL(__imp__sub_82F8DF70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F8DF78;
	__savegprlr_25(ctx, base);
	// stwu r1,-2880(r1)
	ea = -2880 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r6,r10,32296
	ctx.r6.s64 = ctx.r10.s64 + 32296;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,11028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11028, ctx.r25.u32);
	// stw r29,11032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11032, ctx.r29.u32);
	// bl 0x82a77608
	ctx.lr = 0x82F8DFAC;
	sub_82A77608(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r26,2
	ctx.r26.s64 = 2;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,11724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11724);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 & ctx.r26.u64;
	// bl 0x82a0b310
	ctx.lr = 0x82F8DFCC;
	sub_82A0B310(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f8dfe4
	if (!ctx.cr0.lt) goto loc_82F8DFE4;
loc_82F8DFD8:
	// li r3,21
	ctx.r3.s64 = 21;
	// stw r29,11028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11028, ctx.r29.u32);
	// b 0x82f8e120
	goto loc_82F8E120;
loc_82F8DFE4:
	// lwz r10,11028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11028);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f8e10c
	if (ctx.cr6.eq) goto loc_82F8E10C;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82F8DFF4:
	// lwz r10,11728(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11728);
	// lwz r9,11724(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11724);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82f8e030
	if (ctx.cr6.eq) goto loc_82F8E030;
	// stw r10,11724(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11724, ctx.r10.u32);
	// bl 0x82a0ab28
	ctx.lr = 0x82F8E00C;
	sub_82A0AB28(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,11724(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11724);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r26
	ctx.r4.u64 = ctx.r11.u64 & ctx.r26.u64;
	// bl 0x82a0b310
	ctx.lr = 0x82F8E028;
	sub_82A0B310(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f8e128
	if (ctx.cr0.lt) goto loc_82F8E128;
loc_82F8E030:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a77600
	ctx.lr = 0x82F8E03C;
	sub_82A77600(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,11064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r27
	ctx.r3.u64 = ctx.r11.u64 & ctx.r27.u64;
	// bl 0x82a0b4b0
	ctx.lr = 0x82F8E05C;
	sub_82A0B4B0(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82f8e0c8
	if (ctx.cr0.lt) goto loc_82F8E0C8;
	// addi r3,r11,11036
	ctx.r3.s64 = ctx.r11.s64 + 11036;
	// bl 0x831791a4
	ctx.lr = 0x82F8E070;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,8288
	ctx.r3.s64 = ctx.r11.s64 + 8288;
	// bl 0x8254a968
	ctx.lr = 0x82F8E084;
	sub_8254A968(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r3,r11,11036
	ctx.r3.s64 = ctx.r11.s64 + 11036;
	// bl 0x831791b4
	ctx.lr = 0x82F8E090;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
loc_82F8E098:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r29,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r29.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e098
	if (!ctx.cr0.eq) goto loc_82F8E098;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r3,11732(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11732);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8e0e8
	if (ctx.cr6.eq) goto loc_82F8E0E8;
	// bl 0x82a776a8
	ctx.lr = 0x82F8E0C4;
	sub_82A776A8(ctx, base);
	// b 0x82f8e0e4
	goto loc_82F8E0E4;
loc_82F8E0C8:
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
loc_82F8E0CC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r25,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r25.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e0cc
	if (!ctx.cr0.eq) goto loc_82F8E0CC;
loc_82F8E0E4:
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
loc_82F8E0E8:
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// ori r10,r10,1167
	ctx.r10.u64 = ctx.r10.u64 | 1167;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,11028(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11028);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f8dff4
	if (!ctx.cr6.eq) goto loc_82F8DFF4;
loc_82F8E10C:
	// bl 0x82a0ab28
	ctx.lr = 0x82F8E110;
	sub_82A0AB28(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,11024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11024, ctx.r29.u32);
	// stw r25,11032(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11032, ctx.r25.u32);
loc_82F8E120:
	// addi r1,r1,2880
	ctx.r1.s64 = ctx.r1.s64 + 2880;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F8E128:
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// b 0x82f8dfd8
	goto loc_82F8DFD8;
}

__attribute__((alias("__imp__sub_82F8E130"))) PPC_WEAK_FUNC(sub_82F8E130);
PPC_FUNC_IMPL(__imp__sub_82F8E130) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82f8e154
	if (!ctx.cr6.eq) goto loc_82F8E154;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F8E154:
	// mulli r9,r3,5
	ctx.r9.s64 = ctx.r3.s64 * 5;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E16C"))) PPC_WEAK_FUNC(sub_82F8E16C);
PPC_FUNC_IMPL(__imp__sub_82F8E16C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E170"))) PPC_WEAK_FUNC(sub_82F8E170);
PPC_FUNC_IMPL(__imp__sub_82F8E170) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 1;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82f8e1b0
	if (ctx.cr6.eq) goto loc_82F8E1B0;
	// mulli r9,r3,5
	ctx.r9.s64 = ctx.r3.s64 * 5;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8e1b0
	if (ctx.cr6.eq) goto loc_82F8E1B0;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blr 
	return;
loc_82F8E1B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E1B8"))) PPC_WEAK_FUNC(sub_82F8E1B8);
PPC_FUNC_IMPL(__imp__sub_82F8E1B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// blt cr6,0x82f8e1dc
	if (ctx.cr6.lt) goto loc_82F8E1DC;
	// beq cr6,0x82f8e1d4
	if (ctx.cr6.eq) goto loc_82F8E1D4;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// blr 
	return;
loc_82F8E1D4:
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// blr 
	return;
loc_82F8E1DC:
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E1E4"))) PPC_WEAK_FUNC(sub_82F8E1E4);
PPC_FUNC_IMPL(__imp__sub_82F8E1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E1E8"))) PPC_WEAK_FUNC(sub_82F8E1E8);
PPC_FUNC_IMPL(__imp__sub_82F8E1E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r11,11064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// and r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 & ctx.r3.u64;
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

__attribute__((alias("__imp__sub_82F8E204"))) PPC_WEAK_FUNC(sub_82F8E204);
PPC_FUNC_IMPL(__imp__sub_82F8E204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E208"))) PPC_WEAK_FUNC(sub_82F8E208);
PPC_FUNC_IMPL(__imp__sub_82F8E208) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// addi r11,r11,11104
	ctx.r11.s64 = ctx.r11.s64 + 11104;
loc_82F8E218:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82f8e218
	if (!ctx.cr0.eq) goto loc_82F8E218;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E234"))) PPC_WEAK_FUNC(sub_82F8E234);
PPC_FUNC_IMPL(__imp__sub_82F8E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E238"))) PPC_WEAK_FUNC(sub_82F8E238);
PPC_FUNC_IMPL(__imp__sub_82F8E238) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f8e288
	if (!ctx.cr6.eq) goto loc_82F8E288;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8E260;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r10,11764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f8e278
	if (ctx.cr6.eq) goto loc_82F8E278;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,11764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11764, ctx.r10.u32);
loc_82F8E278:
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791b4
	ctx.lr = 0x82F8E280;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8e2c8
	goto loc_82F8E2C8;
loc_82F8E288:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f8e2c4
	if (!ctx.cr6.eq) goto loc_82F8E2C4;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8E2A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r10,11764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f8e2bc
	if (ctx.cr6.eq) goto loc_82F8E2BC;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,11764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11764, ctx.r10.u32);
loc_82F8E2BC:
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791b4
	ctx.lr = 0x82F8E2C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82F8E2C4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F8E2C8:
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

__attribute__((alias("__imp__sub_82F8E2DC"))) PPC_WEAK_FUNC(sub_82F8E2DC);
PPC_FUNC_IMPL(__imp__sub_82F8E2DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E2E0"))) PPC_WEAK_FUNC(sub_82F8E2E0);
PPC_FUNC_IMPL(__imp__sub_82F8E2E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,11112
	ctx.r3.s64 = ctx.r11.s64 + 11112;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E2F8"))) PPC_WEAK_FUNC(sub_82F8E2F8);
PPC_FUNC_IMPL(__imp__sub_82F8E2F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r3,11156(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11156);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E310"))) PPC_WEAK_FUNC(sub_82F8E310);
PPC_FUNC_IMPL(__imp__sub_82F8E310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r11,11428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11428);
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

__attribute__((alias("__imp__sub_82F8E328"))) PPC_WEAK_FUNC(sub_82F8E328);
PPC_FUNC_IMPL(__imp__sub_82F8E328) {
	PPC_FUNC_PROLOGUE();
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// lwz r9,4684(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4684);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r9,5604
	ctx.r11.s64 = ctx.r9.s64 + 5604;
loc_82F8E340:
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,-20
	ctx.r8.s64 = -20;
	// lvx128 v0,r11,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r9.u32);
	// lwz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// bdnz 0x82f8e340
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8E340;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E370"))) PPC_WEAK_FUNC(sub_82F8E370);
PPC_FUNC_IMPL(__imp__sub_82F8E370) {
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
	// bl 0x82a0aca0
	ctx.lr = 0x82F8E380;
	sub_82A0ACA0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E398"))) PPC_WEAK_FUNC(sub_82F8E398);
PPC_FUNC_IMPL(__imp__sub_82F8E398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// stw r3,11728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11728, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E3A8"))) PPC_WEAK_FUNC(sub_82F8E3A8);
PPC_FUNC_IMPL(__imp__sub_82F8E3A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r3,11724(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11724);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E3B8"))) PPC_WEAK_FUNC(sub_82F8E3B8);
PPC_FUNC_IMPL(__imp__sub_82F8E3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,6
	ctx.r7.s64 = 6;
	// lis r6,16384
	ctx.r6.s64 = 1073741824;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r11,11472
	ctx.r10.s64 = ctx.r11.s64 + 11472;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lfs f13,11660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11660);
	ctx.f13.f64 = double(temp.f32);
	// stw r7,11444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11444, ctx.r7.u32);
	// stfs f0,11456(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11456, temp.u32);
	// stw r6,11472(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11472, ctx.r6.u32);
	// stfs f13,11464(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11464, temp.u32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f13,-29132(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -29132);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,17892(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17892);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,11556(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
loc_82F8E40C:
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// stfs f12,24(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + 24, temp.u32);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmsubs f11,f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f11,16(r10)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + 16, temp.u32);
	// stwu r8,32(r10)
	ea = 32 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f8e40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8E40C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E444"))) PPC_WEAK_FUNC(sub_82F8E444);
PPC_FUNC_IMPL(__imp__sub_82F8E444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E448"))) PPC_WEAK_FUNC(sub_82F8E448);
PPC_FUNC_IMPL(__imp__sub_82F8E448) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,2
	ctx.r11.s64 = 2;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// subfc r11,r11,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 & ctx.r4.u64;
	// lwz r11,4684(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4684);
	// addi r10,r10,730
	ctx.r10.s64 = ctx.r10.s64 + 730;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E490"))) PPC_WEAK_FUNC(sub_82F8E490);
PPC_FUNC_IMPL(__imp__sub_82F8E490) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r11,11676(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82f988e8
	sub_82F988E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E4B0"))) PPC_WEAK_FUNC(sub_82F8E4B0);
PPC_FUNC_IMPL(__imp__sub_82F8E4B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E4B4"))) PPC_WEAK_FUNC(sub_82F8E4B4);
PPC_FUNC_IMPL(__imp__sub_82F8E4B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E4B8"))) PPC_WEAK_FUNC(sub_82F8E4B8);
PPC_FUNC_IMPL(__imp__sub_82F8E4B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,4684(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// addi r11,r10,11692
	ctx.r11.s64 = ctx.r10.s64 + 11692;
loc_82F8E4C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r3
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f8e4e8
	if (ctx.cr6.eq) goto loc_82F8E4E8;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x82f8e4c8
	if (ctx.cr6.lt) goto loc_82F8E4C8;
	// blr 
	return;
loc_82F8E4E8:
	// lwz r3,11676(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11676);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82f988e8
	sub_82F988E8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E4F8"))) PPC_WEAK_FUNC(sub_82F8E4F8);
PPC_FUNC_IMPL(__imp__sub_82F8E4F8) {
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
	// beq cr6,0x82f8e538
	if (ctx.cr6.eq) goto loc_82F8E538;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4684(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4684);
	// addi r10,r9,11692
	ctx.r10.s64 = ctx.r9.s64 + 11692;
loc_82F8E51C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f8e54c
	if (ctx.cr6.eq) goto loc_82F8E54C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82f8e51c
	if (ctx.cr6.lt) goto loc_82F8E51C;
loc_82F8E538:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8E53C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82F8E54C:
	// addi r11,r11,730
	ctx.r11.s64 = ctx.r11.s64 + 730;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// li r5,16
	ctx.r5.s64 = 16;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x8254a968
	ctx.lr = 0x82F8E564;
	sub_8254A968(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f8e53c
	goto loc_82F8E53C;
}

__attribute__((alias("__imp__sub_82F8E56C"))) PPC_WEAK_FUNC(sub_82F8E56C);
PPC_FUNC_IMPL(__imp__sub_82F8E56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E570"))) PPC_WEAK_FUNC(sub_82F8E570);
PPC_FUNC_IMPL(__imp__sub_82F8E570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r11,11732(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11732);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x82a77600
	sub_82A77600(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E590"))) PPC_WEAK_FUNC(sub_82F8E590);
PPC_FUNC_IMPL(__imp__sub_82F8E590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E594"))) PPC_WEAK_FUNC(sub_82F8E594);
PPC_FUNC_IMPL(__imp__sub_82F8E594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E598"))) PPC_WEAK_FUNC(sub_82F8E598);
PPC_FUNC_IMPL(__imp__sub_82F8E598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// stw r3,11736(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11736, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E5A8"))) PPC_WEAK_FUNC(sub_82F8E5A8);
PPC_FUNC_IMPL(__imp__sub_82F8E5A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r10,11736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f8e5d4
	if (ctx.cr6.eq) goto loc_82F8E5D4;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lfs f13,11768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11768);
	ctx.f13.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,32276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82F8E5D4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E5DC"))) PPC_WEAK_FUNC(sub_82F8E5DC);
PPC_FUNC_IMPL(__imp__sub_82F8E5DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E5E0"))) PPC_WEAK_FUNC(sub_82F8E5E0);
PPC_FUNC_IMPL(__imp__sub_82F8E5E0) {
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
	// bl 0x82a143e8
	ctx.lr = 0x82F8E5F4;
	sub_82A143E8(ctx, base);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8E604;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// stw r10,11764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11764, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82F8E618;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82F8E62C"))) PPC_WEAK_FUNC(sub_82F8E62C);
PPC_FUNC_IMPL(__imp__sub_82F8E62C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E630"))) PPC_WEAK_FUNC(sub_82F8E630);
PPC_FUNC_IMPL(__imp__sub_82F8E630) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lwz r11,11064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// beq 0x82f8e698
	if (ctx.cr0.eq) goto loc_82F8E698;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// addi r8,r10,4660
	ctx.r8.s64 = ctx.r10.s64 + 4660;
	// addi r11,r9,4688
	ctx.r11.s64 = ctx.r9.s64 + 4688;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 + 52;
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
loc_82F8E66C:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82f8e690
	if (ctx.cr6.eq) goto loc_82F8E690;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// cmplwi cr6,r10,2688
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2688, ctx.xer);
	// blt cr6,0x82f8e66c
	if (ctx.cr6.lt) goto loc_82F8E66C;
	// b 0x82f8e69c
	goto loc_82F8E69C;
loc_82F8E690:
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// b 0x82f8e69c
	goto loc_82F8E69C;
loc_82F8E698:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
loc_82F8E69C:
	// b 0x82f91998
	sub_82F91998(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E6A0"))) PPC_WEAK_FUNC(sub_82F8E6A0);
PPC_FUNC_IMPL(__imp__sub_82F8E6A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8E6A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,11036
	ctx.r3.s64 = ctx.r3.s64 + 11036;
	// stw r30,11024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11024, ctx.r30.u32);
	// stw r30,11028(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11028, ctx.r30.u32);
	// stw r30,11032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11032, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82F8E6D4;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// stw r30,11068(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11068, ctx.r30.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r28,r31,11112
	ctx.r28.s64 = ctx.r31.s64 + 11112;
	// stw r10,11104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11104, ctx.r10.u32);
	// li r29,5
	ctx.r29.s64 = 5;
	// lfs f0,-9876(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9876);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,11072(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11072, temp.u32);
loc_82F8E6F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f8db80
	ctx.lr = 0x82F8E6FC;
	sub_82F8DB80(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
	// bge 0x82f8e6f4
	if (!ctx.cr0.lt) goto loc_82F8E6F4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r30,11428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11428, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,11648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11648, ctx.r30.u32);
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r30,11672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11672, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,11676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11676, ctx.r30.u32);
	// addi r3,r31,11772
	ctx.r3.s64 = ctx.r31.s64 + 11772;
	// stw r30,11712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11712, ctx.r30.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,11716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11716, ctx.r30.u32);
	// stfs f0,11652(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11652, temp.u32);
	// stw r30,11720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11720, ctx.r30.u32);
	// stfs f0,11656(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11656, temp.u32);
	// stw r11,11724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11724, ctx.r11.u32);
	// stfs f0,11660(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11660, temp.u32);
	// stw r11,11728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11728, ctx.r11.u32);
	// stfs f0,11664(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11664, temp.u32);
	// stw r30,11732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11732, ctx.r30.u32);
	// stfs f0,11668(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11668, temp.u32);
	// stw r11,11736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11736, ctx.r11.u32);
	// stfs f0,11768(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11768, temp.u32);
	// stw r30,11764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11764, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82F8E76C;
	sub_82FA7CF0(ctx, base);
	// li r4,2736
	ctx.r4.s64 = 2736;
	// addi r3,r31,8288
	ctx.r3.s64 = ctx.r31.s64 + 8288;
	// bl 0x822d2820
	ctx.lr = 0x82F8E778;
	sub_822D2820(ctx, base);
	// li r4,2736
	ctx.r4.s64 = 2736;
	// addi r3,r31,5552
	ctx.r3.s64 = ctx.r31.s64 + 5552;
	// bl 0x822d2820
	ctx.lr = 0x82F8E784;
	sub_822D2820(ctx, base);
	// li r4,2736
	ctx.r4.s64 = 2736;
	// addi r3,r31,2816
	ctx.r3.s64 = ctx.r31.s64 + 2816;
	// bl 0x822d2820
	ctx.lr = 0x82F8E790;
	sub_822D2820(ctx, base);
	// li r4,2736
	ctx.r4.s64 = 2736;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// bl 0x822d2820
	ctx.lr = 0x82F8E79C;
	sub_822D2820(ctx, base);
	// li r4,60
	ctx.r4.s64 = 60;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x822d2820
	ctx.lr = 0x82F8E7A8;
	sub_822D2820(ctx, base);
	// li r4,28
	ctx.r4.s64 = 28;
	// addi r3,r31,11400
	ctx.r3.s64 = ctx.r31.s64 + 11400;
	// bl 0x822d2820
	ctx.lr = 0x82F8E7B4;
	sub_822D2820(ctx, base);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r31,11440
	ctx.r3.s64 = ctx.r31.s64 + 11440;
	// bl 0x822d2820
	ctx.lr = 0x82F8E7C0;
	sub_822D2820(ctx, base);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r31,11680
	ctx.r3.s64 = ctx.r31.s64 + 11680;
	// bl 0x822d2820
	ctx.lr = 0x82F8E7CC;
	sub_822D2820(ctx, base);
	// li r4,24
	ctx.r4.s64 = 24;
	// addi r3,r31,11740
	ctx.r3.s64 = ctx.r31.s64 + 11740;
	// bl 0x822d2820
	ctx.lr = 0x82F8E7D8;
	sub_822D2820(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,11064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11064, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E7EC"))) PPC_WEAK_FUNC(sub_82F8E7EC);
PPC_FUNC_IMPL(__imp__sub_82F8E7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E7F0"))) PPC_WEAK_FUNC(sub_82F8E7F0);
PPC_FUNC_IMPL(__imp__sub_82F8E7F0) {
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
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r11,11024(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8e854
	if (!ctx.cr6.eq) goto loc_82F8E854;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-32007
	ctx.r10.s64 = -2097610752;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,-8336
	ctx.r5.s64 = ctx.r10.s64 + -8336;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77830
	ctx.lr = 0x82F8E838;
	sub_82A77830(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r3,11024(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11024, ctx.r3.u32);
	// bl 0x82a77a10
	ctx.lr = 0x82F8E848;
	sub_82A77A10(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r3,11024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11024);
	// bl 0x82a777b8
	ctx.lr = 0x82F8E854;
	sub_82A777B8(ctx, base);
loc_82F8E854:
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

__attribute__((alias("__imp__sub_82F8E868"))) PPC_WEAK_FUNC(sub_82F8E868);
PPC_FUNC_IMPL(__imp__sub_82F8E868) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r3,r11,4688
	ctx.r3.s64 = ctx.r11.s64 + 4688;
	// bl 0x8254a968
	ctx.lr = 0x82F8E890;
	sub_8254A968(ctx, base);
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// lwz r11,11064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8e8a8
	if (ctx.cr0.eq) goto loc_82F8E8A8;
	// bl 0x82f8dcc0
	ctx.lr = 0x82F8E8A8;
	sub_82F8DCC0(ctx, base);
loc_82F8E8A8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8E8AC:
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r11,11112
	ctx.r3.s64 = ctx.r11.s64 + 11112;
	// bl 0x82f8e630
	ctx.lr = 0x82F8E8BC;
	sub_82F8E630(ctx, base);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// cmpwi cr6,r31,288
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 288, ctx.xer);
	// blt cr6,0x82f8e8ac
	if (ctx.cr6.lt) goto loc_82F8E8AC;
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

__attribute__((alias("__imp__sub_82F8E8E0"))) PPC_WEAK_FUNC(sub_82F8E8E0);
PPC_FUNC_IMPL(__imp__sub_82F8E8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8E8E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r10,r11,2816
	ctx.r10.s64 = ctx.r11.s64 + 2816;
	// addi r29,r10,48
	ctx.r29.s64 = ctx.r10.s64 + 48;
loc_82F8E900:
	// lwz r10,11712(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11712);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82f8e93c
	if (!ctx.cr6.eq) goto loc_82F8E93C;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82f8e92c
	if (!ctx.cr6.eq) goto loc_82F8E92C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,11716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11716);
	// stw r10,11712(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11712, ctx.r10.u32);
	// bl 0x82f98b58
	ctx.lr = 0x82F8E928;
	sub_82F98B58(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
loc_82F8E92C:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// blt cr6,0x82f8e900
	if (ctx.cr6.lt) goto loc_82F8E900;
loc_82F8E93C:
	// lwz r3,11716(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11716);
	// bl 0x82f98b20
	ctx.lr = 0x82F8E944;
	sub_82F98B20(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8E94C"))) PPC_WEAK_FUNC(sub_82F8E94C);
PPC_FUNC_IMPL(__imp__sub_82F8E94C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8E950"))) PPC_WEAK_FUNC(sub_82F8E950);
PPC_FUNC_IMPL(__imp__sub_82F8E950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,2832
	ctx.r10.s64 = 2832;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lfs f0,5184(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-4(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E988"))) PPC_WEAK_FUNC(sub_82F8E988);
PPC_FUNC_IMPL(__imp__sub_82F8E988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,2832
	ctx.r10.s64 = 2832;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lwz r11,4684(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4684);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,-4(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -4);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8E9A8"))) PPC_WEAK_FUNC(sub_82F8E9A8);
PPC_FUNC_IMPL(__imp__sub_82F8E9A8) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f8e9c8
	if (!ctx.cr6.eq) goto loc_82F8E9C8;
loc_82F8E9C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8ea78
	goto loc_82F8EA78;
loc_82F8E9C8:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f8e9f0
	if (!ctx.cr6.eq) goto loc_82F8E9F0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8e9c0
	if (ctx.cr6.eq) goto loc_82F8E9C0;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lfs f13,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32280(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32280);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82f8e9c0
	if (ctx.cr6.gt) goto loc_82F8E9C0;
loc_82F8E9F0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f8ea74
	if (!ctx.cr6.eq) goto loc_82F8EA74;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// bne cr6,0x82f8ea8c
	if (!ctx.cr6.eq) goto loc_82F8EA8C;
	// lwz r11,24(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f8ea8c
	if (ctx.cr6.eq) goto loc_82F8EA8C;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// lwz r3,8(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r11,-7624
	ctx.r6.s64 = ctx.r11.s64 + -7624;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a13ee8
	ctx.lr = 0x82F8EA2C;
	sub_82A13EE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f8ea74
	if (ctx.cr0.eq) goto loc_82F8EA74;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 | 10;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f8ea74
	if (ctx.cr6.eq) goto loc_82F8EA74;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8EA54;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r10,11764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f8ea6c
	if (ctx.cr6.eq) goto loc_82F8EA6C;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,11764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11764, ctx.r10.u32);
loc_82F8EA6C:
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791b4
	ctx.lr = 0x82F8EA74;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82F8EA74:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F8EA78:
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
loc_82F8EA8C:
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8EA9C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r10,11764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f8eab4
	if (ctx.cr6.eq) goto loc_82F8EAB4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,11764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11764, ctx.r10.u32);
loc_82F8EAB4:
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791b4
	ctx.lr = 0x82F8EABC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82f8e9c0
	goto loc_82F8E9C0;
}

__attribute__((alias("__imp__sub_82F8EAC0"))) PPC_WEAK_FUNC(sub_82F8EAC0);
PPC_FUNC_IMPL(__imp__sub_82F8EAC0) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r4,28
	ctx.r4.s64 = 28;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// addi r3,r11,11400
	ctx.r3.s64 = ctx.r11.s64 + 11400;
	// stfs f1,11652(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11652, temp.u32);
	// stw r5,11648(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11648, ctx.r5.u32);
	// stfs f2,11660(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11660, temp.u32);
	// stfs f3,11656(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11656, temp.u32);
	// bl 0x822d2820
	ctx.lr = 0x82F8EB14;
	sub_822D2820(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// li r4,208
	ctx.r4.s64 = 208;
	// addi r3,r11,11440
	ctx.r3.s64 = ctx.r11.s64 + 11440;
	// bl 0x822d2820
	ctx.lr = 0x82F8EB24;
	sub_822D2820(ctx, base);
	// bl 0x82f8e3b8
	ctx.lr = 0x82F8EB28;
	sub_82F8E3B8(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// ori r3,r31,32
	ctx.r3.u64 = ctx.r31.u64 | 32;
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// addi r8,r11,11400
	ctx.r8.s64 = ctx.r11.s64 + 11400;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// addi r7,r11,11440
	ctx.r7.s64 = ctx.r11.s64 + 11440;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829ffc58
	ctx.lr = 0x82F8EB48;
	sub_829FFC58(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r10,11428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11428, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82F8EB7C"))) PPC_WEAK_FUNC(sub_82F8EB7C);
PPC_FUNC_IMPL(__imp__sub_82F8EB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8EB80"))) PPC_WEAK_FUNC(sub_82F8EB80);
PPC_FUNC_IMPL(__imp__sub_82F8EB80) {
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
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f8ebc4
	if (!ctx.cr6.eq) goto loc_82F8EBC4;
	// li r3,11808
	ctx.r3.s64 = 11808;
	// bl 0x82691500
	ctx.lr = 0x82F8EBA8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8ebbc
	if (ctx.cr0.eq) goto loc_82F8EBBC;
	// bl 0x82f8e6a0
	ctx.lr = 0x82F8EBB4;
	sub_82F8E6A0(ctx, base);
	// stw r3,4684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4684, ctx.r3.u32);
	// b 0x82f8ebc4
	goto loc_82F8EBC4;
loc_82F8EBBC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4684, ctx.r11.u32);
loc_82F8EBC4:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r11,-18488
	ctx.r10.s64 = ctx.r11.s64 + -18488;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F8EBDC:
	// lwzu r9,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// bdnz 0x82f8ebdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8EBDC;
	// li r4,3
	ctx.r4.s64 = 3;
	// ori r3,r11,2056
	ctx.r3.u64 = ctx.r11.u64 | 2056;
	// bl 0x82a089b0
	ctx.lr = 0x82F8EBF4;
	sub_82A089B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82f8ec04
	if (!ctx.cr0.lt) goto loc_82F8EC04;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8ecd0
	goto loc_82F8ECD0;
loc_82F8EC04:
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r3,r11,11036
	ctx.r3.s64 = ctx.r11.s64 + 11036;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x831791c4
	ctx.lr = 0x82F8EC18;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// bl 0x82f8e7f0
	ctx.lr = 0x82F8EC1C;
	sub_82F8E7F0(ctx, base);
	// bl 0x82f8de38
	ctx.lr = 0x82F8EC20;
	sub_82F8DE38(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// li r5,20
	ctx.r5.s64 = 20;
	// addi r4,r10,-18448
	ctx.r4.s64 = ctx.r10.s64 + -18448;
	// addi r3,r11,11076
	ctx.r3.s64 = ctx.r11.s64 + 11076;
	// bl 0x8254a968
	ctx.lr = 0x82F8EC38;
	sub_8254A968(ctx, base);
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82691500
	ctx.lr = 0x82F8EC40;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8ec5c
	if (ctx.cr0.eq) goto loc_82F8EC5C;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82f986a0
	ctx.lr = 0x82F8EC58;
	sub_82F986A0(ctx, base);
	// b 0x82f8ec60
	goto loc_82F8EC60;
loc_82F8EC5C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8EC60:
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// stw r3,11676(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11676, ctx.r3.u32);
	// bl 0x82f989c0
	ctx.lr = 0x82F8EC6C;
	sub_82F989C0(ctx, base);
	// li r3,460
	ctx.r3.s64 = 460;
	// bl 0x82691500
	ctx.lr = 0x82F8EC74;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8ec84
	if (ctx.cr0.eq) goto loc_82F8EC84;
	// bl 0x82f98aa8
	ctx.lr = 0x82F8EC80;
	sub_82F98AA8(ctx, base);
	// b 0x82f8ec88
	goto loc_82F8EC88;
loc_82F8EC84:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F8EC88:
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,11716(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11716, ctx.r3.u32);
	// beq cr6,0x82f8ec9c
	if (ctx.cr6.eq) goto loc_82F8EC9C;
	// bl 0x82f98cd0
	ctx.lr = 0x82F8EC9C;
	sub_82F98CD0(ctx, base);
loc_82F8EC9C:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r11,32324
	ctx.r6.s64 = ctx.r11.s64 + 32324;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x82F8ECB4;
	sub_82A77608(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// stw r3,11732(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11732, ctx.r3.u32);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791c4
	ctx.lr = 0x82F8ECC4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77580
	ctx.lr = 0x82F8ECCC;
	sub_82A77580(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F8ECD0:
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

__attribute__((alias("__imp__sub_82F8ECE4"))) PPC_WEAK_FUNC(sub_82F8ECE4);
PPC_FUNC_IMPL(__imp__sub_82F8ECE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8ECE8"))) PPC_WEAK_FUNC(sub_82F8ECE8);
PPC_FUNC_IMPL(__imp__sub_82F8ECE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F8ECF0;
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
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// lwz r10,8296(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8296);
	// lwz r9,5560(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5560);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f8ef64
	if (ctx.cr6.eq) goto loc_82F8EF64;
	// addi r3,r11,11036
	ctx.r3.s64 = ctx.r11.s64 + 11036;
	// bl 0x831791a4
	ctx.lr = 0x82F8ED20;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r4,r11,8288
	ctx.r4.s64 = ctx.r11.s64 + 8288;
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// bl 0x8254a968
	ctx.lr = 0x82F8ED34;
	sub_8254A968(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// addi r3,r11,11036
	ctx.r3.s64 = ctx.r11.s64 + 11036;
	// bl 0x831791b4
	ctx.lr = 0x82F8ED40;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// bl 0x8254a968
	ctx.lr = 0x82F8ED54;
	sub_8254A968(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// lwz r10,11064(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// rlwinm. r10,r10,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f8ed74
	if (ctx.cr0.eq) goto loc_82F8ED74;
	// addi r4,r11,11076
	ctx.r4.s64 = ctx.r11.s64 + 11076;
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// bl 0x82a0ae38
	ctx.lr = 0x82F8ED70;
	sub_82A0AE38(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
loc_82F8ED74:
	// lwz r10,11064(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11064);
	// rlwinm. r10,r10,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f8edfc
	if (ctx.cr0.eq) goto loc_82F8EDFC;
	// li r29,-1
	ctx.r29.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r11,5600
	ctx.r9.s64 = ctx.r11.s64 + 5600;
loc_82F8ED8C:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// bne cr6,0x82f8edbc
	if (!ctx.cr6.eq) goto loc_82F8EDBC;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// bne cr6,0x82f8eda4
	if (!ctx.cr6.eq) goto loc_82F8EDA4;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F8EDA4:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,448
	ctx.r9.s64 = ctx.r9.s64 + 448;
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// blt cr6,0x82f8ed8c
	if (ctx.cr6.lt) goto loc_82F8ED8C;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82f8edfc
	if (ctx.cr6.eq) goto loc_82F8EDFC;
loc_82F8EDBC:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8EDC4:
	// cmpw cr6,r28,r29
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82f8edec
	if (ctx.cr6.eq) goto loc_82F8EDEC;
	// mulli r10,r29,448
	ctx.r10.s64 = ctx.r29.s64 * 448;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// li r5,448
	ctx.r5.s64 = 448;
	// addi r4,r10,5600
	ctx.r4.s64 = ctx.r10.s64 + 5600;
	// addi r3,r11,5600
	ctx.r3.s64 = ctx.r11.s64 + 5600;
	// bl 0x8254a968
	ctx.lr = 0x82F8EDE8;
	sub_8254A968(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
loc_82F8EDEC:
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmpwi cr6,r31,2688
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2688, ctx.xer);
	// blt cr6,0x82f8edc4
	if (ctx.cr6.lt) goto loc_82F8EDC4;
loc_82F8EDFC:
	// lwz r10,11736(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11736);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f8ef0c
	if (ctx.cr6.eq) goto loc_82F8EF0C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,11740
	ctx.r31.s64 = 11740;
	// lis r28,-32234
	ctx.r28.s64 = -2112487424;
	// lfs f31,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82F8EE1C:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r9,5600(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5600);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82f8eec4
	if (!ctx.cr6.eq) goto loc_82F8EEC4;
	// lwz r9,5608(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5608);
	// cmpwi cr6,r9,-1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, -1, ctx.xer);
	// bne cr6,0x82f8eea8
	if (!ctx.cr6.eq) goto loc_82F8EEA8;
	// lwz r9,11736(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11736);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f8ee54
	if (ctx.cr6.eq) goto loc_82F8EE54;
	// lfs f0,11768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11768);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32276(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 32276);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82f8eea8
	if (ctx.cr6.lt) goto loc_82F8EEA8;
loc_82F8EE54:
	// stfsx f31,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
	// add r6,r31,r11
	ctx.r6.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r11,-32007
	ctx.r11.s64 = -2097610752;
	// lwz r3,5604(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5604);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r5,r11,-5720
	ctx.r5.s64 = ctx.r11.s64 + -5720;
	// bl 0x82a140a8
	ctx.lr = 0x82F8EE70;
	sub_82A140A8(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 | 10;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// bne cr6,0x82f8eea8
	if (!ctx.cr6.eq) goto loc_82F8EEA8;
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8EE8C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// lwz r10,11764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11764);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,11764(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11764, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82F8EEA4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
loc_82F8EEA8:
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lwz r10,5608(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5608);
	// cmpwi cr6,r10,-4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -4, ctx.xer);
	// bne cr6,0x82f8eec4
	if (!ctx.cr6.eq) goto loc_82F8EEC4;
	// lfsx f0,r31,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 + ctx.f0.f64));
	// stfsx f0,r31,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, temp.u32);
loc_82F8EEC4:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// cmpwi cr6,r31,11764
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 11764, ctx.xer);
	// blt cr6,0x82f8ee1c
	if (ctx.cr6.lt) goto loc_82F8EE1C;
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791a4
	ctx.lr = 0x82F8EEDC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// lwz r10,11764(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11764);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f8eefc
	if (!ctx.cr6.eq) goto loc_82F8EEFC;
	// lfs f0,11768(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11768);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f30.f64));
	// stfs f0,11768(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11768, temp.u32);
	// b 0x82f8ef00
	goto loc_82F8EF00;
loc_82F8EEFC:
	// stfs f31,11768(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11768, temp.u32);
loc_82F8EF00:
	// addi r3,r11,11772
	ctx.r3.s64 = ctx.r11.s64 + 11772;
	// bl 0x831791b4
	ctx.lr = 0x82F8EF08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
loc_82F8EF0C:
	// addi r3,r11,5552
	ctx.r3.s64 = ctx.r11.s64 + 5552;
	// bl 0x82f8e868
	ctx.lr = 0x82F8EF14;
	sub_82F8E868(ctx, base);
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r4,r11,5552
	ctx.r4.s64 = ctx.r11.s64 + 5552;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
	// bl 0x8254a968
	ctx.lr = 0x82F8EF28;
	sub_8254A968(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F8EF30:
	// lwz r11,4684(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4684);
	// add r10,r29,r11
	ctx.r10.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r3,r10,11112
	ctx.r3.s64 = ctx.r10.s64 + 11112;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
	// lwz r11,11112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11112);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8EF54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// cmpwi cr6,r31,2688
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2688, ctx.xer);
	// blt cr6,0x82f8ef30
	if (ctx.cr6.lt) goto loc_82F8EF30;
loc_82F8EF64:
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

__attribute__((alias("__imp__sub_82F8EF74"))) PPC_WEAK_FUNC(sub_82F8EF74);
PPC_FUNC_IMPL(__imp__sub_82F8EF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8EF78"))) PPC_WEAK_FUNC(sub_82F8EF78);
PPC_FUNC_IMPL(__imp__sub_82F8EF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f3,-23752(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23752);
	ctx.f3.f64 = double(temp.f32);
	// b 0x82f8eac0
	sub_82F8EAC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8EF84"))) PPC_WEAK_FUNC(sub_82F8EF84);
PPC_FUNC_IMPL(__imp__sub_82F8EF84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8EF88"))) PPC_WEAK_FUNC(sub_82F8EF88);
PPC_FUNC_IMPL(__imp__sub_82F8EF88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8EF90;
	__savegprlr_27(ctx, base);
	// stfd f29,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f29.u64);
	// stfd f30,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f30.u64);
	// stfd f31,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f8f1c8
	if (ctx.cr6.eq) goto loc_82F8F1C8;
	// bl 0x82f8deb8
	ctx.lr = 0x82F8EFBC;
	sub_82F8DEB8(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82f8ece8
	ctx.lr = 0x82F8EFC4;
	sub_82F8ECE8(ctx, base);
	// bl 0x82f8e8e0
	ctx.lr = 0x82F8EFC8;
	sub_82F8E8E0(ctx, base);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82f98618
	ctx.lr = 0x82F8EFD0;
	sub_82F98618(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r11,11680
	ctx.r3.s64 = ctx.r11.s64 + 11680;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x822d2820
	ctx.lr = 0x82F8EFE8;
	sub_822D2820(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r30,11680
	ctx.r30.s64 = 11680;
	// lfs f31,-23580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f31.f64 = double(temp.f32);
loc_82F8EFFC:
	// cmplwi cr6,r30,11712
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 11712, ctx.xer);
	// bge cr6,0x82f8f04c
	if (!ctx.cr6.lt) goto loc_82F8F04C;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r4,r10,5600
	ctx.r4.s64 = ctx.r10.s64 + 5600;
	// lwz r10,5600(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5600);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82f8f040
	if (!ctx.cr6.eq) goto loc_82F8F040;
	// li r10,5584
	ctx.r10.s64 = 5584;
	// lwz r3,11676(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11676);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// fmuls f1,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lvx128 v1,r11,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f98708
	ctx.lr = 0x82F8F034;
	sub_82F98708(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_82F8F040:
	// addi r28,r28,448
	ctx.r28.s64 = ctx.r28.s64 + 448;
	// cmplwi cr6,r28,2688
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2688, ctx.xer);
	// blt cr6,0x82f8effc
	if (ctx.cr6.lt) goto loc_82F8EFFC;
loc_82F8F04C:
	// lwz r10,11428(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11428);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82f8f0d0
	if (ctx.cr6.eq) goto loc_82F8F0D0;
	// lwz r10,11400(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11400);
	// addi r3,r11,11400
	ctx.r3.s64 = ctx.r11.s64 + 11400;
	// cmplwi cr6,r10,997
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 997, ctx.xer);
	// beq cr6,0x82f8f0d0
	if (ctx.cr6.eq) goto loc_82F8F0D0;
	// li r4,28
	ctx.r4.s64 = 28;
	// lwz r30,11648(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11648);
	// bl 0x822d2820
	ctx.lr = 0x82F8F074;
	sub_822D2820(ctx, base);
	// lwz r5,4684(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// lwz r11,11428(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11428);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f8f0b4
	if (!ctx.cr6.eq) goto loc_82F8F0B4;
	// bl 0x82f8e3b8
	ctx.lr = 0x82F8F088;
	sub_82F8E3B8(ctx, base);
	// addi r8,r5,11400
	ctx.r8.s64 = ctx.r5.s64 + 11400;
	// addi r7,r5,11440
	ctx.r7.s64 = ctx.r5.s64 + 11440;
	// ori r3,r30,8
	ctx.r3.u64 = ctx.r30.u64 | 8;
	// lfs f3,11660(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11660);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,11656(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11656);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,11652(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11652);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x829ffc58
	ctx.lr = 0x82F8F0A4;
	sub_829FFC58(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,11428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11428, ctx.r10.u32);
	// b 0x82f8f0d0
	goto loc_82F8F0D0;
loc_82F8F0B4:
	// lwz r11,11720(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11720);
	// stw r27,11428(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11428, ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f8f0d0
	if (!ctx.cr6.eq) goto loc_82F8F0D0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,11712(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11712, ctx.r11.u32);
	// stw r11,11720(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11720, ctx.r11.u32);
loc_82F8F0D0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x829ff2b8
	ctx.lr = 0x82F8F0DC;
	sub_829FF2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f8f1c8
	if (ctx.cr0.lt) goto loc_82F8F1C8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f8f1ac
	if (!ctx.cr6.eq) goto loc_82F8F1AC;
	// li r10,2832
	ctx.r10.s64 = 2832;
	// lwz r7,11672(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11672);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f30,5184(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82f8f190
	if (ctx.cr6.eq) goto loc_82F8F190;
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// bne cr6,0x82f8f13c
	if (!ctx.cr6.eq) goto loc_82F8F13C;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lfs f13,11664(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11664);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32276(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32276);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82f8f15c
	if (ctx.cr6.gt) goto loc_82F8F15C;
	// b 0x82f8f190
	goto loc_82F8F190;
loc_82F8F13C:
	// lfs f0,11668(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11668);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f1,f0,f31
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// bl 0x82f95d78
	ctx.lr = 0x82F8F148;
	sub_82F95D78(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,11508(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82f8f18c
	if (!ctx.cr6.gt) goto loc_82F8F18C;
loc_82F8F15C:
	// lwz r10,11648(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11648);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r5,0
	ctx.r5.s64 = 0;
	// lfs f2,11660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11660);
	ctx.f2.f64 = double(temp.f32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lfs f3,-23752(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23752);
	ctx.f3.f64 = double(temp.f32);
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82f8eac0
	ctx.lr = 0x82F8F188;
	sub_82F8EAC0(ctx, base);
	// lwz r11,4684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4684);
loc_82F8F18C:
	// stw r27,11672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11672, ctx.r27.u32);
loc_82F8F190:
	// lfs f0,11664(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11664);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f30
	ctx.cr6.compare(ctx.f31.f64, ctx.f30.f64);
	// fadds f0,f0,f29
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f29.f64));
	// stfs f0,11664(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11664, temp.u32);
	// beq cr6,0x82f8f1c8
	if (ctx.cr6.eq) goto loc_82F8F1C8;
	// stfs f31,11668(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11668, temp.u32);
	// b 0x82f8f1c8
	goto loc_82F8F1C8;
loc_82F8F1AC:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r8,11672(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11672);
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,11672(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11672, ctx.r10.u32);
	// stfs f0,11664(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 11664, temp.u32);
loc_82F8F1C8:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
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

__attribute__((alias("__imp__sub_82F8F1DC"))) PPC_WEAK_FUNC(sub_82F8F1DC);
PPC_FUNC_IMPL(__imp__sub_82F8F1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F1E0"))) PPC_WEAK_FUNC(sub_82F8F1E0);
PPC_FUNC_IMPL(__imp__sub_82F8F1E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
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

__attribute__((alias("__imp__sub_82F8F200"))) PPC_WEAK_FUNC(sub_82F8F200);
PPC_FUNC_IMPL(__imp__sub_82F8F200) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F204"))) PPC_WEAK_FUNC(sub_82F8F204);
PPC_FUNC_IMPL(__imp__sub_82F8F204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F208"))) PPC_WEAK_FUNC(sub_82F8F208);
PPC_FUNC_IMPL(__imp__sub_82F8F208) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
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

__attribute__((alias("__imp__sub_82F8F228"))) PPC_WEAK_FUNC(sub_82F8F228);
PPC_FUNC_IMPL(__imp__sub_82F8F228) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F22C"))) PPC_WEAK_FUNC(sub_82F8F22C);
PPC_FUNC_IMPL(__imp__sub_82F8F22C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F230"))) PPC_WEAK_FUNC(sub_82F8F230);
PPC_FUNC_IMPL(__imp__sub_82F8F230) {
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
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8f288
	if (ctx.cr6.eq) goto loc_82F8F288;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82f8e1b8
	ctx.lr = 0x82F8F258;
	sub_82F8E1B8(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f8f274
	if (!ctx.cr6.eq) goto loc_82F8F274;
	// lbz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 52);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82f8f288
	if (ctx.cr0.eq) goto loc_82F8F288;
loc_82F8F274:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r10,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r10.u8);
	// bl 0x82f91998
	ctx.lr = 0x82F8F288;
	sub_82F91998(ctx, base);
loc_82F8F288:
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

__attribute__((alias("__imp__sub_82F8F29C"))) PPC_WEAK_FUNC(sub_82F8F29C);
PPC_FUNC_IMPL(__imp__sub_82F8F29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F2A0"))) PPC_WEAK_FUNC(sub_82F8F2A0);
PPC_FUNC_IMPL(__imp__sub_82F8F2A0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32436
	ctx.r11.s64 = ctx.r11.s64 + 32436;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82f91a20
	ctx.lr = 0x82F8F2CC;
	sub_82F91A20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8f2dc
	if (ctx.cr0.eq) goto loc_82F8F2DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82F8F2DC;
	sub_82691540(ctx, base);
loc_82F8F2DC:
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

__attribute__((alias("__imp__sub_82F8F2F8"))) PPC_WEAK_FUNC(sub_82F8F2F8);
PPC_FUNC_IMPL(__imp__sub_82F8F2F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,2016
	ctx.r10.s64 = 2016;
	// stvx128 v1,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F308"))) PPC_WEAK_FUNC(sub_82F8F308);
PPC_FUNC_IMPL(__imp__sub_82F8F308) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,2008(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2008);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// b 0x82f8b818
	sub_82F8B818(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8F318"))) PPC_WEAK_FUNC(sub_82F8F318);
PPC_FUNC_IMPL(__imp__sub_82F8F318) {
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
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82f8f34c
	if (!ctx.cr6.eq) goto loc_82F8F34C;
	// bl 0x82f8ce30
	ctx.lr = 0x82F8F344;
	sub_82F8CE30(ctx, base);
	// addi r11,r3,49
	ctx.r11.s64 = ctx.r3.s64 + 49;
	// b 0x82f8f354
	goto loc_82F8F354;
loc_82F8F34C:
	// bl 0x82f8ce30
	ctx.lr = 0x82F8F350;
	sub_82F8CE30(ctx, base);
	// addi r11,r3,29
	ctx.r11.s64 = ctx.r3.s64 + 29;
loc_82F8F354:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82F8F380"))) PPC_WEAK_FUNC(sub_82F8F380);
PPC_FUNC_IMPL(__imp__sub_82F8F380) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,2016
	ctx.r10.s64 = 2016;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F394"))) PPC_WEAK_FUNC(sub_82F8F394);
PPC_FUNC_IMPL(__imp__sub_82F8F394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F398"))) PPC_WEAK_FUNC(sub_82F8F398);
PPC_FUNC_IMPL(__imp__sub_82F8F398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r11,32476
	ctx.r3.s64 = ctx.r11.s64 + 32476;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F3A4"))) PPC_WEAK_FUNC(sub_82F8F3A4);
PPC_FUNC_IMPL(__imp__sub_82F8F3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F3A8"))) PPC_WEAK_FUNC(sub_82F8F3A8);
PPC_FUNC_IMPL(__imp__sub_82F8F3A8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,32448
	ctx.r11.s64 = ctx.r11.s64 + 32448;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82f8f3d4
	if (ctx.cr0.eq) goto loc_82F8F3D4;
	// bl 0x82691540
	ctx.lr = 0x82F8F3D4;
	sub_82691540(ctx, base);
loc_82F8F3D4:
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

__attribute__((alias("__imp__sub_82F8F3EC"))) PPC_WEAK_FUNC(sub_82F8F3EC);
PPC_FUNC_IMPL(__imp__sub_82F8F3EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F3F0"))) PPC_WEAK_FUNC(sub_82F8F3F0);
PPC_FUNC_IMPL(__imp__sub_82F8F3F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8F3F8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f8f428
	if (ctx.cr6.eq) goto loc_82F8F428;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f8f520
	goto loc_82F8F520;
loc_82F8F428:
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8254a968
	ctx.lr = 0x82F8F438;
	sub_8254A968(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f31,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lvx128 v0,r9,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v1,r0,r8
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f944a8
	ctx.lr = 0x82F8F46C;
	sub_82F944A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r11,r11,32400
	ctx.r11.s64 = ctx.r11.s64 + 32400;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f958d0
	ctx.lr = 0x82F8F480;
	sub_82F958D0(ctx, base);
	// lfs f2,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f2.f64 = double(temp.f32);
	// fmr f4,f31
	ctx.f4.f64 = ctx.f31.f64;
	// fmr f3,f31
	ctx.f3.f64 = ctx.f31.f64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82f94430
	ctx.lr = 0x82F8F498;
	sub_82F94430(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f95470
	ctx.lr = 0x82F8F4A4;
	sub_82F95470(ctx, base);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// subf r9,r31,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r31.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,5180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
loc_82F8F4BC:
	// lvx128 v12,r9,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vspltw v0,v12,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vspltw v13,v12,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddcfp128 v0,v10,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmaddfp128 v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v0,v12,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,0(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f13,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,0(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f13,8(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82f8f4bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F8F4BC;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F8F520:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8F534"))) PPC_WEAK_FUNC(sub_82F8F534);
PPC_FUNC_IMPL(__imp__sub_82F8F534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F538"))) PPC_WEAK_FUNC(sub_82F8F538);
PPC_FUNC_IMPL(__imp__sub_82F8F538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8F540;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8254a968
	ctx.lr = 0x82F8F564;
	sub_8254A968(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f8f64c
	if (!ctx.cr6.eq) goto loc_82F8F64C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r8,96
	ctx.r8.s64 = 96;
	// li r7,160
	ctx.r7.s64 = 160;
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v2,r31,r8
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r31,r7
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bl 0x82f943f0
	ctx.lr = 0x82F8F5A0;
	sub_82F943F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f944a8
	ctx.lr = 0x82F8F5B8;
	sub_82F944A8(ctx, base);
	// li r11,224
	ctx.r11.s64 = 224;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// li r10,288
	ctx.r10.s64 = 288;
	// lvx128 v2,r31,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r31,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8F5D0;
	sub_82F943F0(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f944a8
	ctx.lr = 0x82F8F5E8;
	sub_82F944A8(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8F5F0;
	sub_830A06D8(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8F5F4;
	sub_82F944A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r11,r11,32416
	ctx.r11.s64 = ctx.r11.s64 + 32416;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f958d0
	ctx.lr = 0x82F8F604;
	sub_82F958D0(ctx, base);
	// addi r30,r29,32
	ctx.r30.s64 = ctx.r29.s64 + 32;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// subf r29,r29,r31
	ctx.r29.s64 = ctx.r31.s64 - ctx.r29.s64;
	// li r31,20
	ctx.r31.s64 = 20;
loc_82F8F614:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r29,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82f957c8
	ctx.lr = 0x82F8F630;
	sub_82F957C8(ctx, base);
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v1,r0,r30
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// bl 0x82f956e0
	ctx.lr = 0x82F8F63C;
	sub_82F956E0(ctx, base);
	// stvx128 v1,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// bne 0x82f8f614
	if (!ctx.cr0.eq) goto loc_82F8F614;
loc_82F8F64C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8F660"))) PPC_WEAK_FUNC(sub_82F8F660);
PPC_FUNC_IMPL(__imp__sub_82F8F660) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82F8F680"))) PPC_WEAK_FUNC(sub_82F8F680);
PPC_FUNC_IMPL(__imp__sub_82F8F680) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F684"))) PPC_WEAK_FUNC(sub_82F8F684);
PPC_FUNC_IMPL(__imp__sub_82F8F684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F688"))) PPC_WEAK_FUNC(sub_82F8F688);
PPC_FUNC_IMPL(__imp__sub_82F8F688) {
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
	// cmpwi cr6,r4,6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 6, ctx.xer);
	// stw r4,2008(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2008, ctx.r4.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bge cr6,0x82f8f6dc
	if (!ctx.cr6.lt) goto loc_82F8F6DC;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82f8e2e0
	ctx.lr = 0x82F8F6B8;
	sub_82F8E2E0(ctx, base);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f8f6fc
	if (ctx.cr6.eq) goto loc_82F8F6FC;
	// cmplw cr6,r31,r3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f8f6fc
	if (ctx.cr6.eq) goto loc_82F8F6FC;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stb r11,52(r31)
	PPC_STORE_U8(ctx.r31.u32 + 52, ctx.r11.u8);
	// b 0x82f8f6fc
	goto loc_82F8F6FC;
loc_82F8F6DC:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f8f6fc
	if (ctx.cr6.eq) goto loc_82F8F6FC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stb r9,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r9.u8);
loc_82F8F6FC:
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

__attribute__((alias("__imp__sub_82F8F710"))) PPC_WEAK_FUNC(sub_82F8F710);
PPC_FUNC_IMPL(__imp__sub_82F8F710) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r4.u32);
	// stb r10,52(r11)
	PPC_STORE_U8(ctx.r11.u32 + 52, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F73C"))) PPC_WEAK_FUNC(sub_82F8F73C);
PPC_FUNC_IMPL(__imp__sub_82F8F73C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F740"))) PPC_WEAK_FUNC(sub_82F8F740);
PPC_FUNC_IMPL(__imp__sub_82F8F740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F8F748;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82f8f784
	if (!ctx.cr6.eq) goto loc_82F8F784;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// b 0x82f8f868
	goto loc_82F8F868;
loc_82F8F784:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82f95e00
	ctx.lr = 0x82F8F79C;
	sub_82F95E00(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f95e00
	ctx.lr = 0x82F8F7B0;
	sub_82F95E00(ctx, base);
	// lvx128 v2,r0,r26
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8F7BC;
	sub_82F943F0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,100(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v1,r0,r9
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// bl 0x82f944a8
	ctx.lr = 0x82F8F7DC;
	sub_82F944A8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f95e00
	ctx.lr = 0x82F8F7F8;
	sub_82F95E00(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f95e00
	ctx.lr = 0x82F8F80C;
	sub_82F95E00(ctx, base);
	// lvx128 v2,r0,r27
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r3
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// bl 0x82f943f0
	ctx.lr = 0x82F8F818;
	sub_82F943F0(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// bl 0x82f944a8
	ctx.lr = 0x82F8F830;
	sub_82F944A8(ctx, base);
	// vor128 v2,v127,v127
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// bl 0x830a06d8
	ctx.lr = 0x82F8F838;
	sub_830A06D8(ctx, base);
	// bl 0x82f944a8
	ctx.lr = 0x82F8F83C;
	sub_82F944A8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r11,r11,32384
	ctx.r11.s64 = ctx.r11.s64 + 32384;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82f958d0
	ctx.lr = 0x82F8F84C;
	sub_82F958D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f955b8
	ctx.lr = 0x82F8F854;
	sub_82F955B8(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f13,0(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
loc_82F8F868:
	// stfs f0,0(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8F880"))) PPC_WEAK_FUNC(sub_82F8F880);
PPC_FUNC_IMPL(__imp__sub_82F8F880) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82f8f8c0
	if (!ctx.cr6.eq) goto loc_82F8F8C0;
	// bl 0x82f8ce30
	ctx.lr = 0x82F8F8AC;
	sub_82F8CE30(ctx, base);
	// addi r11,r3,3
	ctx.r11.s64 = ctx.r3.s64 + 3;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// b 0x82f8f8e0
	goto loc_82F8F8E0;
loc_82F8F8C0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f8ce30
	ctx.lr = 0x82F8F8CC;
	sub_82F8CE30(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f95e00
	ctx.lr = 0x82F8F8DC;
	sub_82F95E00(ctx, base);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
loc_82F8F8E0:
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82F8F900"))) PPC_WEAK_FUNC(sub_82F8F900);
PPC_FUNC_IMPL(__imp__sub_82F8F900) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f95df8
	ctx.lr = 0x82F8F924;
	sub_82F95DF8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8ce30
	ctx.lr = 0x82F8F930;
	sub_82F8CE30(ctx, base);
	// addi r11,r3,88
	ctx.r11.s64 = ctx.r3.s64 + 88;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82F8F954"))) PPC_WEAK_FUNC(sub_82F8F954);
PPC_FUNC_IMPL(__imp__sub_82F8F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8F958"))) PPC_WEAK_FUNC(sub_82F8F958);
PPC_FUNC_IMPL(__imp__sub_82F8F958) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f95df8
	ctx.lr = 0x82F8F970;
	sub_82F95DF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
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

__attribute__((alias("__imp__sub_82F8F990"))) PPC_WEAK_FUNC(sub_82F8F990);
PPC_FUNC_IMPL(__imp__sub_82F8F990) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F8F9A0"))) PPC_WEAK_FUNC(sub_82F8F9A0);
PPC_FUNC_IMPL(__imp__sub_82F8F9A0) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f8f9e8
	if (ctx.cr6.eq) goto loc_82F8F9E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8f9e4
	if (ctx.cr6.eq) goto loc_82F8F9E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8F9E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8F9E4:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82F8F9E8:
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

__attribute__((alias("__imp__sub_82F8FA00"))) PPC_WEAK_FUNC(sub_82F8FA00);
PPC_FUNC_IMPL(__imp__sub_82F8FA00) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f96a48
	ctx.lr = 0x82F8FA20;
	sub_82F96A48(ctx, base);
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

__attribute__((alias("__imp__sub_82F8FA38"))) PPC_WEAK_FUNC(sub_82F8FA38);
PPC_FUNC_IMPL(__imp__sub_82F8FA38) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f96ab8
	ctx.lr = 0x82F8FA58;
	sub_82F96AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82F8FA70"))) PPC_WEAK_FUNC(sub_82F8FA70);
PPC_FUNC_IMPL(__imp__sub_82F8FA70) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82f96ab8
	ctx.lr = 0x82F8FA90;
	sub_82F96AB8(ctx, base);
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

__attribute__((alias("__imp__sub_82F8FAA8"))) PPC_WEAK_FUNC(sub_82F8FAA8);
PPC_FUNC_IMPL(__imp__sub_82F8FAA8) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8fae0
	if (ctx.cr6.eq) goto loc_82F8FAE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8FAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8FAE0:
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fafc
	if (ctx.cr6.eq) goto loc_82F8FAFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f985a0
	ctx.lr = 0x82F8FAF4;
	sub_82F985A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f95df0
	ctx.lr = 0x82F8FAFC;
	sub_82F95DF0(ctx, base);
loc_82F8FAFC:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fb18
	if (ctx.cr6.eq) goto loc_82F8FB18;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f985a0
	ctx.lr = 0x82F8FB10;
	sub_82F985A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f95df0
	ctx.lr = 0x82F8FB18;
	sub_82F95DF0(ctx, base);
loc_82F8FB18:
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

__attribute__((alias("__imp__sub_82F8FB30"))) PPC_WEAK_FUNC(sub_82F8FB30);
PPC_FUNC_IMPL(__imp__sub_82F8FB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8FB38;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82f8fb7c
	if (ctx.cr6.eq) goto loc_82F8FB7C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f8fb7c
	if (ctx.cr6.eq) goto loc_82F8FB7C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fb78
	if (ctx.cr6.eq) goto loc_82F8FB78;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f985a0
	ctx.lr = 0x82F8FB70;
	sub_82F985A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f95df0
	ctx.lr = 0x82F8FB78;
	sub_82F95DF0(ctx, base);
loc_82F8FB78:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
loc_82F8FB7C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8FB88"))) PPC_WEAK_FUNC(sub_82F8FB88);
PPC_FUNC_IMPL(__imp__sub_82F8FB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F8FB90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x82F8FBA4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8fbd0
	if (ctx.cr0.eq) goto loc_82F8FBD0;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,32508
	ctx.r10.s64 = ctx.r10.s64 + 32508;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x82f8fbd4
	goto loc_82F8FBD4;
loc_82F8FBD0:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F8FBD4:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8fbe4
	if (ctx.cr6.eq) goto loc_82F8FBE4;
	// bl 0x82241d18
	ctx.lr = 0x82F8FBE4;
	sub_82241D18(ctx, base);
loc_82F8FBE4:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8FBF4"))) PPC_WEAK_FUNC(sub_82F8FBF4);
PPC_FUNC_IMPL(__imp__sub_82F8FBF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8FBF8"))) PPC_WEAK_FUNC(sub_82F8FBF8);
PPC_FUNC_IMPL(__imp__sub_82F8FBF8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,32524
	ctx.r11.s64 = ctx.r11.s64 + 32524;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82f8fc40
	if (ctx.cr6.eq) goto loc_82F8FC40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8faa8
	ctx.lr = 0x82F8FC30;
	sub_82F8FAA8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82F8FC38;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82F8FC40:
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

__attribute__((alias("__imp__sub_82F8FC58"))) PPC_WEAK_FUNC(sub_82F8FC58);
PPC_FUNC_IMPL(__imp__sub_82F8FC58) {
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
	// bl 0x82f8fbf8
	ctx.lr = 0x82F8FC78;
	sub_82F8FBF8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f8fc88
	if (ctx.cr0.eq) goto loc_82F8FC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82F8FC88;
	sub_82691540(ctx, base);
loc_82F8FC88:
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

__attribute__((alias("__imp__sub_82F8FCA4"))) PPC_WEAK_FUNC(sub_82F8FCA4);
PPC_FUNC_IMPL(__imp__sub_82F8FCA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8FCA8"))) PPC_WEAK_FUNC(sub_82F8FCA8);
PPC_FUNC_IMPL(__imp__sub_82F8FCA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F8FCB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,4
	ctx.r3.s64 = 4;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// bl 0x82691500
	ctx.lr = 0x82F8FCC4;
	sub_82691500(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8fce4
	if (ctx.cr0.eq) goto loc_82F8FCE4;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,32448
	ctx.r11.s64 = ctx.r11.s64 + 32448;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82f8fce8
	goto loc_82F8FCE8;
loc_82F8FCE4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82F8FCE8:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82f8fb88
	ctx.lr = 0x82F8FCF8;
	sub_82F8FB88(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x822c2418
	ctx.lr = 0x82F8FD1C;
	sub_822C2418(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f91ff8
	ctx.lr = 0x82F8FD28;
	sub_82F91FF8(ctx, base);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8258fad0
	ctx.lr = 0x82F8FD40;
	sub_8258FAD0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f8fd50
	if (ctx.cr6.eq) goto loc_82F8FD50;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x82F8FD50;
	sub_82241D18(ctx, base);
loc_82F8FD50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8FD5C"))) PPC_WEAK_FUNC(sub_82F8FD5C);
PPC_FUNC_IMPL(__imp__sub_82F8FD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F8FD60"))) PPC_WEAK_FUNC(sub_82F8FD60);
PPC_FUNC_IMPL(__imp__sub_82F8FD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F8FD68;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r30,r28,8
	ctx.r30.s64 = ctx.r28.s64 + 8;
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r27,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r27.u32);
	// bl 0x82691500
	ctx.lr = 0x82F8FD90;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f8fdbc
	if (ctx.cr0.eq) goto loc_82F8FDBC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f91a08
	ctx.lr = 0x82F8FDA0;
	sub_82F91A08(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// addi r11,r11,32436
	ctx.r11.s64 = ctx.r11.s64 + 32436;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82f8fdc0
	goto loc_82F8FDC0;
loc_82F8FDBC:
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
loc_82F8FDC0:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f8fde0
	if (ctx.cr6.eq) goto loc_82F8FDE0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
	// bl 0x82f8f9a0
	ctx.lr = 0x82F8FDE0;
	sub_82F8F9A0(ctx, base);
loc_82F8FDE0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fe00
	if (ctx.cr6.eq) goto loc_82F8FE00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8FE00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8FE00:
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x82f8b8b0
	ctx.lr = 0x82F8FE08;
	sub_82F8B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8fe1c
	if (ctx.cr0.eq) goto loc_82F8FE1C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f984b0
	ctx.lr = 0x82F8FE18;
	sub_82F984B0(ctx, base);
	// b 0x82f8fe20
	goto loc_82F8FE20;
loc_82F8FE1C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82F8FE20:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f8fb30
	ctx.lr = 0x82F8FE30;
	sub_82F8FB30(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fe4c
	if (ctx.cr6.eq) goto loc_82F8FE4C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f985a0
	ctx.lr = 0x82F8FE44;
	sub_82F985A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f95df0
	ctx.lr = 0x82F8FE4C;
	sub_82F95DF0(ctx, base);
loc_82F8FE4C:
	// li r3,496
	ctx.r3.s64 = 496;
	// bl 0x82f8b8b0
	ctx.lr = 0x82F8FE54;
	sub_82F8B8B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f8fe68
	if (ctx.cr0.eq) goto loc_82F8FE68;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82f984b0
	ctx.lr = 0x82F8FE64;
	sub_82F984B0(ctx, base);
	// b 0x82f8fe6c
	goto loc_82F8FE6C;
loc_82F8FE68:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82F8FE6C:
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f8fb30
	ctx.lr = 0x82F8FE7C;
	sub_82F8FB30(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f8fe98
	if (ctx.cr6.eq) goto loc_82F8FE98;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f985a0
	ctx.lr = 0x82F8FE90;
	sub_82F985A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f95df0
	ctx.lr = 0x82F8FE98;
	sub_82F95DF0(ctx, base);
loc_82F8FE98:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82f96ab8
	ctx.lr = 0x82F8FEA4;
	sub_82F96AB8(ctx, base);
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x82F8FEC4;
	sub_822C2418(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82f8fca8
	ctx.lr = 0x82F8FED0;
	sub_82F8FCA8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8ff18
	if (ctx.cr6.eq) goto loc_82F8FF18;
	// addi r11,r3,8
	ctx.r11.s64 = ctx.r3.s64 + 8;
loc_82F8FEE0:
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
	// bne 0x82f8fee0
	if (!ctx.cr0.eq) goto loc_82F8FEE0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f8ff18
	if (!ctx.cr6.eq) goto loc_82F8FF18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8FF18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8FF18:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f8ff28
	if (ctx.cr6.eq) goto loc_82F8FF28;
	// bl 0x82241d18
	ctx.lr = 0x82F8FF28;
	sub_82241D18(ctx, base);
loc_82F8FF28:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f8ff74
	if (ctx.cr6.eq) goto loc_82F8FF74;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
loc_82F8FF3C:
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
	// bne 0x82f8ff3c
	if (!ctx.cr0.eq) goto loc_82F8FF3C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f8ff74
	if (!ctx.cr6.eq) goto loc_82F8FF74;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F8FF74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F8FF74:
	// li r4,448
	ctx.r4.s64 = 448;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// bl 0x822d2820
	ctx.lr = 0x82F8FF80;
	sub_822D2820(ctx, base);
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r3,r28,464
	ctx.r3.s64 = ctx.r28.s64 + 464;
	// bl 0x822d2820
	ctx.lr = 0x82F8FF8C;
	sub_822D2820(ctx, base);
	// li r4,320
	ctx.r4.s64 = 320;
	// addi r3,r28,784
	ctx.r3.s64 = ctx.r28.s64 + 784;
	// bl 0x822d2820
	ctx.lr = 0x82F8FF98;
	sub_822D2820(ctx, base);
	// li r4,448
	ctx.r4.s64 = 448;
	// addi r3,r28,1104
	ctx.r3.s64 = ctx.r28.s64 + 1104;
	// bl 0x822d2820
	ctx.lr = 0x82F8FFA4;
	sub_822D2820(ctx, base);
	// li r4,448
	ctx.r4.s64 = 448;
	// addi r3,r28,1552
	ctx.r3.s64 = ctx.r28.s64 + 1552;
	// bl 0x822d2820
	ctx.lr = 0x82F8FFB0;
	sub_822D2820(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// std r27,2000(r28)
	PPC_STORE_U64(ctx.r28.u32 + 2000, ctx.r27.u64);
	// addi r11,r11,32368
	ctx.r11.s64 = ctx.r11.s64 + 32368;
	// li r9,2016
	ctx.r9.s64 = 2016;
	// li r8,-1
	ctx.r8.s64 = -1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,2008(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2008, ctx.r8.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stfs f0,2032(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2032, temp.u32);
	// stvx128 v0,r28,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F8FFE8"))) PPC_WEAK_FUNC(sub_82F8FFE8);
PPC_FUNC_IMPL(__imp__sub_82F8FFE8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r3,2048
	ctx.r3.s64 = 2048;
	// addi r11,r11,32524
	ctx.r11.s64 = ctx.r11.s64 + 32524;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x82F90018;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f90028
	if (ctx.cr0.eq) goto loc_82F90028;
	// bl 0x82f8fd60
	ctx.lr = 0x82F90024;
	sub_82F8FD60(ctx, base);
	// b 0x82f9002c
	goto loc_82F9002C;
loc_82F90028:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F9002C:
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f8f688
	ctx.lr = 0x82F9003C;
	sub_82F8F688(ctx, base);
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

