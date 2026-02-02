#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82DBBFA0"))) PPC_WEAK_FUNC(sub_82DBBFA0);
PPC_FUNC_IMPL(__imp__sub_82DBBFA0) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// li r8,1
	ctx.r8.s64 = 1;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// not r4,r11
	ctx.r4.u64 = ~ctx.r11.u64;
	// rlwinm r6,r9,30,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r7,r10,29,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// rlwinm r9,r4,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x1;
	// beq cr6,0x82dbbff4
	if (ctx.cr6.eq) goto loc_82DBBFF4;
	// rlwinm r10,r9,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r4,r10,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r4,r4,r11
	ctx.r4.u64 = ctx.r4.u64 & ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82dbbff4
	if (!ctx.cr6.eq) goto loc_82DBBFF4;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82DBBFF4:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82dbc02c
	if (ctx.cr6.eq) goto loc_82DBC02C;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r4,r9,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r4
	ctx.r10.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 & ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82dbc02c
	if (!ctx.cr6.eq) goto loc_82DBC02C;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82DBC02C:
	// cmpwi cr6,r5,2
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r10,r6,4
	ctx.r10.s64 = ctx.r6.s64 + 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r7
	ctx.r9.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r7
	ctx.r10.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r5,r6,r11
	ctx.r5.u64 = ctx.r6.u64 & ctx.r11.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBC068"))) PPC_WEAK_FUNC(sub_82DBC068);
PPC_FUNC_IMPL(__imp__sub_82DBC068) {
	PPC_FUNC_PROLOGUE();
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// clrlwi r8,r4,28
	ctx.r8.u64 = ctx.r4.u32 & 0xF;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// not r7,r11
	ctx.r7.u64 = ~ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r11,r7,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 29) & 0x1;
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// rlwinm r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// bne cr6,0x82dbc0c4
	if (!ctx.cr6.eq) goto loc_82DBC0C4;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r8,1
	ctx.r8.s64 = 1;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r10,r8,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// and r4,r5,r11
	ctx.r4.u64 = ctx.r5.u64 & ctx.r11.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82DBC0C4:
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// beq cr6,0x82dbc0d8
	if (ctx.cr6.eq) goto loc_82DBC0D8;
	// addi r9,r10,4
	ctx.r9.s64 = ctx.r10.s64 + 4;
loc_82DBC0D8:
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r6
	ctx.r11.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r4,r5,r10
	ctx.r4.u64 = ctx.r5.u64 & ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBC108"))) PPC_WEAK_FUNC(sub_82DBC108);
PPC_FUNC_IMPL(__imp__sub_82DBC108) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82DBC110;
	__savegprlr_29(ctx, base);
	// lbz r10,33(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// blt cr6,0x82dbc458
	if (ctx.cr6.lt) goto loc_82DBC458;
	// lbz r11,32(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82dbc134
	if (ctx.cr6.lt) goto loc_82DBC134;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,34(r4)
	PPC_STORE_U8(ctx.r4.u32 + 34, ctx.r11.u8);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82DBC134:
	// srawi r11,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 4;
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82dbc14c
	if (ctx.cr6.eq) goto loc_82DBC14C;
	// li r30,0
	ctx.r30.s64 = 0;
	// b 0x82dbc15c
	goto loc_82DBC15C;
loc_82DBC14C:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82DBC15C:
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// rlwinm r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82dbc174
	if (ctx.cr6.eq) goto loc_82DBC174;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82dbc184
	goto loc_82DBC184;
loc_82DBC174:
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82DBC184:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82dbc41c
	if (!ctx.cr6.gt) goto loc_82DBC41C;
	// lbz r11,33(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82DBC1A4:
	// lbz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bgt cr6,0x82dbc258
	if (ctx.cr6.gt) goto loc_82DBC258;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm r9,r9,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// rlwinm r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq cr6,0x82dbc1fc
	if (ctx.cr6.eq) goto loc_82DBC1FC;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r29,r29,r5
	ctx.r29.u64 = ctx.r29.u64 & ctx.r5.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82dbc1fc
	if (!ctx.cr6.eq) goto loc_82DBC1FC;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82DBC1FC:
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// beq cr6,0x82dbc22c
	if (ctx.cr6.eq) goto loc_82DBC22C;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dbc22c
	if (!ctx.cr6.eq) goto loc_82DBC22C;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82DBC22C:
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// beq cr6,0x82dbc414
	if (ctx.cr6.eq) goto loc_82DBC414;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r7,r5
	ctx.r10.u64 = ctx.r7.u64 & ctx.r5.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// b 0x82dbc40c
	goto loc_82DBC40C;
loc_82DBC258:
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82dbc310
	if (ctx.cr6.gt) goto loc_82DBC310;
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// rlwinm r10,r11,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// not r7,r10
	ctx.r7.u64 = ~ctx.r10.u64;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// rlwinm r9,r9,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1;
	// rlwinm r7,r7,30,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x1;
	// rlwinm r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// beq cr6,0x82dbc2ac
	if (ctx.cr6.eq) goto loc_82DBC2AC;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 & ctx.r6.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82dbc2ac
	if (!ctx.cr6.eq) goto loc_82DBC2AC;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82DBC2AC:
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x82dbc2dc
	if (ctx.cr6.eq) goto loc_82DBC2DC;
	// addi r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 2;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dbc2dc
	if (!ctx.cr6.eq) goto loc_82DBC2DC;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82DBC2DC:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82dbc414
	if (ctx.cr6.eq) goto loc_82DBC414;
	// addi r11,r7,4
	ctx.r11.s64 = ctx.r7.s64 + 4;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 & ctx.r6.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dbc414
	if (!ctx.cr6.eq) goto loc_82DBC414;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
	// b 0x82dbc414
	goto loc_82DBC414;
loc_82DBC310:
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// clrlwi r7,r10,28
	ctx.r7.u64 = ctx.r10.u32 & 0xF;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r10,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r9,r9,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 31) & 0x1;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82dbc358
	if (!ctx.cr6.eq) goto loc_82DBC358;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r9,r6
	ctx.r7.u64 = ctx.r9.u64 & ctx.r6.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// b 0x82dbc388
	goto loc_82DBC388;
loc_82DBC358:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82dbc368
	if (!ctx.cr6.eq) goto loc_82DBC368;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// b 0x82dbc36c
	goto loc_82DBC36C;
loc_82DBC368:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82DBC36C:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r9,r10,r6
	ctx.r9.u64 = ctx.r10.u64 & ctx.r6.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_82DBC388:
	// bne cr6,0x82dbc390
	if (!ctx.cr6.eq) goto loc_82DBC390;
	// add r6,r11,r6
	ctx.r6.u64 = ctx.r11.u64 + ctx.r6.u64;
loc_82DBC390:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// clrlwi r7,r11,28
	ctx.r7.u64 = ctx.r11.u32 & 0xF;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// not r9,r11
	ctx.r9.u64 = ~ctx.r11.u64;
	// not r29,r11
	ctx.r29.u64 = ~ctx.r11.u64;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm r10,r9,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x1;
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// rlwinm r9,r29,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x1;
	// bne cr6,0x82dbc3dc
	if (!ctx.cr6.eq) goto loc_82DBC3DC;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r10
	ctx.r11.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r10.u8 & 0x3F));
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r7,r9,r5
	ctx.r7.u64 = ctx.r9.u64 & ctx.r5.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// b 0x82dbc40c
	goto loc_82DBC40C;
loc_82DBC3DC:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82dbc3ec
	if (!ctx.cr6.eq) goto loc_82DBC3EC;
	// addi r10,r9,2
	ctx.r10.s64 = ctx.r9.s64 + 2;
	// b 0x82dbc3f0
	goto loc_82DBC3F0;
loc_82DBC3EC:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
loc_82DBC3F0:
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r11,r8,r7
	ctx.r11.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r7.u8 & 0x3F));
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// and r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 & ctx.r5.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
loc_82DBC40C:
	// bne cr6,0x82dbc414
	if (!ctx.cr6.eq) goto loc_82DBC414;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82DBC414:
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bdnz 0x82dbc1a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DBC1A4;
loc_82DBC41C:
	// lis r12,85
	ctx.r12.s64 = 5570560;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and r11,r6,r12
	ctx.r11.u64 = ctx.r6.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82dbc448
	if (ctx.cr6.gt) goto loc_82DBC448;
	// lis r12,85
	ctx.r12.s64 = 5570560;
	// ori r12,r12,21845
	ctx.r12.u64 = ctx.r12.u64 | 21845;
	// and r11,r5,r12
	ctx.r11.u64 = ctx.r5.u64 & ctx.r12.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82dbc448
	if (ctx.cr6.gt) goto loc_82DBC448;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82DBC448:
	// extsb r11,r8
	ctx.r11.s64 = ctx.r8.s8;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// stb r9,34(r4)
	PPC_STORE_U8(ctx.r4.u32 + 34, ctx.r9.u8);
loc_82DBC458:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBC45C"))) PPC_WEAK_FUNC(sub_82DBC45C);
PPC_FUNC_IMPL(__imp__sub_82DBC45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBC460"))) PPC_WEAK_FUNC(sub_82DBC460);
PPC_FUNC_IMPL(__imp__sub_82DBC460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// rlwinm r10,r3,31,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 31) & 0x70;
	// addi r11,r11,-14032
	ctx.r11.s64 = ctx.r11.s64 + -14032;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBC474"))) PPC_WEAK_FUNC(sub_82DBC474);
PPC_FUNC_IMPL(__imp__sub_82DBC474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBC478"))) PPC_WEAK_FUNC(sub_82DBC478);
PPC_FUNC_IMPL(__imp__sub_82DBC478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// addi r11,r1,-32
	ctx.r11.s64 = ctx.r1.s64 + -32;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lvx128 v12,r0,r3
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,-32
	ctx.r8.s64 = ctx.r1.s64 + -32;
	// addi r4,r1,-32
	ctx.r4.s64 = ctx.r1.s64 + -32;
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// stfsx f0,r9,r8
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, temp.u32);
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// addi r3,r8,15600
	ctx.r3.s64 = ctx.r8.s64 + 15600;
	// vcmpgtfp v8,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// stfsx f0,r11,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// addi r11,r4,-20544
	ctx.r11.s64 = ctx.r4.s64 + -20544;
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp v9,v13,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// vor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v3,v4,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// vand v1,v8,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// li r8,16
	ctx.r8.s64 = 16;
	// vand v5,v9,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vmsum4fp128 v31,v1,v4
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vmsum4fp128 v2,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32), 0xFF));
	// vctsxs v29,v31,0
	_mm_store_si128((__m128i*)ctx.v29.s32, _mm_vctsxs(_mm_load_ps(ctx.v31.f32)));
	// vctsxs v30,v2,0
	_mm_store_si128((__m128i*)ctx.v30.s32, _mm_vctsxs(_mm_load_ps(ctx.v2.f32)));
	// stvx128 v30,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// stvx128 v29,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,-16(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// not r11,r3
	ctx.r11.u64 = ~ctx.r3.u64;
	// rlwimi r8,r4,4,0,26
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xFFFFFFE0) | (ctx.r8.u64 & 0xFFFFFFFF0000001F);
	// rlwinm r11,r11,4,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xE0;
	// or r9,r8,r5
	ctx.r9.u64 = ctx.r8.u64 | ctx.r5.u64;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stb r9,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r9.u8);
	// stb r10,1(r7)
	PPC_STORE_U8(ctx.r7.u32 + 1, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBC540"))) PPC_WEAK_FUNC(sub_82DBC540);
PPC_FUNC_IMPL(__imp__sub_82DBC540) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stfs f1,28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 28, temp.u32);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// addi r8,r11,15600
	ctx.r8.s64 = ctx.r11.s64 + 15600;
	// vcmpgtfp v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r7,r9,-20544
	ctx.r7.s64 = ctx.r9.s64 + -20544;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// rlwinm r5,r10,4,28,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x8;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vand v9,v12,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v8,v9,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vctsxs v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.s32, _mm_vctsxs(_mm_load_ps(ctx.v8.f32)));
	// stvx128 v7,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,-16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// rlwinm r3,r4,4,24,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xE0;
	// or r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 | ctx.r5.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBC598"))) PPC_WEAK_FUNC(sub_82DBC598);
PPC_FUNC_IMPL(__imp__sub_82DBC598) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfs f13,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbc5b8
	if (!ctx.cr6.gt) goto loc_82DBC5B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,128
	ctx.r3.s64 = 128;
	// b 0x82dbc5c0
	goto loc_82DBC5C0;
loc_82DBC5B8:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,64
	ctx.r3.s64 = 64;
loc_82DBC5C0:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,8(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r9,r10
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbc5dc
	if (!ctx.cr6.gt) goto loc_82DBC5DC;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,32
	ctx.r3.s64 = 32;
loc_82DBC5DC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBC5E4"))) PPC_WEAK_FUNC(sub_82DBC5E4);
PPC_FUNC_IMPL(__imp__sub_82DBC5E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBC5E8"))) PPC_WEAK_FUNC(sub_82DBC5E8);
PPC_FUNC_IMPL(__imp__sub_82DBC5E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82DBC5F0;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d10
	ctx.lr = 0x82DBC5F8;
	__savefpr_22(ctx, base);
	// li r12,-192
	ctx.r12.s64 = -192;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lvx128 v7,r0,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// vspltisw128 v127,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_set1_epi32(int(0x0)));
	// addi r30,r10,-2608
	ctx.r30.s64 = ctx.r10.s64 + -2608;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// addi r28,r3,112
	ctx.r28.s64 = ctx.r3.s64 + 112;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// addi r26,r3,192
	ctx.r26.s64 = ctx.r3.s64 + 192;
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lvx128 v5,r0,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vand v13,v6,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// lvx128 v3,r3,r10
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r3,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vand v12,v3,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v1,r0,r26
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vand v11,v2,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vand v31,v1,v0
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltw v9,v5,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xAA));
	// vmulfp128 v0,v13,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)));
	// vspltw v8,v5,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x55));
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r27,r3,96
	ctx.r27.s64 = ctx.r3.s64 + 96;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r8,-13880
	ctx.r3.s64 = ctx.r8.s64 + -13880;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r8,-13884
	ctx.r7.s64 = ctx.r8.s64 + -13884;
	// lvx128 v30,r0,r27
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// li r9,224
	ctx.r9.s64 = 224;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r10,-21664
	ctx.r29.s64 = ctx.r10.s64 + -21664;
	// vmaddfp v0,v12,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v28,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v126,v29,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// vmaddfp v0,v11,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r29,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v125,v28,0
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vaddfp v27,v0,v30
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v30.f32)));
	// vsubfp v0,v31,v27
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v27.f32)));
	// vcmpgtfp v26,v0,v7
	_mm_store_ps(ctx.v26.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// vand v25,v26,v10
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vcmpequw128. v24,v25,v127
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v24.f32), 0xF);
	// mfocrf r6,2
	ctx.r6.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// rlwinm r3,r5,0,24,24
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbc700
	if (ctx.cr6.eq) goto loc_82DBC700;
loc_82DBC6F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82dbcc5c
	goto loc_82DBCC5C;
loc_82DBC700:
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// li r9,224
	ctx.r9.s64 = 224;
	// addi r8,r10,21904
	ctx.r8.s64 = ctx.r10.s64 + 21904;
	// li r7,208
	ctx.r7.s64 = 208;
	// li r6,224
	ctx.r6.s64 = 224;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r27
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v12,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v6,v11,v8
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrghw v5,v7,v0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmsum3fp128 v4,v13,v8
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// lvx128 v3,r31,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vand v2,v3,v10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r29,r6
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmrghw v31,v4,v6
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v30,v31,v5
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// vaddfp v29,v30,v9
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp v0,v2,v29
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v29.f32)));
	// vcmpgtfp v28,v0,v1
	_mm_store_ps(ctx.v28.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// vand v27,v28,v10
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vcmpequw128. v26,v27,v127
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v26.f32), 0xF);
	// mfocrf r5,2
	ctx.r5.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r3,r5
	ctx.r3.u64 = ~ctx.r5.u64;
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbc6f8
	if (!ctx.cr6.eq) goto loc_82DBC6F8;
	// li r11,240
	ctx.r11.s64 = 240;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82d33760
	ctx.lr = 0x82DBC788;
	sub_82D33760(ctx, base);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lfs f4,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f4.f64 = double(temp.f32);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f8,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f8.f64 = double(temp.f32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f5,176(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	ctx.f5.f64 = double(temp.f32);
	// lfs f9,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f12,f4,f8
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f8.f64));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// fmuls f13,f5,f9
	ctx.f13.f64 = double(float(ctx.f5.f64 * ctx.f9.f64));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v7,v9,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// fmuls f10,f4,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f4.f64 * ctx.f9.f64));
	// lfs f7,0(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfs f3,160(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f3.f64 = double(temp.f32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f11,104(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// lfs f1,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f1.f64 = double(temp.f32);
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// lvx128 v5,r0,r26
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// lfs f2,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f2.f64 = double(temp.f32);
	// vspltw v4,v5,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x55));
	// fmadds f12,f5,f7,f12
	ctx.f12.f64 = double(float(ctx.f5.f64 * ctx.f7.f64 + ctx.f12.f64));
	// lfs f31,180(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	ctx.f31.f64 = double(temp.f32);
	// fmadds f27,f3,f8,f13
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f8.f64 + ctx.f13.f64));
	// vspltw v3,v5,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xAA));
	// lfs f6,100(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// li r10,128
	ctx.r10.s64 = 128;
	// fmadds f26,f3,f7,f10
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f7.f64 + ctx.f10.f64));
	// vmulfp128 v2,v9,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v4.f32)));
	// lfs f29,168(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	ctx.f29.f64 = double(temp.f32);
	// vaddfp v6,v11,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v7.f32)));
	// lfs f30,152(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f30.f64 = double(temp.f32);
	// vmulfp128 v1,v0,v3
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)));
	// lfs f28,184(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	ctx.f28.f64 = double(temp.f32);
	// lfs f0,-25140(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lfs f13,24436(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f12,f1,f11,f12
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f12.f64));
	// lfs f10,5184(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5184);
	ctx.f10.f64 = double(temp.f32);
	// fmadds f27,f2,f11,f27
	ctx.f27.f64 = double(float(ctx.f2.f64 * ctx.f11.f64 + ctx.f27.f64));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// vmulfp128 v8,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// fmadds f26,f31,f11,f26
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f11.f64 + ctx.f26.f64));
	// lvx128 v12,r31,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f25,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f25.f64 = double(temp.f32);
	// vsubfp v31,v2,v1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// lfs f24,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// lfs f23,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f23.f64 = double(temp.f32);
	// fmadds f12,f29,f6,f12
	ctx.f12.f64 = double(float(ctx.f29.f64 * ctx.f6.f64 + ctx.f12.f64));
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fmadds f27,f30,f6,f27
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f6.f64 + ctx.f27.f64));
	// stfs f27,112(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f12,f28,f6,f26
	ctx.f12.f64 = double(float(ctx.f28.f64 * ctx.f6.f64 + ctx.f26.f64));
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// lvx128 v30,r0,r11
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// vand v29,v31,v10
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vsubfp v28,v29,v30
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// fadds f12,f25,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f25.f64 + ctx.f0.f64));
	// fadds f27,f24,f0
	ctx.f27.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// fadds f26,f23,f0
	ctx.f26.f64 = double(float(ctx.f23.f64 + ctx.f0.f64));
	// fsqrts f12,f12
	ctx.f12.f64 = double(float(sqrt(ctx.f12.f64)));
	// fsqrts f27,f27
	ctx.f27.f64 = double(float(sqrt(ctx.f27.f64)));
	// fsqrts f26,f26
	ctx.f26.f64 = double(float(sqrt(ctx.f26.f64)));
	// fdivs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f27,f13,f27
	ctx.f27.f64 = double(float(ctx.f13.f64 / ctx.f27.f64));
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f26,f13,f26
	ctx.f26.f64 = double(float(ctx.f13.f64 / ctx.f26.f64));
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// lvx128 v27,r0,r7
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v27,v28
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v28.f32)));
	// vcmpgtfp v26,v6,v12
	_mm_store_ps(ctx.v26.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v10,r29,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stvx128 v6,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v25,v26,v10
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vcmpequw128. v24,v25,v127
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v24.f32), 0xF);
	// mfocrf r7,2
	ctx.r7.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r6,r7
	ctx.r6.u64 = ~ctx.r7.u64;
	// rlwinm r5,r6,0,24,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82dbc6f8
	if (!ctx.cr6.eq) goto loc_82DBC6F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f12,f25
	ctx.cr6.compare(ctx.f12.f64, ctx.f25.f64);
	// ble cr6,0x82dbc91c
	if (!ctx.cr6.gt) goto loc_82DBC91C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
loc_82DBC91C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f27,f12
	ctx.cr6.compare(ctx.f27.f64, ctx.f12.f64);
	// ble cr6,0x82dbc940
	if (!ctx.cr6.gt) goto loc_82DBC940;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,116(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
loc_82DBC940:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f26,f12
	ctx.cr6.compare(ctx.f26.f64, ctx.f12.f64);
	// ble cr6,0x82dbc964
	if (!ctx.cr6.gt) goto loc_82DBC964;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// stfs f12,120(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
loc_82DBC964:
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// fmuls f27,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = double(float(ctx.f1.f64 * ctx.f8.f64));
	// li r7,256
	ctx.r7.s64 = 256;
	// fmuls f26,f31,f7
	ctx.f26.f64 = double(float(ctx.f31.f64 * ctx.f7.f64));
	// fmuls f25,f1,f7
	ctx.f25.f64 = double(float(ctx.f1.f64 * ctx.f7.f64));
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// vaddfp v11,v11,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f10,140(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v10,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r6,224
	ctx.r6.s64 = 224;
	// fmadds f27,f30,f12,f27
	ctx.f27.f64 = double(float(ctx.f30.f64 * ctx.f12.f64 + ctx.f27.f64));
	// fmadds f26,f29,f12,f26
	ctx.f26.f64 = double(float(ctx.f29.f64 * ctx.f12.f64 + ctx.f26.f64));
	// fmadds f25,f28,f12,f25
	ctx.f25.f64 = double(float(ctx.f28.f64 * ctx.f12.f64 + ctx.f25.f64));
	// stvx128 v11,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f23,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f23.f64 = double(temp.f32);
	// lfs f22,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f22.f64 = double(temp.f32);
	// lfs f24,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f24.f64 = double(temp.f32);
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f27,f31,f9,f27
	ctx.f27.f64 = double(float(ctx.f31.f64 * ctx.f9.f64 + ctx.f27.f64));
	// lvx128 v11,r29,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// fmadds f26,f2,f8,f26
	ctx.f26.f64 = double(float(ctx.f2.f64 * ctx.f8.f64 + ctx.f26.f64));
	// fmadds f25,f2,f9,f25
	ctx.f25.f64 = double(float(ctx.f2.f64 * ctx.f9.f64 + ctx.f25.f64));
	// lvx128 v6,r0,r26
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vspltw v5,v6,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vspltw v4,v6,2
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0x55));
	// fmadds f27,f4,f11,f27
	ctx.f27.f64 = double(float(ctx.f4.f64 * ctx.f11.f64 + ctx.f27.f64));
	// stfs f27,128(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// vmulfp128 v3,v0,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// fmadds f27,f3,f11,f26
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f27.f64 = double(float(ctx.f3.f64 * ctx.f11.f64 + ctx.f26.f64));
	// stfs f27,132(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// fmadds f11,f5,f11,f25
	ctx.f11.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 + ctx.f25.f64));
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// lvx128 v1,r0,r9
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v2,v13,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v4.f32)));
	// fadds f27,f24,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f27.f64 = double(float(ctx.f24.f64 + ctx.f0.f64));
	// vsubfp v31,v3,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v2.f32)));
	// fadds f11,f22,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f22.f64 + ctx.f0.f64));
	// fadds f26,f23,f0
	ctx.f26.f64 = double(float(ctx.f23.f64 + ctx.f0.f64));
	// fsqrts f27,f27
	ctx.f27.f64 = double(float(sqrt(ctx.f27.f64)));
	// vand v30,v31,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsubfp v29,v30,v1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v29.f32, _mm_sub_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v1.f32)));
	// fsqrts f11,f11
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(sqrt(ctx.f11.f64)));
	// fsqrts f26,f26
	ctx.f26.f64 = double(float(sqrt(ctx.f26.f64)));
	// fdivs f11,f13,f11
	ctx.f11.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f11,96(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f27,f13,f27
	ctx.f27.f64 = double(float(ctx.f13.f64 / ctx.f27.f64));
	// stfs f27,100(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f26,f13,f26
	ctx.f26.f64 = double(float(ctx.f13.f64 / ctx.f26.f64));
	// stfs f26,104(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v28,r0,r10
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v28,v29
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v29.f32)));
	// vcmpgtfp v27,v0,v12
	_mm_store_ps(ctx.v27.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v26,v27,v11
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcmpequw128. v25,v26,v127
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v25.f32), 0xF);
	// mfocrf r4,2
	ctx.r4.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r3,r4
	ctx.r3.u64 = ~ctx.r4.u64;
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbc6f8
	if (!ctx.cr6.eq) goto loc_82DBC6F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f25,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f25.f64 = double(temp.f32);
	// fcmpu cr6,f11,f25
	ctx.cr6.compare(ctx.f11.f64, ctx.f25.f64);
	// ble cr6,0x82dbca90
	if (!ctx.cr6.gt) goto loc_82DBCA90;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,128(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82DBCA90:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f27,f11
	ctx.cr6.compare(ctx.f27.f64, ctx.f11.f64);
	// ble cr6,0x82dbcab4
	if (!ctx.cr6.gt) goto loc_82DBCAB4;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,132(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82DBCAB4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f26,f11
	ctx.cr6.compare(ctx.f26.f64, ctx.f11.f64);
	// ble cr6,0x82dbcad8
	if (!ctx.cr6.gt) goto loc_82DBCAD8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,136(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82DBCAD8:
	// vaddfp v11,v7,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// fmuls f11,f29,f7
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f29.f64 * ctx.f7.f64));
	// fmuls f7,f28,f7
	ctx.f7.f64 = double(float(ctx.f28.f64 * ctx.f7.f64));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmuls f29,f29,f8
	ctx.f29.f64 = double(float(ctx.f29.f64 * ctx.f8.f64));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,272
	ctx.r10.s64 = 272;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stfs f10,124(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// li r6,224
	ctx.r6.s64 = 224;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f11,f31,f12,f11
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f12.f64 + ctx.f11.f64));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// fmadds f1,f1,f12,f7
	ctx.f1.f64 = double(float(ctx.f1.f64 * ctx.f12.f64 + ctx.f7.f64));
	// lvx128 v8,r0,r26
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f2,f2,f12,f29
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f12.f64 + ctx.f29.f64));
	// lfs f31,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// vspltw v7,v8,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xAA));
	// lfs f7,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f7.f64 = double(temp.f32);
	// vspltw v6,v8,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f30,f9,f11
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f9.f64 + ctx.f11.f64));
	// stfs f10,108(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// fmadds f10,f28,f9,f2
	ctx.f10.f64 = double(float(ctx.f28.f64 * ctx.f9.f64 + ctx.f2.f64));
	// vmulfp128 v5,v13,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)));
	// fmadds f9,f30,f8,f1
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f30.f64 * ctx.f8.f64 + ctx.f1.f64));
	// vmulfp128 v4,v9,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32)));
	// fadds f1,f31,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(ctx.f31.f64 + ctx.f0.f64));
	// lvx128 v13,r29,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// fmadds f8,f5,f6,f11
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f6.f64 + ctx.f11.f64));
	// stfs f8,120(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmadds f4,f4,f6,f10
	ctx.f4.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f10.f64));
	// stfs f4,112(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmadds f3,f3,f6,f9
	ctx.f3.f64 = double(float(ctx.f3.f64 * ctx.f6.f64 + ctx.f9.f64));
	// stfs f3,116(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// fsqrts f11,f1
	ctx.f11.f64 = double(float(sqrt(ctx.f1.f64)));
	// vsubfp v3,v5,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v4.f32)));
	// vand v1,v3,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v2,r0,r7
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v31,v1,v2
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// fadds f5,f7,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fsqrts f2,f5
	ctx.f2.f64 = double(float(sqrt(ctx.f5.f64)));
	// fsqrts f10,f0
	ctx.f10.f64 = double(float(sqrt(ctx.f0.f64)));
	// fdivs f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f2.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fdivs f0,f13,f11
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f11.f64));
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fdivs f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f10.f64));
	// stfs f13,104(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v30,r0,r8
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v30,v31
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v31.f32)));
	// vcmpgtfp v29,v0,v12
	_mm_store_ps(ctx.v29.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v28,v29,v13
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpequw128. v27,v28,v127
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), _mm_load_si128((__m128i*)ctx.v127.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v27.f32), 0xF);
	// mfocrf r4,2
	ctx.r4.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r3,r4
	ctx.r3.u64 = ~ctx.r4.u64;
	// rlwinm r11,r3,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbc6f8
	if (!ctx.cr6.eq) goto loc_82DBC6F8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82dbcc00
	if (!ctx.cr6.gt) goto loc_82DBCC00;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
loc_82DBCC00:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82dbcc24
	if (!ctx.cr6.gt) goto loc_82DBCC24;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,132(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
loc_82DBCC24:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v125,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v125.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbcc48
	if (!ctx.cr6.gt) goto loc_82DBCC48;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvewx128 v126,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v126.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,136(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
loc_82DBCC48:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// li r10,288
	ctx.r10.s64 = 288;
	// li r3,0
	ctx.r3.s64 = 0;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBCC5C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// li r0,-192
	ctx.r0.s64 = -192;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d5c
	ctx.lr = 0x82DBCC80;
	__restfpr_22(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBCC84"))) PPC_WEAK_FUNC(sub_82DBCC84);
PPC_FUNC_IMPL(__imp__sub_82DBCC84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBCC88"))) PPC_WEAK_FUNC(sub_82DBCC88);
PPC_FUNC_IMPL(__imp__sub_82DBCC88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82DBCC90;
	__savegprlr_29(ctx, base);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lwz r7,60(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// li r9,112
	ctx.r9.s64 = 112;
	// lwz r31,56(r5)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// addi r10,r6,-14032
	ctx.r10.s64 = ctx.r6.s64 + -14032;
	// rlwinm r6,r7,31,25,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x70;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// li r30,16
	ctx.r30.s64 = 16;
	// lvx128 v0,r4,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r31,31,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x70;
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v12,r6,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// vmulfp128 v11,v12,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r11,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r10,28
	ctx.r6.s64 = ctx.r10.s64 + 28;
	// lvx128 v9,r11,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// rlwinm r9,r6,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,-80
	ctx.r6.s64 = ctx.r1.s64 + -80;
	// lvx128 v5,r11,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// clrlwi r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	// lfs f0,21500(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfsx f13,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,-80(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// vspltw v4,v11,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvlx v3,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v10,v11,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltw v8,v11,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// vspltw v2,v3,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0xFF));
	// li r11,96
	ctx.r11.s64 = 96;
	// vmulfp128 v11,v7,v4
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v1,r7,r4
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lfs f0,21496(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21496);
	ctx.f0.f64 = double(temp.f32);
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// lfsx f9,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f10,f13,f13
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lvx128 v31,r4,r11
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// fmuls f13,f9,f0
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// vmulfp128 v12,v6,v31
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v31.f32)));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// rlwinm r11,r31,2,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0x3C;
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// lfs f0,-24084(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24084);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// addi r31,r1,-80
	ctx.r31.s64 = ctx.r1.s64 + -80;
	// addi r30,r1,-64
	ctx.r30.s64 = ctx.r1.s64 + -64;
	// vmaddfp v11,v0,v10,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// fmuls f12,f10,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// vmulfp128 v0,v1,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// fmuls f8,f13,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f13.f64));
	// lis r29,-32250
	ctx.r29.s64 = -2113536000;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v9,v8,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfsx f7,r11,r6
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f7,f13
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// vaddfp v30,v11,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v30.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)));
	// fmuls f6,f0,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmsubs f5,f8,f12,f6
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f12.f64 - ctx.f6.f64));
	// vsubfp v5,v30,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v12.f32)));
	// fabs f11,f5
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.u64 = ctx.f5.u64 & ~0x8000000000000000;
	// vmsum3fp128 v29,v0,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// stvx128 v5,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v29,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// lfsx f4,r11,r30
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// lfs f8,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,-25140(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -25140);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f2,f8,f0
	ctx.f2.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f1,f11,f9
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f9.f64));
	// fmsubs f10,f3,f12,f2
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f12.f64 - ctx.f2.f64));
	// fcmpu cr6,f10,f1
	ctx.cr6.compare(ctx.f10.f64, ctx.f1.f64);
	// ble cr6,0x82dbcf48
	if (!ctx.cr6.gt) goto loc_82DBCF48;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f7,-19680(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19680);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f11,f7
	ctx.f6.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// fcmpu cr6,f10,f6
	ctx.cr6.compare(ctx.f10.f64, ctx.f6.f64);
	// bge cr6,0x82dbcf48
	if (!ctx.cr6.lt) goto loc_82DBCF48;
	// fdivs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f11.f64));
	// fmuls f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f9.f64));
	// fmsubs f0,f11,f0,f8
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f8.f64));
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// ble cr6,0x82dbcf48
	if (!ctx.cr6.gt) goto loc_82DBCF48;
	// fmuls f12,f12,f7
	ctx.f12.f64 = double(float(ctx.f12.f64 * ctx.f7.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82dbcf48
	if (!ctx.cr6.lt) goto loc_82DBCF48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// vxor v13,v13,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r9,r1,-64
	ctx.r9.s64 = ctx.r1.s64 + -64;
	// vpermwi128 v12,v0,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// addi r7,r1,-64
	ctx.r7.s64 = ctx.r1.s64 + -64;
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// addi r6,r1,-64
	ctx.r6.s64 = ctx.r1.s64 + -64;
	// vspltisw v10,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_set1_epi32(int(0x0)));
	// lis r31,-32237
	ctx.r31.s64 = -2112684032;
	// lfs f0,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f0,r11,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, temp.u32);
	// addi r9,r31,22016
	ctx.r9.s64 = ctx.r31.s64 + 22016;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v0,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v8,v0,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vmulfp128 v7,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// addi r7,r1,-80
	ctx.r7.s64 = ctx.r1.s64 + -80;
	// lfsx f12,r11,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f12.f64));
	// stfsx f11,r11,r10
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// vmulfp128 v4,v8,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v3,v4,v7
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v2,v3,v3
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v3.f32), 0xEF));
	// vrsqrtefp v0,v2
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v2.f32))));
	// vcmpeqfp v8,v10,v2
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v9,v2,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v9,v10,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v1,v13,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v31,v1,v2
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v0,v3,v1
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v1.f32)));
	// stvewx v31,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,180(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 180);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f9.f64 = double(temp.f32);
	// fcmpu cr6,f9,f10
	ctx.cr6.compare(ctx.f9.f64, ctx.f10.f64);
	// blt cr6,0x82dbcf48
	if (ctx.cr6.lt) goto loc_82DBCF48;
	// vmsum3fp128 v13,v0,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// addi r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 + 544;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82dbcf04
	if (!ctx.cr6.lt) goto loc_82DBCF04;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
loc_82DBCF04:
	// vmsum3fp128 v13,v0,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// addi r10,r1,-80
	ctx.r10.s64 = ctx.r1.s64 + -80;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,176(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 176);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82dbcf48
	if (ctx.cr6.gt) goto loc_82DBCF48;
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r9.u8);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vxor v12,v0,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// stfs f0,52(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// stvx128 v12,r5,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82DBCF48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBCF54"))) PPC_WEAK_FUNC(sub_82DBCF54);
PPC_FUNC_IMPL(__imp__sub_82DBCF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBCF58"))) PPC_WEAK_FUNC(sub_82DBCF58);
PPC_FUNC_IMPL(__imp__sub_82DBCF58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82DBCF60;
	__savegprlr_21(ctx, base);
	// stfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f29.u64);
	// stfd f30,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f30.u64);
	// stfd f31,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// li r12,-160
	ctx.r12.s64 = -160;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82dbbe28
	ctx.lr = 0x82DBCF98;
	sub_82DBBE28(ctx, base);
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbd384
	if (!ctx.cr6.eq) goto loc_82DBD384;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// lbz r9,1(r27)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + 1);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stw r10,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vxor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_setzero_si128());
	// lfs f29,5184(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f29.f64 = double(temp.f32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stfs f29,144(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// bl 0x82dbcc88
	ctx.lr = 0x82DBCFF8;
	sub_82DBCC88(ctx, base);
	// lbz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbd384
	if (ctx.cr6.eq) goto loc_82DBD384;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f31,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,21888(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21888);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f30,f0
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f0.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82dbd384
	if (ctx.cr6.lt) goto loc_82DBD384;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r26,32
	ctx.r26.s64 = 32;
	// li r25,48
	ctx.r25.s64 = 48;
	// lvx128 v126,r0,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lvx128 v127,r0,r9
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// bgt cr6,0x82dbd108
	if (ctx.cr6.gt) goto loc_82DBD108;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82dbd060
	if (ctx.cr6.gt) goto loc_82DBD060;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// vspltw128 v0,v126,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// vspltw128 v12,v126,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// vspltw128 v10,v126,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// b 0x82dbd070
	goto loc_82DBD070;
loc_82DBD060:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// vspltw128 v0,v127,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// vspltw128 v10,v127,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
loc_82DBD070:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r21,33
	ctx.r7.s64 = ctx.r21.s64 + 33;
	// vmulfp128 v13,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r11,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r26
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// li r9,0
	ctx.r9.s64 = 0;
	// lvx128 v9,r11,r25
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lbz r11,33(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// beq cr6,0x82dbd108
	if (ctx.cr6.eq) goto loc_82DBD108;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// lfs f0,-25140(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
loc_82DBD0B4:
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bgt cr6,0x82dbd0f0
	if (ctx.cr6.gt) goto loc_82DBD0F0;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lvx128 v13,r5,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f12.f64 = double(temp.f32);
	// fmadds f11,f12,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// ble cr6,0x82dbd384
	if (!ctx.cr6.gt) goto loc_82DBD384;
loc_82DBD0F0:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dbd0b4
	if (ctx.cr6.lt) goto loc_82DBD0B4;
loc_82DBD108:
	// lbz r11,33(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 33);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82dbd384
	if (!ctx.cr6.lt) goto loc_82DBD384;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r22,r31,4
	ctx.r22.s64 = ctx.r31.s64 + 4;
	// bl 0x82dbbeb8
	ctx.lr = 0x82DBD12C;
	sub_82DBBEB8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82dbd384
	if (ctx.cr6.lt) goto loc_82DBD384;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r24,r31,16
	ctx.r24.s64 = ctx.r31.s64 + 16;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bgt cr6,0x82dbd1c4
	if (ctx.cr6.gt) goto loc_82DBD1C4;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// vspltw128 v11,v126,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// vspltw128 v10,v126,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// vspltw128 v0,v126,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// rotlwi r7,r10,4
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lvlx v9,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v12,r6,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r6,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r6,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r6
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v6,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v5,v0,v7
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v5,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v4,r7,r5
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v3,v4,v8
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v3,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbd2b8
	goto loc_82DBD2B8;
loc_82DBD1C4:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82dbd244
	if (ctx.cr6.gt) goto loc_82DBD244;
	// lhz r11,2(r27)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lbz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// vspltw128 v13,v127,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// stw r11,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r11.u32);
	// vspltw128 v0,v127,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r7,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r7,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r7,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lvx128 v5,r6,r5
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbd2b8
	goto loc_82DBD2B8;
loc_82DBD244:
	// lhz r10,2(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 2);
	// vspltw128 v9,v127,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v10,v127,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// vspltw128 v13,v127,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stw r10,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r10.u32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v0,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v5,r7,r25
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v6,v9
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v8,r7,r28
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmaddfp v10,v8,v10,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v11,r7,r26
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v11,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v4,v13,v5
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v10,r6,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r6,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v3,v7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBD2B8:
	// stfs f31,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lbz r10,33(r21)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r21.u32 + 33);
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
	// addi r29,r9,32
	ctx.r29.s64 = ctx.r9.s64 + 32;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82dbd2fc
	if (!ctx.cr6.gt) goto loc_82DBD2FC;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,-32
	ctx.r8.s64 = -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v13,r6,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82dbd33c
	if (!ctx.cr6.gt) goto loc_82DBD33C;
loc_82DBD2FC:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DBD324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// bne cr6,0x82dbd34c
	if (!ctx.cr6.eq) goto loc_82DBD34C;
loc_82DBD33C:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBD348;
	sub_82DBBF38(ctx, base);
	// b 0x82dbd384
	goto loc_82DBD384;
loc_82DBD34C:
	// lwz r9,0(r24)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// sth r7,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r7.u16);
	// lhz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lbz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bgt cr6,0x82dbd384
	if (ctx.cr6.gt) goto loc_82DBD384;
	// lbz r11,32(r21)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,32(r21)
	PPC_STORE_U8(ctx.r21.u32 + 32, ctx.r11.u8);
loc_82DBD384:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-160
	ctx.r0.s64 = -160;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f29,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f30,-112(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// lfd f31,-104(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBD3A8"))) PPC_WEAK_FUNC(sub_82DBD3A8);
PPC_FUNC_IMPL(__imp__sub_82DBD3A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82DBD3B0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// vspltisw v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x0)));
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stfsx f0,r8,r7
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stvx128 v12,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r7,r9,15600
	ctx.r7.s64 = ctx.r9.s64 + 15600;
	// stfsx f0,r3,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, temp.u32);
	// addi r5,r8,-20544
	ctx.r5.s64 = ctx.r8.s64 + -20544;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp v9,v13,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpgtfp v8,v13,v11
	_mm_store_ps(ctx.v8.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// lvx128 v4,r0,r5
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor v3,v4,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r9,16
	ctx.r9.s64 = 16;
	// vand v5,v9,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// sth r8,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r8.u16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// vmsum4fp128 v2,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32), 0xFF));
	// vand v1,v8,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum4fp128 v31,v1,v4
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v4.f32), 0xFF));
	// vctsxs v30,v2,0
	_mm_store_si128((__m128i*)ctx.v30.s32, _mm_vctsxs(_mm_load_ps(ctx.v2.f32)));
	// vctsxs v29,v31,0
	_mm_store_si128((__m128i*)ctx.v29.s32, _mm_vctsxs(_mm_load_ps(ctx.v31.f32)));
	// stvx128 v30,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// rlwimi r9,r7,4,0,26
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r7.u32, 4) & 0xFFFFFFE0) | (ctx.r9.u64 & 0xFFFFFFFF0000001F);
	// stvx128 v29,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// rlwinm r11,r10,4,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xE0;
	// or r7,r9,r28
	ctx.r7.u64 = ctx.r9.u64 | ctx.r28.u64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// stb r7,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r7.u8);
	// stb r8,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r8.u8);
	// bl 0x82dbcf58
	ctx.lr = 0x82DBD4AC;
	sub_82DBCF58(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82dbd4bc
	if (!ctx.cr6.eq) goto loc_82DBD4BC;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82dbd4cc
	goto loc_82DBD4CC;
loc_82DBD4BC:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82DBD4CC:
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// slw r28,r26,r11
	ctx.r28.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r11.u8 & 0x3F));
	// bne cr6,0x82dbd4e8
	if (!ctx.cr6.eq) goto loc_82DBD4E8;
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82dbd4f8
	goto loc_82DBD4F8;
loc_82DBD4E8:
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
loc_82DBD4F8:
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// xor r9,r10,r28
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r9,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r9.u8);
	// bl 0x82dbcf58
	ctx.lr = 0x82DBD518;
	sub_82DBCF58(ctx, base);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// slw r6,r26,r7
	ctx.r6.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r7.u8 & 0x3F));
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// xor r9,r6,r10
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r10.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r9,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r9.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbcf58
	ctx.lr = 0x82DBD540;
	sub_82DBCF58(ctx, base);
	// lbz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// xor r11,r6,r28
	ctx.r11.u64 = ctx.r6.u64 ^ ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82dbcf58
	ctx.lr = 0x82DBD560;
	sub_82DBCF58(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBD56C"))) PPC_WEAK_FUNC(sub_82DBD56C);
PPC_FUNC_IMPL(__imp__sub_82DBD56C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBD570"))) PPC_WEAK_FUNC(sub_82DBD570);
PPC_FUNC_IMPL(__imp__sub_82DBD570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82DBD578;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d20
	ctx.lr = 0x82DBD580;
	__savefpr_26(ctx, base);
	// stwu r1,-544(r1)
	ea = -544 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r11,8
	ctx.r11.s64 = 8;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r18,r10,-27104
	ctx.r18.s64 = ctx.r10.s64 + -27104;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// addi r20,r9,5184
	ctx.r20.s64 = ctx.r9.s64 + 5184;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// lfs f28,0(r18)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f30,0(r20)
	temp.u32 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lis r8,-31960
	ctx.r8.s64 = -2094530560;
	// addi r19,r11,-19512
	ctx.r19.s64 = ctx.r11.s64 + -19512;
	// lfs f26,28852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28852);
	ctx.f26.f64 = double(temp.f32);
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lfs f31,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,5180(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5180);
	ctx.f29.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lfs f27,0(r19)
	temp.u32 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	ctx.f27.f64 = double(temp.f32);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lis r4,-32246
	ctx.r4.s64 = -2113273856;
	// addi r3,r8,-21408
	ctx.r3.s64 = ctx.r8.s64 + -21408;
	// addi r16,r7,-2608
	ctx.r16.s64 = ctx.r7.s64 + -2608;
	// li r25,16
	ctx.r25.s64 = 16;
	// stw r3,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r3.u32);
	// stw r16,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r16.u32);
	// li r24,32
	ctx.r24.s64 = 32;
	// li r21,48
	ctx.r21.s64 = 48;
	// addi r28,r11,-20544
	ctx.r28.s64 = ctx.r11.s64 + -20544;
	// addi r27,r10,15600
	ctx.r27.s64 = ctx.r10.s64 + 15600;
	// addi r23,r9,21904
	ctx.r23.s64 = ctx.r9.s64 + 21904;
	// addi r22,r6,544
	ctx.r22.s64 = ctx.r6.s64 + 544;
	// addi r17,r4,544
	ctx.r17.s64 = ctx.r4.s64 + 544;
loc_82DBD624:
	// lfs f0,224(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	ctx.f0.f64 = double(temp.f32);
	// li r15,112
	ctx.r15.s64 = 112;
	// li r14,96
	ctx.r14.s64 = 96;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// addi r11,r31,224
	ctx.r11.s64 = ctx.r31.s64 + 224;
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// li r29,0
	ctx.r29.s64 = 0;
	// ble cr6,0x82dbd644
	if (!ctx.cr6.gt) goto loc_82DBD644;
loc_82DBD644:
	// lfs f13,228(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,228
	ctx.r11.s64 = ctx.r31.s64 + 228;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd65c
	if (!ctx.cr6.gt) goto loc_82DBD65C;
	// li r29,1
	ctx.r29.s64 = 1;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD65C:
	// lfs f13,232(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 232);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,232
	ctx.r11.s64 = ctx.r31.s64 + 232;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd674
	if (!ctx.cr6.gt) goto loc_82DBD674;
	// li r29,2
	ctx.r29.s64 = 2;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD674:
	// lfs f13,240(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,240
	ctx.r11.s64 = ctx.r31.s64 + 240;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd68c
	if (!ctx.cr6.gt) goto loc_82DBD68C;
	// li r29,4
	ctx.r29.s64 = 4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD68C:
	// lfs f13,244(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,244
	ctx.r11.s64 = ctx.r31.s64 + 244;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd6a4
	if (!ctx.cr6.gt) goto loc_82DBD6A4;
	// li r29,5
	ctx.r29.s64 = 5;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD6A4:
	// lfs f13,248(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 248);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,248
	ctx.r11.s64 = ctx.r31.s64 + 248;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd6bc
	if (!ctx.cr6.gt) goto loc_82DBD6BC;
	// li r29,6
	ctx.r29.s64 = 6;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD6BC:
	// lfs f13,256(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,256
	ctx.r11.s64 = ctx.r31.s64 + 256;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd6d4
	if (!ctx.cr6.gt) goto loc_82DBD6D4;
	// li r29,8
	ctx.r29.s64 = 8;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD6D4:
	// lfs f13,260(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,260
	ctx.r11.s64 = ctx.r31.s64 + 260;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd6ec
	if (!ctx.cr6.gt) goto loc_82DBD6EC;
	// li r29,9
	ctx.r29.s64 = 9;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD6EC:
	// lfs f13,264(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 264);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,264
	ctx.r11.s64 = ctx.r31.s64 + 264;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd704
	if (!ctx.cr6.gt) goto loc_82DBD704;
	// li r29,10
	ctx.r29.s64 = 10;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD704:
	// lfs f13,272(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,272
	ctx.r11.s64 = ctx.r31.s64 + 272;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd71c
	if (!ctx.cr6.gt) goto loc_82DBD71C;
	// li r29,12
	ctx.r29.s64 = 12;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD71C:
	// lfs f13,276(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,276
	ctx.r11.s64 = ctx.r31.s64 + 276;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd734
	if (!ctx.cr6.gt) goto loc_82DBD734;
	// li r29,13
	ctx.r29.s64 = 13;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD734:
	// lfs f13,280(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,280
	ctx.r11.s64 = ctx.r31.s64 + 280;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd74c
	if (!ctx.cr6.gt) goto loc_82DBD74C;
	// li r29,14
	ctx.r29.s64 = 14;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD74C:
	// lfs f13,288(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,288
	ctx.r11.s64 = ctx.r31.s64 + 288;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd764
	if (!ctx.cr6.gt) goto loc_82DBD764;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD764:
	// lfs f13,292(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 292);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,292
	ctx.r11.s64 = ctx.r31.s64 + 292;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd77c
	if (!ctx.cr6.gt) goto loc_82DBD77C;
	// li r29,17
	ctx.r29.s64 = 17;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82DBD77C:
	// lfs f13,296(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r31,296
	ctx.r11.s64 = ctx.r31.s64 + 296;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbd9c0
	if (!ctx.cr6.gt) goto loc_82DBD9C0;
	// li r29,18
	ctx.r29.s64 = 18;
loc_82DBD790:
	// addi r11,r29,-8
	ctx.r11.s64 = ctx.r29.s64 + -8;
	// vxor v0,v28,v28
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// rlwinm r8,r11,0,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// addi r4,r10,2
	ctx.r4.s64 = ctx.r10.s64 + 2;
	// stw r10,60(r5)
	PPC_STORE_U32(ctx.r5.u32 + 60, ctx.r10.u32);
	// li r6,192
	ctx.r6.s64 = 192;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r9,r11,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r9.u32);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r31,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v12,r11,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// stfsx f31,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, temp.u32);
	// addi r7,r5,60
	ctx.r7.s64 = ctx.r5.s64 + 60;
	// lvx128 v28,r0,r3
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v28,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0x78));
	// vpermwi128 v11,v12,99
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// addi r8,r5,56
	ctx.r8.s64 = ctx.r5.s64 + 56;
	// vpermwi128 v10,v12,135
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v8,v28,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0x9C));
	// vmulfp128 v7,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v6,v8,v10
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vsubfp v0,v6,v7
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmsum3fp128 v5,v0,v13
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v5,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bge cr6,0x82dbd81c
	if (!ctx.cr6.lt) goto loc_82DBD81C;
	// lvx128 v13,r0,r17
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// vxor v0,v0,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
loc_82DBD81C:
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// vor v2,v0,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r16,r1,224
	ctx.r16.s64 = ctx.r1.s64 + 224;
	// vor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r15,r1,256
	ctx.r15.s64 = ctx.r1.s64 + 256;
	// lvx128 v7,r11,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v6,v8,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v5,r11,r24
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v4,v7,v0
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v3,v5,v0
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f31,r4,r3
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r4.u32 + ctx.r3.u32, temp.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// lvx128 v25,r0,r16
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// vcmpgtfp v23,v12,v25
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v23.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v25.f32)));
	// vmrghw v1,v4,v13
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmrghw v31,v6,v3
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vor v30,v9,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vand v21,v23,v10
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r14,r1,320
	ctx.r14.s64 = ctx.r1.s64 + 320;
	// std r31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r31.u64);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// vmrghw v29,v31,v1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// stvx128 v29,r5,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v20,v21,v30
	_mm_store_ps(ctx.v20.f32, _mm_dp_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v30.f32), 0xFF));
	// stvx128 v29,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f31,r11,r6
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, temp.u32);
	// lvx128 v27,r0,r4
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vctsxs v18,v20,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v18.s32, _mm_vctsxs(_mm_load_ps(ctx.v20.f32)));
	// stvx128 v18,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,320(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// rlwimi r31,r4,4,0,26
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r4.u32, 4) & 0xFFFFFFE0) | (ctx.r31.u64 & 0xFFFFFFFF0000001F);
	// vcmpgtfp v26,v12,v27
	_mm_store_ps(ctx.v26.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v27.f32)));
	// vand v24,v26,v11
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vmsum4fp128 v22,v24,v9
	_mm_store_ps(ctx.v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vctsxs v19,v22,0
	_mm_store_si128((__m128i*)ctx.v19.s32, _mm_vctsxs(_mm_load_ps(ctx.v22.f32)));
	// stvx128 v19,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,288(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// not r6,r11
	ctx.r6.u64 = ~ctx.r11.u64;
	// rlwinm r11,r6,4,24,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xE0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// or r10,r31,r9
	ctx.r10.u64 = ctx.r31.u64 | ctx.r9.u64;
	// ld r31,88(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stb r11,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r11.u8);
	// clrlwi r6,r10,24
	ctx.r6.u64 = ctx.r10.u32 & 0xFF;
	// stb r6,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// lbz r4,1(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// stw r4,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r4.u32);
	// lbz r3,33(r26)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r26.u32 + 33);
	// addic. r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82dbd950
	if (ctx.cr0.lt) goto loc_82DBD950;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_82DBD928:
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82dbd944
	if (!ctx.cr6.eq) goto loc_82DBD944;
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbz r7,1(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82dbdf14
	if (ctx.cr6.eq) goto loc_82DBDF14;
loc_82DBD944:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82dbd928
	if (!ctx.cr0.lt) goto loc_82DBD928;
loc_82DBD950:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBD954:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbdf1c
	if (!ctx.cr6.eq) goto loc_82DBDF1C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dbcc88
	ctx.lr = 0x82DBD96C;
	sub_82DBCC88(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbdf00
	if (!ctx.cr6.eq) goto loc_82DBDF00;
	// lwz r16,152(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
loc_82DBD980:
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// clrlwi r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	// addi r8,r11,14
	ctx.r8.s64 = ctx.r11.s64 + 14;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r9,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r9.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stfsx f26,r6,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, temp.u32);
	// bgt 0x82dbd624
	if (ctx.cr0.gt) goto loc_82DBD624;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d6c
	ctx.lr = 0x82DBD9BC;
	__restfpr_26(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82DBD9C0:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bgt cr6,0x82dbdc5c
	if (ctx.cr6.gt) goto loc_82DBDC5C;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r8,r29,48
	ctx.r8.s64 = ctx.r29.s64 + 48;
	// stw r29,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r29.u32);
	// addi r9,r29,8
	ctx.r9.s64 = ctx.r29.s64 + 8;
	// stfs f30,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r5,56
	ctx.r6.s64 = ctx.r5.s64 + 56;
	// lfsx f12,r10,r31
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f30
	ctx.cr6.compare(ctx.f12.f64, ctx.f30.f64);
	// lfsx f13,r4,r11
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r5,16
	ctx.r10.s64 = ctx.r5.s64 + 16;
	// lfsx f11,r8,r11
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	ctx.f11.f64 = double(temp.f32);
	// addi r9,r5,48
	ctx.r9.s64 = ctx.r5.s64 + 48;
	// lfsx f0,r7,r11
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,212(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stfs f11,208(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// stfs f13,216(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 216, temp.u32);
	// bge cr6,0x82dbda34
	if (!ctx.cr6.lt) goto loc_82DBDA34;
	// stfs f29,48(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lvx128 v0,r31,r15
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r15.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbda48
	goto loc_82DBDA48;
loc_82DBDA34:
	// stfs f31,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lvx128 v0,r0,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r15
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r15.u32) & ~0xF), VectorMaskL));
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBDA48:
	// lvlx v0,0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,132
	ctx.r7.s64 = ctx.r1.s64 + 132;
	// lvlx v12,0,r18
	temp.u32 = ctx.r18.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stfs f27,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r15,r1,160
	ctx.r15.s64 = ctx.r1.s64 + 160;
	// vspltw v0,v12,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// addi r8,r31,208
	ctx.r8.s64 = ctx.r31.s64 + 208;
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,208(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// stvx128 v10,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82dbda9c
	if (!ctx.cr6.gt) goto loc_82DBDA9C;
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
loc_82DBDA9C:
	// addi r7,r1,104
	ctx.r7.s64 = ctx.r1.s64 + 104;
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbdac4
	if (!ctx.cr6.gt) goto loc_82DBDAC4;
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// stvewx v0,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,164(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 164, temp.u32);
loc_82DBDAC4:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// stvewx v13,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbdaec
	if (!ctx.cr6.gt) goto loc_82DBDAEC;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stvewx v0,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,168(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 168, temp.u32);
loc_82DBDAEC:
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lvx128 v13,r0,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r15,r1,160
	ctx.r15.s64 = ctx.r1.s64 + 160;
	// lvx128 v9,r0,r27
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lvx128 v8,r0,r8
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v8,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r28
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vaddfp v5,v7,v0
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vand v4,v5,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vxor v3,v10,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// stvx128 v3,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v2,v3,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// vor v29,v3,v3
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v25,r11,r21
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r11,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp v1,v11,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v2.f32)));
	// lvx128 v11,r11,r24
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vspltw v27,v29,0
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// vspltw v12,v29,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xAA));
	// vspltw v10,v29,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0x55));
	// vand v30,v1,v9
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// lvx128 v31,r0,r11
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v26,v30,v6
	_mm_store_ps(ctx.v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vmulfp128 v13,v31,v27
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vctsxs v24,v26,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v24.s32, _mm_vctsxs(_mm_load_ps(ctx.v26.f32)));
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r10,4,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0x8;
	// vaddfp v23,v0,v25
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v25.f32)));
	// stvx128 v24,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// rlwinm r7,r11,4,20,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFE0;
	// or r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stvx128 v23,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// clrlwi r8,r4,24
	ctx.r8.u64 = ctx.r4.u32 & 0xFF;
	// stb r8,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r8.u8);
	// lbz r11,33(r26)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r26.u32 + 33);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82dbdbe8
	if (ctx.cr0.lt) goto loc_82DBDBE8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_82DBDBC0:
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82dbdbdc
	if (!ctx.cr6.eq) goto loc_82DBDBDC;
	// lbz r4,1(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r15,r8,24
	ctx.r15.u64 = ctx.r8.u32 & 0xFF;
	// cmplw cr6,r4,r15
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r15.u32, ctx.xer);
	// beq cr6,0x82dbdc54
	if (ctx.cr6.eq) goto loc_82DBDC54;
loc_82DBDBDC:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82dbdbc0
	if (!ctx.cr0.lt) goto loc_82DBDBC0;
loc_82DBDBE8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBDBEC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbdf1c
	if (!ctx.cr6.eq) goto loc_82DBDF1C;
	// li r11,144
	ctx.r11.s64 = 144;
	// lvx128 v0,r0,r16
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,224
	ctx.r10.s64 = 224;
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltisw v11,-1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v10,r31,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp v9,v10,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v7,v8,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v7.f32), 0xF);
	// bge cr6,0x82dbdef0
	if (!ctx.cr6.lt) goto loc_82DBDEF0;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lfs f0,0(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,24
	ctx.r9.s64 = ctx.r11.s64 + 24;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f11,f13,f0,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64));
	// stfs f11,52(r5)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// b 0x82dbdef4
	goto loc_82DBDEF4;
loc_82DBDC54:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dbdbec
	goto loc_82DBDBEC;
loc_82DBDC5C:
	// cmplwi cr6,r29,6
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 6, ctx.xer);
	// bgt cr6,0x82dbd790
	if (ctx.cr6.gt) goto loc_82DBD790;
	// addi r11,r29,-4
	ctx.r11.s64 = ctx.r29.s64 + -4;
	// stb r29,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r29.u8);
	// addi r4,r5,56
	ctx.r4.s64 = ctx.r5.s64 + 56;
	// addi r8,r11,52
	ctx.r8.s64 = ctx.r11.s64 + 52;
	// addi r7,r11,2
	ctx.r7.s64 = ctx.r11.s64 + 2;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r9,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r9.u32);
	// addi r7,r5,48
	ctx.r7.s64 = ctx.r5.s64 + 48;
	// lfsx f0,r6,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// lvx128 v12,r11,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// bge cr6,0x82dbdcb4
	if (!ctx.cr6.lt) goto loc_82DBDCB4;
	// stfs f29,48(r5)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lvx128 v0,r0,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r14
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r14.u32) & ~0xF), VectorMaskL));
	// vxor v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbdcc0
	goto loc_82DBDCC0;
loc_82DBDCB4:
	// stfs f31,48(r5)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r5.u32 + 48, temp.u32);
	// lvx128 v0,r31,r14
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r14.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBDCC0:
	// lvlx v0,0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvlx v11,0,r19
	temp.u32 = ctx.r19.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stfs f28,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// vspltw v0,v11,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lfs f0,192(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stvx128 v9,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82dbdd14
	if (!ctx.cr6.gt) goto loc_82DBDD14;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,176(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
loc_82DBDD14:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbdd3c
	if (!ctx.cr6.gt) goto loc_82DBDD3C;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// stvewx v0,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,180(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
loc_82DBDD3C:
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbdd64
	if (!ctx.cr6.gt) goto loc_82DBDD64;
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// stvewx v0,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v0.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,184(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 184, temp.u32);
loc_82DBDD64:
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r22
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// lvx128 v10,r0,r5
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,304
	ctx.r10.s64 = ctx.r1.s64 + 304;
	// vmulfp128 v0,v7,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v6,r0,r27
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r8,r5,16
	ctx.r8.s64 = ctx.r5.s64 + 16;
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// vaddfp v4,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// vand v3,v4,v13
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// rlwinm r9,r9,4,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0x8;
	// vxor v2,v10,v3
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vor v31,v2,v2
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// stvx128 v2,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v26,r11,r25
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v25,r0,r11
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r11,r24
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp v30,v11,v31
	_mm_store_ps(ctx.v30.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v31.f32)));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r11,r21
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vsubfp v27,v2,v1
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// vand v29,v30,v6
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vmsum3fp128 v22,v26,v27
	_mm_store_ps(ctx.v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v27.f32), 0xEF));
	// vmsum3fp128 v21,v24,v27
	_mm_store_ps(ctx.v21.f32, _mm_dp_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v27.f32), 0xEF));
	// vmsum3fp128 v19,v25,v27
	_mm_store_ps(ctx.v19.f32, _mm_dp_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v27.f32), 0xEF));
	// vmsum4fp128 v23,v29,v5
	_mm_store_ps(ctx.v23.f32, _mm_dp_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v5.f32), 0xFF));
	// vmrghw v18,v22,v0
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v22.u32)));
	// vmrghw v17,v19,v21
	_mm_store_si128((__m128i*)ctx.v17.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v21.u32), _mm_load_si128((__m128i*)ctx.v19.u32)));
	// vctsxs v20,v23,0
	_mm_store_si128((__m128i*)ctx.v20.s32, _mm_vctsxs(_mm_load_ps(ctx.v23.f32)));
	// vmrghw v16,v17,v18
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v18.u32), _mm_load_si128((__m128i*)ctx.v17.u32)));
	// stvx128 v16,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v20,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v20.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,304(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// rlwinm r11,r6,4,20,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFE0;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// clrlwi r9,r10,24
	ctx.r9.u64 = ctx.r10.u32 & 0xFF;
	// stb r9,1(r30)
	PPC_STORE_U8(ctx.r30.u32 + 1, ctx.r9.u8);
	// lbz r6,33(r26)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + 33);
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82dbde6c
	if (ctx.cr0.lt) goto loc_82DBDE6C;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
loc_82DBDE44:
	// lbz r15,0(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmplw cr6,r15,r6
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82dbde60
	if (!ctx.cr6.eq) goto loc_82DBDE60;
	// lbz r15,1(r10)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// clrlwi r14,r9,24
	ctx.r14.u64 = ctx.r9.u32 & 0xFF;
	// cmplw cr6,r15,r14
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, ctx.r14.u32, ctx.xer);
	// beq cr6,0x82dbdee8
	if (ctx.cr6.eq) goto loc_82DBDEE8;
loc_82DBDE60:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// bge 0x82dbde44
	if (!ctx.cr0.lt) goto loc_82DBDE44;
loc_82DBDE6C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBDE70:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbdf1c
	if (!ctx.cr6.eq) goto loc_82DBDF1C;
	// li r11,160
	ctx.r11.s64 = 160;
	// lvx128 v0,r0,r16
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r10,224
	ctx.r10.s64 = 224;
	// vand v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vspltisw v11,-1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v10,r31,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp v9,v10,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v8,v9,v0
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vcmpequw. v7,v8,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v7.f32), 0xF);
	// bge cr6,0x82dbdef0
	if (!ctx.cr6.lt) goto loc_82DBDEF0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r7,r5
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r5.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f11,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f9,52(r5)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r5.u32 + 52, temp.u32);
	// b 0x82dbdef4
	goto loc_82DBDEF4;
loc_82DBDEE8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dbde70
	goto loc_82DBDE70;
loc_82DBDEF0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DBDEF4:
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dbd980
	if (ctx.cr6.eq) goto loc_82DBD980;
loc_82DBDF00:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d6c
	ctx.lr = 0x82DBDF10;
	__restfpr_26(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82DBDF14:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dbd954
	goto loc_82DBD954;
loc_82DBDF1C:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,544
	ctx.r1.s64 = ctx.r1.s64 + 544;
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d6c
	ctx.lr = 0x82DBDF2C;
	__restfpr_26(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBDF30"))) PPC_WEAK_FUNC(sub_82DBDF30);
PPC_FUNC_IMPL(__imp__sub_82DBDF30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82DBDF38;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
	// bl 0x82dbbe80
	ctx.lr = 0x82DBDF58;
	sub_82DBBE80(ctx, base);
	// li r9,80
	ctx.r9.s64 = 80;
	// addi r11,r31,192
	ctx.r11.s64 = ctx.r31.s64 + 192;
	// sth r28,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r28.u16);
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// li r29,32
	ctx.r29.s64 = 32;
	// li r30,16
	ctx.r30.s64 = 16;
	// lvx128 v0,r31,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,208
	ctx.r7.s64 = 208;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r8,21904
	ctx.r6.s64 = ctx.r8.s64 + 21904;
	// lvx128 v12,r10,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v13,r10,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v13,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v9,v10,v11
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v12,v11
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmrghw v5,v7,v0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v6,v9,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v4,v6,v5
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// stvx128 v4,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82dbc5e8
	ctx.lr = 0x82DBDFC0;
	sub_82DBC5E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbe1b4
	if (!ctx.cr6.eq) goto loc_82DBE1B4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbd570
	ctx.lr = 0x82DBDFDC;
	sub_82DBD570(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82dbe1b0
	if (!ctx.cr6.eq) goto loc_82DBE1B0;
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// li r9,1
	ctx.r9.s64 = 1;
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// stb r9,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r9.u8);
	// bgt cr6,0x82dbe070
	if (ctx.cr6.gt) goto loc_82DBE070;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,20(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// rlwinm r6,r10,4,20,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFF0;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// lfs f0,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v12,r9,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvlx v6,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v5,v6,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// lvx128 v8,r6,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r9,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v8,v5
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32)));
	// lvx128 v7,r9,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v4,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v0,v0,v7
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// b 0x82dbe168
	goto loc_82DBE168;
loc_82DBE070:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82dbe0f4
	if (ctx.cr6.gt) goto loc_82DBE0F4;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r11,-4
	ctx.r5.s64 = ctx.r11.s64 + -4;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r4,48
	ctx.r4.s64 = 48;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r5,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v11,r8,r30
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vspltw v8,v9,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v12,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v7,r3,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v7,v8
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v5,r8,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// vmaddfp v12,v11,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v13,r8,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v0,v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)));
	// b 0x82dbe168
	goto loc_82DBE168;
loc_82DBE0F4:
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// li r7,48
	ctx.r7.s64 = 48;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v9,r0,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v13,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vor v4,v9,v9
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v5,r9,r30
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v0,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vor v8,v5,v5
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// vmulfp128 v6,v9,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vspltw v10,v13,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v3,r9,r7
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v4,v11
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v11,r9,r29
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vspltw v0,v13,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vor v13,v11,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmaddfp v7,v5,v7,v6
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v10,v8,v10,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v11,v12,v7
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v13,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v0,v0,v3
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v3.f32)));
loc_82DBE168:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// ble cr6,0x82dbe198
	if (!ctx.cr6.gt) goto loc_82DBE198;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmaddfp v0,v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
loc_82DBE198:
	// stvx128 v0,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stvx128 v12,r26,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,28(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 28, temp.u32);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82DBE1B0:
	// stb r28,0(r27)
	PPC_STORE_U8(ctx.r27.u32 + 0, ctx.r28.u8);
loc_82DBE1B4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBE1C0"))) PPC_WEAK_FUNC(sub_82DBE1C0);
PPC_FUNC_IMPL(__imp__sub_82DBE1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82DBE1C8;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d20
	ctx.lr = 0x82DBE1D0;
	__savefpr_26(ctx, base);
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82fac14c
	ctx.lr = 0x82DBE1D8;
	__savevmx_123(ctx, base);
	// stwu r1,-672(r1)
	ea = -672 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,80
	ctx.r10.s64 = 80;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,192
	ctx.r11.s64 = ctx.r3.s64 + 192;
	// addi r20,r3,32
	ctx.r20.s64 = ctx.r3.s64 + 32;
	// li r21,32
	ctx.r21.s64 = 32;
	// li r27,16
	ctx.r27.s64 = 16;
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvx128 v10,r0,r20
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// addi r8,r10,21904
	ctx.r8.s64 = ctx.r10.s64 + 21904;
	// lvx128 v12,r20,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// li r6,208
	ctx.r6.s64 = 208;
	// lvx128 v11,r20,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lis r5,-32233
	ctx.r5.s64 = -2112421888;
	// vmsum3fp128 v9,v10,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// vmsum3fp128 v7,v12,v13
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lfs f26,24436(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 24436);
	ctx.f26.f64 = double(temp.f32);
	// addi r26,r11,-13904
	ctx.r26.s64 = ctx.r11.s64 + -13904;
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r25,r10,-21408
	ctx.r25.s64 = ctx.r10.s64 + -21408;
	// addi r14,r9,-2608
	ctx.r14.s64 = ctx.r9.s64 + -2608;
	// stw r26,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r26.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r25,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r25.u32);
	// addi r15,r4,33
	ctx.r15.s64 = ctx.r4.s64 + 33;
	// stw r14,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r14.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r22,112
	ctx.r22.s64 = 112;
	// li r19,48
	ctx.r19.s64 = 48;
	// li r16,144
	ctx.r16.s64 = 144;
	// li r24,96
	ctx.r24.s64 = 96;
	// li r23,160
	ctx.r23.s64 = 160;
	// addi r18,r3,16
	ctx.r18.s64 = ctx.r3.s64 + 16;
	// li r29,0
	ctx.r29.s64 = 0;
	// vmrghw v5,v9,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v6,v8,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v4,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lbz r4,33(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 33);
	// lwz r28,0(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82dbe6a4
	if (ctx.cr6.eq) goto loc_82DBE6A4;
	// lfs f30,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r17,-2
	ctx.r30.s64 = ctx.r17.s64 + -2;
	// lfs f31,308(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	ctx.f31.f64 = double(temp.f32);
loc_82DBE2AC:
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bgt cr6,0x82dbe40c
	if (ctx.cr6.gt) goto loc_82DBE40C;
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r9,r26,-128
	ctx.r9.s64 = ctx.r26.s64 + -128;
	// lvx128 v0,r31,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// rlwinm r6,r10,31,1,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFF0;
	// lvx128 v8,r0,r20
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r20,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lvx128 v7,r20,r21
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// li r5,224
	ctx.r5.s64 = 224;
	// lvx128 v6,r20,r19
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// rlwinm r4,r10,28,0,0
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x80000000;
	// lvx128 v10,r0,r14
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// vspltisw v5,-1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v4,r6,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)));
	// lvx128 v3,r31,r16
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// stfs f26,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v9,r25,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// or r9,r4,r10
	ctx.r9.u64 = ctx.r4.u64 | ctx.r10.u64;
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,224(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// vmulfp128 v8,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v11,v11,v12,v8
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v11,v7,v0,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)));
	// vaddfp v11,v11,v6
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v6.f32)));
	// vand v2,v11,v10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// stvx128 v11,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp v1,v3,v2
	_mm_store_ps(ctx.v1.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v2.f32)));
	// vor v31,v1,v9
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vcmpequw. v30,v31,v5
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v30.f32), 0xF);
	// bge cr6,0x82dbe37c
	if (!ctx.cr6.lt) goto loc_82DBE37C;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,1
	ctx.r11.s64 = 1;
	// lfsx f13,r9,r7
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f12,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fmsubs f30,f13,f0,f12
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f12.f64));
	// stfs f30,228(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// b 0x82dbe380
	goto loc_82DBE380;
loc_82DBE37C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBE380:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dbe650
	if (ctx.cr6.eq) goto loc_82DBE650;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lbz r3,2(r30)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// rotlwi r11,r3,4
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 4);
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stw r4,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r4.u32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lvx128 v11,r10,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r10,r21
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v7,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v11,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v8,r10,r19
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v10,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v6,v0,v8
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v6,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v5,r11,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r7,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f30,28(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// b 0x82dbe698
	goto loc_82DBE698;
loc_82DBE40C:
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bgt cr6,0x82dbe588
	if (ctx.cr6.gt) goto loc_82DBE588;
	// lbz r10,3(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r9,r26,-128
	ctx.r9.s64 = ctx.r26.s64 + -128;
	// lvx128 v0,r31,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// li r7,224
	ctx.r7.s64 = 224;
	// rlwinm r6,r10,31,1,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFF0;
	// lvx128 v12,r20,r19
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r20
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// rlwinm r5,r10,28,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x80000000;
	// lvx128 v9,r20,r27
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// lvx128 v8,r20,r21
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltisw v7,-1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v6,r6,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v0,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)));
	// lvx128 v4,r31,r23
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// stfs f26,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lvx128 v11,r25,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// or r9,r5,r10
	ctx.r9.u64 = ctx.r5.u64 | ctx.r10.u64;
	// vsubfp v5,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// lvx128 v12,r0,r14
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// stfs f0,304(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 304, temp.u32);
	// vmsum3fp128 v3,v9,v5
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vmsum3fp128 v2,v8,v5
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vmsum3fp128 v1,v10,v5
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vmrghw v31,v3,v13
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v30,v1,v2
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmrghw v13,v30,v31
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vand v29,v13,v12
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp v28,v4,v29
	_mm_store_ps(ctx.v28.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v29.f32)));
	// vor v27,v28,v11
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vcmpequw. v26,v27,v7
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v26.f32), 0xF);
	// bge cr6,0x82dbe4e8
	if (!ctx.cr6.lt) goto loc_82DBE4E8;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r11,28
	ctx.r7.s64 = ctx.r11.s64 + 28;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r10
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfsx f11,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f11.f64 = double(temp.f32);
	// fneg f10,f12
	ctx.f10.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fsubs f31,f10,f11
	ctx.f31.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// stfs f31,308(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 308, temp.u32);
	// b 0x82dbe4ec
	goto loc_82DBE4EC;
loc_82DBE4E8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBE4EC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dbe650
	if (ctx.cr6.eq) goto loc_82DBE650;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// fneg f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvlx v11,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// addi r6,r11,48
	ctx.r6.s64 = ctx.r11.s64 + 48;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// stw r6,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r6.u32);
	// lbz r11,2(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// lhz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r3,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r3.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v11,r10,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r10,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v0,r10,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lvx128 v5,r11,r9
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r7,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,28(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// b 0x82dbe698
	goto loc_82DBE698;
loc_82DBE588:
	// lbz r9,3(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r9.u32);
	// bl 0x82dbcc88
	ctx.lr = 0x82DBE5A4;
	sub_82DBCC88(ctx, base);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82dbe650
	if (ctx.cr6.eq) goto loc_82DBE650;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lfs f0,372(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r5,r11,48
	ctx.r5.s64 = ctx.r11.s64 + 48;
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// stw r5,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r5.u32);
	// vspltw v9,v13,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v8,v13,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v7,v13,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lhzu r4,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r4.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v0,r3,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r3,r19
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v6,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v11,r3,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v4,v0,v5
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v12,r11,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v3,v7
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v0,r11,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v9,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r6,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,28(r6)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 28, temp.u32);
	// b 0x82dbe698
	goto loc_82DBE698;
loc_82DBE650:
	// lbz r10,2(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// bgt cr6,0x82dbe668
	if (ctx.cr6.gt) goto loc_82DBE668;
	// lbz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,32(r17)
	PPC_STORE_U8(ctx.r17.u32 + 32, ctx.r11.u8);
loc_82DBE668:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lhz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DBE688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBE694;
	sub_82DBBF38(ctx, base);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
loc_82DBE698:
	// lbz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbe2ac
	if (ctx.cr6.lt) goto loc_82DBE2AC;
loc_82DBE6A4:
	// lbz r10,0(r15)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r24,r17,35
	ctx.r24.s64 = ctx.r17.s64 + 35;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// addi r23,r11,-14096
	ctx.r23.s64 = ctx.r11.s64 + -14096;
	// bge cr6,0x82dbe6cc
	if (!ctx.cr6.lt) goto loc_82DBE6CC;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r10,35(r17)
	PPC_STORE_U8(ctx.r17.u32 + 35, ctx.r10.u8);
	// b 0x82dbe81c
	goto loc_82DBE81C;
loc_82DBE6CC:
	// lbz r11,35(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 35);
	// lvx128 v13,r20,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbe730
	if (!ctx.cr6.eq) goto loc_82DBE730;
	// addi r11,r17,48
	ctx.r11.s64 = ctx.r17.s64 + 48;
	// lvx128 v0,r0,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r20,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v13,v11
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// stb r8,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r8.u8);
	// vmsum3fp128 v8,v12,v11
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmrghw v7,v9,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v6,v10,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v5,v6,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// stvx128 v5,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x830b17e8
	ctx.lr = 0x82DBE724;
	sub_830B17E8(ctx, base);
	// stw r3,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dbe81c
	goto loc_82DBE81C;
loc_82DBE730:
	// lwz r9,36(r17)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r17.u32 + 36);
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lvx128 v9,r0,r20
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r9,8,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// lvx128 v11,r20,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r9,16,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFF;
	// lvx128 v8,r17,r19
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r17.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r5,r10,-128
	ctx.r5.s64 = ctx.r10.s64 + -128;
	// lfs f0,-13888(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -13888);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r11,-128
	ctx.r6.s64 = ctx.r11.s64 + -128;
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// extsw r3,r6
	ctx.r3.s64 = ctx.r6.s32;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r10,r9,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// addi r6,r10,-128
	ctx.r6.s64 = ctx.r10.s64 + -128;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// extsw r4,r6
	ctx.r4.s64 = ctx.r6.s32;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f8,88(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f6,f8
	ctx.f6.f64 = double(ctx.f8.s64);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r4,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r4.u64);
	// frsp f2,f6
	ctx.f2.f64 = double(float(ctx.f6.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// fcfid f5,f13
	ctx.f5.f64 = double(ctx.f13.s64);
	// frsp f3,f7
	ctx.f3.f64 = double(float(ctx.f7.f64));
	// frsp f1,f5
	ctx.f1.f64 = double(float(ctx.f5.f64));
	// lfd f12,112(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fmuls f12,f2,f0
	ctx.f12.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// stfs f12,112(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// fmuls f13,f3,f0
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f13,120(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// fmuls f11,f1,f0
	ctx.f11.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f11,124(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// fmuls f4,f9,f0
	ctx.f4.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// stfs f4,116(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v7,v0,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v9,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v6,v8,v0
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v6,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,0(r23)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// blt cr6,0x82dbe81c
	if (ctx.cr6.lt) goto loc_82DBE81C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBE81C:
	// extsb r30,r11
	ctx.r30.s64 = ctx.r11.s8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82dbe834
	if (!ctx.cr6.eq) goto loc_82DBE834;
	// lbz r11,34(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 34);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dbfb24
	if (!ctx.cr6.eq) goto loc_82DBFB24;
loc_82DBE834:
	// lbz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r15.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbe910
	if (ctx.cr6.eq) goto loc_82DBE910;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lfs f0,28(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// blt cr6,0x82dbe8b0
	if (ctx.cr6.lt) goto loc_82DBE8B0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -4;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r9,r8,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,76
	ctx.r9.s64 = ctx.r9.s64 + 76;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82DBE87C:
	// lfs f12,-48(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -48);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// lfs f10,-96(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -96);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,-144(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -144);
	ctx.f9.f64 = double(temp.f32);
	// lfsu f13,-192(r9)
	ea = -192 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fsel f8,f11,f12,f0
	ctx.f8.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fsubs f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f10.f64));
	// fsel f6,f7,f10,f8
	ctx.f6.f64 = ctx.f7.f64 >= 0.0 ? ctx.f10.f64 : ctx.f8.f64;
	// fsubs f5,f6,f9
	ctx.f5.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsel f4,f5,f9,f6
	ctx.f4.f64 = ctx.f5.f64 >= 0.0 ? ctx.f9.f64 : ctx.f6.f64;
	// fsubs f3,f4,f13
	ctx.f3.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fsel f0,f3,f13,f4
	ctx.f0.f64 = ctx.f3.f64 >= 0.0 ? ctx.f13.f64 : ctx.f4.f64;
	// bdnz 0x82dbe87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DBE87C;
loc_82DBE8B0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82dbe8e0
	if (!ctx.cr6.gt) goto loc_82DBE8E0;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,76
	ctx.r11.s64 = ctx.r11.s64 + 76;
loc_82DBE8D0:
	// lfsu f13,-48(r11)
	ctx.fpscr.disableFlushMode();
	ea = -48 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fsel f0,f12,f13,f0
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f13.f64 : ctx.f0.f64;
	// bdnz 0x82dbe8d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DBE8D0;
loc_82DBE8E0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f12,128(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lfs f13,-27108(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27108);
	ctx.f13.f64 = double(temp.f32);
	// fnmsubs f11,f12,f13,f0
	ctx.f11.f64 = double(float(-(ctx.f12.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbe914
	goto loc_82DBE914;
loc_82DBE910:
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
loc_82DBE914:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbc5e8
	ctx.lr = 0x82DBE91C;
	sub_82DBC5E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82dbfb24
	if (!ctx.cr6.eq) goto loc_82DBFB24;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// li r15,0
	ctx.r15.s64 = 0;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// sth r15,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r15.u16);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// vxor v0,v0,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_setzero_si128());
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82dbd570
	ctx.lr = 0x82DBE954;
	sub_82DBD570(ctx, base);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lwz r22,232(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lfs f31,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	ctx.f31.f64 = double(temp.f32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lvx128 v125,r0,r9
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x82dbeb80
	if (ctx.cr6.eq) goto loc_82DBEB80;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82dbeb80
	if (ctx.cr6.eq) goto loc_82DBEB80;
	// addi r11,r3,-2
	ctx.r11.s64 = ctx.r3.s64 + -2;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r26,r17,48
	ctx.r26.s64 = ctx.r17.s64 + 48;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// rlwinm r11,r9,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// bgt cr6,0x82dbe9b0
	if (ctx.cr6.gt) goto loc_82DBE9B0;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r10,2,22,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0x3FC;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stvx128 v13,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfsx f0,r11,r26
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, temp.u32);
	// b 0x82dbe9f8
	goto loc_82DBE9F8;
loc_82DBE9B0:
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// bgt cr6,0x82dbe9e8
	if (ctx.cr6.gt) goto loc_82DBE9E8;
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
	// rlwinm r8,r9,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v12,r8,r31
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvlx v0,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vmulfp128 v11,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v11,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbe9f8
	goto loc_82DBE9F8;
loc_82DBE9E8:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbe9f8
	if (ctx.cr6.eq) goto loc_82DBE9F8;
	// stvx128 v125,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBE9F8:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dbeb80
	if (ctx.cr6.eq) goto loc_82DBEB80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82d2e2a8
	ctx.lr = 0x82DBEA14;
	sub_82D2E2A8(ctx, base);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lbz r10,33(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// addi r16,r17,33
	ctx.r16.s64 = ctx.r17.s64 + 33;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r8,r11,-16
	ctx.r8.s64 = ctx.r11.s64 + -16;
	// divw r7,r8,r19
	ctx.r7.s32 = ctx.r8.s32 / ctx.r19.s32;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// ble cr6,0x82dbeb20
	if (!ctx.cr6.gt) goto loc_82DBEB20;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// rlwinm r28,r11,4,0,27
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
loc_82DBEA58:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r10,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82dbeb00
	if (!ctx.cr6.lt) goto loc_82DBEB00;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r10,16
	ctx.r9.s64 = ctx.r10.s64 + 16;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r9,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r11,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r11.u32);
	// lbz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// bgt cr6,0x82dbeac0
	if (ctx.cr6.gt) goto loc_82DBEAC0;
	// lbz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 32);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stb r11,32(r17)
	PPC_STORE_U8(ctx.r17.u32 + 32, ctx.r11.u8);
loc_82DBEAC0:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lhz r4,2(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 2);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,20(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DBEAE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBEAEC;
	sub_82DBBF38(ctx, base);
	// lwz r8,0(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r7,r11,-48
	ctx.r7.s64 = ctx.r11.s64 + -48;
	// stw r7,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r7.u32);
	// b 0x82dbeb0c
	goto loc_82DBEB0C;
loc_82DBEB00:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,48
	ctx.r28.s64 = ctx.r28.s64 + 48;
loc_82DBEB0C:
	// lbz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dbea58
	if (ctx.cr6.lt) goto loc_82DBEA58;
loc_82DBEB20:
	// lbz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r16.u32 + 0);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82dbeb34
	if (!ctx.cr6.lt) goto loc_82DBEB34;
	// stb r15,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r15.u8);
	// b 0x82dbeb80
	goto loc_82DBEB80;
loc_82DBEB34:
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lvx128 v13,r0,r20
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lvx128 v12,r20,r27
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v10,r20,r21
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v9,v12,v0
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmrghw v7,v9,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v6,v11,v8
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v5,v6,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// stvx128 v5,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x830b17e8
	ctx.lr = 0x82DBEB74;
	sub_830B17E8(ctx, base);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r3,36(r17)
	PPC_STORE_U32(ctx.r17.u32 + 36, ctx.r3.u32);
	// stb r9,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r9.u8);
loc_82DBEB80:
	// cmpwi cr6,r25,2
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 2, ctx.xer);
	// bne cr6,0x82dbfb24
	if (!ctx.cr6.eq) goto loc_82DBFB24;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// lvx128 v126,r0,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v127,r0,r8
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lfs f28,-25140(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25140);
	ctx.f28.f64 = double(temp.f32);
	// bgt cr6,0x82dbec68
	if (ctx.cr6.gt) goto loc_82DBEC68;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82dbebc8
	if (ctx.cr6.gt) goto loc_82DBEBC8;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// vspltw128 v0,v126,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// vspltw128 v12,v126,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// vspltw128 v10,v126,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// b 0x82dbebd8
	goto loc_82DBEBD8;
loc_82DBEBC8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// vspltw128 v0,v127,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// vspltw128 v10,v127,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
loc_82DBEBD8:
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r17,33
	ctx.r7.s64 = ctx.r17.s64 + 33;
	// vmulfp128 v13,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r11,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// lvx128 v9,r11,r19
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lbz r11,33(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// beq cr6,0x82dbec68
	if (ctx.cr6.eq) goto loc_82DBEC68;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
loc_82DBEC14:
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r6,6
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 6, ctx.xer);
	// bgt cr6,0x82dbec50
	if (ctx.cr6.gt) goto loc_82DBEC50;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v13,r5,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f28.f64));
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82dbfb24
	if (!ctx.cr6.gt) goto loc_82DBFB24;
loc_82DBEC50:
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dbec14
	if (ctx.cr6.lt) goto loc_82DBEC14;
loc_82DBEC68:
	// lbz r11,33(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// addi r28,r17,33
	ctx.r28.s64 = ctx.r17.s64 + 33;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82dbfb24
	if (!ctx.cr6.lt) goto loc_82DBFB24;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r16,r31,4
	ctx.r16.s64 = ctx.r31.s64 + 4;
	// bl 0x82dbbeb8
	ctx.lr = 0x82DBEC90;
	sub_82DBBEB8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r8,-32
	ctx.r8.s64 = -32;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lfs f27,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f27.f64 = double(temp.f32);
	// blt cr6,0x82dbeee8
	if (ctx.cr6.lt) goto loc_82DBEEE8;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// lhz r7,86(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bgt cr6,0x82dbed30
	if (ctx.cr6.gt) goto loc_82DBED30;
	// lbz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// fneg f0,f31
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stw r7,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vspltw128 v0,v126,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// rotlwi r4,r10,4
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// vspltw128 v12,v126,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vspltw128 v10,v126,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v7,r3,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r3
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v8,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r3,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v11,r3,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v5,r4,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,28(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// b 0x82dbee18
	goto loc_82DBEE18;
loc_82DBED30:
	// cmpwi cr6,r22,6
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 6, ctx.xer);
	// vspltw128 v0,v127,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// bgt cr6,0x82dbedb0
	if (ctx.cr6.gt) goto loc_82DBEDB0;
	// lbz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// fneg f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f31.u64 ^ 0x8000000000000000;
	// stw r7,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r7.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vspltw128 v10,v127,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// lfs f13,228(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// rlwinm r5,r10,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvlx v13,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v13,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v8,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r4,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r4,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r4,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lvx128 v5,r5,r3
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f13,28(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// b 0x82dbee18
	goto loc_82DBEE18;
loc_82DBEDB0:
	// stw r7,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r7.u32);
	// vspltw128 v11,v127,2
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// vspltw128 v8,v125,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0xFF));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vspltw128 v10,v125,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0xAA));
	// lfs f0,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// vspltw128 v9,v125,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0x55));
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v6,r6,r19
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v7,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v0,r6,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r6,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v13,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v5,v0,v6
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)));
	// stvx128 v5,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v12,r5,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r5
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v4,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v0,r5,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v10,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v12,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,28(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
loc_82DBEE18:
	// lbz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// addi r30,r9,32
	ctx.r30.s64 = ctx.r9.s64 + 32;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82dbee60
	if (!ctx.cr6.gt) goto loc_82DBEE60;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v13,r6,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82dbee60
	if (ctx.cr6.gt) goto loc_82DBEE60;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBEE5C;
	sub_82DBBF38(ctx, base);
	// b 0x82dbfb24
	goto loc_82DBFB24;
loc_82DBEE60:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DBEE88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// bne cr6,0x82dbeeb0
	if (!ctx.cr6.eq) goto loc_82DBEEB0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBEEAC;
	sub_82DBBF38(ctx, base);
	// b 0x82dbeee8
	goto loc_82DBEEE8;
loc_82DBEEB0:
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r7.u16);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lbz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 84);
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82dbeee8
	if (ctx.cr6.gt) goto loc_82DBEEE8;
	// lbz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,32(r17)
	PPC_STORE_U8(ctx.r17.u32 + 32, ctx.r11.u8);
loc_82DBEEE8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// blt cr6,0x82dbfb24
	if (ctx.cr6.lt) goto loc_82DBFB24;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lis r10,-32246
	ctx.r10.s64 = -2113273856;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lvx128 v12,r0,r14
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// addi r6,r10,544
	ctx.r6.s64 = ctx.r10.s64 + 544;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r5,132(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// vor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r9,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r24,r31,20
	ctx.r24.s64 = ctx.r31.s64 + 20;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lvx128 v9,r9,r21
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r9
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r23,r31,24
	ctx.r23.s64 = ctx.r31.s64 + 24;
	// addi r9,r10,-16
	ctx.r9.s64 = ctx.r10.s64 + -16;
	// lvx128 v7,r7,r27
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r7,r21
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// divw r10,r9,r19
	ctx.r10.s32 = ctx.r9.s32 / ctx.r19.s32;
	// lvx128 v5,r0,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r9,32
	ctx.r11.s64 = ctx.r9.s64 + 32;
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v3,v10,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vmsum3fp128 v2,v9,v4
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vmsum3fp128 v1,v8,v4
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vmsum3fp128 v31,v7,v4
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vmsum3fp128 v30,v6,v4
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vmsum3fp128 v29,v5,v4
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// vmrghw v28,v3,v0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v27,v1,v2
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), _mm_load_si128((__m128i*)ctx.v1.u32)));
	// vmrghw v26,v31,v0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// vmrghw v25,v29,v30
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vmrghw v24,v27,v28
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), _mm_load_si128((__m128i*)ctx.v27.u32)));
	// vmrghw v0,v25,v26
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v25.u32)));
	// vxor v13,v24,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vand v23,v0,v11
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vand v22,v13,v12
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// stvx128 v23,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v22,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v22.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbefd8
	if (!ctx.cr6.gt) goto loc_82DBEFD8;
	// mr r10,r15
	ctx.r10.u64 = ctx.r15.u64;
	// li r14,128
	ctx.r14.s64 = 128;
	// b 0x82dbefe0
	goto loc_82DBEFE0;
loc_82DBEFD8:
	// li r10,1
	ctx.r10.s64 = 1;
	// li r14,64
	ctx.r14.s64 = 64;
loc_82DBEFE0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lfsx f13,r11,r7
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbf000
	if (!ctx.cr6.gt) goto loc_82DBF000;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r14,r21
	ctx.r14.u64 = ctx.r21.u64;
loc_82DBF000:
	// lfs f0,148(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82dbf01c
	if (!ctx.cr6.gt) goto loc_82DBF01C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r15,128
	ctx.r15.s64 = 128;
	// b 0x82dbf024
	goto loc_82DBF024;
loc_82DBF01C:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r15,64
	ctx.r15.s64 = 64;
loc_82DBF024:
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,152(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfsx f13,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82dbf044
	if (!ctx.cr6.gt) goto loc_82DBF044;
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r15,r21
	ctx.r15.u64 = ctx.r21.u64;
loc_82DBF044:
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lfsx f13,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-14092(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -14092);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82dbfb24
	if (ctx.cr6.lt) goto loc_82DBFB24;
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lfsx f13,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82dbfb24
	if (ctx.cr6.lt) goto loc_82DBFB24;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// addi r5,r7,15600
	ctx.r5.s64 = ctx.r7.s64 + 15600;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// addi r4,r6,-20544
	ctx.r4.s64 = ctx.r6.s64 + -20544;
	// vcmpgtfp v11,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// vcmpgtfp v10,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// addi r7,r11,52
	ctx.r7.s64 = ctx.r11.s64 + 52;
	// rlwinm r6,r3,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v9,r0,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vor v8,v9,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v7,r0,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vor v6,v7,v7
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// lfsx f0,r6,r31
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfsx f13,r3,r31
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stfs f13,144(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stb r4,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r4.u8);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r3,144(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// vand v5,v11,v9
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// sth r6,82(r1)
	PPC_STORE_U16(ctx.r1.u32 + 82, ctx.r6.u16);
	// vand v4,v10,v8
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// rlwinm r11,r4,4,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0x8;
	// vmsum4fp128 v3,v5,v7
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// rlwinm r10,r3,4,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0x8;
	// vmsum4fp128 v2,v4,v6
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32), 0xFF));
	// vctsxs v1,v3,0
	_mm_store_si128((__m128i*)ctx.v1.s32, _mm_vctsxs(_mm_load_ps(ctx.v3.f32)));
	// vctsxs v31,v2,0
	_mm_store_si128((__m128i*)ctx.v31.s32, _mm_vctsxs(_mm_load_ps(ctx.v2.f32)));
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stvx128 v31,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,144(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// rlwinm r6,r8,4,20,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFE0;
	// rlwinm r5,r7,4,20,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFE0;
	// or r4,r11,r6
	ctx.r4.u64 = ctx.r11.u64 | ctx.r6.u64;
	// or r3,r10,r5
	ctx.r3.u64 = ctx.r10.u64 | ctx.r5.u64;
	// clrlwi r28,r4,24
	ctx.r28.u64 = ctx.r4.u32 & 0xFF;
	// clrlwi r22,r3,24
	ctx.r22.u64 = ctx.r3.u32 & 0xFF;
	// stb r28,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r28.u8);
	// stb r22,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r22.u8);
	// ble cr6,0x82dbf168
	if (!ctx.cr6.gt) goto loc_82DBF168;
	// lbz r10,33(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// addi r11,r17,33
	ctx.r11.s64 = ctx.r17.s64 + 33;
	// addi r11,r9,44
	ctx.r11.s64 = ctx.r9.s64 + 44;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82DBF150:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82dbf160
	if (!ctx.cr6.lt) goto loc_82DBF160;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82DBF160:
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// bdnz 0x82dbf150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DBF150;
loc_82DBF168:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lwz r25,136(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r26,88(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lfs f31,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v123,r0,r11
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82DBF17C:
	// lhz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// and r10,r11,r15
	ctx.r10.u64 = ctx.r11.u64 & ctx.r15.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dbf630
	if (!ctx.cr6.eq) goto loc_82DBF630;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// clrlwi r10,r28,24
	ctx.r10.u64 = ctx.r28.u32 & 0xFF;
	// clrlwi r9,r28,28
	ctx.r9.u64 = ctx.r28.u32 & 0xF;
	// lbz r6,33(r17)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addi r10,r17,33
	ctx.r10.s64 = ctx.r17.s64 + 33;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// addic. r11,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r11.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// clrlwi r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// lbz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// blt 0x82dbf1f4
	if (ctx.cr0.lt) goto loc_82DBF1F4;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r7,r8,24
	ctx.r7.u64 = ctx.r8.u32 & 0xFF;
	// add r9,r9,r17
	ctx.r9.u64 = ctx.r9.u64 + ctx.r17.u64;
loc_82DBF1CC:
	// lbz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82dbf1e8
	if (!ctx.cr6.eq) goto loc_82DBF1E8;
	// lbz r3,1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// clrlwi r4,r10,24
	ctx.r4.u64 = ctx.r10.u32 & 0xFF;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82dbf2e0
	if (ctx.cr6.eq) goto loc_82DBF2E0;
loc_82DBF1E8:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82dbf1cc
	if (!ctx.cr0.lt) goto loc_82DBF1CC;
loc_82DBF1F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82DBF1F8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dbf630
	if (!ctx.cr6.eq) goto loc_82DBF630;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r9,r10,31,25,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x70;
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx128 v11,r0,r20
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// addi r5,r11,-128
	ctx.r5.s64 = ctx.r11.s64 + -128;
	// lvx128 v13,r20,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lvx128 v12,r20,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// clrlwi r11,r8,24
	ctx.r11.u64 = ctx.r8.u32 & 0xFF;
	// lvx128 v10,r20,r19
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lvx128 v9,r31,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r7,144
	ctx.r7.s64 = 144;
	// lvx128 v8,r9,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r5,160(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// vmulfp128 v0,v9,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// stfs f26,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// li r9,224
	ctx.r9.s64 = 224;
	// vspltisw v6,-1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// rlwinm r10,r10,28,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x80000000;
	// lvx128 v5,r31,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lvx128 v4,r5,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v126,v0,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vspltw128 v125,v0,1
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// vspltw128 v124,v0,2
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v11,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v126.f32)));
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 | ctx.r7.u64;
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lfs f30,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f30.f64 = double(temp.f32);
	// stfs f30,224(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// vmaddfp128 v0,v13,v125,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v125.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp128 v0,v12,v124,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v124.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v127,v0,v10
	_mm_store_ps(ctx.v127.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vand128 v3,v127,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp v2,v5,v3
	_mm_store_ps(ctx.v2.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v3.f32)));
	// vor v1,v2,v4
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vcmpequw. v31,v1,v6
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v31.f32), 0xF);
	// bge cr6,0x82dbf2e8
	if (!ctx.cr6.lt) goto loc_82DBF2E8;
	// addi r10,r11,24
	ctx.r10.s64 = ctx.r11.s64 + 24;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfsx f13,r7,r31
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r9,r8
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmsubs f31,f0,f30,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 - ctx.f13.f64));
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// b 0x82dbf2ec
	goto loc_82DBF2EC;
loc_82DBF2E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82dbf1f8
	goto loc_82DBF1F8;
loc_82DBF2E8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DBF2EC:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82dbf630
	if (ctx.cr6.eq) goto loc_82DBF630;
	// fsubs f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82dbf630
	if (ctx.cr6.lt) goto loc_82DBF630;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82dbf3d8
	if (ctx.cr6.gt) goto loc_82DBF3D8;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82dbf33c
	if (ctx.cr6.gt) goto loc_82DBF33C;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v0,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v126.f32)));
	// lvx128 v12,r11,r27
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r11,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r11,r19
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp128 v13,v12,v125,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v125.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddcfp128 v0,v124,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v0,v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// b 0x82dbf36c
	goto loc_82DBF36C;
loc_82DBF33C:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// vspltw128 v13,v127,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// vspltw128 v0,v127,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v11,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r11,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r11,r19
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
loc_82DBF36C:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82dbf3d8
	if (!ctx.cr6.gt) goto loc_82DBF3D8;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
loc_82DBF380:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x82dbf3bc
	if (ctx.cr6.gt) goto loc_82DBF3BC;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v13,r5,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f28.f64));
	// lfs f12,144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82dbf630
	if (!ctx.cr6.gt) goto loc_82DBF630;
loc_82DBF3BC:
	// lbz r7,33(r17)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r17,33
	ctx.r10.s64 = ctx.r17.s64 + 33;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82dbf380
	if (ctx.cr6.lt) goto loc_82DBF380;
loc_82DBF3D8:
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bge cr6,0x82dbf630
	if (!ctx.cr6.lt) goto loc_82DBF630;
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dbbeb8
	ctx.lr = 0x82DBF3F4;
	sub_82DBBEB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82dbf630
	if (ctx.cr6.lt) goto loc_82DBF630;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// lhz r8,102(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bgt cr6,0x82dbf474
	if (ctx.cr6.gt) goto loc_82DBF474;
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// rotlwi r5,r10,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lvlx v0,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lvx128 v10,r0,r4
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v10,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v126.f32)));
	// lvx128 v12,r4,r27
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r4,r21
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r4,r19
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp128 v13,v12,v125,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v125.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddcfp128 v0,v124,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vaddfp v8,v0,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v8,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v7,r5,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v6,v7,v11
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbf554
	goto loc_82DBF554;
loc_82DBF474:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bgt cr6,0x82dbf4ec
	if (ctx.cr6.gt) goto loc_82DBF4EC;
	// lbz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// vspltw128 v13,v127,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// vspltw128 v0,v127,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v8,r0,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r5,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r5,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r5,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lvx128 v5,r6,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbf554
	goto loc_82DBF554;
loc_82DBF4EC:
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// vspltw128 v11,v127,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v10,v127,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vspltw128 v13,v127,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// vspltw128 v7,v123,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), 0xFF));
	// vspltw128 v12,v123,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), 0xAA));
	// vspltw128 v0,v123,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v123.u32), 0x55));
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v6,r0,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v6,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r7,r27
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r7,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r7,r19
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v10,v8,v10,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v11,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v4,v13,v5
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v3,v7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v10,r6,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r6,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBF554:
	// stfs f31,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// lbz r8,33(r17)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// addi r30,r9,32
	ctx.r30.s64 = ctx.r9.s64 + 32;
	// addi r10,r17,33
	ctx.r10.s64 = ctx.r17.s64 + 33;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x82dbf5a8
	if (!ctx.cr6.gt) goto loc_82DBF5A8;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r8,-32
	ctx.r8.s64 = -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v13,r6,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82dbf5a8
	if (ctx.cr6.gt) goto loc_82DBF5A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBF5A4;
	sub_82DBBF38(ctx, base);
	// b 0x82dbf630
	goto loc_82DBF630;
loc_82DBF5A8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DBF5D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// bne cr6,0x82dbf5f8
	if (!ctx.cr6.eq) goto loc_82DBF5F8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBF5F4;
	sub_82DBBF38(ctx, base);
	// b 0x82dbf630
	goto loc_82DBF630;
loc_82DBF5F8:
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r7.u16);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lbz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82dbf630
	if (ctx.cr6.gt) goto loc_82DBF630;
	// lbz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,32(r17)
	PPC_STORE_U8(ctx.r17.u32 + 32, ctx.r11.u8);
loc_82DBF630:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 + 14;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dbf17c
	if (ctx.cr6.lt) goto loc_82DBF17C;
	// rotlwi r28,r11,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r26,80(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lfs f31,228(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	ctx.f31.f64 = double(temp.f32);
	// lvx128 v125,r0,r11
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82DBF658:
	// lhz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// and r10,r11,r14
	ctx.r10.u64 = ctx.r11.u64 & ctx.r14.u64;
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82dbfae4
	if (!ctx.cr6.eq) goto loc_82DBFAE4;
	// clrlwi r10,r22,24
	ctx.r10.u64 = ctx.r22.u32 & 0xFF;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// clrlwi r9,r22,28
	ctx.r9.u64 = ctx.r22.u32 & 0xF;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// or r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 | ctx.r9.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// clrlwi r30,r7,24
	ctx.r30.u64 = ctx.r7.u32 & 0xFF;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stb r30,97(r1)
	PPC_STORE_U8(ctx.r1.u32 + 97, ctx.r30.u8);
	// bl 0x82dbbe28
	ctx.lr = 0x82DBF698;
	sub_82DBBE28(ctx, base);
	// lbz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82dbfae4
	if (!ctx.cr6.eq) goto loc_82DBFAE4;
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// rlwinm r10,r30,31,25,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x70;
	// li r9,96
	ctx.r9.s64 = 96;
	// lvx128 v0,r20,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r8,r11,-128
	ctx.r8.s64 = ctx.r11.s64 + -128;
	// lvx128 v13,r0,r20
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r20,r27
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lvx128 v11,r20,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r20.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// stfs f26,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// rlwinm r5,r30,28,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0x80000000;
	// lvx128 v10,r31,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r4,160
	ctx.r4.s64 = 160;
	// lvx128 v9,r10,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lwz r3,160(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// vmulfp128 v127,v10,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r10,224
	ctx.r10.s64 = 224;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// lvx128 v6,r31,r4
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// vspltisw v5,-1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_set1_epi32(int(0xFFFFFFFF)));
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// lvx128 v4,r3,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v3,v127,v0
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v127,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// or r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 | ctx.r6.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// vmsum3fp128 v2,v12,v3
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v3.f32), 0xEF));
	// vmsum3fp128 v1,v11,v3
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v3.f32), 0xEF));
	// vmsum3fp128 v31,v13,v3
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32), 0xEF));
	// vmrghw v30,v2,v8
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// lfs f30,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f30.f64 = double(temp.f32);
	// vmrghw v29,v31,v1
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// stfs f30,224(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// vmrghw128 v126,v29,v30
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), _mm_load_si128((__m128i*)ctx.v29.u32)));
	// vand128 v28,v126,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v126,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcmpgtfp v27,v6,v28
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v27.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v28.f32)));
	// vor v26,v27,v4
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vcmpequw. v25,v26,v5
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v25.f32), 0xF);
	// bge cr6,0x82dbf794
	if (!ctx.cr6.lt) goto loc_82DBF794;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r10,28
	ctx.r7.s64 = ctx.r10.s64 + 28;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r8,r9
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfsx f12,r6,r31
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	ctx.f12.f64 = double(temp.f32);
	// fneg f11,f13
	ctx.f11.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// fsubs f31,f11,f12
	ctx.f31.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// stfs f31,228(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 228, temp.u32);
	// b 0x82dbf798
	goto loc_82DBF798;
loc_82DBF794:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82DBF798:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82dbfae4
	if (ctx.cr6.eq) goto loc_82DBFAE4;
	// fsubs f0,f29,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 - ctx.f28.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82dbfae4
	if (ctx.cr6.lt) goto loc_82DBFAE4;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82dbf878
	if (ctx.cr6.gt) goto loc_82DBF878;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bgt cr6,0x82dbf7d4
	if (ctx.cr6.gt) goto loc_82DBF7D4;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// vspltw128 v13,v126,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// vspltw128 v12,v126,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// vspltw128 v0,v126,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// b 0x82dbf7e4
	goto loc_82DBF7E4;
loc_82DBF7D4:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// vspltw128 v13,v127,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// vspltw128 v0,v127,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
loc_82DBF7E4:
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lbz r10,33(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// vmulfp128 v11,v11,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r11,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r11,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// li r8,0
	ctx.r8.s64 = 0;
	// lvx128 v9,r11,r19
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r11,r17,33
	ctx.r11.s64 = ctx.r17.s64 + 33;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v0,v0,v9
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// beq cr6,0x82dbf878
	if (ctx.cr6.eq) goto loc_82DBF878;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r9,r17
	ctx.r9.u64 = ctx.r17.u64;
loc_82DBF820:
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// cmplwi cr6,r7,6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 6, ctx.xer);
	// bgt cr6,0x82dbf85c
	if (ctx.cr6.gt) goto loc_82DBF85C;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lvx128 v13,r6,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,176(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f13,f0,f0,f28
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64 + ctx.f28.f64));
	// lfs f12,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82dbfae4
	if (!ctx.cr6.gt) goto loc_82DBFAE4;
loc_82DBF85C:
	// lbz r7,33(r17)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r17,33
	ctx.r10.s64 = ctx.r17.s64 + 33;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82dbf820
	if (ctx.cr6.lt) goto loc_82DBF820;
loc_82DBF878:
	// lbz r10,33(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// addi r11,r17,33
	ctx.r11.s64 = ctx.r17.s64 + 33;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82dbfae4
	if (!ctx.cr6.lt) goto loc_82DBFAE4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82dbbeb8
	ctx.lr = 0x82DBF89C;
	sub_82DBBEB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82dbfae4
	if (ctx.cr6.lt) goto loc_82DBFAE4;
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// lhz r8,98(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bgt cr6,0x82dbf928
	if (ctx.cr6.gt) goto loc_82DBF928;
	// lbz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vspltw128 v13,v126,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xFF));
	// vspltw128 v12,v126,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0xAA));
	// rotlwi r5,r10,4
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r10.u32, 4);
	// vspltw128 v0,v126,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x55));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r4,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r4,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r4,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v5,r5,r3
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbfa08
	goto loc_82DBFA08;
loc_82DBF928:
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// bgt cr6,0x82dbf9a0
	if (ctx.cr6.gt) goto loc_82DBF9A0;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// fneg f0,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// vspltw128 v13,v127,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v12,v127,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// vspltw128 v0,v127,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// rlwinm r6,r10,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r5,0(r24)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvlx v11,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvx128 v8,r0,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r5,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v8,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v10,r5,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r5,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v6,v0,v7
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v6,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lvx128 v5,r6,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v4,v5,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v4,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dbfa08
	goto loc_82DBFA08;
loc_82DBF9A0:
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// vspltw128 v11,v127,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// vspltw128 v10,v127,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// vspltw128 v13,v127,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// vspltw128 v7,v125,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0xFF));
	// vspltw128 v12,v125,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0xAA));
	// vspltw128 v0,v125,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0x55));
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v6,r0,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v6,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v8,r7,r27
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmaddfp v10,v8,v10,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v9.f32)));
	// lvx128 v11,r7,r21
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r7,r19
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v11,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)));
	// vaddfp v4,v13,v5
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32)));
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v3,v7
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v7.f32)));
	// lvx128 v10,r6,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r6,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82DBFA08:
	// stfs f31,28(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 28, temp.u32);
	// addi r30,r9,32
	ctx.r30.s64 = ctx.r9.s64 + 32;
	// addi r10,r17,33
	ctx.r10.s64 = ctx.r17.s64 + 33;
	// lbz r8,33(r17)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r17.u32 + 33);
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// ble cr6,0x82dbfa5c
	if (!ctx.cr6.gt) goto loc_82DBFA5C;
	// lwz r10,0(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// li r8,-32
	ctx.r8.s64 = -32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v13,r6,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,144(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// bgt cr6,0x82dbfa5c
	if (ctx.cr6.gt) goto loc_82DBFA5C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBFA58;
	sub_82DBBF38(ctx, base);
	// b 0x82dbfae4
	goto loc_82DBFAE4;
loc_82DBFA5C:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r7,0(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,0(r16)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DBFA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r9,r3,16
	ctx.r9.u64 = ctx.r3.u32 & 0xFFFF;
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// sth r3,2(r11)
	PPC_STORE_U16(ctx.r11.u32 + 2, ctx.r3.u16);
	// bne cr6,0x82dbfaac
	if (!ctx.cr6.eq) goto loc_82DBFAAC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82dbbf38
	ctx.lr = 0x82DBFAA8;
	sub_82DBBF38(ctx, base);
	// b 0x82dbfae4
	goto loc_82DBFAE4;
loc_82DBFAAC:
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// sth r7,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r7.u16);
	// stw r7,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r7.u32);
	// lbz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// bgt cr6,0x82dbfae4
	if (ctx.cr6.gt) goto loc_82DBFAE4;
	// lbz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stb r11,32(r17)
	PPC_STORE_U8(ctx.r17.u32 + 32, ctx.r11.u8);
loc_82DBFAE4:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r10,r11,14
	ctx.r10.s64 = ctx.r11.s64 + 14;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82dbf658
	if (ctx.cr6.lt) goto loc_82DBF658;
	// lbz r11,32(r17)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r17.u32 + 32);
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82dbfb10
	if (ctx.cr6.lt) goto loc_82DBFB10;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,34(r17)
	PPC_STORE_U8(ctx.r17.u32 + 34, ctx.r11.u8);
	// b 0x82dbfb24
	goto loc_82DBFB24;
loc_82DBFB10:
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82dbc108
	ctx.lr = 0x82DBFB24;
	sub_82DBC108(ctx, base);
loc_82DBFB24:
	// addi r1,r1,672
	ctx.r1.s64 = ctx.r1.s64 + 672;
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82fac3e4
	ctx.lr = 0x82DBFB30;
	__restvmx_123(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d6c
	ctx.lr = 0x82DBFB38;
	__restfpr_26(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBFB3C"))) PPC_WEAK_FUNC(sub_82DBFB3C);
PPC_FUNC_IMPL(__imp__sub_82DBFB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFB40"))) PPC_WEAK_FUNC(sub_82DBFB40);
PPC_FUNC_IMPL(__imp__sub_82DBFB40) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFB44"))) PPC_WEAK_FUNC(sub_82DBFB44);
PPC_FUNC_IMPL(__imp__sub_82DBFB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFB48"))) PPC_WEAK_FUNC(sub_82DBFB48);
PPC_FUNC_IMPL(__imp__sub_82DBFB48) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,-128
	ctx.r3.s64 = ctx.r11.s64 + -128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFB6C"))) PPC_WEAK_FUNC(sub_82DBFB6C);
PPC_FUNC_IMPL(__imp__sub_82DBFB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFB70"))) PPC_WEAK_FUNC(sub_82DBFB70);
PPC_FUNC_IMPL(__imp__sub_82DBFB70) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lhz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// lhz r9,6(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// rotlwi r8,r10,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 3);
	// rotlwi r7,r9,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stwx r3,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// stwx r3,r4,r7
	PPC_STORE_U32(ctx.r4.u32 + ctx.r7.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFB9C"))) PPC_WEAK_FUNC(sub_82DBFB9C);
PPC_FUNC_IMPL(__imp__sub_82DBFB9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFBA0"))) PPC_WEAK_FUNC(sub_82DBFBA0);
PPC_FUNC_IMPL(__imp__sub_82DBFBA0) {
	PPC_FUNC_PROLOGUE();
	// lwz r6,8(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82dbfbf4
	if (!ctx.cr6.gt) goto loc_82DBFBF4;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r7,r6,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
loc_82DBFBB8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82dbfbd0
	if (!ctx.cr6.eq) goto loc_82DBFBD0;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82dbfbd4
	goto loc_82DBFBD4;
loc_82DBFBD0:
	// li r8,512
	ctx.r8.s64 = 512;
loc_82DBFBD4:
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82dbfbe8
	if (ctx.cr6.gt) goto loc_82DBFBE8;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82dbfbfc
	if (ctx.cr6.lt) goto loc_82DBFBFC;
loc_82DBFBE8:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82dbfbb8
	if (ctx.cr6.lt) goto loc_82DBFBB8;
loc_82DBFBF4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DBFBFC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFC04"))) PPC_WEAK_FUNC(sub_82DBFC04);
PPC_FUNC_IMPL(__imp__sub_82DBFC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFC08"))) PPC_WEAK_FUNC(sub_82DBFC08);
PPC_FUNC_IMPL(__imp__sub_82DBFC08) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-972
	ctx.r12.s64 = ctx.r12.s64 + -972;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82DBFC68
		return;
	case 1:
		// ERROR: 0x82DBFCE4
		return;
	case 2:
		// ERROR: 0x82DBFC98
		return;
	case 3:
		// ERROR: 0x82DBFCE4
		return;
	case 4:
		// ERROR: 0x82DBFC68
		return;
	case 5:
		// ERROR: 0x82DBFCE4
		return;
	case 6:
		// ERROR: 0x82DBFCE4
		return;
	case 7:
		// ERROR: 0x82DBFCE4
		return;
	case 8:
		// ERROR: 0x82DBFC68
		return;
	case 9:
		// ERROR: 0x82DBFCE4
		return;
	case 10:
		// ERROR: 0x82DBFC98
		return;
	case 11:
		// ERROR: 0x82DBFCE4
		return;
	case 12:
		// ERROR: 0x82DBFC68
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82DBFC34"))) PPC_WEAK_FUNC(sub_82DBFC34);
PPC_FUNC_IMPL(__imp__sub_82DBFC34) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-920(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -920);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-872(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -872);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-920(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -920);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-920(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -920);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-872(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -872);
	// lwz r22,-796(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -796);
	// lwz r22,-920(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -920);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r11,r11,73
	ctx.r11.s64 = ctx.r11.s64 + 73;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DBFC98"))) PPC_WEAK_FUNC(sub_82DBFC98);
PPC_FUNC_IMPL(__imp__sub_82DBFC98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// lfs f0,5180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,0(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// addi r11,r11,73
	ctx.r11.s64 = ctx.r11.s64 + 73;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r7,r8,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// lwzx r11,r7,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DBFCE4"))) PPC_WEAK_FUNC(sub_82DBFCE4);
PPC_FUNC_IMPL(__imp__sub_82DBFCE4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFCE8"))) PPC_WEAK_FUNC(sub_82DBFCE8);
PPC_FUNC_IMPL(__imp__sub_82DBFCE8) {
	PPC_FUNC_PROLOGUE();
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-748
	ctx.r12.s64 = ctx.r12.s64 + -748;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		// ERROR: 0x82DBFD48
		return;
	case 1:
		// ERROR: 0x82DBFDC8
		return;
	case 2:
		// ERROR: 0x82DBFD78
		return;
	case 3:
		// ERROR: 0x82DBFDC8
		return;
	case 4:
		// ERROR: 0x82DBFD48
		return;
	case 5:
		// ERROR: 0x82DBFDC8
		return;
	case 6:
		// ERROR: 0x82DBFDC8
		return;
	case 7:
		// ERROR: 0x82DBFDC8
		return;
	case 8:
		// ERROR: 0x82DBFD48
		return;
	case 9:
		// ERROR: 0x82DBFDC8
		return;
	case 10:
		// ERROR: 0x82DBFD78
		return;
	case 11:
		// ERROR: 0x82DBFDC8
		return;
	case 12:
		// ERROR: 0x82DBFD48
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_82DBFD14"))) PPC_WEAK_FUNC(sub_82DBFD14);
PPC_FUNC_IMPL(__imp__sub_82DBFD14) {
	PPC_FUNC_PROLOGUE();
	// lwz r22,-696(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -696);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-648(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -648);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-696(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -696);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-696(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -696);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-648(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -648);
	// lwz r22,-568(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -568);
	// lwz r22,-696(r27)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r27.u32 + -696);
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,5844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r4,r3,32
	ctx.r4.s64 = ctx.r3.s64 + 32;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DBFD78"))) PPC_WEAK_FUNC(sub_82DBFD78);
PPC_FUNC_IMPL(__imp__sub_82DBFD78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r3,48
	ctx.r4.s64 = ctx.r3.s64 + 48;
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82dbfd90
	if (!ctx.cr6.eq) goto loc_82DBFD90;
	// stfs f2,24(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// b 0x82dbfd9c
	goto loc_82DBFD9C;
loc_82DBFD90:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
loc_82DBFD9C:
	// lbz r11,1(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,5844(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5844);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DBFDC8"))) PPC_WEAK_FUNC(sub_82DBFDC8);
PPC_FUNC_IMPL(__imp__sub_82DBFDC8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFDCC"))) PPC_WEAK_FUNC(sub_82DBFDCC);
PPC_FUNC_IMPL(__imp__sub_82DBFDCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFDD0"))) PPC_WEAK_FUNC(sub_82DBFDD0);
PPC_FUNC_IMPL(__imp__sub_82DBFDD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// lwz r10,84(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82dbfde8
	if (ctx.cr6.gt) goto loc_82DBFDE8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x82dbfdf0
	goto loc_82DBFDF0;
loc_82DBFDE8:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82DBFDF0:
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82dbfe24
	if (!ctx.cr6.gt) goto loc_82DBFE24;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// addi r11,r8,4
	ctx.r11.s64 = ctx.r8.s64 + 4;
loc_82DBFE08:
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82dbfe2c
	if (ctx.cr6.eq) goto loc_82DBFE2C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82dbfe08
	if (ctx.cr6.lt) goto loc_82DBFE08;
loc_82DBFE24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82DBFE2C:
	// rlwinm r11,r10,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r3,r11,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFE38"))) PPC_WEAK_FUNC(sub_82DBFE38);
PPC_FUNC_IMPL(__imp__sub_82DBFE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rotlwi r6,r5,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
loc_82DBFE54:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwzu r11,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// cmpw cr6,r8,r6
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82dbfe70
	if (!ctx.cr6.eq) goto loc_82DBFE70;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82dbfe74
	goto loc_82DBFE74;
loc_82DBFE70:
	// addi r10,r11,512
	ctx.r10.s64 = ctx.r11.s64 + 512;
loc_82DBFE74:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82dbfe8c
	if (!ctx.cr6.lt) goto loc_82DBFE8C;
loc_82DBFE7C:
	// lbz r9,3(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82dbfe7c
	if (ctx.cr6.lt) goto loc_82DBFE7C;
loc_82DBFE8C:
	// cmpw cr6,r8,r5
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82dbfe54
	if (ctx.cr6.lt) goto loc_82DBFE54;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DBFE98"))) PPC_WEAK_FUNC(sub_82DBFE98);
PPC_FUNC_IMPL(__imp__sub_82DBFE98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82DBFEA0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r28,r4,32
	ctx.r28.s64 = ctx.r4.s64 + 32;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f1,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DBFED0;
	sub_830B2BC8(ctx, base);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r27,r31,96
	ctx.r27.s64 = ctx.r31.s64 + 96;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfs f1,80(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DBFEF0;
	sub_830B2BC8(ctx, base);
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r7,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r7.u32);
	// lwz r6,12(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r6,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r6.u32);
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,4(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r4,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r4.u32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// beq cr6,0x82dbff54
	if (ctx.cr6.eq) goto loc_82DBFF54;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r27.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
loc_82DBFF54:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x82d2e728
	ctx.lr = 0x82DBFF64;
	sub_82D2E728(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DBFF6C"))) PPC_WEAK_FUNC(sub_82DBFF6C);
PPC_FUNC_IMPL(__imp__sub_82DBFF6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DBFF70"))) PPC_WEAK_FUNC(sub_82DBFF70);
PPC_FUNC_IMPL(__imp__sub_82DBFF70) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-128
	ctx.xer.ca = ctx.r11.u32 > 127;
	ctx.r11.s64 = ctx.r11.s64 + -128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne 0x82dbffe4
	if (!ctx.cr0.eq) goto loc_82DBFFE4;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lwz r30,-4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r7,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r7.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DBFFC0;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DBFFDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82DBFFE4:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dc006c
	if (!ctx.cr6.eq) goto loc_82DC006C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// bge cr6,0x82dc0044
	if (!ctx.cr6.lt) goto loc_82DC0044;
	// bl 0x82d2d090
	ctx.lr = 0x82DC0038;
	sub_82D2D090(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r30,12
	ctx.r6.s64 = ctx.r30.s64 + 12;
	// b 0x82dc005c
	goto loc_82DC005C;
loc_82DC0044:
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dc006c
	if (!ctx.cr6.lt) goto loc_82DC006C;
	// bl 0x82d2d090
	ctx.lr = 0x82DC0054;
	sub_82D2D090(ctx, base);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82DC005C:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2df80
	ctx.lr = 0x82DC006C;
	sub_82D2DF80(ctx, base);
loc_82DC006C:
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

__attribute__((alias("__imp__sub_82DC0084"))) PPC_WEAK_FUNC(sub_82DC0084);
PPC_FUNC_IMPL(__imp__sub_82DC0084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0088"))) PPC_WEAK_FUNC(sub_82DC0088);
PPC_FUNC_IMPL(__imp__sub_82DC0088) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// rlwinm r8,r10,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// beq cr6,0x82dc00bc
	if (ctx.cr6.eq) goto loc_82DC00BC;
	// lbz r4,4784(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 4784);
	// b 0x82dc00c0
	goto loc_82DC00C0;
loc_82DC00BC:
	// lbz r4,3760(r8)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3760);
loc_82DC00C0:
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r3,r8,r11
	ctx.r3.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,5872(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5872);
	// addi r8,r8,-2
	ctx.r8.s64 = ctx.r8.s64 + -2;
	// cntlzw r3,r8
	ctx.r3.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r3,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x1;
	// bne cr6,0x82dc0118
	if (!ctx.cr6.eq) goto loc_82DC0118;
	// addi r8,r10,13
	ctx.r8.s64 = ctx.r10.s64 + 13;
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r8,r8,124
	ctx.r8.s64 = ctx.r8.s64 + 124;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// extsb r3,r8
	ctx.r3.s64 = ctx.r8.s8;
	// addic r8,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r8.s64 = ctx.r3.s64 + -1;
	// subfe r8,r8,r3
	temp.u8 = (~ctx.r8.u32 + ctx.r3.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82DC0118:
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82dc0154
	if (ctx.cr6.eq) goto loc_82DC0154;
	// rlwinm r9,r9,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,20(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 20);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82dc0148
	if (ctx.cr6.eq) goto loc_82DC0148;
	// lbz r10,4784(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4784);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DC0148:
	// lbz r10,3760(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3760);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
loc_82DC0154:
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC015C"))) PPC_WEAK_FUNC(sub_82DC015C);
PPC_FUNC_IMPL(__imp__sub_82DC015C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0160"))) PPC_WEAK_FUNC(sub_82DC0160);
PPC_FUNC_IMPL(__imp__sub_82DC0160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82DC0168;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r11,-128
	ctx.r11.s64 = ctx.r11.s64 + -128;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82dc02c4
	if (ctx.cr6.eq) goto loc_82DC02C4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r8.u32);
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r7,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r7.u32);
	// lwz r6,16(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r6,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r6.u32);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r5,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r5.u32);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r3,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r3.u32);
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// stw r10,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r10.u32);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r9,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r9.u32);
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r8,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r8.u32);
	// lwz r7,40(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r7,40(r4)
	PPC_STORE_U32(ctx.r4.u32 + 40, ctx.r7.u32);
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// stw r6,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r6.u32);
	// lwz r5,48(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r5,48(r4)
	PPC_STORE_U32(ctx.r4.u32 + 48, ctx.r5.u32);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// stw r3,52(r4)
	PPC_STORE_U32(ctx.r4.u32 + 52, ctx.r3.u32);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// stw r10,56(r4)
	PPC_STORE_U32(ctx.r4.u32 + 56, ctx.r10.u32);
	// lwz r9,60(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r9,60(r4)
	PPC_STORE_U32(ctx.r4.u32 + 60, ctx.r9.u32);
	// lwz r8,64(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// stw r8,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r8.u32);
	// lwz r7,68(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// stw r7,68(r4)
	PPC_STORE_U32(ctx.r4.u32 + 68, ctx.r7.u32);
	// lwz r6,72(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r6,72(r4)
	PPC_STORE_U32(ctx.r4.u32 + 72, ctx.r6.u32);
	// lwz r5,76(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// stw r5,76(r4)
	PPC_STORE_U32(ctx.r4.u32 + 76, ctx.r5.u32);
	// lwz r3,80(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// stw r3,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r3.u32);
	// lwz r10,84(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// stw r10,84(r4)
	PPC_STORE_U32(ctx.r4.u32 + 84, ctx.r10.u32);
	// lwz r9,88(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	// stw r9,88(r4)
	PPC_STORE_U32(ctx.r4.u32 + 88, ctx.r9.u32);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r8,92(r4)
	PPC_STORE_U32(ctx.r4.u32 + 92, ctx.r8.u32);
	// lwz r7,96(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// stw r7,96(r4)
	PPC_STORE_U32(ctx.r4.u32 + 96, ctx.r7.u32);
	// lwz r6,100(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r6,100(r4)
	PPC_STORE_U32(ctx.r4.u32 + 100, ctx.r6.u32);
	// lwz r5,104(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// stw r5,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r5.u32);
	// lwz r3,108(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r3,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r3.u32);
	// lwz r10,112(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r9.u32);
	// lwz r8,120(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// stw r8,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r8.u32);
	// lwz r7,124(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// stw r7,124(r4)
	PPC_STORE_U32(ctx.r4.u32 + 124, ctx.r7.u32);
	// lhz r6,6(r4)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// lwz r5,16(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lhz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// rotlwi r11,r3,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 3);
	// rotlwi r10,r6,3
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 3);
	// lwz r9,80(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r7,80(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 80);
	// stwx r4,r10,r7
	PPC_STORE_U32(ctx.r10.u32 + ctx.r7.u32, ctx.r4.u32);
loc_82DC02C4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r11,-128
	ctx.xer.ca = ctx.r11.u32 > 127;
	ctx.r11.s64 = ctx.r11.s64 + -128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x82dc031c
	if (!ctx.cr0.eq) goto loc_82DC031C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lwz r29,-4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC02F8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DC0314;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,512
	ctx.r10.s64 = 512;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82DC031C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dc03a0
	if (!ctx.cr6.eq) goto loc_82DC03A0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// bge cr6,0x82dc0378
	if (!ctx.cr6.lt) goto loc_82DC0378;
	// bl 0x82d2d090
	ctx.lr = 0x82DC036C;
	sub_82D2D090(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// b 0x82dc0390
	goto loc_82DC0390;
loc_82DC0378:
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dc03a0
	if (!ctx.cr6.lt) goto loc_82DC03A0;
	// bl 0x82d2d090
	ctx.lr = 0x82DC0388;
	sub_82D2D090(ctx, base);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82DC0390:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2df80
	ctx.lr = 0x82DC03A0;
	sub_82D2DF80(ctx, base);
loc_82DC03A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC03A8"))) PPC_WEAK_FUNC(sub_82DC03A8);
PPC_FUNC_IMPL(__imp__sub_82DC03A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82DC03B0;
	__savegprlr_17(ctx, base);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,15
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 15, ctx.xer);
	// bne cr6,0x82dc05a0
	if (!ctx.cr6.eq) goto loc_82DC05A0;
	// li r28,16
	ctx.r28.s64 = 16;
	// li r25,32
	ctx.r25.s64 = 32;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r11,r5,96
	ctx.r11.s64 = ctx.r5.s64 + 96;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r27,48
	ctx.r27.s64 = 48;
	// li r24,-48
	ctx.r24.s64 = -48;
	// li r19,-32
	ctx.r19.s64 = -32;
	// li r20,-16
	ctx.r20.s64 = -16;
	// li r21,64
	ctx.r21.s64 = 64;
	// li r22,144
	ctx.r22.s64 = 144;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r18,8
	ctx.r18.s64 = 8;
	// addi r23,r10,21904
	ctx.r23.s64 = ctx.r10.s64 + 21904;
loc_82DC03FC:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// subf r26,r10,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// lvx128 v10,r9,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r9,r29
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
loc_82DC0420:
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v12,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v9,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r26,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r8,-16
	ctx.r8.s64 = ctx.r8.s64 + -16;
	// bdnz 0x82dc0420
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DC0420;
	// lvx128 v0,r9,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
	// lvx128 v13,r11,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// vaddfp v12,v13,v0
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r30,r8,32
	ctx.r30.s64 = ctx.r8.s64 + 32;
	// addi r29,r8,48
	ctx.r29.s64 = ctx.r8.s64 + 48;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stvx128 v12,r11,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v10,r8,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v0,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v8,v13,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmsum3fp128 v7,v0,v13
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v6,v13,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vmulfp128 v5,v0,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v4,v0,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v3,v9,v8
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// vspltw v11,v13,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v2,v4,v6
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)));
	// vspltw v1,v7,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v10,v2,v3
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vsubfp v31,v5,v1
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v13,v13,v12,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v13,v31,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 228), 1));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v30,v0,135
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// vpermwi128 v29,v13,99
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmsum3fp128 v28,v0,v13
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v27,v13,135
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vmulfp128 v26,v0,v13
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v25,v0,99
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmulfp128 v24,v30,v29
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v29.f32)));
	// vspltw v11,v13,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmulfp128 v23,v25,v27
	_mm_store_ps(ctx.v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v27.f32)));
	// vspltw v22,v28,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vsubfp v10,v23,v24
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v24.f32)));
	// vsubfp v21,v26,v22
	_mm_store_ps(ctx.v21.f32, _mm_sub_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v22.f32)));
	// vmaddfp v13,v13,v12,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp128 v13,v0,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v13,v21,1,0
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v21.f32), 228), 1));
	// stvx128 v13,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v20,r10,r28
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v19,r10,r25
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v18,r0,r10
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v17,r10,r27
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v16,r8,r21
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vsubfp v15,v16,v17
	_mm_store_ps(ctx.v15.f32, _mm_sub_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v17.f32)));
	// vmsum3fp128 v14,v20,v15
	_mm_store_ps(ctx.v14.f32, _mm_dp_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v15.f32), 0xEF));
	// vmsum3fp128 v63,v19,v15
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v15.f32), 0xEF));
	// vmsum3fp128 v62,v18,v15
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v15.f32), 0xEF));
	// vmrghw128 v61,v14,v0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v14.u32)));
	// vmrghw128 v60,v62,v63
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v59,v60,v61
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// stvx128 v59,r11,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v58,r9,r22
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v58,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,160(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// beq cr6,0x82dc0568
	if (ctx.cr6.eq) goto loc_82DC0568;
	// stw r3,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r3.u32);
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
loc_82DC0568:
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// stw r17,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r17.u32);
	// addi r5,r5,176
	ctx.r5.s64 = ctx.r5.s64 + 176;
	// addi r11,r11,176
	ctx.r11.s64 = ctx.r11.s64 + 176;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stb r18,0(r7)
	PPC_STORE_U8(ctx.r7.u32 + 0, ctx.r18.u8);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r9,15
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 15, ctx.xer);
	// beq cr6,0x82dc03fc
	if (ctx.cr6.eq) goto loc_82DC03FC;
loc_82DC05A0:
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC05A4"))) PPC_WEAK_FUNC(sub_82DC05A4);
PPC_FUNC_IMPL(__imp__sub_82DC05A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC05A8"))) PPC_WEAK_FUNC(sub_82DC05A8);
PPC_FUNC_IMPL(__imp__sub_82DC05A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82DC05B0;
	__savegprlr_23(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82dc08e4
	if (ctx.cr6.gt) goto loc_82DC08E4;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82DC05E0:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,1528
	ctx.r12.s64 = ctx.r12.s64 + 1528;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC06B0;
	case 1:
		goto loc_82DC08E4;
	case 2:
		goto loc_82DC07A4;
	case 3:
		goto loc_82DC08E4;
	case 4:
		goto loc_82DC0684;
	case 5:
		goto loc_82DC08E4;
	case 6:
		goto loc_82DC08E4;
	case 7:
		goto loc_82DC08E4;
	case 8:
		goto loc_82DC062C;
	case 9:
		goto loc_82DC08E4;
	case 10:
		goto loc_82DC062C;
	case 11:
		goto loc_82DC08E4;
	case 12:
		goto loc_82DC062C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,1712(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1712);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,1956(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1956);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,1668(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1668);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,1580(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,1580(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
	// lwz r22,2276(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2276);
	// lwz r22,1580(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 1580);
loc_82DC062C:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC0648;
	sub_82DC03A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1440
	ctx.r5.s64 = ctx.r1.s64 + 1440;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC0664;
	sub_82DC03A8(ctx, base);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// ble cr6,0x82dc05e0
	if (!ctx.cr6.gt) goto loc_82DC05E0;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82DC0684:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC06A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82DC06B0:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r26,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r26.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// stw r30,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r30.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r10,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r10.u32);
	// lfs f13,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// lvx128 v0,r10,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r5,64
	ctx.r9.s64 = ctx.r5.s64 + 64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f11,92(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v9,r9,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v12,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v7,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v7,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v12,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v10,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,160(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,156(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f3,604(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// bl 0x82d2e728
	ctx.lr = 0x82DC0764;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r10,5852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5852);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC079C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82DC07A4:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f11,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// lwz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r28,64
	ctx.r9.s64 = ctx.r28.s64 + 64;
	// addi r10,r27,64
	ctx.r10.s64 = ctx.r27.s64 + 64;
	// lvx128 v13,r9,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lfs f12,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,92(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lvx128 v10,r10,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v8,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v6,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v0,v11,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v13,v6,v7
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,156(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,160(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f7,156(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f2,f4,f13,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f3.f64));
	// stfs f2,220(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// beq cr6,0x82dc09c4
	if (ctx.cr6.eq) goto loc_82DC09C4;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc08ec
	if (!ctx.cr6.eq) goto loc_82DC08EC;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lfs f0,28852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28852);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82DC0898:
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d2e728
	ctx.lr = 0x82DC08AC;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r9,5852(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5852);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC08E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC08E4:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82DC08EC:
	// stw r26,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r26.u32);
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DC0904;
	sub_830B2BC8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f1,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DC0920;
	sub_830B2BC8(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r8,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r8.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// stw r8,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// bl 0x82d2e728
	ctx.lr = 0x82DC0990;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,5848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5848);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC09C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC09C4:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v11,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vaddfp v10,v12,v11
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82dc0898
	if (ctx.cr6.lt) goto loc_82DC0898;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc0a50
	if (ctx.cr6.eq) goto loc_82DC0A50;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,5816(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5816);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC0A50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC0A50:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0A64"))) PPC_WEAK_FUNC(sub_82DC0A64);
PPC_FUNC_IMPL(__imp__sub_82DC0A64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0A68"))) PPC_WEAK_FUNC(sub_82DC0A68);
PPC_FUNC_IMPL(__imp__sub_82DC0A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82DC0A70;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bge cr6,0x82dc0aac
	if (!ctx.cr6.lt) goto loc_82DC0AAC;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,-4(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82DC0AAC:
	// bl 0x82d2d090
	ctx.lr = 0x82DC0AB0;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r4,512
	ctx.r4.s64 = 512;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC0AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// bl 0x82d2d090
	ctx.lr = 0x82DC0AD4;
	sub_82D2D090(ctx, base);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// clrlwi r7,r9,2
	ctx.r7.u64 = ctx.r9.u32 & 0x3FFFFFFF;
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82dc0af8
	if (!ctx.cr6.eq) goto loc_82DC0AF8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82DC0AF8;
	sub_82D2DED0(ctx, base);
loc_82DC0AF8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r9,128
	ctx.r9.s64 = 128;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0B28"))) PPC_WEAK_FUNC(sub_82DC0B28);
PPC_FUNC_IMPL(__imp__sub_82DC0B28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82DC0B30;
	__savegprlr_21(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,0(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82dc0a68
	ctx.lr = 0x82DC0B58;
	sub_82DC0A68(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r27,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r27.u32);
	// addi r25,r27,80
	ctx.r25.s64 = ctx.r27.s64 + 80;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lwz r10,84(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// lwz r8,84(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// sth r8,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r8.u16);
	// bl 0x82d2d090
	ctx.lr = 0x82DC0B84;
	sub_82D2D090(ctx, base);
	// lwz r6,88(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 88);
	// lwz r5,84(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 84);
	// clrlwi r4,r6,2
	ctx.r4.u64 = ctx.r6.u32 & 0x3FFFFFFF;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bne cr6,0x82dc0ba8
	if (!ctx.cr6.eq) goto loc_82DC0BA8;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82DC0BA8;
	sub_82D2DED0(ctx, base);
loc_82DC0BA8:
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r29,r28,80
	ctx.r29.s64 = ctx.r28.s64 + 80;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r9,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r9.u32);
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82DC0BC8;
	sub_82D2D090(ctx, base);
	// lwz r8,88(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 88);
	// lwz r7,84(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 84);
	// clrlwi r6,r8,2
	ctx.r6.u64 = ctx.r8.u32 & 0x3FFFFFFF;
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82dc0bec
	if (!ctx.cr6.eq) goto loc_82DC0BEC;
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82DC0BEC;
	sub_82D2DED0(ctx, base);
loc_82DC0BEC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r7.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// stwx r31,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r31.u32);
	// stw r28,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r28.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r4,8(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lwz r5,8(r23)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// bl 0x82d2e728
	ctx.lr = 0x82DC0C40;
	sub_82D2E728(ctx, base);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r26,r11
	ctx.r4.u64 = ctx.r26.u64 + ctx.r11.u64;
	// lbz r9,26(r28)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + 26);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// extsb r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lbz r11,26(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 26);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r6,7088(r7)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r7.u32 + 7088);
	// extsb r4,r6
	ctx.r4.s64 = ctx.r6.s8;
	// rlwinm r11,r4,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 6) & 0xFFFFFFC0;
	// stb r6,12(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12, ctx.r6.u8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,7200
	ctx.r11.s64 = ctx.r11.s64 + 7200;
	// stw r11,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r11.u32);
	// stb r26,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r26.u8);
	// lwz r10,5848(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5848);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82dc0cd8
	if (ctx.cr6.eq) goto loc_82DC0CD8;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// clrlwi r9,r21,24
	ctx.r9.u64 = ctx.r21.u32 & 0xFF;
	// addi r11,r31,32
	ctx.r11.s64 = ctx.r31.s64 + 32;
	// ori r8,r9,4
	ctx.r8.u64 = ctx.r9.u64 | 4;
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// lfs f0,5180(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5180);
	ctx.f0.f64 = double(temp.f32);
	// stb r8,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r8.u8);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82dc0ce8
	goto loc_82DC0CE8;
loc_82DC0CD8:
	// clrlwi r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
loc_82DC0CE8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r22
	ctx.r10.u64 = ctx.r11.u64 + ctx.r22.u64;
	// lwz r9,5808(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5808);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC0D10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r8,3(r31)
	PPC_STORE_U8(ctx.r31.u32 + 3, ctx.r8.u8);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0D24"))) PPC_WEAK_FUNC(sub_82DC0D24);
PPC_FUNC_IMPL(__imp__sub_82DC0D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC0D28"))) PPC_WEAK_FUNC(sub_82DC0D28);
PPC_FUNC_IMPL(__imp__sub_82DC0D28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82DC0D30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82dc0dd0
	if (ctx.cr6.gt) goto loc_82DC0DD0;
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3432
	ctx.r12.s64 = ctx.r12.s64 + 3432;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC0D9C;
	case 1:
		goto loc_82DC0DD0;
	case 2:
		goto loc_82DC0DA4;
	case 3:
		goto loc_82DC0DD0;
	case 4:
		goto loc_82DC0D9C;
	case 5:
		goto loc_82DC0DD0;
	case 6:
		goto loc_82DC0DD0;
	case 7:
		goto loc_82DC0DD0;
	case 8:
		goto loc_82DC0D9C;
	case 9:
		goto loc_82DC0DD0;
	case 10:
		goto loc_82DC0DA4;
	case 11:
		goto loc_82DC0DD0;
	case 12:
		goto loc_82DC0D9C;
	default:
		__builtin_unreachable();
	}
	// lwz r22,3484(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3484);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3492(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3492);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3484(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3484);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3484(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3484);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3492(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3492);
	// lwz r22,3536(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3536);
	// lwz r22,3484(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3484);
loc_82DC0D9C:
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// b 0x82dc0da8
	goto loc_82DC0DA8;
loc_82DC0DA4:
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
loc_82DC0DA8:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwz r9,5812(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5812);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC0DD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC0DD0:
	// addi r28,r30,4
	ctx.r28.s64 = ctx.r30.s64 + 4;
	// addi r29,r30,16
	ctx.r29.s64 = ctx.r30.s64 + 16;
	// li r27,2
	ctx.r27.s64 = 2;
loc_82DC0DDC:
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// addi r31,r6,80
	ctx.r31.s64 = ctx.r6.s64 + 80;
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r6)
	PPC_STORE_U32(ctx.r6.u32 + 84, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82dc0e2c
	if (ctx.cr6.eq) goto loc_82DC0E2C;
	// rlwinm r7,r11,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r9,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// li r8,2
	ctx.r8.s64 = 2;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82DC0E1C:
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82dc0e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82DC0E1C;
loc_82DC0E2C:
	// lwz r11,84(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 84);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dc0e60
	if (!ctx.cr6.lt) goto loc_82DC0E60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// subf r6,r7,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r7.s64;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// sthx r9,r3,r8
	PPC_STORE_U16(ctx.r3.u32 + ctx.r8.u32, ctx.r9.u16);
loc_82DC0E60:
	// bl 0x82d2d090
	ctx.lr = 0x82DC0E64;
	sub_82D2D090(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// clrlwi r9,r10,2
	ctx.r9.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// rlwinm r8,r11,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// or r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 | ctx.r11.u64;
	// rlwinm r6,r7,24,8,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 24) & 0xFFFFFF;
	// or r5,r6,r7
	ctx.r5.u64 = ctx.r6.u64 | ctx.r7.u64;
	// rlwinm r4,r5,28,4,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0xFFFFFFF;
	// or r11,r4,r5
	ctx.r11.u64 = ctx.r4.u64 | ctx.r5.u64;
	// rlwinm r10,r11,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// or r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r7,r8,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r7,r8
	ctx.r11.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r7,r11,1
	ctx.r7.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82dc0ebc
	if (!ctx.cr6.lt) goto loc_82DC0EBC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,8
	ctx.r5.s64 = 8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2df80
	ctx.lr = 0x82DC0EBC;
	sub_82D2DF80(ctx, base);
loc_82DC0EBC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// bne 0x82dc0ddc
	if (!ctx.cr0.eq) goto loc_82DC0DDC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82dc0160
	ctx.lr = 0x82DC0ED8;
	sub_82DC0160(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC0EE0"))) PPC_WEAK_FUNC(sub_82DC0EE0);
PPC_FUNC_IMPL(__imp__sub_82DC0EE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82DC0EE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-1696(r1)
	ea = -1696 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82dc1008
	if (ctx.cr6.gt) goto loc_82DC1008;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82DC0F14:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,3884
	ctx.r12.s64 = ctx.r12.s64 + 3884;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC0FB8;
	case 1:
		goto loc_82DC1008;
	case 2:
		goto loc_82DC0FC0;
	case 3:
		goto loc_82DC1008;
	case 4:
		goto loc_82DC0FB8;
	case 5:
		goto loc_82DC1008;
	case 6:
		goto loc_82DC1008;
	case 7:
		goto loc_82DC1008;
	case 8:
		goto loc_82DC0F60;
	case 9:
		goto loc_82DC1008;
	case 10:
		goto loc_82DC0F60;
	case 11:
		goto loc_82DC1008;
	case 12:
		goto loc_82DC0F60;
	default:
		__builtin_unreachable();
	}
	// lwz r22,4024(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4024);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,4032(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4032);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,4024(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4024);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,3936(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3936);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,3936(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3936);
	// lwz r22,4104(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4104);
	// lwz r22,3936(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 3936);
loc_82DC0F60:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r27,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r27.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC0F7C;
	sub_82DC03A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,928
	ctx.r5.s64 = ctx.r1.s64 + 928;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC0F98;
	sub_82DC03A8(ctx, base);
	// clrlwi r31,r31,24
	ctx.r31.u64 = ctx.r31.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r31,r31,0,29,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// ble cr6,0x82dc0f14
	if (!ctx.cr6.gt) goto loc_82DC0F14;
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82DC0FB8:
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// b 0x82dc0fc4
	goto loc_82DC0FC4;
loc_82DC0FC0:
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
loc_82DC0FC4:
	// lbz r11,1(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,5832(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5832);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc1008
	if (ctx.cr6.eq) goto loc_82DC1008;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82DC1008;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1008:
	// addi r1,r1,1696
	ctx.r1.s64 = ctx.r1.s64 + 1696;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1010"))) PPC_WEAK_FUNC(sub_82DC1010);
PPC_FUNC_IMPL(__imp__sub_82DC1010) {
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
	// bl 0x82dc0a68
	ctx.lr = 0x82DC1028;
	sub_82DC0A68(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// lwz r5,24(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stw r5,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r5.u32);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// stw r4,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r4.u32);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r9,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r9.u32);
	// lwz r8,44(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r8,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r8.u32);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// stw r5,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r5.u32);
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r9,72(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// lwz r8,76(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// stw r8,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r8.u32);
	// lwz r7,80(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stw r7,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r7.u32);
	// lwz r6,84(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// stw r6,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r6.u32);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// stw r5,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r5.u32);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// stw r4,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r4.u32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r11,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r11.u32);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// lwz r8,108(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// stw r8,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r8.u32);
	// lwz r7,112(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r7,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r7.u32);
	// lwz r6,116(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// stw r6,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r6.u32);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// stw r5,120(r3)
	PPC_STORE_U32(ctx.r3.u32 + 120, ctx.r5.u32);
	// lwz r4,124(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// stw r4,124(r3)
	PPC_STORE_U32(ctx.r3.u32 + 124, ctx.r4.u32);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lhz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// rotlwi r8,r9,3
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 3);
	// rotlwi r7,r11,3
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// lwz r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// stwx r3,r8,r6
	PPC_STORE_U32(ctx.r8.u32 + ctx.r6.u32, ctx.r3.u32);
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r4,80(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// stwx r3,r7,r4
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82DC1164"))) PPC_WEAK_FUNC(sub_82DC1164);
PPC_FUNC_IMPL(__imp__sub_82DC1164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1168"))) PPC_WEAK_FUNC(sub_82DC1168);
PPC_FUNC_IMPL(__imp__sub_82DC1168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82DC1170;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc11cc
	if (ctx.cr6.eq) goto loc_82DC11CC;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
loc_82DC1190:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r11,-4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x82dc0d28
	ctx.lr = 0x82DC11C0;
	sub_82DC0D28(ctx, base);
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82dc1190
	if (!ctx.cr6.eq) goto loc_82DC1190;
loc_82DC11CC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC11D4"))) PPC_WEAK_FUNC(sub_82DC11D4);
PPC_FUNC_IMPL(__imp__sub_82DC11D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC11D8"))) PPC_WEAK_FUNC(sub_82DC11D8);
PPC_FUNC_IMPL(__imp__sub_82DC11D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82DC11E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-2224(r1)
	ea = -2224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,16(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// lwz r28,20(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82dc1510
	if (ctx.cr6.gt) goto loc_82DC1510;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82DC120C:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,4644
	ctx.r12.s64 = ctx.r12.s64 + 4644;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC12DC;
	case 1:
		goto loc_82DC1510;
	case 2:
		goto loc_82DC13D0;
	case 3:
		goto loc_82DC1510;
	case 4:
		goto loc_82DC12B0;
	case 5:
		goto loc_82DC1510;
	case 6:
		goto loc_82DC1510;
	case 7:
		goto loc_82DC1510;
	case 8:
		goto loc_82DC1258;
	case 9:
		goto loc_82DC1510;
	case 10:
		goto loc_82DC1258;
	case 11:
		goto loc_82DC1510;
	case 12:
		goto loc_82DC1258;
	default:
		__builtin_unreachable();
	}
	// lwz r22,4828(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4828);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,5072(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5072);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,4784(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4784);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,4696(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4696);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,4696(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4696);
	// lwz r22,5392(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 5392);
	// lwz r22,4696(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4696);
loc_82DC1258:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r26,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r26.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC1274;
	sub_82DC03A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1440
	ctx.r5.s64 = ctx.r1.s64 + 1440;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC1290;
	sub_82DC03A8(ctx, base);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// ble cr6,0x82dc120c
	if (!ctx.cr6.gt) goto loc_82DC120C;
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82DC12B0:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC12D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82DC12DC:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r29.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r26,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r26.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// stw r28,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r28.u32);
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// stw r30,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r30.u32);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// stw r10,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r10.u32);
	// lfs f13,88(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// lvx128 v0,r10,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r5,64
	ctx.r9.s64 = ctx.r5.s64 + 64;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v12,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lfs f11,92(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v9,r9,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v12,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v7,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v7,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vsubfp v12,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v13,v10,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,160(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,156(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f3,604(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 604, temp.u32);
	// bl 0x82d2e728
	ctx.lr = 0x82DC1390;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r10,5852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5852);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC13C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82DC13D0:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// stw r26,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r26.u32);
	// lfs f13,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r5,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r5.u32);
	// lfs f11,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// addi r25,r31,48
	ctx.r25.s64 = ctx.r31.s64 + 48;
	// lwz r27,8(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r28,8(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r9,r28,64
	ctx.r9.s64 = ctx.r28.s64 + 64;
	// addi r10,r27,64
	ctx.r10.s64 = ctx.r27.s64 + 64;
	// lvx128 v13,r9,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lfs f12,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f12,f11
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f11.f64));
	// stfs f13,84(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lfs f10,92(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lvx128 v10,r10,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvlx v11,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v8,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v7,v8,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0xFF));
	// vsubfp v6,v9,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v0,v11,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// vmulfp128 v13,v6,v7
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f6,156(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	ctx.f6.f64 = double(temp.f32);
	// lfs f8,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,160(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f5,f9,f6
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f6.f64));
	// lfs f7,156(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f3,f5,f0
	ctx.f3.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f4,f8,f7
	ctx.f4.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmadds f2,f4,f13,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f3.f64));
	// stfs f2,220(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 220, temp.u32);
	// beq cr6,0x82dc15f0
	if (ctx.cr6.eq) goto loc_82DC15F0;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc1518
	if (!ctx.cr6.eq) goto loc_82DC1518;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// lfs f0,28852(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28852);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,44(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82DC14C4:
	// stfs f0,192(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82d2e728
	ctx.lr = 0x82DC14D8;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// lwz r9,5852(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5852);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC1510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1510:
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82DC1518:
	// stw r26,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r26.u32);
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DC1530;
	sub_830B2BC8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// lfs f1,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DC154C;
	sub_830B2BC8(ctx, base);
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r9,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r9.u32);
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// stw r8,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r8.u32);
	// addi r6,r1,320
	ctx.r6.s64 = ctx.r1.s64 + 320;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// stw r8,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r8.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r9,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r9.u32);
	// stw r8,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r8.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// stw r11,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r11.u32);
	// stw r9,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r9.u32);
	// stw r7,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r7.u32);
	// stw r10,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r10.u32);
	// stw r6,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r6.u32);
	// bl 0x82d2e728
	ctx.lr = 0x82DC15BC;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,5848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5848);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC15F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC15F0:
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v11,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vaddfp v10,v12,v11
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,44(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f11,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82dc14c4
	if (ctx.cr6.lt) goto loc_82DC14C4;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc1510
	if (ctx.cr6.eq) goto loc_82DC1510;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r9,r11,2
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r9,5816(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5816);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC167C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,2224
	ctx.r1.s64 = ctx.r1.s64 + 2224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1684"))) PPC_WEAK_FUNC(sub_82DC1684);
PPC_FUNC_IMPL(__imp__sub_82DC1684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1688"))) PPC_WEAK_FUNC(sub_82DC1688);
PPC_FUNC_IMPL(__imp__sub_82DC1688) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82DC1690;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r27,512
	ctx.r27.s64 = 512;
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// beq cr6,0x82dc17c8
	if (ctx.cr6.eq) goto loc_82DC17C8;
loc_82DC16AC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc17c8
	if (ctx.cr6.eq) goto loc_82DC17C8;
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r30,4
	ctx.r31.s64 = ctx.r30.s64 + 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r4,r11,-128
	ctx.r4.s64 = ctx.r11.s64 + -128;
	// bl 0x82dc1010
	ctx.lr = 0x82DC16E4;
	sub_82DC1010(ctx, base);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic. r11,r7,-128
	ctx.xer.ca = ctx.r7.u32 > 127;
	ctx.r11.s64 = ctx.r7.s64 + -128;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne 0x82dc1738
	if (!ctx.cr0.eq) goto loc_82DC1738;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// lwz r29,-4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82DC1718;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82DC1734;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82DC1738:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82dc17bc
	if (!ctx.cr6.eq) goto loc_82DC17BC;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// or r8,r9,r11
	ctx.r8.u64 = ctx.r9.u64 | ctx.r11.u64;
	// rlwinm r7,r8,24,8,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFFFF;
	// or r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r5,r6,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// or r4,r5,r6
	ctx.r4.u64 = ctx.r5.u64 | ctx.r6.u64;
	// rlwinm r3,r4,30,2,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 30) & 0x3FFFFFFF;
	// or r11,r3,r4
	ctx.r11.u64 = ctx.r3.u64 | ctx.r4.u64;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// or r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 | ctx.r11.u64;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x82dc1794
	if (!ctx.cr6.lt) goto loc_82DC1794;
	// bl 0x82d2d090
	ctx.lr = 0x82DC1788;
	sub_82D2D090(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r31,12
	ctx.r6.s64 = ctx.r31.s64 + 12;
	// b 0x82dc17ac
	goto loc_82DC17AC;
loc_82DC1794:
	// clrlwi r11,r10,2
	ctx.r11.u64 = ctx.r10.u32 & 0x3FFFFFFF;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82dc17bc
	if (!ctx.cr6.lt) goto loc_82DC17BC;
	// bl 0x82d2d090
	ctx.lr = 0x82DC17A4;
	sub_82D2D090(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
loc_82DC17AC:
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2df80
	ctx.lr = 0x82DC17BC;
	sub_82D2DF80(ctx, base);
loc_82DC17BC:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,512
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 512, ctx.xer);
	// bne cr6,0x82dc16ac
	if (!ctx.cr6.eq) goto loc_82DC16AC;
loc_82DC17C8:
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82dc1814
	if (ctx.cr6.eq) goto loc_82DC1814;
	// lwz r29,4(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r26,8(r28)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x82d2d090
	ctx.lr = 0x82DC17E0;
	sub_82D2D090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r3,r28,4
	ctx.r3.s64 = ctx.r28.s64 + 4;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// bl 0x82dff580
	ctx.lr = 0x82DC1800;
	sub_82DFF580(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82DC1814:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC181C"))) PPC_WEAK_FUNC(sub_82DC181C);
PPC_FUNC_IMPL(__imp__sub_82DC181C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1820"))) PPC_WEAK_FUNC(sub_82DC1820);
PPC_FUNC_IMPL(__imp__sub_82DC1820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82DC1828;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// ld r12,-12288(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -12288);
	// stwu r1,-14768(r1)
	ea = -14768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stw r3,2164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2164, ctx.r3.u32);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// lfs f30,28856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f30.f64 = double(temp.f32);
	// addi r16,r4,8
	ctx.r16.s64 = ctx.r4.s64 + 8;
	// lfs f0,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stfs f30,14496(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 14496, temp.u32);
	// mr r18,r25
	ctx.r18.u64 = ctx.r25.u64;
	// stfs f0,14528(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 14528, temp.u32);
	// stfs f0,14532(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 14532, temp.u32);
	// ble cr6,0x82dc1c54
	if (!ctx.cr6.gt) goto loc_82DC1C54;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r14,r4,4
	ctx.r14.s64 = ctx.r4.s64 + 4;
	// addi r9,r11,-21092
	ctx.r9.s64 = ctx.r11.s64 + -21092;
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// lfs f31,28852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28852);
	ctx.f31.f64 = double(temp.f32);
	// li r20,128
	ctx.r20.s64 = 128;
	// li r23,16
	ctx.r23.s64 = 16;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
loc_82DC18A8:
	// lwz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// lwz r10,0(r16)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmpw cr6,r18,r10
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r10.s32, ctx.xer);
	// lwzx r31,r17,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r11.u32);
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// bne cr6,0x82dc18d0
	if (!ctx.cr6.eq) goto loc_82DC18D0;
	// lwz r11,0(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// add r19,r11,r31
	ctx.r19.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82dc18d4
	goto loc_82DC18D4;
loc_82DC18D0:
	// addi r19,r31,512
	ctx.r19.s64 = ctx.r31.s64 + 512;
loc_82DC18D4:
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// bge cr6,0x82dc1c48
	if (!ctx.cr6.lt) goto loc_82DC1C48;
loc_82DC18DC:
	// addi r11,r1,2176
	ctx.r11.s64 = ctx.r1.s64 + 2176;
	// lwz r22,16(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r21,20(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfs f30,14496(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 14496, temp.u32);
	// stw r11,2160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2160, ctx.r11.u32);
	// addi r24,r31,8
	ctx.r24.s64 = ctx.r31.s64 + 8;
	// stw r25,14576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 14576, ctx.r25.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// dcbt r0,r10
	// dcbt r31,r20
	// lbz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lwz r29,16(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// lwz r28,20(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// bgt cr6,0x82dc1bf4
	if (ctx.cr6.gt) goto loc_82DC1BF4;
loc_82DC191C:
	// lis r12,-32036
	ctx.r12.s64 = -2099511296;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,6452
	ctx.r12.s64 = ctx.r12.s64 + 6452;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82DC19DC;
	case 1:
		goto loc_82DC1BF4;
	case 2:
		goto loc_82DC1ABC;
	case 3:
		goto loc_82DC1BF4;
	case 4:
		goto loc_82DC19BC;
	case 5:
		goto loc_82DC1BF4;
	case 6:
		goto loc_82DC1BF4;
	case 7:
		goto loc_82DC1BF4;
	case 8:
		goto loc_82DC1968;
	case 9:
		goto loc_82DC1BF4;
	case 10:
		goto loc_82DC1968;
	case 11:
		goto loc_82DC1BF4;
	case 12:
		goto loc_82DC1968;
	default:
		__builtin_unreachable();
	}
	// lwz r22,6620(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6620);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,6844(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6844);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,6588(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6588);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,6504(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6504);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,6504(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6504);
	// lwz r22,7156(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 7156);
	// lwz r22,6504(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 6504);
loc_82DC1968:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stb r25,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r25.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC1984;
	sub_82DC03A8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,1456
	ctx.r5.s64 = ctx.r1.s64 + 1456;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82dc03a8
	ctx.lr = 0x82DC19A0;
	sub_82DC03A8(ctx, base);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// ble cr6,0x82dc191c
	if (!ctx.cr6.gt) goto loc_82DC191C;
	// b 0x82dc1bf4
	goto loc_82DC1BF4;
loc_82DC19BC:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82dc1bec
	goto loc_82DC1BEC;
loc_82DC19DC:
	// stw r25,504(r1)
	PPC_STORE_U32(ctx.r1.u32 + 504, ctx.r25.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r29,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r29.u32);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r28,500(r1)
	PPC_STORE_U32(ctx.r1.u32 + 500, ctx.r28.u32);
	// addi r7,r1,608
	ctx.r7.s64 = ctx.r1.s64 + 608;
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// stw r6,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r6.u32);
	// stw r30,508(r1)
	PPC_STORE_U32(ctx.r1.u32 + 508, ctx.r30.u32);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f12,92(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,8(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx128 v0,r11,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r10,r5,64
	ctx.r10.s64 = ctx.r5.s64 + 64;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f12,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// vsubfp v10,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx v12,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r10,r23
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lfs f11,92(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f13,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// vspltw v8,v12,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vsubfp v12,v9,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)));
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v7,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vmulfp128 v13,v10,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f7,160(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,156(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 156);
	ctx.f5.f64 = double(temp.f32);
	// lfs f10,160(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,156(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 156);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fmuls f6,f8,f0
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f4,f7,f5
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fmadds f3,f4,f13,f6
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f13.f64 + ctx.f6.f64));
	// stfs f3,620(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + 620, temp.u32);
	// bl 0x82d2e728
	ctx.lr = 0x82DC1A8C;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// addi r5,r31,32
	ctx.r5.s64 = ctx.r31.s64 + 32;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// rlwinm r11,r4,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,5852(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5852);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// b 0x82dc1be8
	goto loc_82DC1BE8;
loc_82DC1ABC:
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// lfs f12,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// addi r26,r31,48
	ctx.r26.s64 = ctx.r31.s64 + 48;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// lwz r27,8(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// lfs f9,92(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lwz r28,8(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lfs f11,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r27,64
	ctx.r11.s64 = ctx.r27.s64 + 64;
	// lfs f10,92(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f13,f9,f11
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// lvx128 v0,r11,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r28,64
	ctx.r11.s64 = ctx.r28.s64 + 64;
	// fmuls f0,f10,f11
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stfs f13,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v9,r11,r23
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v7,v8,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v6,v11,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xFF));
	// lvlx v10,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v10,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v13,v7,v6
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vmaddfp v0,v12,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f5,160(r27)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	ctx.f5.f64 = double(temp.f32);
	// lfs f3,156(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 156);
	ctx.f3.f64 = double(temp.f32);
	// lfs f8,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,156(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 156);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f8,f7
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// fmuls f4,f6,f0
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f3.f64));
	// fmadds f1,f2,f13,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f13.f64 + ctx.f4.f64));
	// stfs f1,236(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 236, temp.u32);
	// lfs f0,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// beq cr6,0x82dc1d88
	if (ctx.cr6.eq) goto loc_82DC1D88;
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc1cb0
	if (!ctx.cr6.eq) goto loc_82DC1CB0;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// lfs f0,84(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fmr f0,f31
	ctx.f0.f64 = ctx.f31.f64;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// stvx128 v13,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,44(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 44, temp.u32);
loc_82DC1BA8:
	// stfs f0,208(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82d2e728
	ctx.lr = 0x82DC1BBC;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,5852(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5852);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82DC1BE8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82DC1BEC:
	// addi r7,r1,2160
	ctx.r7.s64 = ctx.r1.s64 + 2160;
	// bctrl 
	ctx.lr = 0x82DC1BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1BF4:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82dc1ca0
	if (ctx.cr6.eq) goto loc_82DC1CA0;
	// lwz r11,2160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2160);
	// addi r10,r1,2176
	ctx.r10.s64 = ctx.r1.s64 + 2176;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82dc1c38
	if (ctx.cr6.eq) goto loc_82DC1C38;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r7,r1,2160
	ctx.r7.s64 = ctx.r1.s64 + 2160;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC1C38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1C38:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r31,r19
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r19.u32, ctx.xer);
	// blt cr6,0x82dc18dc
	if (ctx.cr6.lt) goto loc_82DC18DC;
loc_82DC1C48:
	// lwz r11,0(r16)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82dc18a8
	if (ctx.cr6.lt) goto loc_82DC18A8;
loc_82DC1C54:
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lwz r3,-21024(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -21024);
	// bl 0x831791e4
	ctx.lr = 0x82DC1C60;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82dc1ca0
	if (!ctx.cr6.lt) goto loc_82DC1CA0;
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// addi r6,r9,-14404
	ctx.r6.s64 = ctx.r9.s64 + -14404;
	// std r7,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r7.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// stw r6,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r6.u32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stfs f12,4(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stw r8,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r8.u32);
loc_82DC1CA0:
	// addi r1,r1,14768
	ctx.r1.s64 = ctx.r1.s64 + 14768;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82DC1CB0:
	// stw r25,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r25.u32);
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DC1CC8;
	sub_830B2BC8(ctx, base);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// lfs f1,80(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2bc8
	ctx.lr = 0x82DC1CE4;
	sub_830B2BC8(ctx, base);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r9,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r9.u32);
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// stw r8,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r8.u32);
	// addi r6,r1,336
	ctx.r6.s64 = ctx.r1.s64 + 336;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r5,r1,336
	ctx.r5.s64 = ctx.r1.s64 + 336;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// lwz r9,128(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r9,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r9.u32);
	// stw r8,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r8.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r8,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r8.u32);
	// stw r9,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r9.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r11.u32);
	// stw r9,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r9.u32);
	// stw r8,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r8.u32);
	// stw r7,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r7.u32);
	// stw r10,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r10.u32);
	// stw r6,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r6.u32);
	// bl 0x82d2e728
	ctx.lr = 0x82DC1D54;
	sub_82D2E728(ctx, base);
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r11,r7,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,5848(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5848);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC1D88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1D88:
	// lfs f0,84(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vspltw v11,v0,3
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vaddfp v10,v11,v12
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// stvewx v10,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,8(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// lfs f13,44(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f13,f12
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// blt cr6,0x82dc1ba8
	if (ctx.cr6.lt) goto loc_82DC1BA8;
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc1e14
	if (ctx.cr6.eq) goto loc_82DC1E14;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rotlwi r10,r11,2
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 2);
	// lwz r6,2164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2164);
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r9,5816(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 5816);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC1E14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1E14:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// b 0x82dc1bf4
	goto loc_82DC1BF4;
}

__attribute__((alias("__imp__sub_82DC1E24"))) PPC_WEAK_FUNC(sub_82DC1E24);
PPC_FUNC_IMPL(__imp__sub_82DC1E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1E28"))) PPC_WEAK_FUNC(sub_82DC1E28);
PPC_FUNC_IMPL(__imp__sub_82DC1E28) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC1E3C"))) PPC_WEAK_FUNC(sub_82DC1E3C);
PPC_FUNC_IMPL(__imp__sub_82DC1E3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1E40"))) PPC_WEAK_FUNC(sub_82DC1E40);
PPC_FUNC_IMPL(__imp__sub_82DC1E40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-15216
	ctx.r3.s64 = ctx.r11.s64 + -15216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1E4C"))) PPC_WEAK_FUNC(sub_82DC1E4C);
PPC_FUNC_IMPL(__imp__sub_82DC1E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1E50"))) PPC_WEAK_FUNC(sub_82DC1E50);
PPC_FUNC_IMPL(__imp__sub_82DC1E50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dc2030
	sub_82DC2030(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1E5C"))) PPC_WEAK_FUNC(sub_82DC1E5C);
PPC_FUNC_IMPL(__imp__sub_82DC1E5C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1E60"))) PPC_WEAK_FUNC(sub_82DC1E60);
PPC_FUNC_IMPL(__imp__sub_82DC1E60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2030
	ctx.lr = 0x82DC1E78;
	sub_82DC2030(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC1E8C"))) PPC_WEAK_FUNC(sub_82DC1E8C);
PPC_FUNC_IMPL(__imp__sub_82DC1E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC1E90"))) PPC_WEAK_FUNC(sub_82DC1E90);
PPC_FUNC_IMPL(__imp__sub_82DC1E90) {
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
	// lwz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// clrlwi r11,r11,2
	ctx.r11.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82dc1ec4
	if (ctx.cr6.eq) goto loc_82DC1EC4;
	// lwz r10,208(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// clrlwi r9,r10,28
	ctx.r9.u64 = ctx.r10.u32 & 0xF;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82dc1f00
	if (ctx.cr6.eq) goto loc_82DC1F00;
loc_82DC1EC4:
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bge cr6,0x82dc1ed4
	if (!ctx.cr6.lt) goto loc_82DC1ED4;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82DC1ED4:
	// addi r31,r3,208
	ctx.r31.s64 = ctx.r3.s64 + 208;
	// bl 0x82d2d090
	ctx.lr = 0x82DC1EDC;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi r10,r11,2
	ctx.r10.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82dc1f00
	if (!ctx.cr6.lt) goto loc_82DC1F00;
	// li r6,4
	ctx.r6.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2de30
	ctx.lr = 0x82DC1F00;
	sub_82D2DE30(ctx, base);
loc_82DC1F00:
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

__attribute__((alias("__imp__sub_82DC1F18"))) PPC_WEAK_FUNC(sub_82DC1F18);
PPC_FUNC_IMPL(__imp__sub_82DC1F18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82DC1F20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r10,r11,-13756
	ctx.r10.s64 = ctx.r11.s64 + -13756;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc1f48
	if (ctx.cr6.eq) goto loc_82DC1F48;
	// bl 0x82d2c0a0
	ctx.lr = 0x82DC1F48;
	sub_82D2C0A0(ctx, base);
loc_82DC1F48:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82dc1f58
	if (ctx.cr6.eq) goto loc_82DC1F58;
	// bl 0x82d2c0a0
	ctx.lr = 0x82DC1F58;
	sub_82D2C0A0(ctx, base);
loc_82DC1F58:
	// addi r31,r30,120
	ctx.r31.s64 = ctx.r30.s64 + 120;
	// bl 0x82d2d090
	ctx.lr = 0x82DC1F60;
	sub_82D2D090(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r29,124(r30)
	PPC_STORE_U32(ctx.r30.u32 + 124, ctx.r29.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82dc1f98
	if (!ctx.cr6.eq) goto loc_82DC1F98;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82DC1F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC1F98:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r30,116
	ctx.r3.s64 = ctx.r30.s64 + 116;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82d37568
	ctx.lr = 0x82DC1FAC;
	sub_82D37568(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82d7f878
	ctx.lr = 0x82DC1FB4;
	sub_82D7F878(ctx, base);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r9,r10,10816
	ctx.r9.s64 = ctx.r10.s64 + 10816;
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC1FC8"))) PPC_WEAK_FUNC(sub_82DC1FC8);
PPC_FUNC_IMPL(__imp__sub_82DC1FC8) {
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
	// bl 0x82dc1f18
	ctx.lr = 0x82DC1FE8;
	sub_82DC1F18(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2014
	if (ctx.cr6.eq) goto loc_82DC2014;
	// bl 0x82d2d090
	ctx.lr = 0x82DC1FF8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2014:
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

__attribute__((alias("__imp__sub_82DC2030"))) PPC_WEAK_FUNC(sub_82DC2030);
PPC_FUNC_IMPL(__imp__sub_82DC2030) {
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
	// bl 0x82dd7bd0
	ctx.lr = 0x82DC2050;
	sub_82DD7BD0(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r8,r9,-13672
	ctx.r8.s64 = ctx.r9.s64 + -13672;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// stw r10,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r10.u32);
	// beq cr6,0x82dc209c
	if (ctx.cr6.eq) goto loc_82DC209C;
	// bl 0x82dc1e90
	ctx.lr = 0x82DC2098;
	sub_82DC1E90(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82DC209C:
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

__attribute__((alias("__imp__sub_82DC20B4"))) PPC_WEAK_FUNC(sub_82DC20B4);
PPC_FUNC_IMPL(__imp__sub_82DC20B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC20B8"))) PPC_WEAK_FUNC(sub_82DC20B8);
PPC_FUNC_IMPL(__imp__sub_82DC20B8) {
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
	// bl 0x82dd12d8
	ctx.lr = 0x82DC20D8;
	sub_82DD12D8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2104
	if (ctx.cr6.eq) goto loc_82DC2104;
	// bl 0x82d2d090
	ctx.lr = 0x82DC20E8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2104:
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

__attribute__((alias("__imp__sub_82DC2120"))) PPC_WEAK_FUNC(sub_82DC2120);
PPC_FUNC_IMPL(__imp__sub_82DC2120) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2124"))) PPC_WEAK_FUNC(sub_82DC2124);
PPC_FUNC_IMPL(__imp__sub_82DC2124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2128"))) PPC_WEAK_FUNC(sub_82DC2128);
PPC_FUNC_IMPL(__imp__sub_82DC2128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-15152
	ctx.r3.s64 = ctx.r11.s64 + -15152;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2134"))) PPC_WEAK_FUNC(sub_82DC2134);
PPC_FUNC_IMPL(__imp__sub_82DC2134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2138"))) PPC_WEAK_FUNC(sub_82DC2138);
PPC_FUNC_IMPL(__imp__sub_82DC2138) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC214C"))) PPC_WEAK_FUNC(sub_82DC214C);
PPC_FUNC_IMPL(__imp__sub_82DC214C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2150"))) PPC_WEAK_FUNC(sub_82DC2150);
PPC_FUNC_IMPL(__imp__sub_82DC2150) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-15104
	ctx.r3.s64 = ctx.r11.s64 + -15104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC215C"))) PPC_WEAK_FUNC(sub_82DC215C);
PPC_FUNC_IMPL(__imp__sub_82DC215C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2160"))) PPC_WEAK_FUNC(sub_82DC2160);
PPC_FUNC_IMPL(__imp__sub_82DC2160) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2164"))) PPC_WEAK_FUNC(sub_82DC2164);
PPC_FUNC_IMPL(__imp__sub_82DC2164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2168"))) PPC_WEAK_FUNC(sub_82DC2168);
PPC_FUNC_IMPL(__imp__sub_82DC2168) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-13492
	ctx.r10.s64 = ctx.r11.s64 + -13492;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2180"))) PPC_WEAK_FUNC(sub_82DC2180);
PPC_FUNC_IMPL(__imp__sub_82DC2180) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-13492
	ctx.r3.s64 = ctx.r11.s64 + -13492;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC218C"))) PPC_WEAK_FUNC(sub_82DC218C);
PPC_FUNC_IMPL(__imp__sub_82DC218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2190"))) PPC_WEAK_FUNC(sub_82DC2190);
PPC_FUNC_IMPL(__imp__sub_82DC2190) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f1,28856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC219C"))) PPC_WEAK_FUNC(sub_82DC219C);
PPC_FUNC_IMPL(__imp__sub_82DC219C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC21A0"))) PPC_WEAK_FUNC(sub_82DC21A0);
PPC_FUNC_IMPL(__imp__sub_82DC21A0) {
	PPC_FUNC_PROLOGUE();
	// li r3,255
	ctx.r3.s64 = 255;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC21A8"))) PPC_WEAK_FUNC(sub_82DC21A8);
PPC_FUNC_IMPL(__imp__sub_82DC21A8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC21AC"))) PPC_WEAK_FUNC(sub_82DC21AC);
PPC_FUNC_IMPL(__imp__sub_82DC21AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC21B0"))) PPC_WEAK_FUNC(sub_82DC21B0);
PPC_FUNC_IMPL(__imp__sub_82DC21B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-15056
	ctx.r3.s64 = ctx.r11.s64 + -15056;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC21BC"))) PPC_WEAK_FUNC(sub_82DC21BC);
PPC_FUNC_IMPL(__imp__sub_82DC21BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC21C0"))) PPC_WEAK_FUNC(sub_82DC21C0);
PPC_FUNC_IMPL(__imp__sub_82DC21C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ddecb0
	sub_82DDECB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC21CC"))) PPC_WEAK_FUNC(sub_82DC21CC);
PPC_FUNC_IMPL(__imp__sub_82DC21CC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC21D0"))) PPC_WEAK_FUNC(sub_82DC21D0);
PPC_FUNC_IMPL(__imp__sub_82DC21D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC21E4"))) PPC_WEAK_FUNC(sub_82DC21E4);
PPC_FUNC_IMPL(__imp__sub_82DC21E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC21E8"))) PPC_WEAK_FUNC(sub_82DC21E8);
PPC_FUNC_IMPL(__imp__sub_82DC21E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ddecb0
	ctx.lr = 0x82DC2200;
	sub_82DDECB0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2214"))) PPC_WEAK_FUNC(sub_82DC2214);
PPC_FUNC_IMPL(__imp__sub_82DC2214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2218"))) PPC_WEAK_FUNC(sub_82DC2218);
PPC_FUNC_IMPL(__imp__sub_82DC2218) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-15008
	ctx.r3.s64 = ctx.r11.s64 + -15008;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2224"))) PPC_WEAK_FUNC(sub_82DC2224);
PPC_FUNC_IMPL(__imp__sub_82DC2224) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2228"))) PPC_WEAK_FUNC(sub_82DC2228);
PPC_FUNC_IMPL(__imp__sub_82DC2228) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC223C"))) PPC_WEAK_FUNC(sub_82DC223C);
PPC_FUNC_IMPL(__imp__sub_82DC223C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2240"))) PPC_WEAK_FUNC(sub_82DC2240);
PPC_FUNC_IMPL(__imp__sub_82DC2240) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14944
	ctx.r3.s64 = ctx.r11.s64 + -14944;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC224C"))) PPC_WEAK_FUNC(sub_82DC224C);
PPC_FUNC_IMPL(__imp__sub_82DC224C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2250"))) PPC_WEAK_FUNC(sub_82DC2250);
PPC_FUNC_IMPL(__imp__sub_82DC2250) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-13028
	ctx.r10.s64 = ctx.r11.s64 + -13028;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc2284
	if (ctx.cr6.eq) goto loc_82DC2284;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_82DC2284:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-12916
	ctx.r10.s64 = ctx.r11.s64 + -12916;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2294"))) PPC_WEAK_FUNC(sub_82DC2294);
PPC_FUNC_IMPL(__imp__sub_82DC2294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2298"))) PPC_WEAK_FUNC(sub_82DC2298);
PPC_FUNC_IMPL(__imp__sub_82DC2298) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-12916
	ctx.r3.s64 = ctx.r11.s64 + -12916;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC22A4"))) PPC_WEAK_FUNC(sub_82DC22A4);
PPC_FUNC_IMPL(__imp__sub_82DC22A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC22A8"))) PPC_WEAK_FUNC(sub_82DC22A8);
PPC_FUNC_IMPL(__imp__sub_82DC22A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC22BC"))) PPC_WEAK_FUNC(sub_82DC22BC);
PPC_FUNC_IMPL(__imp__sub_82DC22BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC22C0"))) PPC_WEAK_FUNC(sub_82DC22C0);
PPC_FUNC_IMPL(__imp__sub_82DC22C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14896
	ctx.r3.s64 = ctx.r11.s64 + -14896;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC22CC"))) PPC_WEAK_FUNC(sub_82DC22CC);
PPC_FUNC_IMPL(__imp__sub_82DC22CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC22D0"))) PPC_WEAK_FUNC(sub_82DC22D0);
PPC_FUNC_IMPL(__imp__sub_82DC22D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82ddbfe0
	sub_82DDBFE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC22DC"))) PPC_WEAK_FUNC(sub_82DC22DC);
PPC_FUNC_IMPL(__imp__sub_82DC22DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC22E0"))) PPC_WEAK_FUNC(sub_82DC22E0);
PPC_FUNC_IMPL(__imp__sub_82DC22E0) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82ddbfe0
	ctx.lr = 0x82DC22F8;
	sub_82DDBFE0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC230C"))) PPC_WEAK_FUNC(sub_82DC230C);
PPC_FUNC_IMPL(__imp__sub_82DC230C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2310"))) PPC_WEAK_FUNC(sub_82DC2310);
PPC_FUNC_IMPL(__imp__sub_82DC2310) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2324"))) PPC_WEAK_FUNC(sub_82DC2324);
PPC_FUNC_IMPL(__imp__sub_82DC2324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2328"))) PPC_WEAK_FUNC(sub_82DC2328);
PPC_FUNC_IMPL(__imp__sub_82DC2328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14832
	ctx.r3.s64 = ctx.r11.s64 + -14832;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2334"))) PPC_WEAK_FUNC(sub_82DC2334);
PPC_FUNC_IMPL(__imp__sub_82DC2334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2338"))) PPC_WEAK_FUNC(sub_82DC2338);
PPC_FUNC_IMPL(__imp__sub_82DC2338) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dc23e0
	sub_82DC23E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2344"))) PPC_WEAK_FUNC(sub_82DC2344);
PPC_FUNC_IMPL(__imp__sub_82DC2344) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2348"))) PPC_WEAK_FUNC(sub_82DC2348);
PPC_FUNC_IMPL(__imp__sub_82DC2348) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc23e0
	ctx.lr = 0x82DC2360;
	sub_82DC23E0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2374"))) PPC_WEAK_FUNC(sub_82DC2374);
PPC_FUNC_IMPL(__imp__sub_82DC2374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2378"))) PPC_WEAK_FUNC(sub_82DC2378);
PPC_FUNC_IMPL(__imp__sub_82DC2378) {
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
	// bl 0x82dde628
	ctx.lr = 0x82DC2398;
	sub_82DDE628(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc23c4
	if (ctx.cr6.eq) goto loc_82DC23C4;
	// bl 0x82d2d090
	ctx.lr = 0x82DC23A8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC23C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC23C4:
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

__attribute__((alias("__imp__sub_82DC23E0"))) PPC_WEAK_FUNC(sub_82DC23E0);
PPC_FUNC_IMPL(__imp__sub_82DC23E0) {
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
	// bl 0x82dd7bd0
	ctx.lr = 0x82DC23F8;
	sub_82DD7BD0(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r8,r9,-12316
	ctx.r8.s64 = ctx.r9.s64 + -12316;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// stw r10,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r10.u32);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r11,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r11.u32);
	// stw r10,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82DC2448"))) PPC_WEAK_FUNC(sub_82DC2448);
PPC_FUNC_IMPL(__imp__sub_82DC2448) {
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
	// bl 0x82ddfd28
	ctx.lr = 0x82DC2468;
	sub_82DDFD28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2494
	if (ctx.cr6.eq) goto loc_82DC2494;
	// bl 0x82d2d090
	ctx.lr = 0x82DC2478;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2494:
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

__attribute__((alias("__imp__sub_82DC24B0"))) PPC_WEAK_FUNC(sub_82DC24B0);
PPC_FUNC_IMPL(__imp__sub_82DC24B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC24C4"))) PPC_WEAK_FUNC(sub_82DC24C4);
PPC_FUNC_IMPL(__imp__sub_82DC24C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC24C8"))) PPC_WEAK_FUNC(sub_82DC24C8);
PPC_FUNC_IMPL(__imp__sub_82DC24C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14768
	ctx.r3.s64 = ctx.r11.s64 + -14768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC24D4"))) PPC_WEAK_FUNC(sub_82DC24D4);
PPC_FUNC_IMPL(__imp__sub_82DC24D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC24D8"))) PPC_WEAK_FUNC(sub_82DC24D8);
PPC_FUNC_IMPL(__imp__sub_82DC24D8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-11908
	ctx.r10.s64 = ctx.r11.s64 + -11908;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC24F0"))) PPC_WEAK_FUNC(sub_82DC24F0);
PPC_FUNC_IMPL(__imp__sub_82DC24F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-11908
	ctx.r3.s64 = ctx.r11.s64 + -11908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC24FC"))) PPC_WEAK_FUNC(sub_82DC24FC);
PPC_FUNC_IMPL(__imp__sub_82DC24FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2500"))) PPC_WEAK_FUNC(sub_82DC2500);
PPC_FUNC_IMPL(__imp__sub_82DC2500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2514"))) PPC_WEAK_FUNC(sub_82DC2514);
PPC_FUNC_IMPL(__imp__sub_82DC2514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2518"))) PPC_WEAK_FUNC(sub_82DC2518);
PPC_FUNC_IMPL(__imp__sub_82DC2518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14720
	ctx.r3.s64 = ctx.r11.s64 + -14720;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2524"))) PPC_WEAK_FUNC(sub_82DC2524);
PPC_FUNC_IMPL(__imp__sub_82DC2524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2528"))) PPC_WEAK_FUNC(sub_82DC2528);
PPC_FUNC_IMPL(__imp__sub_82DC2528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-13028
	ctx.r10.s64 = ctx.r11.s64 + -13028;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc255c
	if (ctx.cr6.eq) goto loc_82DC255C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_82DC255C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-11820
	ctx.r10.s64 = ctx.r11.s64 + -11820;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC256C"))) PPC_WEAK_FUNC(sub_82DC256C);
PPC_FUNC_IMPL(__imp__sub_82DC256C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2570"))) PPC_WEAK_FUNC(sub_82DC2570);
PPC_FUNC_IMPL(__imp__sub_82DC2570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-11820
	ctx.r3.s64 = ctx.r11.s64 + -11820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC257C"))) PPC_WEAK_FUNC(sub_82DC257C);
PPC_FUNC_IMPL(__imp__sub_82DC257C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2580"))) PPC_WEAK_FUNC(sub_82DC2580);
PPC_FUNC_IMPL(__imp__sub_82DC2580) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2594"))) PPC_WEAK_FUNC(sub_82DC2594);
PPC_FUNC_IMPL(__imp__sub_82DC2594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2598"))) PPC_WEAK_FUNC(sub_82DC2598);
PPC_FUNC_IMPL(__imp__sub_82DC2598) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14672
	ctx.r3.s64 = ctx.r11.s64 + -14672;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC25A4"))) PPC_WEAK_FUNC(sub_82DC25A4);
PPC_FUNC_IMPL(__imp__sub_82DC25A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC25A8"))) PPC_WEAK_FUNC(sub_82DC25A8);
PPC_FUNC_IMPL(__imp__sub_82DC25A8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dc2650
	sub_82DC2650(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC25B4"))) PPC_WEAK_FUNC(sub_82DC25B4);
PPC_FUNC_IMPL(__imp__sub_82DC25B4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC25B8"))) PPC_WEAK_FUNC(sub_82DC25B8);
PPC_FUNC_IMPL(__imp__sub_82DC25B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc2650
	ctx.lr = 0x82DC25D0;
	sub_82DC2650(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC25E4"))) PPC_WEAK_FUNC(sub_82DC25E4);
PPC_FUNC_IMPL(__imp__sub_82DC25E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC25E8"))) PPC_WEAK_FUNC(sub_82DC25E8);
PPC_FUNC_IMPL(__imp__sub_82DC25E8) {
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
	// bl 0x82dda118
	ctx.lr = 0x82DC2608;
	sub_82DDA118(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2634
	if (ctx.cr6.eq) goto loc_82DC2634;
	// bl 0x82d2d090
	ctx.lr = 0x82DC2618;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2634:
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

__attribute__((alias("__imp__sub_82DC2650"))) PPC_WEAK_FUNC(sub_82DC2650);
PPC_FUNC_IMPL(__imp__sub_82DC2650) {
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
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r9,r10,-11620
	ctx.r9.s64 = ctx.r10.s64 + -11620;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// sth r8,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r8.u16);
	// bl 0x82d372b8
	ctx.lr = 0x82DC268C;
	sub_82D372B8(ctx, base);
	// lis r7,-32236
	ctx.r7.s64 = -2112618496;
	// li r6,-16
	ctx.r6.s64 = -16;
	// addi r5,r7,-11588
	ctx.r5.s64 = ctx.r7.s64 + -11588;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r5,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r5.u32);
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

__attribute__((alias("__imp__sub_82DC26B8"))) PPC_WEAK_FUNC(sub_82DC26B8);
PPC_FUNC_IMPL(__imp__sub_82DC26B8) {
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
	// bl 0x82de0ae0
	ctx.lr = 0x82DC26D8;
	sub_82DE0AE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82dc2704
	if (ctx.cr6.eq) goto loc_82DC2704;
	// bl 0x82d2d090
	ctx.lr = 0x82DC26E8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2704;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2704:
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

__attribute__((alias("__imp__sub_82DC2720"))) PPC_WEAK_FUNC(sub_82DC2720);
PPC_FUNC_IMPL(__imp__sub_82DC2720) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2734"))) PPC_WEAK_FUNC(sub_82DC2734);
PPC_FUNC_IMPL(__imp__sub_82DC2734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2738"))) PPC_WEAK_FUNC(sub_82DC2738);
PPC_FUNC_IMPL(__imp__sub_82DC2738) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14608
	ctx.r3.s64 = ctx.r11.s64 + -14608;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2744"))) PPC_WEAK_FUNC(sub_82DC2744);
PPC_FUNC_IMPL(__imp__sub_82DC2744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2748"))) PPC_WEAK_FUNC(sub_82DC2748);
PPC_FUNC_IMPL(__imp__sub_82DC2748) {
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
	// beq cr6,0x82dc2784
	if (ctx.cr6.eq) goto loc_82DC2784;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82DC2778;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,-11448
	ctx.r8.s64 = ctx.r9.s64 + -11448;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82DC2784:
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

__attribute__((alias("__imp__sub_82DC2798"))) PPC_WEAK_FUNC(sub_82DC2798);
PPC_FUNC_IMPL(__imp__sub_82DC2798) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82DC27BC;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r3,r9,-11448
	ctx.r3.s64 = ctx.r9.s64 + -11448;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC27D4"))) PPC_WEAK_FUNC(sub_82DC27D4);
PPC_FUNC_IMPL(__imp__sub_82DC27D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC27D8"))) PPC_WEAK_FUNC(sub_82DC27D8);
PPC_FUNC_IMPL(__imp__sub_82DC27D8) {
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
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d37568
	ctx.lr = 0x82DC2808;
	sub_82D37568(ctx, base);
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// clrlwi r8,r30,31
	ctx.r8.u64 = ctx.r30.u32 & 0x1;
	// addi r7,r9,10816
	ctx.r7.s64 = ctx.r9.s64 + 10816;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// beq cr6,0x82dc2840
	if (ctx.cr6.eq) goto loc_82DC2840;
	// bl 0x82d2d090
	ctx.lr = 0x82DC2824;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2840:
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

__attribute__((alias("__imp__sub_82DC285C"))) PPC_WEAK_FUNC(sub_82DC285C);
PPC_FUNC_IMPL(__imp__sub_82DC285C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2860"))) PPC_WEAK_FUNC(sub_82DC2860);
PPC_FUNC_IMPL(__imp__sub_82DC2860) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2864"))) PPC_WEAK_FUNC(sub_82DC2864);
PPC_FUNC_IMPL(__imp__sub_82DC2864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2868"))) PPC_WEAK_FUNC(sub_82DC2868);
PPC_FUNC_IMPL(__imp__sub_82DC2868) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14544
	ctx.r3.s64 = ctx.r11.s64 + -14544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2874"))) PPC_WEAK_FUNC(sub_82DC2874);
PPC_FUNC_IMPL(__imp__sub_82DC2874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2878"))) PPC_WEAK_FUNC(sub_82DC2878);
PPC_FUNC_IMPL(__imp__sub_82DC2878) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC288C"))) PPC_WEAK_FUNC(sub_82DC288C);
PPC_FUNC_IMPL(__imp__sub_82DC288C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2890"))) PPC_WEAK_FUNC(sub_82DC2890);
PPC_FUNC_IMPL(__imp__sub_82DC2890) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14496
	ctx.r3.s64 = ctx.r11.s64 + -14496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC289C"))) PPC_WEAK_FUNC(sub_82DC289C);
PPC_FUNC_IMPL(__imp__sub_82DC289C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC28A0"))) PPC_WEAK_FUNC(sub_82DC28A0);
PPC_FUNC_IMPL(__imp__sub_82DC28A0) {
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
	// beq cr6,0x82dc28ec
	if (ctx.cr6.eq) goto loc_82DC28EC;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-11620
	ctx.r9.s64 = ctx.r10.s64 + -11620;
	// li r8,-32768
	ctx.r8.s64 = -32768;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// addi r3,r3,40
	ctx.r3.s64 = ctx.r3.s64 + 40;
	// sth r11,36(r31)
	PPC_STORE_U16(ctx.r31.u32 + 36, ctx.r11.u16);
	// sth r8,38(r31)
	PPC_STORE_U16(ctx.r31.u32 + 38, ctx.r8.u16);
	// bl 0x82d372b8
	ctx.lr = 0x82DC28E4;
	sub_82D372B8(ctx, base);
	// li r7,-16
	ctx.r7.s64 = -16;
	// stw r7,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r7.u32);
loc_82DC28EC:
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

__attribute__((alias("__imp__sub_82DC2900"))) PPC_WEAK_FUNC(sub_82DC2900);
PPC_FUNC_IMPL(__imp__sub_82DC2900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11620
	ctx.r10.s64 = ctx.r11.s64 + -11620;
	// li r9,-32768
	ctx.r9.s64 = -32768;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// sth r4,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r4.u16);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// sth r9,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r9.u16);
	// bl 0x82d372b8
	ctx.lr = 0x82DC2934;
	sub_82D372B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2948"))) PPC_WEAK_FUNC(sub_82DC2948);
PPC_FUNC_IMPL(__imp__sub_82DC2948) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC295C"))) PPC_WEAK_FUNC(sub_82DC295C);
PPC_FUNC_IMPL(__imp__sub_82DC295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2960"))) PPC_WEAK_FUNC(sub_82DC2960);
PPC_FUNC_IMPL(__imp__sub_82DC2960) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14432
	ctx.r3.s64 = ctx.r11.s64 + -14432;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC296C"))) PPC_WEAK_FUNC(sub_82DC296C);
PPC_FUNC_IMPL(__imp__sub_82DC296C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2970"))) PPC_WEAK_FUNC(sub_82DC2970);
PPC_FUNC_IMPL(__imp__sub_82DC2970) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-10380
	ctx.r10.s64 = ctx.r11.s64 + -10380;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2988"))) PPC_WEAK_FUNC(sub_82DC2988);
PPC_FUNC_IMPL(__imp__sub_82DC2988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-10380
	ctx.r3.s64 = ctx.r11.s64 + -10380;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2994"))) PPC_WEAK_FUNC(sub_82DC2994);
PPC_FUNC_IMPL(__imp__sub_82DC2994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2998"))) PPC_WEAK_FUNC(sub_82DC2998);
PPC_FUNC_IMPL(__imp__sub_82DC2998) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC299C"))) PPC_WEAK_FUNC(sub_82DC299C);
PPC_FUNC_IMPL(__imp__sub_82DC299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC29A0"))) PPC_WEAK_FUNC(sub_82DC29A0);
PPC_FUNC_IMPL(__imp__sub_82DC29A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14384
	ctx.r3.s64 = ctx.r11.s64 + -14384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC29AC"))) PPC_WEAK_FUNC(sub_82DC29AC);
PPC_FUNC_IMPL(__imp__sub_82DC29AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC29B0"))) PPC_WEAK_FUNC(sub_82DC29B0);
PPC_FUNC_IMPL(__imp__sub_82DC29B0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC29B4"))) PPC_WEAK_FUNC(sub_82DC29B4);
PPC_FUNC_IMPL(__imp__sub_82DC29B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC29B8"))) PPC_WEAK_FUNC(sub_82DC29B8);
PPC_FUNC_IMPL(__imp__sub_82DC29B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14336
	ctx.r3.s64 = ctx.r11.s64 + -14336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC29C4"))) PPC_WEAK_FUNC(sub_82DC29C4);
PPC_FUNC_IMPL(__imp__sub_82DC29C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC29C8"))) PPC_WEAK_FUNC(sub_82DC29C8);
PPC_FUNC_IMPL(__imp__sub_82DC29C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14288
	ctx.r3.s64 = ctx.r11.s64 + -14288;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC29D4"))) PPC_WEAK_FUNC(sub_82DC29D4);
PPC_FUNC_IMPL(__imp__sub_82DC29D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC29D8"))) PPC_WEAK_FUNC(sub_82DC29D8);
PPC_FUNC_IMPL(__imp__sub_82DC29D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC29EC"))) PPC_WEAK_FUNC(sub_82DC29EC);
PPC_FUNC_IMPL(__imp__sub_82DC29EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC29F0"))) PPC_WEAK_FUNC(sub_82DC29F0);
PPC_FUNC_IMPL(__imp__sub_82DC29F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14240
	ctx.r3.s64 = ctx.r11.s64 + -14240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC29FC"))) PPC_WEAK_FUNC(sub_82DC29FC);
PPC_FUNC_IMPL(__imp__sub_82DC29FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2A00"))) PPC_WEAK_FUNC(sub_82DC2A00);
PPC_FUNC_IMPL(__imp__sub_82DC2A00) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2A04"))) PPC_WEAK_FUNC(sub_82DC2A04);
PPC_FUNC_IMPL(__imp__sub_82DC2A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2A08"))) PPC_WEAK_FUNC(sub_82DC2A08);
PPC_FUNC_IMPL(__imp__sub_82DC2A08) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82dc5750
	sub_82DC5750(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2A14"))) PPC_WEAK_FUNC(sub_82DC2A14);
PPC_FUNC_IMPL(__imp__sub_82DC2A14) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2A18"))) PPC_WEAK_FUNC(sub_82DC2A18);
PPC_FUNC_IMPL(__imp__sub_82DC2A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82dc5750
	ctx.lr = 0x82DC2A30;
	sub_82DC5750(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2A44"))) PPC_WEAK_FUNC(sub_82DC2A44);
PPC_FUNC_IMPL(__imp__sub_82DC2A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2A48"))) PPC_WEAK_FUNC(sub_82DC2A48);
PPC_FUNC_IMPL(__imp__sub_82DC2A48) {
	PPC_FUNC_PROLOGUE();
	// b 0x82dc2a50
	sub_82DC2A50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2A4C"))) PPC_WEAK_FUNC(sub_82DC2A4C);
PPC_FUNC_IMPL(__imp__sub_82DC2A4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2A50"))) PPC_WEAK_FUNC(sub_82DC2A50);
PPC_FUNC_IMPL(__imp__sub_82DC2A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82DC2A58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r30,14(r3)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r30,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dc2a94
	if (!ctx.cr6.eq) goto loc_82DC2A94;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82d2d090
	ctx.lr = 0x82DC2A78;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2A94:
	// lhz r30,6(r31)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// rlwinm r11,r30,0,0,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFF8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82dc2ac8
	if (!ctx.cr6.eq) goto loc_82DC2AC8;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82d2d090
	ctx.lr = 0x82DC2AAC;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r5,r30,2,16,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82DC2AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82DC2AC8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2AD0"))) PPC_WEAK_FUNC(sub_82DC2AD0);
PPC_FUNC_IMPL(__imp__sub_82DC2AD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2AE4"))) PPC_WEAK_FUNC(sub_82DC2AE4);
PPC_FUNC_IMPL(__imp__sub_82DC2AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2AE8"))) PPC_WEAK_FUNC(sub_82DC2AE8);
PPC_FUNC_IMPL(__imp__sub_82DC2AE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14176
	ctx.r3.s64 = ctx.r11.s64 + -14176;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2AF4"))) PPC_WEAK_FUNC(sub_82DC2AF4);
PPC_FUNC_IMPL(__imp__sub_82DC2AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2AF8"))) PPC_WEAK_FUNC(sub_82DC2AF8);
PPC_FUNC_IMPL(__imp__sub_82DC2AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r11,-13028
	ctx.r10.s64 = ctx.r11.s64 + -13028;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82dc2b2c
	if (ctx.cr6.eq) goto loc_82DC2B2C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-16(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lwz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// srawi r9,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 16;
	// sth r9,286(r3)
	PPC_STORE_U16(ctx.r3.u32 + 286, ctx.r9.u16);
loc_82DC2B2C:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-8524
	ctx.r10.s64 = ctx.r11.s64 + -8524;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2B3C"))) PPC_WEAK_FUNC(sub_82DC2B3C);
PPC_FUNC_IMPL(__imp__sub_82DC2B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2B40"))) PPC_WEAK_FUNC(sub_82DC2B40);
PPC_FUNC_IMPL(__imp__sub_82DC2B40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-8524
	ctx.r3.s64 = ctx.r11.s64 + -8524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2B4C"))) PPC_WEAK_FUNC(sub_82DC2B4C);
PPC_FUNC_IMPL(__imp__sub_82DC2B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2B50"))) PPC_WEAK_FUNC(sub_82DC2B50);
PPC_FUNC_IMPL(__imp__sub_82DC2B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2B64"))) PPC_WEAK_FUNC(sub_82DC2B64);
PPC_FUNC_IMPL(__imp__sub_82DC2B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2B68"))) PPC_WEAK_FUNC(sub_82DC2B68);
PPC_FUNC_IMPL(__imp__sub_82DC2B68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14128
	ctx.r3.s64 = ctx.r11.s64 + -14128;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2B74"))) PPC_WEAK_FUNC(sub_82DC2B74);
PPC_FUNC_IMPL(__imp__sub_82DC2B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2B78"))) PPC_WEAK_FUNC(sub_82DC2B78);
PPC_FUNC_IMPL(__imp__sub_82DC2B78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82de1ae0
	sub_82DE1AE0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82DC2B84"))) PPC_WEAK_FUNC(sub_82DC2B84);
PPC_FUNC_IMPL(__imp__sub_82DC2B84) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2B88"))) PPC_WEAK_FUNC(sub_82DC2B88);
PPC_FUNC_IMPL(__imp__sub_82DC2B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82de1ae0
	ctx.lr = 0x82DC2BA0;
	sub_82DE1AE0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2BB4"))) PPC_WEAK_FUNC(sub_82DC2BB4);
PPC_FUNC_IMPL(__imp__sub_82DC2BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2BB8"))) PPC_WEAK_FUNC(sub_82DC2BB8);
PPC_FUNC_IMPL(__imp__sub_82DC2BB8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2BBC"))) PPC_WEAK_FUNC(sub_82DC2BBC);
PPC_FUNC_IMPL(__imp__sub_82DC2BBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2BC0"))) PPC_WEAK_FUNC(sub_82DC2BC0);
PPC_FUNC_IMPL(__imp__sub_82DC2BC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14064
	ctx.r3.s64 = ctx.r11.s64 + -14064;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2BCC"))) PPC_WEAK_FUNC(sub_82DC2BCC);
PPC_FUNC_IMPL(__imp__sub_82DC2BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2BD0"))) PPC_WEAK_FUNC(sub_82DC2BD0);
PPC_FUNC_IMPL(__imp__sub_82DC2BD0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2BE4"))) PPC_WEAK_FUNC(sub_82DC2BE4);
PPC_FUNC_IMPL(__imp__sub_82DC2BE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2BE8"))) PPC_WEAK_FUNC(sub_82DC2BE8);
PPC_FUNC_IMPL(__imp__sub_82DC2BE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-14016
	ctx.r3.s64 = ctx.r11.s64 + -14016;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2BF4"))) PPC_WEAK_FUNC(sub_82DC2BF4);
PPC_FUNC_IMPL(__imp__sub_82DC2BF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2BF8"))) PPC_WEAK_FUNC(sub_82DC2BF8);
PPC_FUNC_IMPL(__imp__sub_82DC2BF8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2BFC"))) PPC_WEAK_FUNC(sub_82DC2BFC);
PPC_FUNC_IMPL(__imp__sub_82DC2BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C00"))) PPC_WEAK_FUNC(sub_82DC2C00);
PPC_FUNC_IMPL(__imp__sub_82DC2C00) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-8140
	ctx.r10.s64 = ctx.r11.s64 + -8140;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C18"))) PPC_WEAK_FUNC(sub_82DC2C18);
PPC_FUNC_IMPL(__imp__sub_82DC2C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-8140
	ctx.r3.s64 = ctx.r11.s64 + -8140;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C24"))) PPC_WEAK_FUNC(sub_82DC2C24);
PPC_FUNC_IMPL(__imp__sub_82DC2C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C28"))) PPC_WEAK_FUNC(sub_82DC2C28);
PPC_FUNC_IMPL(__imp__sub_82DC2C28) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C2C"))) PPC_WEAK_FUNC(sub_82DC2C2C);
PPC_FUNC_IMPL(__imp__sub_82DC2C2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C30"))) PPC_WEAK_FUNC(sub_82DC2C30);
PPC_FUNC_IMPL(__imp__sub_82DC2C30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13968
	ctx.r3.s64 = ctx.r11.s64 + -13968;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C3C"))) PPC_WEAK_FUNC(sub_82DC2C3C);
PPC_FUNC_IMPL(__imp__sub_82DC2C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C40"))) PPC_WEAK_FUNC(sub_82DC2C40);
PPC_FUNC_IMPL(__imp__sub_82DC2C40) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2C54"))) PPC_WEAK_FUNC(sub_82DC2C54);
PPC_FUNC_IMPL(__imp__sub_82DC2C54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C58"))) PPC_WEAK_FUNC(sub_82DC2C58);
PPC_FUNC_IMPL(__imp__sub_82DC2C58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13920
	ctx.r3.s64 = ctx.r11.s64 + -13920;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C64"))) PPC_WEAK_FUNC(sub_82DC2C64);
PPC_FUNC_IMPL(__imp__sub_82DC2C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C68"))) PPC_WEAK_FUNC(sub_82DC2C68);
PPC_FUNC_IMPL(__imp__sub_82DC2C68) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C6C"))) PPC_WEAK_FUNC(sub_82DC2C6C);
PPC_FUNC_IMPL(__imp__sub_82DC2C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C70"))) PPC_WEAK_FUNC(sub_82DC2C70);
PPC_FUNC_IMPL(__imp__sub_82DC2C70) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,-7812
	ctx.r10.s64 = ctx.r11.s64 + -7812;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C88"))) PPC_WEAK_FUNC(sub_82DC2C88);
PPC_FUNC_IMPL(__imp__sub_82DC2C88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,-7812
	ctx.r3.s64 = ctx.r11.s64 + -7812;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2C94"))) PPC_WEAK_FUNC(sub_82DC2C94);
PPC_FUNC_IMPL(__imp__sub_82DC2C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2C98"))) PPC_WEAK_FUNC(sub_82DC2C98);
PPC_FUNC_IMPL(__imp__sub_82DC2C98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82DC2CAC"))) PPC_WEAK_FUNC(sub_82DC2CAC);
PPC_FUNC_IMPL(__imp__sub_82DC2CAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82DC2CB0"))) PPC_WEAK_FUNC(sub_82DC2CB0);
PPC_FUNC_IMPL(__imp__sub_82DC2CB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-13872
	ctx.r3.s64 = ctx.r11.s64 + -13872;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82DC2CBC"))) PPC_WEAK_FUNC(sub_82DC2CBC);
PPC_FUNC_IMPL(__imp__sub_82DC2CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

