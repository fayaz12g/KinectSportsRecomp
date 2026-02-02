#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82B0A7F4"))) PPC_WEAK_FUNC(sub_82B0A7F4);
PPC_FUNC_IMPL(__imp__sub_82B0A7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0A7F8"))) PPC_WEAK_FUNC(sub_82B0A7F8);
PPC_FUNC_IMPL(__imp__sub_82B0A7F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B0A800;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r31,224(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r11,-15892
	ctx.r4.s64 = ctx.r11.s64 + -15892;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// bl 0x82fa4320
	ctx.lr = 0x82B0A820;
	sub_82FA4320(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b0a830
	if (ctx.cr0.eq) goto loc_82B0A830;
loc_82B0A828:
	// li r3,-16
	ctx.r3.s64 = -16;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0A830:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,410
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 410, ctx.xer);
	// bgt cr6,0x82b0a828
	if (ctx.cr6.gt) goto loc_82B0A828;
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r11.u32);
	// lwz r11,32(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r11.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r11,54(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// divw r9,r8,r11
	ctx.r9.s32 = ctx.r8.s32 / ctx.r11.s32;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// beq cr6,0x82b0aa28
	if (ctx.cr6.eq) goto loc_82B0AA28;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82b0a8bc
	if (!ctx.cr6.lt) goto loc_82B0A8BC;
loc_82B0A8B4:
	// li r3,-67
	ctx.r3.s64 = -67;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0A8BC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b0a8b4
	if (ctx.cr6.lt) goto loc_82B0A8B4;
	// lwz r10,36(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82b0a8b4
	if (ctx.cr6.gt) goto loc_82B0A8B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b0a8b4
	if (ctx.cr6.lt) goto loc_82B0A8B4;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82b0a8b4
	if (ctx.cr6.lt) goto loc_82B0A8B4;
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpw cr6,r9,r6
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82b0a8b4
	if (ctx.cr6.gt) goto loc_82B0A8B4;
	// lwz r10,208(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// addi r11,r11,-10
	ctx.r11.s64 = ctx.r11.s64 + -10;
	// addi r10,r10,15
	ctx.r10.s64 = ctx.r10.s64 + 15;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// bge 0x82b0a928
	if (!ctx.cr0.lt) goto loc_82B0A928;
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
loc_82B0A928:
	// addi r11,r9,9
	ctx.r11.s64 = ctx.r9.s64 + 9;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b0a940
	if (ctx.cr6.lt) goto loc_82B0A940;
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
loc_82B0A940:
	// addi r10,r8,-10
	ctx.r10.s64 = ctx.r8.s64 + -10;
	// lhz r8,54(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw. r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// andc r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// bge 0x82b0a96c
	if (!ctx.cr0.lt) goto loc_82B0A96C;
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
loc_82B0A96C:
	// addi r8,r7,10
	ctx.r8.s64 = ctx.r7.s64 + 10;
	// lhz r7,54(r29)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// divw r11,r8,r7
	ctx.r11.s32 = ctx.r8.s32 / ctx.r7.s32;
	// andc r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// blt cr6,0x82b0a99c
	if (ctx.cr6.lt) goto loc_82B0A99C;
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
loc_82B0A99C:
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r9,r9,47
	ctx.r9.s64 = ctx.r9.s64 + 47;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r9,208(r30)
	PPC_STORE_U32(ctx.r30.u32 + 208, ctx.r9.u32);
	// lhz r8,54(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mr r7,r9
	ctx.r7.u64 = ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b0a9e8
	if (!ctx.cr6.gt) goto loc_82B0A9E8;
	// subf r11,r9,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r9.s64;
loc_82B0A9E8:
	// stw r11,212(r30)
	PPC_STORE_U32(ctx.r30.u32 + 212, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r11.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r11.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r8,54(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mullw r8,r8,r7
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82B0AA28:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0aa74
	if (ctx.cr6.eq) goto loc_82B0AA74;
	// lhz r11,48(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 48);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b0aa4c
	if (!ctx.cr6.eq) goto loc_82B0AA4C;
	// li r3,-71
	ctx.r3.s64 = -71;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0AA4C:
	// lhz r11,22(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 22);
	// rlwinm. r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0aa60
	if (ctx.cr0.eq) goto loc_82B0AA60;
	// li r3,-72
	ctx.r3.s64 = -72;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0AA60:
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82b0aa74
	if (!ctx.cr6.eq) goto loc_82B0AA74;
	// li r3,-70
	ctx.r3.s64 = -70;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0AA74:
	// lhz r11,22(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 22);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82b0aaa4
	if (!ctx.cr6.eq) goto loc_82B0AAA4;
	// lhz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 52);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b0aa98
	if (ctx.cr6.eq) goto loc_82B0AA98;
	// li r3,-66
	ctx.r3.s64 = -66;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0AA98:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// b 0x82b0aab0
	goto loc_82B0AAB0;
loc_82B0AAA4:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lhz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 52);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_82B0AAB0:
	// rlwinm r31,r11,7,0,24
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691410
	ctx.lr = 0x82B0AAC0;
	sub_82691410(ctx, base);
	// stw r3,192(r30)
	PPC_STORE_U32(ctx.r30.u32 + 192, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b0aad4
	if (!ctx.cr0.eq) goto loc_82B0AAD4;
loc_82B0AACC:
	// li r3,-65
	ctx.r3.s64 = -65;
	// b 0x82b0acb8
	goto loc_82B0ACB8;
loc_82B0AAD4:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0aafc
	if (ctx.cr6.eq) goto loc_82B0AAFC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691410
	ctx.lr = 0x82B0AAF0;
	sub_82691410(ctx, base);
	// stw r3,196(r30)
	PPC_STORE_U32(ctx.r30.u32 + 196, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
loc_82B0AAFC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x82B0AB0C;
	sub_82691410(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x82B0AB28;
	sub_82691410(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
	// lhz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 52);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b0ab78
	if (ctx.cr0.eq) goto loc_82B0AB78;
	// addi r31,r30,124
	ctx.r31.s64 = ctx.r30.s64 + 124;
loc_82B0AB48:
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82691410
	ctx.lr = 0x82B0AB58;
	sub_82691410(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
	// lhz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 52);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b0ab48
	if (ctx.cr6.lt) goto loc_82B0AB48;
loc_82B0AB78:
	// lhz r11,22(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 22);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// lhz r11,54(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 54);
	// bne cr6,0x82b0ab94
	if (!ctx.cr6.eq) goto loc_82B0AB94;
	// rotlwi r31,r11,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// b 0x82b0ab9c
	goto loc_82B0AB9C;
loc_82B0AB94:
	// lhz r10,52(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 52);
	// mullw r31,r10,r11
	ctx.r31.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
loc_82B0AB9C:
	// rlwinm r3,r11,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691410
	ctx.lr = 0x82B0ABA8;
	sub_82691410(ctx, base);
	// stw r3,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r31,6,0,25
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 6) & 0xFFFFFFC0;
	// bl 0x82691410
	ctx.lr = 0x82B0ABC0;
	sub_82691410(ctx, base);
	// stw r3,204(r30)
	PPC_STORE_U32(ctx.r30.u32 + 204, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// bl 0x82691410
	ctx.lr = 0x82B0ABE0;
	sub_82691410(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0aacc
	if (ctx.cr0.eq) goto loc_82B0AACC;
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// stw r27,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r27.u32);
	// stw r27,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r27.u32);
	// stw r27,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r27.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b0aca0
	if (ctx.cr6.eq) goto loc_82B0ACA0;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82B0AC10:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82b0ac38
	if (!ctx.cr6.eq) goto loc_82B0AC38;
	// li r10,60
	ctx.r10.s64 = 60;
loc_82B0AC1C:
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82b0ac4c
	if (!ctx.cr6.eq) goto loc_82B0AC4C;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,68
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 68, ctx.xer);
	// ble cr6,0x82b0ac1c
	if (!ctx.cr6.gt) goto loc_82B0AC1C;
	// b 0x82b0ac94
	goto loc_82B0AC94;
loc_82B0AC38:
	// addi r10,r31,13
	ctx.r10.s64 = ctx.r31.s64 + 13;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b0ac94
	if (ctx.cr6.eq) goto loc_82B0AC94;
loc_82B0AC4C:
	// lwz r11,208(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 208);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r10,212(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lhz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r30.u32 + 92);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x82B0AC74;
	sub_82691410(ctx, base);
	// addi r11,r31,21
	ctx.r11.s64 = ctx.r31.s64 + 21;
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r3.u32);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b0aacc
	if (ctx.cr6.eq) goto loc_82B0AACC;
loc_82B0AC94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// blt cr6,0x82b0ac10
	if (ctx.cr6.lt) goto loc_82B0AC10;
loc_82B0ACA0:
	// lwz r10,48(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b0acb4
	if (ctx.cr6.eq) goto loc_82B0ACB4;
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r11,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r11.u32);
loc_82B0ACB4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0ACB8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0ACC0"))) PPC_WEAK_FUNC(sub_82B0ACC0);
PPC_FUNC_IMPL(__imp__sub_82B0ACC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0ACC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0ad0c
	if (ctx.cr6.eq) goto loc_82B0AD0C;
	// li r31,100
	ctx.r31.s64 = 100;
loc_82B0ACE4:
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b0ad00
	if (ctx.cr6.eq) goto loc_82B0AD00;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82691460
	ctx.lr = 0x82B0AD00;
	sub_82691460(ctx, base);
loc_82B0AD00:
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// cmpwi cr6,r31,92
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 92, ctx.xer);
	// bge cr6,0x82b0ace4
	if (!ctx.cr6.lt) goto loc_82B0ACE4;
loc_82B0AD0C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// bl 0x82691460
	ctx.lr = 0x82B0AD18;
	sub_82691460(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,204(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 204);
	// bl 0x82691460
	ctx.lr = 0x82B0AD24;
	sub_82691460(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,200(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// bl 0x82691460
	ctx.lr = 0x82B0AD30;
	sub_82691460(ctx, base);
	// lhz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 92);
	// addic. r31,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r31.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82b0ad5c
	if (ctx.cr0.lt) goto loc_82B0AD5C;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82B0AD48:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwzu r3,-4(r29)
	ea = -4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x82691460
	ctx.lr = 0x82B0AD54;
	sub_82691460(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82b0ad48
	if (!ctx.cr0.lt) goto loc_82B0AD48;
loc_82B0AD5C:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// bl 0x82691460
	ctx.lr = 0x82B0AD68;
	sub_82691460(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// bl 0x82691460
	ctx.lr = 0x82B0AD74;
	sub_82691460(ctx, base);
	// lwz r11,224(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0ad90
	if (ctx.cr6.eq) goto loc_82B0AD90;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,196(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	// bl 0x82691460
	ctx.lr = 0x82B0AD90;
	sub_82691460(ctx, base);
loc_82B0AD90:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,192(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 192);
	// bl 0x82691460
	ctx.lr = 0x82B0AD9C;
	sub_82691460(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0ADA4"))) PPC_WEAK_FUNC(sub_82B0ADA4);
PPC_FUNC_IMPL(__imp__sub_82B0ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0ADA8"))) PPC_WEAK_FUNC(sub_82B0ADA8);
PPC_FUNC_IMPL(__imp__sub_82B0ADA8) {
	PPC_FUNC_PROLOGUE();
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r4.u32);
	// sth r6,20(r5)
	PPC_STORE_U16(ctx.r5.u32 + 20, ctx.r6.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0ADBC"))) PPC_WEAK_FUNC(sub_82B0ADBC);
PPC_FUNC_IMPL(__imp__sub_82B0ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0ADC0"))) PPC_WEAK_FUNC(sub_82B0ADC0);
PPC_FUNC_IMPL(__imp__sub_82B0ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0ADC8;
	__savegprlr_29(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0ae70
	if (!ctx.cr6.gt) goto loc_82B0AE70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r31,r6,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r11,-15792
	ctx.r8.s64 = ctx.r11.s64 + -15792;
loc_82B0ADDC:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0ae58
	if (!ctx.cr6.gt) goto loc_82B0AE58;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82B0ADF0:
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r29,80
	ctx.r29.s64 = 80;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// lvlx128 v63,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r8,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vperm128 v0,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vpkshus v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// stvebx v0,r0,r10
	ea = (ctx.r0.u32 + ctx.r10.u32) & ~0xF;
	mem::store8(ctx.v0.u8[15 - ((ctx.r0.u32 + ctx.r10.u32) & 0xF)], base[ea]);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhax r10,r10,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82b0ae34
	if (!ctx.cr6.gt) goto loc_82B0AE34;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x82b0ae48
	goto loc_82B0AE48;
loc_82B0AE34:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82b0ae44
	if (!ctx.cr6.lt) goto loc_82B0AE44;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b0ae48
	goto loc_82B0AE48;
loc_82B0AE44:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82B0AE48:
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82b0adf0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0ADF0;
loc_82B0AE58:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82b0addc
	if (!ctx.cr0.eq) goto loc_82B0ADDC;
loc_82B0AE70:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0AE74"))) PPC_WEAK_FUNC(sub_82B0AE74);
PPC_FUNC_IMPL(__imp__sub_82B0AE74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0AE78"))) PPC_WEAK_FUNC(sub_82B0AE78);
PPC_FUNC_IMPL(__imp__sub_82B0AE78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B0AE88:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0aebc
	if (!ctx.cr6.gt) goto loc_82B0AEBC;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_82B0AE9C:
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lhzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r4.u32 + ctx.r10.u32);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addis r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 65536;
	// addi r4,r4,-32768
	ctx.r4.s64 = ctx.r4.s64 + -32768;
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// sthu r4,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82b0ae9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0AE9C;
loc_82B0AEBC:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// bne 0x82b0ae88
	if (!ctx.cr0.eq) goto loc_82B0AE88;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0AED8"))) PPC_WEAK_FUNC(sub_82B0AED8);
PPC_FUNC_IMPL(__imp__sub_82B0AED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B0AEE0;
	__savegprlr_24(ctx, base);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0afc8
	if (!ctx.cr6.gt) goto loc_82B0AFC8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r27,r6,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r29,r11,-15776
	ctx.r29.s64 = ctx.r11.s64 + -15776;
loc_82B0AEF8:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0afa0
	if (!ctx.cr6.gt) goto loc_82B0AFA0;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82B0AF10:
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r24,64
	ctx.r24.s64 = 64;
	// li r9,2
	ctx.r9.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lvlx128 v63,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r25,r11
	temp.u32 = ctx.r25.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r29,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// vperm128 v0,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r9,r10,2
	ctx.r9.s64 = ctx.r10.s64 + 2;
	// vaddshs v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vpkshus v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// stvehx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v0.u16[7 - ((ea & 0xF) >> 1)]);
loc_82B0AF50:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhax r10,r10,r11
	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32));
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x82b0af6c
	if (!ctx.cr6.gt) goto loc_82B0AF6C;
	// li r10,255
	ctx.r10.s64 = 255;
	// b 0x82b0af80
	goto loc_82B0AF80;
loc_82B0AF6C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82b0af7c
	if (!ctx.cr6.lt) goto loc_82B0AF7C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82b0af80
	goto loc_82B0AF80;
loc_82B0AF7C:
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
loc_82B0AF80:
	// stbx r10,r4,r9
	PPC_STORE_U8(ctx.r4.u32 + ctx.r9.u32, ctx.r10.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82b0af50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0AF50;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82b0af10
	if (!ctx.cr0.eq) goto loc_82B0AF10;
loc_82B0AFA0:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B0AFAC:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0afac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0AFAC;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 + ctx.r5.u64;
	// bne 0x82b0aef8
	if (!ctx.cr0.eq) goto loc_82B0AEF8;
loc_82B0AFC8:
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0AFCC"))) PPC_WEAK_FUNC(sub_82B0AFCC);
PPC_FUNC_IMPL(__imp__sub_82B0AFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0AFD0"))) PPC_WEAK_FUNC(sub_82B0AFD0);
PPC_FUNC_IMPL(__imp__sub_82B0AFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0b05c
	if (!ctx.cr6.gt) goto loc_82B0B05C;
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B0AFE8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0b034
	if (!ctx.cr6.gt) goto loc_82B0B034;
loc_82B0AFF8:
	// li r8,2
	ctx.r8.s64 = 2;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82B0B008:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lhzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82b0b008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B008;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b0aff8
	if (ctx.cr6.lt) goto loc_82B0AFF8;
loc_82B0B034:
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B0B040:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0b040
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B040;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// bne 0x82b0afe8
	if (!ctx.cr0.eq) goto loc_82B0AFE8;
loc_82B0B05C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0B068"))) PPC_WEAK_FUNC(sub_82B0B068);
PPC_FUNC_IMPL(__imp__sub_82B0B068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B0B070;
	__savegprlr_24(ctx, base);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0b120
	if (!ctx.cr6.gt) goto loc_82B0B120;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r11,-15696
	ctx.r31.s64 = ctx.r11.s64 + -15696;
loc_82B0B084:
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0b0f8
	if (!ctx.cr6.gt) goto loc_82B0B0F8;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B0B0A0:
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r28,-64
	ctx.r28.s64 = -64;
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,-48
	ctx.r26.s64 = -48;
	// lwz r25,0(r9)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r24,-16
	ctx.r24.s64 = -16;
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvlx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r27,r11
	temp.u32 = ctx.r27.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v0,r31,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvlx128 v60,r25,r11
	temp.u32 = ctx.r25.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vperm128 v62,v61,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v0,r31,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vperm128 v0,v62,v60,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vaddshs v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vpkshus128 v62,v0,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// vor128 v63,v62,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b0b0a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B0A0;
loc_82B0B0F8:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B0B104:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0b104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B104;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r4,r4,r5
	ctx.r4.u64 = ctx.r4.u64 + ctx.r5.u64;
	// bne 0x82b0b084
	if (!ctx.cr0.eq) goto loc_82B0B084;
loc_82B0B120:
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B124"))) PPC_WEAK_FUNC(sub_82B0B124);
PPC_FUNC_IMPL(__imp__sub_82B0B124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B128"))) PPC_WEAK_FUNC(sub_82B0B128);
PPC_FUNC_IMPL(__imp__sub_82B0B128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0B130;
	__savegprlr_29(ctx, base);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0b1c4
	if (!ctx.cr6.gt) goto loc_82B0B1C4;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
loc_82B0B144:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0b19c
	if (!ctx.cr6.gt) goto loc_82B0B19C;
loc_82B0B154:
	// li r7,3
	ctx.r7.s64 = 3;
	// li r9,-1
	ctx.r9.s64 = -1;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_82B0B170:
	// lwzu r7,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lhzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r4.u32);
	// addis r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 65536;
	// addi r7,r7,-32768
	ctx.r7.s64 = ctx.r7.s64 + -32768;
	// clrlwi r7,r7,16
	ctx.r7.u64 = ctx.r7.u32 & 0xFFFF;
	// sthu r7,2(r8)
	ea = 2 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r7.u16);
	ctx.r8.u32 = ea;
	// bdnz 0x82b0b170
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B170;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,14
	ctx.r11.s64 = ctx.r11.s64 + 14;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b0b154
	if (ctx.cr6.lt) goto loc_82B0B154;
loc_82B0B19C:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B0B1A8:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0b1a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B1A8;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// bne 0x82b0b144
	if (!ctx.cr0.eq) goto loc_82B0B144;
loc_82B0B1C4:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B1C8"))) PPC_WEAK_FUNC(sub_82B0B1C8);
PPC_FUNC_IMPL(__imp__sub_82B0B1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B0B1D0;
	__savegprlr_23(ctx, base);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0b288
	if (!ctx.cr6.gt) goto loc_82B0B288;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r31,r11,-15728
	ctx.r31.s64 = ctx.r11.s64 + -15728;
loc_82B0B1E8:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0b260
	if (!ctx.cr6.gt) goto loc_82B0B260;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r8,r3,12
	ctx.r8.s64 = ctx.r3.s64 + 12;
	// addi r4,r3,8
	ctx.r4.s64 = ctx.r3.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B0B208:
	// lwz r28,0(r9)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r27,-48
	ctx.r27.s64 = -48;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lwz r25,0(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r24,16
	ctx.r24.s64 = 16;
	// lwz r23,0(r4)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lvx128 v0,r31,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvlx128 v62,r26,r11
	temp.u32 = ctx.r26.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r28,r11
	temp.u32 = ctx.r28.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r11,r25
	temp.u32 = ctx.r11.u32 + ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r23,r11
	temp.u32 = ctx.r23.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vperm128 v63,v62,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v13,r31,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// vperm128 v62,v60,v61,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v0,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vpkshus128 v63,v0,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v0.s16)));
	// stvewx128 v63,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b0b208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B208;
loc_82B0B260:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B0B26C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0b26c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B26C;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r30,r30,r5
	ctx.r30.u64 = ctx.r30.u64 + ctx.r5.u64;
	// bne 0x82b0b1e8
	if (!ctx.cr0.eq) goto loc_82B0B1E8;
loc_82B0B288:
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B28C"))) PPC_WEAK_FUNC(sub_82B0B28C);
PPC_FUNC_IMPL(__imp__sub_82B0B28C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B290"))) PPC_WEAK_FUNC(sub_82B0B290);
PPC_FUNC_IMPL(__imp__sub_82B0B290) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0b31c
	if (!ctx.cr6.gt) goto loc_82B0B31C;
	// rlwinm r30,r6,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B0B2A8:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b0b2f4
	if (!ctx.cr6.gt) goto loc_82B0B2F4;
loc_82B0B2B8:
	// li r8,4
	ctx.r8.s64 = 4;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r3,-4
	ctx.r9.s64 = ctx.r3.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82B0B2C8:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// lhzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// addis r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 65536;
	// addi r8,r8,-32768
	ctx.r8.s64 = ctx.r8.s64 + -32768;
	// clrlwi r8,r8,16
	ctx.r8.u64 = ctx.r8.u32 & 0xFFFF;
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82b0b2c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B2C8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b0b2b8
	if (ctx.cr6.lt) goto loc_82B0B2B8;
loc_82B0B2F4:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B0B300:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0b300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0B300;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// bne 0x82b0b2a8
	if (!ctx.cr0.eq) goto loc_82B0B2A8;
loc_82B0B31C:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0B328"))) PPC_WEAK_FUNC(sub_82B0B328);
PPC_FUNC_IMPL(__imp__sub_82B0B328) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mullw r9,r5,r11
	ctx.r9.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// lha r31,16(r3)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 16));
	// lha r7,20(r3)
	ctx.r7.s64 = int16_t(PPC_LOAD_U16(ctx.r3.u32 + 20));
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// blt cr6,0x82b0b450
	if (ctx.cr6.lt) goto loc_82B0B450;
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82b0b450
	if (!ctx.cr6.lt) goto loc_82B0B450;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bne cr6,0x82b0b3a0
	if (!ctx.cr6.eq) goto loc_82B0B3A0;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bgt cr6,0x82b0b398
	if (ctx.cr6.gt) goto loc_82B0B398;
	// bl 0x82b0adc0
	ctx.lr = 0x82B0B394;
	sub_82B0ADC0(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B398:
	// bl 0x82b0ae78
	ctx.lr = 0x82B0B39C;
	sub_82B0AE78(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B3A0:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// bne cr6,0x82b0b3d4
	if (!ctx.cr6.eq) goto loc_82B0B3D4;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bgt cr6,0x82b0b3cc
	if (ctx.cr6.gt) goto loc_82B0B3CC;
	// bl 0x82b0aed8
	ctx.lr = 0x82B0B3C8;
	sub_82B0AED8(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B3CC:
	// bl 0x82b0afd0
	ctx.lr = 0x82B0B3D0;
	sub_82B0AFD0(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B3D4:
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// bne cr6,0x82b0b410
	if (!ctx.cr6.eq) goto loc_82B0B410;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bgt cr6,0x82b0b408
	if (ctx.cr6.gt) goto loc_82B0B408;
	// bl 0x82b0b068
	ctx.lr = 0x82B0B404;
	sub_82B0B068(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B408:
	// bl 0x82b0b128
	ctx.lr = 0x82B0B40C;
	sub_82B0B128(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B410:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r7,8
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 8, ctx.xer);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// bgt cr6,0x82b0b444
	if (ctx.cr6.gt) goto loc_82B0B444;
	// bl 0x82b0b1c8
	ctx.lr = 0x82B0B440;
	sub_82B0B1C8(ctx, base);
	// b 0x82b0b448
	goto loc_82B0B448;
loc_82B0B444:
	// bl 0x82b0b290
	ctx.lr = 0x82B0B448;
	sub_82B0B290(ctx, base);
loc_82B0B448:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b0b454
	goto loc_82B0B454;
loc_82B0B450:
	// li r3,-39
	ctx.r3.s64 = -39;
loc_82B0B454:
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

__attribute__((alias("__imp__sub_82B0B468"))) PPC_WEAK_FUNC(sub_82B0B468);
PPC_FUNC_IMPL(__imp__sub_82B0B468) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,25735
	ctx.r4.s64 = 1686568960;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B474"))) PPC_WEAK_FUNC(sub_82B0B474);
PPC_FUNC_IMPL(__imp__sub_82B0B474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B478"))) PPC_WEAK_FUNC(sub_82B0B478);
PPC_FUNC_IMPL(__imp__sub_82B0B478) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B484"))) PPC_WEAK_FUNC(sub_82B0B484);
PPC_FUNC_IMPL(__imp__sub_82B0B484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B488"))) PPC_WEAK_FUNC(sub_82B0B488);
PPC_FUNC_IMPL(__imp__sub_82B0B488) {
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
	// lis r11,1536
	ctx.r11.s64 = 100663296;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b0b524
	if (ctx.cr6.gt) goto loc_82B0B524;
	// beq cr6,0x82b0b51c
	if (ctx.cr6.eq) goto loc_82B0B51C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b0b5a0
	if (ctx.cr6.eq) goto loc_82B0B5A0;
	// lis r11,256
	ctx.r11.s64 = 16777216;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b510
	if (ctx.cr6.eq) goto loc_82B0B510;
	// lis r11,512
	ctx.r11.s64 = 33554432;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b508
	if (ctx.cr6.eq) goto loc_82B0B508;
	// lis r11,768
	ctx.r11.s64 = 50331648;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b500
	if (ctx.cr6.eq) goto loc_82B0B500;
	// lis r11,1024
	ctx.r11.s64 = 67108864;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b4f8
	if (ctx.cr6.eq) goto loc_82B0B4F8;
	// lis r11,1280
	ctx.r11.s64 = 83886080;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b0b56c
	if (!ctx.cr6.eq) goto loc_82B0B56C;
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x82b0b514
	goto loc_82B0B514;
loc_82B0B4F8:
	// lis r31,6
	ctx.r31.s64 = 393216;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B500:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x82b0b514
	goto loc_82B0B514;
loc_82B0B508:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B510:
	// lis r31,0
	ctx.r31.s64 = 0;
loc_82B0B514:
	// ori r31,r31,34952
	ctx.r31.u64 = ctx.r31.u64 | 34952;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B51C:
	// lis r31,1
	ctx.r31.s64 = 65536;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B524:
	// lis r11,1792
	ctx.r11.s64 = 117440512;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b59c
	if (ctx.cr6.eq) goto loc_82B0B59C;
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b594
	if (ctx.cr6.eq) goto loc_82B0B594;
	// lis r11,2304
	ctx.r11.s64 = 150994944;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b58c
	if (ctx.cr6.eq) goto loc_82B0B58C;
	// lis r11,2560
	ctx.r11.s64 = 167772160;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b584
	if (ctx.cr6.eq) goto loc_82B0B584;
	// lis r11,2816
	ctx.r11.s64 = 184549376;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b57c
	if (ctx.cr6.eq) goto loc_82B0B57C;
	// lis r11,3072
	ctx.r11.s64 = 201326592;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b574
	if (ctx.cr6.eq) goto loc_82B0B574;
loc_82B0B56C:
	// bl 0x82a82960
	ctx.lr = 0x82B0B570;
	sub_82A82960(ctx, base);
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B574:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x82b0b514
	goto loc_82B0B514;
loc_82B0B57C:
	// lis r31,16
	ctx.r31.s64 = 1048576;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B584:
	// lis r31,96
	ctx.r31.s64 = 6291456;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B58C:
	// lis r31,64
	ctx.r31.s64 = 4194304;
	// b 0x82b0b5a0
	goto loc_82B0B5A0;
loc_82B0B594:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x82b0b514
	goto loc_82B0B514;
loc_82B0B59C:
	// lis r31,4
	ctx.r31.s64 = 262144;
loc_82B0B5A0:
	// rlwinm. r11,r31,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0b5bc
	if (ctx.cr0.eq) goto loc_82B0B5BC;
	// lis r12,6
	ctx.r12.s64 = 393216;
	// ori r12,r12,34952
	ctx.r12.u64 = ctx.r12.u64 | 34952;
	// and. r11,r31,r12
	ctx.r11.u64 = ctx.r31.u64 & ctx.r12.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0b5bc
	if (ctx.cr0.eq) goto loc_82B0B5BC;
	// bl 0x82a82960
	ctx.lr = 0x82B0B5BC;
	sub_82A82960(ctx, base);
loc_82B0B5BC:
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

__attribute__((alias("__imp__sub_82B0B5D4"))) PPC_WEAK_FUNC(sub_82B0B5D4);
PPC_FUNC_IMPL(__imp__sub_82B0B5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B5D8"))) PPC_WEAK_FUNC(sub_82B0B5D8);
PPC_FUNC_IMPL(__imp__sub_82B0B5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B0B5E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b0b6c0
	if (ctx.cr6.eq) goto loc_82B0B6C0;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// beq cr6,0x82b0b684
	if (ctx.cr6.eq) goto loc_82B0B684;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// beq cr6,0x82b0b628
	if (ctx.cr6.eq) goto loc_82B0B628;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bne cr6,0x82b0b6b8
	if (!ctx.cr6.eq) goto loc_82B0B6B8;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// li r31,34
	ctx.r31.s64 = 34;
	// stw r10,156(r5)
	PPC_STORE_U32(ctx.r5.u32 + 156, ctx.r10.u32);
	// b 0x82b0b6c8
	goto loc_82B0B6C8;
loc_82B0B628:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82b0b640
	if (!ctx.cr6.lt) goto loc_82B0B640;
	// bl 0x82a82960
	ctx.lr = 0x82B0B640;
	sub_82A82960(ctx, base);
loc_82B0B640:
	// cmplwi cr6,r31,4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 4, ctx.xer);
	// blt cr6,0x82b0b64c
	if (ctx.cr6.lt) goto loc_82B0B64C;
	// bl 0x82a82960
	ctx.lr = 0x82B0B64C;
	sub_82A82960(ctx, base);
loc_82B0B64C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b0b67c
	if (!ctx.cr6.eq) goto loc_82B0B67C;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,160(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// li r9,4
	ctx.r9.s64 = 4;
	// slw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r31,r31,35
	ctx.r31.s64 = ctx.r31.s64 + 35;
	// stw r11,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r11.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// b 0x82b0b6c8
	goto loc_82B0B6C8;
loc_82B0B67C:
	// li r11,23
	ctx.r11.s64 = 23;
	// b 0x82b0b6c4
	goto loc_82B0B6C4;
loc_82B0B684:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0b69c
	if (ctx.cr6.lt) goto loc_82B0B69C;
	// bl 0x82a82960
	ctx.lr = 0x82B0B69C;
	sub_82A82960(ctx, base);
loc_82B0B69C:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// li r10,4
	ctx.r10.s64 = 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r30
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b0b6c8
	if (!ctx.cr6.eq) goto loc_82B0B6C8;
loc_82B0B6B8:
	// bl 0x82a82960
	ctx.lr = 0x82B0B6BC;
	sub_82A82960(ctx, base);
	// b 0x82b0b6c8
	goto loc_82B0B6C8;
loc_82B0B6C0:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B0B6C4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82B0B6C8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B6D4"))) PPC_WEAK_FUNC(sub_82B0B6D4);
PPC_FUNC_IMPL(__imp__sub_82B0B6D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B6D8"))) PPC_WEAK_FUNC(sub_82B0B6D8);
PPC_FUNC_IMPL(__imp__sub_82B0B6D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B0B6E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,52
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 52, ctx.xer);
	// beq cr6,0x82b0b708
	if (ctx.cr6.eq) goto loc_82B0B708;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// beq cr6,0x82b0b708
	if (ctx.cr6.eq) goto loc_82B0B708;
	// bl 0x82a82960
	ctx.lr = 0x82B0B708;
	sub_82A82960(ctx, base);
loc_82B0B708:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b0b728
	if (!ctx.cr6.eq) goto loc_82B0B728;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwimi r11,r10,16,13,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x70000) | (ctx.r11.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x82b0b72c
	goto loc_82B0B72C;
loc_82B0B728:
	// rlwinm r11,r11,0,16,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
loc_82B0B72C:
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b0b7a0
	if (ctx.cr6.eq) goto loc_82B0B7A0;
	// rlwinm r9,r10,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r8,r8,5424
	ctx.r8.s64 = ctx.r8.s64 + 5424;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r6,r7,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lwzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x82b0b7ac
	goto loc_82B0B7AC;
loc_82B0B7A0:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B0B7AC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r9,17476
	ctx.r9.s64 = 17476;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B7D0"))) PPC_WEAK_FUNC(sub_82B0B7D0);
PPC_FUNC_IMPL(__imp__sub_82B0B7D0) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82a82960
	ctx.lr = 0x82B0B7F4;
	sub_82A82960(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b0b800
	goto loc_82B0B800;
loc_82B0B7FC:
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
loc_82B0B800:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0b7fc
	if (!ctx.cr0.eq) goto loc_82B0B7FC;
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82B0B824"))) PPC_WEAK_FUNC(sub_82B0B824);
PPC_FUNC_IMPL(__imp__sub_82B0B824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B828"))) PPC_WEAK_FUNC(sub_82B0B828);
PPC_FUNC_IMPL(__imp__sub_82B0B828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B0B830;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0b854
	if (ctx.cr6.eq) goto loc_82B0B854;
	// bl 0x82a82960
	ctx.lr = 0x82B0B854;
	sub_82A82960(ctx, base);
loc_82B0B854:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r31,r10,4
	ctx.r31.s64 = ctx.r10.s64 + 4;
	// addi r27,r11,4
	ctx.r27.s64 = ctx.r11.s64 + 4;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r8,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r8.u32);
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0b890
	if (ctx.cr0.eq) goto loc_82B0B890;
	// bl 0x82a82960
	ctx.lr = 0x82B0B890;
	sub_82A82960(ctx, base);
loc_82B0B890:
	// lis r11,88
	ctx.r11.s64 = 5767168;
	// li r10,257
	ctx.r10.s64 = 257;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,17
	ctx.r11.s64 = 17;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// lis r10,32
	ctx.r10.s64 = 2097152;
	// rlwimi r30,r11,18,0,20
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0xFFFFF800) | (ctx.r30.u64 & 0xFFFFFFFF000007FF);
	// ori r11,r10,12816
	ctx.r11.u64 = ctx.r10.u64 | 12816;
	// stwu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0B8CC"))) PPC_WEAK_FUNC(sub_82B0B8CC);
PPC_FUNC_IMPL(__imp__sub_82B0B8CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B8D0"))) PPC_WEAK_FUNC(sub_82B0B8D0);
PPC_FUNC_IMPL(__imp__sub_82B0B8D0) {
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
	// bne cr6,0x82b0b8f8
	if (!ctx.cr6.eq) goto loc_82B0B8F8;
	// bl 0x82a82960
	ctx.lr = 0x82B0B8F8;
	sub_82A82960(ctx, base);
loc_82B0B8F8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0b90c
	if (ctx.cr6.lt) goto loc_82B0B90C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b0b91c
	goto loc_82B0B91C;
loc_82B0B90C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B0B91C:
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

__attribute__((alias("__imp__sub_82B0B934"))) PPC_WEAK_FUNC(sub_82B0B934);
PPC_FUNC_IMPL(__imp__sub_82B0B934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0B938"))) PPC_WEAK_FUNC(sub_82B0B938);
PPC_FUNC_IMPL(__imp__sub_82B0B938) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b0b960
	if (!ctx.cr6.eq) goto loc_82B0B960;
	// bl 0x82a82960
	ctx.lr = 0x82B0B960;
	sub_82A82960(ctx, base);
loc_82B0B960:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subfc r11,r11,r30
	ctx.xer.ca = ctx.r30.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
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

__attribute__((alias("__imp__sub_82B0B988"))) PPC_WEAK_FUNC(sub_82B0B988);
PPC_FUNC_IMPL(__imp__sub_82B0B988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0B990;
	__savegprlr_29(ctx, base);
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
	// bne cr6,0x82b0b9a8
	if (!ctx.cr6.eq) goto loc_82B0B9A8;
	// bl 0x82a82960
	ctx.lr = 0x82B0B9A8;
	sub_82A82960(ctx, base);
loc_82B0B9A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b0b9b8
	if (!ctx.cr6.eq) goto loc_82B0B9B8;
	// bl 0x82a82960
	ctx.lr = 0x82B0B9B8;
	sub_82A82960(ctx, base);
loc_82B0B9B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0ba5c
	if (ctx.cr6.lt) goto loc_82B0BA5C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0b9e0
	if (ctx.cr6.eq) goto loc_82B0B9E0;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r11,r11,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// b 0x82b0b9e4
	goto loc_82B0B9E4;
loc_82B0B9E0:
	// li r11,4096
	ctx.r11.s64 = 4096;
loc_82B0B9E4:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// b 0x82b0b9f4
	goto loc_82B0B9F4;
loc_82B0B9EC:
	// rlwinm. r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0ba68
	if (ctx.cr0.eq) goto loc_82B0BA68;
loc_82B0B9F4:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r30,r11,-32
	ctx.r30.s64 = ctx.r11.s64 + -32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82b0b9ec
	if (ctx.cr6.lt) goto loc_82B0B9EC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82B0BA14;
	sub_82691410(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82b0ba68
	if (ctx.cr0.eq) goto loc_82B0BA68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0ba48
	if (ctx.cr6.eq) goto loc_82B0BA48;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bl 0x82fa77c0
	ctx.lr = 0x82B0BA3C;
	sub_82FA77C0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691460
	ctx.lr = 0x82B0BA48;
	sub_82691460(ctx, base);
loc_82B0BA48:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82B0BA5C:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B0BA60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82B0BA68:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b0ba60
	goto loc_82B0BA60;
}

__attribute__((alias("__imp__sub_82B0BA70"))) PPC_WEAK_FUNC(sub_82B0BA70);
PPC_FUNC_IMPL(__imp__sub_82B0BA70) {
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
	// bne cr6,0x82b0ba98
	if (!ctx.cr6.eq) goto loc_82B0BA98;
	// bl 0x82a82960
	ctx.lr = 0x82B0BA98;
	sub_82A82960(ctx, base);
loc_82B0BA98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b938
	ctx.lr = 0x82B0BAA4;
	sub_82B0B938(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82b0bad8
	if (!ctx.cr0.eq) goto loc_82B0BAD8;
	// bl 0x82b0b988
	ctx.lr = 0x82B0BAB8;
	sub_82B0B988(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b0bad0
	if (ctx.cr0.eq) goto loc_82B0BAD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0b8d0
	ctx.lr = 0x82B0BACC;
	sub_82B0B8D0(ctx, base);
	// b 0x82b0baf0
	goto loc_82B0BAF0;
loc_82B0BAD0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b0baf0
	goto loc_82B0BAF0;
loc_82B0BAD8:
	// bl 0x82b0b8d0
	ctx.lr = 0x82B0BADC;
	sub_82B0B8D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B0BAEC;
	sub_82FA7CF0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B0BAF0:
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

__attribute__((alias("__imp__sub_82B0BB08"))) PPC_WEAK_FUNC(sub_82B0BB08);
PPC_FUNC_IMPL(__imp__sub_82B0BB08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B0BB10;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r3,21
	ctx.r31.u64 = ctx.r3.u32 & 0x7FF;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82b0bb54
	if (ctx.cr6.eq) goto loc_82B0BB54;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82b0bb4c
	if (ctx.cr6.eq) goto loc_82B0BB4C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82b0bb58
	if (!ctx.cr6.eq) goto loc_82B0BB58;
	// addi r31,r31,6144
	ctx.r31.s64 = ctx.r31.s64 + 6144;
	// b 0x82b0bb58
	goto loc_82B0BB58;
loc_82B0BB4C:
	// addi r31,r31,4096
	ctx.r31.s64 = ctx.r31.s64 + 4096;
	// b 0x82b0bb58
	goto loc_82B0BB58;
loc_82B0BB54:
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
loc_82B0BB58:
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x82b0bb6c
	if (ctx.cr6.lt) goto loc_82B0BB6C;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82b0bb6c
	if (ctx.cr6.gt) goto loc_82B0BB6C;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82B0BB6C:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b0bc70
	if (ctx.cr6.lt) goto loc_82B0BC70;
	// beq cr6,0x82b0bc1c
	if (ctx.cr6.eq) goto loc_82B0BC1C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b0bc14
	if (ctx.cr6.lt) goto loc_82B0BC14;
	// beq cr6,0x82b0bbd0
	if (ctx.cr6.eq) goto loc_82B0BBD0;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82b0bbc8
	if (ctx.cr6.eq) goto loc_82B0BBC8;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82b0bbc0
	if (ctx.cr6.eq) goto loc_82B0BBC0;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// bne cr6,0x82b0bc68
	if (!ctx.cr6.eq) goto loc_82B0BC68;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82b0bbb0
	if (ctx.cr6.lt) goto loc_82B0BBB0;
	// bne cr6,0x82b0bbb8
	if (!ctx.cr6.eq) goto loc_82B0BBB8;
	// li r11,21
	ctx.r11.s64 = 21;
	// b 0x82b0bbb4
	goto loc_82B0BBB4;
loc_82B0BBB0:
	// li r11,22
	ctx.r11.s64 = 22;
loc_82B0BBB4:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82B0BBB8:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b0bc78
	goto loc_82B0BC78;
loc_82B0BBC0:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b0bc74
	goto loc_82B0BC74;
loc_82B0BBC8:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82b0bc74
	goto loc_82B0BC74;
loc_82B0BBD0:
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0bc0c
	if (ctx.cr6.eq) goto loc_82B0BC0C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0bbfc
	if (ctx.cr6.lt) goto loc_82B0BBFC;
	// bl 0x82a82960
	ctx.lr = 0x82B0BBFC;
	sub_82A82960(ctx, base);
loc_82B0BBFC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwzx r31,r30,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// b 0x82b0bc78
	goto loc_82B0BC78;
loc_82B0BC0C:
	// li r11,17
	ctx.r11.s64 = 17;
	// b 0x82b0bc74
	goto loc_82B0BC74;
loc_82B0BC14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b0bc74
	goto loc_82B0BC74;
loc_82B0BC1C:
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// lwz r31,28(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0bc44
	if (ctx.cr6.lt) goto loc_82B0BC44;
	// bl 0x82a82960
	ctx.lr = 0x82B0BC44;
	sub_82A82960(ctx, base);
loc_82B0BC44:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,18
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 18, ctx.xer);
	// beq cr6,0x82b0bc78
	if (ctx.cr6.eq) goto loc_82B0BC78;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82b0bc78
	if (ctx.cr6.eq) goto loc_82B0BC78;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82b0bc78
	if (ctx.cr6.eq) goto loc_82B0BC78;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// beq cr6,0x82b0bc78
	if (ctx.cr6.eq) goto loc_82B0BC78;
loc_82B0BC68:
	// bl 0x82a82960
	ctx.lr = 0x82B0BC6C;
	sub_82A82960(ctx, base);
	// b 0x82b0bc78
	goto loc_82B0BC78;
loc_82B0BC70:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82B0BC74:
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82B0BC78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0BC84"))) PPC_WEAK_FUNC(sub_82B0BC84);
PPC_FUNC_IMPL(__imp__sub_82B0BC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0BC88"))) PPC_WEAK_FUNC(sub_82B0BC88);
PPC_FUNC_IMPL(__imp__sub_82B0BC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B0BC90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwimi r9,r3,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm. r7,r3,0,11,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// rlwinm r11,r3,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xF;
	// rlwinm r29,r3,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xF0000;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// li r9,0
	ctx.r9.s64 = 0;
	// beq 0x82b0bccc
	if (ctx.cr0.eq) goto loc_82B0BCCC;
	// li r9,256
	ctx.r9.s64 = 256;
loc_82B0BCCC:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0bd08
	if (ctx.cr6.eq) goto loc_82B0BD08;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0bcf4
	if (ctx.cr0.eq) goto loc_82B0BCF4;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
	// b 0x82b0bcfc
	goto loc_82B0BCFC;
loc_82B0BCF4:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r10,r10,5392
	ctx.r10.s64 = ctx.r10.s64 + 5392;
loc_82B0BCFC:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_82B0BD08:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// or r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 | ctx.r9.u64;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0BD18;
	sub_82B0B5D8(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b0bd40
	if (!ctx.cr6.eq) goto loc_82B0BD40;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b0bd40
	if (!ctx.cr6.eq) goto loc_82B0BD40;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// b 0x82b0bd94
	goto loc_82B0BD94;
loc_82B0BD40:
	// rlwinm. r10,r29,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82b0bd50
	if (ctx.cr0.eq) goto loc_82B0BD50;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B0BD50:
	// rlwinm. r10,r29,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0bd5c
	if (ctx.cr0.eq) goto loc_82B0BD5C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82B0BD5C:
	// rlwinm. r10,r29,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0bd68
	if (ctx.cr0.eq) goto loc_82B0BD68;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82B0BD68:
	// rlwinm. r10,r29,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0bd74
	if (ctx.cr0.eq) goto loc_82B0BD74;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82B0BD74:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 | ctx.r31.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
loc_82B0BD94:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0BDA4"))) PPC_WEAK_FUNC(sub_82B0BDA4);
PPC_FUNC_IMPL(__imp__sub_82B0BDA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0BDA8"))) PPC_WEAK_FUNC(sub_82B0BDA8);
PPC_FUNC_IMPL(__imp__sub_82B0BDA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B0BDB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFF0000;
	// lwz r30,0(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0be28
	if (ctx.cr6.eq) goto loc_82B0BE28;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,5424
	ctx.r9.s64 = ctx.r9.s64 + 5424;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x82b0be2c
	goto loc_82B0BE2C;
loc_82B0BE28:
	// li r25,12816
	ctx.r25.s64 = 12816;
loc_82B0BE2C:
	// rlwinm r3,r31,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF000000;
	// bl 0x82b0b488
	ctx.lr = 0x82B0BE34;
	sub_82B0B488(ctx, base);
	// or r27,r3,r29
	ctx.r27.u64 = ctx.r3.u64 | ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0BE48;
	sub_82B0BB08(ctx, base);
	// rlwinm r11,r31,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0beac
	if (!ctx.cr6.eq) goto loc_82B0BEAC;
	// rlwimi r31,r31,12,21,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r31.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r31,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82b0beac
	if (!ctx.cr6.eq) goto loc_82B0BEAC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwimi r11,r26,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x82b0be88
	if (ctx.cr6.eq) goto loc_82B0BE88;
	// bl 0x82a82960
	ctx.lr = 0x82B0BE84;
	sub_82A82960(ctx, base);
	// b 0x82b0beac
	goto loc_82B0BEAC;
loc_82B0BE88:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// clrlwi r10,r26,21
	ctx.r10.u64 = ctx.r26.u32 & 0x7FF;
	// andis. r11,r11,65521
	ctx.r11.u64 = ctx.r11.u64 & 4293984256;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x82b0bea8
	if (ctx.cr0.eq) goto loc_82B0BEA8;
	// bl 0x82a82960
	ctx.lr = 0x82B0BEA8;
	sub_82A82960(ctx, base);
loc_82B0BEA8:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B0BEAC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82b0bed4
	if (!ctx.cr6.eq) goto loc_82B0BED4;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12816, ctx.xer);
	// bne cr6,0x82b0bed4
	if (!ctx.cr6.eq) goto loc_82B0BED4;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r10,r28,7,24,24
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0x80) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFF7F);
	// andi. r10,r10,191
	ctx.r10.u64 = ctx.r10.u64 & 191;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwimi r29,r10,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// b 0x82b0befc
	goto loc_82B0BEFC;
loc_82B0BED4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// or r9,r27,r25
	ctx.r9.u64 = ctx.r27.u64 | ctx.r25.u64;
	// rlwimi r11,r28,7,24,24
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 7) & 0x80) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFF7F);
	// rlwinm r11,r11,16,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFF0000;
	// rlwinm r11,r11,0,10,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFBFFFFF;
	// oris r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 4194304;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
loc_82B0BEFC:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b0bf14
	if (ctx.cr6.eq) goto loc_82B0BF14;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82B0BF14:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0BF20"))) PPC_WEAK_FUNC(sub_82B0BF20);
PPC_FUNC_IMPL(__imp__sub_82B0BF20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B0BF28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r31,0(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r11,r3,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0BF54;
	sub_82B0B5D8(ctx, base);
	// li r11,71
	ctx.r11.s64 = 71;
	// rlwinm r10,r28,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b0bfc8
	if (ctx.cr6.eq) goto loc_82B0BFC8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// clrlwi r7,r3,16
	ctx.r7.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r6,r10,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq 0x82b0bf9c
	if (ctx.cr0.eq) goto loc_82B0BF9C;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82B0BF9C:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0bfa8
	if (ctx.cr0.eq) goto loc_82B0BFA8;
	// ori r9,r9,4
	ctx.r9.u64 = ctx.r9.u64 | 4;
loc_82B0BFA8:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0bfb4
	if (ctx.cr0.eq) goto loc_82B0BFB4;
	// ori r9,r9,16
	ctx.r9.u64 = ctx.r9.u64 | 16;
loc_82B0BFB4:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0bfc0
	if (ctx.cr0.eq) goto loc_82B0BFC0;
	// ori r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 64;
loc_82B0BFC0:
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82b0bfd8
	goto loc_82B0BFD8;
loc_82B0BFC8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B0BFD8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r30,r10,18,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0BFF8"))) PPC_WEAK_FUNC(sub_82B0BFF8);
PPC_FUNC_IMPL(__imp__sub_82B0BFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B0C000;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// rlwimi r9,r3,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r9,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0C040;
	sub_82B0B5D8(ctx, base);
	// rlwinm r11,r27,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xF0000;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0c0ac
	if (ctx.cr6.eq) goto loc_82B0C0AC;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r7,r11,0,15,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// beq 0x82b0c07c
	if (ctx.cr0.eq) goto loc_82B0C07C;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82B0C07C:
	// rlwinm. r8,r11,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0c088
	if (ctx.cr0.eq) goto loc_82B0C088;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_82B0C088:
	// rlwinm. r8,r11,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0c094
	if (ctx.cr0.eq) goto loc_82B0C094;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_82B0C094:
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0c0a0
	if (ctx.cr0.eq) goto loc_82B0C0A0;
	// ori r10,r10,64
	ctx.r10.u64 = ctx.r10.u64 | 64;
loc_82B0C0A0:
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// b 0x82b0c0c0
	goto loc_82B0C0C0;
loc_82B0C0AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// rlwimi r3,r11,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r11,r3,10
	ctx.r11.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82B0C0C0:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// addis r11,r11,-3328
	ctx.r11.s64 = ctx.r11.s64 + -218103808;
	// rlwinm r10,r30,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lis r8,1
	ctx.r8.s64 = 65536;
	// subfe r6,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r6.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// and r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 & ctx.r8.u64;
	// addi r11,r11,5424
	ctx.r11.s64 = ctx.r11.s64 + 5424;
	// bne cr6,0x82b0c108
	if (!ctx.cr6.eq) goto loc_82B0C108;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82b0c108
	if (!ctx.cr6.eq) goto loc_82B0C108;
	// lis r8,4
	ctx.r8.s64 = 262144;
	// ori r8,r8,32
	ctx.r8.u64 = ctx.r8.u64 | 32;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// b 0x82b0c15c
	goto loc_82B0C15C;
loc_82B0C108:
	// rlwinm r6,r10,14,18,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r5,r6,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r6,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// rlwinm r4,r5,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xC;
	// rlwinm r5,r5,0,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lis r3,68
	ctx.r3.s64 = 4456448;
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// ori r3,r3,32
	ctx.r3.u64 = ctx.r3.u64 | 32;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// rlwinm r6,r6,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// rlwinm r4,r4,8,0,23
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// rlwinm r6,r5,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// or r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 | ctx.r10.u64;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
loc_82B0C15C:
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82b0c1bc
	if (ctx.cr6.eq) goto loc_82B0C1BC;
	// rlwinm r9,r29,14,18,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 14) & 0x3FFF;
	// lis r8,68
	ctx.r8.s64 = 4456448;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r6,r29,18,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 18) & 0xC;
	// rlwinm r5,r7,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xC;
	// rlwinm r7,r7,0,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xC;
	// ori r8,r8,33
	ctx.r8.u64 = ctx.r8.u64 | 33;
	// rlwinm r9,r9,2,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwzx r8,r6,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// lwzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r11.u32);
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r7,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// b 0x82b0c1c8
	goto loc_82B0C1C8;
loc_82B0C1BC:
	// lis r9,4
	ctx.r9.s64 = 262144;
	// ori r9,r9,33
	ctx.r9.u64 = ctx.r9.u64 | 33;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82B0C1C8:
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C1D8"))) PPC_WEAK_FUNC(sub_82B0C1D8);
PPC_FUNC_IMPL(__imp__sub_82B0C1D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B0C1E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// li r9,71
	ctx.r9.s64 = 71;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// rlwimi r8,r3,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r3.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// clrlwi r4,r3,21
	ctx.r4.u64 = ctx.r3.u32 & 0x7FF;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r3,r8,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwinm r29,r10,0,12,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0C224;
	sub_82B0B5D8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwimi r11,r27,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r27.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r27,21
	ctx.r27.u64 = ctx.r27.u32 & 0x7FF;
	// rlwinm. r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0c240
	if (ctx.cr0.eq) goto loc_82B0C240;
	// bl 0x82a82960
	ctx.lr = 0x82B0C240;
	sub_82A82960(ctx, base);
loc_82B0C240:
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0c2a8
	if (ctx.cr6.eq) goto loc_82B0C2A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm. r8,r29,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// beq 0x82b0c278
	if (ctx.cr0.eq) goto loc_82B0C278;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B0C278:
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0c284
	if (ctx.cr0.eq) goto loc_82B0C284;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82B0C284:
	// rlwinm. r9,r29,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0c290
	if (ctx.cr0.eq) goto loc_82B0C290;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82B0C290:
	// rlwinm. r9,r29,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0c29c
	if (ctx.cr0.eq) goto loc_82B0C29C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82B0C29C:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// b 0x82b0c2bc
	goto loc_82B0C2BC;
loc_82B0C2A8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwimi r30,r10,16,10,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r30.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r30,10
	ctx.r10.u64 = ctx.r30.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82B0C2BC:
	// rlwinm r10,r28,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// li r7,17
	ctx.r7.s64 = 17;
	// addi r9,r9,5424
	ctx.r9.s64 = ctx.r9.s64 + 5424;
	// rlwinm r6,r8,2,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r5,r28,18,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0xC;
	// rlwimi r27,r7,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r7.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r6,r5,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 | ctx.r6.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r8,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C324"))) PPC_WEAK_FUNC(sub_82B0C324);
PPC_FUNC_IMPL(__imp__sub_82B0C324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0C328"))) PPC_WEAK_FUNC(sub_82B0C328);
PPC_FUNC_IMPL(__imp__sub_82B0C328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B0C330;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// lwz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rlwinm r18,r11,0,3,3
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r16,r11,0,1,1
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	// clrlwi r24,r11,16
	ctx.r24.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82b0c370
	if (!ctx.cr0.eq) goto loc_82B0C370;
	// bl 0x82a82960
	ctx.lr = 0x82B0C370;
	sub_82A82960(ctx, base);
loc_82B0C370:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// ori r23,r11,512
	ctx.r23.u64 = ctx.r11.u64 | 512;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82b0c3e0
	if (!ctx.cr6.lt) goto loc_82B0C3E0;
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r9,r11,25
	ctx.r9.s64 = ctx.r11.s64 + 25;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r26.u32);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b0c3e0
	if (!ctx.cr6.eq) goto loc_82B0C3E0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b0c3c0
	if (!ctx.cr6.eq) goto loc_82B0C3C0;
	// bl 0x82a82960
	ctx.lr = 0x82B0C3C0;
	sub_82A82960(ctx, base);
loc_82B0C3C0:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82b0c3cc
	if (ctx.cr6.eq) goto loc_82B0C3CC;
	// bl 0x82a82960
	ctx.lr = 0x82B0C3CC;
	sub_82A82960(ctx, base);
loc_82B0C3CC:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57360
	ctx.r12.u64 = ctx.r12.u64 | 57360;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
loc_82B0C3E0:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82b0c414
	if (ctx.cr6.eq) goto loc_82B0C414;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r21,0(r28)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// oris r27,r11,15
	ctx.r27.u64 = ctx.r11.u64 | 983040;
	// ori r27,r27,33
	ctx.r27.u64 = ctx.r27.u64 | 33;
	// bge cr6,0x82b0c418
	if (!ctx.cr6.lt) goto loc_82B0C418;
	// bl 0x82a82960
	ctx.lr = 0x82B0C410;
	sub_82A82960(ctx, base);
	// b 0x82b0c418
	goto loc_82B0C418;
loc_82B0C414:
	// lwz r21,80(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0C418:
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r30,13
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 13, ctx.xer);
	// bne cr6,0x82b0c43c
	if (!ctx.cr6.eq) goto loc_82B0C43C;
	// cmplwi cr6,r24,80
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 80, ctx.xer);
	// lis r11,67
	ctx.r11.s64 = 4390912;
	// beq cr6,0x82b0c434
	if (ctx.cr6.eq) goto loc_82B0C434;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_82B0C434:
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// b 0x82b0c53c
	goto loc_82B0C53C;
loc_82B0C43C:
	// cmpwi cr6,r30,69
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 69, ctx.xer);
	// bne cr6,0x82b0c4b0
	if (!ctx.cr6.eq) goto loc_82B0C4B0;
	// li r31,69
	ctx.r31.s64 = 69;
	// cmplwi cr6,r24,20
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 20, ctx.xer);
	// beq cr6,0x82b0c49c
	if (ctx.cr6.eq) goto loc_82B0C49C;
	// cmplwi cr6,r24,21
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 21, ctx.xer);
	// beq cr6,0x82b0c490
	if (ctx.cr6.eq) goto loc_82B0C490;
	// cmplwi cr6,r24,22
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 22, ctx.xer);
	// beq cr6,0x82b0c488
	if (ctx.cr6.eq) goto loc_82B0C488;
	// cmplwi cr6,r24,23
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 23, ctx.xer);
	// beq cr6,0x82b0c480
	if (ctx.cr6.eq) goto loc_82B0C480;
	// cmplwi cr6,r24,24
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 24, ctx.xer);
	// beq cr6,0x82b0c478
	if (ctx.cr6.eq) goto loc_82B0C478;
	// bl 0x82a82960
	ctx.lr = 0x82B0C474;
	sub_82A82960(ctx, base);
	// b 0x82b0c4a0
	goto loc_82B0C4A0;
loc_82B0C478:
	// lis r31,4
	ctx.r31.s64 = 262144;
	// b 0x82b0c494
	goto loc_82B0C494;
loc_82B0C480:
	// lis r31,3
	ctx.r31.s64 = 196608;
	// b 0x82b0c494
	goto loc_82B0C494;
loc_82B0C488:
	// lis r31,2
	ctx.r31.s64 = 131072;
	// b 0x82b0c494
	goto loc_82B0C494;
loc_82B0C490:
	// lis r31,1
	ctx.r31.s64 = 65536;
loc_82B0C494:
	// ori r31,r31,69
	ctx.r31.u64 = ctx.r31.u64 | 69;
	// b 0x82b0c4a0
	goto loc_82B0C4A0;
loc_82B0C49C:
	// li r31,69
	ctx.r31.s64 = 69;
loc_82B0C4A0:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82b0c548
	goto loc_82B0C548;
loc_82B0C4B0:
	// cmpwi cr6,r30,61
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 61, ctx.xer);
	// beq cr6,0x82b0c538
	if (ctx.cr6.eq) goto loc_82B0C538;
	// cmpwi cr6,r30,60
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 60, ctx.xer);
	// beq cr6,0x82b0c538
	if (ctx.cr6.eq) goto loc_82B0C538;
	// cmpwi cr6,r30,76
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 76, ctx.xer);
	// beq cr6,0x82b0c538
	if (ctx.cr6.eq) goto loc_82B0C538;
	// cmpwi cr6,r30,81
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 81, ctx.xer);
	// beq cr6,0x82b0c524
	if (ctx.cr6.eq) goto loc_82B0C524;
	// cmpwi cr6,r30,85
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 85, ctx.xer);
	// beq cr6,0x82b0c524
	if (ctx.cr6.eq) goto loc_82B0C524;
	// cmpwi cr6,r30,37
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 37, ctx.xer);
	// beq cr6,0x82b0c4e8
	if (ctx.cr6.eq) goto loc_82B0C4E8;
	// cmpwi cr6,r30,38
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 38, ctx.xer);
	// bne cr6,0x82b0c538
	if (!ctx.cr6.eq) goto loc_82B0C538;
loc_82B0C4E8:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0c500
	if (!ctx.cr6.eq) goto loc_82B0C500;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b0c510
	goto loc_82B0C510;
loc_82B0C500:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// beq cr6,0x82b0c510
	if (ctx.cr6.eq) goto loc_82B0C510;
	// rlwinm r11,r20,10,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 10) & 0x1;
loc_82B0C510:
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// rlwimi r10,r11,24,7,7
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x1000000) | (ctx.r10.u64 & 0xFFFFFFFFFEFFFFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// b 0x82b0c548
	goto loc_82B0C548;
loc_82B0C524:
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// rlwimi r30,r25,17,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 17) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// b 0x82b0c548
	goto loc_82B0C548;
loc_82B0C538:
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
loc_82B0C53C:
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82B0C548:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0C558;
	sub_82B0BC88(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c568
	if (!ctx.cr0.eq) goto loc_82B0C568;
	// bl 0x82a82960
	ctx.lr = 0x82B0C568;
	sub_82A82960(ctx, base);
loc_82B0C568:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0c598
	if (!ctx.cr6.eq) goto loc_82B0C598;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c590
	if (!ctx.cr0.eq) goto loc_82B0C590;
	// bl 0x82a82960
	ctx.lr = 0x82B0C590;
	sub_82A82960(ctx, base);
loc_82B0C590:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B0C598:
	// cmplwi cr6,r24,7
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 7, ctx.xer);
	// beq cr6,0x82b0c5c0
	if (ctx.cr6.eq) goto loc_82B0C5C0;
	// cmplwi cr6,r24,15
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 15, ctx.xer);
	// beq cr6,0x82b0c5c0
	if (ctx.cr6.eq) goto loc_82B0C5C0;
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// beq cr6,0x82b0c5c0
	if (ctx.cr6.eq) goto loc_82B0C5C0;
	// cmplwi cr6,r24,37
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 37, ctx.xer);
	// beq cr6,0x82b0c658
	if (ctx.cr6.eq) goto loc_82B0C658;
	// cmplwi cr6,r24,79
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 79, ctx.xer);
	// bne cr6,0x82b0c634
	if (!ctx.cr6.eq) goto loc_82B0C634;
loc_82B0C5C0:
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0c6a4
	if (ctx.cr6.eq) goto loc_82B0C6A4;
	// lis r10,768
	ctx.r10.s64 = 50331648;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0c69c
	if (ctx.cr6.eq) goto loc_82B0C69C;
	// lis r10,1280
	ctx.r10.s64 = 83886080;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0c690
	if (ctx.cr6.eq) goto loc_82B0C690;
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0c684
	if (ctx.cr6.eq) goto loc_82B0C684;
	// lis r10,3072
	ctx.r10.s64 = 201326592;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b0c6a8
	if (!ctx.cr6.eq) goto loc_82B0C6A8;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82b0c688
	goto loc_82B0C688;
loc_82B0C608:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0c634
	if (!ctx.cr6.eq) goto loc_82B0C634;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c62c
	if (!ctx.cr0.eq) goto loc_82B0C62C;
	// bl 0x82a82960
	ctx.lr = 0x82B0C62C;
	sub_82A82960(ctx, base);
loc_82B0C62C:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B0C634:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0C648;
	sub_82B0BDA8(ctx, base);
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c608
	if (!ctx.cr0.eq) goto loc_82B0C608;
	// b 0x82b0c728
	goto loc_82B0C728;
loc_82B0C658:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0C66C;
	sub_82B0BDA8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x82b0c678
	goto loc_82B0C678;
loc_82B0C674:
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
loc_82B0C678:
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c674
	if (!ctx.cr0.eq) goto loc_82B0C674;
	// b 0x82b0c728
	goto loc_82B0C728;
loc_82B0C684:
	// li r11,7
	ctx.r11.s64 = 7;
loc_82B0C688:
	// rlwimi r30,r11,24,4,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF000000) | (ctx.r30.u64 & 0xFFFFFFFFF0FFFFFF);
	// b 0x82b0c6a8
	goto loc_82B0C6A8;
loc_82B0C690:
	// rlwinm r11,r30,0,8,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
	// oris r30,r11,1024
	ctx.r30.u64 = ctx.r11.u64 | 67108864;
	// b 0x82b0c6a8
	goto loc_82B0C6A8;
loc_82B0C69C:
	// rlwimi r30,r25,25,6,7
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r25.u32, 25) & 0x3000000) | (ctx.r30.u64 & 0xFFFFFFFFFCFFFFFF);
	// b 0x82b0c6a8
	goto loc_82B0C6A8;
loc_82B0C6A4:
	// rlwinm r30,r30,0,8,6
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFFFFEFFFFFF;
loc_82B0C6A8:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,16
	ctx.r5.s64 = 1048576;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0C6BC;
	sub_82B0BDA8(ctx, base);
	// cmplwi cr6,r24,32
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 32, ctx.xer);
	// bne cr6,0x82b0c718
	if (!ctx.cr6.eq) goto loc_82B0C718;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c6d4
	if (!ctx.cr0.eq) goto loc_82B0C6D4;
	// bl 0x82a82960
	ctx.lr = 0x82B0C6D4;
	sub_82A82960(ctx, base);
loc_82B0C6D4:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0c704
	if (!ctx.cr6.eq) goto loc_82B0C704;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0c6fc
	if (!ctx.cr0.eq) goto loc_82B0C6FC;
	// bl 0x82a82960
	ctx.lr = 0x82B0C6FC;
	sub_82A82960(ctx, base);
loc_82B0C6FC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B0C704:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0C718;
	sub_82B0BDA8(ctx, base);
loc_82B0C718:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0c728
	if (ctx.cr0.eq) goto loc_82B0C728;
	// bl 0x82a82960
	ctx.lr = 0x82B0C728;
	sub_82A82960(ctx, base);
loc_82B0C728:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// beq cr6,0x82b0c748
	if (ctx.cr6.eq) goto loc_82B0C748;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lis r5,228
	ctx.r5.s64 = 14942208;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b0bff8
	ctx.lr = 0x82B0C748;
	sub_82B0BFF8(ctx, base);
loc_82B0C748:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82b0c79c
	if (ctx.cr6.eq) goto loc_82B0C79C;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82b0c75c
	if (ctx.cr6.lt) goto loc_82B0C75C;
	// bl 0x82a82960
	ctx.lr = 0x82B0C75C;
	sub_82A82960(ctx, base);
loc_82B0C75C:
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// li r4,16
	ctx.r4.s64 = 16;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b0bf20
	ctx.lr = 0x82B0C780;
	sub_82B0BF20(ctx, base);
	// lwz r11,428(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 428);
	// lwz r10,424(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r26)
	PPC_STORE_U32(ctx.r26.u32 + 428, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b0c79c
	if (!ctx.cr6.gt) goto loc_82B0C79C;
	// bl 0x82a82960
	ctx.lr = 0x82B0C79C;
	sub_82A82960(ctx, base);
loc_82B0C79C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0C7B0"))) PPC_WEAK_FUNC(sub_82B0C7B0);
PPC_FUNC_IMPL(__imp__sub_82B0C7B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B0C7B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0c7e4
	if (!ctx.cr6.lt) goto loc_82B0C7E4;
	// bl 0x82a82960
	ctx.lr = 0x82B0C7E4;
	sub_82A82960(ctx, base);
loc_82B0C7E4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r31,0(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// bne cr6,0x82b0c820
	if (!ctx.cr6.eq) goto loc_82B0C820;
	// lwz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b0c81c
	if (!ctx.cr6.eq) goto loc_82B0C81C;
	// li r28,43
	ctx.r28.s64 = 43;
	// stw r27,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r27.u32);
	// b 0x82b0c82c
	goto loc_82B0C82C;
loc_82B0C81C:
	// li r28,83
	ctx.r28.s64 = 83;
loc_82B0C820:
	// cmplwi cr6,r11,96
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 96, ctx.xer);
	// bgt cr6,0x82b0cc50
	if (ctx.cr6.gt) goto loc_82B0CC50;
	// beq cr6,0x82b0cc10
	if (ctx.cr6.eq) goto loc_82B0CC10;
loc_82B0C82C:
	// addi r11,r11,-25
	ctx.r11.s64 = ctx.r11.s64 + -25;
	// cmplwi cr6,r11,19
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 19, ctx.xer);
	// bgt cr6,0x82b0cc50
	if (ctx.cr6.gt) goto loc_82B0CC50;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-15680
	ctx.r12.s64 = ctx.r12.s64 + -15680;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// nop 
	// addi r12,r12,-14240
	ctx.r12.s64 = ctx.r12.s64 + -14240;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B0C860;
	case 1:
		goto loc_82B0C8C8;
	case 2:
		goto loc_82B0CA88;
	case 3:
		goto loc_82B0CA7C;
	case 4:
		goto loc_82B0CA7C;
	case 5:
		goto loc_82B0CB14;
	case 6:
		goto loc_82B0CC50;
	case 7:
		goto loc_82B0CC50;
	case 8:
		goto loc_82B0CC50;
	case 9:
		goto loc_82B0CC50;
	case 10:
		goto loc_82B0CC50;
	case 11:
		goto loc_82B0CC50;
	case 12:
		goto loc_82B0CC50;
	case 13:
		goto loc_82B0CAB4;
	case 14:
		goto loc_82B0CA7C;
	case 15:
		goto loc_82B0CB70;
	case 16:
		goto loc_82B0CC50;
	case 17:
		goto loc_82B0C9E8;
	case 18:
		goto loc_82B0CA34;
	case 19:
		goto loc_82B0CA7C;
	default:
		__builtin_unreachable();
	}
loc_82B0C860:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// cmplwi cr6,r10,4608
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4608, ctx.xer);
	// beq cr6,0x82b0c890
	if (ctx.cr6.eq) goto loc_82B0C890;
	// bl 0x82a82960
	ctx.lr = 0x82B0C890;
	sub_82A82960(ctx, base);
loc_82B0C890:
	// cmplwi cr6,r31,2048
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2048, ctx.xer);
	// blt cr6,0x82b0c89c
	if (ctx.cr6.lt) goto loc_82B0C89C;
	// bl 0x82a82960
	ctx.lr = 0x82B0C89C;
	sub_82A82960(ctx, base);
loc_82B0C89C:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0c8b8
	if (ctx.cr6.lt) goto loc_82B0C8B8;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0c8b8
	if (!ctx.cr6.lt) goto loc_82B0C8B8;
	// bl 0x82a82960
	ctx.lr = 0x82B0C8B8;
	sub_82A82960(ctx, base);
loc_82B0C8B8:
	// clrlwi r11,r31,16
	ctx.r11.u64 = ctx.r31.u32 & 0xFFFF;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82b0cc54
	goto loc_82B0CC54;
loc_82B0C8C8:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwzu r30,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r27,r11,24,27,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r27,14
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 14, ctx.xer);
	// beq cr6,0x82b0c8f4
	if (ctx.cr6.eq) goto loc_82B0C8F4;
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// beq cr6,0x82b0c8f4
	if (ctx.cr6.eq) goto loc_82B0C8F4;
	// bl 0x82a82960
	ctx.lr = 0x82B0C8F4;
	sub_82A82960(ctx, base);
loc_82B0C8F4:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0c904
	if (!ctx.cr6.eq) goto loc_82B0C904;
	// bl 0x82a82960
	ctx.lr = 0x82B0C904;
	sub_82A82960(ctx, base);
loc_82B0C904:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// clrlwi r29,r28,21
	ctx.r29.u64 = ctx.r28.u32 & 0x7FF;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x82b0c920
	if (ctx.cr6.eq) goto loc_82B0C920;
	// bl 0x82a82960
	ctx.lr = 0x82B0C920;
	sub_82A82960(ctx, base);
loc_82B0C920:
	// cmplwi cr6,r29,2048
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2048, ctx.xer);
	// blt cr6,0x82b0c92c
	if (ctx.cr6.lt) goto loc_82B0C92C;
	// bl 0x82a82960
	ctx.lr = 0x82B0C92C;
	sub_82A82960(ctx, base);
loc_82B0C92C:
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x82b0c948
	if (ctx.cr6.lt) goto loc_82B0C948;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0c948
	if (!ctx.cr6.lt) goto loc_82B0C948;
	// bl 0x82a82960
	ctx.lr = 0x82B0C948;
	sub_82A82960(ctx, base);
loc_82B0C948:
	// cmplwi cr6,r27,19
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 19, ctx.xer);
	// bne cr6,0x82b0c984
	if (!ctx.cr6.eq) goto loc_82B0C984;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0b6d8
	ctx.lr = 0x82B0C960;
	sub_82B0B6D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,8
	ctx.r10.s64 = 8;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// li r8,41
	ctx.r8.s64 = 41;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82b0cc54
	goto loc_82B0CC54;
loc_82B0C984:
	// rlwinm r10,r30,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r9,3328
	ctx.r9.s64 = 218103808;
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// bne cr6,0x82b0c9cc
	if (!ctx.cr6.eq) goto loc_82B0C9CC;
	// li r10,53
	ctx.r10.s64 = 53;
	// clrlwi r9,r29,16
	ctx.r9.u64 = ctx.r29.u32 & 0xFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,39
	ctx.r10.s64 = 39;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// li r11,8
	ctx.r11.s64 = 8;
	// li r8,41
	ctx.r8.s64 = 41;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// stwu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r31.u32 = ea;
	// b 0x82b0c9e0
	goto loc_82B0C9E0;
loc_82B0C9CC:
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
loc_82B0C9DC:
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
loc_82B0C9E0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82b0cc54
	goto loc_82B0CC54;
loc_82B0C9E8:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b0c9f8
	if (!ctx.cr6.eq) goto loc_82B0C9F8;
	// bl 0x82a82960
	ctx.lr = 0x82B0C9F8;
	sub_82A82960(ctx, base);
loc_82B0C9F8:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82b0b8d0
	ctx.lr = 0x82B0CA04;
	sub_82B0B8D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0ca7c
	if (ctx.cr0.eq) goto loc_82B0CA7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0ca7c
	if (ctx.cr6.eq) goto loc_82B0CA7C;
	// li r11,41
	ctx.r11.s64 = 41;
	// li r10,53
	ctx.r10.s64 = 53;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// b 0x82b0c9e0
	goto loc_82B0C9E0;
loc_82B0CA34:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b0ca44
	if (!ctx.cr6.eq) goto loc_82B0CA44;
	// bl 0x82a82960
	ctx.lr = 0x82B0CA44;
	sub_82A82960(ctx, base);
loc_82B0CA44:
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82b0b8d0
	ctx.lr = 0x82B0CA50;
	sub_82B0B8D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b0ca70
	if (ctx.cr0.eq) goto loc_82B0CA70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0ca70
	if (ctx.cr6.eq) goto loc_82B0CA70;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
loc_82B0CA70:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
loc_82B0CA7C:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82b0c9e0
	goto loc_82B0C9E0;
loc_82B0CA88:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3840
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3840, ctx.xer);
	// beq cr6,0x82b0caa8
	if (ctx.cr6.eq) goto loc_82B0CAA8;
	// bl 0x82a82960
	ctx.lr = 0x82B0CAA8;
	sub_82A82960(ctx, base);
loc_82B0CAA8:
	// clrlwi. r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0cab4
	if (ctx.cr0.eq) goto loc_82B0CAB4;
	// bl 0x82a82960
	ctx.lr = 0x82B0CAB4;
	sub_82A82960(ctx, base);
loc_82B0CAB4:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x82b0cad4
	if (ctx.cr6.eq) goto loc_82B0CAD4;
	// bl 0x82a82960
	ctx.lr = 0x82B0CAD4;
	sub_82A82960(ctx, base);
loc_82B0CAD4:
	// clrlwi r11,r30,21
	ctx.r11.u64 = ctx.r30.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82b0cae4
	if (ctx.cr6.lt) goto loc_82B0CAE4;
	// bl 0x82a82960
	ctx.lr = 0x82B0CAE4;
	sub_82A82960(ctx, base);
loc_82B0CAE4:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0CB0C;
	sub_82B0BDA8(ctx, base);
loc_82B0CB0C:
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b0cc54
	goto loc_82B0CC54;
loc_82B0CB14:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r30,r11,21
	ctx.r30.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4608
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4608, ctx.xer);
	// beq cr6,0x82b0cb38
	if (ctx.cr6.eq) goto loc_82B0CB38;
	// bl 0x82a82960
	ctx.lr = 0x82B0CB38;
	sub_82A82960(ctx, base);
loc_82B0CB38:
	// cmplwi cr6,r30,2048
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2048, ctx.xer);
	// blt cr6,0x82b0cb44
	if (ctx.cr6.lt) goto loc_82B0CB44;
	// bl 0x82a82960
	ctx.lr = 0x82B0CB44;
	sub_82A82960(ctx, base);
loc_82B0CB44:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82b0cb60
	if (ctx.cr6.lt) goto loc_82B0CB60;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0cb60
	if (!ctx.cr6.lt) goto loc_82B0CB60;
	// bl 0x82a82960
	ctx.lr = 0x82B0CB60;
	sub_82A82960(ctx, base);
loc_82B0CB60:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82b0c9dc
	goto loc_82B0C9DC;
loc_82B0CB70:
	// lwz r11,24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r11.u32);
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0cb94
	if (!ctx.cr6.eq) goto loc_82B0CB94;
	// bl 0x82a82960
	ctx.lr = 0x82B0CB94;
	sub_82A82960(ctx, base);
loc_82B0CB94:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r28,r11,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r28,14
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 14, ctx.xer);
	// beq cr6,0x82b0cbb4
	if (ctx.cr6.eq) goto loc_82B0CBB4;
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// beq cr6,0x82b0cbbc
	if (ctx.cr6.eq) goto loc_82B0CBBC;
	// bl 0x82a82960
	ctx.lr = 0x82B0CBB4;
	sub_82A82960(ctx, base);
loc_82B0CBB4:
	// cmplwi cr6,r28,19
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 19, ctx.xer);
	// bne cr6,0x82b0cbc8
	if (!ctx.cr6.eq) goto loc_82B0CBC8;
loc_82B0CBBC:
	// li r4,52
	ctx.r4.s64 = 52;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82b0cc44
	goto loc_82B0CC44;
loc_82B0CBC8:
	// li r11,53
	ctx.r11.s64 = 53;
	// clrlwi r28,r30,21
	ctx.r28.u64 = ctx.r30.u32 & 0x7FF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r30,0,4,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// lis r10,3328
	ctx.r10.s64 = 218103808;
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b0cc54
	if (!ctx.cr6.eq) goto loc_82B0CC54;
	// li r11,39
	ctx.r11.s64 = 39;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r4,24(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// bl 0x82b0ba70
	ctx.lr = 0x82B0CC04;
	sub_82B0BA70(ctx, base);
	// stw r27,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r27.u32);
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// b 0x82b0cc54
	goto loc_82B0CC54;
loc_82B0CC10:
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x82b0cc30
	if (ctx.cr6.eq) goto loc_82B0CC30;
	// bl 0x82a82960
	ctx.lr = 0x82B0CC30;
	sub_82A82960(ctx, base);
loc_82B0CC30:
	// clrlwi. r11,r31,21
	ctx.r11.u64 = ctx.r31.u32 & 0x7FF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0cc3c
	if (ctx.cr0.eq) goto loc_82B0CC3C;
	// bl 0x82a82960
	ctx.lr = 0x82B0CC3C;
	sub_82A82960(ctx, base);
loc_82B0CC3C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B0CC44:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0b6d8
	ctx.lr = 0x82B0CC4C;
	sub_82B0B6D8(ctx, base);
	// b 0x82b0cb0c
	goto loc_82B0CB0C;
loc_82B0CC50:
	// bl 0x82a82960
	ctx.lr = 0x82B0CC54;
	sub_82A82960(ctx, base);
loc_82B0CC54:
	// stw r26,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r26.u32);
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CC64"))) PPC_WEAK_FUNC(sub_82B0CC64);
PPC_FUNC_IMPL(__imp__sub_82B0CC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CC68"))) PPC_WEAK_FUNC(sub_82B0CC68);
PPC_FUNC_IMPL(__imp__sub_82B0CC68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B0CC70;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// clrlwi r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r27,1
	ctx.r27.s64 = 1;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b0ccfc
	if (ctx.cr6.eq) goto loc_82B0CCFC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82b0ccf4
	if (ctx.cr6.eq) goto loc_82B0CCF4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82b0ccec
	if (ctx.cr6.eq) goto loc_82B0CCEC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82b0cce4
	if (ctx.cr6.eq) goto loc_82B0CCE4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82b0ccdc
	if (ctx.cr6.eq) goto loc_82B0CCDC;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82b0ccd4
	if (ctx.cr6.eq) goto loc_82B0CCD4;
	// bl 0x82a82960
	ctx.lr = 0x82B0CCD0;
	sub_82A82960(ctx, base);
	// b 0x82b0cd04
	goto loc_82B0CD04;
loc_82B0CCD4:
	// rlwimi r31,r27,18,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 18) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x82b0cd04
	goto loc_82B0CD04;
loc_82B0CCDC:
	// rlwinm r31,r31,0,16,12
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFF8FFFF;
	// b 0x82b0cd04
	goto loc_82B0CD04;
loc_82B0CCE4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82b0cd00
	goto loc_82B0CD00;
loc_82B0CCEC:
	// rlwimi r31,r27,17,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 17) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x82b0cd04
	goto loc_82B0CD04;
loc_82B0CCF4:
	// rlwimi r31,r27,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r27.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
	// b 0x82b0cd04
	goto loc_82B0CD04;
loc_82B0CCFC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82B0CD00:
	// rlwimi r31,r11,16,13,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x70000) | (ctx.r31.u64 & 0xFFFFFFFFFFF8FFFF);
loc_82B0CD04:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// addi r31,r28,4
	ctx.r31.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmpwi cr6,r30,86
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 86, ctx.xer);
	// bne cr6,0x82b0cdb4
	if (!ctx.cr6.eq) goto loc_82B0CDB4;
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,4864
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4864, ctx.xer);
	// beq cr6,0x82b0cd3c
	if (ctx.cr6.eq) goto loc_82B0CD3C;
	// bl 0x82a82960
	ctx.lr = 0x82B0CD3C;
	sub_82A82960(ctx, base);
loc_82B0CD3C:
	// rlwinm r10,r30,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// lis r11,15
	ctx.r11.s64 = 983040;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b0cd60
	if (!ctx.cr6.eq) goto loc_82B0CD60;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82b0cdac
	goto loc_82B0CDAC;
loc_82B0CD60:
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// rlwinm. r8,r10,0,15,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// addi r9,r31,4
	ctx.r9.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82b0cd80
	if (ctx.cr0.eq) goto loc_82B0CD80;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B0CD80:
	// rlwinm. r8,r10,0,14,14
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0cd8c
	if (ctx.cr0.eq) goto loc_82B0CD8C;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82B0CD8C:
	// rlwinm. r8,r10,0,13,13
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0cd98
	if (ctx.cr0.eq) goto loc_82B0CD98;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82B0CD98:
	// rlwinm. r10,r10,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0cda4
	if (ctx.cr0.eq) goto loc_82B0CDA4;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82B0CDA4:
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82B0CDAC:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// b 0x82b0cdc8
	goto loc_82B0CDC8;
loc_82B0CDB4:
	// cmpwi cr6,r30,52
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 52, ctx.xer);
	// bne cr6,0x82b0cdc8
	if (!ctx.cr6.eq) goto loc_82B0CDC8;
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r26)
	PPC_STORE_U32(ctx.r26.u32 + 24, ctx.r11.u32);
loc_82B0CDC8:
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0ce24
	if (ctx.cr0.eq) goto loc_82B0CE24;
loc_82B0CDD4:
	// rlwinm r11,r30,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2000;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0ce00
	if (!ctx.cr6.eq) goto loc_82B0CE00;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0cdf8
	if (!ctx.cr0.eq) goto loc_82B0CDF8;
	// bl 0x82a82960
	ctx.lr = 0x82B0CDF8;
	sub_82A82960(ctx, base);
loc_82B0CDF8:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_82B0CE00:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0CE14;
	sub_82B0BDA8(ctx, base);
	// lwz r30,0(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0cdd4
	if (!ctx.cr0.eq) goto loc_82B0CDD4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0CE24:
	// stw r29,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r29.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CE34"))) PPC_WEAK_FUNC(sub_82B0CE34);
PPC_FUNC_IMPL(__imp__sub_82B0CE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CE38"))) PPC_WEAK_FUNC(sub_82B0CE38);
PPC_FUNC_IMPL(__imp__sub_82B0CE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B0CE40;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0ce68
	if (ctx.cr6.lt) goto loc_82B0CE68;
	// bl 0x82a82960
	ctx.lr = 0x82B0CE68;
	sub_82A82960(ctx, base);
loc_82B0CE68:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// ori r10,r10,259
	ctx.r10.u64 = ctx.r10.u64 | 259;
	// addi r26,r11,4
	ctx.r26.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r28,r31,21
	ctx.r28.u64 = ctx.r31.u32 & 0x7FF;
	// bgt cr6,0x82b0cf44
	if (ctx.cr6.gt) goto loc_82B0CF44;
	// rlwinm. r9,r31,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r31,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF0000;
	// li r10,256
	ctx.r10.s64 = 256;
	// beq 0x82b0cea4
	if (ctx.cr0.eq) goto loc_82B0CEA4;
	// li r10,257
	ctx.r10.s64 = 257;
loc_82B0CEA4:
	// rlwinm. r9,r11,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0ceb0
	if (ctx.cr0.eq) goto loc_82B0CEB0;
	// ori r10,r10,4
	ctx.r10.u64 = ctx.r10.u64 | 4;
loc_82B0CEB0:
	// rlwinm. r11,r11,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0cebc
	if (ctx.cr0.eq) goto loc_82B0CEBC;
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
loc_82B0CEBC:
	// ori r9,r10,192
	ctx.r9.u64 = ctx.r10.u64 | 192;
	// rlwinm. r11,r31,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82b0cefc
	if (ctx.cr0.eq) goto loc_82B0CEFC;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0cee8
	if (ctx.cr0.eq) goto loc_82B0CEE8;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
	// b 0x82b0cef0
	goto loc_82B0CEF0;
loc_82B0CEE8:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r10,r10,5392
	ctx.r10.s64 = ctx.r10.s64 + 5392;
loc_82B0CEF0:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_82B0CEFC:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// or r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 | ctx.r9.u64;
	// rlwimi r11,r31,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x82b0cf18
	if (ctx.cr6.eq) goto loc_82B0CF18;
	// bl 0x82a82960
	ctx.lr = 0x82B0CF18;
	sub_82A82960(ctx, base);
loc_82B0CF18:
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// li r10,71
	ctx.r10.s64 = 71;
	// oris r9,r11,81
	ctx.r9.u64 = ctx.r11.u64 | 5308416;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// oris r11,r11,17
	ctx.r11.u64 = ctx.r11.u64 | 1114112;
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// stwu r29,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r30.u32 = ea;
	// stwu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r30.u32 = ea;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82b0cfb0
	goto loc_82B0CFB0;
loc_82B0CF44:
	// lwz r28,0(r26)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// rlwimi r11,r28,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x82b0cf64
	if (ctx.cr6.eq) goto loc_82B0CF64;
	// bl 0x82a82960
	ctx.lr = 0x82B0CF64;
	sub_82A82960(ctx, base);
loc_82B0CF64:
	// li r11,71
	ctx.r11.s64 = 71;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0CF84;
	sub_82B0BC88(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0CF9C;
	sub_82B0BDA8(ctx, base);
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0cfb0
	if (ctx.cr6.eq) goto loc_82B0CFB0;
	// bl 0x82a82960
	ctx.lr = 0x82B0CFB0;
	sub_82A82960(ctx, base);
loc_82B0CFB0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// stw r26,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0CFC4"))) PPC_WEAK_FUNC(sub_82B0CFC4);
PPC_FUNC_IMPL(__imp__sub_82B0CFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0CFC8"))) PPC_WEAK_FUNC(sub_82B0CFC8);
PPC_FUNC_IMPL(__imp__sub_82B0CFC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B0CFD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// lwz r31,0(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzu r10,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// rlwinm r27,r11,0,3,3
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d004
	if (!ctx.cr0.eq) goto loc_82B0D004;
	// bl 0x82a82960
	ctx.lr = 0x82B0D004;
	sub_82A82960(ctx, base);
loc_82B0D004:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r24,r30,4
	ctx.r24.s64 = ctx.r30.s64 + 4;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b0d044
	if (ctx.cr6.eq) goto loc_82B0D044;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d02c
	if (!ctx.cr0.eq) goto loc_82B0D02C;
	// bl 0x82a82960
	ctx.lr = 0x82B0D02C;
	sub_82A82960(ctx, base);
loc_82B0D02C:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82b0d038
	if (!ctx.cr6.lt) goto loc_82B0D038;
	// bl 0x82a82960
	ctx.lr = 0x82B0D038;
	sub_82A82960(ctx, base);
loc_82B0D038:
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// b 0x82b0d048
	goto loc_82B0D048;
loc_82B0D044:
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0D048:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b0d064
	if (ctx.cr6.gt) goto loc_82B0D064;
	// clrlwi r3,r29,21
	ctx.r3.u64 = ctx.r29.u32 & 0x7FF;
	// li r9,17
	ctx.r9.s64 = 17;
	// b 0x82b0d078
	goto loc_82B0D078;
loc_82B0D064:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0D074;
	sub_82B0BB08(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0D078:
	// cmplw cr6,r26,r30
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82b0d0a4
	if (!ctx.cr6.lt) goto loc_82B0D0A4;
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r11,r9,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r9,55
	ctx.r9.s64 = 55;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r10,21008
	ctx.r10.s64 = 21008;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// b 0x82b0d1a0
	goto loc_82B0D1A0;
loc_82B0D0A4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b0d190
	if (ctx.cr6.eq) goto loc_82B0D190;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r11,r11,13
	ctx.r11.u64 = ctx.r11.u64 | 13;
	// ori r8,r10,33
	ctx.r8.u64 = ctx.r10.u64 | 33;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r10,r25,0,8,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xFF0000;
	// lis r7,228
	ctx.r7.s64 = 14942208;
	// stwu r8,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82b0d134
	if (ctx.cr6.eq) goto loc_82B0D134;
	// rlwinm r8,r10,14,18,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 14) & 0x3FFF;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// rlwinm r6,r8,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// lis r5,68
	ctx.r5.s64 = 4456448;
	// addi r7,r7,5424
	ctx.r7.s64 = ctx.r7.s64 + 5424;
	// rlwinm r10,r10,18,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0xC;
	// rlwinm r4,r6,2,28,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xC;
	// ori r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 | 32;
	// rlwinm r6,r6,0,28,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xC;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// rlwinm r8,r8,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// lwzx r5,r4,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// lwzx r6,r6,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r7.u32);
	// lwzx r8,r8,r7
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r7,r5,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r8,r6,12,0,19
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// b 0x82b0d140
	goto loc_82B0D140;
loc_82B0D134:
	// lis r10,4
	ctx.r10.s64 = 262144;
	// ori r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 | 32;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B0D140:
	// rlwinm r10,r25,0,4,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0xF000000;
	// lis r8,3328
	ctx.r8.s64 = 218103808;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// lis r10,65
	ctx.r10.s64 = 4259840;
	// li r8,21845
	ctx.r8.s64 = 21845;
	// bne cr6,0x82b0d174
	if (!ctx.cr6.eq) goto loc_82B0D174;
	// clrlwi r9,r3,10
	ctx.r9.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// b 0x82b0d184
	goto loc_82B0D184;
loc_82B0D174:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_82B0D184:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// li r3,33
	ctx.r3.s64 = 33;
	// li r9,4
	ctx.r9.s64 = 4;
loc_82B0D190:
	// rlwimi r3,r9,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r11,55
	ctx.r11.s64 = 55;
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82B0D1A0:
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r24,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r24.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D1B8"))) PPC_WEAK_FUNC(sub_82B0D1B8);
PPC_FUNC_IMPL(__imp__sub_82B0D1B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B0D1C0;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r19,0(r7)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r3,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r3.u32);
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// stw r7,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r7.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rlwinm r14,r11,0,3,3
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d1f8
	if (!ctx.cr0.eq) goto loc_82B0D1F8;
	// bl 0x82a82960
	ctx.lr = 0x82B0D1F8;
	sub_82A82960(ctx, base);
loc_82B0D1F8:
	// lwz r24,0(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r20,r31,4
	ctx.r20.s64 = ctx.r31.s64 + 4;
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r15,r24
	ctx.r15.u64 = ctx.r24.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0d21c
	if (!ctx.cr6.eq) goto loc_82B0D21C;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x82b0d22c
	goto loc_82B0D22C;
loc_82B0D21C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// li r29,1
	ctx.r29.s64 = 1;
	// beq cr6,0x82b0d22c
	if (ctx.cr6.eq) goto loc_82B0D22C;
	// rlwinm r29,r24,10,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 10) & 0x1;
loc_82B0D22C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r22,r11,512
	ctx.r22.u64 = ctx.r11.u64 | 512;
	// ori r18,r10,33
	ctx.r18.u64 = ctx.r10.u64 | 33;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82b0d27c
	if (ctx.cr6.eq) goto loc_82B0D27C;
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d254
	if (!ctx.cr0.eq) goto loc_82B0D254;
	// bl 0x82a82960
	ctx.lr = 0x82B0D254;
	sub_82A82960(ctx, base);
loc_82B0D254:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82b0d260
	if (!ctx.cr6.lt) goto loc_82B0D260;
	// bl 0x82a82960
	ctx.lr = 0x82B0D260;
	sub_82A82960(ctx, base);
loc_82B0D260:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r16,0(r20)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
	// b 0x82b0d280
	goto loc_82B0D280;
loc_82B0D27C:
	// lwz r16,80(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0D280:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r21,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r21.u32);
	// beq 0x82b0d314
	if (ctx.cr0.eq) goto loc_82B0D314;
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82B0D2A0:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82b0d2ac
	if (ctx.cr6.lt) goto loc_82B0D2AC;
	// bl 0x82a82960
	ctx.lr = 0x82B0D2AC;
	sub_82A82960(ctx, base);
loc_82B0D2AC:
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// stwx r21,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r21.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0d2fc
	if (!ctx.cr6.eq) goto loc_82B0D2FC;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82b0d2e0
	if (ctx.cr6.gt) goto loc_82B0D2E0;
	// bl 0x82a82960
	ctx.lr = 0x82B0D2E0;
	sub_82A82960(ctx, base);
loc_82B0D2E0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d2f0
	if (!ctx.cr0.eq) goto loc_82B0D2F0;
	// bl 0x82a82960
	ctx.lr = 0x82B0D2F0;
	sub_82A82960(ctx, base);
loc_82B0D2F0:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82B0D2FC:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d2a0
	if (!ctx.cr0.eq) goto loc_82B0D2A0;
	// lwz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0D314:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// blt cr6,0x82b0d344
	if (ctx.cr6.lt) goto loc_82B0D344;
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82b0d330
	if (!ctx.cr6.lt) goto loc_82B0D330;
	// bl 0x82a82960
	ctx.lr = 0x82B0D330;
	sub_82A82960(ctx, base);
loc_82B0D330:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r26,r11,0,8,15
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF0000;
	// b 0x82b0d348
	goto loc_82B0D348;
loc_82B0D344:
	// clrlwi r31,r15,21
	ctx.r31.u64 = ctx.r15.u32 & 0x7FF;
loc_82B0D348:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r9,r19,4
	ctx.r9.s64 = ctx.r19.s64 + 4;
	// rlwinm. r27,r26,0,14,14
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lis r10,2048
	ctx.r10.s64 = 134217728;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// rlwimi r11,r29,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// beq 0x82b0d36c
	if (ctx.cr0.eq) goto loc_82B0D36C;
	// ori r10,r10,94
	ctx.r10.u64 = ctx.r10.u64 | 94;
	// b 0x82b0d370
	goto loc_82B0D370;
loc_82B0D36C:
	// ori r10,r10,93
	ctx.r10.u64 = ctx.r10.u64 | 93;
loc_82B0D370:
	// rlwimi r10,r11,16,7,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r10.u64 & 0xFFFFFFFFFE00FFFF);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// stw r10,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r10.u32);
	// bne cr6,0x82b0d3d8
	if (!ctx.cr6.eq) goto loc_82B0D3D8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b0d38c
	if (ctx.cr6.eq) goto loc_82B0D38C;
	// bl 0x82a82960
	ctx.lr = 0x82B0D38C;
	sub_82A82960(ctx, base);
loc_82B0D38C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0d3a0
	if (ctx.cr6.lt) goto loc_82B0D3A0;
	// bl 0x82a82960
	ctx.lr = 0x82B0D3A0;
	sub_82A82960(ctx, base);
loc_82B0D3A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0D3B0;
	sub_82B0BC88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,81
	ctx.r10.s64 = 81;
	// lis r9,128
	ctx.r9.s64 = 8388608;
	// rlwimi r31,r10,16,0,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r31.u64 & 0xFFFFFFFF0000FFFF);
	// ori r10,r9,12816
	ctx.r10.u64 = ctx.r9.u64 | 12816;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82b0d52c
	goto loc_82B0D52C;
loc_82B0D3D8:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// bne cr6,0x82b0d42c
	if (!ctx.cr6.eq) goto loc_82B0D42C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r17,r11
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0d3f4
	if (ctx.cr6.eq) goto loc_82B0D3F4;
	// bl 0x82a82960
	ctx.lr = 0x82B0D3F4;
	sub_82A82960(ctx, base);
loc_82B0D3F4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b0d400
	if (ctx.cr6.eq) goto loc_82B0D400;
	// bl 0x82a82960
	ctx.lr = 0x82B0D400;
	sub_82A82960(ctx, base);
loc_82B0D400:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0D410;
	sub_82B0BC88(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0D428;
	sub_82B0BDA8(ctx, base);
	// b 0x82b0d52c
	goto loc_82B0D52C;
loc_82B0D42C:
	// rlwinm r29,r30,0,8,15
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x82b0d440
	if (ctx.cr6.eq) goto loc_82B0D440;
	// bl 0x82a82960
	ctx.lr = 0x82B0D440;
	sub_82A82960(ctx, base);
loc_82B0D440:
	// cmplw cr6,r17,r22
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r22.u32, ctx.xer);
	// bge cr6,0x82b0d44c
	if (!ctx.cr6.lt) goto loc_82B0D44C;
	// bl 0x82a82960
	ctx.lr = 0x82B0D44C;
	sub_82A82960(ctx, base);
loc_82B0D44C:
	// lis r28,228
	ctx.r28.s64 = 14942208;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b0d474
	if (ctx.cr6.eq) goto loc_82B0D474;
	// oris r24,r24,15
	ctx.r24.u64 = ctx.r24.u64 | 983040;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// bne cr6,0x82b0d474
	if (!ctx.cr6.eq) goto loc_82B0D474;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r24,r12
	ctx.r11.u64 = ctx.r24.u64 & ctx.r12.u64;
	// or r24,r11,r18
	ctx.r24.u64 = ctx.r11.u64 | ctx.r18.u64;
loc_82B0D474:
	// rlwinm. r11,r26,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0d480
	if (ctx.cr0.eq) goto loc_82B0D480;
	// lis r30,96
	ctx.r30.s64 = 6291456;
loc_82B0D480:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0D490;
	sub_82B0BC88(ctx, base);
	// lwz r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0D4AC;
	sub_82B0BDA8(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b0d4e8
	if (ctx.cr6.eq) goto loc_82B0D4E8;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b0d4c4
	if (ctx.cr0.eq) goto loc_82B0D4C4;
	// bl 0x82a82960
	ctx.lr = 0x82B0D4C4;
	sub_82A82960(ctx, base);
loc_82B0D4C4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b0d4d0
	if (ctx.cr6.eq) goto loc_82B0D4D0;
	// bl 0x82a82960
	ctx.lr = 0x82B0D4D0;
	sub_82A82960(ctx, base);
loc_82B0D4D0:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0D4E8;
	sub_82B0BDA8(ctx, base);
loc_82B0D4E8:
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq cr6,0x82b0d50c
	if (ctx.cr6.eq) goto loc_82B0D50C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b0bff8
	ctx.lr = 0x82B0D508;
	sub_82B0BFF8(ctx, base);
	// b 0x82b0d52c
	goto loc_82B0D52C;
loc_82B0D50C:
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b0d52c
	if (ctx.cr6.eq) goto loc_82B0D52C;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82b0c1d8
	ctx.lr = 0x82B0D52C;
	sub_82B0C1D8(ctx, base);
loc_82B0D52C:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,276(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r20,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r20.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D548"))) PPC_WEAK_FUNC(sub_82B0D548);
PPC_FUNC_IMPL(__imp__sub_82B0D548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B0D550;
	__savegprlr_16(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0d578
	if (!ctx.cr6.eq) goto loc_82B0D578;
	// li r21,0
	ctx.r21.s64 = 0;
	// b 0x82b0d584
	goto loc_82B0D584;
loc_82B0D578:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r21,r11,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82B0D584:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r30,r11,512
	ctx.r30.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82b0d598
	if (!ctx.cr6.lt) goto loc_82B0D598;
	// bl 0x82a82960
	ctx.lr = 0x82B0D598;
	sub_82A82960(ctx, base);
loc_82B0D598:
	// lwz r31,0(r17)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r26,0(r16)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwzu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// rlwinm r20,r11,0,3,3
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	// rlwinm. r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r22,r11,16
	ctx.r22.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82b0d5bc
	if (!ctx.cr0.eq) goto loc_82B0D5BC;
	// bl 0x82a82960
	ctx.lr = 0x82B0D5BC;
	sub_82A82960(ctx, base);
loc_82B0D5BC:
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,15
	ctx.r11.s64 = 983040;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
	// ori r24,r11,33
	ctx.r24.u64 = ctx.r11.u64 | 33;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// mr r18,r27
	ctx.r18.u64 = ctx.r27.u64;
	// beq cr6,0x82b0d610
	if (ctx.cr6.eq) goto loc_82B0D610;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d5e8
	if (!ctx.cr0.eq) goto loc_82B0D5E8;
	// bl 0x82a82960
	ctx.lr = 0x82B0D5E8;
	sub_82A82960(ctx, base);
loc_82B0D5E8:
	// cmplw cr6,r28,r30
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82b0d5f4
	if (ctx.cr6.gt) goto loc_82B0D5F4;
	// bl 0x82a82960
	ctx.lr = 0x82B0D5F4;
	sub_82A82960(ctx, base);
loc_82B0D5F4:
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// lwz r19,0(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
	// b 0x82b0d614
	goto loc_82B0D614;
loc_82B0D610:
	// lwz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0D614:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0d68c
	if (ctx.cr0.eq) goto loc_82B0D68C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B0D628:
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stwx r9,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r9.u32);
	// rlwinm r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// bne cr6,0x82b0d66c
	if (!ctx.cr6.eq) goto loc_82B0D66C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d660
	if (!ctx.cr0.eq) goto loc_82B0D660;
	// bl 0x82a82960
	ctx.lr = 0x82B0D660;
	sub_82A82960(ctx, base);
loc_82B0D660:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82B0D66C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b0d628
	if (!ctx.cr0.eq) goto loc_82B0D628;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// ble cr6,0x82b0d68c
	if (!ctx.cr6.gt) goto loc_82B0D68C;
	// bl 0x82a82960
	ctx.lr = 0x82B0D68C;
	sub_82A82960(ctx, base);
loc_82B0D68C:
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r8,r26,4
	ctx.r8.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r22,95
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 95, ctx.xer);
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// rlwimi r11,r21,8,23,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r21.u32, 8) & 0x100) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFEFF);
	// bne cr6,0x82b0d6b4
	if (!ctx.cr6.eq) goto loc_82B0D6B4;
	// lis r9,2560
	ctx.r9.s64 = 167772160;
	// ori r9,r9,94
	ctx.r9.u64 = ctx.r9.u64 | 94;
	// b 0x82b0d6bc
	goto loc_82B0D6BC;
loc_82B0D6B4:
	// lis r9,2048
	ctx.r9.s64 = 134217728;
	// ori r9,r9,95
	ctx.r9.u64 = ctx.r9.u64 | 95;
loc_82B0D6BC:
	// rlwimi r9,r11,16,7,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1FF0000) | (ctx.r9.u64 & 0xFFFFFFFFFE00FFFF);
	// rlwinm r28,r10,0,8,15
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF0000;
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// lis r26,228
	ctx.r26.s64 = 14942208;
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82b0d6f0
	if (ctx.cr6.eq) goto loc_82B0D6F0;
	// oris r27,r27,15
	ctx.r27.u64 = ctx.r27.u64 | 983040;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82b0d6f0
	if (!ctx.cr6.eq) goto loc_82B0D6F0;
	// lis r12,-28673
	ctx.r12.s64 = -1879113728;
	// ori r12,r12,57377
	ctx.r12.u64 = ctx.r12.u64 | 57377;
	// and r11,r27,r12
	ctx.r11.u64 = ctx.r27.u64 & ctx.r12.u64;
	// or r27,r11,r24
	ctx.r27.u64 = ctx.r11.u64 | ctx.r24.u64;
loc_82B0D6F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0D700;
	sub_82B0BC88(ctx, base);
	// lwz r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0D720;
	sub_82B0BDA8(ctx, base);
	// cmplwi cr6,r22,95
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 95, ctx.xer);
	// bne cr6,0x82b0d744
	if (!ctx.cr6.eq) goto loc_82B0D744;
	// andis. r11,r31,2816
	ctx.r11.u64 = ctx.r31.u64 & 184549376;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b0d738
	if (ctx.cr0.eq) goto loc_82B0D738;
	// bl 0x82a82960
	ctx.lr = 0x82B0D738;
	sub_82A82960(ctx, base);
loc_82B0D738:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82b0d770
	goto loc_82B0D770;
loc_82B0D744:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// beq cr6,0x82b0d750
	if (ctx.cr6.eq) goto loc_82B0D750;
	// bl 0x82a82960
	ctx.lr = 0x82B0D750;
	sub_82A82960(ctx, base);
loc_82B0D750:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,120(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0D768;
	sub_82B0BDA8(ctx, base);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82B0D770:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0D780;
	sub_82B0BDA8(ctx, base);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82b0d7a4
	if (ctx.cr6.eq) goto loc_82B0D7A4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82b0bff8
	ctx.lr = 0x82B0D7A0;
	sub_82B0BFF8(ctx, base);
	// b 0x82b0d7c4
	goto loc_82B0D7C4;
loc_82B0D7A4:
	// cmplw cr6,r28,r26
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82b0d7c4
	if (ctx.cr6.eq) goto loc_82B0D7C4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82b0c1d8
	ctx.lr = 0x82B0D7C4;
	sub_82B0C1D8(ctx, base);
loc_82B0D7C4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r29,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r29.u32);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0D7D8"))) PPC_WEAK_FUNC(sub_82B0D7D8);
PPC_FUNC_IMPL(__imp__sub_82B0D7D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B0D7E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0d80c
	if (!ctx.cr6.eq) goto loc_82B0D80C;
	// mr r18,r17
	ctx.r18.u64 = ctx.r17.u64;
	// b 0x82b0d818
	goto loc_82B0D818;
loc_82B0D80C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r18,r11,27,31,31
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82B0D818:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0d82c
	if (ctx.cr6.lt) goto loc_82B0D82C;
	// bl 0x82a82960
	ctx.lr = 0x82B0D82C;
	sub_82A82960(ctx, base);
loc_82B0D82C:
	// lwz r30,0(r14)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r16,0(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0d848
	if (!ctx.cr0.eq) goto loc_82B0D848;
	// bl 0x82a82960
	ctx.lr = 0x82B0D848;
	sub_82A82960(ctx, base);
loc_82B0D848:
	// lwz r22,0(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwzu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// addi r15,r30,4
	ctx.r15.s64 = ctx.r30.s64 + 4;
	// rlwimi r11,r22,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r22.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r30,r22,21
	ctx.r30.u64 = ctx.r22.u32 & 0x7FF;
	// rlwinm r29,r11,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x82b0d870
	if (ctx.cr6.eq) goto loc_82B0D870;
	// bl 0x82a82960
	ctx.lr = 0x82B0D870;
	sub_82A82960(ctx, base);
loc_82B0D870:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0D884;
	sub_82B0B5D8(ctx, base);
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r11,80
	ctx.r11.s64 = 80;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r9,r23,16,10,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0x3F0000;
	// rlwimi r11,r30,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// or r20,r9,r10
	ctx.r20.u64 = ctx.r9.u64 | ctx.r10.u64;
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stwu r20,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r31.u32 = ea;
	// lis r11,128
	ctx.r11.s64 = 8388608;
	// rlwimi r8,r23,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r23.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r24,33
	ctx.r24.s64 = 33;
	// or r21,r8,r10
	ctx.r21.u64 = ctx.r8.u64 | ctx.r10.u64;
	// ori r10,r11,12816
	ctx.r10.u64 = ctx.r11.u64 | 12816;
	// stwu r21,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r31.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r11,r28,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// lis r8,228
	ctx.r8.s64 = 14942208;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// stwu r24,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r31.u32 = ea;
	// stwu r21,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r31.u32 = ea;
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x82b0d934
	if (ctx.cr6.eq) goto loc_82B0D934;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,5424
	ctx.r9.s64 = ctx.r9.s64 + 5424;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r25,r9,r11
	ctx.r25.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x82b0d938
	goto loc_82B0D938;
loc_82B0D934:
	// li r25,12816
	ctx.r25.s64 = 12816;
loc_82B0D938:
	// rlwinm r3,r28,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF000000;
	// bl 0x82b0b488
	ctx.lr = 0x82B0D940;
	sub_82B0B488(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0D954;
	sub_82B0BB08(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82b0d97c
	if (!ctx.cr6.eq) goto loc_82B0D97C;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12816, ctx.xer);
	// bne cr6,0x82b0d97c
	if (!ctx.cr6.eq) goto loc_82B0D97C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82b0d99c
	goto loc_82B0D99C;
loc_82B0D97C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r29,r3,16
	ctx.r29.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r9,r27,r25
	ctx.r9.u64 = ctx.r27.u64 | ctx.r25.u64;
	// or r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 | ctx.r29.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
loc_82B0D99C:
	// addi r10,r30,8
	ctx.r10.s64 = ctx.r30.s64 + 8;
	// clrlwi r26,r11,26
	ctx.r26.u64 = ctx.r11.u32 & 0x3F;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// clrlwi r9,r30,16
	ctx.r9.u64 = ctx.r30.u32 & 0xFFFF;
	// oris r8,r10,1
	ctx.r8.u64 = ctx.r10.u64 | 65536;
	// oris r9,r9,81
	ctx.r9.u64 = ctx.r9.u64 | 5308416;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// stwu r17,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r17.u32);
	ctx.r11.u32 = ea;
	// stwu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r24.u32);
	ctx.r11.u32 = ea;
	// stwu r21,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r21.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82b0d9f8
	if (!ctx.cr6.eq) goto loc_82B0D9F8;
	// cmplwi cr6,r25,12816
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 12816, ctx.xer);
	// bne cr6,0x82b0d9f8
	if (!ctx.cr6.eq) goto loc_82B0D9F8;
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// b 0x82b0da10
	goto loc_82B0DA10;
loc_82B0D9F8:
	// rlwinm r8,r26,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// or r7,r27,r25
	ctx.r7.u64 = ctx.r27.u64 | ctx.r25.u64;
	// oris r8,r8,64
	ctx.r8.u64 = ctx.r8.u64 | 4194304;
	// or r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 | ctx.r29.u64;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
loc_82B0DA10:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// oris r10,r10,65
	ctx.r10.u64 = ctx.r10.u64 | 4259840;
	// li r8,50
	ctx.r8.s64 = 50;
	// li r28,4369
	ctx.r28.s64 = 4369;
	// cmpwi cr6,r23,4
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 4, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// li r8,93
	ctx.r8.s64 = 93;
	// rlwimi r10,r18,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r18.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// rlwimi r8,r10,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r28,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// beq cr6,0x82b0da5c
	if (ctx.cr6.eq) goto loc_82B0DA5C;
	// bl 0x82a82960
	ctx.lr = 0x82B0DA5C;
	sub_82A82960(ctx, base);
loc_82B0DA5C:
	// cmplwi cr6,r16,67
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 67, ctx.xer);
	// bne cr6,0x82b0da80
	if (!ctx.cr6.eq) goto loc_82B0DA80;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0DA74;
	sub_82B0BC88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// b 0x82b0dbb8
	goto loc_82B0DBB8;
loc_82B0DA80:
	// cmplwi cr6,r16,68
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 68, ctx.xer);
	// bne cr6,0x82b0dbbc
	if (!ctx.cr6.eq) goto loc_82B0DBBC;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// stwu r20,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r20.u32);
	ctx.r31.u32 = ea;
	// lis r10,68
	ctx.r10.s64 = 4456448;
	// rlwinm r9,r26,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0xFFFF0000;
	// ori r7,r10,15
	ctx.r7.u64 = ctx.r10.u64 | 15;
	// li r10,272
	ctx.r10.s64 = 272;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// or r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 | ctx.r29.u64;
	// or r6,r27,r25
	ctx.r6.u64 = ctx.r27.u64 | ctx.r25.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// li r5,73
	ctx.r5.s64 = 73;
	// stwu r7,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r31.u32 = ea;
	// oris r11,r11,65
	ctx.r11.u64 = ctx.r11.u64 | 4259840;
	// rlwinm. r4,r22,0,8,11
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
	// stwu r6,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stwu r17,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r17.u32);
	ctx.r31.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// stwu r5,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r5.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// beq 0x82b0dafc
	if (ctx.cr0.eq) goto loc_82B0DAFC;
	// li r8,256
	ctx.r8.s64 = 256;
loc_82B0DAFC:
	// rlwinm. r10,r22,8,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
	// beq 0x82b0db38
	if (ctx.cr0.eq) goto loc_82B0DB38;
	// rlwinm. r9,r10,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0db24
	if (ctx.cr0.eq) goto loc_82B0DB24;
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,5408
	ctx.r9.s64 = ctx.r9.s64 + 5408;
	// b 0x82b0db2c
	goto loc_82B0DB2C;
loc_82B0DB24:
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// addi r9,r9,5392
	ctx.r9.s64 = ctx.r9.s64 + 5392;
loc_82B0DB2C:
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// rlwinm r9,r10,9,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
loc_82B0DB38:
	// or. r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 | ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82b0db5c
	if (!ctx.cr0.eq) goto loc_82B0DB5C;
	// rlwinm r10,r22,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF0000;
	// lis r9,15
	ctx.r9.s64 = 983040;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b0db5c
	if (!ctx.cr6.eq) goto loc_82B0DB5C;
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82b0dba8
	goto loc_82B0DBA8;
loc_82B0DB5C:
	// stw r21,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r21.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// rlwinm. r6,r22,0,15,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r9,r22,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0xF0000;
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
	// beq 0x82b0db78
	if (ctx.cr0.eq) goto loc_82B0DB78;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B0DB78:
	// rlwinm. r6,r9,0,14,14
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82b0db84
	if (ctx.cr0.eq) goto loc_82B0DB84;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
loc_82B0DB84:
	// rlwinm. r6,r9,0,13,13
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82b0db90
	if (ctx.cr0.eq) goto loc_82B0DB90;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
loc_82B0DB90:
	// rlwinm. r9,r9,0,12,12
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0db9c
	if (ctx.cr0.eq) goto loc_82B0DB9C;
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
loc_82B0DB9C:
	// or r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 | ctx.r8.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82B0DBA8:
	// stw r20,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r20.u32);
	// li r10,8738
	ctx.r10.s64 = 8738;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_82B0DBB8:
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
loc_82B0DBBC:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r15,0(r14)
	PPC_STORE_U32(ctx.r14.u32 + 0, ctx.r15.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0DBD0"))) PPC_WEAK_FUNC(sub_82B0DBD0);
PPC_FUNC_IMPL(__imp__sub_82B0DBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B0DBD8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r15,r7
	ctx.r15.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0dbfc
	if (ctx.cr6.eq) goto loc_82B0DBFC;
	// bl 0x82a82960
	ctx.lr = 0x82B0DBFC;
	sub_82A82960(ctx, base);
loc_82B0DBFC:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r30,0(r15)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0dc18
	if (!ctx.cr0.eq) goto loc_82B0DC18;
	// bl 0x82a82960
	ctx.lr = 0x82B0DC18;
	sub_82A82960(ctx, base);
loc_82B0DC18:
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r28.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// clrlwi r27,r29,21
	ctx.r27.u64 = ctx.r29.u32 & 0x7FF;
	// rlwimi r11,r29,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// rlwinm r3,r11,24,27,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// addi r17,r31,8
	ctx.r17.s64 = ctx.r31.s64 + 8;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0DC44;
	sub_82B0B5D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r19,33
	ctx.r19.s64 = 33;
	// or r22,r10,r9
	ctx.r22.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r19,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r19.u32);
	// rlwinm. r11,r29,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stwu r22,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r30.u32 = ea;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r30,4
	ctx.r9.s64 = ctx.r30.s64 + 4;
	// beq 0x82b0dc78
	if (ctx.cr0.eq) goto loc_82B0DC78;
	// li r8,256
	ctx.r8.s64 = 256;
loc_82B0DC78:
	// rlwinm. r11,r29,8,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 8) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82b0dcb4
	if (ctx.cr0.eq) goto loc_82B0DCB4;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0dca0
	if (ctx.cr0.eq) goto loc_82B0DCA0;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,5408
	ctx.r10.s64 = ctx.r10.s64 + 5408;
	// b 0x82b0dca8
	goto loc_82B0DCA8;
loc_82B0DCA0:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r10,r10,5392
	ctx.r10.s64 = ctx.r10.s64 + 5392;
loc_82B0DCA8:
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r10,r11,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xFFFFFE00;
loc_82B0DCB4:
	// rlwinm. r11,r29,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// or r18,r10,r8
	ctx.r18.u64 = ctx.r10.u64 | ctx.r8.u64;
	// addi r31,r9,4
	ctx.r31.s64 = ctx.r9.s64 + 4;
	// beq 0x82b0dcd0
	if (ctx.cr0.eq) goto loc_82B0DCD0;
	// ori r11,r18,1
	ctx.r11.u64 = ctx.r18.u64 | 1;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// b 0x82b0dcd4
	goto loc_82B0DCD4;
loc_82B0DCD0:
	// stw r18,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r18.u32);
loc_82B0DCD4:
	// rlwinm r11,r28,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFF0000;
	// lis r9,228
	ctx.r9.s64 = 14942208;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// addi r30,r10,5424
	ctx.r30.s64 = ctx.r10.s64 + 5424;
	// beq cr6,0x82b0dd30
	if (ctx.cr6.eq) goto loc_82B0DD30;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r9,r10,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r8,r9,2,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r9,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// or r21,r10,r11
	ctx.r21.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82b0dd34
	goto loc_82B0DD34;
loc_82B0DD30:
	// li r21,12816
	ctx.r21.s64 = 12816;
loc_82B0DD34:
	// rlwinm r26,r28,0,4,7
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xF000000;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b0b488
	ctx.lr = 0x82B0DD40;
	sub_82B0B488(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0DD54;
	sub_82B0BB08(ctx, base);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82b0dd80
	if (!ctx.cr6.eq) goto loc_82B0DD80;
	// cmplwi cr6,r21,12816
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 12816, ctx.xer);
	// bne cr6,0x82b0dd80
	if (!ctx.cr6.eq) goto loc_82B0DD80;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwinm r10,r11,16,10,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x3F0000;
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// or r11,r10,r25
	ctx.r11.u64 = ctx.r10.u64 | ctx.r25.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82b0dda4
	goto loc_82B0DDA4;
loc_82B0DD80:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r25,r3,16
	ctx.r25.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r9,r23,r21
	ctx.r9.u64 = ctx.r23.u64 | ctx.r21.u64;
	// or r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 | ctx.r25.u64;
	// clrlwi r24,r11,26
	ctx.r24.u64 = ctx.r11.u32 & 0x3F;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r31.u32 = ea;
loc_82B0DDA4:
	// rlwinm r11,r28,14,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 14) & 0x3F;
	// addi r10,r27,8
	ctx.r10.s64 = ctx.r27.s64 + 8;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// clrlwi r27,r10,16
	ctx.r27.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r9,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r28,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0xC;
	// oris r7,r27,1
	ctx.r7.u64 = ctx.r27.u64 | 65536;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// lwzx r9,r9,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r10,r10,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r14,r30,29
	ctx.r14.u64 = ctx.r30.u32 & 0x7;
	// bl 0x82b0b488
	ctx.lr = 0x82B0DE04;
	sub_82B0B488(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0DE18;
	sub_82B0BB08(ctx, base);
	// rlwinm r11,r30,4,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x70;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,64
	ctx.r9.s64 = 4194304;
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | ctx.r14.u64;
	// rlwimi r9,r10,16,10,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r9.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// clrlwi r10,r3,16
	ctx.r10.u64 = ctx.r3.u32 & 0xFFFF;
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | ctx.r14.u64;
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// rlwinm. r9,r29,0,14,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// or r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 | ctx.r26.u64;
	// or r11,r11,r14
	ctx.r11.u64 = ctx.r11.u64 | ctx.r14.u64;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stwu r19,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r19.u32);
	ctx.r31.u32 = ea;
	// stwu r22,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r22.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// beq 0x82b0de70
	if (ctx.cr0.eq) goto loc_82B0DE70;
	// ori r9,r18,4
	ctx.r9.u64 = ctx.r18.u64 | 4;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82b0de74
	goto loc_82B0DE74;
loc_82B0DE70:
	// stw r18,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r18.u32);
loc_82B0DE74:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82b0de98
	if (!ctx.cr6.eq) goto loc_82B0DE98;
	// cmplwi cr6,r21,12816
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 12816, ctx.xer);
	// bne cr6,0x82b0de98
	if (!ctx.cr6.eq) goto loc_82B0DE98;
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// b 0x82b0deb0
	goto loc_82B0DEB0;
loc_82B0DE98:
	// rlwinm r9,r24,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 16) & 0xFFFF0000;
	// or r8,r23,r21
	ctx.r8.u64 = ctx.r23.u64 | ctx.r21.u64;
	// oris r9,r9,64
	ctx.r9.u64 = ctx.r9.u64 | 4194304;
	// or r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 | ctx.r25.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
loc_82B0DEB0:
	// rlwinm r9,r30,28,29,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x7;
	// rlwinm r8,r30,0,25,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x70;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// oris r7,r27,65
	ctx.r7.u64 = ctx.r27.u64 | 4259840;
	// li r6,50
	ctx.r6.s64 = 50;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// or r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// or r10,r8,r9
	ctx.r10.u64 = ctx.r8.u64 | ctx.r9.u64;
	// or r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 | ctx.r26.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r15)
	PPC_STORE_U32(ctx.r15.u32 + 0, ctx.r11.u32);
	// stw r17,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r17.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0DF00"))) PPC_WEAK_FUNC(sub_82B0DF00);
PPC_FUNC_IMPL(__imp__sub_82B0DF00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B0DF08;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0df2c
	if (!ctx.cr6.eq) goto loc_82B0DF2C;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82b0df38
	goto loc_82B0DF38;
loc_82B0DF2C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82B0DF38:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0df4c
	if (ctx.cr6.lt) goto loc_82B0DF4C;
	// bl 0x82a82960
	ctx.lr = 0x82B0DF4C;
	sub_82A82960(ctx, base);
loc_82B0DF4C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r28,0(r23)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r29,r31,21
	ctx.r29.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwzu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r10,r10,0,19,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// addi r22,r11,4
	ctx.r22.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,768
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 768, ctx.xer);
	// beq cr6,0x82b0df80
	if (ctx.cr6.eq) goto loc_82B0DF80;
	// bl 0x82a82960
	ctx.lr = 0x82B0DF80;
	sub_82A82960(ctx, base);
loc_82B0DF80:
	// rlwimi r29,r25,8,23,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r25.u32, 8) & 0x100) | (ctx.r29.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r11,93
	ctx.r11.s64 = 93;
	// clrlwi r10,r29,23
	ctx.r10.u64 = ctx.r29.u32 & 0x1FF;
	// addi r9,r28,4
	ctx.r9.s64 = ctx.r28.s64 + 4;
	// rlwimi r11,r10,16,0,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r11.u64 & 0xFFFFFFFF0000FFFF);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0DFAC;
	sub_82B0BC88(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x82b0dfc4
	if (ctx.cr6.eq) goto loc_82B0DFC4;
	// bl 0x82a82960
	ctx.lr = 0x82B0DFC4;
	sub_82A82960(ctx, base);
loc_82B0DFC4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0DFD4;
	sub_82B0BB08(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r3,r30,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF000000;
	// bl 0x82b0b488
	ctx.lr = 0x82B0DFE0;
	sub_82B0B488(ctx, base);
	// rlwinm r31,r30,0,8,15
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFF0000;
	// lis r11,228
	ctx.r11.s64 = 14942208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0e044
	if (ctx.cr6.eq) goto loc_82B0E044;
	// bl 0x82a82960
	ctx.lr = 0x82B0DFF8;
	sub_82A82960(ctx, base);
	// rlwinm r11,r31,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 14) & 0x3FFF;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r10,r10,5424
	ctx.r10.s64 = ctx.r10.s64 + 5424;
	// rlwinm r11,r11,2,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xC;
	// rlwinm r7,r9,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xC;
	// rlwinm r8,r31,18,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 18) & 0xC;
	// rlwinm r9,r9,0,28,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r8,r8,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r7,r7,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r10,r10,12,0,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// b 0x82b0e048
	goto loc_82B0E048;
loc_82B0E044:
	// li r11,12816
	ctx.r11.s64 = 12816;
loc_82B0E048:
	// cmplwi cr6,r26,82
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 82, ctx.xer);
	// bne cr6,0x82b0e07c
	if (!ctx.cr6.eq) goto loc_82B0E07C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b0e07c
	if (!ctx.cr6.eq) goto loc_82B0E07C;
	// cmplwi cr6,r11,12816
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12816, ctx.xer);
	// bne cr6,0x82b0e07c
	if (!ctx.cr6.eq) goto loc_82B0E07C;
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r10,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82b0e0d8
	goto loc_82B0E0D8;
loc_82B0E07C:
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r8,64
	ctx.r8.s64 = 4194304;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r7,r29,16
	ctx.r7.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r8,r9,16,10,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x3F0000) | (ctx.r8.u64 & 0xFFFFFFFFFFC0FFFF);
	// cmplwi cr6,r26,69
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 69, ctx.xer);
	// or r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne cr6,0x82b0e0b8
	if (!ctx.cr6.eq) goto loc_82B0E0B8;
	// li r9,13312
	ctx.r9.s64 = 13312;
	// rlwinm r8,r11,20,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// rlwimi r9,r11,4,25,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x70) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF8F);
	// or r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 | ctx.r8.u64;
	// b 0x82b0e0cc
	goto loc_82B0E0CC;
loc_82B0E0B8:
	// cmplwi cr6,r26,70
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 70, ctx.xer);
	// bne cr6,0x82b0e0cc
	if (!ctx.cr6.eq) goto loc_82B0E0CC;
	// rlwinm r11,r11,28,25,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7F;
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// ori r11,r11,13312
	ctx.r11.u64 = ctx.r11.u64 | 13312;
loc_82B0E0CC:
	// or r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 | ctx.r30.u64;
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
loc_82B0E0D8:
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// stw r22,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r22.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0E0E8"))) PPC_WEAK_FUNC(sub_82B0E0E8);
PPC_FUNC_IMPL(__imp__sub_82B0E0E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B0E0F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0e114
	if (ctx.cr6.lt) goto loc_82B0E114;
	// bl 0x82a82960
	ctx.lr = 0x82B0E114;
	sub_82A82960(ctx, base);
loc_82B0E114:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r26.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r30,r10,21
	ctx.r30.u64 = ctx.r10.u32 & 0x7FF;
	// rlwinm r29,r9,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x82b0e148
	if (ctx.cr6.eq) goto loc_82B0E148;
	// bl 0x82a82960
	ctx.lr = 0x82B0E148;
	sub_82A82960(ctx, base);
loc_82B0E148:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r30,1
	ctx.r4.s64 = ctx.r30.s64 + 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0E15C;
	sub_82B0B5D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r11,34
	ctx.r11.s64 = 34;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// li r10,17
	ctx.r10.s64 = 17;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rlwimi r30,r10,16,0,15
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r30.u64 & 0xFFFFFFFF0000FFFF);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stwu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b0bda8
	ctx.lr = 0x82B0E1B0;
	sub_82B0BDA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r25,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r25.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0E1C4"))) PPC_WEAK_FUNC(sub_82B0E1C4);
PPC_FUNC_IMPL(__imp__sub_82B0E1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0E1C8"))) PPC_WEAK_FUNC(sub_82B0E1C8);
PPC_FUNC_IMPL(__imp__sub_82B0E1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B0E1D0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0e1f4
	if (ctx.cr6.lt) goto loc_82B0E1F4;
	// bl 0x82a82960
	ctx.lr = 0x82B0E1F4;
	sub_82A82960(ctx, base);
loc_82B0E1F4:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// clrlwi r29,r10,21
	ctx.r29.u64 = ctx.r10.u32 & 0x7FF;
	// rlwimi r9,r10,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// addi r25,r11,4
	ctx.r25.s64 = ctx.r11.s64 + 4;
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// rlwinm r28,r9,24,27,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// addi r11,r10,-73
	ctx.r11.s64 = ctx.r10.s64 + -73;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe. r30,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b0e238
	if (ctx.cr0.eq) goto loc_82B0E238;
	// addi r11,r10,-77
	ctx.r11.s64 = ctx.r10.s64 + -77;
	// b 0x82b0e240
	goto loc_82B0E240;
loc_82B0E238:
	// lhz r11,14(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 14);
	// addi r11,r11,-77
	ctx.r11.s64 = ctx.r11.s64 + -77;
loc_82B0E240:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// rlwinm r26,r11,27,31,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x82b0e254
	if (ctx.cr6.eq) goto loc_82B0E254;
	// bl 0x82a82960
	ctx.lr = 0x82B0E254;
	sub_82A82960(ctx, base);
loc_82B0E254:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0E274;
	sub_82B0B5D8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// subfic r9,r30,0
	ctx.xer.ca = ctx.r30.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r30.s64;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r8,r3,16
	ctx.r8.u64 = ctx.r3.u32 & 0xFFFF;
	// li r11,34
	ctx.r11.s64 = 34;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// clrlwi r30,r29,16
	ctx.r30.u64 = ctx.r29.u32 & 0xFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// oris r11,r30,17
	ctx.r11.u64 = ctx.r30.u64 | 1114112;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b0bda8
	ctx.lr = 0x82B0E2D4;
	sub_82B0BDA8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82b0e314
	if (ctx.cr6.eq) goto loc_82B0E314;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,68
	ctx.r9.s64 = 4456448;
	// li r8,71
	ctx.r8.s64 = 71;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// ori r9,r9,14
	ctx.r9.u64 = ctx.r9.u64 | 14;
	// oris r7,r30,81
	ctx.r7.u64 = ctx.r30.u64 | 5308416;
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// li r8,13107
	ctx.r8.s64 = 13107;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82b0e318
	goto loc_82B0E318;
loc_82B0E314:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0E318:
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// stw r25,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r25.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0E328"))) PPC_WEAK_FUNC(sub_82B0E328);
PPC_FUNC_IMPL(__imp__sub_82B0E328) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B0E330;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r16,r7
	ctx.r16.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0e354
	if (!ctx.cr6.eq) goto loc_82B0E354;
	// li r19,0
	ctx.r19.s64 = 0;
	// b 0x82b0e360
	goto loc_82B0E360;
loc_82B0E354:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r19,r11,27,31,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82B0E360:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,260
	ctx.r11.u64 = ctx.r11.u64 | 260;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0e374
	if (ctx.cr6.lt) goto loc_82B0E374;
	// bl 0x82a82960
	ctx.lr = 0x82B0E374;
	sub_82A82960(ctx, base);
loc_82B0E374:
	// lwz r10,0(r17)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// lwz r9,0(r16)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// addi r11,r10,4
	ctx.r11.s64 = ctx.r10.s64 + 4;
	// lhz r25,2(r10)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x82b0e398
	if (ctx.cr6.eq) goto loc_82B0E398;
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// li r28,1
	ctx.r28.s64 = 1;
	// bne cr6,0x82b0e39c
	if (!ctx.cr6.eq) goto loc_82B0E39C;
loc_82B0E398:
	// li r28,0
	ctx.r28.s64 = 0;
loc_82B0E39C:
	// lwz r22,0(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,34
	ctx.r10.s64 = 34;
	// lwzu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r26.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// addi r30,r9,4
	ctx.r30.s64 = ctx.r9.s64 + 4;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// addi r18,r11,4
	ctx.r18.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r22,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r22.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r27,r22,21
	ctx.r27.u64 = ctx.r22.u32 & 0x7FF;
	// rlwinm r24,r8,24,27,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// beq cr6,0x82b0e3d0
	if (ctx.cr6.eq) goto loc_82B0E3D0;
	// bl 0x82a82960
	ctx.lr = 0x82B0E3D0;
	sub_82A82960(ctx, base);
loc_82B0E3D0:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0E3E4;
	sub_82B0B5D8(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x82b0e3f8
	if (ctx.cr6.eq) goto loc_82B0E3F8;
	// bl 0x82a82960
	ctx.lr = 0x82B0E3F8;
	sub_82A82960(ctx, base);
loc_82B0E3F8:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r23,r29,16
	ctx.r23.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r31,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r20,r31,26
	ctx.r20.u64 = ctx.r31.u32 & 0x3F;
	// or r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 | ctx.r23.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// beq cr6,0x82b0e43c
	if (ctx.cr6.eq) goto loc_82B0E43C;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// beq cr6,0x82b0e434
	if (ctx.cr6.eq) goto loc_82B0E434;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x82b0e434
	if (ctx.cr6.eq) goto loc_82B0E434;
	// li r10,208
	ctx.r10.s64 = 208;
	// b 0x82b0e440
	goto loc_82B0E440;
loc_82B0E434:
	// li r10,144
	ctx.r10.s64 = 144;
	// b 0x82b0e440
	goto loc_82B0E440;
loc_82B0E43C:
	// li r10,228
	ctx.r10.s64 = 228;
loc_82B0E440:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// clrlwi r31,r27,16
	ctx.r31.u64 = ctx.r27.u32 & 0xFFFF;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// oris r9,r31,17
	ctx.r9.u64 = ctx.r31.u64 | 1114112;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0E474;
	sub_82B0BDA8(ctx, base);
	// lis r11,68
	ctx.r11.s64 = 4456448;
	// li r26,93
	ctx.r26.s64 = 93;
	// ori r30,r11,14
	ctx.r30.u64 = ctx.r11.u64 | 14;
	// cmplwi cr6,r25,72
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 72, ctx.xer);
	// beq cr6,0x82b0e50c
	if (ctx.cr6.eq) goto loc_82B0E50C;
	// cmplwi cr6,r25,74
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 74, ctx.xer);
	// beq cr6,0x82b0e50c
	if (ctx.cr6.eq) goto loc_82B0E50C;
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x82b0e4d8
	if (ctx.cr6.eq) goto loc_82B0E4D8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r25,84
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 84, ctx.xer);
	// bne cr6,0x82b0e554
	if (!ctx.cr6.eq) goto loc_82B0E554;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,71
	ctx.r9.s64 = 71;
	// lis r8,88
	ctx.r8.s64 = 5767168;
	// stw r10,156(r21)
	PPC_STORE_U32(ctx.r21.u32 + 156, ctx.r10.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// li r10,257
	ctx.r10.s64 = 257;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// lis r7,32
	ctx.r7.s64 = 2097152;
	// ori r9,r7,12816
	ctx.r9.u64 = ctx.r7.u64 | 12816;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// stwu r29,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// b 0x82b0e6cc
	goto loc_82B0E6CC;
loc_82B0E4D8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r9,71
	ctx.r9.s64 = 71;
	// li r8,16
	ctx.r8.s64 = 16;
	// addi r11,r10,8
	ctx.r11.s64 = ctx.r10.s64 + 8;
	// oris r7,r31,81
	ctx.r7.u64 = ctx.r31.u64 | 5308416;
	// li r6,13107
	ctx.r6.s64 = 13107;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// stwu r6,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82b0e564
	goto loc_82B0E564;
loc_82B0E50C:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// rlwimi r10,r19,8,23,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// clrlwi r10,r10,23
	ctx.r10.u64 = ctx.r10.u32 & 0x1FF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r9,r10,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0E540;
	sub_82B0BC88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// or r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 | ctx.r23.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82B0E554:
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// beq cr6,0x82b0e564
	if (ctx.cr6.eq) goto loc_82B0E564;
	// cmplwi cr6,r25,76
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 76, ctx.xer);
	// bne cr6,0x82b0e6d0
	if (!ctx.cr6.eq) goto loc_82B0E6D0;
loc_82B0E564:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// cmplwi cr6,r24,3
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 3, ctx.xer);
	// ori r10,r10,82
	ctx.r10.u64 = ctx.r10.u64 | 82;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82b0e580
	if (ctx.cr6.eq) goto loc_82B0E580;
	// bl 0x82a82960
	ctx.lr = 0x82B0E580;
	sub_82A82960(ctx, base);
loc_82B0E580:
	// li r11,21
	ctx.r11.s64 = 21;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r25,77
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 77, ctx.xer);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne cr6,0x82b0e5a8
	if (!ctx.cr6.eq) goto loc_82B0E5A8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// ori r11,r11,47768
	ctx.r11.u64 = ctx.r11.u64 | 47768;
	// b 0x82b0e688
	goto loc_82B0E688;
loc_82B0E5A8:
	// lwz r29,0(r18)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,228
	ctx.r10.s64 = 14942208;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// rlwinm r11,r29,0,8,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0e60c
	if (ctx.cr6.eq) goto loc_82B0E60C;
	// rlwinm r10,r11,14,18,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x3FFF;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r9,r9,5424
	ctx.r9.s64 = ctx.r9.s64 + 5424;
	// rlwinm r10,r10,2,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xC;
	// rlwinm r11,r11,18,28,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0xC;
	// rlwinm r7,r8,2,28,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xC;
	// rlwinm r8,r8,0,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r7,r7,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r10,r7,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// rlwinm r9,r9,12,0,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 12) & 0xFFFFF000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// or r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 | ctx.r11.u64;
	// b 0x82b0e610
	goto loc_82B0E610;
loc_82B0E60C:
	// li r28,12816
	ctx.r28.s64 = 12816;
loc_82B0E610:
	// rlwinm r3,r29,0,4,7
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xF000000;
	// bl 0x82b0b488
	ctx.lr = 0x82B0E618;
	sub_82B0B488(ctx, base);
	// andi. r11,r3,34952
	ctx.r11.u64 = ctx.r3.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r11,34952
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 34952, ctx.xer);
	// bne cr6,0x82b0e634
	if (!ctx.cr6.eq) goto loc_82B0E634;
	// lis r12,-1
	ctx.r12.s64 = -65536;
	// ori r12,r12,30583
	ctx.r12.u64 = ctx.r12.u64 | 30583;
	// and r30,r3,r12
	ctx.r30.u64 = ctx.r3.u64 & ctx.r12.u64;
	// b 0x82b0e638
	goto loc_82B0E638;
loc_82B0E634:
	// ori r30,r3,34952
	ctx.r30.u64 = ctx.r3.u64 | 34952;
loc_82B0E638:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0bb08
	ctx.lr = 0x82B0E648;
	sub_82B0BB08(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b0e66c
	if (!ctx.cr6.eq) goto loc_82B0E66C;
	// cmplwi cr6,r28,12816
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 12816, ctx.xer);
	// bne cr6,0x82b0e66c
	if (!ctx.cr6.eq) goto loc_82B0E66C;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r3,r10,16,10,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0x3F0000) | (ctx.r3.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r3,10
	ctx.r10.u64 = ctx.r3.u32 & 0x3FFFFF;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// b 0x82b0e68c
	goto loc_82B0E68C;
loc_82B0E66C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,64
	ctx.r10.s64 = 4194304;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// rlwimi r10,r11,16,10,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x3F0000) | (ctx.r10.u64 & 0xFFFFFFFFFFC0FFFF);
	// or r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 | ctx.r28.u64;
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82B0E688:
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
loc_82B0E68C:
	// rlwimi r27,r19,8,23,23
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r19.u32, 8) & 0x100) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFEFF);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r10,r20,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r9,r27,23
	ctx.r9.u64 = ctx.r27.u32 & 0x1FF;
	// or r31,r10,r23
	ctx.r31.u64 = ctx.r10.u64 | ctx.r23.u64;
	// rlwimi r26,r9,16,0,15
	ctx.r26.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r26.u64 & 0xFFFFFFFF0000FFFF);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stwu r26,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82b0bc88
	ctx.lr = 0x82B0E6C4;
	sub_82B0BC88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82B0E6CC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82B0E6D0:
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// stw r18,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r18.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0E6E0"))) PPC_WEAK_FUNC(sub_82B0E6E0);
PPC_FUNC_IMPL(__imp__sub_82B0E6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82B0E6E8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0e70c
	if (!ctx.cr6.eq) goto loc_82B0E70C;
	// li r20,0
	ctx.r20.s64 = 0;
	// b 0x82b0e718
	goto loc_82B0E718;
loc_82B0E70C:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r20,r11,27,31,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82B0E718:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,258
	ctx.r11.u64 = ctx.r11.u64 | 258;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0e73c
	if (ctx.cr6.eq) goto loc_82B0E73C;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,259
	ctx.r11.u64 = ctx.r11.u64 | 259;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b0e73c
	if (ctx.cr6.eq) goto loc_82B0E73C;
	// bl 0x82a82960
	ctx.lr = 0x82B0E73C;
	sub_82A82960(ctx, base);
loc_82B0E73C:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r28,0(r21)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lhz r25,2(r11)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lwzu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// clrlwi r30,r31,21
	ctx.r30.u64 = ctx.r31.u32 & 0x7FF;
	// rlwimi r10,r31,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r31.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// lwzu r24,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r24.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// rlwinm r29,r10,24,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// addi r23,r11,4
	ctx.r23.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r29,3
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 3, ctx.xer);
	// beq cr6,0x82b0e770
	if (ctx.cr6.eq) goto loc_82B0E770;
	// bl 0x82a82960
	ctx.lr = 0x82B0E770;
	sub_82A82960(ctx, base);
loc_82B0E770:
	// li r11,34
	ctx.r11.s64 = 34;
	// cmplwi cr6,r25,85
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 85, ctx.xer);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bne cr6,0x82b0e7a4
	if (!ctx.cr6.eq) goto loc_82B0E7A4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0E798;
	sub_82B0BC88(ctx, base);
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b0e7f0
	goto loc_82B0E7F0;
loc_82B0E7A4:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0b5d8
	ctx.lr = 0x82B0E7B8;
	sub_82B0B5D8(ctx, base);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 4, ctx.xer);
	// beq cr6,0x82b0e7cc
	if (ctx.cr6.eq) goto loc_82B0E7CC;
	// bl 0x82a82960
	ctx.lr = 0x82B0E7CC;
	sub_82A82960(ctx, base);
loc_82B0E7CC:
	// lis r11,64
	ctx.r11.s64 = 4194304;
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// rlwimi r11,r26,16,10,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r26.u32, 16) & 0x3F0000) | (ctx.r11.u64 & 0xFFFFFFFFFFC0FFFF);
	// li r9,41
	ctx.r9.s64 = 41;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stwu r9,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r28.u32 = ea;
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
loc_82B0E7F0:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// rlwimi r11,r24,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r24.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r11,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 768, ctx.xer);
	// beq cr6,0x82b0e808
	if (ctx.cr6.eq) goto loc_82B0E808;
	// bl 0x82a82960
	ctx.lr = 0x82B0E808;
	sub_82A82960(ctx, base);
loc_82B0E808:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b0bda8
	ctx.lr = 0x82B0E820;
	sub_82B0BDA8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// li r9,17
	ctx.r9.s64 = 17;
	// cmplwi cr6,r25,83
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 83, ctx.xer);
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne cr6,0x82b0e880
	if (!ctx.cr6.eq) goto loc_82B0E880;
	// rlwimi r30,r20,8,23,23
	ctx.r30.u64 = (__builtin_rotateleft32(ctx.r20.u32, 8) & 0x100) | (ctx.r30.u64 & 0xFFFFFFFFFFFFFEFF);
	// li r10,93
	ctx.r10.s64 = 93;
	// clrlwi r9,r30,23
	ctx.r9.u64 = ctx.r30.u32 & 0x1FF;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// rlwimi r10,r9,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0bc88
	ctx.lr = 0x82B0E86C;
	sub_82B0BC88(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r29,r26,16,10,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r26.u32, 16) & 0x3F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFC0FFFF);
	// clrlwi r10,r29,10
	ctx.r10.u64 = ctx.r29.u32 & 0x3FFFFF;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82B0E880:
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// stw r23,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r23.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0E890"))) PPC_WEAK_FUNC(sub_82B0E890);
PPC_FUNC_IMPL(__imp__sub_82B0E890) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82B0E898;
	__savegprlr_15(ctx, base);
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// addi r15,r9,-25872
	ctx.r15.s64 = ctx.r9.s64 + -25872;
	// addi r10,r10,-18480
	ctx.r10.s64 = ctx.r10.s64 + -18480;
	// li r11,75
	ctx.r11.s64 = 75;
	// lis r27,-32079
	ctx.r27.s64 = -2102329344;
	// stw r11,-25872(r9)
	PPC_STORE_U32(ctx.r9.u32 + -25872, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,4(r15)
	PPC_STORE_U32(ctx.r15.u32 + 4, ctx.r10.u32);
	// addi r11,r27,-15576
	ctx.r11.s64 = ctx.r27.s64 + -15576;
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r9,8(r15)
	PPC_STORE_U32(ctx.r15.u32 + 8, ctx.r9.u32);
	// lis r28,-32079
	ctx.r28.s64 = -2102329344;
	// stw r11,12(r15)
	PPC_STORE_U32(ctx.r15.u32 + 12, ctx.r11.u32);
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// stw r10,16(r15)
	PPC_STORE_U32(ctx.r15.u32 + 16, ctx.r10.u32);
	// addi r9,r28,-15576
	ctx.r9.s64 = ctx.r28.s64 + -15576;
	// addi r10,r29,-15576
	ctx.r10.s64 = ctx.r29.s64 + -15576;
	// li r11,91
	ctx.r11.s64 = 91;
	// stw r9,20(r15)
	PPC_STORE_U32(ctx.r15.u32 + 20, ctx.r9.u32);
	// lis r30,-32079
	ctx.r30.s64 = -2102329344;
	// stw r10,28(r15)
	PPC_STORE_U32(ctx.r15.u32 + 28, ctx.r10.u32);
	// stw r11,24(r15)
	PPC_STORE_U32(ctx.r15.u32 + 24, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r11,r30,-15576
	ctx.r11.s64 = ctx.r30.s64 + -15576;
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r9,32(r15)
	PPC_STORE_U32(ctx.r15.u32 + 32, ctx.r9.u32);
	// lis r31,-32079
	ctx.r31.s64 = -2102329344;
	// stw r11,36(r15)
	PPC_STORE_U32(ctx.r15.u32 + 36, ctx.r11.u32);
	// lis r3,-32079
	ctx.r3.s64 = -2102329344;
	// stw r10,40(r15)
	PPC_STORE_U32(ctx.r15.u32 + 40, ctx.r10.u32);
	// addi r9,r31,-15576
	ctx.r9.s64 = ctx.r31.s64 + -15576;
	// addi r10,r3,-15576
	ctx.r10.s64 = ctx.r3.s64 + -15576;
	// li r11,81
	ctx.r11.s64 = 81;
	// stw r9,44(r15)
	PPC_STORE_U32(ctx.r15.u32 + 44, ctx.r9.u32);
	// lis r4,-32079
	ctx.r4.s64 = -2102329344;
	// stw r10,52(r15)
	PPC_STORE_U32(ctx.r15.u32 + 52, ctx.r10.u32);
	// stw r11,48(r15)
	PPC_STORE_U32(ctx.r15.u32 + 48, ctx.r11.u32);
	// li r9,85
	ctx.r9.s64 = 85;
	// addi r11,r4,-15576
	ctx.r11.s64 = ctx.r4.s64 + -15576;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,56(r15)
	PPC_STORE_U32(ctx.r15.u32 + 56, ctx.r9.u32);
	// lis r5,-32079
	ctx.r5.s64 = -2102329344;
	// stw r11,60(r15)
	PPC_STORE_U32(ctx.r15.u32 + 60, ctx.r11.u32);
	// lis r6,-32079
	ctx.r6.s64 = -2102329344;
	// stw r10,64(r15)
	PPC_STORE_U32(ctx.r15.u32 + 64, ctx.r10.u32);
	// addi r9,r5,-15576
	ctx.r9.s64 = ctx.r5.s64 + -15576;
	// addi r10,r6,-15576
	ctx.r10.s64 = ctx.r6.s64 + -15576;
	// li r11,35
	ctx.r11.s64 = 35;
	// stw r9,68(r15)
	PPC_STORE_U32(ctx.r15.u32 + 68, ctx.r9.u32);
	// lis r7,-32079
	ctx.r7.s64 = -2102329344;
	// stw r10,76(r15)
	PPC_STORE_U32(ctx.r15.u32 + 76, ctx.r10.u32);
	// stw r11,72(r15)
	PPC_STORE_U32(ctx.r15.u32 + 72, ctx.r11.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// addi r11,r7,-15576
	ctx.r11.s64 = ctx.r7.s64 + -15576;
	// li r10,65
	ctx.r10.s64 = 65;
	// stw r9,80(r15)
	PPC_STORE_U32(ctx.r15.u32 + 80, ctx.r9.u32);
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// stw r11,84(r15)
	PPC_STORE_U32(ctx.r15.u32 + 84, ctx.r11.u32);
	// lis r23,-32079
	ctx.r23.s64 = -2102329344;
	// stw r10,88(r15)
	PPC_STORE_U32(ctx.r15.u32 + 88, ctx.r10.u32);
	// addi r9,r8,-15576
	ctx.r9.s64 = ctx.r8.s64 + -15576;
	// li r11,86
	ctx.r11.s64 = 86;
	// addi r10,r23,-18480
	ctx.r10.s64 = ctx.r23.s64 + -18480;
	// stw r9,92(r15)
	PPC_STORE_U32(ctx.r15.u32 + 92, ctx.r9.u32);
	// stw r11,96(r15)
	PPC_STORE_U32(ctx.r15.u32 + 96, ctx.r11.u32);
	// lis r24,-32079
	ctx.r24.s64 = -2102329344;
	// lis r25,-32079
	ctx.r25.s64 = -2102329344;
	// stw r10,100(r15)
	PPC_STORE_U32(ctx.r15.u32 + 100, ctx.r10.u32);
	// lis r26,-32079
	ctx.r26.s64 = -2102329344;
	// lis r27,-32079
	ctx.r27.s64 = -2102329344;
	// lis r28,-32079
	ctx.r28.s64 = -2102329344;
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// lis r30,-32079
	ctx.r30.s64 = -2102329344;
	// lis r31,-32079
	ctx.r31.s64 = -2102329344;
	// lis r3,-32079
	ctx.r3.s64 = -2102329344;
	// lis r4,-32079
	ctx.r4.s64 = -2102329344;
	// lis r5,-32079
	ctx.r5.s64 = -2102329344;
	// lis r6,-32079
	ctx.r6.s64 = -2102329344;
	// lis r7,-32079
	ctx.r7.s64 = -2102329344;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// stw r11,104(r15)
	PPC_STORE_U32(ctx.r15.u32 + 104, ctx.r11.u32);
	// addi r11,r25,-15576
	ctx.r11.s64 = ctx.r25.s64 + -15576;
	// li r10,45
	ctx.r10.s64 = 45;
	// stw r11,116(r15)
	PPC_STORE_U32(ctx.r15.u32 + 116, ctx.r11.u32);
	// addi r9,r24,-18480
	ctx.r9.s64 = ctx.r24.s64 + -18480;
	// stw r10,112(r15)
	PPC_STORE_U32(ctx.r15.u32 + 112, ctx.r10.u32);
	// li r11,57
	ctx.r11.s64 = 57;
	// addi r10,r26,-15576
	ctx.r10.s64 = ctx.r26.s64 + -15576;
	// stw r9,108(r15)
	PPC_STORE_U32(ctx.r15.u32 + 108, ctx.r9.u32);
	// stw r11,128(r15)
	PPC_STORE_U32(ctx.r15.u32 + 128, ctx.r11.u32);
	// addi r11,r28,-18480
	ctx.r11.s64 = ctx.r28.s64 + -18480;
	// stw r10,124(r15)
	PPC_STORE_U32(ctx.r15.u32 + 124, ctx.r10.u32);
	// li r9,60
	ctx.r9.s64 = 60;
	// li r10,36
	ctx.r10.s64 = 36;
	// stw r11,140(r15)
	PPC_STORE_U32(ctx.r15.u32 + 140, ctx.r11.u32);
	// stw r9,120(r15)
	PPC_STORE_U32(ctx.r15.u32 + 120, ctx.r9.u32);
	// addi r9,r27,-18480
	ctx.r9.s64 = ctx.r27.s64 + -18480;
	// stw r10,136(r15)
	PPC_STORE_U32(ctx.r15.u32 + 136, ctx.r10.u32);
	// li r11,49
	ctx.r11.s64 = 49;
	// addi r10,r29,-15576
	ctx.r10.s64 = ctx.r29.s64 + -15576;
	// stw r9,132(r15)
	PPC_STORE_U32(ctx.r15.u32 + 132, ctx.r9.u32);
	// stw r11,152(r15)
	PPC_STORE_U32(ctx.r15.u32 + 152, ctx.r11.u32);
	// addi r11,r31,-15576
	ctx.r11.s64 = ctx.r31.s64 + -15576;
	// stw r10,148(r15)
	PPC_STORE_U32(ctx.r15.u32 + 148, ctx.r10.u32);
	// li r9,63
	ctx.r9.s64 = 63;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,164(r15)
	PPC_STORE_U32(ctx.r15.u32 + 164, ctx.r11.u32);
	// stw r9,144(r15)
	PPC_STORE_U32(ctx.r15.u32 + 144, ctx.r9.u32);
	// addi r9,r30,-15576
	ctx.r9.s64 = ctx.r30.s64 + -15576;
	// stw r10,160(r15)
	PPC_STORE_U32(ctx.r15.u32 + 160, ctx.r10.u32);
	// li r11,69
	ctx.r11.s64 = 69;
	// addi r10,r3,-15576
	ctx.r10.s64 = ctx.r3.s64 + -15576;
	// stw r9,156(r15)
	PPC_STORE_U32(ctx.r15.u32 + 156, ctx.r9.u32);
	// stw r11,176(r15)
	PPC_STORE_U32(ctx.r15.u32 + 176, ctx.r11.u32);
	// addi r11,r5,-15576
	ctx.r11.s64 = ctx.r5.s64 + -15576;
	// stw r10,172(r15)
	PPC_STORE_U32(ctx.r15.u32 + 172, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,69
	ctx.r10.s64 = 69;
	// stw r11,188(r15)
	PPC_STORE_U32(ctx.r15.u32 + 188, ctx.r11.u32);
	// stw r9,168(r15)
	PPC_STORE_U32(ctx.r15.u32 + 168, ctx.r9.u32);
	// addi r9,r4,-15576
	ctx.r9.s64 = ctx.r4.s64 + -15576;
	// stw r10,184(r15)
	PPC_STORE_U32(ctx.r15.u32 + 184, ctx.r10.u32);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r6,-15576
	ctx.r10.s64 = ctx.r6.s64 + -15576;
	// stw r9,180(r15)
	PPC_STORE_U32(ctx.r15.u32 + 180, ctx.r9.u32);
	// stw r11,200(r15)
	PPC_STORE_U32(ctx.r15.u32 + 200, ctx.r11.u32);
	// addi r11,r8,-14416
	ctx.r11.s64 = ctx.r8.s64 + -14416;
	// stw r10,196(r15)
	PPC_STORE_U32(ctx.r15.u32 + 196, ctx.r10.u32);
	// li r9,69
	ctx.r9.s64 = 69;
	// li r10,9
	ctx.r10.s64 = 9;
	// stw r11,212(r15)
	PPC_STORE_U32(ctx.r15.u32 + 212, ctx.r11.u32);
	// stw r9,192(r15)
	PPC_STORE_U32(ctx.r15.u32 + 192, ctx.r9.u32);
	// addi r9,r7,-14416
	ctx.r9.s64 = ctx.r7.s64 + -14416;
	// stw r10,208(r15)
	PPC_STORE_U32(ctx.r15.u32 + 208, ctx.r10.u32);
	// li r11,62
	ctx.r11.s64 = 62;
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// stw r9,204(r15)
	PPC_STORE_U32(ctx.r15.u32 + 204, ctx.r9.u32);
	// lis r18,-32079
	ctx.r18.s64 = -2102329344;
	// stw r11,216(r15)
	PPC_STORE_U32(ctx.r15.u32 + 216, ctx.r11.u32);
	// lis r19,-32079
	ctx.r19.s64 = -2102329344;
	// lis r20,-32079
	ctx.r20.s64 = -2102329344;
	// lis r21,-32079
	ctx.r21.s64 = -2102329344;
	// lis r22,-32079
	ctx.r22.s64 = -2102329344;
	// lis r23,-32079
	ctx.r23.s64 = -2102329344;
	// lis r24,-32079
	ctx.r24.s64 = -2102329344;
	// lis r25,-32079
	ctx.r25.s64 = -2102329344;
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// lis r30,-32079
	ctx.r30.s64 = -2102329344;
	// lis r31,-32079
	ctx.r31.s64 = -2102329344;
	// lis r3,-32079
	ctx.r3.s64 = -2102329344;
	// lis r4,-32079
	ctx.r4.s64 = -2102329344;
	// lis r5,-32079
	ctx.r5.s64 = -2102329344;
	// lis r6,-32079
	ctx.r6.s64 = -2102329344;
	// lis r7,-32079
	ctx.r7.s64 = -2102329344;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// lis r26,-32079
	ctx.r26.s64 = -2102329344;
	// lis r27,-32079
	ctx.r27.s64 = -2102329344;
	// lis r28,-32079
	ctx.r28.s64 = -2102329344;
	// addi r10,r10,-14416
	ctx.r10.s64 = ctx.r10.s64 + -14416;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r18,-14416
	ctx.r11.s64 = ctx.r18.s64 + -14416;
	// stw r10,220(r15)
	PPC_STORE_U32(ctx.r15.u32 + 220, ctx.r10.u32);
	// li r10,42
	ctx.r10.s64 = 42;
	// stw r9,224(r15)
	PPC_STORE_U32(ctx.r15.u32 + 224, ctx.r9.u32);
	// addi r9,r19,-14416
	ctx.r9.s64 = ctx.r19.s64 + -14416;
	// stw r11,228(r15)
	PPC_STORE_U32(ctx.r15.u32 + 228, ctx.r11.u32);
	// li r11,50
	ctx.r11.s64 = 50;
	// stw r10,232(r15)
	PPC_STORE_U32(ctx.r15.u32 + 232, ctx.r10.u32);
	// addi r10,r20,-14416
	ctx.r10.s64 = ctx.r20.s64 + -14416;
	// stw r9,236(r15)
	PPC_STORE_U32(ctx.r15.u32 + 236, ctx.r9.u32);
	// li r9,22
	ctx.r9.s64 = 22;
	// stw r11,240(r15)
	PPC_STORE_U32(ctx.r15.u32 + 240, ctx.r11.u32);
	// addi r11,r21,-18480
	ctx.r11.s64 = ctx.r21.s64 + -18480;
	// stw r10,244(r15)
	PPC_STORE_U32(ctx.r15.u32 + 244, ctx.r10.u32);
	// li r10,78
	ctx.r10.s64 = 78;
	// stw r9,248(r15)
	PPC_STORE_U32(ctx.r15.u32 + 248, ctx.r9.u32);
	// addi r9,r22,-15576
	ctx.r9.s64 = ctx.r22.s64 + -15576;
	// stw r11,252(r15)
	PPC_STORE_U32(ctx.r15.u32 + 252, ctx.r11.u32);
	// li r11,19
	ctx.r11.s64 = 19;
	// stw r10,256(r15)
	PPC_STORE_U32(ctx.r15.u32 + 256, ctx.r10.u32);
	// addi r10,r23,-15576
	ctx.r10.s64 = ctx.r23.s64 + -15576;
	// stw r9,260(r15)
	PPC_STORE_U32(ctx.r15.u32 + 260, ctx.r9.u32);
	// li r9,87
	ctx.r9.s64 = 87;
	// stw r11,264(r15)
	PPC_STORE_U32(ctx.r15.u32 + 264, ctx.r11.u32);
	// addi r11,r24,-18480
	ctx.r11.s64 = ctx.r24.s64 + -18480;
	// stw r10,268(r15)
	PPC_STORE_U32(ctx.r15.u32 + 268, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,272(r15)
	PPC_STORE_U32(ctx.r15.u32 + 272, ctx.r9.u32);
	// addi r9,r25,-15576
	ctx.r9.s64 = ctx.r25.s64 + -15576;
	// stw r11,276(r15)
	PPC_STORE_U32(ctx.r15.u32 + 276, ctx.r11.u32);
	// li r11,76
	ctx.r11.s64 = 76;
	// stw r10,280(r15)
	PPC_STORE_U32(ctx.r15.u32 + 280, ctx.r10.u32);
	// addi r10,r29,-15576
	ctx.r10.s64 = ctx.r29.s64 + -15576;
	// stw r9,284(r15)
	PPC_STORE_U32(ctx.r15.u32 + 284, ctx.r9.u32);
	// li r9,89
	ctx.r9.s64 = 89;
	// stw r11,288(r15)
	PPC_STORE_U32(ctx.r15.u32 + 288, ctx.r11.u32);
	// addi r11,r30,-15576
	ctx.r11.s64 = ctx.r30.s64 + -15576;
	// stw r10,292(r15)
	PPC_STORE_U32(ctx.r15.u32 + 292, ctx.r10.u32);
	// li r10,62
	ctx.r10.s64 = 62;
	// stw r9,296(r15)
	PPC_STORE_U32(ctx.r15.u32 + 296, ctx.r9.u32);
	// addi r9,r31,-14416
	ctx.r9.s64 = ctx.r31.s64 + -14416;
	// stw r11,300(r15)
	PPC_STORE_U32(ctx.r15.u32 + 300, ctx.r11.u32);
	// li r11,42
	ctx.r11.s64 = 42;
	// stw r10,304(r15)
	PPC_STORE_U32(ctx.r15.u32 + 304, ctx.r10.u32);
	// addi r10,r3,-14416
	ctx.r10.s64 = ctx.r3.s64 + -14416;
	// stw r9,308(r15)
	PPC_STORE_U32(ctx.r15.u32 + 308, ctx.r9.u32);
	// li r9,53
	ctx.r9.s64 = 53;
	// stw r11,312(r15)
	PPC_STORE_U32(ctx.r15.u32 + 312, ctx.r11.u32);
	// addi r11,r4,-14416
	ctx.r11.s64 = ctx.r4.s64 + -14416;
	// stw r10,316(r15)
	PPC_STORE_U32(ctx.r15.u32 + 316, ctx.r10.u32);
	// li r10,52
	ctx.r10.s64 = 52;
	// stw r9,320(r15)
	PPC_STORE_U32(ctx.r15.u32 + 320, ctx.r9.u32);
	// addi r9,r5,-13208
	ctx.r9.s64 = ctx.r5.s64 + -13208;
	// stw r11,324(r15)
	PPC_STORE_U32(ctx.r15.u32 + 324, ctx.r11.u32);
	// li r11,39
	ctx.r11.s64 = 39;
	// stw r10,328(r15)
	PPC_STORE_U32(ctx.r15.u32 + 328, ctx.r10.u32);
	// addi r10,r6,-14416
	ctx.r10.s64 = ctx.r6.s64 + -14416;
	// stw r9,332(r15)
	PPC_STORE_U32(ctx.r15.u32 + 332, ctx.r9.u32);
	// li r9,41
	ctx.r9.s64 = 41;
	// stw r11,336(r15)
	PPC_STORE_U32(ctx.r15.u32 + 336, ctx.r11.u32);
	// addi r11,r7,-14416
	ctx.r11.s64 = ctx.r7.s64 + -14416;
	// stw r10,340(r15)
	PPC_STORE_U32(ctx.r15.u32 + 340, ctx.r10.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r9,344(r15)
	PPC_STORE_U32(ctx.r15.u32 + 344, ctx.r9.u32);
	// addi r9,r8,-14416
	ctx.r9.s64 = ctx.r8.s64 + -14416;
	// stw r11,348(r15)
	PPC_STORE_U32(ctx.r15.u32 + 348, ctx.r11.u32);
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r10,352(r15)
	PPC_STORE_U32(ctx.r15.u32 + 352, ctx.r10.u32);
	// addi r10,r26,-13208
	ctx.r10.s64 = ctx.r26.s64 + -13208;
	// stw r9,356(r15)
	PPC_STORE_U32(ctx.r15.u32 + 356, ctx.r9.u32);
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// lis r30,-32079
	ctx.r30.s64 = -2102329344;
	// stw r11,360(r15)
	PPC_STORE_U32(ctx.r15.u32 + 360, ctx.r11.u32);
	// lis r31,-32079
	ctx.r31.s64 = -2102329344;
	// stw r10,364(r15)
	PPC_STORE_U32(ctx.r15.u32 + 364, ctx.r10.u32);
	// lis r3,-32079
	ctx.r3.s64 = -2102329344;
	// lis r4,-32079
	ctx.r4.s64 = -2102329344;
	// lis r5,-32079
	ctx.r5.s64 = -2102329344;
	// lis r6,-32079
	ctx.r6.s64 = -2102329344;
	// lis r7,-32079
	ctx.r7.s64 = -2102329344;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r27,-18480
	ctx.r11.s64 = ctx.r27.s64 + -18480;
	// stw r9,368(r15)
	PPC_STORE_U32(ctx.r15.u32 + 368, ctx.r9.u32);
	// li r10,28
	ctx.r10.s64 = 28;
	// stw r11,372(r15)
	PPC_STORE_U32(ctx.r15.u32 + 372, ctx.r11.u32);
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r10,376(r15)
	PPC_STORE_U32(ctx.r15.u32 + 376, ctx.r10.u32);
	// addi r10,r29,-18480
	ctx.r10.s64 = ctx.r29.s64 + -18480;
	// stw r11,384(r15)
	PPC_STORE_U32(ctx.r15.u32 + 384, ctx.r11.u32);
	// addi r9,r28,-18480
	ctx.r9.s64 = ctx.r28.s64 + -18480;
	// stw r10,388(r15)
	PPC_STORE_U32(ctx.r15.u32 + 388, ctx.r10.u32);
	// addi r11,r30,-12744
	ctx.r11.s64 = ctx.r30.s64 + -12744;
	// li r10,55
	ctx.r10.s64 = 55;
	// stw r9,380(r15)
	PPC_STORE_U32(ctx.r15.u32 + 380, ctx.r9.u32);
	// stw r11,516(r15)
	PPC_STORE_U32(ctx.r15.u32 + 516, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,520(r15)
	PPC_STORE_U32(ctx.r15.u32 + 520, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r3,-11848
	ctx.r10.s64 = ctx.r3.s64 + -11848;
	// stw r9,512(r15)
	PPC_STORE_U32(ctx.r15.u32 + 512, ctx.r9.u32);
	// stw r11,528(r15)
	PPC_STORE_U32(ctx.r15.u32 + 528, ctx.r11.u32);
	// addi r9,r31,-12344
	ctx.r9.s64 = ctx.r31.s64 + -12344;
	// stw r10,532(r15)
	PPC_STORE_U32(ctx.r15.u32 + 532, ctx.r10.u32);
	// addi r11,r4,-10280
	ctx.r11.s64 = ctx.r4.s64 + -10280;
	// li r10,33
	ctx.r10.s64 = 33;
	// stw r9,524(r15)
	PPC_STORE_U32(ctx.r15.u32 + 524, ctx.r9.u32);
	// stw r11,540(r15)
	PPC_STORE_U32(ctx.r15.u32 + 540, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,544(r15)
	PPC_STORE_U32(ctx.r15.u32 + 544, ctx.r10.u32);
	// li r11,93
	ctx.r11.s64 = 93;
	// addi r10,r6,-8448
	ctx.r10.s64 = ctx.r6.s64 + -8448;
	// stw r9,536(r15)
	PPC_STORE_U32(ctx.r15.u32 + 536, ctx.r9.u32);
	// stw r11,552(r15)
	PPC_STORE_U32(ctx.r15.u32 + 552, ctx.r11.u32);
	// addi r9,r5,-10280
	ctx.r9.s64 = ctx.r5.s64 + -10280;
	// stw r10,556(r15)
	PPC_STORE_U32(ctx.r15.u32 + 556, ctx.r10.u32);
	// addi r11,r7,-8448
	ctx.r11.s64 = ctx.r7.s64 + -8448;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,548(r15)
	PPC_STORE_U32(ctx.r15.u32 + 548, ctx.r9.u32);
	// stw r11,564(r15)
	PPC_STORE_U32(ctx.r15.u32 + 564, ctx.r11.u32);
	// li r9,93
	ctx.r9.s64 = 93;
	// stw r10,568(r15)
	PPC_STORE_U32(ctx.r15.u32 + 568, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r10,-32079
	ctx.r10.s64 = -2102329344;
	// stw r9,560(r15)
	PPC_STORE_U32(ctx.r15.u32 + 560, ctx.r9.u32);
	// stw r11,576(r15)
	PPC_STORE_U32(ctx.r15.u32 + 576, ctx.r11.u32);
	// addi r9,r8,-7960
	ctx.r9.s64 = ctx.r8.s64 + -7960;
	// addi r11,r10,-7384
	ctx.r11.s64 = ctx.r10.s64 + -7384;
	// stw r9,572(r15)
	PPC_STORE_U32(ctx.r15.u32 + 572, ctx.r9.u32);
	// lis r9,-32079
	ctx.r9.s64 = -2102329344;
	// stw r11,580(r15)
	PPC_STORE_U32(ctx.r15.u32 + 580, ctx.r11.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// lis r17,-32079
	ctx.r17.s64 = -2102329344;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r11,592(r15)
	PPC_STORE_U32(ctx.r15.u32 + 592, ctx.r11.u32);
	// addi r9,r9,-7736
	ctx.r9.s64 = ctx.r9.s64 + -7736;
	// lis r16,-32079
	ctx.r16.s64 = -2102329344;
	// stw r10,584(r15)
	PPC_STORE_U32(ctx.r15.u32 + 584, ctx.r10.u32);
	// addi r11,r17,-18480
	ctx.r11.s64 = ctx.r17.s64 + -18480;
	// stw r9,588(r15)
	PPC_STORE_U32(ctx.r15.u32 + 588, ctx.r9.u32);
	// lis r18,-32079
	ctx.r18.s64 = -2102329344;
	// lis r19,-32079
	ctx.r19.s64 = -2102329344;
	// stw r11,604(r15)
	PPC_STORE_U32(ctx.r15.u32 + 604, ctx.r11.u32);
	// lis r20,-32079
	ctx.r20.s64 = -2102329344;
	// lis r21,-32079
	ctx.r21.s64 = -2102329344;
	// lis r22,-32079
	ctx.r22.s64 = -2102329344;
	// lis r23,-32079
	ctx.r23.s64 = -2102329344;
	// lis r24,-32079
	ctx.r24.s64 = -2102329344;
	// lis r25,-32079
	ctx.r25.s64 = -2102329344;
	// lis r26,-32079
	ctx.r26.s64 = -2102329344;
	// lis r27,-32079
	ctx.r27.s64 = -2102329344;
	// lis r28,-32079
	ctx.r28.s64 = -2102329344;
	// lis r29,-32079
	ctx.r29.s64 = -2102329344;
	// lis r30,-32079
	ctx.r30.s64 = -2102329344;
	// lis r31,-32079
	ctx.r31.s64 = -2102329344;
	// lis r3,-32079
	ctx.r3.s64 = -2102329344;
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// lis r4,-32079
	ctx.r4.s64 = -2102329344;
	// lis r5,-32079
	ctx.r5.s64 = -2102329344;
	// lis r6,-32079
	ctx.r6.s64 = -2102329344;
	// lis r7,-32079
	ctx.r7.s64 = -2102329344;
	// addi r10,r16,-7384
	ctx.r10.s64 = ctx.r16.s64 + -7384;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,596(r15)
	PPC_STORE_U32(ctx.r15.u32 + 596, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,600(r15)
	PPC_STORE_U32(ctx.r15.u32 + 600, ctx.r9.u32);
	// stw r11,616(r15)
	PPC_STORE_U32(ctx.r15.u32 + 616, ctx.r11.u32);
	// addi r9,r18,-7384
	ctx.r9.s64 = ctx.r18.s64 + -7384;
	// stw r10,608(r15)
	PPC_STORE_U32(ctx.r15.u32 + 608, ctx.r10.u32);
	// addi r11,r20,-15576
	ctx.r11.s64 = ctx.r20.s64 + -15576;
	// addi r10,r19,-7384
	ctx.r10.s64 = ctx.r19.s64 + -7384;
	// stw r9,612(r15)
	PPC_STORE_U32(ctx.r15.u32 + 612, ctx.r9.u32);
	// stw r11,628(r15)
	PPC_STORE_U32(ctx.r15.u32 + 628, ctx.r11.u32);
	// li r9,46
	ctx.r9.s64 = 46;
	// stw r10,620(r15)
	PPC_STORE_U32(ctx.r15.u32 + 620, ctx.r10.u32);
	// li r11,13
	ctx.r11.s64 = 13;
	// li r10,61
	ctx.r10.s64 = 61;
	// stw r9,624(r15)
	PPC_STORE_U32(ctx.r15.u32 + 624, ctx.r9.u32);
	// stw r11,640(r15)
	PPC_STORE_U32(ctx.r15.u32 + 640, ctx.r11.u32);
	// addi r9,r21,-15576
	ctx.r9.s64 = ctx.r21.s64 + -15576;
	// stw r10,632(r15)
	PPC_STORE_U32(ctx.r15.u32 + 632, ctx.r10.u32);
	// addi r11,r23,-18480
	ctx.r11.s64 = ctx.r23.s64 + -18480;
	// addi r10,r22,-15576
	ctx.r10.s64 = ctx.r22.s64 + -15576;
	// stw r9,636(r15)
	PPC_STORE_U32(ctx.r15.u32 + 636, ctx.r9.u32);
	// stw r11,652(r15)
	PPC_STORE_U32(ctx.r15.u32 + 652, ctx.r11.u32);
	// li r9,28
	ctx.r9.s64 = 28;
	// stw r10,644(r15)
	PPC_STORE_U32(ctx.r15.u32 + 644, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,93
	ctx.r10.s64 = 93;
	// stw r9,648(r15)
	PPC_STORE_U32(ctx.r15.u32 + 648, ctx.r9.u32);
	// stw r11,664(r15)
	PPC_STORE_U32(ctx.r15.u32 + 664, ctx.r11.u32);
	// addi r9,r24,-8448
	ctx.r9.s64 = ctx.r24.s64 + -8448;
	// stw r10,656(r15)
	PPC_STORE_U32(ctx.r15.u32 + 656, ctx.r10.u32);
	// addi r11,r26,-7384
	ctx.r11.s64 = ctx.r26.s64 + -7384;
	// addi r10,r25,-6432
	ctx.r10.s64 = ctx.r25.s64 + -6432;
	// stw r9,660(r15)
	PPC_STORE_U32(ctx.r15.u32 + 660, ctx.r9.u32);
	// stw r11,676(r15)
	PPC_STORE_U32(ctx.r15.u32 + 676, ctx.r11.u32);
	// li r9,34
	ctx.r9.s64 = 34;
	// stw r10,668(r15)
	PPC_STORE_U32(ctx.r15.u32 + 668, ctx.r10.u32);
	// li r11,34
	ctx.r11.s64 = 34;
	// li r10,34
	ctx.r10.s64 = 34;
	// stw r9,672(r15)
	PPC_STORE_U32(ctx.r15.u32 + 672, ctx.r9.u32);
	// stw r11,688(r15)
	PPC_STORE_U32(ctx.r15.u32 + 688, ctx.r11.u32);
	// addi r9,r27,-6432
	ctx.r9.s64 = ctx.r27.s64 + -6432;
	// stw r10,680(r15)
	PPC_STORE_U32(ctx.r15.u32 + 680, ctx.r10.u32);
	// addi r11,r29,-18392
	ctx.r11.s64 = ctx.r29.s64 + -18392;
	// addi r10,r28,-7384
	ctx.r10.s64 = ctx.r28.s64 + -7384;
	// stw r9,684(r15)
	PPC_STORE_U32(ctx.r15.u32 + 684, ctx.r9.u32);
	// stw r11,700(r15)
	PPC_STORE_U32(ctx.r15.u32 + 700, ctx.r11.u32);
	// li r9,71
	ctx.r9.s64 = 71;
	// stw r10,692(r15)
	PPC_STORE_U32(ctx.r15.u32 + 692, ctx.r10.u32);
	// li r11,33
	ctx.r11.s64 = 33;
	// li r10,13
	ctx.r10.s64 = 13;
	// stw r9,696(r15)
	PPC_STORE_U32(ctx.r15.u32 + 696, ctx.r9.u32);
	// stw r11,712(r15)
	PPC_STORE_U32(ctx.r15.u32 + 712, ctx.r11.u32);
	// addi r9,r30,-15576
	ctx.r9.s64 = ctx.r30.s64 + -15576;
	// stw r10,704(r15)
	PPC_STORE_U32(ctx.r15.u32 + 704, ctx.r10.u32);
	// addi r11,r3,-15576
	ctx.r11.s64 = ctx.r3.s64 + -15576;
	// addi r10,r31,-9264
	ctx.r10.s64 = ctx.r31.s64 + -9264;
	// stw r9,708(r15)
	PPC_STORE_U32(ctx.r15.u32 + 708, ctx.r9.u32);
	// stw r11,724(r15)
	PPC_STORE_U32(ctx.r15.u32 + 724, ctx.r11.u32);
	// li r9,33
	ctx.r9.s64 = 33;
	// stw r10,716(r15)
	PPC_STORE_U32(ctx.r15.u32 + 716, ctx.r10.u32);
	// li r11,38
	ctx.r11.s64 = 38;
	// li r10,37
	ctx.r10.s64 = 37;
	// stw r9,720(r15)
	PPC_STORE_U32(ctx.r15.u32 + 720, ctx.r9.u32);
	// stw r11,736(r15)
	PPC_STORE_U32(ctx.r15.u32 + 736, ctx.r11.u32);
	// addi r9,r8,-15576
	ctx.r9.s64 = ctx.r8.s64 + -15576;
	// addi r11,r4,-15576
	ctx.r11.s64 = ctx.r4.s64 + -15576;
	// stw r10,728(r15)
	PPC_STORE_U32(ctx.r15.u32 + 728, ctx.r10.u32);
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r9,732(r15)
	PPC_STORE_U32(ctx.r15.u32 + 732, ctx.r9.u32);
	// stw r11,740(r15)
	PPC_STORE_U32(ctx.r15.u32 + 740, ctx.r11.u32);
	// addi r9,r5,-10936
	ctx.r9.s64 = ctx.r5.s64 + -10936;
	// li r11,86
	ctx.r11.s64 = 86;
	// stw r10,744(r15)
	PPC_STORE_U32(ctx.r15.u32 + 744, ctx.r10.u32);
	// addi r10,r6,-13208
	ctx.r10.s64 = ctx.r6.s64 + -13208;
	// stw r9,748(r15)
	PPC_STORE_U32(ctx.r15.u32 + 748, ctx.r9.u32);
	// stw r11,752(r15)
	PPC_STORE_U32(ctx.r15.u32 + 752, ctx.r11.u32);
	// lis r8,-32079
	ctx.r8.s64 = -2102329344;
	// li r9,94
	ctx.r9.s64 = 94;
	// stw r10,756(r15)
	PPC_STORE_U32(ctx.r15.u32 + 756, ctx.r10.u32);
	// addi r11,r7,-10936
	ctx.r11.s64 = ctx.r7.s64 + -10936;
	// stw r9,760(r15)
	PPC_STORE_U32(ctx.r15.u32 + 760, ctx.r9.u32);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r8,-14416
	ctx.r9.s64 = ctx.r8.s64 + -14416;
	// stw r11,764(r15)
	PPC_STORE_U32(ctx.r15.u32 + 764, ctx.r11.u32);
	// stw r10,768(r15)
	PPC_STORE_U32(ctx.r15.u32 + 768, ctx.r10.u32);
	// stw r9,772(r15)
	PPC_STORE_U32(ctx.r15.u32 + 772, ctx.r9.u32);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0EF08"))) PPC_WEAK_FUNC(sub_82B0EF08);
PPC_FUNC_IMPL(__imp__sub_82B0EF08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B0EF10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0ef30
	if (!ctx.cr6.lt) goto loc_82B0EF30;
	// bl 0x82a82960
	ctx.lr = 0x82B0EF30;
	sub_82A82960(ctx, base);
loc_82B0EF30:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r28,21
	ctx.r29.u64 = ctx.r28.u32 & 0x7FF;
	// cmplwi cr6,r29,256
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 256, ctx.xer);
	// blt cr6,0x82b0ef58
	if (ctx.cr6.lt) goto loc_82B0EF58;
	// bl 0x82a82960
	ctx.lr = 0x82B0EF54;
	sub_82A82960(ctx, base);
	// li r29,255
	ctx.r29.s64 = 255;
loc_82B0EF58:
	// rlwimi r28,r28,12,21,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r28.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r28,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x82b0ef6c
	if (ctx.cr6.eq) goto loc_82B0EF6C;
	// bl 0x82a82960
	ctx.lr = 0x82B0EF6C;
	sub_82A82960(ctx, base);
loc_82B0EF6C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// rlwimi r29,r11,16,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0EFB8"))) PPC_WEAK_FUNC(sub_82B0EFB8);
PPC_FUNC_IMPL(__imp__sub_82B0EFB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B0EFC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0efe0
	if (!ctx.cr6.lt) goto loc_82B0EFE0;
	// bl 0x82a82960
	ctx.lr = 0x82B0EFE0;
	sub_82A82960(ctx, base);
loc_82B0EFE0:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r29,r28,21
	ctx.r29.u64 = ctx.r28.u32 & 0x7FF;
	// cmplwi cr6,r29,16
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 16, ctx.xer);
	// blt cr6,0x82b0f008
	if (ctx.cr6.lt) goto loc_82B0F008;
	// bl 0x82a82960
	ctx.lr = 0x82B0F004;
	sub_82A82960(ctx, base);
	// li r29,15
	ctx.r29.s64 = 15;
loc_82B0F008:
	// rlwimi r28,r28,12,21,23
	ctx.r28.u64 = (__builtin_rotateleft32(ctx.r28.u32, 12) & 0x700) | (ctx.r28.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r28,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,1792
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1792, ctx.xer);
	// beq cr6,0x82b0f01c
	if (ctx.cr6.eq) goto loc_82B0F01C;
	// bl 0x82a82960
	ctx.lr = 0x82B0F01C;
	sub_82A82960(ctx, base);
loc_82B0F01C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,28
	ctx.r10.s64 = 28;
	// rlwimi r29,r11,17,0,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0xFFFF0000) | (ctx.r29.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stwu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r31.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// stwu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r31.u32 = ea;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0F068"))) PPC_WEAK_FUNC(sub_82B0F068);
PPC_FUNC_IMPL(__imp__sub_82B0F068) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r3,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82b0f080
	if (ctx.cr0.eq) goto loc_82B0F080;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// b 0x82b0f084
	goto loc_82B0F084;
loc_82B0F080:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82B0F084:
	// rlwinm. r10,r3,0,14,14
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0f098
	if (ctx.cr0.eq) goto loc_82B0F098;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// b 0x82b0f09c
	goto loc_82B0F09C;
loc_82B0F098:
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82B0F09C:
	// rlwinm. r10,r3,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0f0b0
	if (ctx.cr0.eq) goto loc_82B0F0B0;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// b 0x82b0f0b4
	goto loc_82B0F0B4;
loc_82B0F0B0:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82B0F0B4:
	// rlwinm. r10,r3,0,12,12
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0f0c0
	if (ctx.cr0.eq) goto loc_82B0F0C0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
loc_82B0F0C0:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0F0C8"))) PPC_WEAK_FUNC(sub_82B0F0C8);
PPC_FUNC_IMPL(__imp__sub_82B0F0C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B0F0D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,0(r5)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,16
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 16, ctx.xer);
	// blt cr6,0x82b0f0f0
	if (ctx.cr6.lt) goto loc_82B0F0F0;
	// bl 0x82a82960
	ctx.lr = 0x82B0F0F0;
	sub_82A82960(ctx, base);
loc_82B0F0F0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82b0f140
	if (ctx.cr6.eq) goto loc_82B0F140;
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b0f138
	if (ctx.cr6.eq) goto loc_82B0F138;
	// lis r11,6144
	ctx.r11.s64 = 402653184;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b0f130
	if (ctx.cr6.eq) goto loc_82B0F130;
	// lis r11,8192
	ctx.r11.s64 = 536870912;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b0f128
	if (ctx.cr6.eq) goto loc_82B0F128;
	// bl 0x82a82960
	ctx.lr = 0x82B0F124;
	sub_82A82960(ctx, base);
	// b 0x82b0f144
	goto loc_82B0F144;
loc_82B0F128:
	// lis r31,768
	ctx.r31.s64 = 50331648;
	// b 0x82b0f144
	goto loc_82B0F144;
loc_82B0F130:
	// lis r31,1024
	ctx.r31.s64 = 67108864;
	// b 0x82b0f144
	goto loc_82B0F144;
loc_82B0F138:
	// lis r31,512
	ctx.r31.s64 = 33554432;
	// b 0x82b0f144
	goto loc_82B0F144;
loc_82B0F140:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B0F144:
	// rlwimi r31,r29,16,8,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r29.u32, 16) & 0xFF0000) | (ctx.r31.u64 & 0xFFFFFFFFFF00FFFF);
	// li r11,801
	ctx.r11.s64 = 801;
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// rlwimi r31,r11,27,16,31
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0xFFFF) | (ctx.r31.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r31,r11,27,3,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x18000000) | (ctx.r31.u64 & 0xFFFFFFFFE7FFFFFF);
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0F168"))) PPC_WEAK_FUNC(sub_82B0F168);
PPC_FUNC_IMPL(__imp__sub_82B0F168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B0F170;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,21,3,10
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 21) & 0x1FE00000;
	// lwz r26,0(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,13
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 13, ctx.xer);
	// ori r29,r11,23
	ctx.r29.u64 = ctx.r11.u64 | 23;
	// ble cr6,0x82b0f1ac
	if (!ctx.cr6.gt) goto loc_82B0F1AC;
	// bl 0x82a82960
	ctx.lr = 0x82B0F1AC;
	sub_82A82960(ctx, base);
loc_82B0F1AC:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x82b0f1b8
	if (ctx.cr6.lt) goto loc_82B0F1B8;
	// bl 0x82a82960
	ctx.lr = 0x82B0F1B8;
	sub_82A82960(ctx, base);
loc_82B0F1B8:
	// cmpwi cr6,r31,5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 5, ctx.xer);
	// bne cr6,0x82b0f214
	if (!ctx.cr6.eq) goto loc_82B0F214;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f1d4
	if (!ctx.cr6.lt) goto loc_82B0F1D4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0F1D4:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0f1f0
	if (!ctx.cr6.eq) goto loc_82B0F1F0;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82b0f1fc
	goto loc_82B0F1FC;
loc_82B0F1F0:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82b0f1fc
	if (!ctx.cr6.eq) goto loc_82B0F1FC;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B0F1FC:
	// li r11,5
	ctx.r11.s64 = 5;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// rlwimi r29,r11,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// blt cr6,0x82b0f244
	if (ctx.cr6.lt) goto loc_82B0F244;
	// bl 0x82a82960
	ctx.lr = 0x82B0F210;
	sub_82A82960(ctx, base);
	// b 0x82b0f244
	goto loc_82B0F244;
loc_82B0F214:
	// cmpwi cr6,r31,10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 10, ctx.xer);
	// bne cr6,0x82b0f228
	if (!ctx.cr6.eq) goto loc_82B0F228;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r29,r11,17,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 17) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
	// b 0x82b0f244
	goto loc_82B0F244;
loc_82B0F228:
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// rlwinm r10,r28,21,0,10
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0xFFE00000;
	// rlwinm r11,r11,25,0,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0xFE000000;
	// li r9,5
	ctx.r9.s64 = 5;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r29,r11,0,3,10
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x1FE00000) | (ctx.r29.u64 & 0xFFFFFFFFE01FFFFF);
	// rlwimi r29,r9,16,11,15
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0x1F0000) | (ctx.r29.u64 & 0xFFFFFFFFFFE0FFFF);
loc_82B0F244:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x82b0f250
	if (ctx.cr6.lt) goto loc_82B0F250;
	// bl 0x82a82960
	ctx.lr = 0x82B0F250;
	sub_82A82960(ctx, base);
loc_82B0F250:
	// addi r11,r27,4
	ctx.r11.s64 = ctx.r27.s64 + 4;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r9,12
	ctx.r9.s64 = 12;
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stwx r9,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r27,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r27.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b0f068
	ctx.lr = 0x82B0F290;
	sub_82B0F068(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82b0f2d4
	if (!ctx.cr6.eq) goto loc_82B0F2D4;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82b0f2d4
	if (!ctx.cr6.eq) goto loc_82B0F2D4;
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82b0f2d4
	if (!ctx.cr6.eq) goto loc_82B0F2D4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82b0f2d4
	if (!ctx.cr6.eq) goto loc_82B0F2D4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82b0f2d4
	if (!ctx.cr6.eq) goto loc_82B0F2D4;
	// clrlwi r10,r29,1
	ctx.r10.u64 = ctx.r29.u32 & 0x7FFFFFFF;
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// b 0x82b0f2f4
	goto loc_82B0F2F4;
loc_82B0F2D4:
	// rlwimi r11,r25,2,29,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r25.u32, 2) & 0x4) | (ctx.r11.u64 & 0xFFFFFFFFFFFFFFFB);
	// oris r7,r29,32768
	ctx.r7.u64 = ctx.r29.u64 | 2147483648;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// rlwimi r10,r11,2,0,29
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r10.u64 & 0xFFFFFFFF00000003);
	// rlwimi r9,r10,2,0,29
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 2) & 0xFFFFFFFC) | (ctx.r9.u64 & 0xFFFFFFFF00000003);
	// rlwimi r8,r9,2,0,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 2) & 0xFFFFFFFC) | (ctx.r8.u64 & 0xFFFFFFFF00000003);
	// stwu r8,4(r26)
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r26.u32 = ea;
loc_82B0F2F4:
	// addi r11,r26,4
	ctx.r11.s64 = ctx.r26.s64 + 4;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwimi r27,r10,18,0,15
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r10.u32, 18) & 0xFFFF0000) | (ctx.r27.u64 & 0xFFFFFFFF0000FFFF);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r9,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r9.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0F314"))) PPC_WEAK_FUNC(sub_82B0F314);
PPC_FUNC_IMPL(__imp__sub_82B0F314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0F318"))) PPC_WEAK_FUNC(sub_82B0F318);
PPC_FUNC_IMPL(__imp__sub_82B0F318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B0F320;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// beq cr6,0x82b0f360
	if (ctx.cr6.eq) goto loc_82B0F360;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// beq cr6,0x82b0f378
	if (ctx.cr6.eq) goto loc_82B0F378;
	// bl 0x82a82960
	ctx.lr = 0x82B0F358;
	sub_82A82960(ctx, base);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// b 0x82b0f3b8
	goto loc_82B0F3B8;
loc_82B0F360:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r28,r11,18
	ctx.r28.s64 = ctx.r11.s64 + 18;
	// b 0x82b0f3b8
	goto loc_82B0F3B8;
loc_82B0F378:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// li r28,17
	ctx.r28.s64 = 17;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f390
	if (!ctx.cr6.lt) goto loc_82B0F390;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0F390:
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b0f3ac
	if (!ctx.cr6.eq) goto loc_82B0F3AC;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82b0f3b8
	goto loc_82B0F3B8;
loc_82B0F3AC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82b0f3b8
	if (!ctx.cr6.eq) goto loc_82B0F3B8;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82B0F3B8:
	// cmplwi cr6,r27,16
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 16, ctx.xer);
	// blt cr6,0x82b0f3c4
	if (ctx.cr6.lt) goto loc_82B0F3C4;
	// bl 0x82a82960
	ctx.lr = 0x82B0F3C4;
	sub_82A82960(ctx, base);
loc_82B0F3C4:
	// addi r10,r27,4
	ctx.r10.s64 = ctx.r27.s64 + 4;
	// lwz r9,16(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r11,r27,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// stwx r28,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r28.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r10,16(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r31.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b0f068
	ctx.lr = 0x82B0F400;
	sub_82B0F068(ctx, base);
	// cntlzw r11,r25
	ctx.r11.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,22
	ctx.r10.s64 = 22;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwimi r31,r28,16,10,15
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r28.u32, 16) & 0x3F0000) | (ctx.r31.u64 & 0xFFFFFFFFFFC0FFFF);
	// rlwimi r8,r11,2,29,29
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0x4) | (ctx.r8.u64 & 0xFFFFFFFFFFFFFFFB);
	// clrlwi r9,r31,10
	ctx.r9.u64 = ctx.r31.u32 & 0x3FFFFF;
	// clrlwi r8,r8,29
	ctx.r8.u64 = ctx.r8.u32 & 0x7;
	// rlwimi r7,r8,2,0,29
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 2) & 0xFFFFFFFC) | (ctx.r7.u64 & 0xFFFFFFFF00000003);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwimi r11,r7,2,0,29
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r7.u32, 2) & 0xFFFFFFFC) | (ctx.r11.u64 & 0xFFFFFFFF00000003);
	// rlwimi r6,r11,2,0,29
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 2) & 0xFFFFFFFC) | (ctx.r6.u64 & 0xFFFFFFFF00000003);
	// rlwimi r10,r6,16,0,15
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r6.u32, 16) & 0xFFFF0000) | (ctx.r10.u64 & 0xFFFFFFFF0000FFFF);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r30.u32 = ea;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0F454"))) PPC_WEAK_FUNC(sub_82B0F454);
PPC_FUNC_IMPL(__imp__sub_82B0F454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0F458"))) PPC_WEAK_FUNC(sub_82B0F458);
PPC_FUNC_IMPL(__imp__sub_82B0F458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B0F460;
	__savegprlr_21(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b0f494
	if (ctx.cr6.eq) goto loc_82B0F494;
	// bl 0x82a82960
	ctx.lr = 0x82B0F494;
	sub_82A82960(ctx, base);
loc_82B0F494:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0f4a8
	if (!ctx.cr6.lt) goto loc_82B0F4A8;
	// bl 0x82a82960
	ctx.lr = 0x82B0F4A8;
	sub_82A82960(ctx, base);
loc_82B0F4A8:
	// lwzu r29,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r29.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// lwzu r30,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r30.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r21,r31,4
	ctx.r21.s64 = ctx.r31.s64 + 4;
	// rlwimi r11,r30,12,21,23
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r30.u32, 12) & 0x700) | (ctx.r11.u64 & 0xFFFFFFFFFFFFF8FF);
	// clrlwi r31,r30,21
	ctx.r31.u64 = ctx.r30.u32 & 0x7FF;
	// rlwinm r11,r11,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1F;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82b0f538
	if (!ctx.cr6.eq) goto loc_82B0F538;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0f4f8
	if (ctx.cr6.lt) goto loc_82B0F4F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,5105
	ctx.r5.s64 = 5105;
	// addi r6,r11,-15540
	ctx.r6.s64 = ctx.r11.s64 + -15540;
loc_82B0F4E0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82B0F4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82b0f688
	goto loc_82B0F688;
loc_82B0F4F8:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r4,r29,0,1,4
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x78000000;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0f0c8
	ctx.lr = 0x82B0F508;
	sub_82B0F0C8(ctx, base);
	// lwz r10,8(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f51c
	if (!ctx.cr6.lt) goto loc_82B0F51C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0F51C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r9,12(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// slw r11,r10,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r11.u32);
	// b 0x82b0f680
	goto loc_82B0F680;
loc_82B0F538:
	// rlwinm r27,r30,0,12,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xF0000;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b0f5ac
	if (ctx.cr6.eq) goto loc_82B0F5AC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82b0f570
	if (ctx.cr6.eq) goto loc_82B0F570;
	// cmpwi cr6,r11,17
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 17, ctx.xer);
	// beq cr6,0x82b0f55c
	if (ctx.cr6.eq) goto loc_82B0F55C;
loc_82B0F554:
	// bl 0x82a82960
	ctx.lr = 0x82B0F558;
	sub_82A82960(ctx, base);
	// b 0x82b0f680
	goto loc_82B0F680;
loc_82B0F55C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0f680
	if (!ctx.cr6.lt) goto loc_82B0F680;
	// b 0x82b0f554
	goto loc_82B0F554;
loc_82B0F570:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0f584
	if (ctx.cr6.lt) goto loc_82B0F584;
	// bl 0x82a82960
	ctx.lr = 0x82B0F584;
	sub_82A82960(ctx, base);
loc_82B0F584:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82b0f590
	if (ctx.cr6.lt) goto loc_82B0F590;
	// bl 0x82a82960
	ctx.lr = 0x82B0F590;
	sub_82A82960(ctx, base);
loc_82B0F590:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,5480
	ctx.r7.s64 = ctx.r11.s64 + 5480;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// b 0x82b0f670
	goto loc_82B0F670;
loc_82B0F5AC:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0f634
	if (ctx.cr6.lt) goto loc_82B0F634;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0f5c8
	if (ctx.cr6.lt) goto loc_82B0F5C8;
	// bl 0x82a82960
	ctx.lr = 0x82B0F5C8;
	sub_82A82960(ctx, base);
loc_82B0F5C8:
	// clrlwi r4,r29,28
	ctx.r4.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r6,r30,10,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 10) & 0x1;
	// rlwinm r5,r29,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// cmpwi cr6,r4,10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 10, ctx.xer);
	// bne cr6,0x82b0f5e0
	if (!ctx.cr6.eq) goto loc_82B0F5E0;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82B0F5E0:
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// bne cr6,0x82b0f614
	if (!ctx.cr6.eq) goto loc_82B0F614;
	// cmplwi cr6,r5,8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 8, ctx.xer);
	// blt cr6,0x82b0f614
	if (ctx.cr6.lt) goto loc_82B0F614;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r5,r11,-15656
	ctx.r5.s64 = ctx.r11.s64 + -15656;
	// li r4,200
	ctx.r4.s64 = 200;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fac410
	ctx.lr = 0x82B0F608;
	sub_82FAC410(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,5106
	ctx.r5.s64 = 5106;
	// b 0x82b0f4e0
	goto loc_82B0F4E0;
loc_82B0F614:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r7,r11,5496
	ctx.r7.s64 = ctx.r11.s64 + 5496;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0f168
	ctx.lr = 0x82B0F630;
	sub_82B0F168(ctx, base);
	// b 0x82b0f680
	goto loc_82B0F680;
loc_82B0F634:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b0f648
	if (!ctx.cr6.eq) goto loc_82B0F648;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,5448
	ctx.r30.s64 = ctx.r11.s64 + 5448;
	// b 0x82b0f65c
	goto loc_82B0F65C;
loc_82B0F648:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// addi r30,r11,5464
	ctx.r30.s64 = ctx.r11.s64 + 5464;
	// blt cr6,0x82b0f65c
	if (ctx.cr6.lt) goto loc_82B0F65C;
	// bl 0x82a82960
	ctx.lr = 0x82B0F65C;
	sub_82A82960(ctx, base);
loc_82B0F65C:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B0F670:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x82b0f318
	ctx.lr = 0x82B0F680;
	sub_82B0F318(ctx, base);
loc_82B0F680:
	// stw r21,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0F688:
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0F690"))) PPC_WEAK_FUNC(sub_82B0F690);
PPC_FUNC_IMPL(__imp__sub_82B0F690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B0F698;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r26,16(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0f6bc
	if (ctx.cr6.lt) goto loc_82B0F6BC;
	// bl 0x82a82960
	ctx.lr = 0x82B0F6BC;
	sub_82A82960(ctx, base);
loc_82B0F6BC:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b0f714
	if (!ctx.cr6.gt) goto loc_82B0F714;
loc_82B0F6CC:
	// lwz r11,12(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0f704
	if (ctx.cr0.eq) goto loc_82B0F704;
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0f6ec
	if (ctx.cr6.lt) goto loc_82B0F6EC;
	// bl 0x82a82960
	ctx.lr = 0x82B0F6EC;
	sub_82A82960(ctx, base);
loc_82B0F6EC:
	// lis r11,2048
	ctx.r11.s64 = 134217728;
	// addi r10,r30,4
	ctx.r10.s64 = ctx.r30.s64 + 4;
	// ori r11,r11,25
	ctx.r11.u64 = ctx.r11.u64 | 25;
	// rlwimi r11,r31,16,8,15
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 16) & 0xFF0000) | (ctx.r11.u64 & 0xFFFFFFFFFF00FFFF);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
loc_82B0F704:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0f6cc
	if (ctx.cr6.lt) goto loc_82B0F6CC;
loc_82B0F714:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b0f770
	if (!ctx.cr6.gt) goto loc_82B0F770;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,5480
	ctx.r30.s64 = ctx.r11.s64 + 5480;
loc_82B0F72C:
	// lwz r11,196(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 196);
	// srw r11,r11,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r31.u8 & 0x3F));
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0f760
	if (ctx.cr0.eq) goto loc_82B0F760;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 2;
	// bl 0x82b0f318
	ctx.lr = 0x82B0F760;
	sub_82B0F318(ctx, base);
loc_82B0F760:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0f72c
	if (ctx.cr6.lt) goto loc_82B0F72C;
loc_82B0F770:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r10,5464
	ctx.r30.s64 = ctx.r10.s64 + 5464;
	// addi r28,r11,5448
	ctx.r28.s64 = ctx.r11.s64 + 5448;
loc_82B0F784:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0f7c8
	if (ctx.cr6.eq) goto loc_82B0F7C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// beq cr6,0x82b0f7a8
	if (ctx.cr6.eq) goto loc_82B0F7A8;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
loc_82B0F7A8:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,10
	ctx.r4.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b0f318
	ctx.lr = 0x82B0F7C8;
	sub_82B0F318(ctx, base);
loc_82B0F7C8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82b0f784
	if (ctx.cr6.lt) goto loc_82B0F784;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0F7DC"))) PPC_WEAK_FUNC(sub_82B0F7DC);
PPC_FUNC_IMPL(__imp__sub_82B0F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0F7E0"))) PPC_WEAK_FUNC(sub_82B0F7E0);
PPC_FUNC_IMPL(__imp__sub_82B0F7E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82B0F7E8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r24,16(r5)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0f810
	if (ctx.cr6.lt) goto loc_82B0F810;
	// bl 0x82a82960
	ctx.lr = 0x82B0F810;
	sub_82A82960(ctx, base);
loc_82B0F810:
	// lwz r11,432(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// lwz r22,0(r20)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0f86c
	if (ctx.cr6.eq) goto loc_82B0F86C;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0f86c
	if (ctx.cr0.eq) goto loc_82B0F86C;
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// cmplwi cr6,r11,28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 28, ctx.xer);
	// blt cr6,0x82b0f83c
	if (ctx.cr6.lt) goto loc_82B0F83C;
	// bl 0x82a82960
	ctx.lr = 0x82B0F83C;
	sub_82A82960(ctx, base);
loc_82B0F83C:
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// lwz r10,432(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 432);
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// stw r22,204(r11)
	PPC_STORE_U32(ctx.r11.u32 + 204, ctx.r22.u32);
	// lwz r11,424(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 424);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,424(r24)
	PPC_STORE_U32(ctx.r24.u32 + 424, ctx.r11.u32);
loc_82B0F86C:
	// stw r22,432(r24)
	PPC_STORE_U32(ctx.r24.u32 + 432, ctx.r22.u32);
	// lhz r27,2(r22)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// lwzu r11,4(r22)
	ea = 4 + ctx.r22.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r22.u32 = ea;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0fab0
	if (ctx.cr0.eq) goto loc_82B0FAB0;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// rlwimi r9,r11,12,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// ori r10,r10,260
	ctx.r10.u64 = ctx.r10.u64 | 260;
	// li r21,1
	ctx.r21.s64 = 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// rlwinm r26,r9,24,27,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0x1F;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f9a8
	if (!ctx.cr6.lt) goto loc_82B0F9A8;
	// addi r11,r27,-64
	ctx.r11.s64 = ctx.r27.s64 + -64;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// bgt cr6,0x82b0f900
	if (ctx.cr6.gt) goto loc_82B0F900;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-15496
	ctx.r12.s64 = ctx.r12.s64 + -15496;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// nop 
	// addi r12,r12,-1816
	ctx.r12.s64 = ctx.r12.s64 + -1816;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B0F8F0;
	case 1:
		goto loc_82B0F8F0;
	case 2:
		goto loc_82B0F8E8;
	case 3:
		goto loc_82B0F8E8;
	case 4:
		goto loc_82B0F8E8;
	case 5:
		goto loc_82B0F8F8;
	case 6:
		goto loc_82B0F8F8;
	case 7:
		goto loc_82B0F8F0;
	case 8:
		goto loc_82B0F8E8;
	case 9:
		goto loc_82B0F8F0;
	case 10:
		goto loc_82B0F8E8;
	case 11:
		goto loc_82B0F900;
	case 12:
		goto loc_82B0F8E8;
	case 13:
		goto loc_82B0F8E8;
	case 14:
		goto loc_82B0F900;
	case 15:
		goto loc_82B0F900;
	case 16:
		goto loc_82B0F900;
	case 17:
		goto loc_82B0F900;
	case 18:
		goto loc_82B0F8F8;
	case 19:
		goto loc_82B0F8E8;
	case 20:
		goto loc_82B0F8EC;
	case 21:
		goto loc_82B0F8EC;
	case 22:
		goto loc_82B0F8EC;
	default:
		__builtin_unreachable();
	}
loc_82B0F8E8:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82B0F8EC:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82B0F8F0:
	// mr r28,r21
	ctx.r28.u64 = ctx.r21.u64;
	// b 0x82b0f90c
	goto loc_82B0F90C;
loc_82B0F8F8:
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// b 0x82b0f908
	goto loc_82B0F908;
loc_82B0F900:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82b0f90c
	if (!ctx.cr6.eq) goto loc_82B0F90C;
loc_82B0F908:
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
loc_82B0F90C:
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82b0f918
	if (ctx.cr6.lt) goto loc_82B0F918;
	// bl 0x82a82960
	ctx.lr = 0x82B0F918;
	sub_82A82960(ctx, base);
loc_82B0F918:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82b0fa18
	if (!ctx.cr6.eq) goto loc_82B0FA18;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82b0f95c
	if (ctx.cr6.eq) goto loc_82B0F95C;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r21,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x82b0f944
	if (ctx.cr6.lt) goto loc_82B0F944;
	// bl 0x82a82960
	ctx.lr = 0x82B0F944;
	sub_82A82960(ctx, base);
loc_82B0F944:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f958
	if (!ctx.cr6.lt) goto loc_82B0F958;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0F958:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
loc_82B0F95C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82b0f98c
	if (ctx.cr6.eq) goto loc_82B0F98C;
	// lwz r11,196(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// slw r10,r21,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// stw r10,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r10.u32);
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f988
	if (!ctx.cr6.lt) goto loc_82B0F988;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0F988:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_82B0F98C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82b0fa18
	if (ctx.cr6.eq) goto loc_82B0FA18;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// addi r10,r31,6
	ctx.r10.s64 = ctx.r31.s64 + 6;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r10.u32);
	// b 0x82b0fa18
	goto loc_82B0FA18;
loc_82B0F9A8:
	// beq cr6,0x82b0f9b0
	if (ctx.cr6.eq) goto loc_82B0F9B0;
	// bl 0x82a82960
	ctx.lr = 0x82B0F9B0;
	sub_82A82960(ctx, base);
loc_82B0F9B0:
	// cmplwi cr6,r27,65
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 65, ctx.xer);
	// beq cr6,0x82b0f9f8
	if (ctx.cr6.eq) goto loc_82B0F9F8;
	// cmplwi cr6,r27,66
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 66, ctx.xer);
	// bne cr6,0x82b0fa18
	if (!ctx.cr6.eq) goto loc_82B0FA18;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// slw r10,r21,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// cmplwi cr6,r31,32
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32, ctx.xer);
	// stw r11,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r11.u32);
	// blt cr6,0x82b0f9dc
	if (ctx.cr6.lt) goto loc_82B0F9DC;
	// bl 0x82a82960
	ctx.lr = 0x82B0F9DC;
	sub_82A82960(ctx, base);
loc_82B0F9DC:
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0f9f0
	if (!ctx.cr6.lt) goto loc_82B0F9F0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0F9F0:
	// stw r11,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r11.u32);
	// b 0x82b0fa18
	goto loc_82B0FA18;
loc_82B0F9F8:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82b0fa18
	if (!ctx.cr6.eq) goto loc_82B0FA18;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0fa14
	if (!ctx.cr6.lt) goto loc_82B0FA14;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0FA14:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
loc_82B0FA18:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// b 0x82b0faa8
	goto loc_82B0FAA8;
loc_82B0FA20:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// clrlwi r31,r11,21
	ctx.r31.u64 = ctx.r11.u32 & 0x7FF;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,24,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1F;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82b0fa84
	if (!ctx.cr6.eq) goto loc_82B0FA84;
	// addi r11,r31,41
	ctx.r11.s64 = ctx.r31.s64 + 41;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b0faa4
	if (!ctx.cr6.eq) goto loc_82B0FAA4;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x82b0fa58
	if (ctx.cr6.lt) goto loc_82B0FA58;
	// bl 0x82a82960
	ctx.lr = 0x82B0FA58;
	sub_82A82960(ctx, base);
loc_82B0FA58:
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b0fa6c
	if (!ctx.cr6.lt) goto loc_82B0FA6C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B0FA6C:
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// slw r11,r21,r31
	ctx.r11.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r21.u32 << (ctx.r31.u8 & 0x3F));
	// lwz r10,196(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 196);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,196(r24)
	PPC_STORE_U32(ctx.r24.u32 + 196, ctx.r11.u32);
	// b 0x82b0faa4
	goto loc_82B0FAA4;
loc_82B0FA84:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b0faa4
	if (!ctx.cr6.eq) goto loc_82B0FAA4;
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0fa98
	if (ctx.cr6.lt) goto loc_82B0FA98;
	// bl 0x82a82960
	ctx.lr = 0x82B0FA98;
	sub_82A82960(ctx, base);
loc_82B0FA98:
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stwx r21,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r21.u32);
loc_82B0FAA4:
	// lwzu r11,4(r22)
	ea = 4 + ctx.r22.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r22.u32 = ea;
loc_82B0FAA8:
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b0fa20
	if (!ctx.cr0.eq) goto loc_82B0FA20;
loc_82B0FAB0:
	// stw r22,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r22.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0FABC"))) PPC_WEAK_FUNC(sub_82B0FABC);
PPC_FUNC_IMPL(__imp__sub_82B0FABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0FAC0"))) PPC_WEAK_FUNC(sub_82B0FAC0);
PPC_FUNC_IMPL(__imp__sub_82B0FAC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B0FAC8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0fb74
	if (ctx.cr6.lt) goto loc_82B0FB74;
	// bl 0x82a82960
	ctx.lr = 0x82B0FAF8;
	sub_82A82960(ctx, base);
	// b 0x82b0fb74
	goto loc_82B0FB74;
loc_82B0FAFC:
	// rlwinm. r9,r11,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// bne 0x82b0fba0
	if (!ctx.cr0.eq) goto loc_82B0FBA0;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82b0fb24
	if (!ctx.cr6.eq) goto loc_82B0FB24;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82b0fb60
	goto loc_82B0FB60;
loc_82B0FB24:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x82b0fb5c
	if (ctx.cr6.eq) goto loc_82B0FB5C;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b0fb5c
	if (ctx.cr6.eq) goto loc_82B0FB5C;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82b0fb44
	if (!ctx.cr6.eq) goto loc_82B0FB44;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// b 0x82b0fb60
	goto loc_82B0FB60;
loc_82B0FB44:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b0f7e0
	ctx.lr = 0x82B0FB54;
	sub_82B0F7E0(ctx, base);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82b0fb64
	goto loc_82B0FB64;
loc_82B0FB5C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B0FB60:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82B0FB64:
	// subf r11,r30,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82b0fba0
	if (ctx.cr6.gt) goto loc_82B0FBA0;
loc_82B0FB74:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bne cr6,0x82b0fafc
	if (!ctx.cr6.eq) goto loc_82B0FAFC;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bne cr6,0x82b0fba0
	if (!ctx.cr6.eq) goto loc_82B0FBA0;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0FB98:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82B0FBA0:
	// bl 0x82a82960
	ctx.lr = 0x82B0FBA4;
	sub_82A82960(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82b0fb98
	goto loc_82B0FB98;
}

__attribute__((alias("__imp__sub_82B0FBAC"))) PPC_WEAK_FUNC(sub_82B0FBAC);
PPC_FUNC_IMPL(__imp__sub_82B0FBAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0FBB0"))) PPC_WEAK_FUNC(sub_82B0FBB0);
PPC_FUNC_IMPL(__imp__sub_82B0FBB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0FBB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addi r11,r11,16379
	ctx.r11.s64 = ctx.r11.s64 + 16379;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691410
	ctx.lr = 0x82B0FBE4;
	sub_82691410(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b0fbfc
	if (!ctx.cr0.eq) goto loc_82B0FBFC;
	// bl 0x82a82960
	ctx.lr = 0x82B0FBF0;
	sub_82A82960(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82b0fc3c
	goto loc_82B0FC3C;
loc_82B0FBFC:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b0fc2c
	if (ctx.cr6.eq) goto loc_82B0FC2C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0fc20
	if (ctx.cr6.eq) goto loc_82B0FC20;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B0FC20;
	sub_82FA77C0(ctx, base);
loc_82B0FC20:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82B0FC2C;
	sub_82691460(ctx, base);
loc_82B0FC2C:
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82B0FC3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0FC44"))) PPC_WEAK_FUNC(sub_82B0FC44);
PPC_FUNC_IMPL(__imp__sub_82B0FC44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0FC48"))) PPC_WEAK_FUNC(sub_82B0FC48);
PPC_FUNC_IMPL(__imp__sub_82B0FC48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0FC50;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82b0fc7c
	if (ctx.cr6.lt) goto loc_82B0FC7C;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82b0fc80
	if (!ctx.cr6.gt) goto loc_82B0FC80;
loc_82B0FC7C:
	// bl 0x82a82960
	ctx.lr = 0x82B0FC80;
	sub_82A82960(ctx, base);
loc_82B0FC80:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// bge cr6,0x82b0fcc8
	if (!ctx.cr6.lt) goto loc_82B0FCC8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82b0fbb0
	ctx.lr = 0x82B0FCB0;
	sub_82B0FBB0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82B0FCC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0FCD4"))) PPC_WEAK_FUNC(sub_82B0FCD4);
PPC_FUNC_IMPL(__imp__sub_82B0FCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B0FCD8"))) PPC_WEAK_FUNC(sub_82B0FCD8);
PPC_FUNC_IMPL(__imp__sub_82B0FCD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B0FCE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82b0fc48
	ctx.lr = 0x82B0FCFC;
	sub_82B0FC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b0fd0c
	if (ctx.cr0.eq) goto loc_82B0FD0C;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b0fdf8
	goto loc_82B0FDF8;
loc_82B0FD0C:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,512
	ctx.r11.u64 = ctx.r11.u64 | 512;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0fd44
	if (!ctx.cr6.lt) goto loc_82B0FD44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,87
	ctx.r9.s64 = 5701632;
	// li r8,341
	ctx.r8.s64 = 341;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// b 0x82b0fdec
	goto loc_82B0FDEC;
loc_82B0FD44:
	// lis r11,-1
	ctx.r11.s64 = -65536;
	// ori r11,r11,768
	ctx.r11.u64 = ctx.r11.u64 | 768;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b0fdb4
	if (!ctx.cr6.lt) goto loc_82B0FDB4;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B0FD68:
	// lwz r9,160(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 160);
	// srw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 >> (ctx.r10.u8 & 0x3F));
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b0fda8
	if (ctx.cr0.eq) goto loc_82B0FDA8;
	// li r7,23
	ctx.r7.s64 = 23;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// li r6,14
	ctx.r6.s64 = 14;
	// rlwimi r9,r7,16,0,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 16) & 0xFFFF0000) | (ctx.r9.u64 & 0xFFFFFFFF0000FFFF);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// addi r7,r10,35
	ctx.r7.s64 = ctx.r10.s64 + 35;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwimi r7,r9,18,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 18) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// stwu r7,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r7.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82B0FDA8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b0fd68
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0FD68;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82B0FDB4:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0fdf4
	if (ctx.cr6.eq) goto loc_82B0FDF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,71
	ctx.r10.s64 = 71;
	// lis r9,88
	ctx.r9.s64 = 5767168;
	// li r8,341
	ctx.r8.s64 = 341;
	// lis r7,4
	ctx.r7.s64 = 262144;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// ori r10,r7,34
	ctx.r10.u64 = ctx.r7.u64 | 34;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
loc_82B0FDEC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82B0FDF4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0FDF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0FE00"))) PPC_WEAK_FUNC(sub_82B0FE00);
PPC_FUNC_IMPL(__imp__sub_82B0FE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82B0FE08;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,12
	ctx.r11.s64 = ctx.r6.s64 + 12;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// stw r11,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r11.u32);
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// stw r7,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r7.u32);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r9,16(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lwz r27,0(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r27,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFF0000;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r27,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r27.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82b0fe60
	if (ctx.cr6.eq) goto loc_82B0FE60;
	// bl 0x82a82960
	ctx.lr = 0x82B0FE60;
	sub_82A82960(ctx, base);
loc_82B0FE60:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r20,r31,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bne cr6,0x82b0fe7c
	if (!ctx.cr6.eq) goto loc_82B0FE7C;
	// bl 0x82a82960
	ctx.lr = 0x82B0FE78;
	sub_82A82960(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82B0FE7C:
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// ori r23,r10,512
	ctx.r23.u64 = ctx.r10.u64 | 512;
	// li r10,2
	ctx.r10.s64 = 2;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82b0fe94
	if (ctx.cr6.lt) goto loc_82B0FE94;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82B0FE94:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ori r10,r10,256
	ctx.r10.u64 = ctx.r10.u64 | 256;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bge cr6,0x82b0ff00
	if (!ctx.cr6.lt) goto loc_82B0FF00;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b0fac0
	ctx.lr = 0x82B0FED4;
	sub_82B0FAC0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0fc48
	ctx.lr = 0x82B0FEE0;
	sub_82B0FC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b0fef0
	if (ctx.cr0.eq) goto loc_82B0FEF0;
loc_82B0FEE8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82b101dc
	goto loc_82B101DC;
loc_82B0FEF0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0f690
	ctx.lr = 0x82B0FF00;
	sub_82B0F690(ctx, base);
loc_82B0FF00:
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// beq cr6,0x82b10148
	if (ctx.cr6.eq) goto loc_82B10148;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r25,r11,-25872
	ctx.r25.s64 = ctx.r11.s64 + -25872;
loc_82B0FF1C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0fc48
	ctx.lr = 0x82B0FF28;
	sub_82B0FC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82b0fee8
	if (!ctx.cr0.eq) goto loc_82B0FEE8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r22,80(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r11,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// beq 0x82b0ff50
	if (ctx.cr0.eq) goto loc_82B0FF50;
loc_82B0FF48:
	// bl 0x82a82960
	ctx.lr = 0x82B0FF4C;
	sub_82A82960(ctx, base);
	// b 0x82b1010c
	goto loc_82B1010C;
loc_82B0FF50:
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82b0ff6c
	if (!ctx.cr6.eq) goto loc_82B0FF6C;
	// rlwinm r11,r11,16,17,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x7FFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// b 0x82b10108
	goto loc_82B10108;
loc_82B0FF6C:
	// cmplwi cr6,r10,65533
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65533, ctx.xer);
	// beq cr6,0x82b10104
	if (ctx.cr6.eq) goto loc_82B10104;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b10104
	if (ctx.cr6.eq) goto loc_82B10104;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82b0ffa8
	if (!ctx.cr6.eq) goto loc_82B0FFA8;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82b0ffa0
	if (ctx.cr6.lt) goto loc_82B0FFA0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b0ef08
	ctx.lr = 0x82B0FF9C;
	sub_82B0EF08(ctx, base);
	// b 0x82b1010c
	goto loc_82B1010C;
loc_82B0FFA0:
	// addi r11,r9,24
	ctx.r11.s64 = ctx.r9.s64 + 24;
	// b 0x82b10108
	goto loc_82B10108;
loc_82B0FFA8:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82b0ffc4
	if (!ctx.cr6.eq) goto loc_82B0FFC4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b0efb8
	ctx.lr = 0x82B0FFC0;
	sub_82B0EFB8(ctx, base);
	// b 0x82b1010c
	goto loc_82B1010C;
loc_82B0FFC4:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// bne cr6,0x82b10048
	if (!ctx.cr6.eq) goto loc_82B10048;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82b0ffdc
	if (!ctx.cr6.lt) goto loc_82B0FFDC;
	// bl 0x82a82960
	ctx.lr = 0x82B0FFD8;
	sub_82A82960(ctx, base);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B0FFDC:
	// lwz r29,4(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r30,r29,21
	ctx.r30.u64 = ctx.r29.u32 & 0x7FF;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82b10000
	if (ctx.cr6.lt) goto loc_82B10000;
	// bl 0x82a82960
	ctx.lr = 0x82B0FFFC;
	sub_82A82960(ctx, base);
	// li r30,15
	ctx.r30.s64 = 15;
loc_82B10000:
	// rlwimi r29,r29,12,21,23
	ctx.r29.u64 = (__builtin_rotateleft32(ctx.r29.u32, 12) & 0x700) | (ctx.r29.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r29,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,3584
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3584, ctx.xer);
	// beq cr6,0x82b10014
	if (ctx.cr6.eq) goto loc_82B10014;
	// bl 0x82a82960
	ctx.lr = 0x82B10014;
	sub_82A82960(ctx, base);
loc_82B10014:
	// li r11,29
	ctx.r11.s64 = 29;
	// clrlwi r10,r30,16
	ctx.r10.u64 = ctx.r30.u32 & 0xFFFF;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r11,r28,4
	ctx.r11.s64 = ctx.r28.s64 + 4;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stwu r10,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r31.u32 = ea;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82b1010c
	goto loc_82B1010C;
loc_82B10048:
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82b10084
	if (!ctx.cr6.eq) goto loc_82B10084;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82b1005c
	if (!ctx.cr6.lt) goto loc_82B1005C;
	// bl 0x82a82960
	ctx.lr = 0x82B1005C;
	sub_82A82960(ctx, base);
loc_82B1005C:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82b0f458
	ctx.lr = 0x82B10078;
	sub_82B0F458(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b101dc
	if (!ctx.cr0.eq) goto loc_82B101DC;
	// b 0x82b1010c
	goto loc_82B1010C;
loc_82B10084:
	// cmplwi cr6,r10,28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 28, ctx.xer);
	// bne cr6,0x82b100d0
	if (!ctx.cr6.eq) goto loc_82B100D0;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b100d8
	if (!ctx.cr6.eq) goto loc_82B100D8;
	// cmplw cr6,r27,r23
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r23.u32, ctx.xer);
	// bge cr6,0x82b100a8
	if (!ctx.cr6.lt) goto loc_82B100A8;
	// bl 0x82a82960
	ctx.lr = 0x82B100A8;
	sub_82A82960(ctx, base);
loc_82B100A8:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0fcd8
	ctx.lr = 0x82B100BC;
	sub_82B0FCD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b101dc
	if (!ctx.cr0.eq) goto loc_82B101DC;
	// lwz r11,228(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 228);
	// lwz r5,224(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// b 0x82b100e8
	goto loc_82B100E8;
loc_82B100D0:
	// cmplwi cr6,r10,97
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 97, ctx.xer);
	// bge cr6,0x82b0ff48
	if (!ctx.cr6.lt) goto loc_82B0FF48;
loc_82B100D8:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r25,4
	ctx.r10.s64 = ctx.r25.s64 + 4;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
loc_82B100E8:
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// lwz r6,16(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82B10100;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b1010c
	goto loc_82B1010C;
loc_82B10104:
	// addi r11,r9,4
	ctx.r11.s64 = ctx.r9.s64 + 4;
loc_82B10108:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82B1010C:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r21,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r21.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x82b101e4
	if (ctx.cr6.gt) goto loc_82B101E4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r22,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r22.s64;
	// rlwinm r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r11,1024
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1024, ctx.xer);
	// blt cr6,0x82b10138
	if (ctx.cr6.lt) goto loc_82B10138;
	// bl 0x82a82960
	ctx.lr = 0x82B10138;
	sub_82A82960(ctx, base);
loc_82B10138:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82b0ff1c
	if (!ctx.cr6.eq) goto loc_82B0FF1C;
loc_82B10148:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// subf r10,r21,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r21.s64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82b101e8
	if (!ctx.cr6.eq) goto loc_82B101E8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b0fc48
	ctx.lr = 0x82B1016C;
	sub_82B0FC48(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82b0fee8
	if (!ctx.cr0.eq) goto loc_82B0FEE8;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b101a0
	if (!ctx.cr6.eq) goto loc_82B101A0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b0fcd8
	ctx.lr = 0x82B10198;
	sub_82B0FCD8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b101dc
	if (!ctx.cr0.eq) goto loc_82B101DC;
loc_82B101A0:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,40
	ctx.r10.s64 = 40;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// ble cr6,0x82b101d8
	if (!ctx.cr6.gt) goto loc_82B101D8;
	// bl 0x82a82960
	ctx.lr = 0x82B101D8;
	sub_82A82960(ctx, base);
loc_82B101D8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B101DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82B101E4:
	// bl 0x82a82960
	ctx.lr = 0x82B101E8;
	sub_82A82960(ctx, base);
loc_82B101E8:
	// bl 0x82a82960
	ctx.lr = 0x82B101EC;
	sub_82A82960(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82b101dc
	goto loc_82B101DC;
}

__attribute__((alias("__imp__sub_82B101F4"))) PPC_WEAK_FUNC(sub_82B101F4);
PPC_FUNC_IMPL(__imp__sub_82B101F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B101F8"))) PPC_WEAK_FUNC(sub_82B101F8);
PPC_FUNC_IMPL(__imp__sub_82B101F8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// subfic r9,r5,32
	ctx.xer.ca = ctx.r5.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r5.s64;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r8,r10,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	// lbzx r7,r10,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// lbz r6,3(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// subf r10,r5,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r8,2(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r6,r6,8
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// lbz r11,1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r10,33
	ctx.r10.s64 = ctx.r10.s64 + 33;
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// rlwinm r8,r8,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// or r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 | ctx.r7.u64;
	// slw r11,r11,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// srw r3,r11,r9
	ctx.r3.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r9.u8 & 0x3F));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B1024C"))) PPC_WEAK_FUNC(sub_82B1024C);
PPC_FUNC_IMPL(__imp__sub_82B1024C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B10250"))) PPC_WEAK_FUNC(sub_82B10250);
PPC_FUNC_IMPL(__imp__sub_82B10250) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B10258;
	__savegprlr_28(ctx, base);
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// li r7,4
	ctx.r7.s64 = 4;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// li r31,-1
	ctx.r31.s64 = -1;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// subf r10,r10,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r10.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lbz r4,3(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lbz r3,2(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r4,r4,8
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// subfic r29,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r29.s64 = 32 - ctx.r10.s64;
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// or r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 | ctx.r3.u64;
	// subf r7,r5,r29
	ctx.r7.s64 = ctx.r29.s64 - ctx.r5.s64;
	// rlwinm r5,r4,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// srw r7,r31,r7
	ctx.r7.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r31.u32 >> (ctx.r7.u8 & 0x3F));
	// or r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 | ctx.r30.u64;
	// srw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// rlwinm r5,r5,8,0,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// or r6,r5,r28
	ctx.r6.u64 = ctx.r5.u64 | ctx.r28.u64;
	// and r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	// andc r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// or r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 | ctx.r10.u64;
loc_82B102D0:
	// srw r7,r10,r9
	ctx.r7.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r9.u8 & 0x3F));
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// stbx r7,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82b102d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B102D0;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B102EC"))) PPC_WEAK_FUNC(sub_82B102EC);
PPC_FUNC_IMPL(__imp__sub_82B102EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B102F0"))) PPC_WEAK_FUNC(sub_82B102F0);
PPC_FUNC_IMPL(__imp__sub_82B102F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B102F8;
	__savegprlr_25(ctx, base);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r25,-31961
	ctx.r25.s64 = -2094596096;
	// stw r4,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r4.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,-24056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -24056);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1034c
	if (!ctx.cr6.eq) goto loc_82B1034C;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// lwz r10,-24048(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24048);
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82b10530
	goto loc_82B10530;
loc_82B1034C:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// blt cr6,0x82b10380
	if (ctx.cr6.lt) goto loc_82B10380;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r10,-24056(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + -24056);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r11,r11,-24044
	ctx.r11.s64 = ctx.r11.s64 + -24044;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// addi r5,r9,-15220
	ctx.r5.s64 = ctx.r9.s64 + -15220;
	// addi r4,r8,-15228
	ctx.r4.s64 = ctx.r8.s64 + -15228;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -16);
	// b 0x82b10460
	goto loc_82B10460;
loc_82B10380:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mulli r26,r29,12
	ctx.r26.s64 = ctx.r29.s64 * 12;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b103ac
	if (!ctx.cr6.eq) goto loc_82B103AC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82b10534
	if (!ctx.cr6.eq) goto loc_82B10534;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b10534
	if (ctx.cr6.eq) goto loc_82B10534;
loc_82B103AC:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r31,r11,-25096
	ctx.r31.s64 = ctx.r11.s64 + -25096;
	// li r4,1022
	ctx.r4.s64 = 1022;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r28,80(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// bl 0x82fad3e8
	ctx.lr = 0x82B103D4;
	sub_82FAD3E8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stb r11,1022(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1022, ctx.r11.u8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r10,5204
	ctx.r5.s64 = ctx.r10.s64 + 5204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1023
	ctx.r4.s64 = 1023;
	// bl 0x82fac410
	ctx.lr = 0x82B103F4;
	sub_82FAC410(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// stb r11,1023(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1023, ctx.r11.u8);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r10,-24044
	ctx.r30.s64 = ctx.r10.s64 + -24044;
	// beq cr6,0x82b10414
	if (ctx.cr6.eq) goto loc_82B10414;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82b10438
	if (!ctx.cr6.eq) goto loc_82B10438;
loc_82B10414:
	// addi r11,r29,-3
	ctx.r11.s64 = ctx.r29.s64 + -3;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B10438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B10438:
	// lwzx r11,r26,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b10468
	if (!ctx.cr6.eq) goto loc_82B10468;
	// lwz r11,-24056(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + -24056);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r10,-15228
	ctx.r4.s64 = ctx.r10.s64 + -15228;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B10460:
	// bctrl 
	ctx.lr = 0x82B10464;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b10534
	goto loc_82B10534;
loc_82B10468:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82b10520
	if (!ctx.cr6.eq) goto loc_82B10520;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r11,-24072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24072);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b10520
	if (ctx.cr6.eq) goto loc_82B10520;
	// lis r27,-31961
	ctx.r27.s64 = -2094596096;
	// lwz r11,-24064(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24064);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b10520
	if (ctx.cr6.eq) goto loc_82B10520;
	// lis r28,-31961
	ctx.r28.s64 = -2094596096;
	// lwz r11,-24068(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b10520
	if (ctx.cr6.eq) goto loc_82B10520;
	// lwz r11,-24072(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24072);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r4,r10,-15240
	ctx.r4.s64 = ctx.r10.s64 + -15240;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B104BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82b10534
	if (ctx.cr0.eq) goto loc_82B10534;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82B104CC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b104cc
	if (!ctx.cr6.eq) goto loc_82B104CC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r10,-24064(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24064);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bctrl 
	ctx.lr = 0x82B10508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-24068(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -24068);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B1051C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82b10534
	goto loc_82B10534;
loc_82B10520:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r3,-16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// lwz r11,-24048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24048);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B10530:
	// bctrl 
	ctx.lr = 0x82B10534;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B10534:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B1053C"))) PPC_WEAK_FUNC(sub_82B1053C);
PPC_FUNC_IMPL(__imp__sub_82B1053C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B10540"))) PPC_WEAK_FUNC(sub_82B10540);
PPC_FUNC_IMPL(__imp__sub_82B10540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,-24072(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24072);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r10,-24064(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24064);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r10,-24068(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24068);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,-24072(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24072);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r3,-24060(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B10590"))) PPC_WEAK_FUNC(sub_82B10590);
PPC_FUNC_IMPL(__imp__sub_82B10590) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B10594"))) PPC_WEAK_FUNC(sub_82B10594);
PPC_FUNC_IMPL(__imp__sub_82B10594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B10598"))) PPC_WEAK_FUNC(sub_82B10598);
PPC_FUNC_IMPL(__imp__sub_82B10598) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r10,-24068(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24068);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,-24068(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24068);
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lwz r3,-24060(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -24060);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B105C8"))) PPC_WEAK_FUNC(sub_82B105C8);
PPC_FUNC_IMPL(__imp__sub_82B105C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B105CC"))) PPC_WEAK_FUNC(sub_82B105CC);
PPC_FUNC_IMPL(__imp__sub_82B105CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B105D0"))) PPC_WEAK_FUNC(sub_82B105D0);
PPC_FUNC_IMPL(__imp__sub_82B105D0) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B105D8;
	__savegprlr_28(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r31,-31961
	ctx.r31.s64 = -2094596096;
	// addi r30,r11,-24044
	ctx.r30.s64 = ctx.r11.s64 + -24044;
	// lis r29,-31961
	ctx.r29.s64 = -2094596096;
	// lis r28,-31961
	ctx.r28.s64 = -2094596096;
	// stw r10,-24044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24044, ctx.r10.u32);
	// stw r5,-24072(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24072, ctx.r5.u32);
	// stw r3,-16(r30)
	PPC_STORE_U32(ctx.r30.u32 + -16, ctx.r3.u32);
	// stw r4,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r4.u32);
	// stw r6,-24068(r29)
	PPC_STORE_U32(ctx.r29.u32 + -24068, ctx.r6.u32);
	// stw r7,-24064(r28)
	PPC_STORE_U32(ctx.r28.u32 + -24064, ctx.r7.u32);
	// stw r8,-8(r30)
	PPC_STORE_U32(ctx.r30.u32 + -8, ctx.r8.u32);
	// stw r9,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r9.u32);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B10610"))) PPC_WEAK_FUNC(sub_82B10610);
PPC_FUNC_IMPL(__imp__sub_82B10610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82B10660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B10670"))) PPC_WEAK_FUNC(sub_82B10670);
PPC_FUNC_IMPL(__imp__sub_82B10670) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B10678;
	__savegprlr_14(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r9,r10,6472
	ctx.r9.s64 = ctx.r10.s64 + 6472;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r11,r11,13904
	ctx.r11.s64 = ctx.r11.s64 + 13904;
	// stw r10,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r10.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-760(r8)
	PPC_STORE_U32(ctx.r8.u32 + -760, ctx.r11.u32);
	// addi r10,r10,13900
	ctx.r10.s64 = ctx.r10.s64 + 13900;
	// addi r9,r9,2684
	ctx.r9.s64 = ctx.r9.s64 + 2684;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// stw r10,-756(r11)
	PPC_STORE_U32(ctx.r11.u32 + -756, ctx.r10.u32);
	// stw r9,-752(r11)
	PPC_STORE_U32(ctx.r11.u32 + -752, ctx.r9.u32);
	// addi r10,r7,-14668
	ctx.r10.s64 = ctx.r7.s64 + -14668;
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// addi r11,r8,-10276
	ctx.r11.s64 = ctx.r8.s64 + -10276;
	// addi r9,r6,-14676
	ctx.r9.s64 = ctx.r6.s64 + -14676;
	// lwz r8,-192(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r11,-748(r8)
	PPC_STORE_U32(ctx.r8.u32 + -748, ctx.r11.u32);
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// stw r10,-744(r8)
	PPC_STORE_U32(ctx.r8.u32 + -744, ctx.r10.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// stw r9,-740(r8)
	PPC_STORE_U32(ctx.r8.u32 + -740, ctx.r9.u32);
	// addi r11,r5,-14684
	ctx.r11.s64 = ctx.r5.s64 + -14684;
	// stw r8,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r8.u32);
	// addi r10,r4,-14692
	ctx.r10.s64 = ctx.r4.s64 + -14692;
	// addi r9,r3,-14700
	ctx.r9.s64 = ctx.r3.s64 + -14700;
	// stw r11,-736(r8)
	PPC_STORE_U32(ctx.r8.u32 + -736, ctx.r11.u32);
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// stw r10,-732(r8)
	PPC_STORE_U32(ctx.r8.u32 + -732, ctx.r10.u32);
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// stw r9,-728(r8)
	PPC_STORE_U32(ctx.r8.u32 + -728, ctx.r9.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// addi r11,r31,13872
	ctx.r11.s64 = ctx.r31.s64 + 13872;
	// addi r10,r30,13864
	ctx.r10.s64 = ctx.r30.s64 + 13864;
	// addi r9,r29,13860
	ctx.r9.s64 = ctx.r29.s64 + 13860;
	// stw r11,-724(r8)
	PPC_STORE_U32(ctx.r8.u32 + -724, ctx.r11.u32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// stw r10,-720(r8)
	PPC_STORE_U32(ctx.r8.u32 + -720, ctx.r10.u32);
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// stw r9,-716(r8)
	PPC_STORE_U32(ctx.r8.u32 + -716, ctx.r9.u32);
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// addi r11,r28,-14516
	ctx.r11.s64 = ctx.r28.s64 + -14516;
	// addi r10,r27,13844
	ctx.r10.s64 = ctx.r27.s64 + 13844;
	// addi r9,r26,13836
	ctx.r9.s64 = ctx.r26.s64 + 13836;
	// stw r11,-712(r8)
	PPC_STORE_U32(ctx.r8.u32 + -712, ctx.r11.u32);
	// stw r10,-708(r8)
	PPC_STORE_U32(ctx.r8.u32 + -708, ctx.r10.u32);
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// stw r9,-704(r8)
	PPC_STORE_U32(ctx.r8.u32 + -704, ctx.r9.u32);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// addi r31,r31,-14600
	ctx.r31.s64 = ctx.r31.s64 + -14600;
	// addi r30,r30,-14608
	ctx.r30.s64 = ctx.r30.s64 + -14608;
	// addi r29,r29,-14616
	ctx.r29.s64 = ctx.r29.s64 + -14616;
	// addi r28,r28,-14624
	ctx.r28.s64 = ctx.r28.s64 + -14624;
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// addi r11,r11,13832
	ctx.r11.s64 = ctx.r11.s64 + 13832;
	// addi r10,r10,13828
	ctx.r10.s64 = ctx.r10.s64 + 13828;
	// addi r9,r9,13820
	ctx.r9.s64 = ctx.r9.s64 + 13820;
	// addi r8,r8,13812
	ctx.r8.s64 = ctx.r8.s64 + 13812;
	// addi r7,r7,13804
	ctx.r7.s64 = ctx.r7.s64 + 13804;
	// lwz r25,-192(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r24,-31975
	ctx.r24.s64 = -2095513600;
	// addi r3,r3,-14416
	ctx.r3.s64 = ctx.r3.s64 + -14416;
	// stw r31,-180(r1)
	PPC_STORE_U32(ctx.r1.u32 + -180, ctx.r31.u32);
	// addi r23,r24,5832
	ctx.r23.s64 = ctx.r24.s64 + 5832;
	// stw r30,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r30.u32);
	// addi r6,r6,-14532
	ctx.r6.s64 = ctx.r6.s64 + -14532;
	// stw r29,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r29.u32);
	// addi r5,r5,-14384
	ctx.r5.s64 = ctx.r5.s64 + -14384;
	// stw r28,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r28.u32);
	// stw r8,-688(r25)
	PPC_STORE_U32(ctx.r25.u32 + -688, ctx.r8.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r3,-668(r25)
	PPC_STORE_U32(ctx.r25.u32 + -668, ctx.r3.u32);
	// addi r4,r4,-14400
	ctx.r4.s64 = ctx.r4.s64 + -14400;
	// stw r31,-664(r25)
	PPC_STORE_U32(ctx.r25.u32 + -664, ctx.r31.u32);
	// addi r27,r27,13704
	ctx.r27.s64 = ctx.r27.s64 + 13704;
	// stw r30,-660(r25)
	PPC_STORE_U32(ctx.r25.u32 + -660, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-656(r25)
	PPC_STORE_U32(ctx.r25.u32 + -656, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r10,-696(r25)
	PPC_STORE_U32(ctx.r25.u32 + -696, ctx.r10.u32);
	// addi r26,r26,14060
	ctx.r26.s64 = ctx.r26.s64 + 14060;
	// li r30,3
	ctx.r30.s64 = 3;
	// stw r7,-684(r25)
	PPC_STORE_U32(ctx.r25.u32 + -684, ctx.r7.u32);
	// li r29,3
	ctx.r29.s64 = 3;
	// stw r8,16(r23)
	PPC_STORE_U32(ctx.r23.u32 + 16, ctx.r8.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r28,-652(r25)
	PPC_STORE_U32(ctx.r25.u32 + -652, ctx.r28.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r27,-648(r25)
	PPC_STORE_U32(ctx.r25.u32 + -648, ctx.r27.u32);
	// stw r6,-680(r25)
	PPC_STORE_U32(ctx.r25.u32 + -680, ctx.r6.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r5,-676(r25)
	PPC_STORE_U32(ctx.r25.u32 + -676, ctx.r5.u32);
	// li r28,3
	ctx.r28.s64 = 3;
	// stw r4,-672(r25)
	PPC_STORE_U32(ctx.r25.u32 + -672, ctx.r4.u32);
	// li r27,3
	ctx.r27.s64 = 3;
	// stw r3,36(r23)
	PPC_STORE_U32(ctx.r23.u32 + 36, ctx.r3.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// stw r31,40(r23)
	PPC_STORE_U32(ctx.r23.u32 + 40, ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r11,-700(r25)
	PPC_STORE_U32(ctx.r25.u32 + -700, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,-692(r25)
	PPC_STORE_U32(ctx.r25.u32 + -692, ctx.r9.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// stw r26,-644(r25)
	PPC_STORE_U32(ctx.r25.u32 + -644, ctx.r26.u32);
	// stw r30,44(r23)
	PPC_STORE_U32(ctx.r23.u32 + 44, ctx.r30.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r29,48(r23)
	PPC_STORE_U32(ctx.r23.u32 + 48, ctx.r29.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r25,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r25.u32);
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// stw r10,8(r23)
	PPC_STORE_U32(ctx.r23.u32 + 8, ctx.r10.u32);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// li r25,2
	ctx.r25.s64 = 2;
	// stw r7,20(r23)
	PPC_STORE_U32(ctx.r23.u32 + 20, ctx.r7.u32);
	// li r26,2
	ctx.r26.s64 = 2;
	// stw r8,76(r23)
	PPC_STORE_U32(ctx.r23.u32 + 76, ctx.r8.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r7,80(r23)
	PPC_STORE_U32(ctx.r23.u32 + 80, ctx.r7.u32);
	// stw r28,52(r23)
	PPC_STORE_U32(ctx.r23.u32 + 52, ctx.r28.u32);
	// addi r8,r3,-14648
	ctx.r8.s64 = ctx.r3.s64 + -14648;
	// stw r27,56(r23)
	PPC_STORE_U32(ctx.r23.u32 + 56, ctx.r27.u32);
	// addi r7,r31,-14660
	ctx.r7.s64 = ctx.r31.s64 + -14660;
	// stw r6,24(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24, ctx.r6.u32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// stw r5,28(r23)
	PPC_STORE_U32(ctx.r23.u32 + 28, ctx.r5.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// stw r4,32(r23)
	PPC_STORE_U32(ctx.r23.u32 + 32, ctx.r4.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r9,12(r23)
	PPC_STORE_U32(ctx.r23.u32 + 12, ctx.r9.u32);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// stw r25,5832(r24)
	PPC_STORE_U32(ctx.r24.u32 + 5832, ctx.r25.u32);
	// addi r3,r30,13612
	ctx.r3.s64 = ctx.r30.s64 + 13612;
	// stw r26,60(r23)
	PPC_STORE_U32(ctx.r23.u32 + 60, ctx.r26.u32);
	// addi r31,r29,-10284
	ctx.r31.s64 = ctx.r29.s64 + -10284;
	// stw r11,64(r23)
	PPC_STORE_U32(ctx.r23.u32 + 64, ctx.r11.u32);
	// stw r10,68(r23)
	PPC_STORE_U32(ctx.r23.u32 + 68, ctx.r10.u32);
	// stw r9,72(r23)
	PPC_STORE_U32(ctx.r23.u32 + 72, ctx.r9.u32);
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r6,r6,13664
	ctx.r6.s64 = ctx.r6.s64 + 13664;
	// stw r11,84(r23)
	PPC_STORE_U32(ctx.r23.u32 + 84, ctx.r11.u32);
	// addi r30,r28,-14424
	ctx.r30.s64 = ctx.r28.s64 + -14424;
	// stw r11,96(r23)
	PPC_STORE_U32(ctx.r23.u32 + 96, ctx.r11.u32);
	// addi r29,r27,-14432
	ctx.r29.s64 = ctx.r27.s64 + -14432;
	// stw r11,108(r23)
	PPC_STORE_U32(ctx.r23.u32 + 108, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r23)
	PPC_STORE_U32(ctx.r23.u32 + 92, ctx.r9.u32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// stw r6,-400(r10)
	PPC_STORE_U32(ctx.r10.u32 + -400, ctx.r6.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,104(r23)
	PPC_STORE_U32(ctx.r23.u32 + 104, ctx.r9.u32);
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// stw r10,88(r23)
	PPC_STORE_U32(ctx.r23.u32 + 88, ctx.r10.u32);
	// lis r25,-32227
	ctx.r25.s64 = -2112028672;
	// stw r10,100(r23)
	PPC_STORE_U32(ctx.r23.u32 + 100, ctx.r10.u32);
	// lis r24,-32227
	ctx.r24.s64 = -2112028672;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// stw r11,-520(r10)
	PPC_STORE_U32(ctx.r10.u32 + -520, ctx.r11.u32);
	// lis r21,-32242
	ctx.r21.s64 = -2113011712;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r5,r5,-14636
	ctx.r5.s64 = ctx.r5.s64 + -14636;
	// stw r11,-508(r9)
	PPC_STORE_U32(ctx.r9.u32 + -508, ctx.r11.u32);
	// addi r4,r4,13644
	ctx.r4.s64 = ctx.r4.s64 + 13644;
	// stw r10,112(r23)
	PPC_STORE_U32(ctx.r23.u32 + 112, ctx.r10.u32);
	// addi r28,r28,-14440
	ctx.r28.s64 = ctx.r28.s64 + -14440;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r27,r27,-14448
	ctx.r27.s64 = ctx.r27.s64 + -14448;
	// stw r11,-496(r10)
	PPC_STORE_U32(ctx.r10.u32 + -496, ctx.r11.u32);
	// addi r26,r26,-14456
	ctx.r26.s64 = ctx.r26.s64 + -14456;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,116(r23)
	PPC_STORE_U32(ctx.r23.u32 + 116, ctx.r9.u32);
	// lis r23,-32227
	ctx.r23.s64 = -2112028672;
	// lwz r9,-192(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r25,r25,13564
	ctx.r25.s64 = ctx.r25.s64 + 13564;
	// stw r10,-516(r9)
	PPC_STORE_U32(ctx.r9.u32 + -516, ctx.r10.u32);
	// addi r24,r24,13556
	ctx.r24.s64 = ctx.r24.s64 + 13556;
	// stw r9,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r9.u32);
	// addi r23,r23,13552
	ctx.r23.s64 = ctx.r23.s64 + 13552;
	// lwz r10,-192(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// addi r22,r22,13540
	ctx.r22.s64 = ctx.r22.s64 + 13540;
	// stw r10,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r10.u32);
	// addi r21,r21,-14724
	ctx.r21.s64 = ctx.r21.s64 + -14724;
	// lwz r6,-192(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-484(r9)
	PPC_STORE_U32(ctx.r9.u32 + -484, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,-472(r10)
	PPC_STORE_U32(ctx.r10.u32 + -472, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,-460(r6)
	PPC_STORE_U32(ctx.r6.u32 + -460, ctx.r11.u32);
	// stw r11,-448(r6)
	PPC_STORE_U32(ctx.r6.u32 + -448, ctx.r11.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r9,-512(r6)
	PPC_STORE_U32(ctx.r6.u32 + -512, ctx.r9.u32);
	// addi r20,r11,13520
	ctx.r20.s64 = ctx.r11.s64 + 13520;
	// stw r10,-504(r6)
	PPC_STORE_U32(ctx.r6.u32 + -504, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,-500(r6)
	PPC_STORE_U32(ctx.r6.u32 + -500, ctx.r9.u32);
	// stw r10,-492(r6)
	PPC_STORE_U32(ctx.r6.u32 + -492, ctx.r10.u32);
	// addi r19,r11,-14468
	ctx.r19.s64 = ctx.r11.s64 + -14468;
	// stw r9,-488(r6)
	PPC_STORE_U32(ctx.r6.u32 + -488, ctx.r9.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r10,-480(r6)
	PPC_STORE_U32(ctx.r6.u32 + -480, ctx.r10.u32);
	// stw r9,-476(r6)
	PPC_STORE_U32(ctx.r6.u32 + -476, ctx.r9.u32);
	// addi r18,r11,-14476
	ctx.r18.s64 = ctx.r11.s64 + -14476;
	// stw r10,-468(r6)
	PPC_STORE_U32(ctx.r6.u32 + -468, ctx.r10.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stw r9,-464(r6)
	PPC_STORE_U32(ctx.r6.u32 + -464, ctx.r9.u32);
	// stw r10,-456(r6)
	PPC_STORE_U32(ctx.r6.u32 + -456, ctx.r10.u32);
	// addi r11,r11,13500
	ctx.r11.s64 = ctx.r11.s64 + 13500;
	// stw r9,-452(r6)
	PPC_STORE_U32(ctx.r6.u32 + -452, ctx.r9.u32);
	// stw r10,-444(r6)
	PPC_STORE_U32(ctx.r6.u32 + -444, ctx.r10.u32);
	// stw r11,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,-372(r6)
	PPC_STORE_U32(ctx.r6.u32 + -372, ctx.r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lwz r30,-192(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// lis r17,-32242
	ctx.r17.s64 = -2113011712;
	// stw r6,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r6.u32);
	// lis r16,-32242
	ctx.r16.s64 = -2113011712;
	// stw r9,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r30.u32);
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// stw r5,-396(r6)
	PPC_STORE_U32(ctx.r6.u32 + -396, ctx.r5.u32);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// stw r8,-388(r6)
	PPC_STORE_U32(ctx.r6.u32 + -388, ctx.r8.u32);
	// lis r15,-32227
	ctx.r15.s64 = -2112028672;
	// addi r8,r5,-14488
	ctx.r8.s64 = ctx.r5.s64 + -14488;
	// stw r4,-392(r6)
	PPC_STORE_U32(ctx.r6.u32 + -392, ctx.r4.u32);
	// stw r3,-380(r6)
	PPC_STORE_U32(ctx.r6.u32 + -380, ctx.r3.u32);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// stw r31,-376(r6)
	PPC_STORE_U32(ctx.r6.u32 + -376, ctx.r31.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r31,-32242
	ctx.r31.s64 = -2113011712;
	// stw r7,-384(r6)
	PPC_STORE_U32(ctx.r6.u32 + -384, ctx.r7.u32);
	// addi r7,r4,13476
	ctx.r7.s64 = ctx.r4.s64 + 13476;
	// stw r10,-436(r6)
	PPC_STORE_U32(ctx.r6.u32 + -436, ctx.r10.u32);
	// addi r4,r31,-14856
	ctx.r4.s64 = ctx.r31.s64 + -14856;
	// stw r10,-424(r6)
	PPC_STORE_U32(ctx.r6.u32 + -424, ctx.r10.u32);
	// stw r10,-412(r6)
	PPC_STORE_U32(ctx.r6.u32 + -412, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,-440(r6)
	PPC_STORE_U32(ctx.r6.u32 + -440, ctx.r11.u32);
	// lis r14,-32242
	ctx.r14.s64 = -2113011712;
	// stw r11,-428(r6)
	PPC_STORE_U32(ctx.r6.u32 + -428, ctx.r11.u32);
	// stw r11,-416(r6)
	PPC_STORE_U32(ctx.r6.u32 + -416, ctx.r11.u32);
	// stw r29,-368(r6)
	PPC_STORE_U32(ctx.r6.u32 + -368, ctx.r29.u32);
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// stw r9,-432(r6)
	PPC_STORE_U32(ctx.r6.u32 + -432, ctx.r9.u32);
	// stw r9,-420(r6)
	PPC_STORE_U32(ctx.r6.u32 + -420, ctx.r9.u32);
	// stw r9,-408(r6)
	PPC_STORE_U32(ctx.r6.u32 + -408, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r28,-364(r6)
	PPC_STORE_U32(ctx.r6.u32 + -364, ctx.r28.u32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lwz r5,-192(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r27,-360(r6)
	PPC_STORE_U32(ctx.r6.u32 + -360, ctx.r27.u32);
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lwz r31,-184(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// stw r26,-356(r6)
	PPC_STORE_U32(ctx.r6.u32 + -356, ctx.r26.u32);
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// stw r25,-352(r6)
	PPC_STORE_U32(ctx.r6.u32 + -352, ctx.r25.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// stw r11,-404(r5)
	PPC_STORE_U32(ctx.r5.u32 + -404, ctx.r11.u32);
	// lis r25,-32242
	ctx.r25.s64 = -2113011712;
	// stw r24,-348(r5)
	PPC_STORE_U32(ctx.r5.u32 + -348, ctx.r24.u32);
	// stw r5,-192(r1)
	PPC_STORE_U32(ctx.r1.u32 + -192, ctx.r5.u32);
	// addi r5,r3,-14844
	ctx.r5.s64 = ctx.r3.s64 + -14844;
	// lwz r3,-188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// lwz r11,-192(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -192);
	// stw r11,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r11.u32);
	// stw r23,-344(r11)
	PPC_STORE_U32(ctx.r11.u32 + -344, ctx.r23.u32);
	// stw r22,-336(r11)
	PPC_STORE_U32(ctx.r11.u32 + -336, ctx.r22.u32);
	// addi r22,r16,-14956
	ctx.r22.s64 = ctx.r16.s64 + -14956;
	// stw r21,-340(r11)
	PPC_STORE_U32(ctx.r11.u32 + -340, ctx.r21.u32);
	// stw r20,-324(r11)
	PPC_STORE_U32(ctx.r11.u32 + -324, ctx.r20.u32);
	// stw r19,-332(r11)
	PPC_STORE_U32(ctx.r11.u32 + -332, ctx.r19.u32);
	// addi r11,r10,-14500
	ctx.r11.s64 = ctx.r10.s64 + -14500;
	// lwz r10,-188(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// stw r31,-312(r10)
	PPC_STORE_U32(ctx.r10.u32 + -312, ctx.r31.u32);
	// addi r31,r29,-14880
	ctx.r31.s64 = ctx.r29.s64 + -14880;
	// stw r3,-188(r1)
	PPC_STORE_U32(ctx.r1.u32 + -188, ctx.r3.u32);
	// addi r3,r30,-14868
	ctx.r3.s64 = ctx.r30.s64 + -14868;
	// stw r18,-328(r10)
	PPC_STORE_U32(ctx.r10.u32 + -328, ctx.r18.u32);
	// addi r30,r28,-14896
	ctx.r30.s64 = ctx.r28.s64 + -14896;
	// stw r10,-184(r1)
	PPC_STORE_U32(ctx.r1.u32 + -184, ctx.r10.u32);
	// addi r10,r9,-14508
	ctx.r10.s64 = ctx.r9.s64 + -14508;
	// addi r29,r27,-14912
	ctx.r29.s64 = ctx.r27.s64 + -14912;
	// lwz r24,-172(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addi r9,r6,14076
	ctx.r9.s64 = ctx.r6.s64 + 14076;
	// lwz r23,-168(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// addi r28,r26,-14928
	ctx.r28.s64 = ctx.r26.s64 + -14928;
	// lwz r26,-180(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -180);
	// addi r27,r25,-14948
	ctx.r27.s64 = ctx.r25.s64 + -14948;
	// lwz r25,-176(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r6,r17,-14832
	ctx.r6.s64 = ctx.r17.s64 + -14832;
	// lwz r19,-184(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + -184);
	// lis r18,-31975
	ctx.r18.s64 = -2095513600;
	// addi r21,r15,13316
	ctx.r21.s64 = ctx.r15.s64 + 13316;
	// addi r17,r18,6272
	ctx.r17.s64 = ctx.r18.s64 + 6272;
	// addi r20,r14,-14968
	ctx.r20.s64 = ctx.r14.s64 + -14968;
	// stw r19,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r19.u32);
	// stw r11,-320(r19)
	PPC_STORE_U32(ctx.r19.u32 + -320, ctx.r11.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r8,-304(r19)
	PPC_STORE_U32(ctx.r19.u32 + -304, ctx.r8.u32);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// stw r7,-300(r19)
	PPC_STORE_U32(ctx.r19.u32 + -300, ctx.r7.u32);
	// addi r11,r11,-14992
	ctx.r11.s64 = ctx.r11.s64 + -14992;
	// stw r10,-316(r19)
	PPC_STORE_U32(ctx.r19.u32 + -316, ctx.r10.u32);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,-308(r19)
	PPC_STORE_U32(ctx.r19.u32 + -308, ctx.r9.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// stw r11,-232(r19)
	PPC_STORE_U32(ctx.r19.u32 + -232, ctx.r11.u32);
	// addi r8,r8,-15028
	ctx.r8.s64 = ctx.r8.s64 + -15028;
	// lwz r11,-188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -188);
	// addi r7,r7,13276
	ctx.r7.s64 = ctx.r7.s64 + 13276;
	// stw r6,-296(r19)
	PPC_STORE_U32(ctx.r19.u32 + -296, ctx.r6.u32);
	// addi r10,r10,-15004
	ctx.r10.s64 = ctx.r10.s64 + -15004;
	// stw r5,-292(r19)
	PPC_STORE_U32(ctx.r19.u32 + -292, ctx.r5.u32);
	// addi r9,r9,-15016
	ctx.r9.s64 = ctx.r9.s64 + -15016;
	// stw r4,-288(r19)
	PPC_STORE_U32(ctx.r19.u32 + -288, ctx.r4.u32);
	// stw r3,-284(r19)
	PPC_STORE_U32(ctx.r19.u32 + -284, ctx.r3.u32);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// stw r8,-228(r19)
	PPC_STORE_U32(ctx.r19.u32 + -228, ctx.r8.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r7,-208(r19)
	PPC_STORE_U32(ctx.r19.u32 + -208, ctx.r7.u32);
	// addi r6,r6,13272
	ctx.r6.s64 = ctx.r6.s64 + 13272;
	// stw r31,-280(r19)
	PPC_STORE_U32(ctx.r19.u32 + -280, ctx.r31.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,-276(r19)
	PPC_STORE_U32(ctx.r19.u32 + -276, ctx.r30.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r29,-272(r19)
	PPC_STORE_U32(ctx.r19.u32 + -272, ctx.r29.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r28,-268(r19)
	PPC_STORE_U32(ctx.r19.u32 + -268, ctx.r28.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r27,-264(r19)
	PPC_STORE_U32(ctx.r19.u32 + -264, ctx.r27.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r26,-260(r19)
	PPC_STORE_U32(ctx.r19.u32 + -260, ctx.r26.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r10,-220(r19)
	PPC_STORE_U32(ctx.r19.u32 + -220, ctx.r10.u32);
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r9,-212(r19)
	PPC_STORE_U32(ctx.r19.u32 + -212, ctx.r9.u32);
	// addi r19,r11,-14980
	ctx.r19.s64 = ctx.r11.s64 + -14980;
	// lwz r11,-168(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r5,6272(r18)
	PPC_STORE_U32(ctx.r18.u32 + 6272, ctx.r5.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r4,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r3.u32);
	// stw r31,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r31.u32);
	// stw r11,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r11.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lwz r7,-168(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r7,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r7.u32);
	// stw r6,-204(r11)
	PPC_STORE_U32(ctx.r11.u32 + -204, ctx.r6.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,-168(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r25,-256(r8)
	PPC_STORE_U32(ctx.r8.u32 + -256, ctx.r25.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r24,-252(r7)
	PPC_STORE_U32(ctx.r7.u32 + -252, ctx.r24.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r30,16(r17)
	PPC_STORE_U32(ctx.r17.u32 + 16, ctx.r30.u32);
	// stw r6,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r6.u32);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// lwz r4,-168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r4,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r4.u32);
	// stw r23,-248(r6)
	PPC_STORE_U32(ctx.r6.u32 + -248, ctx.r23.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r22,-244(r5)
	PPC_STORE_U32(ctx.r5.u32 + -244, ctx.r22.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r21,-240(r4)
	PPC_STORE_U32(ctx.r4.u32 + -240, ctx.r21.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-168(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r3,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r3.u32);
	// stw r10,40(r17)
	PPC_STORE_U32(ctx.r17.u32 + 40, ctx.r10.u32);
	// stw r10,80(r17)
	PPC_STORE_U32(ctx.r17.u32 + 80, ctx.r10.u32);
	// stw r10,96(r17)
	PPC_STORE_U32(ctx.r17.u32 + 96, ctx.r10.u32);
	// stw r10,108(r17)
	PPC_STORE_U32(ctx.r17.u32 + 108, ctx.r10.u32);
	// stw r10,120(r17)
	PPC_STORE_U32(ctx.r17.u32 + 120, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,44(r17)
	PPC_STORE_U32(ctx.r17.u32 + 44, ctx.r9.u32);
	// stw r10,132(r17)
	PPC_STORE_U32(ctx.r17.u32 + 132, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,84(r17)
	PPC_STORE_U32(ctx.r17.u32 + 84, ctx.r9.u32);
	// stw r10,144(r17)
	PPC_STORE_U32(ctx.r17.u32 + 144, ctx.r10.u32);
	// stw r10,156(r17)
	PPC_STORE_U32(ctx.r17.u32 + 156, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,100(r17)
	PPC_STORE_U32(ctx.r17.u32 + 100, ctx.r9.u32);
	// stw r10,184(r17)
	PPC_STORE_U32(ctx.r17.u32 + 184, ctx.r10.u32);
	// stw r10,188(r17)
	PPC_STORE_U32(ctx.r17.u32 + 188, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,112(r17)
	PPC_STORE_U32(ctx.r17.u32 + 112, ctx.r9.u32);
	// stw r9,124(r17)
	PPC_STORE_U32(ctx.r17.u32 + 124, ctx.r9.u32);
	// stw r9,136(r17)
	PPC_STORE_U32(ctx.r17.u32 + 136, ctx.r9.u32);
	// stw r9,148(r17)
	PPC_STORE_U32(ctx.r17.u32 + 148, ctx.r9.u32);
	// stw r9,160(r17)
	PPC_STORE_U32(ctx.r17.u32 + 160, ctx.r9.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,196(r17)
	PPC_STORE_U32(ctx.r17.u32 + 196, ctx.r10.u32);
	// lwz r31,-168(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r10,-164(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// stw r11,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r11.u32);
	// stw r11,88(r17)
	PPC_STORE_U32(ctx.r17.u32 + 88, ctx.r11.u32);
	// stw r11,92(r17)
	PPC_STORE_U32(ctx.r17.u32 + 92, ctx.r11.u32);
	// stw r31,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r31.u32);
	// stw r11,104(r17)
	PPC_STORE_U32(ctx.r17.u32 + 104, ctx.r11.u32);
	// stw r11,116(r17)
	PPC_STORE_U32(ctx.r17.u32 + 116, ctx.r11.u32);
	// stw r11,128(r17)
	PPC_STORE_U32(ctx.r17.u32 + 128, ctx.r11.u32);
	// stw r11,140(r17)
	PPC_STORE_U32(ctx.r17.u32 + 140, ctx.r11.u32);
	// stw r11,152(r17)
	PPC_STORE_U32(ctx.r17.u32 + 152, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r9,168(r17)
	PPC_STORE_U32(ctx.r17.u32 + 168, ctx.r9.u32);
	// stw r9,172(r17)
	PPC_STORE_U32(ctx.r17.u32 + 172, ctx.r9.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r8,48(r17)
	PPC_STORE_U32(ctx.r17.u32 + 48, ctx.r8.u32);
	// stw r20,-224(r3)
	PPC_STORE_U32(ctx.r3.u32 + -224, ctx.r20.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r19,-216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -216, ctx.r19.u32);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,176(r17)
	PPC_STORE_U32(ctx.r17.u32 + 176, ctx.r11.u32);
	// stw r11,180(r17)
	PPC_STORE_U32(ctx.r17.u32 + 180, ctx.r11.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,6472(r10)
	PPC_STORE_U32(ctx.r10.u32 + 6472, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,20(r17)
	PPC_STORE_U32(ctx.r17.u32 + 20, ctx.r29.u32);
	// stw r28,24(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24, ctx.r28.u32);
	// stw r27,28(r17)
	PPC_STORE_U32(ctx.r17.u32 + 28, ctx.r27.u32);
	// stw r26,32(r17)
	PPC_STORE_U32(ctx.r17.u32 + 32, ctx.r26.u32);
	// stw r7,52(r17)
	PPC_STORE_U32(ctx.r17.u32 + 52, ctx.r7.u32);
	// stw r6,56(r17)
	PPC_STORE_U32(ctx.r17.u32 + 56, ctx.r6.u32);
	// lwz r8,-168(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// stw r5,64(r17)
	PPC_STORE_U32(ctx.r17.u32 + 64, ctx.r5.u32);
	// stw r4,60(r17)
	PPC_STORE_U32(ctx.r17.u32 + 60, ctx.r4.u32);
	// stw r3,76(r17)
	PPC_STORE_U32(ctx.r17.u32 + 76, ctx.r3.u32);
	// stw r31,68(r17)
	PPC_STORE_U32(ctx.r17.u32 + 68, ctx.r31.u32);
	// stw r30,72(r17)
	PPC_STORE_U32(ctx.r17.u32 + 72, ctx.r30.u32);
	// stw r11,192(r17)
	PPC_STORE_U32(ctx.r17.u32 + 192, ctx.r11.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// stw r9,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r9.u32);
	// stw r11,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r11.u32);
	// stw r10,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r10.u32);
	// stw r9,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r9.u32);
	// stw r11,28(r8)
	PPC_STORE_U32(ctx.r8.u32 + 28, ctx.r11.u32);
	// stw r10,32(r8)
	PPC_STORE_U32(ctx.r8.u32 + 32, ctx.r10.u32);
	// stw r9,36(r8)
	PPC_STORE_U32(ctx.r8.u32 + 36, ctx.r9.u32);
	// stw r11,40(r8)
	PPC_STORE_U32(ctx.r8.u32 + 40, ctx.r11.u32);
	// stw r11,44(r8)
	PPC_STORE_U32(ctx.r8.u32 + 44, ctx.r11.u32);
	// stw r10,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r10.u32);
	// stw r9,52(r8)
	PPC_STORE_U32(ctx.r8.u32 + 52, ctx.r9.u32);
	// stw r11,56(r8)
	PPC_STORE_U32(ctx.r8.u32 + 56, ctx.r11.u32);
	// stw r10,64(r8)
	PPC_STORE_U32(ctx.r8.u32 + 64, ctx.r10.u32);
	// stw r9,60(r8)
	PPC_STORE_U32(ctx.r8.u32 + 60, ctx.r9.u32);
	// stw r11,76(r8)
	PPC_STORE_U32(ctx.r8.u32 + 76, ctx.r11.u32);
	// stw r10,68(r8)
	PPC_STORE_U32(ctx.r8.u32 + 68, ctx.r10.u32);
	// stw r9,72(r8)
	PPC_STORE_U32(ctx.r8.u32 + 72, ctx.r9.u32);
	// stw r11,88(r8)
	PPC_STORE_U32(ctx.r8.u32 + 88, ctx.r11.u32);
	// stw r10,84(r8)
	PPC_STORE_U32(ctx.r8.u32 + 84, ctx.r10.u32);
	// stw r9,80(r8)
	PPC_STORE_U32(ctx.r8.u32 + 80, ctx.r9.u32);
	// stw r11,92(r8)
	PPC_STORE_U32(ctx.r8.u32 + 92, ctx.r11.u32);
	// stw r10,96(r8)
	PPC_STORE_U32(ctx.r8.u32 + 96, ctx.r10.u32);
	// stw r9,100(r8)
	PPC_STORE_U32(ctx.r8.u32 + 100, ctx.r9.u32);
	// stw r11,104(r8)
	PPC_STORE_U32(ctx.r8.u32 + 104, ctx.r11.u32);
	// stw r10,108(r8)
	PPC_STORE_U32(ctx.r8.u32 + 108, ctx.r10.u32);
	// stw r9,112(r8)
	PPC_STORE_U32(ctx.r8.u32 + 112, ctx.r9.u32);
	// stw r11,116(r8)
	PPC_STORE_U32(ctx.r8.u32 + 116, ctx.r11.u32);
	// stw r10,120(r8)
	PPC_STORE_U32(ctx.r8.u32 + 120, ctx.r10.u32);
	// stw r9,124(r8)
	PPC_STORE_U32(ctx.r8.u32 + 124, ctx.r9.u32);
	// stw r11,128(r8)
	PPC_STORE_U32(ctx.r8.u32 + 128, ctx.r11.u32);
	// stw r10,132(r8)
	PPC_STORE_U32(ctx.r8.u32 + 132, ctx.r10.u32);
	// stw r9,136(r8)
	PPC_STORE_U32(ctx.r8.u32 + 136, ctx.r9.u32);
	// stw r11,140(r8)
	PPC_STORE_U32(ctx.r8.u32 + 140, ctx.r11.u32);
	// stw r10,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r10.u32);
	// stw r9,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r9.u32);
	// stw r11,152(r8)
	PPC_STORE_U32(ctx.r8.u32 + 152, ctx.r11.u32);
	// stw r10,156(r8)
	PPC_STORE_U32(ctx.r8.u32 + 156, ctx.r10.u32);
	// stw r9,160(r8)
	PPC_STORE_U32(ctx.r8.u32 + 160, ctx.r9.u32);
	// stw r11,176(r8)
	PPC_STORE_U32(ctx.r8.u32 + 176, ctx.r11.u32);
	// stw r10,184(r8)
	PPC_STORE_U32(ctx.r8.u32 + 184, ctx.r10.u32);
	// stw r9,168(r8)
	PPC_STORE_U32(ctx.r8.u32 + 168, ctx.r9.u32);
	// stw r11,180(r8)
	PPC_STORE_U32(ctx.r8.u32 + 180, ctx.r11.u32);
	// stw r10,188(r8)
	PPC_STORE_U32(ctx.r8.u32 + 188, ctx.r10.u32);
	// stw r9,172(r8)
	PPC_STORE_U32(ctx.r8.u32 + 172, ctx.r9.u32);
	// stw r11,192(r8)
	PPC_STORE_U32(ctx.r8.u32 + 192, ctx.r11.u32);
	// stw r10,196(r8)
	PPC_STORE_U32(ctx.r8.u32 + 196, ctx.r10.u32);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B10E8C"))) PPC_WEAK_FUNC(sub_82B10E8C);
PPC_FUNC_IMPL(__imp__sub_82B10E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B10E90"))) PPC_WEAK_FUNC(sub_82B10E90);
PPC_FUNC_IMPL(__imp__sub_82B10E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B10E98;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,-24420
	ctx.r30.s64 = ctx.r11.s64 + -24420;
	// beq 0x82b10ec8
	if (ctx.cr0.eq) goto loc_82B10EC8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-14360
	ctx.r5.s64 = ctx.r11.s64 + -14360;
	// bl 0x82b10610
	ctx.lr = 0x82B10EC8;
	sub_82B10610(ctx, base);
loc_82B10EC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B10ED8;
	sub_82B10610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b10ef8
	if (ctx.cr0.eq) goto loc_82B10EF8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-14368
	ctx.r5.s64 = ctx.r11.s64 + -14368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B10EF8;
	sub_82B10610(ctx, base);
loc_82B10EF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B10F00"))) PPC_WEAK_FUNC(sub_82B10F00);
PPC_FUNC_IMPL(__imp__sub_82B10F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B10F08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r30,r11,-24420
	ctx.r30.s64 = ctx.r11.s64 + -24420;
	// beq 0x82b10f38
	if (ctx.cr0.eq) goto loc_82B10F38;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-14352
	ctx.r5.s64 = ctx.r11.s64 + -14352;
	// bl 0x82b10610
	ctx.lr = 0x82B10F38;
	sub_82B10610(ctx, base);
loc_82B10F38:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B10F48;
	sub_82B10610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b10f68
	if (ctx.cr0.eq) goto loc_82B10F68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-14368
	ctx.r5.s64 = ctx.r11.s64 + -14368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B10F68;
	sub_82B10610(ctx, base);
loc_82B10F68:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B10F70"))) PPC_WEAK_FUNC(sub_82B10F70);
PPC_FUNC_IMPL(__imp__sub_82B10F70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82B10F78;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// srawi r9,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 7;
	// addi r4,r10,4404
	ctx.r4.s64 = ctx.r10.s64 + 4404;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi r21,r9,31
	ctx.r21.u64 = ctx.r9.u32 & 0x1;
	// clrlwi r27,r11,26
	ctx.r27.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82b10610
	ctx.lr = 0x82B10FB4;
	sub_82B10610(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r20,r11,14016
	ctx.r20.s64 = ctx.r11.s64 + 14016;
	// beq cr6,0x82b10fd0
	if (ctx.cr6.eq) goto loc_82B10FD0;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B10FD0;
	sub_82B10610(ctx, base);
loc_82B10FD0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82b10fe4
	if (!ctx.cr6.eq) goto loc_82B10FE4;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b10fe8
	if (!ctx.cr6.eq) goto loc_82B10FE8;
loc_82B10FE4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B10FE8:
	// clrlwi r28,r11,24
	ctx.r28.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82b11000
	if (!ctx.cr6.eq) goto loc_82B11000;
	// cmpwi cr6,r27,16
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 16, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b11004
	if (!ctx.cr6.eq) goto loc_82B11004;
loc_82B11000:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B11004:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// addi r29,r10,-24420
	ctx.r29.s64 = ctx.r10.s64 + -24420;
	// beq 0x82b1102c
	if (ctx.cr0.eq) goto loc_82B1102C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// bl 0x82b10610
	ctx.lr = 0x82B11028;
	sub_82B10610(ctx, base);
	// b 0x82b11054
	goto loc_82B11054;
loc_82B1102C:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82b11040
	if (ctx.cr6.eq) goto loc_82B11040;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13956
	ctx.r5.s64 = ctx.r11.s64 + 13956;
	// b 0x82b11048
	goto loc_82B11048;
loc_82B11040:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r5,r11,13960
	ctx.r5.s64 = ctx.r11.s64 + 13960;
loc_82B11048:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11054;
	sub_82B10610(ctx, base);
loc_82B11054:
	// clrlwi. r28,r28,24
	ctx.r28.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82b1106c
	if (ctx.cr0.eq) goto loc_82B1106C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13964
	ctx.r4.s64 = ctx.r11.s64 + 13964;
	// bl 0x82b10610
	ctx.lr = 0x82B1106C;
	sub_82B10610(ctx, base);
loc_82B1106C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b110bc
	if (!ctx.cr6.eq) goto loc_82B110BC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82b110a8
	if (ctx.cr6.eq) goto loc_82B110A8;
	// cmpwi cr6,r27,62
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 62, ctx.xer);
	// beq cr6,0x82b1109c
	if (ctx.cr6.eq) goto loc_82B1109C;
	// cmpwi cr6,r27,63
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 63, ctx.xer);
	// bne cr6,0x82b110a8
	if (!ctx.cr6.eq) goto loc_82B110A8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,14256
	ctx.r5.s64 = ctx.r11.s64 + 14256;
loc_82B11094:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b110b4
	goto loc_82B110B4;
loc_82B1109C:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,14252
	ctx.r5.s64 = ctx.r11.s64 + 14252;
	// b 0x82b11094
	goto loc_82B11094;
loc_82B110A8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
loc_82B110B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B110BC;
	sub_82B10610(ctx, base);
loc_82B110BC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82b110dc
	if (!ctx.cr6.eq) goto loc_82B110DC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82b110dc
	if (ctx.cr6.eq) goto loc_82B110DC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14004
	ctx.r4.s64 = ctx.r11.s64 + 14004;
	// bl 0x82b10610
	ctx.lr = 0x82B110DC;
	sub_82B10610(ctx, base);
loc_82B110DC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b110f4
	if (ctx.cr6.eq) goto loc_82B110F4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// bl 0x82b10610
	ctx.lr = 0x82B110F4;
	sub_82B10610(ctx, base);
loc_82B110F4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82b11170
	if (!ctx.cr6.eq) goto loc_82B11170;
	// cmpwi cr6,r24,15
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 15, ctx.xer);
	// beq cr6,0x82b112c8
	if (ctx.cr6.eq) goto loc_82B112C8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x82b10610
	ctx.lr = 0x82B11114;
	sub_82B10610(ctx, base);
	// clrlwi. r11,r24,31
	ctx.r11.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1112c
	if (ctx.cr0.eq) goto loc_82B1112C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13976
	ctx.r4.s64 = ctx.r11.s64 + 13976;
	// bl 0x82b10610
	ctx.lr = 0x82B1112C;
	sub_82B10610(ctx, base);
loc_82B1112C:
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b11144
	if (ctx.cr0.eq) goto loc_82B11144;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13980
	ctx.r4.s64 = ctx.r11.s64 + 13980;
	// bl 0x82b10610
	ctx.lr = 0x82B11144;
	sub_82B10610(ctx, base);
loc_82B11144:
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1115c
	if (ctx.cr0.eq) goto loc_82B1115C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13984
	ctx.r4.s64 = ctx.r11.s64 + 13984;
	// bl 0x82b10610
	ctx.lr = 0x82B1115C;
	sub_82B10610(ctx, base);
loc_82B1115C:
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b112c8
	if (ctx.cr0.eq) goto loc_82B112C8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13988
	ctx.r4.s64 = ctx.r11.s64 + 13988;
	// b 0x82b112c0
	goto loc_82B112C0;
loc_82B11170:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x82b10610
	ctx.lr = 0x82B11180;
	sub_82B10610(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// clrlwi. r8,r24,31
	ctx.r8.u64 = ctx.r24.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r28,r11,-23144
	ctx.r28.s64 = ctx.r11.s64 + -23144;
	// addi r30,r10,-21408
	ctx.r30.s64 = ctx.r10.s64 + -21408;
	// addi r29,r9,-23432
	ctx.r29.s64 = ctx.r9.s64 + -23432;
	// beq 0x82b111c0
	if (ctx.cr0.eq) goto loc_82B111C0;
	// clrlwi. r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82b111b4
	if (ctx.cr0.eq) goto loc_82B111B4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b111e0
	goto loc_82B111E0;
loc_82B111B4:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13976
	ctx.r4.s64 = ctx.r11.s64 + 13976;
	// b 0x82b111e0
	goto loc_82B111E0;
loc_82B111C0:
	// clrlwi r11,r23,31
	ctx.r11.u64 = ctx.r23.u32 & 0x1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b111d8
	if (ctx.cr6.eq) goto loc_82B111D8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82b111dc
	if (!ctx.cr6.eq) goto loc_82B111DC;
loc_82B111D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B111DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B111E0:
	// bl 0x82b10610
	ctx.lr = 0x82B111E4;
	sub_82B10610(ctx, base);
	// rlwinm. r11,r24,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1120c
	if (ctx.cr0.eq) goto loc_82B1120C;
	// rlwinm. r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82b11200
	if (ctx.cr0.eq) goto loc_82B11200;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b1122c
	goto loc_82B1122C;
loc_82B11200:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13980
	ctx.r4.s64 = ctx.r11.s64 + 13980;
	// b 0x82b1122c
	goto loc_82B1122C;
loc_82B1120C:
	// rlwinm r11,r23,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82b11224
	if (ctx.cr6.eq) goto loc_82B11224;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82b11228
	if (!ctx.cr6.eq) goto loc_82B11228;
loc_82B11224:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B11228:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B1122C:
	// bl 0x82b10610
	ctx.lr = 0x82B11230;
	sub_82B10610(ctx, base);
	// rlwinm. r11,r24,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b11258
	if (ctx.cr0.eq) goto loc_82B11258;
	// rlwinm. r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82b1124c
	if (ctx.cr0.eq) goto loc_82B1124C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b11278
	goto loc_82B11278;
loc_82B1124C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13984
	ctx.r4.s64 = ctx.r11.s64 + 13984;
	// b 0x82b11278
	goto loc_82B11278;
loc_82B11258:
	// rlwinm r11,r23,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82b11270
	if (ctx.cr6.eq) goto loc_82B11270;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82b11274
	if (!ctx.cr6.eq) goto loc_82B11274;
loc_82B11270:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B11274:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B11278:
	// bl 0x82b10610
	ctx.lr = 0x82B1127C;
	sub_82B10610(ctx, base);
	// rlwinm. r11,r24,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b112a4
	if (ctx.cr0.eq) goto loc_82B112A4;
	// rlwinm. r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82b11298
	if (ctx.cr0.eq) goto loc_82B11298;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b112c4
	goto loc_82B112C4;
loc_82B11298:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,13988
	ctx.r4.s64 = ctx.r11.s64 + 13988;
	// b 0x82b112c4
	goto loc_82B112C4;
loc_82B112A4:
	// rlwinm r11,r23,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82b112bc
	if (ctx.cr6.eq) goto loc_82B112BC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bne cr6,0x82b112c0
	if (!ctx.cr6.eq) goto loc_82B112C0;
loc_82B112BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B112C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B112C4:
	// bl 0x82b10610
	ctx.lr = 0x82B112C8;
	sub_82B10610(ctx, base);
loc_82B112C8:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82b112d8
	if (ctx.cr6.eq) goto loc_82B112D8;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// b 0x82b112e0
	goto loc_82B112E0;
loc_82B112D8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
loc_82B112E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B112E8;
	sub_82B10610(ctx, base);
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82b11300
	if (ctx.cr6.eq) goto loc_82B11300;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14336
	ctx.r4.s64 = ctx.r11.s64 + -14336;
	// bl 0x82b10610
	ctx.lr = 0x82B11300;
	sub_82B10610(ctx, base);
loc_82B11300:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B11308"))) PPC_WEAK_FUNC(sub_82B11308);
PPC_FUNC_IMPL(__imp__sub_82B11308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B11310;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82b11334
	if (!ctx.cr6.eq) goto loc_82B11334;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82b11344
	if (!ctx.cr6.eq) goto loc_82B11344;
loc_82B11334:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bne cr6,0x82b1134c
	if (!ctx.cr6.eq) goto loc_82B1134C;
	// rlwinm. r11,r5,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1134c
	if (ctx.cr0.eq) goto loc_82B1134C;
loc_82B11344:
	// li r21,1
	ctx.r21.s64 = 1;
	// b 0x82b11350
	goto loc_82B11350;
loc_82B1134C:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82B11350:
	// srawi r11,r5,6
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 6;
	// subfic r10,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r31.s64;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r8,r31
	ctx.r8.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// rlwinm r11,r10,0,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFC0;
	// rlwinm r10,r8,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// rlwinm r11,r11,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// clrlwi r30,r7,31
	ctx.r30.u64 = ctx.r7.u32 & 0x1;
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// and r24,r10,r6
	ctx.r24.u64 = ctx.r10.u64 & ctx.r6.u64;
	// and r26,r11,r5
	ctx.r26.u64 = ctx.r11.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b11398
	if (ctx.cr6.eq) goto loc_82B11398;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// bl 0x82b10610
	ctx.lr = 0x82B11398;
	sub_82B10610(ctx, base);
loc_82B11398:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r22,r11,14016
	ctx.r22.s64 = ctx.r11.s64 + 14016;
	// beq cr6,0x82b113b4
	if (ctx.cr6.eq) goto loc_82B113B4;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B113B4;
	sub_82B10610(ctx, base);
loc_82B113B4:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82b113c8
	if (!ctx.cr6.eq) goto loc_82B113C8;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq cr6,0x82b113cc
	if (ctx.cr6.eq) goto loc_82B113CC;
loc_82B113C8:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82B113CC:
	// subfic r9,r31,0
	ctx.xer.ca = ctx.r31.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r31.s64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r25,r11,13912
	ctx.r25.s64 = ctx.r11.s64 + 13912;
	// clrlwi r11,r9,28
	ctx.r11.u64 = ctx.r9.u32 & 0xF;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r5,r11,99
	ctx.r5.s64 = ctx.r11.s64 + 99;
	// clrlwi r31,r10,24
	ctx.r31.u64 = ctx.r10.u32 & 0xFF;
	// bl 0x82b10610
	ctx.lr = 0x82B113F4;
	sub_82B10610(ctx, base);
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82b11410
	if (ctx.cr0.eq) goto loc_82B11410;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,13964
	ctx.r4.s64 = ctx.r11.s64 + 13964;
	// bl 0x82b10610
	ctx.lr = 0x82B11410;
	sub_82B10610(ctx, base);
loc_82B11410:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r11,26556
	ctx.r4.s64 = ctx.r11.s64 + 26556;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11424;
	sub_82B10610(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r11,14004
	ctx.r31.s64 = ctx.r11.s64 + 14004;
	// beq cr6,0x82b11440
	if (ctx.cr6.eq) goto loc_82B11440;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11440;
	sub_82B10610(ctx, base);
loc_82B11440:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82b11468
	if (ctx.cr6.eq) goto loc_82B11468;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b11458
	if (ctx.cr6.eq) goto loc_82B11458;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// b 0x82b11460
	goto loc_82B11460;
loc_82B11458:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14000
	ctx.r4.s64 = ctx.r11.s64 + 14000;
loc_82B11460:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11468;
	sub_82B10610(ctx, base);
loc_82B11468:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b11480
	if (ctx.cr6.eq) goto loc_82B11480;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// bl 0x82b10610
	ctx.lr = 0x82B11480;
	sub_82B10610(ctx, base);
loc_82B11480:
	// lwz r28,340(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,4
	ctx.r11.s64 = 4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// subfc r10,r11,r28
	ctx.xer.ca = ctx.r28.u32 >= ctx.r11.u32;
	ctx.r10.s64 = ctx.r28.s64 - ctx.r11.s64;
	// eqv r11,r11,r28
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r28.u64);
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r23,r11,31
	ctx.r23.u64 = ctx.r11.u32 & 0x1;
	// bne cr6,0x82b114ac
	if (!ctx.cr6.eq) goto loc_82B114AC;
	// clrlwi. r11,r23,24
	ctx.r11.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1159c
	if (ctx.cr0.eq) goto loc_82B1159C;
loc_82B114AC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x82b10610
	ctx.lr = 0x82B114BC;
	sub_82B10610(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// srawi r9,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r29.s32 >> 2;
	// addi r30,r11,14008
	ctx.r30.s64 = ctx.r11.s64 + 14008;
	// srawi r10,r29,4
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 4;
	// srawi r11,r29,6
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 6;
	// clrlwi r31,r29,30
	ctx.r31.u64 = ctx.r29.u32 & 0x3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// clrlwi r24,r11,30
	ctx.r24.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// clrlwi r29,r9,30
	ctx.r29.u64 = ctx.r9.u32 & 0x3;
	// clrlwi r26,r10,30
	ctx.r26.u64 = ctx.r10.u32 & 0x3;
	// lbzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11500;
	sub_82B10610(ctx, base);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// ble cr6,0x82b1159c
	if (!ctx.cr6.gt) goto loc_82B1159C;
	// clrlwi. r23,r23,24
	ctx.r23.u64 = ctx.r23.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne 0x82b11528
	if (!ctx.cr0.eq) goto loc_82B11528;
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82b11528
	if (!ctx.cr6.eq) goto loc_82B11528;
	// cmpw cr6,r26,r31
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82b11528
	if (!ctx.cr6.eq) goto loc_82B11528;
	// cmpw cr6,r24,r31
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82b1159c
	if (ctx.cr6.eq) goto loc_82B1159C;
loc_82B11528:
	// lbzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B1153C;
	sub_82B10610(ctx, base);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// ble cr6,0x82b1159c
	if (!ctx.cr6.gt) goto loc_82B1159C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82b1155c
	if (!ctx.cr6.eq) goto loc_82B1155C;
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82b1155c
	if (!ctx.cr6.eq) goto loc_82B1155C;
	// cmpw cr6,r24,r29
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82b1159c
	if (ctx.cr6.eq) goto loc_82B1159C;
loc_82B1155C:
	// lbzx r11,r26,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11570;
	sub_82B10610(ctx, base);
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// ble cr6,0x82b1159c
	if (!ctx.cr6.gt) goto loc_82B1159C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82b11588
	if (!ctx.cr6.eq) goto loc_82B11588;
	// cmpw cr6,r24,r26
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82b1159c
	if (ctx.cr6.eq) goto loc_82B1159C;
loc_82B11588:
	// lbzx r11,r24,r30
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r30.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B1159C;
	sub_82B10610(ctx, base);
loc_82B1159C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82b115ac
	if (ctx.cr6.eq) goto loc_82B115AC;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x82b115b4
	goto loc_82B115B4;
loc_82B115AC:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
loc_82B115B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B115BC;
	sub_82B10610(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B115C4"))) PPC_WEAK_FUNC(sub_82B115C4);
PPC_FUNC_IMPL(__imp__sub_82B115C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B115C8"))) PPC_WEAK_FUNC(sub_82B115C8);
PPC_FUNC_IMPL(__imp__sub_82B115C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B115D0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r4,7
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// clrlwi r28,r4,26
	ctx.r28.u64 = ctx.r4.u32 & 0x3F;
	// clrlwi r27,r11,31
	ctx.r27.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82b115fc
	if (ctx.cr6.eq) goto loc_82B115FC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,26552
	ctx.r4.s64 = ctx.r11.s64 + 26552;
	// bl 0x82b10610
	ctx.lr = 0x82B115FC;
	sub_82B10610(ctx, base);
loc_82B115FC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r11,14016
	ctx.r29.s64 = ctx.r11.s64 + 14016;
	// beq cr6,0x82b11618
	if (ctx.cr6.eq) goto loc_82B11618;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11618;
	sub_82B10610(ctx, base);
loc_82B11618:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r11,14020
	ctx.r4.s64 = ctx.r11.s64 + 14020;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B1162C;
	sub_82B10610(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,28200
	ctx.r4.s64 = ctx.r11.s64 + 28200;
	// bl 0x82b10610
	ctx.lr = 0x82B1163C;
	sub_82B10610(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82b116e8
	if (ctx.cr6.eq) goto loc_82B116E8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x82b10610
	ctx.lr = 0x82B11654;
	sub_82B10610(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// clrlwi r10,r30,30
	ctx.r10.u64 = ctx.r30.u32 & 0x3;
	// addi r11,r11,14008
	ctx.r11.s64 = ctx.r11.s64 + 14008;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r9,13912
	ctx.r28.s64 = ctx.r9.s64 + 13912;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B1167C;
	sub_82B10610(ctx, base);
	// srawi r11,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 2;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,14028
	ctx.r10.s64 = ctx.r10.s64 + 14028;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B116A0;
	sub_82B10610(ctx, base);
	// srawi r11,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 4;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,14036
	ctx.r10.s64 = ctx.r10.s64 + 14036;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B116C4;
	sub_82B10610(ctx, base);
	// srawi r11,r30,6
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r30.s32 >> 6;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// addi r10,r10,14044
	ctx.r10.s64 = ctx.r10.s64 + 14044;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B116E8;
	sub_82B10610(ctx, base);
loc_82B116E8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b116f8
	if (ctx.cr6.eq) goto loc_82B116F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b11700
	goto loc_82B11700;
loc_82B116F8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
loc_82B11700:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11708;
	sub_82B10610(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B11710"))) PPC_WEAK_FUNC(sub_82B11710);
PPC_FUNC_IMPL(__imp__sub_82B11710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B11718;
	__savegprlr_24(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// bne 0x82b11750
	if (!ctx.cr0.eq) goto loc_82B11750;
	// lbz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b11754
	if (ctx.cr6.eq) goto loc_82B11754;
loc_82B11750:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B11754:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b119e0
	if (!ctx.cr0.eq) goto loc_82B119E0;
	// lbz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 8);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r10,5712
	ctx.r10.s64 = ctx.r10.s64 + 5712;
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10e90
	ctx.lr = 0x82B11778;
	sub_82B10E90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r10,r11,12,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// rlwinm r7,r11,8,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	// rlwinm r5,r11,16,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bl 0x82b10f70
	ctx.lr = 0x82B117A0;
	sub_82B10F70(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r11,-32224
	ctx.r28.s64 = ctx.r11.s64 + -32224;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B117B4;
	sub_82B10610(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b117d4
	if (!ctx.cr0.eq) goto loc_82B117D4;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b117d4
	if (!ctx.cr0.eq) goto loc_82B117D4;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b117d4
	if (ctx.cr0.eq) goto loc_82B117D4;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82B117D4:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r26,4
	ctx.r26.s64 = 4;
	// addi r30,r10,5832
	ctx.r30.s64 = ctx.r10.s64 + 5832;
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82b11860
	if (ctx.cr6.lt) goto loc_82B11860;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// clrlwi r25,r10,31
	ctx.r25.u64 = ctx.r10.u32 & 0x1;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// bne 0x82b1182c
	if (!ctx.cr0.eq) goto loc_82B1182C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82b1182c
	if (ctx.cr6.eq) goto loc_82B1182C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,5(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r5,r11,6,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x82b115c8
	ctx.lr = 0x82B11828;
	sub_82B115C8(ctx, base);
	// b 0x82b11860
	goto loc_82B11860;
loc_82B1182C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,6,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,9(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r4,r4,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// bl 0x82b11308
	ctx.lr = 0x82B11860;
	sub_82B11308(ctx, base);
loc_82B11860:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// blt cr6,0x82b11918
	if (ctx.cr6.lt) goto loc_82B11918;
	// rlwinm. r10,r11,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// bne 0x82b1188c
	if (!ctx.cr0.eq) goto loc_82B1188C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82b1188c
	if (!ctx.cr6.eq) goto loc_82B1188C;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82B1188C:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B118A4;
	sub_82B10610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b118d4
	if (!ctx.cr0.eq) goto loc_82B118D4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82b118d4
	if (ctx.cr6.eq) goto loc_82B118D4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lbz r6,6(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r5,r11,7,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x82b115c8
	ctx.lr = 0x82B118D0;
	sub_82B115C8(ctx, base);
	// b 0x82b11918
	goto loc_82B11918;
loc_82B118D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// beq cr6,0x82b118e8
	if (ctx.cr6.eq) goto loc_82B118E8;
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
loc_82B118E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,7,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// lbz r5,10(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// rlwinm r4,r4,2,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x1;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x82b11308
	ctx.lr = 0x82B11918;
	sub_82B11308(ctx, base);
loc_82B11918:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r11,10,25,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// blt cr6,0x82b119e0
	if (ctx.cr6.lt) goto loc_82B119E0;
	// rlwinm. r10,r11,3,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,3,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7;
	// bne 0x82b11944
	if (!ctx.cr0.eq) goto loc_82B11944;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82b11944
	if (!ctx.cr6.eq) goto loc_82B11944;
	// li r25,3
	ctx.r25.s64 = 3;
loc_82B11944:
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r30,r11,r27
	ctx.r30.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B1195C;
	sub_82B10610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b1198c
	if (!ctx.cr0.eq) goto loc_82B1198C;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82b1198c
	if (ctx.cr6.eq) goto loc_82B1198C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x82b115c8
	ctx.lr = 0x82B11988;
	sub_82B115C8(ctx, base);
	// b 0x82b119e0
	goto loc_82B119E0;
loc_82B1198C:
	// cmpwi cr6,r25,3
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 3, ctx.xer);
	// beq cr6,0x82b119a8
	if (ctx.cr6.eq) goto loc_82B119A8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82b119a8
	if (!ctx.cr6.eq) goto loc_82B119A8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x82b119b0
	goto loc_82B119B0;
loc_82B119A8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82B119B0:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// rlwinm r9,r11,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0x1;
	// rlwinm r7,r11,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x1;
	// rlwinm r8,r8,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 25) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// bl 0x82b11308
	ctx.lr = 0x82B119E0;
	sub_82B11308(ctx, base);
loc_82B119E0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B119E8"))) PPC_WEAK_FUNC(sub_82B119E8);
PPC_FUNC_IMPL(__imp__sub_82B119E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B119F0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b11a20
	if (!ctx.cr0.eq) goto loc_82B11A20;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b11a20
	if (!ctx.cr0.eq) goto loc_82B11A20;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b11a20
	if (ctx.cr0.eq) goto loc_82B11A20;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B11A20:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,6672
	ctx.r29.s64 = ctx.r11.s64 + 6672;
	// rlwinm r11,r10,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFC;
	// addi r10,r29,-600
	ctx.r10.s64 = ctx.r29.s64 + -600;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10e90
	ctx.lr = 0x82B11A40;
	sub_82B10E90(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r6,r11,17,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 17) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r8,r11,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	// bne 0x82b11a54
	if (!ctx.cr0.eq) goto loc_82B11A54;
	// rlwinm r8,r11,18,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
loc_82B11A54:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// clrlwi r4,r11,26
	ctx.r4.u64 = ctx.r11.u32 & 0x3F;
	// bne cr6,0x82b11a64
	if (!ctx.cr6.eq) goto loc_82B11A64;
	// rlwinm r4,r11,24,26,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x3F;
loc_82B11A64:
	// rlwinm r10,r11,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// rlwinm r9,r11,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x1;
	// rlwinm r7,r11,7,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0x1;
	// rlwinm r5,r11,12,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b10f70
	ctx.lr = 0x82B11A7C;
	sub_82B10F70(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x82b10610
	ctx.lr = 0x82B11A8C;
	sub_82B10610(ctx, base);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// rlwinm r8,r9,8,24,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFC;
	// addi r11,r11,6272
	ctx.r11.s64 = ctx.r11.s64 + 6272;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82b11b7c
	if (ctx.cr6.lt) goto loc_82B11B7C;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r7,3,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r10,r7,2,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0x1;
	// rlwinm. r7,r7,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r7,r11,3
	ctx.r7.s64 = ctx.r11.s64 + 3;
	// beq 0x82b11ad0
	if (ctx.cr0.eq) goto loc_82B11AD0;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82b11af8
	goto loc_82B11AF8;
loc_82B11AD0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b11ae4
	if (ctx.cr0.eq) goto loc_82B11AE4;
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82b11af8
	goto loc_82B11AF8;
loc_82B11AE4:
	// rlwinm r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	// li r10,3
	ctx.r10.s64 = 3;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82B11AF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r6,r11,0,2,2
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82b11b28
	if (!ctx.cr0.eq) goto loc_82B11B28;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82b11b28
	if (ctx.cr6.eq) goto loc_82B11B28;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// rlwinm r5,r10,8,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0x1;
	// bl 0x82b115c8
	ctx.lr = 0x82B11B24;
	sub_82B115C8(ctx, base);
	// b 0x82b11b7c
	goto loc_82B11B7C;
loc_82B11B28:
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82b11b44
	if (ctx.cr6.eq) goto loc_82B11B44;
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// bne cr6,0x82b11b44
	if (!ctx.cr6.eq) goto loc_82B11B44;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,2,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x1;
	// b 0x82b11b4c
	goto loc_82B11B4C;
loc_82B11B44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r6,r11,1,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82B11B4C:
	// lwz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r11,r8,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r29.u32);
	// rlwinm r8,r9,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 25) & 0x1;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// rlwinm r9,r7,8,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0x1;
	// clrlwi r5,r4,24
	ctx.r5.u64 = ctx.r4.u32 & 0xFF;
	// rlwinm r7,r7,3,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x1;
	// rlwinm r4,r4,3,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82b11308
	ctx.lr = 0x82B11B7C;
	sub_82B11308(ctx, base);
loc_82B11B7C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B11B84"))) PPC_WEAK_FUNC(sub_82B11B84);
PPC_FUNC_IMPL(__imp__sub_82B11B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B11B88"))) PPC_WEAK_FUNC(sub_82B11B88);
PPC_FUNC_IMPL(__imp__sub_82B11B88) {
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
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82b11bd4
	if (!ctx.cr0.eq) goto loc_82B11BD4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b11bc0
	if (ctx.cr0.eq) goto loc_82B11BC0;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// b 0x82b11bc8
	goto loc_82B11BC8;
loc_82B11BC0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
loc_82B11BC8:
	// bl 0x82af8808
	ctx.lr = 0x82B11BCC;
	sub_82AF8808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82B11BD4:
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

__attribute__((alias("__imp__sub_82B11BE8"))) PPC_WEAK_FUNC(sub_82B11BE8);
PPC_FUNC_IMPL(__imp__sub_82B11BE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B11BF0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x82b10670
	ctx.lr = 0x82B11C08;
	sub_82B10670(ctx, base);
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82B11C10:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// srawi r11,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82b11cc8
	if (ctx.cr6.eq) goto loc_82B11CC8;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B11C34;
	sub_82B101F8(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// bgt cr6,0x82b11cbc
	if (ctx.cr6.gt) goto loc_82B11CBC;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-14328
	ctx.r12.s64 = ctx.r12.s64 + -14328;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// nop 
	// addi r12,r12,7272
	ctx.r12.s64 = ctx.r12.s64 + 7272;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B11C68;
	case 1:
		goto loc_82B11C68;
	case 2:
		goto loc_82B11C88;
	case 3:
		goto loc_82B11C88;
	case 4:
		goto loc_82B11C88;
	case 5:
		goto loc_82B11C88;
	case 6:
		goto loc_82B11C90;
	case 7:
		goto loc_82B11C90;
	case 8:
		goto loc_82B11C90;
	case 9:
		goto loc_82B11CBC;
	case 10:
		goto loc_82B11C90;
	default:
		__builtin_unreachable();
	}
loc_82B11C68:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B11C78;
	sub_82B101F8(ctx, base);
	// cmpwi cr6,r27,-1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, -1, ctx.xer);
	// bne cr6,0x82b11cbc
	if (!ctx.cr6.eq) goto loc_82B11CBC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82b11cbc
	goto loc_82B11CBC;
loc_82B11C88:
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82b11cbc
	goto loc_82B11CBC;
loc_82B11C90:
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B11CA0;
	sub_82B101F8(ctx, base);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// rlwinm r10,r3,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// slw r9,r29,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82B11CBC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r31,r31,6
	ctx.r31.s64 = ctx.r31.s64 + 6;
	// bne 0x82b11c10
	if (!ctx.cr0.eq) goto loc_82B11C10;
loc_82B11CC8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B11CD0"))) PPC_WEAK_FUNC(sub_82B11CD0);
PPC_FUNC_IMPL(__imp__sub_82B11CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B11CD8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b11d2c
	if (!ctx.cr6.eq) goto loc_82B11D2C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b11d14
	if (ctx.cr0.eq) goto loc_82B11D14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-13560
	ctx.r5.s64 = ctx.r11.s64 + -13560;
	// b 0x82b11d1c
	goto loc_82B11D1C;
loc_82B11D14:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-13564
	ctx.r5.s64 = ctx.r11.s64 + -13564;
loc_82B11D1C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24528
	ctx.r4.s64 = ctx.r11.s64 + -24528;
	// bl 0x82b10610
	ctx.lr = 0x82B11D2C;
	sub_82B10610(ctx, base);
loc_82B11D2C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi. r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b12220
	if (ctx.cr0.eq) goto loc_82B12220;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b1220c
	if (!ctx.cr6.gt) goto loc_82B1220C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82b11d68
	if (!ctx.cr6.gt) goto loc_82B11D68;
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// ble cr6,0x82b1220c
	if (!ctx.cr6.gt) goto loc_82B1220C;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// ble cr6,0x82b11d68
	if (!ctx.cr6.gt) goto loc_82B11D68;
	// cmpwi cr6,r11,23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 23, ctx.xer);
	// ble cr6,0x82b1220c
	if (!ctx.cr6.gt) goto loc_82B1220C;
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// bgt cr6,0x82b1220c
	if (ctx.cr6.gt) goto loc_82B1220C;
loc_82B11D68:
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r4,r10,14372
	ctx.r4.s64 = ctx.r10.s64 + 14372;
	// cmplwi cr6,r11,26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 26, ctx.xer);
	// bgt cr6,0x82b11e30
	if (ctx.cr6.gt) goto loc_82B11E30;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-14312
	ctx.r12.s64 = ctx.r12.s64 + -14312;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// nop 
	// addi r12,r12,7588
	ctx.r12.s64 = ctx.r12.s64 + 7588;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82B11DA4;
	case 1:
		goto loc_82B11DB0;
	case 2:
		goto loc_82B11DBC;
	case 3:
		goto loc_82B11DC8;
	case 4:
		goto loc_82B11E30;
	case 5:
		goto loc_82B11E30;
	case 6:
		goto loc_82B11E30;
	case 7:
		goto loc_82B11E30;
	case 8:
		goto loc_82B11E30;
	case 9:
		goto loc_82B11E30;
	case 10:
		goto loc_82B11E30;
	case 11:
		goto loc_82B11E30;
	case 12:
		goto loc_82B11E30;
	case 13:
		goto loc_82B11E30;
	case 14:
		goto loc_82B11E30;
	case 15:
		goto loc_82B11DD4;
	case 16:
		goto loc_82B11DE0;
	case 17:
		goto loc_82B11DEC;
	case 18:
		goto loc_82B11DF8;
	case 19:
		goto loc_82B11E30;
	case 20:
		goto loc_82B11E30;
	case 21:
		goto loc_82B11E30;
	case 22:
		goto loc_82B11E30;
	case 23:
		goto loc_82B11E04;
	case 24:
		goto loc_82B11E10;
	case 25:
		goto loc_82B11E1C;
	case 26:
		goto loc_82B11E28;
	default:
		__builtin_unreachable();
	}
loc_82B11DA4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13572
	ctx.r4.s64 = ctx.r11.s64 + -13572;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DB0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13588
	ctx.r4.s64 = ctx.r11.s64 + -13588;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DBC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13604
	ctx.r4.s64 = ctx.r11.s64 + -13604;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DC8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13624
	ctx.r4.s64 = ctx.r11.s64 + -13624;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DD4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13648
	ctx.r4.s64 = ctx.r11.s64 + -13648;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DE0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13664
	ctx.r4.s64 = ctx.r11.s64 + -13664;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DEC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13676
	ctx.r4.s64 = ctx.r11.s64 + -13676;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11DF8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13688
	ctx.r4.s64 = ctx.r11.s64 + -13688;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11E04:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14404
	ctx.r4.s64 = ctx.r11.s64 + 14404;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11E10:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14416
	ctx.r4.s64 = ctx.r11.s64 + 14416;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11E1C:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14432
	ctx.r4.s64 = ctx.r11.s64 + 14432;
	// b 0x82b11e30
	goto loc_82B11E30;
loc_82B11E28:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-13708
	ctx.r4.s64 = ctx.r11.s64 + -13708;
loc_82B11E30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10e90
	ctx.lr = 0x82B11E38;
	sub_82B10E90(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x82b10610
	ctx.lr = 0x82B11E48;
	sub_82B10610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x82b11e68
	if (ctx.cr0.eq) goto loc_82B11E68;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14092
	ctx.r4.s64 = ctx.r11.s64 + 14092;
	// b 0x82b11e70
	goto loc_82B11E70;
loc_82B11E68:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14104
	ctx.r4.s64 = ctx.r11.s64 + 14104;
loc_82B11E70:
	// bl 0x82b10610
	ctx.lr = 0x82B11E74;
	sub_82B10610(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-19068
	ctx.r27.s64 = ctx.r11.s64 + -19068;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11E88;
	sub_82B10610(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r29,r11,5696
	ctx.r29.s64 = ctx.r11.s64 + 5696;
	// addi r28,r10,13912
	ctx.r28.s64 = ctx.r10.s64 + 13912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11EB4;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11ED0;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11EEC;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11F08;
	sub_82B10610(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-32224
	ctx.r4.s64 = ctx.r11.s64 + -32224;
	// bl 0x82b10610
	ctx.lr = 0x82B11F18;
	sub_82B10610(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x82b11308
	ctx.lr = 0x82B11F50;
	sub_82B11308(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B11F5C;
	sub_82B10610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11F78;
	sub_82B10610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,4,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11F94;
	sub_82B10610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// clrlwi r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r10,18
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 18, ctx.xer);
	// beq cr6,0x82b11fbc
	if (ctx.cr6.eq) goto loc_82B11FBC;
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B11FBC;
	sub_82B10610(ctx, base);
loc_82B11FBC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r10,-13716
	ctx.r4.s64 = ctx.r10.s64 + -13716;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// bl 0x82b10610
	ctx.lr = 0x82B11FD4;
	sub_82B10610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,6,6
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b11ff0
	if (ctx.cr0.eq) goto loc_82B11FF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13752
	ctx.r4.s64 = ctx.r11.s64 + -13752;
	// bl 0x82b10610
	ctx.lr = 0x82B11FF0;
	sub_82B10610(ctx, base);
loc_82B11FF0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,20,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b1201c
	if (ctx.cr6.eq) goto loc_82B1201C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1176
	ctx.r10.s64 = ctx.r29.s64 + 1176;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13768
	ctx.r4.s64 = ctx.r9.s64 + -13768;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B1201C;
	sub_82B10610(ctx, base);
loc_82B1201C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,18,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 18) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b12048
	if (ctx.cr6.eq) goto loc_82B12048;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1192
	ctx.r10.s64 = ctx.r29.s64 + 1192;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13784
	ctx.r4.s64 = ctx.r9.s64 + -13784;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B12048;
	sub_82B10610(ctx, base);
loc_82B12048:
	// lhz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b12074
	if (ctx.cr6.eq) goto loc_82B12074;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1208
	ctx.r10.s64 = ctx.r29.s64 + 1208;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13800
	ctx.r4.s64 = ctx.r9.s64 + -13800;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B12074;
	sub_82B10610(ctx, base);
loc_82B12074:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,14,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82b120a0
	if (ctx.cr6.eq) goto loc_82B120A0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1224
	ctx.r10.s64 = ctx.r29.s64 + 1224;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13820
	ctx.r4.s64 = ctx.r9.s64 + -13820;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B120A0;
	sub_82B10610(ctx, base);
loc_82B120A0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,11,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x7;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// beq cr6,0x82b120cc
	if (ctx.cr6.eq) goto loc_82B120CC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1256
	ctx.r10.s64 = ctx.r29.s64 + 1256;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,14172
	ctx.r4.s64 = ctx.r9.s64 + 14172;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B120CC;
	sub_82B10610(ctx, base);
loc_82B120CC:
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b120f8
	if (ctx.cr6.eq) goto loc_82B120F8;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1288
	ctx.r10.s64 = ctx.r29.s64 + 1288;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13840
	ctx.r4.s64 = ctx.r9.s64 + -13840;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B120F8;
	sub_82B10610(ctx, base);
loc_82B120F8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,6,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x3;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82b12124
	if (ctx.cr6.eq) goto loc_82B12124;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1304
	ctx.r10.s64 = ctx.r29.s64 + 1304;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13860
	ctx.r4.s64 = ctx.r9.s64 + -13860;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B12124;
	sub_82B10610(ctx, base);
loc_82B12124:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r5,r11,4,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b12140
	if (ctx.cr0.eq) goto loc_82B12140;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13880
	ctx.r4.s64 = ctx.r11.s64 + -13880;
	// bl 0x82b10610
	ctx.lr = 0x82B12140;
	sub_82B10610(ctx, base);
loc_82B12140:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,3,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b12168
	if (ctx.cr0.eq) goto loc_82B12168;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,1320
	ctx.r10.s64 = ctx.r29.s64 + 1320;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r9,-13900
	ctx.r4.s64 = ctx.r9.s64 + -13900;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B12168;
	sub_82B10610(ctx, base);
loc_82B12168:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,31
	ctx.r5.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b12184
	if (ctx.cr0.eq) goto loc_82B12184;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13928
	ctx.r4.s64 = ctx.r11.s64 + -13928;
	// bl 0x82b10610
	ctx.lr = 0x82B12184;
	sub_82B10610(ctx, base);
loc_82B12184:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b121a0
	if (ctx.cr0.eq) goto loc_82B121A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13956
	ctx.r4.s64 = ctx.r11.s64 + -13956;
	// bl 0x82b10610
	ctx.lr = 0x82B121A0;
	sub_82B10610(ctx, base);
loc_82B121A0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,30,25,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b121bc
	if (ctx.cr0.eq) goto loc_82B121BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13972
	ctx.r4.s64 = ctx.r11.s64 + -13972;
	// bl 0x82b10610
	ctx.lr = 0x82B121BC;
	sub_82B10610(ctx, base);
loc_82B121BC:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// clrlwi. r5,r11,27
	ctx.r5.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b121d8
	if (ctx.cr0.eq) goto loc_82B121D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-13988
	ctx.r4.s64 = ctx.r11.s64 + -13988;
	// bl 0x82b10610
	ctx.lr = 0x82B121D8;
	sub_82B10610(ctx, base);
loc_82B121D8:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,11,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b121f4
	if (ctx.cr0.eq) goto loc_82B121F4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14004
	ctx.r4.s64 = ctx.r11.s64 + -14004;
	// bl 0x82b10610
	ctx.lr = 0x82B121F4;
	sub_82B10610(ctx, base);
loc_82B121F4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r5,r11,6,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b125ac
	if (ctx.cr0.eq) goto loc_82B125AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-14020
	ctx.r4.s64 = ctx.r11.s64 + -14020;
	// b 0x82b125a4
	goto loc_82B125A4;
loc_82B1220C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14044
	ctx.r4.s64 = ctx.r11.s64 + -14044;
	// bl 0x82b10610
	ctx.lr = 0x82B1221C;
	sub_82B10610(ctx, base);
	// b 0x82b125ac
	goto loc_82B125AC;
loc_82B12220:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14140
	ctx.r4.s64 = ctx.r11.s64 + 14140;
	// bl 0x82b10e90
	ctx.lr = 0x82B12230;
	sub_82B10E90(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x82b10610
	ctx.lr = 0x82B12240;
	sub_82B10610(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r10,r11,0,13,13
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r5,r11,20,26,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// beq 0x82b12260
	if (ctx.cr0.eq) goto loc_82B12260;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14092
	ctx.r4.s64 = ctx.r11.s64 + 14092;
	// b 0x82b12268
	goto loc_82B12268;
loc_82B12260:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,14104
	ctx.r4.s64 = ctx.r11.s64 + 14104;
loc_82B12268:
	// bl 0x82b10610
	ctx.lr = 0x82B1226C;
	sub_82B10610(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19068
	ctx.r4.s64 = ctx.r11.s64 + -19068;
	// bl 0x82b10610
	ctx.lr = 0x82B1227C;
	sub_82B10610(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r29,r11,5696
	ctx.r29.s64 = ctx.r11.s64 + 5696;
	// addi r28,r10,13912
	ctx.r28.s64 = ctx.r10.s64 + 13912;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B122A8;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,29,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B122C4;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,26,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B122E0;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// rlwinm r11,r11,23,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B122FC;
	sub_82B10610(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r27,r11,-32224
	ctx.r27.s64 = ctx.r11.s64 + -32224;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12310;
	sub_82B10610(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r11,28,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x80;
	// rlwinm r11,r11,27,26,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// or r5,r5,r11
	ctx.r5.u64 = ctx.r5.u64 | ctx.r11.u64;
	// bl 0x82b11308
	ctx.lr = 0x82B12348;
	sub_82B11308(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,14160
	ctx.r4.s64 = ctx.r11.s64 + 14160;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3;
	// lbzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r29.u32);
	// extsb r5,r11
	ctx.r5.s64 = ctx.r11.s8;
	// bl 0x82b10610
	ctx.lr = 0x82B12368;
	sub_82B10610(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b1239c
	if (!ctx.cr0.eq) goto loc_82B1239C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r10,r10,7276
	ctx.r10.s64 = ctx.r10.s64 + 7276;
	// rlwinm r8,r11,9,28,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 9) & 0xC;
	// addi r4,r9,-14056
	ctx.r4.s64 = ctx.r9.s64 + -14056;
	// rlwinm r5,r11,12,27,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0x1F;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r8,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B1239C;
	sub_82B10610(ctx, base);
loc_82B1239C:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r26,r11,-30056
	ctx.r26.s64 = ctx.r11.s64 + -30056;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B123B0;
	sub_82B10610(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r25,r11,-24420
	ctx.r25.s64 = ctx.r11.s64 + -24420;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b123d8
	if (ctx.cr0.eq) goto loc_82B123D8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,15220
	ctx.r5.s64 = ctx.r11.s64 + 15220;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B123D8;
	sub_82B10610(ctx, base);
loc_82B123D8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// rlwinm. r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,14108
	ctx.r28.s64 = ctx.r11.s64 + 14108;
	// bne 0x82b1243c
	if (!ctx.cr0.eq) goto loc_82B1243C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B123F4;
	sub_82B11B88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12400;
	sub_82B10610(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14084
	ctx.r4.s64 = ctx.r11.s64 + -14084;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r6,r11,24,9,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7FFFFF;
	// clrlwi r5,r11,24
	ctx.r5.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82b10610
	ctx.lr = 0x82B1241C;
	sub_82B10610(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r29,1336
	ctx.r11.s64 = ctx.r29.s64 + 1336;
	// addi r4,r10,-14100
	ctx.r4.s64 = ctx.r10.s64 + -14100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r10,r10,2,24,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFC;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B1243C;
	sub_82B10610(ctx, base);
loc_82B1243C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12444;
	sub_82B11B88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12450;
	sub_82B10610(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r29,r11,-10264
	ctx.r29.s64 = ctx.r11.s64 + -10264;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b12478
	if (ctx.cr0.eq) goto loc_82B12478;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-14112
	ctx.r4.s64 = ctx.r11.s64 + -14112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12478;
	sub_82B10610(ctx, base);
loc_82B12478:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14124
	ctx.r4.s64 = ctx.r11.s64 + -14124;
	// bl 0x82b10610
	ctx.lr = 0x82B12488;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b124a4
	if (ctx.cr0.eq) goto loc_82B124A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-14148
	ctx.r4.s64 = ctx.r11.s64 + -14148;
	// b 0x82b124ac
	goto loc_82B124AC;
loc_82B124A4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-14172
	ctx.r4.s64 = ctx.r11.s64 + -14172;
loc_82B124AC:
	// bl 0x82b10610
	ctx.lr = 0x82B124B0;
	sub_82B10610(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B124BC;
	sub_82B10610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B124C4;
	sub_82B11B88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B124D0;
	sub_82B10610(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14184
	ctx.r4.s64 = ctx.r11.s64 + -14184;
	// bl 0x82b10610
	ctx.lr = 0x82B124E0;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b124f8
	if (ctx.cr0.eq) goto loc_82B124F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82b12500
	goto loc_82B12500;
loc_82B124F8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r4,r11,-10256
	ctx.r4.s64 = ctx.r11.s64 + -10256;
loc_82B12500:
	// bl 0x82b10610
	ctx.lr = 0x82B12504;
	sub_82B10610(ctx, base);
	// lbz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 4);
	// clrlwi. r5,r11,26
	ctx.r5.u64 = ctx.r11.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq 0x82b12520
	if (ctx.cr0.eq) goto loc_82B12520;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14200
	ctx.r4.s64 = ctx.r11.s64 + -14200;
	// bl 0x82b10610
	ctx.lr = 0x82B12520;
	sub_82B10610(ctx, base);
loc_82B12520:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82b1258c
	if (ctx.cr6.eq) goto loc_82B1258C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b1258c
	if (!ctx.cr0.eq) goto loc_82B1258C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12540;
	sub_82B10610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12548;
	sub_82B11B88(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12554;
	sub_82B10610(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b12580
	if (!ctx.cr0.eq) goto loc_82B12580;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r11,r11,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x7;
	// addi r4,r10,-14236
	ctx.r4.s64 = ctx.r10.s64 + -14236;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// bl 0x82b10610
	ctx.lr = 0x82B1257C;
	sub_82B10610(ctx, base);
	// b 0x82b1258c
	goto loc_82B1258C;
loc_82B12580:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-14252
	ctx.r4.s64 = ctx.r11.s64 + -14252;
	// bl 0x82b10610
	ctx.lr = 0x82B1258C;
	sub_82B10610(ctx, base);
loc_82B1258C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b125ac
	if (ctx.cr0.eq) goto loc_82B125AC;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r5,r11,15204
	ctx.r5.s64 = ctx.r11.s64 + 15204;
loc_82B125A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B125AC;
	sub_82B10610(ctx, base);
loc_82B125AC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B125B4"))) PPC_WEAK_FUNC(sub_82B125B4);
PPC_FUNC_IMPL(__imp__sub_82B125B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B125B8"))) PPC_WEAK_FUNC(sub_82B125B8);
PPC_FUNC_IMPL(__imp__sub_82B125B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82B125C0;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r19,r6
	ctx.r19.u64 = ctx.r6.u64;
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82b127b4
	if (ctx.cr6.eq) goto loc_82B127B4;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r23,r3,15040
	ctx.r23.s64 = ctx.r3.s64 + 15040;
	// addi r27,r4,-28036
	ctx.r27.s64 = ctx.r4.s64 + -28036;
	// addi r26,r5,-30212
	ctx.r26.s64 = ctx.r5.s64 + -30212;
	// addi r25,r6,-13552
	ctx.r25.s64 = ctx.r6.s64 + -13552;
	// addi r22,r7,5832
	ctx.r22.s64 = ctx.r7.s64 + 5832;
	// addi r24,r8,-26720
	ctx.r24.s64 = ctx.r8.s64 + -26720;
	// addi r21,r9,-13564
	ctx.r21.s64 = ctx.r9.s64 + -13564;
	// addi r20,r10,-13560
	ctx.r20.s64 = ctx.r10.s64 + -13560;
	// addi r30,r11,14760
	ctx.r30.s64 = ctx.r11.s64 + 14760;
loc_82B12628:
	// clrlwi r11,r17,31
	ctx.r11.u64 = ctx.r17.u32 & 0x1;
	// clrlwi r31,r18,31
	ctx.r31.u64 = ctx.r18.u32 & 0x1;
	// srawi r18,r18,1
	ctx.xer.ca = (ctx.r18.s32 < 0) & ((ctx.r18.u32 & 0x1) != 0);
	ctx.r18.s64 = ctx.r18.s32 >> 1;
	// srawi r17,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r17.s64 = ctx.r17.s32 >> 2;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82b12668
	if (!ctx.cr6.eq) goto loc_82B12668;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12648;
	sub_82B11B88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12654;
	sub_82B10610(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b11cd0
	ctx.lr = 0x82B12664;
	sub_82B11CD0(ctx, base);
	// b 0x82b127a8
	goto loc_82B127A8;
loc_82B12668:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,5,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0x1F;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82b1269c
	if (ctx.cr6.lt) goto loc_82B1269C;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b12690
	if (ctx.cr6.eq) goto loc_82B12690;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
loc_82B12690:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B1269C;
	sub_82B10610(ctx, base);
loc_82B1269C:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b126bc
	if (!ctx.cr0.eq) goto loc_82B126BC;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b126c0
	if (ctx.cr6.eq) goto loc_82B126C0;
loc_82B126BC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B126C0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b126e8
	if (!ctx.cr0.eq) goto loc_82B126E8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B126D0;
	sub_82B11B88(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B126DC;
	sub_82B10610(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b11710
	ctx.lr = 0x82B126E8;
	sub_82B11710(ctx, base);
loc_82B126E8:
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// rlwinm r11,r11,2,25,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x7C;
	// lwzx r11,r11,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r22.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// blt cr6,0x82b12724
	if (ctx.cr6.lt) goto loc_82B12724;
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b127a8
	if (ctx.cr0.eq) goto loc_82B127A8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1151
	ctx.r7.s64 = 1151;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B12720;
	sub_82B102F0(ctx, base);
	// b 0x82b127a8
	goto loc_82B127A8;
loc_82B12724:
	// rlwinm. r10,r11,0,8,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b1274c
	if (!ctx.cr0.eq) goto loc_82B1274C;
	// rlwinm r10,r11,0,0,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFC000000;
	// lis r9,5120
	ctx.r9.s64 = 335544320;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82b1274c
	if (!ctx.cr6.eq) goto loc_82B1274C;
	// rlwinm r11,r11,0,18,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F00;
	// cmplwi cr6,r11,4096
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4096, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x82b12750
	if (!ctx.cr6.eq) goto loc_82B12750;
loc_82B1274C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B12750:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b127a8
	if (!ctx.cr0.eq) goto loc_82B127A8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12760;
	sub_82B11B88(ctx, base);
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b12780
	if (!ctx.cr0.eq) goto loc_82B12780;
	// lbz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 8);
	// clrlwi r11,r11,27
	ctx.r11.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82b12784
	if (ctx.cr6.eq) goto loc_82B12784;
loc_82B12780:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B12784:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// beq 0x82b12798
	if (ctx.cr0.eq) goto loc_82B12798;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82B12798:
	// bl 0x82b10610
	ctx.lr = 0x82B1279C;
	sub_82B10610(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b119e8
	ctx.lr = 0x82B127A8;
	sub_82B119E8(ctx, base);
loc_82B127A8:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// bne 0x82b12628
	if (!ctx.cr0.eq) goto loc_82B12628;
loc_82B127B4:
	// stw r28,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r28.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B127C0"))) PPC_WEAK_FUNC(sub_82B127C0);
PPC_FUNC_IMPL(__imp__sub_82B127C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B127C8;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// not r10,r6
	ctx.r10.u64 = ~ctx.r6.u64;
	// stw r4,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r4.u32);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r5.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stb r11,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r11.u8);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// clrlwi r30,r10,31
	ctx.r30.u64 = ctx.r10.u32 & 0x1;
	// bl 0x82b10670
	ctx.lr = 0x82B12804;
	sub_82B10670(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82b11be8
	ctx.lr = 0x82B12820;
	sub_82B11BE8(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// lis r23,-31975
	ctx.r23.s64 = -2095513600;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lis r20,-32227
	ctx.r20.s64 = -2112028672;
	// lwz r9,132(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lis r19,-32242
	ctx.r19.s64 = -2113011712;
	// lwz r8,120(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// addi r7,r23,7288
	ctx.r7.s64 = ctx.r23.s64 + 7288;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r6,r20,15008
	ctx.r6.s64 = ctx.r20.s64 + 15008;
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// addi r11,r11,-13080
	ctx.r11.s64 = ctx.r11.s64 + -13080;
	// addi r5,r19,-13100
	ctx.r5.s64 = ctx.r19.s64 + -13100;
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// lis r18,-32242
	ctx.r18.s64 = -2113011712;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// lis r17,-32242
	ctx.r17.s64 = -2113011712;
	// stw r5,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r5.u32);
	// lis r14,-32227
	ctx.r14.s64 = -2112028672;
	// addi r11,r8,-13064
	ctx.r11.s64 = ctx.r8.s64 + -13064;
	// addi r7,r18,-13116
	ctx.r7.s64 = ctx.r18.s64 + -13116;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r6,r17,-13128
	ctx.r6.s64 = ctx.r17.s64 + -13128;
	// addi r5,r14,14944
	ctx.r5.s64 = ctx.r14.s64 + 14944;
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// addi r10,r10,-13056
	ctx.r10.s64 = ctx.r10.s64 + -13056;
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// addi r9,r9,-32224
	ctx.r9.s64 = ctx.r9.s64 + -32224;
	// stw r5,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r5.u32);
	// lis r22,-32242
	ctx.r22.s64 = -2113011712;
	// stw r10,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r10.u32);
	// stw r9,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r9.u32);
	// lis r21,-32227
	ctx.r21.s64 = -2112028672;
	// lis r16,-32227
	ctx.r16.s64 = -2112028672;
	// lis r15,-32227
	ctx.r15.s64 = -2112028672;
	// lis r24,-32230
	ctx.r24.s64 = -2112225280;
	// lis r25,-32230
	ctx.r25.s64 = -2112225280;
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r28,-32227
	ctx.r28.s64 = -2112028672;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lis r30,-32242
	ctx.r30.s64 = -2113011712;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r23,r22,-14344
	ctx.r23.s64 = ctx.r22.s64 + -14344;
	// addi r30,r30,-13156
	ctx.r30.s64 = ctx.r30.s64 + -13156;
	// addi r28,r28,14912
	ctx.r28.s64 = ctx.r28.s64 + 14912;
	// addi r3,r3,14892
	ctx.r3.s64 = ctx.r3.s64 + 14892;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// addi r4,r4,-13168
	ctx.r4.s64 = ctx.r4.s64 + -13168;
	// stw r28,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r28.u32);
	// addi r5,r5,-13192
	ctx.r5.s64 = ctx.r5.s64 + -13192;
	// stw r3,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r3.u32);
	// addi r6,r6,-13212
	ctx.r6.s64 = ctx.r6.s64 + -13212;
	// stw r4,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r4.u32);
	// addi r7,r7,-13232
	ctx.r7.s64 = ctx.r7.s64 + -13232;
	// stw r5,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r5.u32);
	// addi r8,r8,-13252
	ctx.r8.s64 = ctx.r8.s64 + -13252;
	// stw r6,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r6.u32);
	// addi r9,r9,-13276
	ctx.r9.s64 = ctx.r9.s64 + -13276;
	// stw r7,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r7.u32);
	// addi r17,r10,-13288
	ctx.r17.s64 = ctx.r10.s64 + -13288;
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// addi r19,r15,14964
	ctx.r19.s64 = ctx.r15.s64 + 14964;
	// stw r9,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r9.u32);
	// addi r10,r24,-30212
	ctx.r10.s64 = ctx.r24.s64 + -30212;
	// addi r14,r26,14796
	ctx.r14.s64 = ctx.r26.s64 + 14796;
	// addi r15,r11,14836
	ctx.r15.s64 = ctx.r11.s64 + 14836;
	// stw r10,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r10.u32);
	// addi r27,r27,-13136
	ctx.r27.s64 = ctx.r27.s64 + -13136;
	// addi r29,r29,14908
	ctx.r29.s64 = ctx.r29.s64 + 14908;
	// addi r30,r25,-30204
	ctx.r30.s64 = ctx.r25.s64 + -30204;
	// stw r27,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r27.u32);
	// lis r26,-32242
	ctx.r26.s64 = -2113011712;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r27,-32242
	ctx.r27.s64 = -2113011712;
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r26,r26,-13312
	ctx.r26.s64 = ctx.r26.s64 + -13312;
	// addi r28,r28,-13336
	ctx.r28.s64 = ctx.r28.s64 + -13336;
	// addi r3,r3,-13348
	ctx.r3.s64 = ctx.r3.s64 + -13348;
	// stw r26,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r26.u32);
	// addi r4,r4,-13356
	ctx.r4.s64 = ctx.r4.s64 + -13356;
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
	// addi r5,r5,-13368
	ctx.r5.s64 = ctx.r5.s64 + -13368;
	// stw r3,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r3.u32);
	// addi r6,r6,14784
	ctx.r6.s64 = ctx.r6.s64 + 14784;
	// stw r4,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r4.u32);
	// addi r7,r7,-13424
	ctx.r7.s64 = ctx.r7.s64 + -13424;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// addi r8,r8,-13436
	ctx.r8.s64 = ctx.r8.s64 + -13436;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// addi r9,r9,14052
	ctx.r9.s64 = ctx.r9.s64 + 14052;
	// stw r7,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r7.u32);
	// addi r11,r11,-13444
	ctx.r11.s64 = ctx.r11.s64 + -13444;
	// stw r8,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r8.u32);
	// addi r20,r16,-24420
	ctx.r20.s64 = ctx.r16.s64 + -24420;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// addi r21,r21,15028
	ctx.r21.s64 = ctx.r21.s64 + 15028;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r18,r27,-13460
	ctx.r18.s64 = ctx.r27.s64 + -13460;
	// addi r22,r29,4404
	ctx.r22.s64 = ctx.r29.s64 + 4404;
	// addi r16,r30,14808
	ctx.r16.s64 = ctx.r30.s64 + 14808;
	// addi r24,r10,14760
	ctx.r24.s64 = ctx.r10.s64 + 14760;
loc_82B12A28:
	// lwz r30,460(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82b12a38
	goto loc_82B12A38;
loc_82B12A34:
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
loc_82B12A38:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r28,136(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// beq cr6,0x82b12c70
	if (ctx.cr6.eq) goto loc_82B12C70;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12A64;
	sub_82B101F8(ctx, base);
	// lbz r25,113(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// li r26,1
	ctx.r26.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stb r26,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r26.u8);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x82b12ad8
	if (ctx.cr0.eq) goto loc_82B12AD8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12A84;
	sub_82B11B88(ctx, base);
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// rlwinm r11,r27,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 27) & 0x7FFFFFF;
	// clrlwi r10,r27,27
	ctx.r10.u64 = ctx.r27.u32 & 0x1F;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// slw r10,r26,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// and. r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b12adc
	if (ctx.cr0.eq) goto loc_82B12ADC;
	// srawi r11,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 1;
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r11.s64;
	// bl 0x82b10610
	ctx.lr = 0x82B12ACC;
	sub_82B10610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12AD4;
	sub_82B11B88(ctx, base);
	// b 0x82b12adc
	goto loc_82B12ADC;
loc_82B12AD8:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82B12ADC:
	// cmplwi cr6,r29,12
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 12, ctx.xer);
	// bgt cr6,0x82b13204
	if (ctx.cr6.gt) goto loc_82B13204;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// rlwinm r0,r29,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-14280
	ctx.r12.s64 = ctx.r12.s64 + -14280;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32079
	ctx.r12.s64 = -2102329344;
	// addi r12,r12,11020
	ctx.r12.s64 = ctx.r12.s64 + 11020;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r29.u64) {
	case 0:
		goto loc_82B12B0C;
	case 1:
		goto loc_82B12B68;
	case 2:
		goto loc_82B12B3C;
	case 3:
		goto loc_82B12CA8;
	case 4:
		goto loc_82B12CD4;
	case 5:
		goto loc_82B12CF0;
	case 6:
		goto loc_82B12D0C;
	case 7:
		goto loc_82B12D28;
	case 8:
		goto loc_82B12E18;
	case 9:
		goto loc_82B12F5C;
	case 10:
		goto loc_82B12FB8;
	case 11:
		goto loc_82B12FD4;
	case 12:
		goto loc_82B1312C;
	default:
		__builtin_unreachable();
	}
loc_82B12B0C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b12c58
	if (ctx.cr0.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12B2C;
	sub_82B10610(ctx, base);
	// lwz r4,128(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82B12B30:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10f00
	ctx.lr = 0x82B12B38;
	sub_82B10F00(ctx, base);
	// b 0x82b12c58
	goto loc_82B12C58;
loc_82B12B3C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12b68
	if (ctx.cr6.eq) goto loc_82B12B68;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b12b68
	if (ctx.cr0.eq) goto loc_82B12B68;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12B5C;
	sub_82B10610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,188(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// bl 0x82b10610
	ctx.lr = 0x82B12B68;
	sub_82B10610(ctx, base);
loc_82B12B68:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12B78;
	sub_82B101F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82b12b88
	if (!ctx.cr6.eq) goto loc_82B12B88;
	// stw r3,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r3.u32);
loc_82B12B88:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12B98;
	sub_82B101F8(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12BAC;
	sub_82B101F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,29
	ctx.r4.s64 = 29;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12BC0;
	sub_82B101F8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12BD4;
	sub_82B101F8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12BE4;
	sub_82B101F8(ctx, base);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b12c2c
	if (ctx.cr6.eq) goto loc_82B12C2C;
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82b12c2c
	if (!ctx.cr6.gt) goto loc_82B12C2C;
	// lwz r10,460(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// mulli r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 * 12;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b125b8
	ctx.lr = 0x82B12C20;
	sub_82B125B8(ctx, base);
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
loc_82B12C2C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c54
	if (ctx.cr6.eq) goto loc_82B12C54;
	// add r11,r28,r29
	ctx.r11.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r5,468(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// mulli r6,r11,3
	ctx.r6.s64 = ctx.r11.s64 * 3;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82b12c54
	if (!ctx.cr6.gt) goto loc_82B12C54;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// bl 0x82b10610
	ctx.lr = 0x82B12C54;
	sub_82B10610(ctx, base);
loc_82B12C54:
	// lwz r27,116(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
loc_82B12C58:
	// lbz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 112);
	// addi r10,r27,1
	ctx.r10.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82b12a34
	if (!ctx.cr0.eq) goto loc_82B12A34;
loc_82B12C70:
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lbz r11,113(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 113);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm. r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r9,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stb r10,113(r1)
	PPC_STORE_U8(ctx.r1.u32 + 113, ctx.r10.u8);
	// bne 0x82b12a28
	if (!ctx.cr0.eq) goto loc_82B12A28;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b11b88
	ctx.lr = 0x82B12C9C;
	sub_82B11B88(ctx, base);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82B12CA8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12cc8
	if (ctx.cr6.eq) goto loc_82B12CC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12CBC;
	sub_82B10610(ctx, base);
	// lwz r4,156(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
loc_82B12CC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10f00
	ctx.lr = 0x82B12CC8;
	sub_82B10F00(ctx, base);
loc_82B12CC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// b 0x82b12c58
	goto loc_82B12C58;
loc_82B12CD4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12cc8
	if (ctx.cr6.eq) goto loc_82B12CC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12CE8;
	sub_82B10610(ctx, base);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// b 0x82b12cc0
	goto loc_82B12CC0;
loc_82B12CF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12cc8
	if (ctx.cr6.eq) goto loc_82B12CC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12D04;
	sub_82B10610(ctx, base);
	// lwz r4,164(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// b 0x82b12cc0
	goto loc_82B12CC0;
loc_82B12D0C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12cc8
	if (ctx.cr6.eq) goto loc_82B12CC8;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12D20;
	sub_82B10610(ctx, base);
	// lwz r4,252(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// b 0x82b12cc0
	goto loc_82B12CC0;
loc_82B12D28:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12D3C;
	sub_82B10610(ctx, base);
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10f00
	ctx.lr = 0x82B12D48;
	sub_82B10F00(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12D54;
	sub_82B10610(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12D64;
	sub_82B101F8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12D7C;
	sub_82B10610(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12D8C;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12da4
	if (ctx.cr0.eq) goto loc_82B12DA4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,172(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12DA4;
	sub_82B10610(ctx, base);
loc_82B12DA4:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12DB4;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12DC4;
	sub_82B10610(ctx, base);
	// li r5,22
	ctx.r5.s64 = 22;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12DD4;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12dec
	if (ctx.cr0.eq) goto loc_82B12DEC;
	// lwz r4,220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
loc_82B12DE0:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12DEC;
	sub_82B10610(ctx, base);
loc_82B12DEC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12DFC;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12c58
	if (ctx.cr0.eq) goto loc_82B12C58;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
loc_82B12E08:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
loc_82B12E0C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12E14;
	sub_82B10610(ctx, base);
	// b 0x82b12c58
	goto loc_82B12C58;
loc_82B12E18:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12E2C;
	sub_82B10610(ctx, base);
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10f00
	ctx.lr = 0x82B12E38;
	sub_82B10F00(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12E44;
	sub_82B10610(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12E54;
	sub_82B101F8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12E6C;
	sub_82B10610(ctx, base);
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12E7C;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12e94
	if (ctx.cr0.eq) goto loc_82B12E94;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,180(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12E94;
	sub_82B10610(ctx, base);
loc_82B12E94:
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,17
	ctx.r4.s64 = 17;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12EA4;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12EB4;
	sub_82B10610(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12EC4;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,244(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// bl 0x82b10610
	ctx.lr = 0x82B12ED4;
	sub_82B10610(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,23
	ctx.r4.s64 = 23;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12EE4;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12efc
	if (ctx.cr0.eq) goto loc_82B12EFC;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,144(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12EFC;
	sub_82B10610(ctx, base);
loc_82B12EFC:
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12F0C;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,228(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// bl 0x82b10610
	ctx.lr = 0x82B12F1C;
	sub_82B10610(ctx, base);
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,37
	ctx.r4.s64 = 37;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12F2C;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12f44
	if (ctx.cr0.eq) goto loc_82B12F44;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,196(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12F44;
	sub_82B10610(ctx, base);
loc_82B12F44:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12F54;
	sub_82B101F8(ctx, base);
	// lwz r4,260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// b 0x82b12de0
	goto loc_82B12DE0;
loc_82B12F5C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B12F74;
	sub_82B101F8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12F84;
	sub_82B10610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,204(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// bl 0x82b10f00
	ctx.lr = 0x82B12F90;
	sub_82B10F00(ctx, base);
	// srawi r11,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,148(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r29.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r5,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r5.s64 = temp.s64;
	// subf r6,r11,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r11.s64;
	// bl 0x82b10610
	ctx.lr = 0x82B12FB4;
	sub_82B10610(ctx, base);
	// b 0x82b12c58
	goto loc_82B12C58;
loc_82B12FB8:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12FCC;
	sub_82B10610(ctx, base);
	// lwz r4,152(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// b 0x82b12b30
	goto loc_82B12B30;
loc_82B12FD4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B12FE8;
	sub_82B10610(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,14
	ctx.r4.s64 = 14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82b101f8
	ctx.lr = 0x82B12FFC;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b13008
	if (ctx.cr0.eq) goto loc_82B13008;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
loc_82B13008:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82b13024
	if (ctx.cr0.eq) goto loc_82B13024;
	// lwz r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// bl 0x82b10f00
	ctx.lr = 0x82B1301C;
	sub_82B10F00(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// b 0x82b13088
	goto loc_82B13088;
loc_82B13024:
	// lwz r4,168(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// bl 0x82b10f00
	ctx.lr = 0x82B1302C;
	sub_82B10F00(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B13038;
	sub_82B10610(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,35
	ctx.r4.s64 = 35;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B13048;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B13058;
	sub_82B10610(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,43
	ctx.r4.s64 = 43;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B13068;
	sub_82B101F8(ctx, base);
	// lwz r5,176(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82b13078
	if (!ctx.cr0.eq) goto loc_82B13078;
	// lwz r5,184(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
loc_82B13078:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// bl 0x82b10610
	ctx.lr = 0x82B13084;
	sub_82B10610(ctx, base);
	// lwz r4,200(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
loc_82B13088:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B13090;
	sub_82B10610(ctx, base);
	// li r5,13
	ctx.r5.s64 = 13;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B130A0;
	sub_82B101F8(ctx, base);
	// srawi r11,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r3.s32 >> 1;
	// clrlwi r6,r3,31
	ctx.r6.u64 = ctx.r3.u32 & 0x1;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addze r5,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r5.s64 = temp.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B130B8;
	sub_82B10610(ctx, base);
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B130C8;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b130e0
	if (ctx.cr0.eq) goto loc_82B130E0;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B130E0;
	sub_82B10610(ctx, base);
loc_82B130E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1310c
	if (ctx.cr0.eq) goto loc_82B1310C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,34
	ctx.r4.s64 = 34;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B130FC;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,216(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// bl 0x82b10610
	ctx.lr = 0x82B1310C;
	sub_82B10610(ctx, base);
loc_82B1310C:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B1311C;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12c58
	if (ctx.cr0.eq) goto loc_82B12C58;
	// lwz r4,224(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// b 0x82b12e08
	goto loc_82B12E08;
loc_82B1312C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B13140;
	sub_82B10610(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10f00
	ctx.lr = 0x82B1314C;
	sub_82B10F00(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B13158;
	sub_82B10610(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,42
	ctx.r4.s64 = 42;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B13168;
	sub_82B101F8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,232(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// bl 0x82b10610
	ctx.lr = 0x82B13194;
	sub_82B10610(ctx, base);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82b131bc
	if (!ctx.cr6.eq) goto loc_82B131BC;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B131AC;
	sub_82B101F8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// bl 0x82b10610
	ctx.lr = 0x82B131BC;
	sub_82B10610(ctx, base);
loc_82B131BC:
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B131CC;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b131e4
	if (ctx.cr0.eq) goto loc_82B131E4;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,248(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B131E4;
	sub_82B10610(ctx, base);
loc_82B131E4:
	// li r5,38
	ctx.r5.s64 = 38;
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B131F4;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b12c58
	if (ctx.cr0.eq) goto loc_82B12C58;
	// lwz r4,256(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// b 0x82b12e08
	goto loc_82B12E08;
loc_82B13204:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b12c58
	if (ctx.cr6.eq) goto loc_82B12C58;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b10610
	ctx.lr = 0x82B13218;
	sub_82B10610(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,264(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// bl 0x82b10f00
	ctx.lr = 0x82B13224;
	sub_82B10F00(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// b 0x82b12e0c
	goto loc_82B12E0C;
}

__attribute__((alias("__imp__sub_82B13230"))) PPC_WEAK_FUNC(sub_82B13230);
PPC_FUNC_IMPL(__imp__sub_82B13230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B13238;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12984
	ctx.r29.s64 = ctx.r10.s64 + -12984;
	// bne cr6,0x82b13284
	if (!ctx.cr6.eq) goto loc_82B13284;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-13000
	ctx.r5.s64 = ctx.r11.s64 + -13000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13284;
	sub_82B102F0(ctx, base);
loc_82B13284:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b132a8
	if (!ctx.cr6.eq) goto loc_82B132A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-13016
	ctx.r5.s64 = ctx.r11.s64 + -13016;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,266
	ctx.r7.s64 = 266;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B132A8;
	sub_82B102F0(ctx, base);
loc_82B132A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82b132d8
	if (!ctx.cr6.eq) goto loc_82B132D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-13036
	ctx.r5.s64 = ctx.r11.s64 + -13036;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,267
	ctx.r7.s64 = 267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B132CC;
	sub_82B102F0(ctx, base);
loc_82B132CC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B132D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82B132D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b132cc
	if (ctx.cr6.eq) goto loc_82B132CC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b132cc
	if (ctx.cr6.eq) goto loc_82B132CC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82431c78
	ctx.lr = 0x82B132F0;
	sub_82431C78(ctx, base);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b18918
	ctx.lr = 0x82B13300;
	sub_82B18918(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82b132d0
	goto loc_82B132D0;
}

__attribute__((alias("__imp__sub_82B13314"))) PPC_WEAK_FUNC(sub_82B13314);
PPC_FUNC_IMPL(__imp__sub_82B13314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B13318"))) PPC_WEAK_FUNC(sub_82B13318);
PPC_FUNC_IMPL(__imp__sub_82B13318) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b1335c
	if (!ctx.cr6.eq) goto loc_82B1335C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12984
	ctx.r6.s64 = ctx.r11.s64 + -12984;
	// addi r5,r10,-13000
	ctx.r5.s64 = ctx.r10.s64 + -13000;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,391
	ctx.r7.s64 = 391;
	// bl 0x82b102f0
	ctx.lr = 0x82B13354;
	sub_82B102F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b1336c
	goto loc_82B1336C;
loc_82B1335C:
	// bl 0x82431c78
	ctx.lr = 0x82B13360;
	sub_82431C78(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b18310
	ctx.lr = 0x82B1336C;
	sub_82B18310(ctx, base);
loc_82B1336C:
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

__attribute__((alias("__imp__sub_82B13380"))) PPC_WEAK_FUNC(sub_82B13380);
PPC_FUNC_IMPL(__imp__sub_82B13380) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b133bc
	if (!ctx.cr6.eq) goto loc_82B133BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-27688
	ctx.r6.s64 = ctx.r11.s64 + -27688;
	// addi r5,r10,-27704
	ctx.r5.s64 = ctx.r10.s64 + -27704;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,241
	ctx.r7.s64 = 241;
	// bl 0x82b102f0
	ctx.lr = 0x82B133BC;
	sub_82B102F0(ctx, base);
loc_82B133BC:
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

__attribute__((alias("__imp__sub_82B133D4"))) PPC_WEAK_FUNC(sub_82B133D4);
PPC_FUNC_IMPL(__imp__sub_82B133D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B133D8"))) PPC_WEAK_FUNC(sub_82B133D8);
PPC_FUNC_IMPL(__imp__sub_82B133D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82B133E0;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// bl 0x82b13380
	ctx.lr = 0x82B133F4;
	sub_82B13380(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b13404
	if (!ctx.cr0.eq) goto loc_82B13404;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82b135f8
	goto loc_82B135F8;
loc_82B13404:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1340C;
	sub_82AB82D0(ctx, base);
	// bl 0x82431c78
	ctx.lr = 0x82B13410;
	sub_82431C78(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1341C;
	sub_82AB82D0(ctx, base);
	// bl 0x82ad6c20
	ctx.lr = 0x82B13420;
	sub_82AD6C20(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1342C;
	sub_82AB82D0(ctx, base);
	// bl 0x82920258
	ctx.lr = 0x82B13430;
	sub_82920258(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1343C;
	sub_82AB82D0(ctx, base);
	// bl 0x829204e8
	ctx.lr = 0x82B13440;
	sub_829204E8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1344C;
	sub_82AB82D0(ctx, base);
	// bl 0x824325d0
	ctx.lr = 0x82B13450;
	sub_824325D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1345C;
	sub_82AB82D0(ctx, base);
	// bl 0x829204f0
	ctx.lr = 0x82B13460;
	sub_829204F0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1346C;
	sub_82AB82D0(ctx, base);
	// bl 0x828d33f0
	ctx.lr = 0x82B13470;
	sub_828D33F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B1347C;
	sub_82AB82D0(ctx, base);
	// bl 0x828b2440
	ctx.lr = 0x82B13480;
	sub_828B2440(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r4,9
	ctx.r4.s64 = 9;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc89a0
	ctx.lr = 0x82B13490;
	sub_82BC89A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b134a0
	if (!ctx.cr0.eq) goto loc_82B134A0;
loc_82B13498:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b135f8
	goto loc_82B135F8;
loc_82B134A0:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc89a0
	ctx.lr = 0x82B134AC;
	sub_82BC89A0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b13498
	if (!ctx.cr0.eq) goto loc_82B13498;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b185b0
	ctx.lr = 0x82B134C0;
	sub_82B185B0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82b15120
	ctx.lr = 0x82B134C8;
	sub_82B15120(ctx, base);
	// b 0x82b134f0
	goto loc_82B134F0;
loc_82B134CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B134D4;
	sub_82B154D0(ctx, base);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x82b16440
	ctx.lr = 0x82B134DC;
	sub_82B16440(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b13498
	if (!ctx.cr0.eq) goto loc_82B13498;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b15420
	ctx.lr = 0x82B134F0;
	sub_82B15420(ctx, base);
loc_82B134F0:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b134cc
	if (!ctx.cr0.eq) goto loc_82B134CC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc8760
	ctx.lr = 0x82B13504;
	sub_82BC8760(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r29,r10,-28036
	ctx.r29.s64 = ctx.r10.s64 + -28036;
	// addi r25,r9,-12880
	ctx.r25.s64 = ctx.r9.s64 + -12880;
	// addi r26,r11,-12984
	ctx.r26.s64 = ctx.r11.s64 + -12984;
	// beq 0x82b1353c
	if (ctx.cr0.eq) goto loc_82B1353C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,520
	ctx.r7.s64 = 520;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1353C;
	sub_82B102F0(ctx, base);
loc_82B1353C:
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r9,r21
	ctx.r9.u64 = ctx.r21.u64;
	// lwz r4,20(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bl 0x82b15718
	ctx.lr = 0x82B13560;
	sub_82B15718(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b1358c
	if (!ctx.cr0.eq) goto loc_82B1358C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,531
	ctx.r7.s64 = 531;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13584;
	sub_82B102F0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82b135f8
	goto loc_82B135F8;
loc_82B1358C:
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b15c80
	ctx.lr = 0x82B13598;
	sub_82B15C80(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82b19038
	ctx.lr = 0x82B135AC;
	sub_82B19038(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b135c4
	if (ctx.cr0.eq) goto loc_82B135C4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b158f0
	ctx.lr = 0x82B135BC;
	sub_82B158F0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82b135f8
	goto loc_82B135F8;
loc_82B135C4:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b184d0
	ctx.lr = 0x82B135D4;
	sub_82B184D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82b135f4
	if (ctx.cr0.eq) goto loc_82B135F4;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B135F4;
	sub_82B102F0(ctx, base);
loc_82B135F4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B135F8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13600"))) PPC_WEAK_FUNC(sub_82B13600);
PPC_FUNC_IMPL(__imp__sub_82B13600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B13608;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12984
	ctx.r28.s64 = ctx.r10.s64 + -12984;
	// bne cr6,0x82b13648
	if (!ctx.cr6.eq) goto loc_82B13648;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12856
	ctx.r5.s64 = ctx.r11.s64 + -12856;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,619
	ctx.r7.s64 = 619;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13648;
	sub_82B102F0(ctx, base);
loc_82B13648:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc8e60
	ctx.lr = 0x82B13654;
	sub_82BC8E60(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b13678
	if (!ctx.cr0.eq) goto loc_82B13678;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12860
	ctx.r5.s64 = ctx.r11.s64 + -12860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,623
	ctx.r7.s64 = 623;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13678;
	sub_82B102F0(ctx, base);
loc_82B13678:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bc8a98
	ctx.lr = 0x82B13680;
	sub_82BC8A98(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b17e28
	ctx.lr = 0x82B1368C;
	sub_82B17E28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13698"))) PPC_WEAK_FUNC(sub_82B13698);
PPC_FUNC_IMPL(__imp__sub_82B13698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B136A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12984
	ctx.r29.s64 = ctx.r10.s64 + -12984;
	// bne cr6,0x82b136dc
	if (!ctx.cr6.eq) goto loc_82B136DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12796
	ctx.r5.s64 = ctx.r11.s64 + -12796;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,659
	ctx.r7.s64 = 659;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B136DC;
	sub_82B102F0(ctx, base);
loc_82B136DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b13380
	ctx.lr = 0x82B136E4;
	sub_82B13380(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82b13708
	if (!ctx.cr0.eq) goto loc_82B13708;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12808
	ctx.r5.s64 = ctx.r11.s64 + -12808;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,663
	ctx.r7.s64 = 663;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13708;
	sub_82B102F0(ctx, base);
loc_82B13708:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B13710;
	sub_82AB82D0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b13730
	if (!ctx.cr0.eq) goto loc_82B13730;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12848
	ctx.r5.s64 = ctx.r11.s64 + -12848;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// bl 0x82b102f0
	ctx.lr = 0x82B13730;
	sub_82B102F0(ctx, base);
loc_82B13730:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b17e48
	ctx.lr = 0x82B1373C;
	sub_82B17E48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc8d10
	ctx.lr = 0x82B13744;
	sub_82BC8D10(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13750"))) PPC_WEAK_FUNC(sub_82B13750);
PPC_FUNC_IMPL(__imp__sub_82B13750) {
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
	// bl 0x82bca0d0
	ctx.lr = 0x82B1376C;
	sub_82BCA0D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b13798
	if (!ctx.cr0.eq) goto loc_82B13798;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12780
	ctx.r5.s64 = ctx.r10.s64 + -12780;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,73
	ctx.r7.s64 = 73;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13798;
	sub_82B102F0(ctx, base);
loc_82B13798:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B137C4"))) PPC_WEAK_FUNC(sub_82B137C4);
PPC_FUNC_IMPL(__imp__sub_82B137C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B137C8"))) PPC_WEAK_FUNC(sub_82B137C8);
PPC_FUNC_IMPL(__imp__sub_82B137C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B137D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b138a8
	if (ctx.cr6.eq) goto loc_82B138A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-28036
	ctx.r31.s64 = ctx.r11.s64 + -28036;
	// addi r30,r10,-12768
	ctx.r30.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13818
	if (!ctx.cr6.eq) goto loc_82B13818;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12600
	ctx.r5.s64 = ctx.r11.s64 + -12600;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,115
	ctx.r7.s64 = 115;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13818;
	sub_82B102F0(ctx, base);
loc_82B13818:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13840
	if (!ctx.cr6.eq) goto loc_82B13840;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12620
	ctx.r5.s64 = ctx.r11.s64 + -12620;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,116
	ctx.r7.s64 = 116;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13840;
	sub_82B102F0(ctx, base);
loc_82B13840:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b13868
	if (ctx.cr6.eq) goto loc_82B13868;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12648
	ctx.r5.s64 = ctx.r11.s64 + -12648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,119
	ctx.r7.s64 = 119;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13868;
	sub_82B102F0(ctx, base);
loc_82B13868:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b13890
	if (ctx.cr6.eq) goto loc_82B13890;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12676
	ctx.r5.s64 = ctx.r11.s64 + -12676;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,120
	ctx.r7.s64 = 120;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13890;
	sub_82B102F0(ctx, base);
loc_82B13890:
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r11,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r28.u32);
loc_82B138A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B138B0"))) PPC_WEAK_FUNC(sub_82B138B0);
PPC_FUNC_IMPL(__imp__sub_82B138B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B138B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b1398c
	if (ctx.cr6.eq) goto loc_82B1398C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-28036
	ctx.r31.s64 = ctx.r11.s64 + -28036;
	// addi r30,r10,-12768
	ctx.r30.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13900
	if (!ctx.cr6.eq) goto loc_82B13900;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12568
	ctx.r5.s64 = ctx.r11.s64 + -12568;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,163
	ctx.r7.s64 = 163;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13900;
	sub_82B102F0(ctx, base);
loc_82B13900:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13928
	if (!ctx.cr6.eq) goto loc_82B13928;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12588
	ctx.r5.s64 = ctx.r11.s64 + -12588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,164
	ctx.r7.s64 = 164;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13928;
	sub_82B102F0(ctx, base);
loc_82B13928:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b13950
	if (ctx.cr6.eq) goto loc_82B13950;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12648
	ctx.r5.s64 = ctx.r11.s64 + -12648;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,167
	ctx.r7.s64 = 167;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13950;
	sub_82B102F0(ctx, base);
loc_82B13950:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b13978
	if (ctx.cr6.eq) goto loc_82B13978;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r11,-12676
	ctx.r5.s64 = ctx.r11.s64 + -12676;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,168
	ctx.r7.s64 = 168;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13978;
	sub_82B102F0(ctx, base);
loc_82B13978:
	// stw r29,8(r28)
	PPC_STORE_U32(ctx.r28.u32 + 8, ctx.r29.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82B1398C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13994"))) PPC_WEAK_FUNC(sub_82B13994);
PPC_FUNC_IMPL(__imp__sub_82B13994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B13998"))) PPC_WEAK_FUNC(sub_82B13998);
PPC_FUNC_IMPL(__imp__sub_82B13998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B139A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b13a38
	if (ctx.cr6.eq) goto loc_82B13A38;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b139e8
	if (!ctx.cr6.eq) goto loc_82B139E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12556
	ctx.r5.s64 = ctx.r11.s64 + -12556;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,264
	ctx.r7.s64 = 264;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B139E8;
	sub_82B102F0(ctx, base);
loc_82B139E8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13a10
	if (!ctx.cr6.eq) goto loc_82B13A10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12540
	ctx.r5.s64 = ctx.r11.s64 + -12540;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,265
	ctx.r7.s64 = 265;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13A10;
	sub_82B102F0(ctx, base);
loc_82B13A10:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82B13A38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13A40"))) PPC_WEAK_FUNC(sub_82B13A40);
PPC_FUNC_IMPL(__imp__sub_82B13A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B13A48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-12768
	ctx.r26.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13a90
	if (!ctx.cr6.eq) goto loc_82B13A90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12472
	ctx.r5.s64 = ctx.r11.s64 + -12472;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,449
	ctx.r7.s64 = 449;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13A90;
	sub_82B102F0(ctx, base);
loc_82B13A90:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b13ab4
	if (!ctx.cr6.eq) goto loc_82B13AB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12484
	ctx.r5.s64 = ctx.r11.s64 + -12484;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,450
	ctx.r7.s64 = 450;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13AB4;
	sub_82B102F0(ctx, base);
loc_82B13AB4:
	// li r4,32
	ctx.r4.s64 = 32;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B13AC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b13ae8
	if (!ctx.cr0.eq) goto loc_82B13AE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12496
	ctx.r5.s64 = ctx.r11.s64 + -12496;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,456
	ctx.r7.s64 = 456;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13AE8;
	sub_82B102F0(ctx, base);
loc_82B13AE8:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B13B0C;
	sub_82BC9FB0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x82b13750
	ctx.lr = 0x82B13B14;
	sub_82B13750(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// bne 0x82b13b3c
	if (!ctx.cr0.eq) goto loc_82B13B3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12516
	ctx.r5.s64 = ctx.r11.s64 + -12516;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,471
	ctx.r7.s64 = 471;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13B3C;
	sub_82B102F0(ctx, base);
loc_82B13B3C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13B78"))) PPC_WEAK_FUNC(sub_82B13B78);
PPC_FUNC_IMPL(__imp__sub_82B13B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B13B80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r9,-12456
	ctx.r27.s64 = ctx.r9.s64 + -12456;
	// addi r26,r10,-12768
	ctx.r26.s64 = ctx.r10.s64 + -12768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13bb4
	if (!ctx.cr6.eq) goto loc_82B13BB4;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b13bc0
	goto loc_82B13BC0;
loc_82B13BB4:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b13c38
	if (!ctx.cr6.eq) goto loc_82B13C38;
loc_82B13BC0:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,515
	ctx.r7.s64 = 515;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13BD8;
	sub_82B102F0(ctx, base);
	// b 0x82b13c38
	goto loc_82B13C38;
loc_82B13BDC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b13bf4
	if (ctx.cr6.eq) goto loc_82B13BF4;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b13c0c
	if (!ctx.cr6.eq) goto loc_82B13C0C;
loc_82B13BF4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,524
	ctx.r7.s64 = 524;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13C0C;
	sub_82B102F0(ctx, base);
loc_82B13C0C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B13C14;
	sub_82B13998(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bctrl 
	ctx.lr = 0x82B13C2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B13C38;
	sub_82BCA1D8(ctx, base);
loc_82B13C38:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82b13bdc
	if (!ctx.cr6.eq) goto loc_82B13BDC;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82b13c54
	if (ctx.cr0.eq) goto loc_82B13C54;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B13C54;
	sub_82BCA1D8(ctx, base);
loc_82B13C54:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bca070
	ctx.lr = 0x82B13C5C;
	sub_82BCA070(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B13C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13C78"))) PPC_WEAK_FUNC(sub_82B13C78);
PPC_FUNC_IMPL(__imp__sub_82B13C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B13C80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13cc4
	if (!ctx.cr6.eq) goto loc_82B13CC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12444
	ctx.r5.s64 = ctx.r11.s64 + -12444;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,570
	ctx.r7.s64 = 570;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13CC4;
	sub_82B102F0(ctx, base);
loc_82B13CC4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b13750
	ctx.lr = 0x82B13CCC;
	sub_82B13750(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b13cf0
	if (!ctx.cr0.eq) goto loc_82B13CF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12780
	ctx.r5.s64 = ctx.r11.s64 + -12780;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,575
	ctx.r7.s64 = 575;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13CF0;
	sub_82B102F0(ctx, base);
loc_82B13CF0:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82b138b0
	ctx.lr = 0x82B13D04;
	sub_82B138B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13d18
	if (!ctx.cr6.eq) goto loc_82B13D18;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
loc_82B13D18:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13D2C"))) PPC_WEAK_FUNC(sub_82B13D2C);
PPC_FUNC_IMPL(__imp__sub_82B13D2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B13D30"))) PPC_WEAK_FUNC(sub_82B13D30);
PPC_FUNC_IMPL(__imp__sub_82B13D30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B13D38;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13d7c
	if (!ctx.cr6.eq) goto loc_82B13D7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12412
	ctx.r5.s64 = ctx.r11.s64 + -12412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,621
	ctx.r7.s64 = 621;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13D7C;
	sub_82B102F0(ctx, base);
loc_82B13D7C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b13da0
	if (!ctx.cr6.eq) goto loc_82B13DA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12424
	ctx.r5.s64 = ctx.r11.s64 + -12424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,622
	ctx.r7.s64 = 622;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13DA0;
	sub_82B102F0(ctx, base);
loc_82B13DA0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b13de8
	if (ctx.cr6.eq) goto loc_82B13DE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,-12436
	ctx.r27.s64 = ctx.r11.s64 + -12436;
loc_82B13DB0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82b13dec
	if (ctx.cr6.eq) goto loc_82B13DEC;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b13de0
	if (!ctx.cr6.eq) goto loc_82B13DE0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,636
	ctx.r7.s64 = 636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13DE0;
	sub_82B102F0(ctx, base);
loc_82B13DE0:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b13db0
	if (!ctx.cr6.eq) goto loc_82B13DB0;
loc_82B13DE8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B13DEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13DF8"))) PPC_WEAK_FUNC(sub_82B13DF8);
PPC_FUNC_IMPL(__imp__sub_82B13DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B13E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13e40
	if (!ctx.cr6.eq) goto loc_82B13E40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12444
	ctx.r5.s64 = ctx.r11.s64 + -12444;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,672
	ctx.r7.s64 = 672;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13E40;
	sub_82B102F0(ctx, base);
loc_82B13E40:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13e54
	if (!ctx.cr6.eq) goto loc_82B13E54;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b13e60
	goto loc_82B13E60;
loc_82B13E54:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b13e7c
	if (!ctx.cr6.eq) goto loc_82B13E7C;
loc_82B13E60:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,677
	ctx.r7.s64 = 677;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13E7C;
	sub_82B102F0(ctx, base);
loc_82B13E7C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b13d30
	ctx.lr = 0x82B13E8C;
	sub_82B13D30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b13e98
	if (!ctx.cr0.eq) goto loc_82B13E98;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82B13E98:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13EA8"))) PPC_WEAK_FUNC(sub_82B13EA8);
PPC_FUNC_IMPL(__imp__sub_82B13EA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B13EB0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13ef0
	if (!ctx.cr6.eq) goto loc_82B13EF0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12444
	ctx.r5.s64 = ctx.r11.s64 + -12444;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13EF0;
	sub_82B102F0(ctx, base);
loc_82B13EF0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b13f04
	if (!ctx.cr6.eq) goto loc_82B13F04;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b13f10
	goto loc_82B13F10;
loc_82B13F04:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b13f2c
	if (!ctx.cr6.eq) goto loc_82B13F2C;
loc_82B13F10:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,765
	ctx.r7.s64 = 765;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13F2C;
	sub_82B102F0(ctx, base);
loc_82B13F2C:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b13d30
	ctx.lr = 0x82B13F3C;
	sub_82B13D30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b13f48
	if (!ctx.cr0.eq) goto loc_82B13F48;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82B13F48:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b13f90
	if (ctx.cr6.eq) goto loc_82B13F90;
	// bl 0x82b13998
	ctx.lr = 0x82B13F5C;
	sub_82B13998(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b13f74
	if (!ctx.cr6.eq) goto loc_82B13F74;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82B13F74:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b13f84
	if (ctx.cr6.eq) goto loc_82B13F84;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B13F84;
	sub_82BCA1D8(ctx, base);
loc_82B13F84:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82B13F90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B13F9C"))) PPC_WEAK_FUNC(sub_82B13F9C);
PPC_FUNC_IMPL(__imp__sub_82B13F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B13FA0"))) PPC_WEAK_FUNC(sub_82B13FA0);
PPC_FUNC_IMPL(__imp__sub_82B13FA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B13FA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b13ff4
	if (!ctx.cr6.eq) goto loc_82B13FF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1010
	ctx.r7.s64 = 1010;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B13FF4;
	sub_82B102F0(ctx, base);
loc_82B13FF4:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b14018
	if (!ctx.cr6.eq) goto loc_82B14018;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12332
	ctx.r5.s64 = ctx.r11.s64 + -12332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1011
	ctx.r7.s64 = 1011;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14018;
	sub_82B102F0(ctx, base);
loc_82B14018:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b14040
	if (ctx.cr6.eq) goto loc_82B14040;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12352
	ctx.r5.s64 = ctx.r11.s64 + -12352;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1014
	ctx.r7.s64 = 1014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14040;
	sub_82B102F0(ctx, base);
loc_82B14040:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b14068
	if (ctx.cr6.eq) goto loc_82B14068;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12372
	ctx.r5.s64 = ctx.r11.s64 + -12372;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1015
	ctx.r7.s64 = 1015;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14068;
	sub_82B102F0(ctx, base);
loc_82B14068:
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82b13750
	ctx.lr = 0x82B14080;
	sub_82B13750(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b140a4
	if (!ctx.cr0.eq) goto loc_82B140A4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12392
	ctx.r5.s64 = ctx.r11.s64 + -12392;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1031
	ctx.r7.s64 = 1031;
	// bl 0x82b102f0
	ctx.lr = 0x82B140A4;
	sub_82B102F0(ctx, base);
loc_82B140A4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B140E4"))) PPC_WEAK_FUNC(sub_82B140E4);
PPC_FUNC_IMPL(__imp__sub_82B140E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B140E8"))) PPC_WEAK_FUNC(sub_82B140E8);
PPC_FUNC_IMPL(__imp__sub_82B140E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B140F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-12768
	ctx.r26.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b1412c
	if (!ctx.cr6.eq) goto loc_82B1412C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1076
	ctx.r7.s64 = 1076;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1412C;
	sub_82B102F0(ctx, base);
loc_82B1412C:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82b14140
	if (ctx.cr0.eq) goto loc_82B14140;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82B14140:
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b141b8
	if (ctx.cr6.eq) goto loc_82B141B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-12456
	ctx.r28.s64 = ctx.r11.s64 + -12456;
loc_82B14150:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b14168
	if (ctx.cr6.eq) goto loc_82B14168;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b14180
	if (!ctx.cr6.eq) goto loc_82B14180;
loc_82B14168:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1088
	ctx.r7.s64 = 1088;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14180;
	sub_82B102F0(ctx, base);
loc_82B14180:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B14188;
	sub_82B13998(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,16(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bctrl 
	ctx.lr = 0x82B141A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B141AC;
	sub_82BCA1D8(ctx, base);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82b14150
	if (!ctx.cr6.eq) goto loc_82B14150;
loc_82B141B8:
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82b141c8
	if (ctx.cr0.eq) goto loc_82B141C8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B141C8;
	sub_82BCA1D8(ctx, base);
loc_82B141C8:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b141f0
	if (!ctx.cr6.eq) goto loc_82B141F0;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bca070
	ctx.lr = 0x82B141DC;
	sub_82BCA070(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B141F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B141F0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B141F8"))) PPC_WEAK_FUNC(sub_82B141F8);
PPC_FUNC_IMPL(__imp__sub_82B141F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B14200;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-12768
	ctx.r26.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14244
	if (!ctx.cr6.eq) goto loc_82B14244;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1143
	ctx.r7.s64 = 1143;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14244;
	sub_82B102F0(ctx, base);
loc_82B14244:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b13750
	ctx.lr = 0x82B1424C;
	sub_82B13750(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82b14270
	if (!ctx.cr0.eq) goto loc_82B14270;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12780
	ctx.r5.s64 = ctx.r11.s64 + -12780;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1147
	ctx.r7.s64 = 1147;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14270;
	sub_82B102F0(ctx, base);
loc_82B14270:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stw r25,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r25.u32);
	// stw r30,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r30.u32);
	// addi r28,r11,-12436
	ctx.r28.s64 = ctx.r11.s64 + -12436;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14294
	if (!ctx.cr6.eq) goto loc_82B14294;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b142a0
	goto loc_82B142A0;
loc_82B14294:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b142d8
	if (!ctx.cr6.eq) goto loc_82B142D8;
loc_82B142A0:
	// li r7,1158
	ctx.r7.s64 = 1158;
	// b 0x82b142c4
	goto loc_82B142C4;
loc_82B142A8:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bgt cr6,0x82b142e4
	if (ctx.cr6.gt) goto loc_82B142E4;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b142d8
	if (!ctx.cr6.eq) goto loc_82B142D8;
	// li r7,1168
	ctx.r7.s64 = 1168;
loc_82B142C4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B142D8;
	sub_82B102F0(ctx, base);
loc_82B142D8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b142a8
	if (!ctx.cr6.eq) goto loc_82B142A8;
loc_82B142E4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b138b0
	ctx.lr = 0x82B142F0;
	sub_82B138B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14304
	if (!ctx.cr6.eq) goto loc_82B14304;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r29,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r29.u32);
loc_82B14304:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14318"))) PPC_WEAK_FUNC(sub_82B14318);
PPC_FUNC_IMPL(__imp__sub_82B14318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B14320;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14364
	if (!ctx.cr6.eq) goto loc_82B14364;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12412
	ctx.r5.s64 = ctx.r11.s64 + -12412;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1212
	ctx.r7.s64 = 1212;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14364;
	sub_82B102F0(ctx, base);
loc_82B14364:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b14388
	if (!ctx.cr6.eq) goto loc_82B14388;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12424
	ctx.r5.s64 = ctx.r11.s64 + -12424;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1213
	ctx.r7.s64 = 1213;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14388;
	sub_82B102F0(ctx, base);
loc_82B14388:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82b143d0
	if (ctx.cr6.eq) goto loc_82B143D0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,-12436
	ctx.r27.s64 = ctx.r11.s64 + -12436;
loc_82B14398:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82b143d4
	if (ctx.cr6.eq) goto loc_82B143D4;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b143c8
	if (!ctx.cr6.eq) goto loc_82B143C8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1227
	ctx.r7.s64 = 1227;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B143C8;
	sub_82B102F0(ctx, base);
loc_82B143C8:
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b14398
	if (!ctx.cr6.eq) goto loc_82B14398;
loc_82B143D0:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82B143D4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B143E0"))) PPC_WEAK_FUNC(sub_82B143E0);
PPC_FUNC_IMPL(__imp__sub_82B143E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B143E8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14428
	if (!ctx.cr6.eq) goto loc_82B14428;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1262
	ctx.r7.s64 = 1262;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14428;
	sub_82B102F0(ctx, base);
loc_82B14428:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1443c
	if (!ctx.cr6.eq) goto loc_82B1443C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b14448
	goto loc_82B14448;
loc_82B1443C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b14464
	if (!ctx.cr6.eq) goto loc_82B14464;
loc_82B14448:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1267
	ctx.r7.s64 = 1267;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14464;
	sub_82B102F0(ctx, base);
loc_82B14464:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b14318
	ctx.lr = 0x82B14474;
	sub_82B14318(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b14480
	if (!ctx.cr0.eq) goto loc_82B14480;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82B14480:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14490"))) PPC_WEAK_FUNC(sub_82B14490);
PPC_FUNC_IMPL(__imp__sub_82B14490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B14498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b144d4
	if (!ctx.cr6.eq) goto loc_82B144D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1304
	ctx.r7.s64 = 1304;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B144D4;
	sub_82B102F0(ctx, base);
loc_82B144D4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b144e8
	if (!ctx.cr6.eq) goto loc_82B144E8;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b144f4
	goto loc_82B144F4;
loc_82B144E8:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b14510
	if (!ctx.cr6.eq) goto loc_82B14510;
loc_82B144F4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12412
	ctx.r5.s64 = ctx.r11.s64 + -12412;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1310
	ctx.r7.s64 = 1310;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14510;
	sub_82B102F0(ctx, base);
loc_82B14510:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82b14318
	ctx.lr = 0x82B14524;
	sub_82B14318(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b14530
	if (!ctx.cr0.eq) goto loc_82B14530;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82B14530:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14540"))) PPC_WEAK_FUNC(sub_82B14540);
PPC_FUNC_IMPL(__imp__sub_82B14540) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B14548;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14588
	if (!ctx.cr6.eq) goto loc_82B14588;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1421
	ctx.r7.s64 = 1421;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14588;
	sub_82B102F0(ctx, base);
loc_82B14588:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1459c
	if (!ctx.cr6.eq) goto loc_82B1459C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b145a8
	goto loc_82B145A8;
loc_82B1459C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b145c4
	if (!ctx.cr6.eq) goto loc_82B145C4;
loc_82B145A8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1427
	ctx.r7.s64 = 1427;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B145C4;
	sub_82B102F0(ctx, base);
loc_82B145C4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b13d30
	ctx.lr = 0x82B145D4;
	sub_82B13D30(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b145e0
	if (!ctx.cr0.eq) goto loc_82B145E0;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
loc_82B145E0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b14628
	if (ctx.cr6.eq) goto loc_82B14628;
	// bl 0x82b13998
	ctx.lr = 0x82B145F4;
	sub_82B13998(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b1460c
	if (!ctx.cr6.eq) goto loc_82B1460C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82B1460C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b1461c
	if (ctx.cr6.eq) goto loc_82B1461C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B1461C;
	sub_82BCA1D8(ctx, base);
loc_82B1461C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82B14628:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14634"))) PPC_WEAK_FUNC(sub_82B14634);
PPC_FUNC_IMPL(__imp__sub_82B14634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14638"))) PPC_WEAK_FUNC(sub_82B14638);
PPC_FUNC_IMPL(__imp__sub_82B14638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B14640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b1467c
	if (!ctx.cr6.eq) goto loc_82B1467C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12324
	ctx.r5.s64 = ctx.r11.s64 + -12324;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1485
	ctx.r7.s64 = 1485;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1467C;
	sub_82B102F0(ctx, base);
loc_82B1467C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14690
	if (!ctx.cr6.eq) goto loc_82B14690;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b1469c
	goto loc_82B1469C;
loc_82B14690:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b146b8
	if (!ctx.cr6.eq) goto loc_82B146B8;
loc_82B1469C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1491
	ctx.r7.s64 = 1491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B146B8;
	sub_82B102F0(ctx, base);
loc_82B146B8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,16(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82b14704
	if (ctx.cr6.eq) goto loc_82B14704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B146D0;
	sub_82B13998(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b146e8
	if (!ctx.cr6.eq) goto loc_82B146E8;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82B146E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b146f8
	if (ctx.cr6.eq) goto loc_82B146F8;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B146F8;
	sub_82BCA1D8(ctx, base);
loc_82B146F8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82B14704:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14710"))) PPC_WEAK_FUNC(sub_82B14710);
PPC_FUNC_IMPL(__imp__sub_82B14710) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b1474c
	if (!ctx.cr6.eq) goto loc_82B1474C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12324
	ctx.r5.s64 = ctx.r10.s64 + -12324;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// bl 0x82b102f0
	ctx.lr = 0x82B1474C;
	sub_82B102F0(ctx, base);
loc_82B1474C:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_82B14764"))) PPC_WEAK_FUNC(sub_82B14764);
PPC_FUNC_IMPL(__imp__sub_82B14764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14768"))) PPC_WEAK_FUNC(sub_82B14768);
PPC_FUNC_IMPL(__imp__sub_82B14768) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B14794;
	sub_82BC9FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b147c0
	if (!ctx.cr0.eq) goto loc_82B147C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12332
	ctx.r5.s64 = ctx.r10.s64 + -12332;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1609
	ctx.r7.s64 = 1609;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B147C0;
	sub_82B102F0(ctx, base);
loc_82B147C0:
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

__attribute__((alias("__imp__sub_82B147D8"))) PPC_WEAK_FUNC(sub_82B147D8);
PPC_FUNC_IMPL(__imp__sub_82B147D8) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,20
	ctx.r4.s64 = 20;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B14804;
	sub_82BC9FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b14830
	if (!ctx.cr0.eq) goto loc_82B14830;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12332
	ctx.r5.s64 = ctx.r10.s64 + -12332;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1650
	ctx.r7.s64 = 1650;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14830;
	sub_82B102F0(ctx, base);
loc_82B14830:
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

__attribute__((alias("__imp__sub_82B14848"))) PPC_WEAK_FUNC(sub_82B14848);
PPC_FUNC_IMPL(__imp__sub_82B14848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B14850;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14890
	if (!ctx.cr6.eq) goto loc_82B14890;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12252
	ctx.r5.s64 = ctx.r11.s64 + -12252;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2228
	ctx.r7.s64 = 2228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14890;
	sub_82B102F0(ctx, base);
loc_82B14890:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b148b4
	if (!ctx.cr6.eq) goto loc_82B148B4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12332
	ctx.r5.s64 = ctx.r11.s64 + -12332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2229
	ctx.r7.s64 = 2229;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B148B4;
	sub_82B102F0(ctx, base);
loc_82B148B4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b148dc
	if (ctx.cr6.eq) goto loc_82B148DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12276
	ctx.r5.s64 = ctx.r11.s64 + -12276;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2232
	ctx.r7.s64 = 2232;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B148DC;
	sub_82B102F0(ctx, base);
loc_82B148DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b14904
	if (ctx.cr6.eq) goto loc_82B14904;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12296
	ctx.r5.s64 = ctx.r11.s64 + -12296;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2233
	ctx.r7.s64 = 2233;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14904;
	sub_82B102F0(ctx, base);
loc_82B14904:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b13750
	ctx.lr = 0x82B14910;
	sub_82B13750(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b14934
	if (!ctx.cr0.eq) goto loc_82B14934;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12316
	ctx.r5.s64 = ctx.r11.s64 + -12316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2242
	ctx.r7.s64 = 2242;
	// bl 0x82b102f0
	ctx.lr = 0x82B14934;
	sub_82B102F0(ctx, base);
loc_82B14934:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14964"))) PPC_WEAK_FUNC(sub_82B14964);
PPC_FUNC_IMPL(__imp__sub_82B14964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14968"))) PPC_WEAK_FUNC(sub_82B14968);
PPC_FUNC_IMPL(__imp__sub_82B14968) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B14970;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r10,-28036
	ctx.r27.s64 = ctx.r10.s64 + -28036;
	// addi r26,r11,-12768
	ctx.r26.s64 = ctx.r11.s64 + -12768;
	// bne cr6,0x82b149ac
	if (!ctx.cr6.eq) goto loc_82B149AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12252
	ctx.r5.s64 = ctx.r11.s64 + -12252;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2279
	ctx.r7.s64 = 2279;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B149AC;
	sub_82B102F0(ctx, base);
loc_82B149AC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r11,-12456
	ctx.r25.s64 = ctx.r11.s64 + -12456;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b149c8
	if (!ctx.cr6.eq) goto loc_82B149C8;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b149d4
	goto loc_82B149D4;
loc_82B149C8:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b149ec
	if (!ctx.cr6.eq) goto loc_82B149EC;
loc_82B149D4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2284
	ctx.r7.s64 = 2284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B149EC;
	sub_82B102F0(ctx, base);
loc_82B149EC:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b14a70
	if (ctx.cr6.eq) goto loc_82B14A70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-12240
	ctx.r28.s64 = ctx.r11.s64 + -12240;
loc_82B14A00:
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b14a18
	if (ctx.cr6.eq) goto loc_82B14A18;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b14a30
	if (!ctx.cr6.eq) goto loc_82B14A30;
loc_82B14A18:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2293
	ctx.r7.s64 = 2293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14A30;
	sub_82B102F0(ctx, base);
loc_82B14A30:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B14A38;
	sub_82B13998(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b14a5c
	if (!ctx.cr0.eq) goto loc_82B14A5C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2297
	ctx.r7.s64 = 2297;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14A58;
	sub_82B102F0(ctx, base);
	// b 0x82b14a64
	goto loc_82B14A64;
loc_82B14A5C:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B14A64;
	sub_82BCA1D8(ctx, base);
loc_82B14A64:
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82b14a00
	if (!ctx.cr6.eq) goto loc_82B14A00;
loc_82B14A70:
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82b14a80
	if (ctx.cr0.eq) goto loc_82B14A80;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B14A80;
	sub_82BCA1D8(ctx, base);
loc_82B14A80:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14aa8
	if (!ctx.cr6.eq) goto loc_82B14AA8;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82bca070
	ctx.lr = 0x82B14A94;
	sub_82BCA070(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B14AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B14AA8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14AB0"))) PPC_WEAK_FUNC(sub_82B14AB0);
PPC_FUNC_IMPL(__imp__sub_82B14AB0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b14aec
	if (!ctx.cr6.eq) goto loc_82B14AEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12252
	ctx.r5.s64 = ctx.r10.s64 + -12252;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,2334
	ctx.r7.s64 = 2334;
	// bl 0x82b102f0
	ctx.lr = 0x82B14AEC;
	sub_82B102F0(ctx, base);
loc_82B14AEC:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_82B14B04"))) PPC_WEAK_FUNC(sub_82B14B04);
PPC_FUNC_IMPL(__imp__sub_82B14B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14B08"))) PPC_WEAK_FUNC(sub_82B14B08);
PPC_FUNC_IMPL(__imp__sub_82B14B08) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B14B34;
	sub_82BC9FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b14b60
	if (!ctx.cr0.eq) goto loc_82B14B60;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12332
	ctx.r5.s64 = ctx.r10.s64 + -12332;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,2712
	ctx.r7.s64 = 2712;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14B60;
	sub_82B102F0(ctx, base);
loc_82B14B60:
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

__attribute__((alias("__imp__sub_82B14B78"))) PPC_WEAK_FUNC(sub_82B14B78);
PPC_FUNC_IMPL(__imp__sub_82B14B78) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B14BA4;
	sub_82BC9FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b14bd0
	if (!ctx.cr0.eq) goto loc_82B14BD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12332
	ctx.r5.s64 = ctx.r10.s64 + -12332;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,2753
	ctx.r7.s64 = 2753;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14BD0;
	sub_82B102F0(ctx, base);
loc_82B14BD0:
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

__attribute__((alias("__imp__sub_82B14BE8"))) PPC_WEAK_FUNC(sub_82B14BE8);
PPC_FUNC_IMPL(__imp__sub_82B14BE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B14BF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14c30
	if (!ctx.cr6.eq) goto loc_82B14C30;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2913
	ctx.r7.s64 = 2913;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14C30;
	sub_82B102F0(ctx, base);
loc_82B14C30:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b14c54
	if (!ctx.cr6.eq) goto loc_82B14C54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12332
	ctx.r5.s64 = ctx.r11.s64 + -12332;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2914
	ctx.r7.s64 = 2914;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14C54;
	sub_82B102F0(ctx, base);
loc_82B14C54:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b14c7c
	if (ctx.cr6.eq) goto loc_82B14C7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12188
	ctx.r5.s64 = ctx.r11.s64 + -12188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2917
	ctx.r7.s64 = 2917;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14C7C;
	sub_82B102F0(ctx, base);
loc_82B14C7C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b14ca4
	if (ctx.cr6.eq) goto loc_82B14CA4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12208
	ctx.r5.s64 = ctx.r11.s64 + -12208;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2918
	ctx.r7.s64 = 2918;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14CA4;
	sub_82B102F0(ctx, base);
loc_82B14CA4:
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b13750
	ctx.lr = 0x82B14CB0;
	sub_82B13750(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b14cd4
	if (!ctx.cr0.eq) goto loc_82B14CD4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12228
	ctx.r5.s64 = ctx.r11.s64 + -12228;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2927
	ctx.r7.s64 = 2927;
	// bl 0x82b102f0
	ctx.lr = 0x82B14CD4;
	sub_82B102F0(ctx, base);
loc_82B14CD4:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14D04"))) PPC_WEAK_FUNC(sub_82B14D04);
PPC_FUNC_IMPL(__imp__sub_82B14D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14D08"))) PPC_WEAK_FUNC(sub_82B14D08);
PPC_FUNC_IMPL(__imp__sub_82B14D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B14D10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r9,-12456
	ctx.r27.s64 = ctx.r9.s64 + -12456;
	// addi r26,r10,-12768
	ctx.r26.s64 = ctx.r10.s64 + -12768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14d44
	if (!ctx.cr6.eq) goto loc_82B14D44;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b14d50
	goto loc_82B14D50;
loc_82B14D44:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b14dc8
	if (!ctx.cr6.eq) goto loc_82B14DC8;
loc_82B14D50:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2964
	ctx.r7.s64 = 2964;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14D68;
	sub_82B102F0(ctx, base);
	// b 0x82b14dc8
	goto loc_82B14DC8;
loc_82B14D6C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b14d84
	if (ctx.cr6.eq) goto loc_82B14D84;
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b14d9c
	if (!ctx.cr6.eq) goto loc_82B14D9C;
loc_82B14D84:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,2973
	ctx.r7.s64 = 2973;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14D9C;
	sub_82B102F0(ctx, base);
loc_82B14D9C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B14DA4;
	sub_82B13998(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// bctrl 
	ctx.lr = 0x82B14DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B14DC8;
	sub_82BCA1D8(ctx, base);
loc_82B14DC8:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82b14d6c
	if (!ctx.cr6.eq) goto loc_82B14D6C;
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq 0x82b14de4
	if (ctx.cr0.eq) goto loc_82B14DE4;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// bl 0x82bca1d8
	ctx.lr = 0x82B14DE4;
	sub_82BCA1D8(ctx, base);
loc_82B14DE4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14e0c
	if (!ctx.cr6.eq) goto loc_82B14E0C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bca070
	ctx.lr = 0x82B14DF8;
	sub_82BCA070(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B14E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B14E0C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14E14"))) PPC_WEAK_FUNC(sub_82B14E14);
PPC_FUNC_IMPL(__imp__sub_82B14E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14E18"))) PPC_WEAK_FUNC(sub_82B14E18);
PPC_FUNC_IMPL(__imp__sub_82B14E18) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b14e54
	if (!ctx.cr6.eq) goto loc_82B14E54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12164
	ctx.r5.s64 = ctx.r10.s64 + -12164;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,3010
	ctx.r7.s64 = 3010;
	// bl 0x82b102f0
	ctx.lr = 0x82B14E54;
	sub_82B102F0(ctx, base);
loc_82B14E54:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
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

__attribute__((alias("__imp__sub_82B14E6C"))) PPC_WEAK_FUNC(sub_82B14E6C);
PPC_FUNC_IMPL(__imp__sub_82B14E6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B14E70"))) PPC_WEAK_FUNC(sub_82B14E70);
PPC_FUNC_IMPL(__imp__sub_82B14E70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B14E78;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14eb8
	if (!ctx.cr6.eq) goto loc_82B14EB8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3031
	ctx.r7.s64 = 3031;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14EB8;
	sub_82B102F0(ctx, base);
loc_82B14EB8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b14edc
	if (!ctx.cr6.eq) goto loc_82B14EDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12524
	ctx.r5.s64 = ctx.r11.s64 + -12524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3032
	ctx.r7.s64 = 3032;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14EDC;
	sub_82B102F0(ctx, base);
loc_82B14EDC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b14f04
	if (!ctx.cr6.eq) goto loc_82B14F04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12152
	ctx.r5.s64 = ctx.r11.s64 + -12152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3033
	ctx.r7.s64 = 3033;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14F04;
	sub_82B102F0(ctx, base);
loc_82B14F04:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82b137c8
	ctx.lr = 0x82B14F10;
	sub_82B137C8(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b14f24
	if (!ctx.cr6.eq) goto loc_82B14F24;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82B14F24:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14F38"))) PPC_WEAK_FUNC(sub_82B14F38);
PPC_FUNC_IMPL(__imp__sub_82B14F38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B14F40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b14f80
	if (!ctx.cr6.eq) goto loc_82B14F80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3070
	ctx.r7.s64 = 3070;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14F80;
	sub_82B102F0(ctx, base);
loc_82B14F80:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b13750
	ctx.lr = 0x82B14F88;
	sub_82B13750(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b14fac
	if (!ctx.cr0.eq) goto loc_82B14FAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12780
	ctx.r5.s64 = ctx.r11.s64 + -12780;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3075
	ctx.r7.s64 = 3075;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B14FAC;
	sub_82B102F0(ctx, base);
loc_82B14FAC:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b14e70
	ctx.lr = 0x82B14FBC;
	sub_82B14E70(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B14FC8"))) PPC_WEAK_FUNC(sub_82B14FC8);
PPC_FUNC_IMPL(__imp__sub_82B14FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B14FD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b15010
	if (!ctx.cr6.eq) goto loc_82B15010;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3105
	ctx.r7.s64 = 3105;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15010;
	sub_82B102F0(ctx, base);
loc_82B15010:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b15034
	if (!ctx.cr6.eq) goto loc_82B15034;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12524
	ctx.r5.s64 = ctx.r11.s64 + -12524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3106
	ctx.r7.s64 = 3106;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15034;
	sub_82B102F0(ctx, base);
loc_82B15034:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b1505c
	if (!ctx.cr6.eq) goto loc_82B1505C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12152
	ctx.r5.s64 = ctx.r11.s64 + -12152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3107
	ctx.r7.s64 = 3107;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1505C;
	sub_82B102F0(ctx, base);
loc_82B1505C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82b138b0
	ctx.lr = 0x82B15068;
	sub_82B138B0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1507c
	if (!ctx.cr6.eq) goto loc_82B1507C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82B1507C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15090"))) PPC_WEAK_FUNC(sub_82B15090);
PPC_FUNC_IMPL(__imp__sub_82B15090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B15098;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b150d8
	if (!ctx.cr6.eq) goto loc_82B150D8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3144
	ctx.r7.s64 = 3144;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B150D8;
	sub_82B102F0(ctx, base);
loc_82B150D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82b13750
	ctx.lr = 0x82B150E0;
	sub_82B13750(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b15104
	if (!ctx.cr0.eq) goto loc_82B15104;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12780
	ctx.r5.s64 = ctx.r11.s64 + -12780;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3149
	ctx.r7.s64 = 3149;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15104;
	sub_82B102F0(ctx, base);
loc_82B15104:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b14fc8
	ctx.lr = 0x82B15114;
	sub_82B14FC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15120"))) PPC_WEAK_FUNC(sub_82B15120);
PPC_FUNC_IMPL(__imp__sub_82B15120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B15128;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b15164
	if (!ctx.cr6.eq) goto loc_82B15164;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3202
	ctx.r7.s64 = 3202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15164;
	sub_82B102F0(ctx, base);
loc_82B15164:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b15178
	if (!ctx.cr6.eq) goto loc_82B15178;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b151b8
	goto loc_82B151B8;
loc_82B15178:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1518c
	if (!ctx.cr6.eq) goto loc_82B1518C;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82b15198
	goto loc_82B15198;
loc_82B1518C:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b151b4
	if (!ctx.cr6.eq) goto loc_82B151B4;
loc_82B15198:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3214
	ctx.r7.s64 = 3214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B151B4;
	sub_82B102F0(ctx, base);
loc_82B151B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B151B8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B151C0"))) PPC_WEAK_FUNC(sub_82B151C0);
PPC_FUNC_IMPL(__imp__sub_82B151C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B151C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b15204
	if (!ctx.cr6.eq) goto loc_82B15204;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3388
	ctx.r7.s64 = 3388;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15204;
	sub_82B102F0(ctx, base);
loc_82B15204:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b15218
	if (!ctx.cr6.eq) goto loc_82B15218;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b15290
	goto loc_82B15290;
loc_82B15218:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1522c
	if (!ctx.cr6.eq) goto loc_82B1522C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b15238
	goto loc_82B15238;
loc_82B1522C:
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b15254
	if (!ctx.cr6.eq) goto loc_82B15254;
loc_82B15238:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12400
	ctx.r5.s64 = ctx.r11.s64 + -12400;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3399
	ctx.r7.s64 = 3399;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15254;
	sub_82B102F0(ctx, base);
loc_82B15254:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b1527c
	if (!ctx.cr6.eq) goto loc_82B1527C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12112
	ctx.r5.s64 = ctx.r11.s64 + -12112;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3402
	ctx.r7.s64 = 3402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1527C;
	sub_82B102F0(ctx, base);
loc_82B1527C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B15284;
	sub_82B13998(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82B15290:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15298"))) PPC_WEAK_FUNC(sub_82B15298);
PPC_FUNC_IMPL(__imp__sub_82B15298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B152A0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-12768
	ctx.r28.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b152dc
	if (!ctx.cr6.eq) goto loc_82B152DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3430
	ctx.r7.s64 = 3430;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B152DC;
	sub_82B102F0(ctx, base);
loc_82B152DC:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b152f0
	if (!ctx.cr6.eq) goto loc_82B152F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b15368
	goto loc_82B15368;
loc_82B152F0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b15304
	if (!ctx.cr6.eq) goto loc_82B15304;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82b15310
	goto loc_82B15310;
loc_82B15304:
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b1532c
	if (!ctx.cr6.eq) goto loc_82B1532C;
loc_82B15310:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12120
	ctx.r5.s64 = ctx.r11.s64 + -12120;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3441
	ctx.r7.s64 = 3441;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1532C;
	sub_82B102F0(ctx, base);
loc_82B1532C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b15354
	if (!ctx.cr6.eq) goto loc_82B15354;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12080
	ctx.r5.s64 = ctx.r11.s64 + -12080;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,3444
	ctx.r7.s64 = 3444;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15354;
	sub_82B102F0(ctx, base);
loc_82B15354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B1535C;
	sub_82B13998(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82B15368:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15370"))) PPC_WEAK_FUNC(sub_82B15370);
PPC_FUNC_IMPL(__imp__sub_82B15370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B15378;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-12768
	ctx.r29.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b153b8
	if (!ctx.cr6.eq) goto loc_82B153B8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12164
	ctx.r5.s64 = ctx.r11.s64 + -12164;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3473
	ctx.r7.s64 = 3473;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B153B8;
	sub_82B102F0(ctx, base);
loc_82B153B8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b153dc
	if (!ctx.cr6.eq) goto loc_82B153DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12524
	ctx.r5.s64 = ctx.r11.s64 + -12524;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3474
	ctx.r7.s64 = 3474;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B153DC;
	sub_82B102F0(ctx, base);
loc_82B153DC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b15404
	if (!ctx.cr6.eq) goto loc_82B15404;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12152
	ctx.r5.s64 = ctx.r11.s64 + -12152;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,3477
	ctx.r7.s64 = 3477;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15404;
	sub_82B102F0(ctx, base);
loc_82B15404:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b13998
	ctx.lr = 0x82B1540C;
	sub_82B13998(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15420"))) PPC_WEAK_FUNC(sub_82B15420);
PPC_FUNC_IMPL(__imp__sub_82B15420) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82b15468
	if (!ctx.cr6.eq) goto loc_82B15468;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12524
	ctx.r5.s64 = ctx.r10.s64 + -12524;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,3540
	ctx.r7.s64 = 3540;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15460;
	sub_82B102F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82b1546c
	goto loc_82B1546C;
loc_82B15468:
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
loc_82B1546C:
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82B15494"))) PPC_WEAK_FUNC(sub_82B15494);
PPC_FUNC_IMPL(__imp__sub_82B15494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15498"))) PPC_WEAK_FUNC(sub_82B15498);
PPC_FUNC_IMPL(__imp__sub_82B15498) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b154c4
	if (!ctx.cr6.eq) goto loc_82B154C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12524
	ctx.r5.s64 = ctx.r10.s64 + -12524;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,3575
	ctx.r7.s64 = 3575;
	// b 0x82b102f0
	sub_82B102F0(ctx, base);
	return;
loc_82B154C4:
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// b 0x82bca1d8
	sub_82BCA1D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B154CC"))) PPC_WEAK_FUNC(sub_82B154CC);
PPC_FUNC_IMPL(__imp__sub_82B154CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B154D0"))) PPC_WEAK_FUNC(sub_82B154D0);
PPC_FUNC_IMPL(__imp__sub_82B154D0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b1550c
	if (!ctx.cr6.eq) goto loc_82B1550C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12524
	ctx.r5.s64 = ctx.r10.s64 + -12524;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,3596
	ctx.r7.s64 = 3596;
	// bl 0x82b102f0
	ctx.lr = 0x82B1550C;
	sub_82B102F0(ctx, base);
loc_82B1550C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
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

__attribute__((alias("__imp__sub_82B15524"))) PPC_WEAK_FUNC(sub_82B15524);
PPC_FUNC_IMPL(__imp__sub_82B15524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15528"))) PPC_WEAK_FUNC(sub_82B15528);
PPC_FUNC_IMPL(__imp__sub_82B15528) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B15554;
	sub_82BC9FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b15580
	if (!ctx.cr0.eq) goto loc_82B15580;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12332
	ctx.r5.s64 = ctx.r10.s64 + -12332;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,3636
	ctx.r7.s64 = 3636;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15580;
	sub_82B102F0(ctx, base);
loc_82B15580:
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

__attribute__((alias("__imp__sub_82B15598"))) PPC_WEAK_FUNC(sub_82B15598);
PPC_FUNC_IMPL(__imp__sub_82B15598) {
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
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B155C4;
	sub_82BC9FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b155f0
	if (!ctx.cr0.eq) goto loc_82B155F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-12768
	ctx.r6.s64 = ctx.r11.s64 + -12768;
	// addi r5,r10,-12332
	ctx.r5.s64 = ctx.r10.s64 + -12332;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,3676
	ctx.r7.s64 = 3676;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B155F0;
	sub_82B102F0(ctx, base);
loc_82B155F0:
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

__attribute__((alias("__imp__sub_82B15608"))) PPC_WEAK_FUNC(sub_82B15608);
PPC_FUNC_IMPL(__imp__sub_82B15608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B15610;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-12768
	ctx.r26.s64 = ctx.r10.s64 + -12768;
	// bne cr6,0x82b15658
	if (!ctx.cr6.eq) goto loc_82B15658;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12472
	ctx.r5.s64 = ctx.r11.s64 + -12472;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2860
	ctx.r7.s64 = 2860;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15658;
	sub_82B102F0(ctx, base);
loc_82B15658:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82b1567c
	if (!ctx.cr6.eq) goto loc_82B1567C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12484
	ctx.r5.s64 = ctx.r11.s64 + -12484;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2861
	ctx.r7.s64 = 2861;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1567C;
	sub_82B102F0(ctx, base);
loc_82B1567C:
	// li r4,28
	ctx.r4.s64 = 28;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B1568C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b156b0
	if (!ctx.cr0.eq) goto loc_82B156B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12496
	ctx.r5.s64 = ctx.r11.s64 + -12496;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2867
	ctx.r7.s64 = 2867;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B156B0;
	sub_82B102F0(ctx, base);
loc_82B156B0:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bc9fb0
	ctx.lr = 0x82B156D4;
	sub_82BC9FB0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b156f8
	if (!ctx.cr0.eq) goto loc_82B156F8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12332
	ctx.r5.s64 = ctx.r11.s64 + -12332;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,2878
	ctx.r7.s64 = 2878;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B156F8;
	sub_82B102F0(ctx, base);
loc_82B156F8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b14be8
	ctx.lr = 0x82B15704;
	sub_82B14BE8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15718"))) PPC_WEAK_FUNC(sub_82B15718);
PPC_FUNC_IMPL(__imp__sub_82B15718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B15720;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-11944
	ctx.r27.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b15778
	if (!ctx.cr6.eq) goto loc_82B15778;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12472
	ctx.r5.s64 = ctx.r11.s64 + -12472;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,155
	ctx.r7.s64 = 155;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15778;
	sub_82B102F0(ctx, base);
loc_82B15778:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82b1579c
	if (!ctx.cr6.eq) goto loc_82B1579C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12484
	ctx.r5.s64 = ctx.r11.s64 + -12484;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,156
	ctx.r7.s64 = 156;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1579C;
	sub_82B102F0(ctx, base);
loc_82B1579C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82b157c0
	if (!ctx.cr6.eq) goto loc_82B157C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11956
	ctx.r5.s64 = ctx.r11.s64 + -11956;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,157
	ctx.r7.s64 = 157;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B157C0;
	sub_82B102F0(ctx, base);
loc_82B157C0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82b157e4
	if (!ctx.cr6.eq) goto loc_82B157E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11972
	ctx.r5.s64 = ctx.r11.s64 + -11972;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,158
	ctx.r7.s64 = 158;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B157E4;
	sub_82B102F0(ctx, base);
loc_82B157E4:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82b15808
	if (!ctx.cr6.eq) goto loc_82B15808;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11988
	ctx.r5.s64 = ctx.r11.s64 + -11988;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,159
	ctx.r7.s64 = 159;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15808;
	sub_82B102F0(ctx, base);
loc_82B15808:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b1582c
	if (!ctx.cr6.eq) goto loc_82B1582C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12004
	ctx.r5.s64 = ctx.r11.s64 + -12004;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,160
	ctx.r7.s64 = 160;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1582C;
	sub_82B102F0(ctx, base);
loc_82B1582C:
	// li r4,2452
	ctx.r4.s64 = 2452;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bctrl 
	ctx.lr = 0x82B1583C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b15868
	if (!ctx.cr0.eq) goto loc_82B15868;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12048
	ctx.r5.s64 = ctx.r11.s64 + -12048;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15860;
	sub_82B102F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b158e8
	goto loc_82B158E8;
loc_82B15868:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r22,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r22.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r10,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r21,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r21.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// bl 0x82bca778
	ctx.lr = 0x82B158B0;
	sub_82BCA778(ctx, base);
	// stw r3,2428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2428, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bca778
	ctx.lr = 0x82B158BC;
	sub_82BCA778(ctx, base);
	// stw r3,2436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2436, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82bca778
	ctx.lr = 0x82B158C8;
	sub_82BCA778(ctx, base);
	// stw r3,2440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2440, ctx.r3.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bca2e8
	ctx.lr = 0x82B158D4;
	sub_82BCA2E8(ctx, base);
	// stw r3,2432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2432, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82bca538
	ctx.lr = 0x82B158E0;
	sub_82BCA538(ctx, base);
	// stw r3,2444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2444, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82B158E8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B158F0"))) PPC_WEAK_FUNC(sub_82B158F0);
PPC_FUNC_IMPL(__imp__sub_82B158F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B158F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b15934
	if (!ctx.cr6.eq) goto loc_82B15934;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,230
	ctx.r7.s64 = 230;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15934;
	sub_82B102F0(ctx, base);
loc_82B15934:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
	// bne 0x82b15abc
	if (!ctx.cr0.eq) goto loc_82B15ABC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b15968
	if (ctx.cr6.eq) goto loc_82B15968;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11840
	ctx.r5.s64 = ctx.r11.s64 + -11840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,241
	ctx.r7.s64 = 241;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15968;
	sub_82B102F0(ctx, base);
loc_82B15968:
	// lwz r4,2444(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2444);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82bca5d0
	ctx.lr = 0x82B15974;
	sub_82BCA5D0(ctx, base);
	// b 0x82b1599c
	goto loc_82B1599C;
loc_82B15978:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B15980;
	sub_82B154D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B15994;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b15498
	ctx.lr = 0x82B1599C;
	sub_82B15498(ctx, base);
loc_82B1599C:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x82b151c0
	ctx.lr = 0x82B159A4;
	sub_82B151C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b15978
	if (!ctx.cr0.eq) goto loc_82B15978;
	// lwz r4,2440(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82bca810
	ctx.lr = 0x82B159B8;
	sub_82BCA810(ctx, base);
	// b 0x82b159e0
	goto loc_82B159E0;
loc_82B159BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B159C4;
	sub_82B154D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B159D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b15498
	ctx.lr = 0x82B159E0;
	sub_82B15498(ctx, base);
loc_82B159E0:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82b151c0
	ctx.lr = 0x82B159E8;
	sub_82B151C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b159bc
	if (!ctx.cr0.eq) goto loc_82B159BC;
	// lwz r4,2436(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82bca810
	ctx.lr = 0x82B159FC;
	sub_82BCA810(ctx, base);
	// b 0x82b15a24
	goto loc_82B15A24;
loc_82B15A00:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B15A08;
	sub_82B154D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B15A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b15498
	ctx.lr = 0x82B15A24;
	sub_82B15498(ctx, base);
loc_82B15A24:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x82b151c0
	ctx.lr = 0x82B15A2C;
	sub_82B151C0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b15a00
	if (!ctx.cr0.eq) goto loc_82B15A00;
	// lwz r4,2428(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82bca810
	ctx.lr = 0x82B15A40;
	sub_82BCA810(ctx, base);
	// b 0x82b15a58
	goto loc_82B15A58;
loc_82B15A44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B15A58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B15A58:
	// lwz r3,2432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// bl 0x82b14638
	ctx.lr = 0x82B15A60;
	sub_82B14638(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b15a44
	if (!ctx.cr0.eq) goto loc_82B15A44;
	// lwz r4,2432(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2432);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bca390
	ctx.lr = 0x82B15A74;
	sub_82BCA390(ctx, base);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// bl 0x82b17268
	ctx.lr = 0x82B15A7C;
	sub_82B17268(ctx, base);
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b15a8c
	if (ctx.cr6.eq) goto loc_82B15A8C;
	// bl 0x82bcaf28
	ctx.lr = 0x82B15A8C;
	sub_82BCAF28(ctx, base);
loc_82B15A8C:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b15aa8
	if (ctx.cr6.eq) goto loc_82B15AA8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B15AA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B15AA8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B15ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B15ABC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15AC4"))) PPC_WEAK_FUNC(sub_82B15AC4);
PPC_FUNC_IMPL(__imp__sub_82B15AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15AC8"))) PPC_WEAK_FUNC(sub_82B15AC8);
PPC_FUNC_IMPL(__imp__sub_82B15AC8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b15b04
	if (!ctx.cr6.eq) goto loc_82B15B04;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,314
	ctx.r7.s64 = 314;
	// bl 0x82b102f0
	ctx.lr = 0x82B15B04;
	sub_82B102F0(ctx, base);
loc_82B15B04:
	// lwz r11,2448(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2448);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2448, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B15B24"))) PPC_WEAK_FUNC(sub_82B15B24);
PPC_FUNC_IMPL(__imp__sub_82B15B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15B28"))) PPC_WEAK_FUNC(sub_82B15B28);
PPC_FUNC_IMPL(__imp__sub_82B15B28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B15B30;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-11944
	ctx.r28.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b15b70
	if (!ctx.cr6.eq) goto loc_82B15B70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,376
	ctx.r7.s64 = 376;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15B70;
	sub_82B102F0(ctx, base);
loc_82B15B70:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// rlwinm r27,r11,27,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x82b15b98
	if (!ctx.cr6.eq) goto loc_82B15B98;
	// li r7,0
	ctx.r7.s64 = 0;
	// b 0x82b15bc0
	goto loc_82B15BC0;
loc_82B15B98:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82b15bbc
	if (ctx.cr6.eq) goto loc_82B15BBC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-11820
	ctx.r5.s64 = ctx.r11.s64 + -11820;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,395
	ctx.r7.s64 = 395;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15BBC;
	sub_82B102F0(ctx, base);
loc_82B15BBC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82B15BC0:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82bcadd8
	ctx.lr = 0x82B15BD8;
	sub_82BCADD8(ctx, base);
	// stw r3,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r3.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15BE4"))) PPC_WEAK_FUNC(sub_82B15BE4);
PPC_FUNC_IMPL(__imp__sub_82B15BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15BE8"))) PPC_WEAK_FUNC(sub_82B15BE8);
PPC_FUNC_IMPL(__imp__sub_82B15BE8) {
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
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b15c34
	if (ctx.cr6.lt) goto loc_82B15C34;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-27688
	ctx.r6.s64 = ctx.r11.s64 + -27688;
	// addi r5,r10,-27760
	ctx.r5.s64 = ctx.r10.s64 + -27760;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,309
	ctx.r7.s64 = 309;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15C34;
	sub_82B102F0(ctx, base);
loc_82B15C34:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82B15C58"))) PPC_WEAK_FUNC(sub_82B15C58);
PPC_FUNC_IMPL(__imp__sub_82B15C58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b15c74
	if (ctx.cr6.eq) goto loc_82B15C74;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82B15C74:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B15C7C"))) PPC_WEAK_FUNC(sub_82B15C7C);
PPC_FUNC_IMPL(__imp__sub_82B15C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15C80"))) PPC_WEAK_FUNC(sub_82B15C80);
PPC_FUNC_IMPL(__imp__sub_82B15C80) {
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
	// bne cr6,0x82b15cc4
	if (!ctx.cr6.eq) goto loc_82B15CC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,452
	ctx.r7.s64 = 452;
	// bl 0x82b102f0
	ctx.lr = 0x82B15CC4;
	sub_82B102F0(ctx, base);
loc_82B15CC4:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B15CE0"))) PPC_WEAK_FUNC(sub_82B15CE0);
PPC_FUNC_IMPL(__imp__sub_82B15CE0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b15d1c
	if (!ctx.cr6.eq) goto loc_82B15D1C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,472
	ctx.r7.s64 = 472;
	// bl 0x82b102f0
	ctx.lr = 0x82B15D1C;
	sub_82B102F0(ctx, base);
loc_82B15D1C:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
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

__attribute__((alias("__imp__sub_82B15D34"))) PPC_WEAK_FUNC(sub_82B15D34);
PPC_FUNC_IMPL(__imp__sub_82B15D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15D38"))) PPC_WEAK_FUNC(sub_82B15D38);
PPC_FUNC_IMPL(__imp__sub_82B15D38) {
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
	// bne cr6,0x82b15d7c
	if (!ctx.cr6.eq) goto loc_82B15D7C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,498
	ctx.r7.s64 = 498;
	// bl 0x82b102f0
	ctx.lr = 0x82B15D7C;
	sub_82B102F0(ctx, base);
loc_82B15D7C:
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82B15D98"))) PPC_WEAK_FUNC(sub_82B15D98);
PPC_FUNC_IMPL(__imp__sub_82B15D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B15DA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// rlwinm r27,r4,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-11944
	ctx.r28.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b15de8
	if (!ctx.cr6.eq) goto loc_82B15DE8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,550
	ctx.r7.s64 = 550;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15DE8;
	sub_82B102F0(ctx, base);
loc_82B15DE8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B15DFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// bne 0x82b15e2c
	if (!ctx.cr0.eq) goto loc_82B15E2C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-11704
	ctx.r5.s64 = ctx.r11.s64 + -11704;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15E24;
	sub_82B102F0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82b15eb8
	goto loc_82B15EB8;
loc_82B15E2C:
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// divwu r11,r10,r11
	ctx.r11.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b15e74
	if (ctx.cr0.eq) goto loc_82B15E74;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-11748
	ctx.r5.s64 = ctx.r11.s64 + -11748;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,563
	ctx.r7.s64 = 563;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15E74;
	sub_82B102F0(ctx, base);
loc_82B15E74:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,16384
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16384, ctx.xer);
	// blt cr6,0x82b15ea0
	if (ctx.cr6.lt) goto loc_82B15EA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-11788
	ctx.r5.s64 = ctx.r11.s64 + -11788;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15EA0;
	sub_82B102F0(ctx, base);
loc_82B15EA0:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82fa77c0
	ctx.lr = 0x82B15EB4;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B15EB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15EC0"))) PPC_WEAK_FUNC(sub_82B15EC0);
PPC_FUNC_IMPL(__imp__sub_82B15EC0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b15efc
	if (!ctx.cr6.eq) goto loc_82B15EFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,591
	ctx.r7.s64 = 591;
	// bl 0x82b102f0
	ctx.lr = 0x82B15EFC;
	sub_82B102F0(ctx, base);
loc_82B15EFC:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
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

__attribute__((alias("__imp__sub_82B15F14"))) PPC_WEAK_FUNC(sub_82B15F14);
PPC_FUNC_IMPL(__imp__sub_82B15F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15F18"))) PPC_WEAK_FUNC(sub_82B15F18);
PPC_FUNC_IMPL(__imp__sub_82B15F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B15F20;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-27688
	ctx.r27.s64 = ctx.r10.s64 + -27688;
	// blt cr6,0x82b15f68
	if (ctx.cr6.lt) goto loc_82B15F68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-27528
	ctx.r5.s64 = ctx.r11.s64 + -27528;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15F68;
	sub_82B102F0(ctx, base);
loc_82B15F68:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b15f9c
	if (ctx.cr6.lt) goto loc_82B15F9C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-27600
	ctx.r5.s64 = ctx.r11.s64 + -27600;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,634
	ctx.r7.s64 = 634;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B15F9C;
	sub_82B102F0(ctx, base);
loc_82B15F9C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r11,r9,r29
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82b15be8
	ctx.lr = 0x82B15FBC;
	sub_82B15BE8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B15FC4"))) PPC_WEAK_FUNC(sub_82B15FC4);
PPC_FUNC_IMPL(__imp__sub_82B15FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B15FC8"))) PPC_WEAK_FUNC(sub_82B15FC8);
PPC_FUNC_IMPL(__imp__sub_82B15FC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B15FD0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b16014
	if (!ctx.cr6.eq) goto loc_82B16014;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,919
	ctx.r7.s64 = 919;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16014;
	sub_82B102F0(ctx, base);
loc_82B16014:
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x82b16038
	if (ctx.cr6.lt) goto loc_82B16038;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11508
	ctx.r5.s64 = ctx.r11.s64 + -11508;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,920
	ctx.r7.s64 = 920;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16038;
	sub_82B102F0(ctx, base);
loc_82B16038:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82b1605c
	if (!ctx.cr6.eq) goto loc_82B1605C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11476
	ctx.r5.s64 = ctx.r11.s64 + -11476;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,921
	ctx.r7.s64 = 921;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1605C;
	sub_82B102F0(ctx, base);
loc_82B1605C:
	// mulli r11,r28,148
	ctx.r11.s64 = ctx.r28.s64 * 148;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r5,148
	ctx.r5.s64 = 148;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B16074;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16080"))) PPC_WEAK_FUNC(sub_82B16080);
PPC_FUNC_IMPL(__imp__sub_82B16080) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b160bc
	if (!ctx.cr6.eq) goto loc_82B160BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,997
	ctx.r7.s64 = 997;
	// bl 0x82b102f0
	ctx.lr = 0x82B160BC;
	sub_82B102F0(ctx, base);
loc_82B160BC:
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
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

__attribute__((alias("__imp__sub_82B160D4"))) PPC_WEAK_FUNC(sub_82B160D4);
PPC_FUNC_IMPL(__imp__sub_82B160D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B160D8"))) PPC_WEAK_FUNC(sub_82B160D8);
PPC_FUNC_IMPL(__imp__sub_82B160D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B160E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b16124
	if (!ctx.cr6.eq) goto loc_82B16124;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1100
	ctx.r7.s64 = 1100;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16124;
	sub_82B102F0(ctx, base);
loc_82B16124:
	// cmpwi cr6,r28,1966
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1966, ctx.xer);
	// bge cr6,0x82b16148
	if (!ctx.cr6.lt) goto loc_82B16148;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11288
	ctx.r5.s64 = ctx.r11.s64 + -11288;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1101
	ctx.r7.s64 = 1101;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16148;
	sub_82B102F0(ctx, base);
loc_82B16148:
	// cmpwi cr6,r28,2086
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2086, ctx.xer);
	// blt cr6,0x82b1616c
	if (ctx.cr6.lt) goto loc_82B1616C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11316
	ctx.r5.s64 = ctx.r11.s64 + -11316;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1102
	ctx.r7.s64 = 1102;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1616C;
	sub_82B102F0(ctx, base);
loc_82B1616C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,8
	ctx.r4.s64 = 8;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B16180;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b161ac
	if (!ctx.cr0.eq) goto loc_82B161AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11376
	ctx.r5.s64 = ctx.r11.s64 + -11376;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1110
	ctx.r7.s64 = 1110;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B161A4;
	sub_82B102F0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82b161c0
	goto loc_82B161C0;
loc_82B161AC:
	// stw r28,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r28.u32);
	// stw r27,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r27.u32);
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
	// bl 0x82b15090
	ctx.lr = 0x82B161BC;
	sub_82B15090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B161C0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B161C8"))) PPC_WEAK_FUNC(sub_82B161C8);
PPC_FUNC_IMPL(__imp__sub_82B161C8) {
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
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b1620c
	if (ctx.cr6.eq) goto loc_82B1620C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11224
	ctx.r6.s64 = ctx.r11.s64 + -11224;
	// addi r5,r10,-11264
	ctx.r5.s64 = ctx.r10.s64 + -11264;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,268
	ctx.r7.s64 = 268;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16204;
	sub_82B102F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b16210
	goto loc_82B16210;
loc_82B1620C:
	// li r3,32
	ctx.r3.s64 = 32;
loc_82B16210:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B16220"))) PPC_WEAK_FUNC(sub_82B16220);
PPC_FUNC_IMPL(__imp__sub_82B16220) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b1625c
	if (!ctx.cr6.eq) goto loc_82B1625C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1138
	ctx.r7.s64 = 1138;
	// bl 0x82b102f0
	ctx.lr = 0x82B1625C;
	sub_82B102F0(ctx, base);
loc_82B1625C:
	// lwz r3,2440(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2440);
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

__attribute__((alias("__imp__sub_82B16274"))) PPC_WEAK_FUNC(sub_82B16274);
PPC_FUNC_IMPL(__imp__sub_82B16274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16278"))) PPC_WEAK_FUNC(sub_82B16278);
PPC_FUNC_IMPL(__imp__sub_82B16278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B16280;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b162c8
	if (!ctx.cr6.eq) goto loc_82B162C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1177
	ctx.r7.s64 = 1177;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B162C8;
	sub_82B102F0(ctx, base);
loc_82B162C8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B162DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b16308
	if (!ctx.cr0.eq) goto loc_82B16308;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11120
	ctx.r5.s64 = ctx.r11.s64 + -11120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1186
	ctx.r7.s64 = 1186;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16300;
	sub_82B102F0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82b16328
	goto loc_82B16328;
loc_82B16308:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82b15090
	ctx.lr = 0x82B16324;
	sub_82B15090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B16328:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16330"))) PPC_WEAK_FUNC(sub_82B16330);
PPC_FUNC_IMPL(__imp__sub_82B16330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B16338;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b16380
	if (!ctx.cr6.eq) goto loc_82B16380;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1284
	ctx.r7.s64 = 1284;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16380;
	sub_82B102F0(ctx, base);
loc_82B16380:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,16
	ctx.r4.s64 = 16;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B16394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82b163c0
	if (!ctx.cr0.eq) goto loc_82B163C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11120
	ctx.r5.s64 = ctx.r11.s64 + -11120;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1293
	ctx.r7.s64 = 1293;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B163B8;
	sub_82B102F0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82b163e0
	goto loc_82B163E0;
loc_82B163C0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// stw r27,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r27.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r26,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r26.u32);
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
	// bl 0x82b15090
	ctx.lr = 0x82B163DC;
	sub_82B15090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B163E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B163E8"))) PPC_WEAK_FUNC(sub_82B163E8);
PPC_FUNC_IMPL(__imp__sub_82B163E8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b16424
	if (!ctx.cr6.eq) goto loc_82B16424;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1327
	ctx.r7.s64 = 1327;
	// bl 0x82b102f0
	ctx.lr = 0x82B16424;
	sub_82B102F0(ctx, base);
loc_82B16424:
	// lwz r3,2436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2436);
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

__attribute__((alias("__imp__sub_82B1643C"))) PPC_WEAK_FUNC(sub_82B1643C);
PPC_FUNC_IMPL(__imp__sub_82B1643C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16440"))) PPC_WEAK_FUNC(sub_82B16440);
PPC_FUNC_IMPL(__imp__sub_82B16440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B16448;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-11944
	ctx.r26.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b1648c
	if (!ctx.cr6.eq) goto loc_82B1648C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1533
	ctx.r7.s64 = 1533;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1648C;
	sub_82B102F0(ctx, base);
loc_82B1648C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b164b0
	if (!ctx.cr6.eq) goto loc_82B164B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-12860
	ctx.r5.s64 = ctx.r11.s64 + -12860;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1534
	ctx.r7.s64 = 1534;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B164B0;
	sub_82B102F0(ctx, base);
loc_82B164B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b163e8
	ctx.lr = 0x82B164B8;
	sub_82B163E8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne 0x82b164dc
	if (!ctx.cr0.eq) goto loc_82B164DC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-11040
	ctx.r5.s64 = ctx.r11.s64 + -11040;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1565
	ctx.r7.s64 = 1565;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B164DC;
	sub_82B102F0(ctx, base);
loc_82B164DC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b15120
	ctx.lr = 0x82B164E4;
	sub_82B15120(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82b165b0
	if (ctx.cr0.eq) goto loc_82B165B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r25,r11,-11052
	ctx.r25.s64 = ctx.r11.s64 + -11052;
loc_82B164F4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B164FC;
	sub_82B154D0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b1651c
	if (!ctx.cr0.eq) goto loc_82B1651C;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,1573
	ctx.r7.s64 = 1573;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1651C;
	sub_82B102F0(ctx, base);
loc_82B1651C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b1656c
	if (ctx.cr6.lt) goto loc_82B1656C;
	// beq cr6,0x82b16558
	if (ctx.cr6.eq) goto loc_82B16558;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82b16594
	if (!ctx.cr6.lt) goto loc_82B16594;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b15f18
	ctx.lr = 0x82B16544;
	sub_82B15F18(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82B16548:
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b165bc
	if (!ctx.cr6.eq) goto loc_82B165BC;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82b1659c
	goto loc_82B1659C;
loc_82B16558:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82b15be8
	ctx.lr = 0x82B16564;
	sub_82B15BE8(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x82b16548
	goto loc_82B16548;
loc_82B1656C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82bcb778
	ctx.lr = 0x82B16580;
	sub_82BCB778(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_82B16594:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b165bc
	if (ctx.cr6.eq) goto loc_82B165BC;
loc_82B1659C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b15420
	ctx.lr = 0x82B165A8;
	sub_82B15420(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82b164f4
	if (!ctx.cr0.eq) goto loc_82B164F4;
loc_82B165B0:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82B165B4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82B165BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b165b4
	goto loc_82B165B4;
}

__attribute__((alias("__imp__sub_82B165C4"))) PPC_WEAK_FUNC(sub_82B165C4);
PPC_FUNC_IMPL(__imp__sub_82B165C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B165C8"))) PPC_WEAK_FUNC(sub_82B165C8);
PPC_FUNC_IMPL(__imp__sub_82B165C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B165D0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b1661c
	if (!ctx.cr6.eq) goto loc_82B1661C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1647
	ctx.r7.s64 = 1647;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1661C;
	sub_82B102F0(ctx, base);
loc_82B1661C:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b16644
	if (!ctx.cr6.eq) goto loc_82B16644;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11024
	ctx.r5.s64 = ctx.r11.s64 + -11024;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,1648
	ctx.r7.s64 = 1648;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16644;
	sub_82B102F0(ctx, base);
loc_82B16644:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82bcaf48
	ctx.lr = 0x82B1665C;
	sub_82BCAF48(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16664"))) PPC_WEAK_FUNC(sub_82B16664);
PPC_FUNC_IMPL(__imp__sub_82B16664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16668"))) PPC_WEAK_FUNC(sub_82B16668);
PPC_FUNC_IMPL(__imp__sub_82B16668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B16670;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r29,r11,-28036
	ctx.r29.s64 = ctx.r11.s64 + -28036;
	// addi r28,r10,-11944
	ctx.r28.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b166c0
	if (!ctx.cr6.eq) goto loc_82B166C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1756
	ctx.r7.s64 = 1756;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B166C0;
	sub_82B102F0(ctx, base);
loc_82B166C0:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b166e8
	if (!ctx.cr6.eq) goto loc_82B166E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-11024
	ctx.r5.s64 = ctx.r11.s64 + -11024;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1757
	ctx.r7.s64 = 1757;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B166E8;
	sub_82B102F0(ctx, base);
loc_82B166E8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82b1670c
	if (!ctx.cr6.eq) goto loc_82B1670C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r11,-12860
	ctx.r5.s64 = ctx.r11.s64 + -12860;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,1758
	ctx.r7.s64 = 1758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1670C;
	sub_82B102F0(ctx, base);
loc_82B1670C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82bcb640
	ctx.lr = 0x82B16728;
	sub_82BCB640(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82b1673c
	if (ctx.cr6.eq) goto loc_82B1673C;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82b16774
	if (!ctx.cr6.eq) goto loc_82B16774;
loc_82B1673C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82b16774
	if (!ctx.cr6.eq) goto loc_82B16774;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b16774
	if (!ctx.cr6.eq) goto loc_82B16774;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b15f18
	ctx.lr = 0x82B16760;
	sub_82B15F18(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b16330
	ctx.lr = 0x82B16774;
	sub_82B16330(ctx, base);
loc_82B16774:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16780"))) PPC_WEAK_FUNC(sub_82B16780);
PPC_FUNC_IMPL(__imp__sub_82B16780) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b167bc
	if (!ctx.cr6.eq) goto loc_82B167BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1795
	ctx.r7.s64 = 1795;
	// bl 0x82b102f0
	ctx.lr = 0x82B167BC;
	sub_82B102F0(ctx, base);
loc_82B167BC:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
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

__attribute__((alias("__imp__sub_82B167D4"))) PPC_WEAK_FUNC(sub_82B167D4);
PPC_FUNC_IMPL(__imp__sub_82B167D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B167D8"))) PPC_WEAK_FUNC(sub_82B167D8);
PPC_FUNC_IMPL(__imp__sub_82B167D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B167E0;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b16820
	if (!ctx.cr6.eq) goto loc_82B16820;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1830
	ctx.r7.s64 = 1830;
	// bl 0x82b102f0
	ctx.lr = 0x82B16820;
	sub_82B102F0(ctx, base);
loc_82B16820:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82b16f50
	ctx.lr = 0x82B16834;
	sub_82B16F50(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16840"))) PPC_WEAK_FUNC(sub_82B16840);
PPC_FUNC_IMPL(__imp__sub_82B16840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B16848;
	__savegprlr_27(ctx, base);
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
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b16888
	if (!ctx.cr6.eq) goto loc_82B16888;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1870
	ctx.r7.s64 = 1870;
	// bl 0x82b102f0
	ctx.lr = 0x82B16888;
	sub_82B102F0(ctx, base);
loc_82B16888:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b16fb8
	ctx.lr = 0x82B168A0;
	sub_82B16FB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B168A8"))) PPC_WEAK_FUNC(sub_82B168A8);
PPC_FUNC_IMPL(__imp__sub_82B168A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B168B0;
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b168e8
	if (!ctx.cr6.eq) goto loc_82B168E8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1903
	ctx.r7.s64 = 1903;
	// bl 0x82b102f0
	ctx.lr = 0x82B168E8;
	sub_82B102F0(ctx, base);
loc_82B168E8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b17040
	ctx.lr = 0x82B168F8;
	sub_82B17040(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16900"))) PPC_WEAK_FUNC(sub_82B16900);
PPC_FUNC_IMPL(__imp__sub_82B16900) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b1693c
	if (!ctx.cr6.eq) goto loc_82B1693C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-11944
	ctx.r6.s64 = ctx.r11.s64 + -11944;
	// addi r5,r10,-12884
	ctx.r5.s64 = ctx.r10.s64 + -12884;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,1962
	ctx.r7.s64 = 1962;
	// bl 0x82b102f0
	ctx.lr = 0x82B1693C;
	sub_82B102F0(ctx, base);
loc_82B1693C:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
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

__attribute__((alias("__imp__sub_82B16954"))) PPC_WEAK_FUNC(sub_82B16954);
PPC_FUNC_IMPL(__imp__sub_82B16954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16958"))) PPC_WEAK_FUNC(sub_82B16958);
PPC_FUNC_IMPL(__imp__sub_82B16958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B16960;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-28036
	ctx.r30.s64 = ctx.r11.s64 + -28036;
	// addi r29,r10,-11944
	ctx.r29.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b1699c
	if (!ctx.cr6.eq) goto loc_82B1699C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2014
	ctx.r7.s64 = 2014;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1699C;
	sub_82B102F0(ctx, base);
loc_82B1699C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b169c4
	if (!ctx.cr6.eq) goto loc_82B169C4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-11012
	ctx.r5.s64 = ctx.r11.s64 + -11012;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r7,2018
	ctx.r7.s64 = 2018;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B169C4;
	sub_82B102F0(ctx, base);
loc_82B169C4:
	// addi r4,r31,52
	ctx.r4.s64 = ctx.r31.s64 + 52;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82b17068
	ctx.lr = 0x82B169D0;
	sub_82B17068(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B169E0"))) PPC_WEAK_FUNC(sub_82B169E0);
PPC_FUNC_IMPL(__imp__sub_82B169E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82B169E8;
	__savegprlr_19(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r20,r11,-28036
	ctx.r20.s64 = ctx.r11.s64 + -28036;
	// addi r19,r10,-11944
	ctx.r19.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b16a44
	if (!ctx.cr6.eq) goto loc_82B16A44;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,657
	ctx.r7.s64 = 657;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16A44;
	sub_82B102F0(ctx, base);
loc_82B16A44:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82b16a68
	if (ctx.cr6.lt) goto loc_82B16A68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11508
	ctx.r5.s64 = ctx.r11.s64 + -11508;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,658
	ctx.r7.s64 = 658;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16A68;
	sub_82B102F0(ctx, base);
loc_82B16A68:
	// mulli r11,r30,148
	ctx.r11.s64 = ctx.r30.s64 * 148;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// add r27,r11,r31
	ctx.r27.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r23,1
	ctx.r23.s64 = 1;
	// mulli r10,r30,37
	ctx.r10.s64 = ctx.r30.s64 * 37;
	// stw r23,60(r27)
	PPC_STORE_U32(ctx.r27.u32 + 60, ctx.r23.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r29,192(r27)
	PPC_STORE_U32(ctx.r27.u32 + 192, ctx.r29.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,36
	ctx.r6.s64 = ctx.r10.s64 + 36;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// subf r5,r8,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r8.s64;
	// subf r4,r8,r3
	ctx.r4.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_82B16AA4:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// addi r7,r7,24
	ctx.r7.s64 = ctx.r7.s64 + 24;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r26,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r26.u32);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82b16ad4
	if (ctx.cr6.eq) goto loc_82B16AD4;
	// lwzx r30,r5,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x82b16ad8
	goto loc_82B16AD8;
loc_82B16AD4:
	// stwx r24,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r24.u32);
loc_82B16AD8:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82b16af4
	if (ctx.cr6.eq) goto loc_82B16AF4;
	// lwz r30,0(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x82b16af8
	goto loc_82B16AF8;
loc_82B16AF4:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B16AF8:
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// add r7,r6,r11
	ctx.r7.u64 = ctx.r6.u64 + ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// beq cr6,0x82b16b18
	if (ctx.cr6.eq) goto loc_82B16B18;
	// lwzx r30,r4,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r9.u32);
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// b 0x82b16b1c
	goto loc_82B16B1C;
loc_82B16B18:
	// stwx r23,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r23.u32);
loc_82B16B1C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82b16aa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B16AA4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r10,44
	ctx.r6.s64 = ctx.r10.s64 + 44;
loc_82B16B30:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// addi r8,r8,20
	ctx.r8.s64 = ctx.r8.s64 + 20;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stwx r24,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r24.u32);
	// stwx r22,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r22.u32);
	// stwx r11,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r11.u32);
	// blt cr6,0x82b16b9c
	if (ctx.cr6.lt) goto loc_82B16B9C;
	// beq cr6,0x82b16b94
	if (ctx.cr6.eq) goto loc_82B16B94;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b16b8c
	if (ctx.cr6.lt) goto loc_82B16B8C;
	// beq cr6,0x82b16b84
	if (ctx.cr6.eq) goto loc_82B16B84;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82b16bbc
	if (ctx.cr6.lt) goto loc_82B16BBC;
	// b 0x82b16ba0
	goto loc_82B16BA0;
loc_82B16B84:
	// clrlwi r25,r21,24
	ctx.r25.u64 = ctx.r21.u32 & 0xFF;
	// b 0x82b16ba0
	goto loc_82B16BA0;
loc_82B16B8C:
	// rlwinm r25,r21,24,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 24) & 0xFF;
	// b 0x82b16ba0
	goto loc_82B16BA0;
loc_82B16B94:
	// rlwinm r25,r21,16,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 16) & 0xFF;
	// b 0x82b16ba0
	goto loc_82B16BA0;
loc_82B16B9C:
	// rlwinm r25,r21,8,24,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFF;
loc_82B16BA0:
	// cmplwi cr6,r25,2
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 2, ctx.xer);
	// bne cr6,0x82b16bb0
	if (!ctx.cr6.eq) goto loc_82B16BB0;
	// mr r25,r23
	ctx.r25.u64 = ctx.r23.u64;
	// b 0x82b16bc0
	goto loc_82B16BC0;
loc_82B16BB0:
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// li r25,2
	ctx.r25.s64 = 2;
	// beq cr6,0x82b16bc0
	if (ctx.cr6.eq) goto loc_82B16BC0;
loc_82B16BBC:
	// li r25,0
	ctx.r25.s64 = 0;
loc_82B16BC0:
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// stwx r25,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r25.u32);
	// blt cr6,0x82b16b30
	if (ctx.cr6.lt) goto loc_82B16B30;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// beq cr6,0x82b16c9c
	if (ctx.cr6.eq) goto loc_82B16C9C;
	// ble cr6,0x82b16c44
	if (!ctx.cr6.gt) goto loc_82B16C44;
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bgt cr6,0x82b16c44
	if (ctx.cr6.gt) goto loc_82B16C44;
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b16c14
	if (ctx.cr6.eq) goto loc_82B16C14;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11564
	ctx.r5.s64 = ctx.r11.s64 + -11564;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,742
	ctx.r7.s64 = 742;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16C14;
	sub_82B102F0(ctx, base);
loc_82B16C14:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b16c3c
	if (ctx.cr6.eq) goto loc_82B16C3C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11616
	ctx.r5.s64 = ctx.r11.s64 + -11616;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,743
	ctx.r7.s64 = 743;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16C3C;
	sub_82B102F0(ctx, base);
loc_82B16C3C:
	// stw r23,196(r27)
	PPC_STORE_U32(ctx.r27.u32 + 196, ctx.r23.u32);
	// b 0x82b16cf0
	goto loc_82B16CF0;
loc_82B16C44:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b16c6c
	if (ctx.cr6.eq) goto loc_82B16C6C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11668
	ctx.r5.s64 = ctx.r11.s64 + -11668;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,758
	ctx.r7.s64 = 758;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16C6C;
	sub_82B102F0(ctx, base);
loc_82B16C6C:
	// lwz r11,200(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b16c94
	if (ctx.cr6.eq) goto loc_82B16C94;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11564
	ctx.r5.s64 = ctx.r11.s64 + -11564;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,759
	ctx.r7.s64 = 759;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16C94;
	sub_82B102F0(ctx, base);
loc_82B16C94:
	// stw r23,204(r27)
	PPC_STORE_U32(ctx.r27.u32 + 204, ctx.r23.u32);
	// b 0x82b16cf0
	goto loc_82B16CF0;
loc_82B16C9C:
	// lwz r11,196(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 196);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b16cc4
	if (ctx.cr6.eq) goto loc_82B16CC4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11668
	ctx.r5.s64 = ctx.r11.s64 + -11668;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,750
	ctx.r7.s64 = 750;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16CC4;
	sub_82B102F0(ctx, base);
loc_82B16CC4:
	// lwz r11,204(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 204);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b16cec
	if (ctx.cr6.eq) goto loc_82B16CEC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// addi r5,r11,-11616
	ctx.r5.s64 = ctx.r11.s64 + -11616;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// li r7,751
	ctx.r7.s64 = 751;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16CEC;
	sub_82B102F0(ctx, base);
loc_82B16CEC:
	// stw r23,200(r27)
	PPC_STORE_U32(ctx.r27.u32 + 200, ctx.r23.u32);
loc_82B16CF0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16CF8"))) PPC_WEAK_FUNC(sub_82B16CF8);
PPC_FUNC_IMPL(__imp__sub_82B16CF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B16D00;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-11944
	ctx.r27.s64 = ctx.r10.s64 + -11944;
	// bne cr6,0x82b16d40
	if (!ctx.cr6.eq) goto loc_82B16D40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12884
	ctx.r5.s64 = ctx.r11.s64 + -12884;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,956
	ctx.r7.s64 = 956;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16D40;
	sub_82B102F0(ctx, base);
loc_82B16D40:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b16d64
	if (!ctx.cr6.eq) goto loc_82B16D64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11388
	ctx.r5.s64 = ctx.r11.s64 + -11388;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,957
	ctx.r7.s64 = 957;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16D64;
	sub_82B102F0(ctx, base);
loc_82B16D64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b161c8
	ctx.lr = 0x82B16D6C;
	sub_82B161C8(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B16D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b16dac
	if (!ctx.cr0.eq) goto loc_82B16DAC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11456
	ctx.r5.s64 = ctx.r11.s64 + -11456;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,966
	ctx.r7.s64 = 966;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16DA4;
	sub_82B102F0(ctx, base);
	// li r3,16
	ctx.r3.s64 = 16;
	// b 0x82b16dd4
	goto loc_82B16DD4;
loc_82B16DAC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b161c8
	ctx.lr = 0x82B16DB4;
	sub_82B161C8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B16DC4;
	sub_82FA77C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,2428(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2428);
	// bl 0x82b15090
	ctx.lr = 0x82B16DD0;
	sub_82B15090(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B16DD4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16DDC"))) PPC_WEAK_FUNC(sub_82B16DDC);
PPC_FUNC_IMPL(__imp__sub_82B16DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16DE0"))) PPC_WEAK_FUNC(sub_82B16DE0);
PPC_FUNC_IMPL(__imp__sub_82B16DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B16DE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-10992
	ctx.r27.s64 = ctx.r10.s64 + -10992;
	// bne cr6,0x82b16e30
	if (!ctx.cr6.eq) goto loc_82B16E30;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12472
	ctx.r5.s64 = ctx.r11.s64 + -12472;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,74
	ctx.r7.s64 = 74;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16E30;
	sub_82B102F0(ctx, base);
loc_82B16E30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82b16e54
	if (!ctx.cr6.eq) goto loc_82B16E54;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-12484
	ctx.r5.s64 = ctx.r11.s64 + -12484;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,75
	ctx.r7.s64 = 75;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16E54;
	sub_82B102F0(ctx, base);
loc_82B16E54:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82b16e78
	if (!ctx.cr6.eq) goto loc_82B16E78;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11956
	ctx.r5.s64 = ctx.r11.s64 + -11956;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,76
	ctx.r7.s64 = 76;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16E78;
	sub_82B102F0(ctx, base);
loc_82B16E78:
	// li r4,2704
	ctx.r4.s64 = 2704;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B16E88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b16eb0
	if (!ctx.cr0.eq) goto loc_82B16EB0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-11000
	ctx.r5.s64 = ctx.r11.s64 + -11000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,80
	ctx.r7.s64 = 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B16EAC;
	sub_82B102F0(ctx, base);
	// b 0x82b16f00
	goto loc_82B16F00;
loc_82B16EB0:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// addi r9,r31,-20
	ctx.r9.s64 = ctx.r31.s64 + -20;
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B16ED0:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stbu r11,36(r9)
	ea = 36 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82b16ed0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B16ED0;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r31,1156
	ctx.r9.s64 = ctx.r31.s64 + 1156;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B16EF0:
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r10,12(r9)
	ea = 12 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82b16ef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B16EF0;
loc_82B16F00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B16F0C"))) PPC_WEAK_FUNC(sub_82B16F0C);
PPC_FUNC_IMPL(__imp__sub_82B16F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16F10"))) PPC_WEAK_FUNC(sub_82B16F10);
PPC_FUNC_IMPL(__imp__sub_82B16F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r3,-20
	ctx.r11.s64 = ctx.r3.s64 + -20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B16F1C:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// rlwinm r10,r10,0,12,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF0FFFFF;
	// stwu r10,36(r11)
	ea = 36 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b16f1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B16F1C;
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r11,r3,1156
	ctx.r11.s64 = ctx.r3.s64 + 1156;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B16F38:
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,0,9,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFF7FFFFF;
	// stwu r10,12(r11)
	ea = 12 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b16f38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B16F38;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B16F4C"))) PPC_WEAK_FUNC(sub_82B16F4C);
PPC_FUNC_IMPL(__imp__sub_82B16F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B16F50"))) PPC_WEAK_FUNC(sub_82B16F50);
PPC_FUNC_IMPL(__imp__sub_82B16F50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mulli r10,r4,36
	ctx.r10.s64 = ctx.r4.s64 * 36;
	// add r11,r10,r3
	ctx.r11.u64 = ctx.r10.u64 + ctx.r3.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r6,3
	ctx.r6.s64 = 3;
	// slw r7,r7,r5
	ctx.r7.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r5.u8 & 0x3F));
	// slw r6,r6,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r7,r7,20,8,11
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 20) & 0xF00000;
	// not r6,r6
	ctx.r6.u64 = ~ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r7,r6,12,0,19
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// slw r6,r4,r9
	ctx.r6.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r9,r5,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// and r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	// rlwinm r6,r6,12,0,19
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 12) & 0xFFFFF000;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// add r7,r10,r3
	ctx.r7.u64 = ctx.r10.u64 + ctx.r3.u64;
	// rlwimi r9,r8,0,20,11
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r9.u64 & 0xFF000);
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f1,20(r7)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r7.u32 + 20, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B16FB8"))) PPC_WEAK_FUNC(sub_82B16FB8);
PPC_FUNC_IMPL(__imp__sub_82B16FB8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mulli r9,r4,36
	ctx.r9.s64 = ctx.r4.s64 * 36;
	// add r11,r9,r3
	ctx.r11.u64 = ctx.r9.u64 + ctx.r3.u64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r4,r5,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r3,3
	ctx.r3.s64 = 3;
	// slw r31,r8,r5
	ctx.r31.u64 = ctx.r5.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r5.u8 & 0x3F));
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// slw r3,r3,r4
	ctx.r3.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r4.u8 & 0x3F));
	// not r3,r3
	ctx.r3.u64 = ~ctx.r3.u64;
	// rlwinm r31,r31,20,8,11
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 20) & 0xF00000;
	// slw r4,r8,r4
	ctx.r4.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r8,r5,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 | ctx.r30.u64;
	// rlwinm r3,r3,12,0,19
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 12) & 0xFFFFF000;
	// addi r5,r5,3
	ctx.r5.s64 = ctx.r5.s64 + 3;
	// and r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 & ctx.r31.u64;
	// rlwinm r4,r4,12,0,19
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 12) & 0xFFFFF000;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// or r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 | ctx.r4.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwimi r4,r31,0,20,11
	ctx.r4.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFFFFFF00FFF) | (ctx.r4.u64 & 0xFF000);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// stw r4,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r7,r5,r10
	PPC_STORE_U32(ctx.r5.u32 + ctx.r10.u32, ctx.r7.u32);
	// stw r6,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r6.u32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B17040"))) PPC_WEAK_FUNC(sub_82B17040);
PPC_FUNC_IMPL(__imp__sub_82B17040) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,36
	ctx.r11.s64 = ctx.r4.s64 * 36;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// li r9,2047
	ctx.r9.s64 = 2047;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r5,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r5.u32);
	// rlwimi r10,r9,13,8,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 13) & 0xFFF000) | (ctx.r10.u64 & 0xFFFFFFFFFF000FFF);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B17064"))) PPC_WEAK_FUNC(sub_82B17064);
PPC_FUNC_IMPL(__imp__sub_82B17064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B17068"))) PPC_WEAK_FUNC(sub_82B17068);
PPC_FUNC_IMPL(__imp__sub_82B17068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B17070;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-10992
	ctx.r26.s64 = ctx.r10.s64 + -10992;
	// bne cr6,0x82b170c0
	if (!ctx.cr6.eq) goto loc_82B170C0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-11000
	ctx.r5.s64 = ctx.r11.s64 + -11000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,401
	ctx.r7.s64 = 401;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B170C0;
	sub_82B102F0(ctx, base);
loc_82B170C0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82b170e4
	if (!ctx.cr6.eq) goto loc_82B170E4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10872
	ctx.r5.s64 = ctx.r11.s64 + -10872;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,402
	ctx.r7.s64 = 402;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B170E4;
	sub_82B102F0(ctx, base);
loc_82B170E4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b1725c
	if (ctx.cr6.eq) goto loc_82B1725C;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82b1725c
	if (ctx.cr6.eq) goto loc_82B1725C;
	// li r11,32
	ctx.r11.s64 = 32;
	// addi r25,r31,16
	ctx.r25.s64 = ctx.r31.s64 + 16;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B17104:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b17114
	if (ctx.cr0.eq) goto loc_82B17114;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B17114:
	// addi r10,r10,36
	ctx.r10.s64 = ctx.r10.s64 + 36;
	// bdnz 0x82b17104
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B17104;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r24,r31,1168
	ctx.r24.s64 = ctx.r31.s64 + 1168;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B1712C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm. r11,r11,0,8,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b1713c
	if (ctx.cr0.eq) goto loc_82B1713C;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82B1713C:
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
	// bdnz 0x82b1712c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B1712C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b17154
	if (!ctx.cr6.eq) goto loc_82B17154;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b1719c
	if (ctx.cr6.eq) goto loc_82B1719C;
loc_82B17154:
	// mulli r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 * 3;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// bctrl 
	ctx.lr = 0x82B17174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b171a8
	if (!ctx.cr0.eq) goto loc_82B171A8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10880
	ctx.r5.s64 = ctx.r11.s64 + -10880;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,443
	ctx.r7.s64 = 443;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17198;
	sub_82B102F0(ctx, base);
	// li r23,16
	ctx.r23.s64 = 16;
loc_82B1719C:
	// stw r30,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r30.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// b 0x82b17260
	goto loc_82B17260;
loc_82B171A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// beq cr6,0x82b17200
	if (ctx.cr6.eq) goto loc_82B17200;
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
loc_82B171D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,8,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b171f4
	if (ctx.cr0.eq) goto loc_82B171F4;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B171EC;
	sub_82FA77C0(ctx, base);
	// addi r28,r28,36
	ctx.r28.s64 = ctx.r28.s64 + 36;
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
loc_82B171F4:
	// addi r31,r31,36
	ctx.r31.s64 = ctx.r31.s64 + 36;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b171d0
	if (!ctx.cr6.eq) goto loc_82B171D0;
loc_82B17200:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b1719c
	if (ctx.cr6.eq) goto loc_82B1719C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// beq cr6,0x82b1719c
	if (ctx.cr6.eq) goto loc_82B1719C;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
loc_82B17228:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm. r8,r8,0,8,11
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF00000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b17250
	if (ctx.cr0.eq) goto loc_82B17250;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// addi r10,r10,12
	ctx.r10.s64 = ctx.r10.s64 + 12;
loc_82B17250:
	// addi r9,r9,36
	ctx.r9.s64 = ctx.r9.s64 + 36;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// b 0x82b17228
	goto loc_82B17228;
loc_82B1725C:
	// li r3,25
	ctx.r3.s64 = 25;
loc_82B17260:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B17268"))) PPC_WEAK_FUNC(sub_82B17268);
PPC_FUNC_IMPL(__imp__sub_82B17268) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82B17284"))) PPC_WEAK_FUNC(sub_82B17284);
PPC_FUNC_IMPL(__imp__sub_82B17284) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B17288"))) PPC_WEAK_FUNC(sub_82B17288);
PPC_FUNC_IMPL(__imp__sub_82B17288) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b172a8
	if (ctx.cr6.eq) goto loc_82B172A8;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b172a0
	if (ctx.cr6.eq) goto loc_82B172A0;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82B172A0:
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
loc_82B172A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B172B0"))) PPC_WEAK_FUNC(sub_82B172B0);
PPC_FUNC_IMPL(__imp__sub_82B172B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// clrlwi r3,r11,31
	ctx.r3.u64 = ctx.r11.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B172BC"))) PPC_WEAK_FUNC(sub_82B172BC);
PPC_FUNC_IMPL(__imp__sub_82B172BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B172C0"))) PPC_WEAK_FUNC(sub_82B172C0);
PPC_FUNC_IMPL(__imp__sub_82B172C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,76(r10)
	PPC_STORE_U32(ctx.r10.u32 + 76, ctx.r4.u32);
	// b 0x82b13c78
	sub_82B13C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B172DC"))) PPC_WEAK_FUNC(sub_82B172DC);
PPC_FUNC_IMPL(__imp__sub_82B172DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B172E0"))) PPC_WEAK_FUNC(sub_82B172E0);
PPC_FUNC_IMPL(__imp__sub_82B172E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B172E8;
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
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b17344
	if (ctx.cr6.eq) goto loc_82B17344;
loc_82B17304:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82b17328
	if (ctx.cr6.gt) goto loc_82B17328;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82b13df8
	ctx.lr = 0x82B17320;
	sub_82B13DF8(ctx, base);
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b17304
	if (!ctx.cr6.eq) goto loc_82B17304;
loc_82B17328:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b17344
	if (ctx.cr6.eq) goto loc_82B17344;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b17344
	if (ctx.cr6.eq) goto loc_82B17344;
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b17368
	if (!ctx.cr6.gt) goto loc_82B17368;
loc_82B17344:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-10752
	ctx.r6.s64 = ctx.r11.s64 + -10752;
	// addi r5,r10,-10812
	ctx.r5.s64 = ctx.r10.s64 + -10812;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,642
	ctx.r7.s64 = 642;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17368;
	sub_82B102F0(ctx, base);
loc_82B17368:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// bl 0x82b13ea8
	ctx.lr = 0x82B17374;
	sub_82B13EA8(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B1737C"))) PPC_WEAK_FUNC(sub_82B1737C);
PPC_FUNC_IMPL(__imp__sub_82B1737C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B17380"))) PPC_WEAK_FUNC(sub_82B17380);
PPC_FUNC_IMPL(__imp__sub_82B17380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B17388;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r26,r8,-12880
	ctx.r26.s64 = ctx.r8.s64 + -12880;
	// addi r29,r9,-28036
	ctx.r29.s64 = ctx.r9.s64 + -28036;
	// addi r25,r10,-10656
	ctx.r25.s64 = ctx.r10.s64 + -10656;
	// addi r28,r11,-10752
	ctx.r28.s64 = ctx.r11.s64 + -10752;
loc_82B173B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x82b13df8
	ctx.lr = 0x82B173C0;
	sub_82B13DF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b17428
	if (ctx.cr0.eq) goto loc_82B17428;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b173dc
	if (ctx.cr6.eq) goto loc_82B173DC;
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b173f4
	if (!ctx.cr6.gt) goto loc_82B173F4;
loc_82B173DC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,664
	ctx.r7.s64 = 664;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B173F4;
	sub_82B102F0(ctx, base);
loc_82B173F4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,72(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 72);
	// bl 0x82b13ea8
	ctx.lr = 0x82B17400;
	sub_82B13EA8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b17fd0
	ctx.lr = 0x82B17408;
	sub_82B17FD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17428
	if (ctx.cr0.eq) goto loc_82B17428;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r7,670
	ctx.r7.s64 = 670;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17428;
	sub_82B102F0(ctx, base);
loc_82B17428:
	// lwz r11,76(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b173b4
	if (!ctx.cr6.gt) goto loc_82B173B4;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B17444"))) PPC_WEAK_FUNC(sub_82B17444);
PPC_FUNC_IMPL(__imp__sub_82B17444) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B17448"))) PPC_WEAK_FUNC(sub_82B17448);
PPC_FUNC_IMPL(__imp__sub_82B17448) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r4,256
	ctx.r4.s64 = 256;
	// lis r5,-31975
	ctx.r5.s64 = -2095513600;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// li r7,16
	ctx.r7.s64 = 16;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// addi r5,r5,26236
	ctx.r5.s64 = ctx.r5.s64 + 26236;
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// li r31,224
	ctx.r31.s64 = 224;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// li r4,28
	ctx.r4.s64 = 28;
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r9,36(r6)
	PPC_STORE_U32(ctx.r6.u32 + 36, ctx.r9.u32);
	// stw r11,60(r6)
	PPC_STORE_U32(ctx.r6.u32 + 60, ctx.r11.u32);
	// stw r31,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r31.u32);
	// stw r10,40(r6)
	PPC_STORE_U32(ctx.r6.u32 + 40, ctx.r10.u32);
	// stw r4,64(r6)
	PPC_STORE_U32(ctx.r6.u32 + 64, ctx.r4.u32);
	// stw r7,20(r6)
	PPC_STORE_U32(ctx.r6.u32 + 20, ctx.r7.u32);
	// stw r10,44(r6)
	PPC_STORE_U32(ctx.r6.u32 + 44, ctx.r10.u32);
	// stw r11,68(r6)
	PPC_STORE_U32(ctx.r6.u32 + 68, ctx.r11.u32);
	// stw r8,24(r6)
	PPC_STORE_U32(ctx.r6.u32 + 24, ctx.r8.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
	// stw r11,72(r6)
	PPC_STORE_U32(ctx.r6.u32 + 72, ctx.r11.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B174D0"))) PPC_WEAK_FUNC(sub_82B174D0);
PPC_FUNC_IMPL(__imp__sub_82B174D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B174D8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,13
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 13, ctx.xer);
	// beq cr6,0x82b174f0
	if (ctx.cr6.eq) goto loc_82B174F0;
	// cmplwi cr6,r4,11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 11, ctx.xer);
	// bne cr6,0x82b17a98
	if (!ctx.cr6.eq) goto loc_82B17A98;
loc_82B174F0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b17a98
	if (ctx.cr6.eq) goto loc_82B17A98;
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b17a98
	if (ctx.cr6.eq) goto loc_82B17A98;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82b105d0
	ctx.lr = 0x82B17524;
	sub_82B105D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-10752
	ctx.r26.s64 = ctx.r10.s64 + -10752;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1755c
	if (!ctx.cr6.eq) goto loc_82B1755C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10104
	ctx.r5.s64 = ctx.r11.s64 + -10104;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,291
	ctx.r7.s64 = 291;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1755C;
	sub_82B102F0(ctx, base);
loc_82B1755C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b175d8
	if (ctx.cr6.eq) goto loc_82B175D8;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r29,15
	ctx.r29.s64 = 15;
	// addi r11,r11,5512
	ctx.r11.s64 = ctx.r11.s64 + 5512;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r28,r11,-10240
	ctx.r28.s64 = ctx.r11.s64 + -10240;
loc_82B17580:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r4,-4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -4);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B17598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82b175cc
	if (ctx.cr6.eq) goto loc_82B175CC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82b175cc
	if (ctx.cr6.eq) goto loc_82B175CC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b175cc
	if (ctx.cr6.eq) goto loc_82B175CC;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,306
	ctx.r7.s64 = 306;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B175CC;
	sub_82B102F0(ctx, base);
loc_82B175CC:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 + 12;
	// bne 0x82b17580
	if (!ctx.cr0.eq) goto loc_82B17580;
loc_82B175D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x82b17600
	if (ctx.cr6.eq) goto loc_82B17600;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10288
	ctx.r5.s64 = ctx.r11.s64 + -10288;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,313
	ctx.r7.s64 = 313;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17600;
	sub_82B102F0(ctx, base);
loc_82B17600:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17628
	if (!ctx.cr6.eq) goto loc_82B17628;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10324
	ctx.r5.s64 = ctx.r11.s64 + -10324;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,316
	ctx.r7.s64 = 316;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17628;
	sub_82B102F0(ctx, base);
loc_82B17628:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17650
	if (!ctx.cr6.eq) goto loc_82B17650;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10356
	ctx.r5.s64 = ctx.r11.s64 + -10356;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,317
	ctx.r7.s64 = 317;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17650;
	sub_82B102F0(ctx, base);
loc_82B17650:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b17a98
	if (ctx.cr6.eq) goto loc_82B17A98;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b17a98
	if (ctx.cr6.eq) goto loc_82B17A98;
	// li r4,312
	ctx.r4.s64 = 312;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B17678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b17a98
	if (ctx.cr0.eq) goto loc_82B17A98;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r11,r30,204
	ctx.r11.s64 = ctx.r30.s64 + 204;
	// addi r10,r10,7328
	ctx.r10.s64 = ctx.r10.s64 + 7328;
	// li r6,5
	ctx.r6.s64 = 5;
loc_82B17690:
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r10,-4
	ctx.r8.s64 = ctx.r10.s64 + -4;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B176A0:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// stwu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82b176a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B176A0;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bne 0x82b17690
	if (!ctx.cr0.eq) goto loc_82B17690;
	// li r11,10
	ctx.r11.s64 = 10;
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r11,304(r30)
	PPC_STORE_U32(ctx.r30.u32 + 304, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,308(r30)
	PPC_STORE_U32(ctx.r30.u32 + 308, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r29,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B176E0;
	sub_82FA77C0(ctx, base);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bca910
	ctx.lr = 0x82B176F8;
	sub_82BCA910(ctx, base);
	// stw r3,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// li r6,1000
	ctx.r6.s64 = 1000;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bcaaa8
	ctx.lr = 0x82B17714;
	sub_82BCAAA8(ctx, base);
	// stw r3,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r3.u32);
	// li r7,100
	ctx.r7.s64 = 100;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bcac40
	ctx.lr = 0x82B17730;
	sub_82BCAC40(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// stw r3,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b1775c
	if (!ctx.cr6.eq) goto loc_82B1775C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10380
	ctx.r5.s64 = ctx.r11.s64 + -10380;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,382
	ctx.r7.s64 = 382;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B1775C;
	sub_82B102F0(ctx, base);
loc_82B1775C:
	// lwz r11,116(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17784
	if (!ctx.cr6.eq) goto loc_82B17784;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10408
	ctx.r5.s64 = ctx.r11.s64 + -10408;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,383
	ctx.r7.s64 = 383;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17784;
	sub_82B102F0(ctx, base);
loc_82B17784:
	// lwz r11,120(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b177ac
	if (!ctx.cr6.eq) goto loc_82B177AC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10436
	ctx.r5.s64 = ctx.r11.s64 + -10436;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,384
	ctx.r7.s64 = 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B177AC;
	sub_82B102F0(ctx, base);
loc_82B177AC:
	// lwz r6,36(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bc87e0
	ctx.lr = 0x82B177C0;
	sub_82BC87E0(ctx, base);
	// stw r3,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r3.u32);
	// addi r3,r30,124
	ctx.r3.s64 = ctx.r30.s64 + 124;
	// bl 0x82b17448
	ctx.lr = 0x82B177CC;
	sub_82B17448(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82b13a40
	ctx.lr = 0x82B177E0;
	sub_82B13A40(ctx, base);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r3,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r3.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,4096
	ctx.r8.s64 = 4096;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x82bcce40
	ctx.lr = 0x82B17824;
	sub_82BCCE40(ctx, base);
	// stw r3,200(r30)
	PPC_STORE_U32(ctx.r30.u32 + 200, ctx.r3.u32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r11,r11,-5848
	ctx.r11.s64 = ctx.r11.s64 + -5848;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r29,304(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 304);
	// lwz r28,120(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// lwz r25,116(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// bl 0x82bccaa8
	ctx.lr = 0x82B17874;
	sub_82BCCAA8(ctx, base);
	// stw r3,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r3.u32);
	// lwz r7,308(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 308);
	// lwz r6,112(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82b18768
	ctx.lr = 0x82B17890;
	sub_82B18768(ctx, base);
	// stw r3,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r3.u32);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,200(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r6,92(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bc9ac0
	ctx.lr = 0x82B178B8;
	sub_82BC9AC0(ctx, base);
	// stw r3,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r3.u32);
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r6,84(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bcbb28
	ctx.lr = 0x82B178D4;
	sub_82BCBB28(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stw r3,104(r30)
	PPC_STORE_U32(ctx.r30.u32 + 104, ctx.r3.u32);
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r9,200(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// lwz r7,84(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// lwz r6,80(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82b19170
	ctx.lr = 0x82B17908;
	sub_82B19170(ctx, base);
	// stw r3,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r9,116(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// lwz r8,88(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// lwz r7,80(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bc9bf0
	ctx.lr = 0x82B17930;
	sub_82BC9BF0(ctx, base);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r7,92(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82bc8318
	ctx.lr = 0x82B1794C;
	sub_82BC8318(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17978
	if (!ctx.cr6.eq) goto loc_82B17978;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10456
	ctx.r5.s64 = ctx.r11.s64 + -10456;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,487
	ctx.r7.s64 = 487;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17978;
	sub_82B102F0(ctx, base);
loc_82B17978:
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b179a0
	if (!ctx.cr6.eq) goto loc_82B179A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10476
	ctx.r5.s64 = ctx.r11.s64 + -10476;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,488
	ctx.r7.s64 = 488;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B179A0;
	sub_82B102F0(ctx, base);
loc_82B179A0:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b179c8
	if (!ctx.cr6.eq) goto loc_82B179C8;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10500
	ctx.r5.s64 = ctx.r11.s64 + -10500;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,489
	ctx.r7.s64 = 489;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B179C8;
	sub_82B102F0(ctx, base);
loc_82B179C8:
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b179f0
	if (!ctx.cr6.eq) goto loc_82B179F0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10524
	ctx.r5.s64 = ctx.r11.s64 + -10524;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,490
	ctx.r7.s64 = 490;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B179F0;
	sub_82B102F0(ctx, base);
loc_82B179F0:
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17a18
	if (!ctx.cr6.eq) goto loc_82B17A18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10548
	ctx.r5.s64 = ctx.r11.s64 + -10548;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,491
	ctx.r7.s64 = 491;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17A18;
	sub_82B102F0(ctx, base);
loc_82B17A18:
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17a40
	if (!ctx.cr6.eq) goto loc_82B17A40;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10572
	ctx.r5.s64 = ctx.r11.s64 + -10572;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,492
	ctx.r7.s64 = 492;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17A40;
	sub_82B102F0(ctx, base);
loc_82B17A40:
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17a68
	if (!ctx.cr6.eq) goto loc_82B17A68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10596
	ctx.r5.s64 = ctx.r11.s64 + -10596;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,493
	ctx.r7.s64 = 493;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17A68;
	sub_82B102F0(ctx, base);
loc_82B17A68:
	// lwz r11,200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 200);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17a90
	if (!ctx.cr6.eq) goto loc_82B17A90;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10616
	ctx.r5.s64 = ctx.r11.s64 + -10616;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,494
	ctx.r7.s64 = 494;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17A90;
	sub_82B102F0(ctx, base);
loc_82B17A90:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82b17a9c
	goto loc_82B17A9C;
loc_82B17A98:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B17A9C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B17AA4"))) PPC_WEAK_FUNC(sub_82B17AA4);
PPC_FUNC_IMPL(__imp__sub_82B17AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B17AA8"))) PPC_WEAK_FUNC(sub_82B17AA8);
PPC_FUNC_IMPL(__imp__sub_82B17AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B17AB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b17c80
	if (ctx.cr6.eq) goto loc_82B17C80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b17380
	ctx.lr = 0x82B17AC8;
	sub_82B17380(ctx, base);
	// lwz r3,72(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// bl 0x82b13b78
	ctx.lr = 0x82B17AD0;
	sub_82B13B78(ctx, base);
	// lwz r3,108(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 108);
	// bl 0x82bc8430
	ctx.lr = 0x82B17AD8;
	sub_82BC8430(ctx, base);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r9,-28036
	ctx.r31.s64 = ctx.r9.s64 + -28036;
	// addi r30,r10,-10064
	ctx.r30.s64 = ctx.r10.s64 + -10064;
	// addi r29,r11,-10752
	ctx.r29.s64 = ctx.r11.s64 + -10752;
	// beq 0x82b17b10
	if (ctx.cr0.eq) goto loc_82B17B10;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,546
	ctx.r7.s64 = 546;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17B10;
	sub_82B102F0(ctx, base);
loc_82B17B10:
	// lwz r3,104(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 104);
	// bl 0x82bcb820
	ctx.lr = 0x82B17B18;
	sub_82BCB820(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17b38
	if (ctx.cr0.eq) goto loc_82B17B38;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,549
	ctx.r7.s64 = 549;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17B38;
	sub_82B102F0(ctx, base);
loc_82B17B38:
	// lwz r3,100(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x82bc9da0
	ctx.lr = 0x82B17B40;
	sub_82BC9DA0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17b60
	if (ctx.cr0.eq) goto loc_82B17B60;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,552
	ctx.r7.s64 = 552;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17B60;
	sub_82B102F0(ctx, base);
loc_82B17B60:
	// lwz r3,96(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 96);
	// bl 0x82b18a38
	ctx.lr = 0x82B17B68;
	sub_82B18A38(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17b88
	if (ctx.cr0.eq) goto loc_82B17B88;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,555
	ctx.r7.s64 = 555;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17B88;
	sub_82B102F0(ctx, base);
loc_82B17B88:
	// lwz r3,88(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// bl 0x82bc8430
	ctx.lr = 0x82B17B90;
	sub_82BC8430(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17bb0
	if (ctx.cr0.eq) goto loc_82B17BB0;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,558
	ctx.r7.s64 = 558;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17BB0;
	sub_82B102F0(ctx, base);
loc_82B17BB0:
	// lwz r3,84(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// bl 0x82b181e8
	ctx.lr = 0x82B17BB8;
	sub_82B181E8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17bd8
	if (ctx.cr0.eq) goto loc_82B17BD8;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,561
	ctx.r7.s64 = 561;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17BD8;
	sub_82B102F0(ctx, base);
loc_82B17BD8:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// bl 0x82bcc8e0
	ctx.lr = 0x82B17BE0;
	sub_82BCC8E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17c00
	if (ctx.cr0.eq) goto loc_82B17C00;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,564
	ctx.r7.s64 = 564;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17C00;
	sub_82B102F0(ctx, base);
loc_82B17C00:
	// lwz r3,200(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 200);
	// bl 0x82bcd148
	ctx.lr = 0x82B17C08;
	sub_82BCD148(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82b17c28
	if (ctx.cr0.eq) goto loc_82B17C28;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,567
	ctx.r7.s64 = 567;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17C28;
	sub_82B102F0(ctx, base);
loc_82B17C28:
	// lwz r3,92(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	// bl 0x82bc8938
	ctx.lr = 0x82B17C30;
	sub_82BC8938(ctx, base);
	// lwz r3,112(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 112);
	// bl 0x82bca240
	ctx.lr = 0x82B17C38;
	sub_82BCA240(ctx, base);
	// lwz r3,116(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 116);
	// bl 0x82bca490
	ctx.lr = 0x82B17C40;
	sub_82BCA490(ctx, base);
	// lwz r3,120(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 120);
	// bl 0x82bca6d0
	ctx.lr = 0x82B17C48;
	sub_82BCA6D0(ctx, base);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,16(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B17C5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82b17c7c
	if (ctx.cr0.eq) goto loc_82B17C7C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,580
	ctx.r7.s64 = 580;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17C7C;
	sub_82B102F0(ctx, base);
loc_82B17C7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82B17C80:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B17C88"))) PPC_WEAK_FUNC(sub_82B17C88);
PPC_FUNC_IMPL(__imp__sub_82B17C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B17C90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-9872
	ctx.r27.s64 = ctx.r10.s64 + -9872;
	// bne cr6,0x82b17cd0
	if (!ctx.cr6.eq) goto loc_82B17CD0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-13000
	ctx.r5.s64 = ctx.r11.s64 + -13000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,132
	ctx.r7.s64 = 132;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17CD0;
	sub_82B102F0(ctx, base);
loc_82B17CD0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82b17cf4
	if (!ctx.cr6.eq) goto loc_82B17CF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-9892
	ctx.r5.s64 = ctx.r11.s64 + -9892;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,133
	ctx.r7.s64 = 133;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17CF4;
	sub_82B102F0(ctx, base);
loc_82B17CF4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b17e18
	if (ctx.cr6.eq) goto loc_82B17E18;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b17e18
	if (ctx.cr6.eq) goto loc_82B17E18;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828b2440
	ctx.lr = 0x82B17D0C;
	sub_828B2440(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r4,48
	ctx.r4.s64 = 48;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B17D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82b17e18
	if (ctx.cr0.eq) goto loc_82B17E18;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17d64
	if (!ctx.cr6.eq) goto loc_82B17D64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-9928
	ctx.r5.s64 = ctx.r11.s64 + -9928;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,169
	ctx.r7.s64 = 169;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17D64;
	sub_82B102F0(ctx, base);
loc_82B17D64:
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17d8c
	if (!ctx.cr6.eq) goto loc_82B17D8C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-9968
	ctx.r5.s64 = ctx.r11.s64 + -9968;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,170
	ctx.r7.s64 = 170;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17D8C;
	sub_82B102F0(ctx, base);
loc_82B17D8C:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17db4
	if (!ctx.cr6.eq) goto loc_82B17DB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-10004
	ctx.r5.s64 = ctx.r11.s64 + -10004;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,171
	ctx.r7.s64 = 171;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17DB4;
	sub_82B102F0(ctx, base);
loc_82B17DB4:
	// lwz r11,28(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b17ddc
	if (!ctx.cr6.eq) goto loc_82B17DDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-10044
	ctx.r5.s64 = ctx.r11.s64 + -10044;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,172
	ctx.r7.s64 = 172;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82B17DDC;
	sub_82B102F0(ctx, base);
loc_82B17DDC:
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B17DEC;
	sub_82FA77C0(ctx, base);
	// li r6,10
	ctx.r6.s64 = 10;
	// lwz r5,24(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r4,20(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// bl 0x82b13a40
	ctx.lr = 0x82B17E00;
	sub_82B13A40(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b172c0
	ctx.lr = 0x82B17E10;
	sub_82B172C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82b17e1c
	goto loc_82B17E1C;
loc_82B17E18:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B17E1C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B17E24"))) PPC_WEAK_FUNC(sub_82B17E24);
PPC_FUNC_IMPL(__imp__sub_82B17E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

