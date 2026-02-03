#include "ppc_recomp_shared.h"

__attribute__((alias("__imp____restvmx_102"))) PPC_WEAK_FUNC(__restvmx_102);
PPC_FUNC_IMPL(__imp____restvmx_102) {
	PPC_FUNC_PROLOGUE();
	// li r11,-416
	ctx.r11.s64 = -416;
	// lvx128 v102,r11,r12
	simd::store_shuffled(ctx.v102, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	simd::store_shuffled(ctx.v103, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	simd::store_shuffled(ctx.v104, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	simd::store_shuffled(ctx.v105, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	simd::store_shuffled(ctx.v106, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	simd::store_shuffled(ctx.v107, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_103"))) PPC_WEAK_FUNC(__restvmx_103);
PPC_FUNC_IMPL(__imp____restvmx_103) {
	PPC_FUNC_PROLOGUE();
	// li r11,-400
	ctx.r11.s64 = -400;
	// lvx128 v103,r11,r12
	simd::store_shuffled(ctx.v103, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	simd::store_shuffled(ctx.v104, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	simd::store_shuffled(ctx.v105, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	simd::store_shuffled(ctx.v106, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	simd::store_shuffled(ctx.v107, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_104"))) PPC_WEAK_FUNC(__restvmx_104);
PPC_FUNC_IMPL(__imp____restvmx_104) {
	PPC_FUNC_PROLOGUE();
	// li r11,-384
	ctx.r11.s64 = -384;
	// lvx128 v104,r11,r12
	simd::store_shuffled(ctx.v104, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	simd::store_shuffled(ctx.v105, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	simd::store_shuffled(ctx.v106, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	simd::store_shuffled(ctx.v107, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_105"))) PPC_WEAK_FUNC(__restvmx_105);
PPC_FUNC_IMPL(__imp____restvmx_105) {
	PPC_FUNC_PROLOGUE();
	// li r11,-368
	ctx.r11.s64 = -368;
	// lvx128 v105,r11,r12
	simd::store_shuffled(ctx.v105, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	simd::store_shuffled(ctx.v106, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	simd::store_shuffled(ctx.v107, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_106"))) PPC_WEAK_FUNC(__restvmx_106);
PPC_FUNC_IMPL(__imp____restvmx_106) {
	PPC_FUNC_PROLOGUE();
	// li r11,-352
	ctx.r11.s64 = -352;
	// lvx128 v106,r11,r12
	simd::store_shuffled(ctx.v106, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	simd::store_shuffled(ctx.v107, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_107"))) PPC_WEAK_FUNC(__restvmx_107);
PPC_FUNC_IMPL(__imp____restvmx_107) {
	PPC_FUNC_PROLOGUE();
	// li r11,-336
	ctx.r11.s64 = -336;
	// lvx128 v107,r11,r12
	simd::store_shuffled(ctx.v107, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_108"))) PPC_WEAK_FUNC(__restvmx_108);
PPC_FUNC_IMPL(__imp____restvmx_108) {
	PPC_FUNC_PROLOGUE();
	// li r11,-320
	ctx.r11.s64 = -320;
	// lvx128 v108,r11,r12
	simd::store_shuffled(ctx.v108, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_109"))) PPC_WEAK_FUNC(__restvmx_109);
PPC_FUNC_IMPL(__imp____restvmx_109) {
	PPC_FUNC_PROLOGUE();
	// li r11,-304
	ctx.r11.s64 = -304;
	// lvx128 v109,r11,r12
	simd::store_shuffled(ctx.v109, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_110"))) PPC_WEAK_FUNC(__restvmx_110);
PPC_FUNC_IMPL(__imp____restvmx_110) {
	PPC_FUNC_PROLOGUE();
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx128 v110,r11,r12
	simd::store_shuffled(ctx.v110, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_111"))) PPC_WEAK_FUNC(__restvmx_111);
PPC_FUNC_IMPL(__imp____restvmx_111) {
	PPC_FUNC_PROLOGUE();
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx128 v111,r11,r12
	simd::store_shuffled(ctx.v111, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_112"))) PPC_WEAK_FUNC(__restvmx_112);
PPC_FUNC_IMPL(__imp____restvmx_112) {
	PPC_FUNC_PROLOGUE();
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx128 v112,r11,r12
	simd::store_shuffled(ctx.v112, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_113"))) PPC_WEAK_FUNC(__restvmx_113);
PPC_FUNC_IMPL(__imp____restvmx_113) {
	PPC_FUNC_PROLOGUE();
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx128 v113,r11,r12
	simd::store_shuffled(ctx.v113, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_114"))) PPC_WEAK_FUNC(__restvmx_114);
PPC_FUNC_IMPL(__imp____restvmx_114) {
	PPC_FUNC_PROLOGUE();
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx128 v114,r11,r12
	simd::store_shuffled(ctx.v114, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_115"))) PPC_WEAK_FUNC(__restvmx_115);
PPC_FUNC_IMPL(__imp____restvmx_115) {
	PPC_FUNC_PROLOGUE();
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx128 v115,r11,r12
	simd::store_shuffled(ctx.v115, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_116"))) PPC_WEAK_FUNC(__restvmx_116);
PPC_FUNC_IMPL(__imp____restvmx_116) {
	PPC_FUNC_PROLOGUE();
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx128 v116,r11,r12
	simd::store_shuffled(ctx.v116, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_117"))) PPC_WEAK_FUNC(__restvmx_117);
PPC_FUNC_IMPL(__imp____restvmx_117) {
	PPC_FUNC_PROLOGUE();
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx128 v117,r11,r12
	simd::store_shuffled(ctx.v117, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_118"))) PPC_WEAK_FUNC(__restvmx_118);
PPC_FUNC_IMPL(__imp____restvmx_118) {
	PPC_FUNC_PROLOGUE();
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx128 v118,r11,r12
	simd::store_shuffled(ctx.v118, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_119"))) PPC_WEAK_FUNC(__restvmx_119);
PPC_FUNC_IMPL(__imp____restvmx_119) {
	PPC_FUNC_PROLOGUE();
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx128 v119,r11,r12
	simd::store_shuffled(ctx.v119, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_120"))) PPC_WEAK_FUNC(__restvmx_120);
PPC_FUNC_IMPL(__imp____restvmx_120) {
	PPC_FUNC_PROLOGUE();
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx128 v120,r11,r12
	simd::store_shuffled(ctx.v120, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_121"))) PPC_WEAK_FUNC(__restvmx_121);
PPC_FUNC_IMPL(__imp____restvmx_121) {
	PPC_FUNC_PROLOGUE();
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx128 v121,r11,r12
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_122"))) PPC_WEAK_FUNC(__restvmx_122);
PPC_FUNC_IMPL(__imp____restvmx_122) {
	PPC_FUNC_PROLOGUE();
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx128 v122,r11,r12
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_123"))) PPC_WEAK_FUNC(__restvmx_123);
PPC_FUNC_IMPL(__imp____restvmx_123) {
	PPC_FUNC_PROLOGUE();
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx128 v123,r11,r12
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_124"))) PPC_WEAK_FUNC(__restvmx_124);
PPC_FUNC_IMPL(__imp____restvmx_124) {
	PPC_FUNC_PROLOGUE();
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx128 v124,r11,r12
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_125"))) PPC_WEAK_FUNC(__restvmx_125);
PPC_FUNC_IMPL(__imp____restvmx_125) {
	PPC_FUNC_PROLOGUE();
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx128 v125,r11,r12
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_126"))) PPC_WEAK_FUNC(__restvmx_126);
PPC_FUNC_IMPL(__imp____restvmx_126) {
	PPC_FUNC_PROLOGUE();
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx128 v126,r11,r12
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_127"))) PPC_WEAK_FUNC(__restvmx_127);
PPC_FUNC_IMPL(__imp____restvmx_127) {
	PPC_FUNC_PROLOGUE();
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx128 v127,r11,r12
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC410"))) PPC_WEAK_FUNC(sub_82FAC410);
PPC_FUNC_IMPL(__imp__sub_82FAC410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FAC418;
	__savegprlr_28(ctx, base);
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r5.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82FAC458;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82fac478
	if (!ctx.cr6.eq) goto loc_82FAC478;
loc_82FAC460:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC464;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAC470;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fac508
	goto loc_82FAC508;
loc_82FAC478:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fac488
	if (ctx.cr6.eq) goto loc_82FAC488;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fac460
	if (ctx.cr6.eq) goto loc_82FAC460;
loc_82FAC488:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// addi r9,r1,216
	ctx.r9.s64 = ctx.r1.s64 + 216;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bgt cr6,0x82fac4ac
	if (ctx.cr6.gt) goto loc_82FAC4AC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
loc_82FAC4AC:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82faed00
	ctx.lr = 0x82FAC4D0;
	sub_82FAED00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fac504
	if (ctx.cr6.eq) goto loc_82FAC504;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// blt 0x82fac4f8
	if (ctx.cr0.lt) goto loc_82FAC4F8;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stb r28,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r28.u8);
	// b 0x82fac504
	goto loc_82FAC504;
loc_82FAC4F8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82faea90
	ctx.lr = 0x82FAC504;
	sub_82FAEA90(ctx, base);
loc_82FAC504:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FAC508:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAC510"))) PPC_WEAK_FUNC(sub_82FAC510);
PPC_FUNC_IMPL(__imp__sub_82FAC510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82FAC518;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// add r24,r11,r4
	ctx.r24.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fac564
	if (!ctx.cr6.eq) goto loc_82FAC564;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fac564
	if (ctx.cr6.eq) goto loc_82FAC564;
loc_82FAC548:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC54C;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAC558;
	sub_82FA1FF0(ctx, base);
loc_82FAC558:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAC55C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82FAC564:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fac548
	if (ctx.cr6.eq) goto loc_82FAC548;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fac548
	if (ctx.cr6.eq) goto loc_82FAC548;
	// cmplw cr6,r4,r24
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82fac558
	if (ctx.cr6.gt) goto loc_82FAC558;
loc_82FAC57C:
	// rlwinm. r28,r5,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82fac5ec
	if (ctx.cr0.eq) goto loc_82FAC5EC;
	// clrlwi. r27,r5,31
	ctx.r27.u64 = ctx.r5.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// bne 0x82fac594
	if (!ctx.cr0.eq) goto loc_82FAC594;
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
loc_82FAC594:
	// mullw r11,r11,r30
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r30.s32);
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// add r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82FAC5AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fac5e4
	if (ctx.cr0.eq) goto loc_82FAC5E4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82fac5d0
	if (!ctx.cr6.lt) goto loc_82FAC5D0;
	// subf r24,r30,r31
	ctx.r24.s64 = ctx.r31.s64 - ctx.r30.s64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82fac5d4
	if (!ctx.cr6.eq) goto loc_82FAC5D4;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// b 0x82fac5d8
	goto loc_82FAC5D8;
loc_82FAC5D0:
	// add r29,r31,r30
	ctx.r29.u64 = ctx.r31.u64 + ctx.r30.u64;
loc_82FAC5D4:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_82FAC5D8:
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82fac57c
	if (!ctx.cr6.gt) goto loc_82FAC57C;
	// b 0x82fac558
	goto loc_82FAC558;
loc_82FAC5E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82fac55c
	goto loc_82FAC55C;
loc_82FAC5EC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fac558
	if (ctx.cr6.eq) goto loc_82FAC558;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FAC604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// b 0x82fac55c
	goto loc_82FAC55C;
}

__attribute__((alias("__imp__sub_82FAC614"))) PPC_WEAK_FUNC(sub_82FAC614);
PPC_FUNC_IMPL(__imp__sub_82FAC614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC618"))) PPC_WEAK_FUNC(sub_82FAC618);
PPC_FUNC_IMPL(__imp__sub_82FAC618) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC61C"))) PPC_WEAK_FUNC(sub_82FAC61C);
PPC_FUNC_IMPL(__imp__sub_82FAC61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC620"))) PPC_WEAK_FUNC(sub_82FAC620);
PPC_FUNC_IMPL(__imp__sub_82FAC620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lbz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
loc_82FAC62C:
	// cmpwi cr7,r6,0
	ctx.cr7.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// subf. r3,r6,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr7,0x82fac648
	if (ctx.cr7.eq) goto loc_82FAC648;
	// bne 0x82fac648
	if (!ctx.cr0.eq) goto loc_82FAC648;
	// lbzu r5,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbzu r6,1(r4)
	ea = 1 + ctx.r4.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// b 0x82fac62c
	goto loc_82FAC62C;
loc_82FAC648:
	// beqlr 
	if (ctx.cr0.eq) return;
	// li r3,-1
	ctx.r3.s64 = -1;
	// bltlr 
	if (ctx.cr0.lt) return;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC65C"))) PPC_WEAK_FUNC(sub_82FAC65C);
PPC_FUNC_IMPL(__imp__sub_82FAC65C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC660"))) PPC_WEAK_FUNC(sub_82FAC660);
PPC_FUNC_IMPL(__imp__sub_82FAC660) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,65
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 65, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,90
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 90, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC678"))) PPC_WEAK_FUNC(sub_82FAC678);
PPC_FUNC_IMPL(__imp__sub_82FAC678) {
	PPC_FUNC_PROLOGUE();
	// stfd f2,24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 24, ctx.f2.u64);
	// lwz r11,24(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 24);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,22472(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r8,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r8.u32);
	// rlwimi r11,r9,0,1,31
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r9.u32, 0) & 0x7FFFFFFF) | (ctx.r11.u64 & 0xFFFFFFFF80000000);
	// stw r11,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r11.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC6AC"))) PPC_WEAK_FUNC(sub_82FAC6AC);
PPC_FUNC_IMPL(__imp__sub_82FAC6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC6B0"))) PPC_WEAK_FUNC(sub_82FAC6B0);
PPC_FUNC_IMPL(__imp__sub_82FAC6B0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lfd f0,22472(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// stw r9,-12(r1)
	PPC_STORE_U32(ctx.r1.u32 + -12, ctx.r9.u32);
	// rlwimi r8,r11,0,1,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x7FFFFFFF) | (ctx.r8.u64 & 0xFFFFFFFF80000000);
	// stw r8,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r8.u32);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC6E0"))) PPC_WEAK_FUNC(sub_82FAC6E0);
PPC_FUNC_IMPL(__imp__sub_82FAC6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// addi r11,r11,-32752
	ctx.r11.s64 = ctx.r11.s64 + -32752;
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

__attribute__((alias("__imp__sub_82FAC6FC"))) PPC_WEAK_FUNC(sub_82FAC6FC);
PPC_FUNC_IMPL(__imp__sub_82FAC6FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC700"))) PPC_WEAK_FUNC(sub_82FAC700);
PPC_FUNC_IMPL(__imp__sub_82FAC700) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82fac72c
	if (!ctx.cr6.eq) goto loc_82FAC72C;
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// clrlwi. r10,r10,13
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fac734
	if (!ctx.cr0.eq) goto loc_82FAC734;
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fac734
	if (!ctx.cr6.eq) goto loc_82FAC734;
loc_82FAC72C:
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x82fac73c
	if (!ctx.cr6.eq) goto loc_82FAC73C;
loc_82FAC734:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FAC73C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC744"))) PPC_WEAK_FUNC(sub_82FAC744);
PPC_FUNC_IMPL(__imp__sub_82FAC744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC748"))) PPC_WEAK_FUNC(sub_82FAC748);
PPC_FUNC_IMPL(__imp__sub_82FAC748) {
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
	// stfd f1,112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f1.u64);
	// lhz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 112);
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82fac7a0
	if (!ctx.cr6.eq) goto loc_82FAC7A0;
	// bl 0x82fafba8
	ctx.lr = 0x82FAC76C;
	sub_82FAFBA8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82fac798
	if (ctx.cr6.eq) goto loc_82FAC798;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82fac790
	if (ctx.cr6.eq) goto loc_82FAC790;
	// addi r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -3;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// b 0x82fac80c
	goto loc_82FAC80C;
loc_82FAC790:
	// li r3,4
	ctx.r3.s64 = 4;
	// b 0x82fac80c
	goto loc_82FAC80C;
loc_82FAC798:
	// li r3,512
	ctx.r3.s64 = 512;
	// b 0x82fac80c
	goto loc_82FAC80C;
loc_82FAC7A0:
	// rlwinm r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fac7dc
	if (!ctx.cr6.eq) goto loc_82FAC7DC;
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// clrlwi. r10,r10,12
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fac7c4
	if (!ctx.cr0.eq) goto loc_82FAC7C4;
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fac7dc
	if (ctx.cr6.eq) goto loc_82FAC7DC;
loc_82FAC7C4:
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	// addi r3,r11,128
	ctx.r3.s64 = ctx.r11.s64 + 128;
	// b 0x82fac80c
	goto loc_82FAC80C;
loc_82FAC7DC:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lfd f0,22472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82fac800
	if (!ctx.cr6.eq) goto loc_82FAC800;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// b 0x82fac80c
	goto loc_82FAC80C;
loc_82FAC800:
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// rlwinm r11,r11,0,28,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF0F;
	// addi r3,r11,256
	ctx.r3.s64 = ctx.r11.s64 + 256;
loc_82FAC80C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC81C"))) PPC_WEAK_FUNC(sub_82FAC81C);
PPC_FUNC_IMPL(__imp__sub_82FAC81C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC820"))) PPC_WEAK_FUNC(sub_82FAC820);
PPC_FUNC_IMPL(__imp__sub_82FAC820) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82FAC828;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82FAC854;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fac874
	if (!ctx.cr6.eq) goto loc_82FAC874;
loc_82FAC85C:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC860;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAC86C;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fac8dc
	goto loc_82FAC8DC;
loc_82FAC874:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fac85c
	if (ctx.cr6.eq) goto loc_82FAC85C;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82faed00
	ctx.lr = 0x82FAC8AC;
	sub_82FAED00(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82fac8cc
	if (ctx.cr0.lt) goto loc_82FAC8CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r27,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r27.u8);
	// b 0x82fac8d8
	goto loc_82FAC8D8;
loc_82FAC8CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82faea90
	ctx.lr = 0x82FAC8D8;
	sub_82FAEA90(ctx, base);
loc_82FAC8D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82FAC8DC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAC8E4"))) PPC_WEAK_FUNC(sub_82FAC8E4);
PPC_FUNC_IMPL(__imp__sub_82FAC8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC8E8"))) PPC_WEAK_FUNC(sub_82FAC8E8);
PPC_FUNC_IMPL(__imp__sub_82FAC8E8) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82fac820
	sub_82FAC820(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAC8F4"))) PPC_WEAK_FUNC(sub_82FAC8F4);
PPC_FUNC_IMPL(__imp__sub_82FAC8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC8F8"))) PPC_WEAK_FUNC(sub_82FAC8F8);
PPC_FUNC_IMPL(__imp__sub_82FAC8F8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fc2ee0
	ctx.lr = 0x82FAC918;
	sub_82FC2EE0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82fac944
	if (!ctx.cr0.eq) goto loc_82FAC944;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fac944
	if (ctx.cr6.eq) goto loc_82FAC944;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC930;
	sub_82FA6DB0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fac944
	if (ctx.cr0.eq) goto loc_82FAC944;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC93C;
	sub_82FA6DB0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82FAC944:
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

__attribute__((alias("__imp__sub_82FAC95C"))) PPC_WEAK_FUNC(sub_82FAC95C);
PPC_FUNC_IMPL(__imp__sub_82FAC95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAC960"))) PPC_WEAK_FUNC(sub_82FAC960);
PPC_FUNC_IMPL(__imp__sub_82FAC960) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rlwinm r11,r3,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFC;
	// lwz r3,-4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// b 0x82fa27a8
	sub_82FA27A8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAC974"))) PPC_WEAK_FUNC(sub_82FAC974);
PPC_FUNC_IMPL(__imp__sub_82FAC974) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAC978"))) PPC_WEAK_FUNC(sub_82FAC978);
PPC_FUNC_IMPL(__imp__sub_82FAC978) {
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
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fac9b0
	if (ctx.cr0.eq) goto loc_82FAC9B0;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC99C;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAC9A8;
	sub_82FA1FF0(ctx, base);
loc_82FAC9A8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82faca00
	goto loc_82FACA00;
loc_82FAC9B0:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// bgt cr6,0x82fac9bc
	if (ctx.cr6.gt) goto loc_82FAC9BC;
	// li r4,4
	ctx.r4.s64 = 4;
loc_82FAC9BC:
	// addi r31,r4,-1
	ctx.r31.s64 = ctx.r4.s64 + -1;
	// addi r30,r31,4
	ctx.r30.s64 = ctx.r31.s64 + 4;
	// add r11,r30,r3
	ctx.r11.u64 = ctx.r30.u64 + ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fac9e4
	if (!ctx.cr6.gt) goto loc_82FAC9E4;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAC9D4;
	sub_82FA6DB0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// b 0x82faca00
	goto loc_82FACA00;
loc_82FAC9E4:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82fa76f0
	ctx.lr = 0x82FAC9EC;
	sub_82FA76F0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fac9a8
	if (ctx.cr0.eq) goto loc_82FAC9A8;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// andc r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r31.u64;
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
loc_82FACA00:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82FACA1C"))) PPC_WEAK_FUNC(sub_82FACA1C);
PPC_FUNC_IMPL(__imp__sub_82FACA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FACA20"))) PPC_WEAK_FUNC(sub_82FACA20);
PPC_FUNC_IMPL(__imp__sub_82FACA20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FACA28;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82facaa4
	if (ctx.cr6.eq) goto loc_82FACAA4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FACA3C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82faca3c
	if (!ctx.cr6.eq) goto loc_82FACA3C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa76f0
	ctx.lr = 0x82FACA64;
	sub_82FA76F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82facaa4
	if (ctx.cr0.eq) goto loc_82FACAA4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa5590
	ctx.lr = 0x82FACA7C;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82faca8c
	if (!ctx.cr0.eq) goto loc_82FACA8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82facaa8
	goto loc_82FACAA8;
loc_82FACA8C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fa20c8
	ctx.lr = 0x82FACAA4;
	sub_82FA20C8(ctx, base);
loc_82FACAA4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FACAA8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FACAB0"))) PPC_WEAK_FUNC(sub_82FACAB0);
PPC_FUNC_IMPL(__imp__sub_82FACAB0) {
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
	// bl 0x82a758f8
	ctx.lr = 0x82FACACC;
	sub_82A758F8(ctx, base);
	// lis r12,-414
	ctx.r12.s64 = -27131904;
	// lis r11,-27840
	ctx.r11.s64 = -1824522240;
	// ori r12,r12,20001
	ctx.r12.u64 = ctx.r12.u64 | 20001;
	// li r9,7
	ctx.r9.s64 = 7;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r11,r11,28671
	ctx.r11.u64 = ctx.r11.u64 | 28671;
	// oris r12,r12,10945
	ctx.r12.u64 = ctx.r12.u64 | 717291520;
	// rldimi r11,r9,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r9.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// lis r10,152
	ctx.r10.s64 = 9961472;
	// ori r12,r12,32768
	ctx.r12.u64 = ctx.r12.u64 | 32768;
	// ori r10,r10,38528
	ctx.r10.u64 = ctx.r10.u64 | 38528;
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// add r9,r9,r12
	ctx.r9.u64 = ctx.r9.u64 + ctx.r12.u64;
	// divdu r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 / ctx.r10.u64;
	// cmpd cr6,r3,r11
	ctx.cr6.compare<int64_t>(ctx.r3.s64, ctx.r11.s64, ctx.xer);
	// ble cr6,0x82facb10
	if (!ctx.cr6.gt) goto loc_82FACB10;
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FACB10:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82facb1c
	if (ctx.cr6.eq) goto loc_82FACB1C;
	// std r3,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r3.u64);
loc_82FACB1C:
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

__attribute__((alias("__imp__sub_82FACB30"))) PPC_WEAK_FUNC(sub_82FACB30);
PPC_FUNC_IMPL(__imp__sub_82FACB30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FACB34:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82facb34
	if (!ctx.cr0.eq) goto loc_82FACB34;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82facb74
	if (ctx.cr6.eq) goto loc_82FACB74;
	// addi r9,r4,-1
	ctx.r9.s64 = ctx.r4.s64 + -1;
loc_82FACB54:
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// beqlr 
	if (ctx.cr0.eq) return;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82facb54
	if (!ctx.cr6.eq) goto loc_82FACB54;
loc_82FACB74:
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FACB80"))) PPC_WEAK_FUNC(sub_82FACB80);
PPC_FUNC_IMPL(__imp__sub_82FACB80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82FACB88;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// lwz r18,292(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r21,r5
	ctx.r21.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r19,r10
	ctx.r19.u64 = ctx.r10.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r17,r20
	ctx.r17.u64 = ctx.r20.u64;
	// beq cr6,0x82facc88
	if (ctx.cr6.eq) goto loc_82FACC88;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82facbd4
	if (!ctx.cr6.eq) goto loc_82FACBD4;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82facc88
	if (!ctx.cr6.eq) goto loc_82FACC88;
	// b 0x82facbdc
	goto loc_82FACBDC;
loc_82FACBD4:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82facc88
	if (ctx.cr6.eq) goto loc_82FACC88;
loc_82FACBDC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82facbf0
	if (!ctx.cr6.eq) goto loc_82FACBF0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82facc88
	if (!ctx.cr6.eq) goto loc_82FACC88;
	// b 0x82facbf8
	goto loc_82FACBF8;
loc_82FACBF0:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82facc88
	if (ctx.cr6.eq) goto loc_82FACC88;
loc_82FACBF8:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82facc0c
	if (!ctx.cr6.eq) goto loc_82FACC0C;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82facc88
	if (!ctx.cr6.eq) goto loc_82FACC88;
	// b 0x82facc14
	goto loc_82FACC14;
loc_82FACC0C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82facc88
	if (ctx.cr6.eq) goto loc_82FACC88;
loc_82FACC14:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// bne cr6,0x82facc80
	if (!ctx.cr6.eq) goto loc_82FACC80;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82facc88
	if (!ctx.cr6.eq) goto loc_82FACC88;
loc_82FACC24:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82FACC30:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82facc44
	if (ctx.cr0.eq) goto loc_82FACC44;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bdnz 0x82facc30
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FACC30;
loc_82FACC44:
	// lbz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// li r27,-1
	ctx.r27.s64 = -1;
	// cmplwi cr6,r11,58
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 58, ctx.xer);
	// bne cr6,0x82facc90
	if (!ctx.cr6.eq) goto loc_82FACC90;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82facc78
	if (ctx.cr6.eq) goto loc_82FACC78;
	// cmplwi cr6,r21,3
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 3, ctx.xer);
	// blt cr6,0x82facdb8
	if (ctx.cr6.lt) goto loc_82FACDB8;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fc2fa8
	ctx.lr = 0x82FACC78;
	sub_82FC2FA8(ctx, base);
loc_82FACC78:
	// addi r31,r30,1
	ctx.r31.s64 = ctx.r30.s64 + 1;
	// b 0x82facc9c
	goto loc_82FACC9C;
loc_82FACC80:
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82facc24
	if (!ctx.cr6.eq) goto loc_82FACC24;
loc_82FACC88:
	// li r17,1
	ctx.r17.s64 = 1;
	// b 0x82facdb8
	goto loc_82FACDB8;
loc_82FACC90:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82facc9c
	if (ctx.cr6.eq) goto loc_82FACC9C;
	// stb r20,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r20.u8);
loc_82FACC9C:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82facd3c
	if (ctx.cr0.eq) goto loc_82FACD3C;
loc_82FACCB4:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x822d6f30
	ctx.lr = 0x82FACCC0;
	sub_822D6F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82faccd0
	if (ctx.cr0.eq) goto loc_82FACCD0;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// b 0x82faccfc
	goto loc_82FACCFC;
loc_82FACCD0:
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,47
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 47, ctx.xer);
	// beq cr6,0x82faccf8
	if (ctx.cr6.eq) goto loc_82FACCF8;
	// cmpwi cr6,r11,92
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 92, ctx.xer);
	// beq cr6,0x82faccf8
	if (ctx.cr6.eq) goto loc_82FACCF8;
	// cmpwi cr6,r11,46
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 46, ctx.xer);
	// bne cr6,0x82faccfc
	if (!ctx.cr6.eq) goto loc_82FACCFC;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82faccfc
	goto loc_82FACCFC;
loc_82FACCF8:
	// addi r30,r29,1
	ctx.r30.s64 = ctx.r29.s64 + 1;
loc_82FACCFC:
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82faccb4
	if (!ctx.cr0.eq) goto loc_82FACCB4;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82facd3c
	if (ctx.cr6.eq) goto loc_82FACD3C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82facd34
	if (ctx.cr6.eq) goto loc_82FACD34;
	// subf r6,r31,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r31.s64;
	// cmplw cr6,r22,r6
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82facdb8
	if (!ctx.cr6.gt) goto loc_82FACDB8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fc2fa8
	ctx.lr = 0x82FACD34;
	sub_82FC2FA8(ctx, base);
loc_82FACD34:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82facd48
	goto loc_82FACD48;
loc_82FACD3C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82facd48
	if (ctx.cr6.eq) goto loc_82FACD48;
	// stb r20,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r20.u8);
loc_82FACD48:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82facda4
	if (ctx.cr6.eq) goto loc_82FACDA4;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82facda4
	if (ctx.cr6.lt) goto loc_82FACDA4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82facd7c
	if (ctx.cr6.eq) goto loc_82FACD7C;
	// subf r6,r31,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r31.s64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82facdb8
	if (!ctx.cr6.gt) goto loc_82FACDB8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fc2fa8
	ctx.lr = 0x82FACD7C;
	sub_82FC2FA8(ctx, base);
loc_82FACD7C:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82face64
	if (ctx.cr6.eq) goto loc_82FACE64;
	// subf r6,r28,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r28.s64;
	// cmplw cr6,r18,r6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82facdb8
	if (!ctx.cr6.gt) goto loc_82FACDB8;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82fc2fa8
	ctx.lr = 0x82FACDA0;
	sub_82FC2FA8(ctx, base);
	// b 0x82face64
	goto loc_82FACE64;
loc_82FACDA4:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82face58
	if (ctx.cr6.eq) goto loc_82FACE58;
	// subf r6,r31,r29
	ctx.r6.s64 = ctx.r29.s64 - ctx.r31.s64;
	// cmplw cr6,r23,r6
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r6.u32, ctx.xer);
	// bgt cr6,0x82face48
	if (ctx.cr6.gt) goto loc_82FACE48;
loc_82FACDB8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82facdcc
	if (ctx.cr6.eq) goto loc_82FACDCC;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82facdcc
	if (ctx.cr6.eq) goto loc_82FACDCC;
	// stb r20,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r20.u8);
loc_82FACDCC:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82facde0
	if (ctx.cr6.eq) goto loc_82FACDE0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82facde0
	if (ctx.cr6.eq) goto loc_82FACDE0;
	// stb r20,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r20.u8);
loc_82FACDE0:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82facdf4
	if (ctx.cr6.eq) goto loc_82FACDF4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82facdf4
	if (ctx.cr6.eq) goto loc_82FACDF4;
	// stb r20,0(r24)
	PPC_STORE_U8(ctx.r24.u32 + 0, ctx.r20.u8);
loc_82FACDF4:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82face08
	if (ctx.cr6.eq) goto loc_82FACE08;
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// beq cr6,0x82face08
	if (ctx.cr6.eq) goto loc_82FACE08;
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
loc_82FACE08:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82face28
	if (!ctx.cr6.eq) goto loc_82FACE28;
loc_82FACE10:
	// bl 0x82fa6db0
	ctx.lr = 0x82FACE14;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FACE20;
	sub_82FA1FF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82face68
	goto loc_82FACE68;
loc_82FACE28:
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// bne cr6,0x82face10
	if (!ctx.cr6.eq) goto loc_82FACE10;
	// bl 0x82fa6db0
	ctx.lr = 0x82FACE34;
	sub_82FA6DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,34
	ctx.r10.s64 = 34;
	// li r3,34
	ctx.r3.s64 = 34;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82face68
	goto loc_82FACE68;
loc_82FACE48:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82fc2fa8
	ctx.lr = 0x82FACE58;
	sub_82FC2FA8(ctx, base);
loc_82FACE58:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82face64
	if (ctx.cr6.eq) goto loc_82FACE64;
	// stb r20,0(r19)
	PPC_STORE_U8(ctx.r19.u32 + 0, ctx.r20.u8);
loc_82FACE64:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FACE68:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FACE70"))) PPC_WEAK_FUNC(sub_82FACE70);
PPC_FUNC_IMPL(__imp__sub_82FACE70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FACE78;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// subfic r11,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r7.s64;
	// li r11,256
	ctx.r11.s64 = 256;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r6,0
	ctx.xer.ca = ctx.r6.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r6.s64;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r5.s64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r31,3
	ctx.r31.s64 = 3;
	// subfe r30,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r8,r4,0
	ctx.xer.ca = ctx.r4.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r4.s64;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// subfe r29,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// and r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 & ctx.r11.u64;
	// and r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 & ctx.r11.u64;
	// and r5,r29,r31
	ctx.r5.u64 = ctx.r29.u64 & ctx.r31.u64;
	// bl 0x82facb80
	ctx.lr = 0x82FACEC8;
	sub_82FACB80(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FACED0"))) PPC_WEAK_FUNC(sub_82FACED0);
PPC_FUNC_IMPL(__imp__sub_82FACED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r12,r3
	ctx.r12.s64 = -ctx.r3.s64;
	// neg r11,r12
	ctx.r11.s64 = -ctx.r12.s64;
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_82FACEEC:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x82faceec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FACEEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FACED4"))) PPC_WEAK_FUNC(sub_82FACED4);
PPC_FUNC_IMPL(__imp__sub_82FACED4) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// neg r11,r12
	ctx.r11.s64 = -ctx.r12.s64;
	// addi r0,r11,4095
	ctx.r0.s64 = ctx.r11.s64 + 4095;
	// srawi. r0,r0,12
	ctx.xer.ca = (ctx.r0.s32 < 0) & ((ctx.r0.u32 & 0xFFF) != 0);
	ctx.r0.s64 = ctx.r0.s32 >> 12;
	ctx.cr0.compare<int32_t>(ctx.r0.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mr r11,r1
	ctx.r11.u64 = ctx.r1.u64;
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
loc_82FACEEC:
	// lwzu r0,-4096(r11)
	ea = -4096 + ctx.r11.u32;
	ctx.r0.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// bdnz 0x82faceec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FACEEC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FACEF8"))) PPC_WEAK_FUNC(sub_82FACEF8);
PPC_FUNC_IMPL(__imp__sub_82FACEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82FACF00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82facf2c
	if (ctx.cr6.eq) goto loc_82FACF2C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fad1bc
	if (ctx.cr6.eq) goto loc_82FAD1BC;
loc_82FACF2C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82facf48
	if (!ctx.cr6.eq) goto loc_82FACF48;
	// bl 0x82fa6db0
	ctx.lr = 0x82FACF38;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FACF44;
	sub_82FA1FF0(ctx, base);
	// b 0x82fad1b8
	goto loc_82FAD1B8;
loc_82FACF48:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82fad12c
	if (ctx.cr6.eq) goto loc_82FAD12C;
	// lis r27,-31969
	ctx.r27.s64 = -2095120384;
	// lwz r9,-13976(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -13976);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82facf9c
	if (!ctx.cr6.eq) goto loc_82FACF9C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad1bc
	if (ctx.cr6.eq) goto loc_82FAD1BC;
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
loc_82FACF70:
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// cmplwi cr6,r10,255
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 255, ctx.xer);
	// bgt cr6,0x82fad1a8
	if (ctx.cr6.gt) goto loc_82FAD1A8;
	// stbx r10,r3,r28
	PPC_STORE_U8(ctx.r3.u32 + ctx.r28.u32, ctx.r10.u8);
	// lhzu r10,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fad1bc
	if (ctx.cr0.eq) goto loc_82FAD1BC;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmplw cr6,r3,r29
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82facf70
	if (ctx.cr6.lt) goto loc_82FACF70;
	// b 0x82fad1bc
	goto loc_82FAD1BC;
loc_82FACF9C:
	// lwz r11,172(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82fad03c
	if (!ctx.cr6.eq) goto loc_82FAD03C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82facff0
	if (ctx.cr6.eq) goto loc_82FACFF0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82FACFB8:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82facfd0
	if (ctx.cr0.eq) goto loc_82FACFD0;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82facfb8
	if (!ctx.cr0.eq) goto loc_82FACFB8;
loc_82FACFD0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82facff0
	if (ctx.cr6.eq) goto loc_82FACFF0;
	// lhz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82facff0
	if (!ctx.cr0.eq) goto loc_82FACFF0;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82FACFF0:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x82FAD014;
	sub_82A831C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fad1a8
	if (ctx.cr0.eq) goto loc_82FAD1A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fad1a8
	if (!ctx.cr6.eq) goto loc_82FAD1A8;
	// add r11,r3,r28
	ctx.r11.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fad1bc
	if (!ctx.cr0.eq) goto loc_82FAD1BC;
	// b 0x82fad1a0
	goto loc_82FAD1A0;
loc_82FAD03C:
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x82FAD060;
	sub_82A831C8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fad1a8
	if (!ctx.cr6.eq) goto loc_82FAD1A8;
	// beq 0x82fad07c
	if (ctx.cr0.eq) goto loc_82FAD07C;
	// addi r3,r30,-1
	ctx.r3.s64 = ctx.r30.s64 + -1;
	// b 0x82fad1bc
	goto loc_82FAD1BC;
loc_82FAD07C:
	// bl 0x82a78478
	ctx.lr = 0x82FAD080;
	sub_82A78478(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// bne cr6,0x82fad1a8
	if (!ctx.cr6.eq) goto loc_82FAD1A8;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad124
	if (ctx.cr6.eq) goto loc_82FAD124;
loc_82FAD090:
	// lwz r11,-13976(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -13976);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,172(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82a831c8
	ctx.lr = 0x82FAD0B8;
	sub_82A831C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fad1a8
	if (ctx.cr0.eq) goto loc_82FAD1A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fad1a8
	if (!ctx.cr6.eq) goto loc_82FAD1A8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fad1a8
	if (ctx.cr6.lt) goto loc_82FAD1A8;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// bgt cr6,0x82fad1a8
	if (ctx.cr6.gt) goto loc_82FAD1A8;
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82fad124
	if (ctx.cr6.gt) goto loc_82FAD124;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fad118
	if (!ctx.cr6.gt) goto loc_82FAD118;
loc_82FAD0F4:
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lbzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stbx r10,r30,r28
	PPC_STORE_U8(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u8);
	// beq 0x82fad124
	if (ctx.cr0.eq) goto loc_82FAD124;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82fad0f4
	if (ctx.cr6.lt) goto loc_82FAD0F4;
loc_82FAD118:
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82fad090
	if (ctx.cr6.lt) goto loc_82FAD090;
loc_82FAD124:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82fad1bc
	goto loc_82FAD1BC;
loc_82FAD12C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r11,-13976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fad168
	if (!ctx.cr6.eq) goto loc_82FAD168;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fad15c
	goto loc_82FAD15C;
loc_82FAD14C:
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bgt cr6,0x82fad1a8
	if (ctx.cr6.gt) goto loc_82FAD1A8;
	// lhzu r11,2(r31)
	ea = 2 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r31.u32 = ea;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82FAD15C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fad14c
	if (!ctx.cr0.eq) goto loc_82FAD14C;
	// b 0x82fad1bc
	goto loc_82FAD1BC;
loc_82FAD168:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,-1
	ctx.r6.s64 = -1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a831c8
	ctx.lr = 0x82FAD18C;
	sub_82A831C8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fad1a8
	if (ctx.cr0.eq) goto loc_82FAD1A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82fad1a8
	if (!ctx.cr6.eq) goto loc_82FAD1A8;
loc_82FAD1A0:
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// b 0x82fad1bc
	goto loc_82FAD1BC;
loc_82FAD1A8:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAD1AC;
	sub_82FA6DB0(ctx, base);
	// li r10,42
	ctx.r10.s64 = 42;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82FAD1B8:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82FAD1BC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD1C4"))) PPC_WEAK_FUNC(sub_82FAD1C4);
PPC_FUNC_IMPL(__imp__sub_82FAD1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD1C8"))) PPC_WEAK_FUNC(sub_82FAD1C8);
PPC_FUNC_IMPL(__imp__sub_82FAD1C8) {
	PPC_FUNC_PROLOGUE();
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82facef8
	sub_82FACEF8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD1D0"))) PPC_WEAK_FUNC(sub_82FAD1D0);
PPC_FUNC_IMPL(__imp__sub_82FAD1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82FAD1D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// beq cr6,0x82fad26c
	if (ctx.cr6.eq) goto loc_82FAD26C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fad274
	if (ctx.cr6.eq) goto loc_82FAD274;
loc_82FAD208:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad214
	if (ctx.cr6.eq) goto loc_82FAD214;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82FAD214:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fad220
	if (ctx.cr6.eq) goto loc_82FAD220;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
loc_82FAD220:
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bgt cr6,0x82fad230
	if (ctx.cr6.gt) goto loc_82FAD230;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82FAD230:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82fad274
	if (ctx.cr6.gt) goto loc_82FAD274;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82facef8
	ctx.lr = 0x82FAD24C;
	sub_82FACEF8(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82fad28c
	if (!ctx.cr6.eq) goto loc_82FAD28C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad260
	if (ctx.cr6.eq) goto loc_82FAD260;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
loc_82FAD260:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAD264;
	sub_82FA6DB0(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x82fad2ec
	goto loc_82FAD2EC;
loc_82FAD26C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fad208
	if (ctx.cr6.eq) goto loc_82FAD208;
loc_82FAD274:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAD278;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAD284;
	sub_82FA1FF0(ctx, base);
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x82fad2ec
	goto loc_82FAD2EC;
loc_82FAD28C:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad2dc
	if (ctx.cr6.eq) goto loc_82FAD2DC;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82fad2d4
	if (!ctx.cr6.gt) goto loc_82FAD2D4;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82fad2cc
	if (ctx.cr6.eq) goto loc_82FAD2CC;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// bgt cr6,0x82fad2cc
	if (ctx.cr6.gt) goto loc_82FAD2CC;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAD2B8;
	sub_82FA6DB0(ctx, base);
	// li r11,34
	ctx.r11.s64 = 34;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAD2C4;
	sub_82FA1FF0(ctx, base);
	// li r3,34
	ctx.r3.s64 = 34;
	// b 0x82fad2ec
	goto loc_82FAD2EC;
loc_82FAD2CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// li r27,80
	ctx.r27.s64 = 80;
loc_82FAD2D4:
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stb r28,-1(r10)
	PPC_STORE_U8(ctx.r10.u32 + -1, ctx.r28.u8);
loc_82FAD2DC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fad2e8
	if (ctx.cr6.eq) goto loc_82FAD2E8;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82FAD2E8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82FAD2EC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD2F4"))) PPC_WEAK_FUNC(sub_82FAD2F4);
PPC_FUNC_IMPL(__imp__sub_82FAD2F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD2F8"))) PPC_WEAK_FUNC(sub_82FAD2F8);
PPC_FUNC_IMPL(__imp__sub_82FAD2F8) {
	PPC_FUNC_PROLOGUE();
	// li r8,0
	ctx.r8.s64 = 0;
	// b 0x82fad1d0
	sub_82FAD1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD300"))) PPC_WEAK_FUNC(sub_82FAD300);
PPC_FUNC_IMPL(__imp__sub_82FAD300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82FAD308;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82FAD338;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fad358
	if (!ctx.cr6.eq) goto loc_82FAD358;
loc_82FAD340:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAD344;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAD350;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fad3dc
	goto loc_82FAD3DC;
loc_82FAD358:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fad368
	if (ctx.cr6.eq) goto loc_82FAD368;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad340
	if (ctx.cr6.eq) goto loc_82FAD340;
loc_82FAD368:
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bgt cr6,0x82fad380
	if (ctx.cr6.gt) goto loc_82FAD380;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
loc_82FAD380:
	// li r11,66
	ctx.r11.s64 = 66;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82faed00
	ctx.lr = 0x82FAD3A4;
	sub_82FAED00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fad3d8
	if (ctx.cr6.eq) goto loc_82FAD3D8;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82fad3cc
	if (ctx.cr0.lt) goto loc_82FAD3CC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x82fad3d8
	goto loc_82FAD3D8;
loc_82FAD3CC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82faea90
	ctx.lr = 0x82FAD3D8;
	sub_82FAEA90(ctx, base);
loc_82FAD3D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FAD3DC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD3E4"))) PPC_WEAK_FUNC(sub_82FAD3E4);
PPC_FUNC_IMPL(__imp__sub_82FAD3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD3E8"))) PPC_WEAK_FUNC(sub_82FAD3E8);
PPC_FUNC_IMPL(__imp__sub_82FAD3E8) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82fad300
	sub_82FAD300(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAD3F4"))) PPC_WEAK_FUNC(sub_82FAD3F4);
PPC_FUNC_IMPL(__imp__sub_82FAD3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD3F8"))) PPC_WEAK_FUNC(sub_82FAD3F8);
PPC_FUNC_IMPL(__imp__sub_82FAD3F8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82FAD3FC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fad3fc
	if (!ctx.cr6.eq) goto loc_82FAD3FC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAD41C"))) PPC_WEAK_FUNC(sub_82FAD41C);
PPC_FUNC_IMPL(__imp__sub_82FAD41C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD420"))) PPC_WEAK_FUNC(sub_82FAD420);
PPC_FUNC_IMPL(__imp__sub_82FAD420) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,97
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 97, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r3,122
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 122, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// addi r3,r3,-32
	ctx.r3.s64 = ctx.r3.s64 + -32;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAD438"))) PPC_WEAK_FUNC(sub_82FAD438);
PPC_FUNC_IMPL(__imp__sub_82FAD438) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82fad454
	if (ctx.cr6.eq) goto loc_82FAD454;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82FAD454:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FAD458:
	// divwu r10,r3,r5
	ctx.r10.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r5
	ctx.r3.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x82fad484
	if (!ctx.cr6.gt) goto loc_82FAD484;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// b 0x82fad488
	goto loc_82FAD488;
loc_82FAD484:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_82FAD488:
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fad458
	if (!ctx.cr6.eq) goto loc_82FAD458;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82FAD4A4:
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r10,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r10.u8);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fad4a4
	if (ctx.cr6.lt) goto loc_82FAD4A4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAD4C8"))) PPC_WEAK_FUNC(sub_82FAD4C8);
PPC_FUNC_IMPL(__imp__sub_82FAD4C8) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x82fad438
	ctx.lr = 0x82FAD4E0;
	sub_82FAD438(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAD4F4"))) PPC_WEAK_FUNC(sub_82FAD4F4);
PPC_FUNC_IMPL(__imp__sub_82FAD4F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD4F8"))) PPC_WEAK_FUNC(sub_82FAD4F8);
PPC_FUNC_IMPL(__imp__sub_82FAD4F8) {
	PPC_FUNC_PROLOGUE();
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// fabs f0,f1
	ctx.f0.u64 = ctx.f1.u64 & ~0x8000000000000000;
	// lfd f13,22472(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// bne cr6,0x82fad528
	if (!ctx.cr6.eq) goto loc_82FAD528;
	// b 0x82fad5e0
	goto loc_82FAD5E0;
loc_82FAD528:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-22576
	ctx.r11.s64 = ctx.r11.s64 + -22576;
	// lfd f13,-32(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82fad588
	if (!ctx.cr6.gt) goto loc_82FAD588;
	// lfd f13,-40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -40);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82fad554
	if (!ctx.cr6.gt) goto loc_82FAD554;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,22528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// b 0x82fad5d8
	goto loc_82FAD5D8;
loc_82FAD554:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f31,11528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// fmul f1,f0,f31
	ctx.f1.f64 = ctx.f0.f64 * ctx.f31.f64;
	// bl 0x82fa4be8
	ctx.lr = 0x82FAD564;
	sub_82FA4BE8(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,22528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fadd f12,f1,f0
	ctx.f12.f64 = ctx.f1.f64 + ctx.f0.f64;
	// lfd f13,22496(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22496);
	// fdiv f0,f0,f12
	ctx.f0.f64 = ctx.f0.f64 / ctx.f12.f64;
	// fsub f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 - ctx.f0.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x82fad5d8
	goto loc_82FAD5D8;
loc_82FAD588:
	// fmul f6,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f6.f64 = ctx.f0.f64 * ctx.f0.f64;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lfd f12,-16(r11)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + -16);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lfd f11,16(r11)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfd f9,8(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// lfd f8,0(r11)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f13,-22536(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22536);
	// lfd f10,-22544(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -22544);
	// lfd f7,22528(r8)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22528);
	// fnmsub f13,f6,f13,f12
	ctx.f13.f64 = -(ctx.f6.f64 * ctx.f13.f64 - ctx.f12.f64);
	// fadd f12,f6,f11
	ctx.f12.f64 = ctx.f6.f64 + ctx.f11.f64;
	// fmsub f13,f13,f6,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64 - ctx.f10.f64;
	// fmadd f12,f12,f6,f9
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f9.f64;
	// fmul f13,f13,f6
	ctx.f13.f64 = ctx.f13.f64 * ctx.f6.f64;
	// fmadd f12,f12,f6,f8
	ctx.f12.f64 = ctx.f12.f64 * ctx.f6.f64 + ctx.f8.f64;
	// fdiv f13,f13,f12
	ctx.f13.f64 = ctx.f13.f64 / ctx.f12.f64;
	// fadd f13,f13,f7
	ctx.f13.f64 = ctx.f13.f64 + ctx.f7.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82FAD5D8:
	// fneg f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f1,f30,f0,f13
	ctx.f1.f64 = ctx.f30.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
loc_82FAD5E0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
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

__attribute__((alias("__imp__sub_82FAD5F8"))) PPC_WEAK_FUNC(sub_82FAD5F8);
PPC_FUNC_IMPL(__imp__sub_82FAD5F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FAD600;
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
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// li r3,248
	ctx.r3.s64 = 248;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// ori r29,r11,65279
	ctx.r29.u64 = ctx.r11.u64 | 65279;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD628;
	sub_82FB7850(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82fad698
	if (!ctx.cr6.eq) goto loc_82FAD698;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fafba8
	ctx.lr = 0x82FAD644;
	sub_82FAFBA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82fad684
	if (!ctx.cr0.gt) goto loc_82FAD684;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82fad670
	if (!ctx.cr6.gt) goto loc_82FAD670;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82fad684
	if (!ctx.cr6.eq) goto loc_82FAD684;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x82fb7588
	ctx.lr = 0x82FAD66C;
	sub_82FB7588(ctx, base);
	// b 0x82fad84c
	goto loc_82FAD84C;
loc_82FAD670:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD67C;
	sub_82FB7850(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82fad84c
	goto loc_82FAD84C;
loc_82FAD684:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,22528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// b 0x82fad83c
	goto loc_82FAD83C;
loc_82FAD698:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x82fad670
	if (ctx.cr6.eq) goto loc_82FAD670;
	// fabs f1,f31
	ctx.f1.u64 = ctx.f31.u64 & ~0x8000000000000000;
	// li r30,-1
	ctx.r30.s64 = -1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82fad6bc
	if (ctx.cr6.lt) goto loc_82FAD6BC;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82FAD6BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f30,22528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fcmpu cr6,f1,f30
	ctx.cr6.compare(ctx.f1.f64, ctx.f30.f64);
	// addi r11,r11,-22528
	ctx.r11.s64 = ctx.r11.s64 + -22528;
	// ble cr6,0x82fad770
	if (!ctx.cr6.gt) goto loc_82FAD770;
	// lfd f0,8(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82fad73c
	if (!ctx.cr6.gt) goto loc_82FAD73C;
	// lfd f0,16(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82fad700
	if (!ctx.cr6.gt) goto loc_82FAD700;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f0,-14888(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14888);
	// fmul f2,f0,f31
	ctx.f2.f64 = ctx.f0.f64 * ctx.f31.f64;
	// b 0x82fad83c
	goto loc_82FAD83C;
loc_82FAD700:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa4cc8
	ctx.lr = 0x82FAD708;
	sub_82FA4CC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82fad730
	if (!ctx.cr6.gt) goto loc_82FAD730;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x82fafb30
	ctx.lr = 0x82FAD724;
	sub_82FAFB30(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82fad83c
	goto loc_82FAD83C;
loc_82FAD730:
	// bl 0x82fafb30
	ctx.lr = 0x82FAD734;
	sub_82FAFB30(ctx, base);
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// b 0x82fad760
	goto loc_82FAD760;
loc_82FAD73C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa4cc8
	ctx.lr = 0x82FAD744;
	sub_82FA4CC8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fafb30
	ctx.lr = 0x82FAD74C;
	sub_82FAFB30(ctx, base);
	// fdiv f13,f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f30.f64 / ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,22496(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22496);
	// fsub f13,f1,f13
	ctx.f13.f64 = ctx.f1.f64 - ctx.f13.f64;
	// fmul f30,f13,f0
	ctx.f30.f64 = ctx.f13.f64 * ctx.f0.f64;
loc_82FAD760:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82fad818
	if (!ctx.cr6.lt) goto loc_82FAD818;
	// fneg f30,f30
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = ctx.f30.u64 ^ 0x8000000000000000;
	// b 0x82fad818
	goto loc_82FAD818;
loc_82FAD770:
	// lfd f0,0(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82fad7c0
	if (!ctx.cr6.lt) goto loc_82FAD7C0;
	// stfd f31,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f31.u64);
	// lhz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 88);
	// fmr f30,f31
	ctx.f30.f64 = ctx.f31.f64;
	// rlwinm. r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fad818
	if (!ctx.cr0.eq) goto loc_82FAD818;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi. r11,r11,12
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fad7a8
	if (!ctx.cr0.eq) goto loc_82FAD7A8;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fad818
	if (ctx.cr6.eq) goto loc_82FAD818;
loc_82FAD7A8:
	// li r4,1536
	ctx.r4.s64 = 1536;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fafb70
	ctx.lr = 0x82FAD7B4;
	sub_82FAFB70(ctx, base);
	// li r3,18
	ctx.r3.s64 = 18;
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// b 0x82fad83c
	goto loc_82FAD83C;
loc_82FAD7C0:
	// fmul f7,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f7.f64 = ctx.f31.f64 * ctx.f31.f64;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lfd f13,40(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + 40);
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lfd f10,64(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 64);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lfd f0,-22416(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -22416);
	// lfd f12,-22424(r9)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r9.u32 + -22424);
	// lfd f11,-22432(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -22432);
	// lfd f9,-22440(r11)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r11.u32 + -22440);
	// lfd f8,-22448(r7)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r7.u32 + -22448);
	// fnmsub f0,f7,f0,f13
	ctx.f0.f64 = -(ctx.f7.f64 * ctx.f0.f64 - ctx.f13.f64);
	// fsub f13,f7,f12
	ctx.f13.f64 = ctx.f7.f64 - ctx.f12.f64;
	// fmsub f0,f0,f7,f11
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64 - ctx.f11.f64;
	// fmadd f13,f13,f7,f10
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 + ctx.f10.f64;
	// fmsub f0,f0,f7,f9
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64 - ctx.f9.f64;
	// fmsub f13,f13,f7,f8
	ctx.f13.f64 = ctx.f13.f64 * ctx.f7.f64 - ctx.f8.f64;
	// fdiv f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 / ctx.f13.f64;
	// fmadd f0,f0,f7,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f7.f64 + ctx.f30.f64;
	// fmul f30,f0,f31
	ctx.f30.f64 = ctx.f0.f64 * ctx.f31.f64;
loc_82FAD818:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fad834
	if (ctx.cr0.eq) goto loc_82FAD834;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD82C;
	sub_82FB7850(ctx, base);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// b 0x82fad84c
	goto loc_82FAD84C;
loc_82FAD834:
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82FAD83C:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x82fb7690
	ctx.lr = 0x82FAD84C;
	sub_82FB7690(ctx, base);
loc_82FAD84C:
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

__attribute__((alias("__imp__sub_82FAD85C"))) PPC_WEAK_FUNC(sub_82FAD85C);
PPC_FUNC_IMPL(__imp__sub_82FAD85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAD860"))) PPC_WEAK_FUNC(sub_82FAD860);
PPC_FUNC_IMPL(__imp__sub_82FAD860) {
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
	// lis r11,-16377
	ctx.r11.s64 = -1073283072;
	// stfd f1,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.f1.u64);
	// li r3,248
	ctx.r3.s64 = 248;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// ori r30,r11,65279
	ctx.r30.u64 = ctx.r11.u64 | 65279;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD898;
	sub_82FB7850(ctx, base);
	// lhz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,17,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82fad90c
	if (!ctx.cr6.eq) goto loc_82FAD90C;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fafba8
	ctx.lr = 0x82FAD8B4;
	sub_82FAFBA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82fad8f8
	if (!ctx.cr0.gt) goto loc_82FAD8F8;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82fad8e0
	if (!ctx.cr6.gt) goto loc_82FAD8E0;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82fad8f8
	if (!ctx.cr6.eq) goto loc_82FAD8F8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r3,19
	ctx.r3.s64 = 19;
	// bl 0x82fb7588
	ctx.lr = 0x82FAD8DC;
	sub_82FB7588(ctx, base);
	// b 0x82fada04
	goto loc_82FADA04;
loc_82FAD8E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD8EC;
	sub_82FB7850(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lfd f1,-14888(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14888);
	// b 0x82fada04
	goto loc_82FADA04;
loc_82FAD8F8:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,22528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fadd f2,f30,f0
	ctx.f2.f64 = ctx.f30.f64 + ctx.f0.f64;
	// b 0x82fad9f4
	goto loc_82FAD9F4;
loc_82FAD90C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f0,22472(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x82fad934
	if (!ctx.cr6.eq) goto loc_82FAD934;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD928;
	sub_82FB7850(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfd f1,22528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// b 0x82fada04
	goto loc_82FADA04;
loc_82FAD934:
	// fabs f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = ctx.f30.u64 & ~0x8000000000000000;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-22512
	ctx.r11.s64 = ctx.r11.s64 + -22512;
	// lfd f0,-8(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -8);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82fad9a4
	if (!ctx.cr6.gt) goto loc_82FAD9A4;
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x82fad968
	if (!ctx.cr6.gt) goto loc_82FAD968;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r3,17
	ctx.r3.s64 = 17;
	// lfd f2,-14888(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14888);
	// b 0x82fad9f4
	goto loc_82FAD9F4;
loc_82FAD968:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa4cc8
	ctx.lr = 0x82FAD970;
	sub_82FA4CC8(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// cmpwi cr6,r4,1024
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1024, ctx.xer);
	// ble cr6,0x82fad998
	if (!ctx.cr6.gt) goto loc_82FAD998;
	// addi r4,r4,-1536
	ctx.r4.s64 = ctx.r4.s64 + -1536;
	// bl 0x82fafb30
	ctx.lr = 0x82FAD98C;
	sub_82FAFB30(ctx, base);
	// fmr f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f1.f64;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x82fad9f4
	goto loc_82FAD9F4;
loc_82FAD998:
	// bl 0x82fafb30
	ctx.lr = 0x82FAD99C;
	sub_82FAFB30(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82fad9d0
	goto loc_82FAD9D0;
loc_82FAD9A4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa4cc8
	ctx.lr = 0x82FAD9AC;
	sub_82FA4CC8(ctx, base);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fafb30
	ctx.lr = 0x82FAD9B4;
	sub_82FAFB30(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f0,22528(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fdiv f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 / ctx.f1.f64;
	// lfd f13,22496(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22496);
	// fadd f0,f0,f1
	ctx.f0.f64 = ctx.f0.f64 + ctx.f1.f64;
	// fmul f31,f0,f13
	ctx.f31.f64 = ctx.f0.f64 * ctx.f13.f64;
loc_82FAD9D0:
	// rlwinm. r11,r31,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fad9ec
	if (ctx.cr0.eq) goto loc_82FAD9EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAD9E4;
	sub_82FB7850(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// b 0x82fada04
	goto loc_82FADA04;
loc_82FAD9EC:
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// li r3,16
	ctx.r3.s64 = 16;
loc_82FAD9F4:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82fb7690
	ctx.lr = 0x82FADA04;
	sub_82FB7690(ctx, base);
loc_82FADA04:
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

__attribute__((alias("__imp__sub_82FADA24"))) PPC_WEAK_FUNC(sub_82FADA24);
PPC_FUNC_IMPL(__imp__sub_82FADA24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADA28"))) PPC_WEAK_FUNC(sub_82FADA28);
PPC_FUNC_IMPL(__imp__sub_82FADA28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82FADA30;
	__savegprlr_21(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fada68
	if (!ctx.cr6.eq) goto loc_82FADA68;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fada68
	if (ctx.cr6.eq) goto loc_82FADA68;
loc_82FADA50:
	// bl 0x82fa6db0
	ctx.lr = 0x82FADA54;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FADA60;
	sub_82FA1FF0(ctx, base);
loc_82FADA60:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82FADA68:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82fada50
	if (ctx.cr6.eq) goto loc_82FADA50;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82fada50
	if (ctx.cr6.eq) goto loc_82FADA50;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82fada60
	if (ctx.cr6.lt) goto loc_82FADA60;
	// addi r11,r4,-1
	ctx.r11.s64 = ctx.r4.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// li r21,0
	ctx.r21.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// add r28,r11,r3
	ctx.r28.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r22,r10,-4
	ctx.r22.s64 = ctx.r10.s64 + -4;
	// addi r23,r9,-4
	ctx.r23.s64 = ctx.r9.s64 + -4;
loc_82FADAA4:
	// subf r11,r24,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r24.s64;
	// twllei r27,0
	if (ctx.r27.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r11,r27
	ctx.r11.u32 = ctx.r11.u32 / ctx.r27.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bgt cr6,0x82fadb5c
	if (ctx.cr6.gt) goto loc_82FADB5C;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r24
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82fadb40
	if (!ctx.cr6.gt) goto loc_82FADB40;
	// add r28,r24,r27
	ctx.r28.u64 = ctx.r24.u64 + ctx.r27.u64;
loc_82FADACC:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82fadb08
	if (ctx.cr6.gt) goto loc_82FADB08;
loc_82FADADC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADAF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fadafc
	if (!ctx.cr6.gt) goto loc_82FADAFC;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82FADAFC:
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82fadadc
	if (!ctx.cr6.gt) goto loc_82FADADC;
loc_82FADB08:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82fadb34
	if (ctx.cr6.eq) goto loc_82FADB34;
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82FADB1C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fadb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FADB1C;
loc_82FADB34:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82fadacc
	if (ctx.cr6.gt) goto loc_82FADACC;
loc_82FADB40:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r23,r23,-4
	ctx.r23.s64 = ctx.r23.s64 + -4;
	// addi r22,r22,-4
	ctx.r22.s64 = ctx.r22.s64 + -4;
	// blt 0x82fada60
	if (ctx.cr0.lt) goto loc_82FADA60;
	// lwz r24,4(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// lwz r28,4(r22)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// b 0x82fadaa4
	goto loc_82FADAA4;
loc_82FADB5C:
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mullw r11,r11,r27
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82FADB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fadbb0
	if (!ctx.cr6.gt) goto loc_82FADBB0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// cmplw cr6,r24,r31
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82fadbb0
	if (ctx.cr6.eq) goto loc_82FADBB0;
	// subf r10,r31,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r31.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82FADB98:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fadb98
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FADB98;
loc_82FADBB0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADBC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fadbf8
	if (!ctx.cr6.gt) goto loc_82FADBF8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r24,r28
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82fadbf8
	if (ctx.cr6.eq) goto loc_82FADBF8;
	// subf r10,r28,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r28.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82FADBE0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fadbe0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FADBE0;
loc_82FADBF8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADC0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fadc40
	if (!ctx.cr6.gt) goto loc_82FADC40;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82fadc40
	if (ctx.cr6.eq) goto loc_82FADC40;
	// subf r10,r28,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82FADC28:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fadc28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FADC28;
loc_82FADC40:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82FADC48:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// ble cr6,0x82fadc80
	if (!ctx.cr6.gt) goto loc_82FADC80;
loc_82FADC50:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fadc80
	if (!ctx.cr6.lt) goto loc_82FADC80;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADC70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fadc50
	if (!ctx.cr6.gt) goto loc_82FADC50;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82fadca8
	if (ctx.cr6.gt) goto loc_82FADCA8;
loc_82FADC80:
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bgt cr6,0x82fadca8
	if (ctx.cr6.gt) goto loc_82FADCA8;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADCA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82fadc80
	if (!ctx.cr6.gt) goto loc_82FADC80;
loc_82FADCA8:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82fadcd0
	if (!ctx.cr6.gt) goto loc_82FADCD0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADCC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82fadca8
	if (ctx.cr6.gt) goto loc_82FADCA8;
loc_82FADCD0:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82fadd10
	if (ctx.cr6.gt) goto loc_82FADD10;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// beq cr6,0x82fadd00
	if (ctx.cr6.eq) goto loc_82FADD00;
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82FADCE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stbx r9,r10,r11
	PPC_STORE_U8(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u8);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fadce8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FADCE8;
loc_82FADD00:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fadc48
	if (!ctx.cr6.eq) goto loc_82FADC48;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// b 0x82fadc48
	goto loc_82FADC48;
loc_82FADD10:
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82fadd4c
	if (!ctx.cr6.lt) goto loc_82FADD4C;
loc_82FADD1C:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r31
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r31.u32, ctx.xer);
	// ble cr6,0x82fadd4c
	if (!ctx.cr6.gt) goto loc_82FADD4C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADD3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fadd1c
	if (ctx.cr6.eq) goto loc_82FADD1C;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82fadd74
	if (ctx.cr6.lt) goto loc_82FADD74;
loc_82FADD4C:
	// subf r29,r27,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r27.s64;
	// cmplw cr6,r29,r24
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r24.u32, ctx.xer);
	// ble cr6,0x82fadd74
	if (!ctx.cr6.gt) goto loc_82FADD74;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bctrl 
	ctx.lr = 0x82FADD6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82fadd4c
	if (ctx.cr6.eq) goto loc_82FADD4C;
loc_82FADD74:
	// subf r11,r30,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r30.s64;
	// subf r10,r24,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r24.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82faddb0
	if (ctx.cr6.lt) goto loc_82FADDB0;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82fadda0
	if (!ctx.cr6.lt) goto loc_82FADDA0;
	// stw r24,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r24.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r29,4(r22)
	PPC_STORE_U32(ctx.r22.u32 + 4, ctx.r29.u32);
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
loc_82FADDA0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82fadb40
	if (!ctx.cr6.lt) goto loc_82FADB40;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// b 0x82fadaa4
	goto loc_82FADAA4;
loc_82FADDB0:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82faddc4
	if (!ctx.cr6.lt) goto loc_82FADDC4;
	// stwu r30,4(r23)
	ea = 4 + ctx.r23.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r23.u32 = ea;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stwu r28,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r22.u32 = ea;
loc_82FADDC4:
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82fadb40
	if (!ctx.cr6.lt) goto loc_82FADB40;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// b 0x82fadaa4
	goto loc_82FADAA4;
}

__attribute__((alias("__imp__sub_82FADDD4"))) PPC_WEAK_FUNC(sub_82FADDD4);
PPC_FUNC_IMPL(__imp__sub_82FADDD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADDD8"))) PPC_WEAK_FUNC(sub_82FADDD8);
PPC_FUNC_IMPL(__imp__sub_82FADDD8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r11,-14928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82fc3050
	sub_82FC3050(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FADDEC"))) PPC_WEAK_FUNC(sub_82FADDEC);
PPC_FUNC_IMPL(__imp__sub_82FADDEC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FADDF0"))) PPC_WEAK_FUNC(sub_82FADDF0);
PPC_FUNC_IMPL(__imp__sub_82FADDF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r31.u64);
	// mflr r31
	ctx.r31.u64 = ctx.lr;
	// stwu r1,-80(r1)
	ea = -80 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// bl 0x8317a2a4
	ctx.lr = 0x82FADE08;
	__imp__RtlUnwind(ctx, base);
	// mtlr r31
	ctx.lr = ctx.r31.u64;
	// ld r31,8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 8);
	// addi r1,r1,80
	ctx.r1.s64 = ctx.r1.s64 + 80;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FADE18"))) PPC_WEAK_FUNC(sub_82FADE18);
PPC_FUNC_IMPL(__imp__sub_82FADE18) {
	PPC_FUNC_PROLOGUE();
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82FADE1C:
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// mr. r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// sthx r10,r11,r4
	PPC_STORE_U16(ctx.r11.u32 + ctx.r4.u32, ctx.r10.u16);
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// bne 0x82fade1c
	if (!ctx.cr0.eq) goto loc_82FADE1C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FADE34"))) PPC_WEAK_FUNC(sub_82FADE34);
PPC_FUNC_IMPL(__imp__sub_82FADE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADE38"))) PPC_WEAK_FUNC(sub_82FADE38);
PPC_FUNC_IMPL(__imp__sub_82FADE38) {
	PPC_FUNC_PROLOGUE();
	// b 0x831791e4
	__imp__KeTlsGetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FADE3C"))) PPC_WEAK_FUNC(sub_82FADE3C);
PPC_FUNC_IMPL(__imp__sub_82FADE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADE40"))) PPC_WEAK_FUNC(sub_82FADE40);
PPC_FUNC_IMPL(__imp__sub_82FADE40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-14912(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14912);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FADE4C"))) PPC_WEAK_FUNC(sub_82FADE4C);
PPC_FUNC_IMPL(__imp__sub_82FADE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADE50"))) PPC_WEAK_FUNC(sub_82FADE50);
PPC_FUNC_IMPL(__imp__sub_82FADE50) {
	PPC_FUNC_PROLOGUE();
	// b 0x83179204
	__imp__KeTlsSetValue(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FADE54"))) PPC_WEAK_FUNC(sub_82FADE54);
PPC_FUNC_IMPL(__imp__sub_82FADE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADE58"))) PPC_WEAK_FUNC(sub_82FADE58);
PPC_FUNC_IMPL(__imp__sub_82FADE58) {
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
	// lwz r3,-14912(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -14912);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82fade84
	if (ctx.cr6.eq) goto loc_82FADE84;
	// bl 0x831791f4
	ctx.lr = 0x82FADE7C;
	__imp__KeTlsFree(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,-14912(r31)
	PPC_STORE_U32(ctx.r31.u32 + -14912, ctx.r11.u32);
loc_82FADE84:
	// bl 0x82fafd28
	ctx.lr = 0x82FADE88;
	sub_82FAFD28(ctx, base);
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

__attribute__((alias("__imp__sub_82FADE9C"))) PPC_WEAK_FUNC(sub_82FADE9C);
PPC_FUNC_IMPL(__imp__sub_82FADE9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADEA0"))) PPC_WEAK_FUNC(sub_82FADEA0);
PPC_FUNC_IMPL(__imp__sub_82FADEA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12816
	ctx.r11.s64 = ctx.r11.s64 + -12816;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// stw r11,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r11.u32);
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FADEC0"))) PPC_WEAK_FUNC(sub_82FADEC0);
PPC_FUNC_IMPL(__imp__sub_82FADEC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FADEC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a78478
	ctx.lr = 0x82FADED0;
	sub_82A78478(ctx, base);
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,-14912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14912);
	// bl 0x831791e4
	ctx.lr = 0x82FADEE0;
	__imp__KeTlsGetValue(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82fadf70
	if (!ctx.cr0.eq) goto loc_82FADF70;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-14912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14912);
	// bl 0x83179204
	ctx.lr = 0x82FADEF4;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fadf80
	if (ctx.cr0.eq) goto loc_82FADF80;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fac8f8
	ctx.lr = 0x82FADF08;
	sub_82FAC8F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,-14912(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14912);
	// beq 0x82fadf64
	if (ctx.cr0.eq) goto loc_82FADF64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x83179204
	ctx.lr = 0x82FADF1C;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fadf54
	if (ctx.cr0.eq) goto loc_82FADF54;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12816
	ctx.r11.s64 = ctx.r11.s64 + -12816;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82a74720
	ctx.lr = 0x82FADF44;
	sub_82A74720(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82fadf80
	goto loc_82FADF80;
loc_82FADF54:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa27a8
	ctx.lr = 0x82FADF5C;
	sub_82FA27A8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82fadf80
	goto loc_82FADF80;
loc_82FADF64:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83179204
	ctx.lr = 0x82FADF6C;
	__imp__KeTlsSetValue(ctx, base);
	// b 0x82fadf80
	goto loc_82FADF80;
loc_82FADF70:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
loc_82FADF80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a831c0
	ctx.lr = 0x82FADF88;
	sub_82A831C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FADF94"))) PPC_WEAK_FUNC(sub_82FADF94);
PPC_FUNC_IMPL(__imp__sub_82FADF94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADF98"))) PPC_WEAK_FUNC(sub_82FADF98);
PPC_FUNC_IMPL(__imp__sub_82FADF98) {
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
	// bl 0x82fadec0
	ctx.lr = 0x82FADFAC;
	sub_82FADEC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82fadfbc
	if (!ctx.cr0.eq) goto loc_82FADFBC;
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82fab538
	ctx.lr = 0x82FADFBC;
	sub_82FAB538(ctx, base);
loc_82FADFBC:
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

__attribute__((alias("__imp__sub_82FADFD4"))) PPC_WEAK_FUNC(sub_82FADFD4);
PPC_FUNC_IMPL(__imp__sub_82FADFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FADFD8"))) PPC_WEAK_FUNC(sub_82FADFD8);
PPC_FUNC_IMPL(__imp__sub_82FADFD8) {
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
	// beq cr6,0x82fae084
	if (ctx.cr6.eq) goto loc_82FAE084;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae004
	if (ctx.cr6.eq) goto loc_82FAE004;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE004;
	sub_82FA27A8(ctx, base);
loc_82FAE004:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae014
	if (ctx.cr6.eq) goto loc_82FAE014;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE014;
	sub_82FA27A8(ctx, base);
loc_82FAE014:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae024
	if (ctx.cr6.eq) goto loc_82FAE024;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE024;
	sub_82FA27A8(ctx, base);
loc_82FAE024:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae034
	if (ctx.cr6.eq) goto loc_82FAE034;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE034;
	sub_82FA27A8(ctx, base);
loc_82FAE034:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae044
	if (ctx.cr6.eq) goto loc_82FAE044;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE044;
	sub_82FA27A8(ctx, base);
loc_82FAE044:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae054
	if (ctx.cr6.eq) goto loc_82FAE054;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE054;
	sub_82FA27A8(ctx, base);
loc_82FAE054:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fae064
	if (ctx.cr6.eq) goto loc_82FAE064;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE064;
	sub_82FA27A8(ctx, base);
loc_82FAE064:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r11,r11,-12816
	ctx.r11.s64 = ctx.r11.s64 + -12816;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82fae07c
	if (ctx.cr6.eq) goto loc_82FAE07C;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE07C;
	sub_82FA27A8(ctx, base);
loc_82FAE07C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE084;
	sub_82FA27A8(ctx, base);
loc_82FAE084:
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

__attribute__((alias("__imp__sub_82FAE098"))) PPC_WEAK_FUNC(sub_82FAE098);
PPC_FUNC_IMPL(__imp__sub_82FAE098) {
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
	// lis r30,-31969
	ctx.r30.s64 = -2095120384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-14912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14912);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fae0ec
	if (ctx.cr6.eq) goto loc_82FAE0EC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fae0d8
	if (!ctx.cr6.eq) goto loc_82FAE0D8;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x831791e4
	ctx.lr = 0x82FAE0D0;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r11,-14912(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -14912);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82FAE0D8:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x83179204
	ctx.lr = 0x82FAE0E4;
	__imp__KeTlsSetValue(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fadfd8
	ctx.lr = 0x82FAE0EC;
	sub_82FADFD8(ctx, base);
loc_82FAE0EC:
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

__attribute__((alias("__imp__sub_82FAE104"))) PPC_WEAK_FUNC(sub_82FAE104);
PPC_FUNC_IMPL(__imp__sub_82FAE104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE108"))) PPC_WEAK_FUNC(sub_82FAE108);
PPC_FUNC_IMPL(__imp__sub_82FAE108) {
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
	// bl 0x82fab2a0
	ctx.lr = 0x82FAE120;
	sub_82FAB2A0(ctx, base);
	// bl 0x82fafe50
	ctx.lr = 0x82FAE124;
	sub_82FAFE50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fae1c0
	if (ctx.cr0.eq) goto loc_82FAE1C0;
	// bl 0x831791d4
	ctx.lr = 0x82FAE130;
	__imp__KeTlsAlloc(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// stw r3,-14912(r11)
	PPC_STORE_U32(ctx.r11.u32 + -14912, ctx.r3.u32);
	// beq cr6,0x82fae1c0
	if (ctx.cr6.eq) goto loc_82FAE1C0;
	// li r4,196
	ctx.r4.s64 = 196;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fac8f8
	ctx.lr = 0x82FAE150;
	sub_82FAC8F8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fae1c0
	if (ctx.cr0.eq) goto loc_82FAE1C0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179204
	ctx.lr = 0x82FAE164;
	__imp__KeTlsSetValue(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fae1c0
	if (ctx.cr0.eq) goto loc_82FAE1C0;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-12816
	ctx.r11.s64 = ctx.r11.s64 + -12816;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// bl 0x82a74720
	ctx.lr = 0x82FAE18C;
	sub_82A74720(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,-32004
	ctx.r11.s64 = -2097414144;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// addi r10,r10,11432
	ctx.r10.s64 = ctx.r10.s64 + 11432;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r11,r11,12560
	ctx.r11.s64 = ctx.r11.s64 + 12560;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// bl 0x82a75580
	ctx.lr = 0x82FAE1B8;
	sub_82A75580(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fae1c8
	goto loc_82FAE1C8;
loc_82FAE1C0:
	// bl 0x82fade58
	ctx.lr = 0x82FAE1C4;
	sub_82FADE58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAE1C8:
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

__attribute__((alias("__imp__sub_82FAE1E0"))) PPC_WEAK_FUNC(sub_82FAE1E0);
PPC_FUNC_IMPL(__imp__sub_82FAE1E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FAE1E8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stfd f1,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.f1.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fb7850
	ctx.lr = 0x82FAE208;
	sub_82FB7850(ctx, base);
	// lis r10,-16377
	ctx.r10.s64 = -1073283072;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// ori r28,r10,65279
	ctx.r28.u64 = ctx.r10.u64 | 65279;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-14904(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14904);
	// bl 0x82fb7850
	ctx.lr = 0x82FAE224;
	sub_82FB7850(ctx, base);
	// lhz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 160);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// rlwinm r10,r11,0,17,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplwi cr6,r10,32752
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32752, ctx.xer);
	// bne cr6,0x82fae2c0
	if (!ctx.cr6.eq) goto loc_82FAE2C0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lfd f0,-14880(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -14880);
	// stfd f0,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f0.u64);
	// bl 0x82fafba8
	ctx.lr = 0x82FAE24C;
	sub_82FAFBA8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82fae298
	if (!ctx.cr0.gt) goto loc_82FAE298;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82fae27c
	if (!ctx.cr6.gt) goto loc_82FAE27C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82fae298
	if (!ctx.cr6.eq) goto loc_82FAE298;
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,28
	ctx.r3.s64 = 28;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fb7588
	ctx.lr = 0x82FAE278;
	sub_82FB7588(ctx, base);
	// b 0x82fae304
	goto loc_82FAE304;
loc_82FAE27C:
	// stfd f31,0(r31)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f31.u64);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lfd f1,22472(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// bl 0x82fac678
	ctx.lr = 0x82FAE290;
	sub_82FAC678(ctx, base);
	// fmr f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f1.f64;
	// b 0x82fae2f4
	goto loc_82FAE2F4;
loc_82FAE298:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r4,28
	ctx.r4.s64 = 28;
	// li r3,8
	ctx.r3.s64 = 8;
	// lfd f0,22528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fadd f2,f31,f0
	ctx.f2.f64 = ctx.f31.f64 + ctx.f0.f64;
	// stfd f2,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f2.u64);
	// bl 0x82fb7690
	ctx.lr = 0x82FAE2BC;
	sub_82FB7690(ctx, base);
	// b 0x82fae304
	goto loc_82FAE304;
loc_82FAE2C0:
	// bl 0x82fb8300
	ctx.lr = 0x82FAE2C4;
	sub_82FB8300(ctx, base);
	// fsub f31,f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f31.f64 - ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f1.u64);
	// stfd f31,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f31.u64);
	// lfd f0,22472(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bne cr6,0x82fae2f4
	if (!ctx.cr6.eq) goto loc_82FAE2F4;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// rlwinm r10,r29,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8000;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lfd f31,80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82FAE2F4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb7850
	ctx.lr = 0x82FAE300;
	sub_82FB7850(ctx, base);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82FAE304:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAE310"))) PPC_WEAK_FUNC(sub_82FAE310);
PPC_FUNC_IMPL(__imp__sub_82FAE310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
loc_82FAE320:
	// lhzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// sth r9,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// beq 0x82fae33c
	if (ctx.cr0.eq) goto loc_82FAE33C;
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82fae320
	if (!ctx.cr0.eq) goto loc_82FAE320;
loc_82FAE33C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82FAE360:
	// sthu r9,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82fae360
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FAE360;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE36C"))) PPC_WEAK_FUNC(sub_82FAE36C);
PPC_FUNC_IMPL(__imp__sub_82FAE36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE370"))) PPC_WEAK_FUNC(sub_82FAE370);
PPC_FUNC_IMPL(__imp__sub_82FAE370) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmplwi cr6,r11,97
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 97, ctx.xer);
	// blt cr6,0x82fae390
	if (ctx.cr6.lt) goto loc_82FAE390;
	// cmplwi cr6,r11,122
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 122, ctx.xer);
	// bgt cr6,0x82fae390
	if (ctx.cr6.gt) goto loc_82FAE390;
	// addi r11,r11,-32
	ctx.r11.s64 = ctx.r11.s64 + -32;
loc_82FAE390:
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE398"))) PPC_WEAK_FUNC(sub_82FAE398);
PPC_FUNC_IMPL(__imp__sub_82FAE398) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82fae3b4
	if (ctx.cr6.eq) goto loc_82FAE3B4;
	// li r10,45
	ctx.r10.s64 = 45;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// sth r10,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r10.u16);
	// neg r3,r3
	ctx.r3.s64 = -ctx.r3.s64;
loc_82FAE3B4:
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82FAE3B8:
	// divwu r10,r3,r5
	ctx.r10.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// mullw r10,r10,r5
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r5.s32);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// divwu r3,r3,r5
	ctx.r3.u32 = ctx.r3.u32 / ctx.r5.u32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// cmplwi cr6,r10,9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 9, ctx.xer);
	// ble cr6,0x82fae3e4
	if (!ctx.cr6.gt) goto loc_82FAE3E4;
	// addi r10,r10,87
	ctx.r10.s64 = ctx.r10.s64 + 87;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// b 0x82fae3e8
	goto loc_82FAE3E8;
loc_82FAE3E4:
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
loc_82FAE3E8:
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fae3b8
	if (!ctx.cr6.eq) goto loc_82FAE3B8;
	// li r10,0
	ctx.r10.s64 = 0;
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
loc_82FAE404:
	// lhz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r10,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r10.u16);
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// sth r8,0(r9)
	PPC_STORE_U16(ctx.r9.u32 + 0, ctx.r8.u16);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82fae404
	if (ctx.cr6.lt) goto loc_82FAE404;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE428"))) PPC_WEAK_FUNC(sub_82FAE428);
PPC_FUNC_IMPL(__imp__sub_82FAE428) {
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
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// bl 0x82fae398
	ctx.lr = 0x82FAE440;
	sub_82FAE398(ctx, base);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE454"))) PPC_WEAK_FUNC(sub_82FAE454);
PPC_FUNC_IMPL(__imp__sub_82FAE454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE458"))) PPC_WEAK_FUNC(sub_82FAE458);
PPC_FUNC_IMPL(__imp__sub_82FAE458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82FAE460;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82FAE490;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fae4b0
	if (!ctx.cr6.eq) goto loc_82FAE4B0;
loc_82FAE498:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE49C;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAE4A8;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fae574
	goto loc_82FAE574;
loc_82FAE4B0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82fae4c0
	if (ctx.cr6.eq) goto loc_82FAE4C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fae498
	if (ctx.cr6.eq) goto loc_82FAE498;
loc_82FAE4C0:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// li r10,66
	ctx.r10.s64 = 66;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fae4ec
	if (!ctx.cr6.gt) goto loc_82FAE4EC;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82fae4f0
	goto loc_82FAE4F0;
loc_82FAE4EC:
	// rlwinm r11,r29,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FAE4F0:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb8348
	ctx.lr = 0x82FAE508;
	sub_82FB8348(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fae570
	if (ctx.cr6.eq) goto loc_82FAE570;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// blt 0x82fae53c
	if (ctx.cr0.lt) goto loc_82FAE53C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// b 0x82fae54c
	goto loc_82FAE54C;
loc_82FAE53C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82faea90
	ctx.lr = 0x82FAE548;
	sub_82FAEA90(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FAE54C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt 0x82fae564
	if (ctx.cr0.lt) goto loc_82FAE564;
	// stb r26,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r26.u8);
	// b 0x82fae570
	goto loc_82FAE570;
loc_82FAE564:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82faea90
	ctx.lr = 0x82FAE570;
	sub_82FAEA90(ctx, base);
loc_82FAE570:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82FAE574:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAE57C"))) PPC_WEAK_FUNC(sub_82FAE57C);
PPC_FUNC_IMPL(__imp__sub_82FAE57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE580"))) PPC_WEAK_FUNC(sub_82FAE580);
PPC_FUNC_IMPL(__imp__sub_82FAE580) {
	PPC_FUNC_PROLOGUE();
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// b 0x82fae458
	sub_82FAE458(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAE58C"))) PPC_WEAK_FUNC(sub_82FAE58C);
PPC_FUNC_IMPL(__imp__sub_82FAE58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE590"))) PPC_WEAK_FUNC(sub_82FAE590);
PPC_FUNC_IMPL(__imp__sub_82FAE590) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82FAE598;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82FAE5C8;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fae5e8
	if (!ctx.cr6.eq) goto loc_82FAE5E8;
loc_82FAE5D0:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE5D4;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAE5E0;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fae644
	goto loc_82FAE644;
loc_82FAE5E8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fae5d0
	if (ctx.cr6.eq) goto loc_82FAE5D0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x82FAE5F8;
	sub_82FA3BB8(ctx, base);
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// li r10,73
	ctx.r10.s64 = 73;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82fae624
	if (!ctx.cr6.gt) goto loc_82FAE624;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82fae628
	goto loc_82FAE628;
loc_82FAE624:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
loc_82FAE628:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x82FAE644;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAE644:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAE64C"))) PPC_WEAK_FUNC(sub_82FAE64C);
PPC_FUNC_IMPL(__imp__sub_82FAE64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE650"))) PPC_WEAK_FUNC(sub_82FAE650);
PPC_FUNC_IMPL(__imp__sub_82FAE650) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32004
	ctx.r10.s64 = -2097414144;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// addi r3,r10,12744
	ctx.r3.s64 = ctx.r10.s64 + 12744;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fae590
	ctx.lr = 0x82FAE6A0;
	sub_82FAE590(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE6B0"))) PPC_WEAK_FUNC(sub_82FAE6B0);
PPC_FUNC_IMPL(__imp__sub_82FAE6B0) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fae760
	if (ctx.cr6.eq) goto loc_82FAE760;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fae6ec
	if (!ctx.cr6.eq) goto loc_82FAE6EC;
loc_82FAE6D0:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE6D4;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAE6E0;
	sub_82FA1FF0(ctx, base);
	// lis r3,32767
	ctx.r3.s64 = 2147418112;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82fae764
	goto loc_82FAE764;
loc_82FAE6EC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fae6d0
	if (ctx.cr6.eq) goto loc_82FAE6D0;
	// subf r8,r4,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82FAE6F8:
	// lhzx r11,r8,r4
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r4.u32);
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x82fae710
	if (ctx.cr6.lt) goto loc_82FAE710;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// ble cr6,0x82fae714
	if (!ctx.cr6.gt) goto loc_82FAE714;
loc_82FAE710:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FAE714:
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,65
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65, ctx.xer);
	// blt cr6,0x82fae730
	if (ctx.cr6.lt) goto loc_82FAE730;
	// cmplwi cr6,r11,90
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 90, ctx.xer);
	// bgt cr6,0x82fae730
	if (ctx.cr6.gt) goto loc_82FAE730;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
loc_82FAE730:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// beq 0x82fae754
	if (ctx.cr0.eq) goto loc_82FAE754;
	// clrlwi. r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fae754
	if (ctx.cr0.eq) goto loc_82FAE754;
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82fae6f8
	if (ctx.cr6.eq) goto loc_82FAE6F8;
loc_82FAE754:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82FAE760:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82FAE764:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE774"))) PPC_WEAK_FUNC(sub_82FAE774);
PPC_FUNC_IMPL(__imp__sub_82FAE774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE778"))) PPC_WEAK_FUNC(sub_82FAE778);
PPC_FUNC_IMPL(__imp__sub_82FAE778) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fae7a8
	if (ctx.cr6.eq) goto loc_82FAE7A8;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fae7a8
	if (ctx.cr0.eq) goto loc_82FAE7A8;
	// cmpwi cr6,r11,67
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 67, ctx.xer);
	// bne cr6,0x82fae7a0
	if (!ctx.cr6.eq) goto loc_82FAE7A0;
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fae7a8
	if (ctx.cr0.eq) goto loc_82FAE7A8;
loc_82FAE7A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FAE7A8:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r3,r11,-14900
	ctx.r3.s64 = ctx.r11.s64 + -14900;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE7B4"))) PPC_WEAK_FUNC(sub_82FAE7B4);
PPC_FUNC_IMPL(__imp__sub_82FAE7B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE7B8"))) PPC_WEAK_FUNC(sub_82FAE7B8);
PPC_FUNC_IMPL(__imp__sub_82FAE7B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-14192
	ctx.r11.s64 = ctx.r11.s64 + -14192;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE7C8"))) PPC_WEAK_FUNC(sub_82FAE7C8);
PPC_FUNC_IMPL(__imp__sub_82FAE7C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r3,-14896(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14896);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE7D4"))) PPC_WEAK_FUNC(sub_82FAE7D4);
PPC_FUNC_IMPL(__imp__sub_82FAE7D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE7D8"))) PPC_WEAK_FUNC(sub_82FAE7D8);
PPC_FUNC_IMPL(__imp__sub_82FAE7D8) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// beq cr6,0x82fae808
	if (ctx.cr6.eq) goto loc_82FAE808;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bge cr6,0x82fae808
	if (!ctx.cr6.lt) goto loc_82FAE808;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// lwz r11,-14892(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -14892);
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// and r3,r11,r8
	ctx.r3.u64 = ctx.r11.u64 & ctx.r8.u64;
	// blr 
	return;
loc_82FAE808:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE810"))) PPC_WEAK_FUNC(sub_82FAE810);
PPC_FUNC_IMPL(__imp__sub_82FAE810) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// blt cr6,0x82fae83c
	if (ctx.cr6.lt) goto loc_82FAE83C;
	// cmpwi cr6,r3,255
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 255, ctx.xer);
	// bgt cr6,0x82fae83c
	if (ctx.cr6.gt) goto loc_82FAE83C;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,-13976(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13976);
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r10.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
loc_82FAE83C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE844"))) PPC_WEAK_FUNC(sub_82FAE844);
PPC_FUNC_IMPL(__imp__sub_82FAE844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE848"))) PPC_WEAK_FUNC(sub_82FAE848);
PPC_FUNC_IMPL(__imp__sub_82FAE848) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,-14192
	ctx.r11.s64 = ctx.r11.s64 + -14192;
	// lwz r11,200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 200);
	// lhzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// and r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 & ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE864"))) PPC_WEAK_FUNC(sub_82FAE864);
PPC_FUNC_IMPL(__imp__sub_82FAE864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAE868"))) PPC_WEAK_FUNC(sub_82FAE868);
PPC_FUNC_IMPL(__imp__sub_82FAE868) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-1248(r10)
	PPC_STORE_U32(ctx.r10.u32 + -1248, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAE878"))) PPC_WEAK_FUNC(sub_82FAE878);
PPC_FUNC_IMPL(__imp__sub_82FAE878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82FAE880;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fae8a0
	if (!ctx.cr6.eq) goto loc_82FAE8A0;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82fa76f0
	ctx.lr = 0x82FAE89C;
	sub_82FA76F0(ctx, base);
	// b 0x82fae92c
	goto loc_82FAE92C;
loc_82FAE8A0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fae8b4
	if (!ctx.cr6.eq) goto loc_82FAE8B4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAE8B0;
	sub_82FA27A8(ctx, base);
	// b 0x82fae928
	goto loc_82FAE928;
loc_82FAE8B4:
	// li r29,-4096
	ctx.r29.s64 = -4096;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82fae910
	if (ctx.cr6.gt) goto loc_82FAE910;
	// lis r27,-31958
	ctx.r27.s64 = -2094399488;
loc_82FAE8C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82fae8d0
	if (!ctx.cr6.eq) goto loc_82FAE8D0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82FAE8D0:
	// bl 0x82a831b0
	ctx.lr = 0x82FAE8D4;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82a82080
	ctx.lr = 0x82FAE8E4;
	sub_82A82080(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82fae960
	if (!ctx.cr0.eq) goto loc_82FAE960;
	// lwz r11,11980(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11980);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fae94c
	if (ctx.cr6.eq) goto loc_82FAE94C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbefe0
	ctx.lr = 0x82FAE900;
	sub_82FBEFE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fae934
	if (ctx.cr0.eq) goto loc_82FAE934;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82fae8c4
	if (!ctx.cr6.gt) goto loc_82FAE8C4;
loc_82FAE910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fbefe0
	ctx.lr = 0x82FAE918;
	sub_82FBEFE0(ctx, base);
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE91C;
	sub_82FA6DB0(ctx, base);
	// li r10,12
	ctx.r10.s64 = 12;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82FAE928:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAE92C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82FAE934:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE938;
	sub_82FA6DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a78478
	ctx.lr = 0x82FAE940;
	sub_82A78478(ctx, base);
	// bl 0x82fa6d40
	ctx.lr = 0x82FAE944;
	sub_82FA6D40(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82fae928
	goto loc_82FAE928;
loc_82FAE94C:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE950;
	sub_82FA6DB0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a78478
	ctx.lr = 0x82FAE958;
	sub_82A78478(ctx, base);
	// bl 0x82fa6d40
	ctx.lr = 0x82FAE95C;
	sub_82FA6D40(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
loc_82FAE960:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82fae92c
	goto loc_82FAE92C;
}

__attribute__((alias("__imp__sub_82FAE968"))) PPC_WEAK_FUNC(sub_82FAE968);
PPC_FUNC_IMPL(__imp__sub_82FAE968) {
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
	// bne cr6,0x82fae99c
	if (!ctx.cr6.eq) goto loc_82FAE99C;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAE988;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAE994;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fae9ac
	goto loc_82FAE9AC;
loc_82FAE99C:
	// bl 0x82a831b0
	ctx.lr = 0x82FAE9A0;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a80708
	ctx.lr = 0x82FAE9AC;
	sub_82A80708(ctx, base);
loc_82FAE9AC:
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

__attribute__((alias("__imp__sub_82FAE9C0"))) PPC_WEAK_FUNC(sub_82FAE9C0);
PPC_FUNC_IMPL(__imp__sub_82FAE9C0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,-18280
	ctx.r9.s64 = ctx.r10.s64 + -18280;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82FAE9D0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82fae9f4
	if (ctx.cr6.eq) goto loc_82FAE9F4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 22, ctx.xer);
	// blt cr6,0x82fae9d0
	if (ctx.cr6.lt) goto loc_82FAE9D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FAE9F4:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAEA04"))) PPC_WEAK_FUNC(sub_82FAEA04);
PPC_FUNC_IMPL(__imp__sub_82FAEA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEA08"))) PPC_WEAK_FUNC(sub_82FAEA08);
PPC_FUNC_IMPL(__imp__sub_82FAEA08) {
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
	// bl 0x82fae9c0
	ctx.lr = 0x82FAEA18;
	sub_82FAE9C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82faea24
	if (ctx.cr0.eq) goto loc_82FAEA24;
	// bl 0x8309e100
	ctx.lr = 0x82FAEA24;
	sub_8309E100(ctx, base);
loc_82FAEA24:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAEA34"))) PPC_WEAK_FUNC(sub_82FAEA34);
PPC_FUNC_IMPL(__imp__sub_82FAEA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEA38"))) PPC_WEAK_FUNC(sub_82FAEA38);
PPC_FUNC_IMPL(__imp__sub_82FAEA38) {
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
	// li r3,252
	ctx.r3.s64 = 252;
	// bl 0x82fae9c0
	ctx.lr = 0x82FAEA4C;
	sub_82FAE9C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82faea58
	if (ctx.cr0.eq) goto loc_82FAEA58;
	// bl 0x8309e100
	ctx.lr = 0x82FAEA58;
	sub_8309E100(ctx, base);
loc_82FAEA58:
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82fae9c0
	ctx.lr = 0x82FAEA60;
	sub_82FAE9C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82faea6c
	if (ctx.cr0.eq) goto loc_82FAEA6C;
	// bl 0x8309e100
	ctx.lr = 0x82FAEA6C;
	sub_8309E100(ctx, base);
loc_82FAEA6C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAEA7C"))) PPC_WEAK_FUNC(sub_82FAEA7C);
PPC_FUNC_IMPL(__imp__sub_82FAEA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEA80"))) PPC_WEAK_FUNC(sub_82FAEA80);
PPC_FUNC_IMPL(__imp__sub_82FAEA80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// stw r3,11444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 11444, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAEA8C"))) PPC_WEAK_FUNC(sub_82FAEA8C);
PPC_FUNC_IMPL(__imp__sub_82FAEA8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEA90"))) PPC_WEAK_FUNC(sub_82FAEA90);
PPC_FUNC_IMPL(__imp__sub_82FAEA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FAEA98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82fbb310
	ctx.lr = 0x82FAEAAC;
	sub_82FBB310(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// andi. r10,r11,130
	ctx.r10.u64 = ctx.r11.u64 & 130;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82faeae4
	if (!ctx.cr0.eq) goto loc_82FAEAE4;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAEAC4;
	sub_82FA6DB0(ctx, base);
	// li r10,9
	ctx.r10.s64 = 9;
loc_82FAEAC8:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
loc_82FAEAD0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
loc_82FAEAD4:
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// li r3,-1
	ctx.r3.s64 = -1;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82faec5c
	goto loc_82FAEC5C;
loc_82FAEAE4:
	// rlwinm. r10,r11,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82faeaf8
	if (ctx.cr0.eq) goto loc_82FAEAF8;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAEAF0;
	sub_82FA6DB0(ctx, base);
	// li r10,34
	ctx.r10.s64 = 34;
	// b 0x82faeac8
	goto loc_82FAEAC8;
loc_82FAEAF8:
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x82faeb20
	if (ctx.cr0.eq) goto loc_82FAEB20;
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// beq 0x82faead4
	if (ctx.cr0.eq) goto loc_82FAEAD4;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
loc_82FAEB20:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// rlwinm r11,r11,0,28,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFEF;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// andi. r10,r11,268
	ctx.r10.u64 = ctx.r11.u64 & 268;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82faeb7c
	if (!ctx.cr0.eq) goto loc_82FAEB7C;
	// bl 0x82fa92e8
	ctx.lr = 0x82FAEB48;
	sub_82FA92E8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82faeb64
	if (ctx.cr6.eq) goto loc_82FAEB64;
	// bl 0x82fa92e8
	ctx.lr = 0x82FAEB58;
	sub_82FA92E8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82faeb74
	if (!ctx.cr6.eq) goto loc_82FAEB74;
loc_82FAEB64:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822d6f30
	ctx.lr = 0x82FAEB6C;
	sub_822D6F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82faeb7c
	if (!ctx.cr0.eq) goto loc_82FAEB7C;
loc_82FAEB74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fc45e8
	ctx.lr = 0x82FAEB7C;
	sub_82FC45E8(ctx, base);
loc_82FAEB7C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// andi. r11,r11,264
	ctx.r11.u64 = ctx.r11.u64 & 264;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faec34
	if (ctx.cr0.eq) goto loc_82FAEC34;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// subf. r30,r4,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// ble 0x82faebc4
	if (!ctx.cr0.gt) goto loc_82FAEBC4;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fbb848
	ctx.lr = 0x82FAEBBC;
	sub_82FBB848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82faec24
	goto loc_82FAEC24;
loc_82FAEBC4:
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82faebf8
	if (ctx.cr6.eq) goto loc_82FAEBF8;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// beq cr6,0x82faebf8
	if (ctx.cr6.eq) goto loc_82FAEBF8;
	// srawi r11,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 5;
	// lis r10,-31954
	ctx.r10.s64 = -2094137344;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-1504
	ctx.r10.s64 = ctx.r10.s64 + -1504;
	// clrlwi r11,r29,27
	ctx.r11.u64 = ctx.r29.u32 & 0x1F;
	// mulli r11,r11,72
	ctx.r11.s64 = ctx.r11.s64 * 72;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82faec00
	goto loc_82FAEC00;
loc_82FAEBF8:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r11,r11,-13280
	ctx.r11.s64 = ctx.r11.s64 + -13280;
loc_82FAEC00:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faec24
	if (ctx.cr0.eq) goto loc_82FAEC24;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fc4468
	ctx.lr = 0x82FAEC1C;
	sub_82FC4468(ctx, base);
	// cmpdi cr6,r3,-1
	ctx.cr6.compare<int64_t>(ctx.r3.s64, -1, ctx.xer);
	// beq cr6,0x82faead0
	if (ctx.cr6.eq) goto loc_82FAEAD0;
loc_82FAEC24:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// b 0x82faec4c
	goto loc_82FAEC4C;
loc_82FAEC34:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,148
	ctx.r4.s64 = ctx.r1.s64 + 148;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// bl 0x82fbb848
	ctx.lr = 0x82FAEC48;
	sub_82FBB848(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82FAEC4C:
	// cmpw cr6,r28,r30
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82faead0
	if (!ctx.cr6.eq) goto loc_82FAEAD0;
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
loc_82FAEC5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAEC64"))) PPC_WEAK_FUNC(sub_82FAEC64);
PPC_FUNC_IMPL(__imp__sub_82FAEC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAEC68"))) PPC_WEAK_FUNC(sub_82FAEC68);
PPC_FUNC_IMPL(__imp__sub_82FAEC68) {
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
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// rlwinm. r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82faec98
	if (ctx.cr0.eq) goto loc_82FAEC98;
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82faecdc
	if (ctx.cr6.eq) goto loc_82FAECDC;
loc_82FAEC98:
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// blt 0x82faecc4
	if (ctx.cr0.lt) goto loc_82FAECC4;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82faeccc
	goto loc_82FAECCC;
loc_82FAECC4:
	// extsb r3,r11
	ctx.r3.s64 = ctx.r11.s8;
	// bl 0x82faea90
	ctx.lr = 0x82FAECCC;
	sub_82FAEA90(ctx, base);
loc_82FAECCC:
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82faecdc
	if (!ctx.cr6.eq) goto loc_82FAECDC;
	// li r11,-1
	ctx.r11.s64 = -1;
	// b 0x82faece4
	goto loc_82FAECE4;
loc_82FAECDC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82FAECE4:
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

__attribute__((alias("__imp__sub_82FAECFC"))) PPC_WEAK_FUNC(sub_82FAECFC);
PPC_FUNC_IMPL(__imp__sub_82FAECFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAED00"))) PPC_WEAK_FUNC(sub_82FAED00);
PPC_FUNC_IMPL(__imp__sub_82FAED00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82FAED08;
	__savegprlr_14(ctx, base);
	// stwu r1,-1328(r1)
	ea = -1328 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// bne cr6,0x82faed58
	if (!ctx.cr6.eq) goto loc_82FAED58;
loc_82FAED40:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAED44;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAED50;
	sub_82FA1FF0(ctx, base);
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82faf828
	goto loc_82FAF828;
loc_82FAED58:
	// lwz r11,12(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faedf4
	if (!ctx.cr0.eq) goto loc_82FAEDF4;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82fbb310
	ctx.lr = 0x82FAED6C;
	sub_82FBB310(ctx, base);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r11,r11,-1504
	ctx.r11.s64 = ctx.r11.s64 + -1504;
	// addi r8,r10,-13280
	ctx.r8.s64 = ctx.r10.s64 + -13280;
	// beq cr6,0x82faeda8
	if (ctx.cr6.eq) goto loc_82FAEDA8;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82faeda8
	if (ctx.cr6.eq) goto loc_82FAEDA8;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r9,r7,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82faedac
	goto loc_82FAEDAC;
loc_82FAEDA8:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82FAEDAC:
	// lbz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 40);
	// rlwinm. r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82faed40
	if (!ctx.cr0.eq) goto loc_82FAED40;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82faede4
	if (ctx.cr6.eq) goto loc_82FAEDE4;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// beq cr6,0x82faede4
	if (ctx.cr6.eq) goto loc_82FAEDE4;
	// srawi r10,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 5;
	// clrlwi r9,r3,27
	ctx.r9.u64 = ctx.r3.u32 & 0x1F;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r10,r9,72
	ctx.r10.s64 = ctx.r9.s64 * 72;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82faede8
	goto loc_82FAEDE8;
loc_82FAEDE4:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82FAEDE8:
	// lbz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 40);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faed40
	if (!ctx.cr0.eq) goto loc_82FAED40;
loc_82FAEDF4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82faed40
	if (ctx.cr6.eq) goto loc_82FAED40;
	// bl 0x82fa92e8
	ctx.lr = 0x82FAEE00;
	sub_82FA92E8(ctx, base);
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82faf7f4
	if (ctx.cr6.eq) goto loc_82FAF7F4;
	// bl 0x82fa92e8
	ctx.lr = 0x82FAEE10;
	sub_82FA92E8(ctx, base);
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// cmplw cr6,r18,r11
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82faf7f4
	if (ctx.cr6.eq) goto loc_82FAF7F4;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r14,r30
	ctx.r14.u64 = ctx.r30.u64;
	// beq 0x82faf7ec
	if (ctx.cr0.eq) goto loc_82FAF7EC;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// lwz r21,112(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lwz r28,112(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r19,r31,-1
	ctx.r19.s64 = ctx.r31.s64 + -1;
	// lis r15,-32233
	ctx.r15.s64 = -2112421888;
	// lis r20,-32233
	ctx.r20.s64 = -2112421888;
	// addi r23,r11,-13976
	ctx.r23.s64 = ctx.r11.s64 + -13976;
	// addi r22,r10,-13208
	ctx.r22.s64 = ctx.r10.s64 + -13208;
	// addi r17,r9,-18080
	ctx.r17.s64 = ctx.r9.s64 + -18080;
loc_82FAEE6C:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82faf7ec
	if (ctx.cr6.lt) goto loc_82FAF7EC;
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// blt cr6,0x82faee98
	if (ctx.cr6.lt) goto loc_82FAEE98;
	// cmpwi cr6,r8,120
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 120, ctx.xer);
	// bgt cr6,0x82faee98
	if (ctx.cr6.gt) goto loc_82FAEE98;
	// add r11,r8,r17
	ctx.r11.u64 = ctx.r8.u64 + ctx.r17.u64;
	// lbz r11,-32(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// b 0x82faee9c
	goto loc_82FAEE9C;
loc_82FAEE98:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82FAEE9C:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lbzx r11,r11,r17
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r17.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82faf7d0
	if (ctx.cr6.gt) goto loc_82FAF7D0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82faf0b4
	if (ctx.cr6.eq) goto loc_82FAF0B4;
	// bdz 0x82faeee8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82FAEEE8;
	// bdz 0x82faef08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82FAEF08;
	// bdz 0x82faef58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82FAEF58;
	// bdz 0x82faefa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82FAEFA4;
	// bdz 0x82faefac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82FAEFAC;
	// bdz 0x82faefe4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82FAEFE4;
	// b 0x82faf100
	goto loc_82FAF100;
loc_82FAEEE8:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r16,r27
	ctx.r16.u64 = ctx.r27.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEF08:
	// cmpwi cr6,r8,32
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32, ctx.xer);
	// beq cr6,0x82faef50
	if (ctx.cr6.eq) goto loc_82FAEF50;
	// cmpwi cr6,r8,35
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 35, ctx.xer);
	// beq cr6,0x82faef48
	if (ctx.cr6.eq) goto loc_82FAEF48;
	// cmpwi cr6,r8,43
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 43, ctx.xer);
	// beq cr6,0x82faef40
	if (ctx.cr6.eq) goto loc_82FAEF40;
	// cmpwi cr6,r8,45
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 45, ctx.xer);
	// beq cr6,0x82faef38
	if (ctx.cr6.eq) goto loc_82FAEF38;
	// cmpwi cr6,r8,48
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 48, ctx.xer);
	// bne cr6,0x82faf7d0
	if (!ctx.cr6.eq) goto loc_82FAF7D0;
	// ori r27,r27,8
	ctx.r27.u64 = ctx.r27.u64 | 8;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEF38:
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEF40:
	// ori r27,r27,1
	ctx.r27.u64 = ctx.r27.u64 | 1;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEF48:
	// ori r27,r27,128
	ctx.r27.u64 = ctx.r27.u64 | 128;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEF50:
	// ori r27,r27,2
	ctx.r27.u64 = ctx.r27.u64 | 2;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEF58:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x82faef8c
	if (!ctx.cr6.eq) goto loc_82FAEF8C;
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bge cr6,0x82faf7d0
	if (!ctx.cr6.lt) goto loc_82FAF7D0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ori r27,r27,4
	ctx.r27.u64 = ctx.r27.u64 | 4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// b 0x82faef9c
	goto loc_82FAEF9C;
loc_82FAEF8C:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82FAEF9C:
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEFA4:
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEFAC:
	// cmpwi cr6,r8,42
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 42, ctx.xer);
	// bne cr6,0x82faefd4
	if (!ctx.cr6.eq) goto loc_82FAEFD4;
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r25,4(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82faf7d0
	if (!ctx.cr6.lt) goto loc_82FAF7D0;
	// li r25,-1
	ctx.r25.s64 = -1;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEFD4:
	// mulli r11,r25,10
	ctx.r11.s64 = ctx.r25.s64 * 10;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r25,r11,-48
	ctx.r25.s64 = ctx.r11.s64 + -48;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAEFE4:
	// cmpwi cr6,r8,73
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 73, ctx.xer);
	// beq cr6,0x82faf034
	if (ctx.cr6.eq) goto loc_82FAF034;
	// cmpwi cr6,r8,104
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 104, ctx.xer);
	// beq cr6,0x82faf02c
	if (ctx.cr6.eq) goto loc_82FAF02C;
	// cmpwi cr6,r8,108
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 108, ctx.xer);
	// beq cr6,0x82faf00c
	if (ctx.cr6.eq) goto loc_82FAF00C;
	// cmpwi cr6,r8,119
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 119, ctx.xer);
	// bne cr6,0x82faf7d0
	if (!ctx.cr6.eq) goto loc_82FAF7D0;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF00C:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// cmplwi cr6,r11,108
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 108, ctx.xer);
	// bne cr6,0x82faf024
	if (!ctx.cr6.eq) goto loc_82FAF024;
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// ori r27,r27,4096
	ctx.r27.u64 = ctx.r27.u64 | 4096;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF024:
	// ori r27,r27,16
	ctx.r27.u64 = ctx.r27.u64 | 16;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF02C:
	// ori r27,r27,32
	ctx.r27.u64 = ctx.r27.u64 | 32;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF034:
	// lbz r11,1(r19)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,54
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 54, ctx.xer);
	// bne cr6,0x82faf05c
	if (!ctx.cr6.eq) goto loc_82FAF05C;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,52
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 52, ctx.xer);
	// bne cr6,0x82faf05c
	if (!ctx.cr6.eq) goto loc_82FAF05C;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// ori r27,r27,32768
	ctx.r27.u64 = ctx.r27.u64 | 32768;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF05C:
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// bne cr6,0x82faf07c
	if (!ctx.cr6.eq) goto loc_82FAF07C;
	// lbz r10,2(r19)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r19.u32 + 2);
	// cmplwi cr6,r10,50
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 50, ctx.xer);
	// bne cr6,0x82faf07c
	if (!ctx.cr6.eq) goto loc_82FAF07C;
	// addi r19,r19,2
	ctx.r19.s64 = ctx.r19.s64 + 2;
	// rlwinm r27,r27,0,17,15
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF07C:
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// cmpwi cr6,r11,117
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 117, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// cmpwi cr6,r11,120
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 120, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// cmpwi cr6,r11,88
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 88, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
loc_82FAF0B4:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// clrlwi r3,r29,24
	ctx.r3.u64 = ctx.r29.u32 & 0xFF;
	// li r16,0
	ctx.r16.s64 = 0;
	// bl 0x82fa5af0
	ctx.lr = 0x82FAF0C4;
	sub_82FA5AF0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82faf0e8
	if (ctx.cr0.eq) goto loc_82FAF0E8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82faec68
	ctx.lr = 0x82FAF0DC;
	sub_82FAEC68(ctx, base);
	// lbzu r29,1(r19)
	ea = 1 + ctx.r19.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r19.u32 = ea;
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq 0x82faed40
	if (ctx.cr0.eq) goto loc_82FAED40;
loc_82FAF0E8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82faec68
	ctx.lr = 0x82FAF0F8;
	sub_82FAEC68(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82faf7d0
	goto loc_82FAF7D0;
loc_82FAF100:
	// addi r11,r8,-65
	ctx.r11.s64 = ctx.r8.s64 + -65;
	// cmplwi cr6,r11,55
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 55, ctx.xer);
	// bgt cr6,0x82faf600
	if (ctx.cr6.gt) goto loc_82FAF600;
	// lis r12,-32233
	ctx.r12.s64 = -2112421888;
	// rlwinm r0,r11,1,0,30
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r12,r12,-17984
	ctx.r12.s64 = ctx.r12.s64 + -17984;
	// lhzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U16(ctx.r12.u32 + ctx.r0.u32);
	// lis r12,-32005
	ctx.r12.s64 = -2097479680;
	// addi r12,r12,-3788
	ctx.r12.s64 = ctx.r12.s64 + -3788;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82FAF310;
	case 1:
		goto loc_82FAF600;
	case 2:
		goto loc_82FAF134;
	case 3:
		goto loc_82FAF600;
	case 4:
		goto loc_82FAF310;
	case 5:
		goto loc_82FAF600;
	case 6:
		goto loc_82FAF310;
	case 7:
		goto loc_82FAF600;
	case 8:
		goto loc_82FAF600;
	case 9:
		goto loc_82FAF600;
	case 10:
		goto loc_82FAF600;
	case 11:
		goto loc_82FAF600;
	case 12:
		goto loc_82FAF600;
	case 13:
		goto loc_82FAF600;
	case 14:
		goto loc_82FAF600;
	case 15:
		goto loc_82FAF600;
	case 16:
		goto loc_82FAF600;
	case 17:
		goto loc_82FAF600;
	case 18:
		goto loc_82FAF21C;
	case 19:
		goto loc_82FAF600;
	case 20:
		goto loc_82FAF600;
	case 21:
		goto loc_82FAF600;
	case 22:
		goto loc_82FAF600;
	case 23:
		goto loc_82FAF450;
	case 24:
		goto loc_82FAF600;
	case 25:
		goto loc_82FAF1A0;
	case 26:
		goto loc_82FAF600;
	case 27:
		goto loc_82FAF600;
	case 28:
		goto loc_82FAF600;
	case 29:
		goto loc_82FAF600;
	case 30:
		goto loc_82FAF600;
	case 31:
		goto loc_82FAF600;
	case 32:
		goto loc_82FAF31C;
	case 33:
		goto loc_82FAF600;
	case 34:
		goto loc_82FAF144;
	case 35:
		goto loc_82FAF440;
	case 36:
		goto loc_82FAF31C;
	case 37:
		goto loc_82FAF31C;
	case 38:
		goto loc_82FAF31C;
	case 39:
		goto loc_82FAF600;
	case 40:
		goto loc_82FAF440;
	case 41:
		goto loc_82FAF600;
	case 42:
		goto loc_82FAF600;
	case 43:
		goto loc_82FAF600;
	case 44:
		goto loc_82FAF600;
	case 45:
		goto loc_82FAF2D4;
	case 46:
		goto loc_82FAF488;
	case 47:
		goto loc_82FAF44C;
	case 48:
		goto loc_82FAF600;
	case 49:
		goto loc_82FAF600;
	case 50:
		goto loc_82FAF22C;
	case 51:
		goto loc_82FAF600;
	case 52:
		goto loc_82FAF444;
	case 53:
		goto loc_82FAF600;
	case 54:
		goto loc_82FAF600;
	case 55:
		goto loc_82FAF458;
	default:
		__builtin_unreachable();
	}
loc_82FAF134:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faf144
	if (!ctx.cr0.eq) goto loc_82FAF144;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_82FAF144:
	// andi. r11,r27,2064
	ctx.r11.u64 = ctx.r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x82faf184
	if (ctx.cr0.eq) goto loc_82FAF184;
	// li r5,512
	ctx.r5.s64 = 512;
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fc4768
	ctx.lr = 0x82FAF170;
	sub_82FC4768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82faf194
	if (ctx.cr0.eq) goto loc_82FAF194;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x82faf194
	goto loc_82FAF194;
loc_82FAF184:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
loc_82FAF194:
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// b 0x82faf600
	goto loc_82FAF600;
loc_82FAF1A0:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faf1f0
	if (ctx.cr6.eq) goto loc_82FAF1F0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82faf1f0
	if (ctx.cr6.eq) goto loc_82FAF1F0;
	// rlwinm. r9,r27,0,20,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// beq 0x82faf1e4
	if (ctx.cr0.eq) goto loc_82FAF1E4;
	// lha r11,0(r11)
	ctx.r11.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,1
	ctx.r16.s64 = 1;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// b 0x82faf5fc
	goto loc_82FAF5FC;
loc_82FAF1E4:
	// lha r6,0(r11)
	ctx.r6.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// li r16,0
	ctx.r16.s64 = 0;
	// b 0x82faf5fc
	goto loc_82FAF5FC;
loc_82FAF1F0:
	// lwz r28,-18088(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + -18088);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82FAF1FC:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82faf1fc
	if (!ctx.cr6.eq) goto loc_82FAF1FC;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82FAF210:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r6,r11,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x82faf5fc
	goto loc_82FAF5FC;
loc_82FAF21C:
	// andi. r11,r27,2096
	ctx.r11.u64 = ctx.r27.u64 & 2096;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faf22c
	if (!ctx.cr0.eq) goto loc_82FAF22C;
	// ori r27,r27,2048
	ctx.r27.u64 = ctx.r27.u64 | 2048;
loc_82FAF22C:
	// cmpwi cr6,r25,-1
	ctx.cr6.compare<int32_t>(ctx.r25.s32, -1, ctx.xer);
	// bne cr6,0x82faf240
	if (!ctx.cr6.eq) goto loc_82FAF240;
	// lis r10,32767
	ctx.r10.s64 = 2147418112;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// b 0x82faf244
	goto loc_82FAF244;
loc_82FAF240:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
loc_82FAF244:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// andi. r9,r27,2064
	ctx.r9.u64 = ctx.r27.u64 & 2064;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r28,4(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq 0x82faf2a0
	if (ctx.cr0.eq) goto loc_82FAF2A0;
	// bne cr6,0x82faf26c
	if (!ctx.cr6.eq) goto loc_82FAF26C;
	// lwz r28,-18084(r15)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r15.u32 + -18084);
loc_82FAF26C:
	// li r16,1
	ctx.r16.s64 = 1;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82faf28c
	goto loc_82FAF28C;
loc_82FAF278:
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82faf294
	if (ctx.cr0.eq) goto loc_82FAF294;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82FAF28C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82faf278
	if (!ctx.cr6.eq) goto loc_82FAF278;
loc_82FAF294:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// srawi r6,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 1;
	// b 0x82faf5fc
	goto loc_82FAF5FC;
loc_82FAF2A0:
	// bne cr6,0x82faf2a8
	if (!ctx.cr6.eq) goto loc_82FAF2A8;
	// lwz r28,-18088(r20)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r20.u32 + -18088);
loc_82FAF2A8:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82faf2c4
	goto loc_82FAF2C4;
loc_82FAF2B0:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82faf2cc
	if (ctx.cr0.eq) goto loc_82FAF2CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82FAF2C4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82faf2b0
	if (!ctx.cr6.eq) goto loc_82FAF2B0;
loc_82FAF2CC:
	// subf r6,r28,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82faf5fc
	goto loc_82FAF5FC;
loc_82FAF2D4:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82fa3ce0
	ctx.lr = 0x82FAF2E8;
	sub_82FA3CE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82faed40
	if (ctx.cr0.eq) goto loc_82FAED40;
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf300
	if (ctx.cr0.eq) goto loc_82FAF300;
	// sth r24,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r24.u16);
	// b 0x82faf304
	goto loc_82FAF304;
loc_82FAF300:
	// stw r24,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r24.u32);
loc_82FAF304:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// b 0x82faf7bc
	goto loc_82FAF7BC;
loc_82FAF310:
	// addi r11,r8,32
	ctx.r11.s64 = ctx.r8.s64 + 32;
	// li r21,1
	ctx.r21.s64 = 1;
	// extsb r29,r11
	ctx.r29.s64 = ctx.r11.s8;
loc_82FAF31C:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// li r30,512
	ctx.r30.s64 = 512;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82faf338
	if (!ctx.cr6.lt) goto loc_82FAF338;
	// li r25,6
	ctx.r25.s64 = 6;
	// b 0x82faf388
	goto loc_82FAF388;
loc_82FAF338:
	// bne cr6,0x82faf350
	if (!ctx.cr6.eq) goto loc_82FAF350;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,103
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 103, ctx.xer);
	// bne cr6,0x82faf388
	if (!ctx.cr6.eq) goto loc_82FAF388;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82faf388
	goto loc_82FAF388;
loc_82FAF350:
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 512, ctx.xer);
	// ble cr6,0x82faf35c
	if (!ctx.cr6.gt) goto loc_82FAF35C;
	// li r25,512
	ctx.r25.s64 = 512;
loc_82FAF35C:
	// cmpwi cr6,r25,163
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 163, ctx.xer);
	// ble cr6,0x82faf388
	if (!ctx.cr6.gt) goto loc_82FAF388;
	// addi r31,r25,349
	ctx.r31.s64 = ctx.r25.s64 + 349;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa76f0
	ctx.lr = 0x82FAF370;
	sub_82FA76F0(ctx, base);
	// mr. r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// beq 0x82faf384
	if (ctx.cr0.eq) goto loc_82FAF384;
	// mr r28,r14
	ctx.r28.u64 = ctx.r14.u64;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// b 0x82faf388
	goto loc_82FAF388;
loc_82FAF384:
	// li r25,163
	ctx.r25.s64 = 163;
loc_82FAF388:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// lwz r10,24(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// extsb r31,r29
	ctx.r31.s64 = ctx.r29.s8;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bctrl 
	ctx.lr = 0x82FAF3C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm. r30,r27,0,24,24
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82faf3ec
	if (ctx.cr0.eq) goto loc_82FAF3EC;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82faf3ec
	if (!ctx.cr6.eq) goto loc_82FAF3EC;
	// lwz r11,36(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF3EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAF3EC:
	// cmpwi cr6,r31,103
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 103, ctx.xer);
	// bne cr6,0x82faf410
	if (!ctx.cr6.eq) goto loc_82FAF410;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82faf410
	if (!ctx.cr6.eq) goto loc_82FAF410;
	// lwz r11,32(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FAF410;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FAF410:
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,45
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 45, ctx.xer);
	// bne cr6,0x82faf424
	if (!ctx.cr6.eq) goto loc_82FAF424;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
loc_82FAF424:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82FAF428:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82faf428
	if (!ctx.cr6.eq) goto loc_82FAF428;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// b 0x82faf210
	goto loc_82FAF210;
loc_82FAF440:
	// ori r27,r27,64
	ctx.r27.u64 = ctx.r27.u64 | 64;
loc_82FAF444:
	// li r8,10
	ctx.r8.s64 = 10;
	// b 0x82faf498
	goto loc_82FAF498;
loc_82FAF44C:
	// li r25,8
	ctx.r25.s64 = 8;
loc_82FAF450:
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82faf45c
	goto loc_82FAF45C;
loc_82FAF458:
	// li r11,39
	ctx.r11.s64 = 39;
loc_82FAF45C:
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// rlwinm. r10,r27,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,16
	ctx.r8.s64 = 16;
	// beq 0x82faf498
	if (ctx.cr0.eq) goto loc_82FAF498;
	// addi r11,r11,81
	ctx.r11.s64 = ctx.r11.s64 + 81;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,2
	ctx.r9.s64 = 2;
	// stb r11,89(r1)
	PPC_STORE_U8(ctx.r1.u32 + 89, ctx.r11.u8);
	// stb r10,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r10.u8);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// b 0x82faf498
	goto loc_82FAF498;
loc_82FAF488:
	// rlwinm. r11,r27,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,8
	ctx.r8.s64 = 8;
	// beq 0x82faf498
	if (ctx.cr0.eq) goto loc_82FAF498;
	// ori r27,r27,512
	ctx.r27.u64 = ctx.r27.u64 | 512;
loc_82FAF498:
	// rlwinm. r11,r27,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faf4a8
	if (!ctx.cr0.eq) goto loc_82FAF4A8;
	// rlwinm. r11,r27,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf4bc
	if (ctx.cr0.eq) goto loc_82FAF4BC;
loc_82FAF4A8:
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// b 0x82faf50c
	goto loc_82FAF50C;
loc_82FAF4BC:
	// rlwinm. r11,r27,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf4ec
	if (ctx.cr0.eq) goto loc_82FAF4EC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// beq 0x82faf4e4
	if (ctx.cr0.eq) goto loc_82FAF4E4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82faf50c
	goto loc_82FAF50C;
loc_82FAF4E4:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82faf50c
	goto loc_82FAF50C;
loc_82FAF4EC:
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r26,7
	ctx.r11.s64 = ctx.r26.s64 + 7;
	// rlwinm r11,r11,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// addi r26,r11,8
	ctx.r26.s64 = ctx.r11.s64 + 8;
	// beq 0x82faf508
	if (ctx.cr0.eq) goto loc_82FAF508;
	// lwa r11,4(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 4));
	// b 0x82faf50c
	goto loc_82FAF50C;
loc_82FAF508:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FAF50C:
	// rlwinm. r10,r27,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82faf524
	if (ctx.cr0.eq) goto loc_82FAF524;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// bge cr6,0x82faf524
	if (!ctx.cr6.lt) goto loc_82FAF524;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// ori r27,r27,256
	ctx.r27.u64 = ctx.r27.u64 | 256;
loc_82FAF524:
	// rlwinm. r10,r27,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82faf538
	if (!ctx.cr0.eq) goto loc_82FAF538;
	// rlwinm. r10,r27,0,19,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82faf538
	if (!ctx.cr0.eq) goto loc_82FAF538;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
loc_82FAF538:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82faf548
	if (!ctx.cr6.lt) goto loc_82FAF548;
	// li r25,1
	ctx.r25.s64 = 1;
	// b 0x82faf558
	goto loc_82FAF558;
loc_82FAF548:
	// rlwinm r27,r27,0,29,27
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// cmpwi cr6,r25,512
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 512, ctx.xer);
	// ble cr6,0x82faf558
	if (!ctx.cr6.gt) goto loc_82FAF558;
	// li r25,512
	ctx.r25.s64 = 512;
loc_82FAF558:
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// bne cr6,0x82faf568
	if (!ctx.cr6.eq) goto loc_82FAF568;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
loc_82FAF568:
	// addi r9,r1,655
	ctx.r9.s64 = ctx.r1.s64 + 655;
loc_82FAF56C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// bgt cr6,0x82faf580
	if (ctx.cr6.gt) goto loc_82FAF580;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82faf5c4
	if (ctx.cr6.eq) goto loc_82FAF5C4;
loc_82FAF580:
	// extsw r10,r8
	ctx.r10.s64 = ctx.r8.s32;
	// divdu r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	if (ctx.r10.u64 <= 0) __builtin_debugtrap();
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// subf r7,r7,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// divdu r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 / ctx.r10.u64;
	// tdllei r10,0
	if (ctx.r10.u64 <= 0) __builtin_debugtrap();
	// rotlwi r10,r7,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// ble cr6,0x82faf5b4
	if (!ctx.cr6.gt) goto loc_82FAF5B4;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
loc_82FAF5B4:
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// b 0x82faf56c
	goto loc_82FAF56C;
loc_82FAF5C4:
	// addi r11,r1,655
	ctx.r11.s64 = ctx.r1.s64 + 655;
	// rlwinm. r10,r27,0,22,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x200;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r6,r9,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r28,r9,1
	ctx.r28.s64 = ctx.r9.s64 + 1;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// beq 0x82faf600
	if (ctx.cr0.eq) goto loc_82FAF600;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82faf5f0
	if (ctx.cr6.eq) goto loc_82FAF5F0;
	// lbz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// beq cr6,0x82faf600
	if (ctx.cr6.eq) goto loc_82FAF600;
loc_82FAF5F0:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stbu r11,-1(r28)
	ea = -1 + ctx.r28.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r28.u32 = ea;
loc_82FAF5FC:
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
loc_82FAF600:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82faf7bc
	if (!ctx.cr6.eq) goto loc_82FAF7BC;
	// rlwinm. r11,r27,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf650
	if (ctx.cr0.eq) goto loc_82FAF650;
	// rlwinm. r11,r27,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf624
	if (ctx.cr0.eq) goto loc_82FAF624;
	// li r11,45
	ctx.r11.s64 = 45;
	// b 0x82faf630
	goto loc_82FAF630;
loc_82FAF624:
	// clrlwi. r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf640
	if (ctx.cr0.eq) goto loc_82FAF640;
	// li r11,43
	ctx.r11.s64 = 43;
loc_82FAF630:
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,88(r1)
	PPC_STORE_U8(ctx.r1.u32 + 88, ctx.r11.u8);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// b 0x82faf654
	goto loc_82FAF654;
loc_82FAF640:
	// rlwinm. r11,r27,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf650
	if (ctx.cr0.eq) goto loc_82FAF650;
	// li r11,32
	ctx.r11.s64 = 32;
	// b 0x82faf630
	goto loc_82FAF630;
loc_82FAF650:
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
loc_82FAF654:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm. r10,r27,0,28,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf r29,r30,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r30.s64;
	// bne 0x82faf69c
	if (!ctx.cr0.eq) goto loc_82FAF69C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82faf69c
	if (!ctx.cr6.gt) goto loc_82FAF69C;
loc_82FAF674:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82faec68
	ctx.lr = 0x82FAF688;
	sub_82FAEC68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82faf69c
	if (ctx.cr6.eq) goto loc_82FAF69C;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82faf674
	if (ctx.cr6.gt) goto loc_82FAF674;
loc_82FAF69C:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb8da8
	ctx.lr = 0x82FAF6B0;
	sub_82FB8DA8(ctx, base);
	// rlwinm. r11,r27,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf6f4
	if (ctx.cr0.eq) goto loc_82FAF6F4;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82faf6f4
	if (!ctx.cr0.eq) goto loc_82FAF6F4;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82faf6f4
	if (!ctx.cr6.gt) goto loc_82FAF6F4;
loc_82FAF6CC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82faec68
	ctx.lr = 0x82FAF6E0;
	sub_82FAEC68(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82faf6f4
	if (ctx.cr6.eq) goto loc_82FAF6F4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82faf6cc
	if (ctx.cr6.gt) goto loc_82FAF6CC;
loc_82FAF6F4:
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82faf764
	if (ctx.cr6.eq) goto loc_82FAF764;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82faf764
	if (!ctx.cr6.gt) goto loc_82FAF764;
	// addi r30,r28,-2
	ctx.r30.s64 = ctx.r28.s64 + -2;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82FAF710:
	// li r5,6
	ctx.r5.s64 = 6;
	// lhzu r6,2(r30)
	ea = 2 + ctx.r30.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r30.u32 = ea;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82fc4768
	ctx.lr = 0x82FAF728;
	sub_82FC4768(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82faf758
	if (!ctx.cr0.eq) goto loc_82FAF758;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82faf758
	if (ctx.cr6.eq) goto loc_82FAF758;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// addi r3,r1,116
	ctx.r3.s64 = ctx.r1.s64 + 116;
	// bl 0x82fb8da8
	ctx.lr = 0x82FAF74C;
	sub_82FB8DA8(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82faf710
	if (!ctx.cr6.eq) goto loc_82FAF710;
	// b 0x82faf774
	goto loc_82FAF774;
loc_82FAF758:
	// li r24,-1
	ctx.r24.s64 = -1;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// b 0x82faf778
	goto loc_82FAF778;
loc_82FAF764:
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb8da8
	ctx.lr = 0x82FAF774;
	sub_82FB8DA8(ctx, base);
loc_82FAF774:
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82FAF778:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82faf7bc
	if (ctx.cr6.lt) goto loc_82FAF7BC;
	// rlwinm. r11,r27,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82faf7bc
	if (ctx.cr0.eq) goto loc_82FAF7BC;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82faf7bc
	if (!ctx.cr6.gt) goto loc_82FAF7BC;
loc_82FAF794:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// bl 0x82faec68
	ctx.lr = 0x82FAF7A8;
	sub_82FAEC68(ctx, base);
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r24,-1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, -1, ctx.xer);
	// beq cr6,0x82faf7bc
	if (ctx.cr6.eq) goto loc_82FAF7BC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bgt cr6,0x82faf794
	if (ctx.cr6.gt) goto loc_82FAF794;
loc_82FAF7BC:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x82faf7d0
	if (ctx.cr6.eq) goto loc_82FAF7D0;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAF7CC;
	sub_82FA27A8(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
loc_82FAF7D0:
	// lbz r29,1(r19)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r19.u32 + 1);
	// extsb. r8,r29
	ctx.r8.s64 = ctx.r29.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82faf7ec
	if (ctx.cr0.eq) goto loc_82FAF7EC;
	// lwz r7,108(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x82faee6c
	goto loc_82FAEE6C;
loc_82FAF7EC:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// b 0x82faf828
	goto loc_82FAF828;
loc_82FAF7F4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,512
	ctx.r4.s64 = 512;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82fad3e8
	ctx.lr = 0x82FAF808;
	sub_82FAD3E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82faf81c
	if (!ctx.cr6.eq) goto loc_82FAF81C;
	// li r31,511
	ctx.r31.s64 = 511;
	// stb r30,1167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 1167, ctx.r30.u8);
loc_82FAF81C:
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82a78350
	ctx.lr = 0x82FAF824;
	sub_82A78350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82FAF828:
	// addi r1,r1,1328
	ctx.r1.s64 = ctx.r1.s64 + 1328;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAF830"))) PPC_WEAK_FUNC(sub_82FAF830);
PPC_FUNC_IMPL(__imp__sub_82FAF830) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r3,11456(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11456);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAF83C"))) PPC_WEAK_FUNC(sub_82FAF83C);
PPC_FUNC_IMPL(__imp__sub_82FAF83C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAF840"))) PPC_WEAK_FUNC(sub_82FAF840);
PPC_FUNC_IMPL(__imp__sub_82FAF840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,10168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10168);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82FAF850;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bgt cr6,0x82faf924
	if (ctx.cr6.gt) goto loc_82FAF924;
	// beq cr6,0x82faf8a0
	if (ctx.cr6.eq) goto loc_82FAF8A0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82faf8b8
	if (ctx.cr6.eq) goto loc_82FAF8B8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82faf8a0
	if (ctx.cr6.eq) goto loc_82FAF8A0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82faf950
	if (ctx.cr6.eq) goto loc_82FAF950;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82faf93c
	if (!ctx.cr6.eq) goto loc_82FAF93C;
loc_82FAF8A0:
	// bl 0x82fadec0
	ctx.lr = 0x82FAF8A4;
	sub_82FADEC0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bne 0x82faf8c8
	if (!ctx.cr0.eq) goto loc_82FAF8C8;
loc_82FAF8B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fafac8
	goto loc_82FAFAC8;
loc_82FAF8B8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,11448
	ctx.r30.s64 = ctx.r11.s64 + 11448;
	// lwz r11,11448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11448);
	// b 0x82faf988
	goto loc_82FAF988;
loc_82FAF8C8:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r8,-12660(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12660);
loc_82FAF8D8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82faf8f8
	if (ctx.cr6.eq) goto loc_82FAF8F8;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82faf8d8
	if (ctx.cr6.lt) goto loc_82FAF8D8;
loc_82FAF8F8:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82faf914
	if (!ctx.cr6.lt) goto loc_82FAF914;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82faf918
	if (ctx.cr6.eq) goto loc_82FAF918;
loc_82FAF914:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82FAF918:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82faf990
	goto loc_82FAF990;
loc_82FAF924:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x82faf978
	if (ctx.cr6.eq) goto loc_82FAF978;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// beq cr6,0x82faf964
	if (ctx.cr6.eq) goto loc_82FAF964;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// beq cr6,0x82faf950
	if (ctx.cr6.eq) goto loc_82FAF950;
loc_82FAF93C:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAF940;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAF94C;
	sub_82FA1FF0(ctx, base);
	// b 0x82faf8b0
	goto loc_82FAF8B0;
loc_82FAF950:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11448
	ctx.r11.s64 = ctx.r11.s64 + 11448;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82faf988
	goto loc_82FAF988;
loc_82FAF964:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11448
	ctx.r11.s64 = ctx.r11.s64 + 11448;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82faf988
	goto loc_82FAF988;
loc_82FAF978:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11448
	ctx.r11.s64 = ctx.r11.s64 + 11448;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82FAF988:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82FAF990:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82fafac4
	if (ctx.cr6.eq) goto loc_82FAFAC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82faf9ac
	if (!ctx.cr6.eq) goto loc_82FAF9AC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82fab518
	ctx.lr = 0x82FAF9AC;
	sub_82FAB518(ctx, base);
loc_82FAF9AC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82faf9bc
	if (ctx.cr6.eq) goto loc_82FAF9BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fb0018
	ctx.lr = 0x82FAF9BC;
	sub_82FB0018(ctx, base);
loc_82FAF9BC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x82faf9dc
	if (ctx.cr6.eq) goto loc_82FAF9DC;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x82faf9dc
	if (ctx.cr6.eq) goto loc_82FAF9DC;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82fafa00
	if (!ctx.cr6.eq) goto loc_82FAFA00;
loc_82FAF9DC:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r26.u32);
	// bne cr6,0x82fafa50
	if (!ctx.cr6.eq) goto loc_82FAFA50;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
loc_82FAFA00:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82fafa50
	if (!ctx.cr6.eq) goto loc_82FAFA50;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lwz r10,-12672(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12672);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_82FAFA1C:
	// lwz r9,-12668(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12668);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82fafa54
	if (!ctx.cr6.lt) goto loc_82FAFA54;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,-12672(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12672);
	// b 0x82fafa1c
	goto loc_82FAFA1C;
loc_82FAFA50:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82FAFA54:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82fafaf0
	ctx.lr = 0x82FAFA60;
	sub_82FAFAF0(ctx, base);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x82fafa88
	if (!ctx.cr6.eq) goto loc_82FAFA88;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x82FAFA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fafa94
	goto loc_82FAFA94;
loc_82FAFA88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82FAFA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82FAFA94:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82fafaac
	if (ctx.cr6.eq) goto loc_82FAFAAC;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x82fafaac
	if (ctx.cr6.eq) goto loc_82FAFAAC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82fafac4
	if (!ctx.cr6.eq) goto loc_82FAFAC4;
loc_82FAFAAC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82fafac4
	if (!ctx.cr6.eq) goto loc_82FAFAC4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82FAFAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAFAC8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAF848"))) PPC_WEAK_FUNC(sub_82FAF848);
PPC_FUNC_IMPL(__imp__sub_82FAF848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82FAF850;
	__savegprlr_26(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r3,11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 11, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// stw r26,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r26.u32);
	// stw r26,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r26.u32);
	// bgt cr6,0x82faf924
	if (ctx.cr6.gt) goto loc_82FAF924;
	// beq cr6,0x82faf8a0
	if (ctx.cr6.eq) goto loc_82FAF8A0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82faf8b8
	if (ctx.cr6.eq) goto loc_82FAF8B8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82faf8a0
	if (ctx.cr6.eq) goto loc_82FAF8A0;
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82faf950
	if (ctx.cr6.eq) goto loc_82FAF950;
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// bne cr6,0x82faf93c
	if (!ctx.cr6.eq) goto loc_82FAF93C;
loc_82FAF8A0:
	// bl 0x82fadec0
	ctx.lr = 0x82FAF8A4;
	sub_82FADEC0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r27,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r27.u32);
	// bne 0x82faf8c8
	if (!ctx.cr0.eq) goto loc_82FAF8C8;
loc_82FAF8B0:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82fafac8
	goto loc_82FAFAC8;
loc_82FAF8B8:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,11448
	ctx.r30.s64 = ctx.r11.s64 + 11448;
	// lwz r11,11448(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11448);
	// b 0x82faf988
	goto loc_82FAF988;
loc_82FAF8C8:
	// lwz r10,92(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lwz r8,-12660(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -12660);
loc_82FAF8D8:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r9,r29
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82faf8f8
	if (ctx.cr6.eq) goto loc_82FAF8F8;
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82faf8d8
	if (ctx.cr6.lt) goto loc_82FAF8D8;
loc_82FAF8F8:
	// mulli r9,r8,12
	ctx.r9.s64 = ctx.r8.s64 * 12;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82faf914
	if (!ctx.cr6.lt) goto loc_82FAF914;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82faf918
	if (ctx.cr6.eq) goto loc_82FAF918;
loc_82FAF914:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82FAF918:
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82faf990
	goto loc_82FAF990;
loc_82FAF924:
	// cmpwi cr6,r29,15
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 15, ctx.xer);
	// beq cr6,0x82faf978
	if (ctx.cr6.eq) goto loc_82FAF978;
	// cmpwi cr6,r29,21
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 21, ctx.xer);
	// beq cr6,0x82faf964
	if (ctx.cr6.eq) goto loc_82FAF964;
	// cmpwi cr6,r29,22
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 22, ctx.xer);
	// beq cr6,0x82faf950
	if (ctx.cr6.eq) goto loc_82FAF950;
loc_82FAF93C:
	// bl 0x82fa6db0
	ctx.lr = 0x82FAF940;
	sub_82FA6DB0(ctx, base);
	// li r11,22
	ctx.r11.s64 = 22;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82fa1ff0
	ctx.lr = 0x82FAF94C;
	sub_82FA1FF0(ctx, base);
	// b 0x82faf8b0
	goto loc_82FAF8B0;
loc_82FAF950:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11448
	ctx.r11.s64 = ctx.r11.s64 + 11448;
	// addi r30,r11,8
	ctx.r30.s64 = ctx.r11.s64 + 8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82faf988
	goto loc_82FAF988;
loc_82FAF964:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11448
	ctx.r11.s64 = ctx.r11.s64 + 11448;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82faf988
	goto loc_82FAF988;
loc_82FAF978:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11448
	ctx.r11.s64 = ctx.r11.s64 + 11448;
	// addi r30,r11,12
	ctx.r30.s64 = ctx.r11.s64 + 12;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
loc_82FAF988:
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
loc_82FAF990:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82fafac4
	if (ctx.cr6.eq) goto loc_82FAFAC4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82faf9ac
	if (!ctx.cr6.eq) goto loc_82FAF9AC;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82fab518
	ctx.lr = 0x82FAF9AC;
	sub_82FAB518(ctx, base);
loc_82FAF9AC:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82faf9bc
	if (ctx.cr6.eq) goto loc_82FAF9BC;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fb0018
	ctx.lr = 0x82FAF9BC;
	sub_82FB0018(ctx, base);
loc_82FAF9BC:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x82faf9dc
	if (ctx.cr6.eq) goto loc_82FAF9DC;
	// cmpwi cr6,r29,11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 11, ctx.xer);
	// beq cr6,0x82faf9dc
	if (ctx.cr6.eq) goto loc_82FAF9DC;
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// bne cr6,0x82fafa00
	if (!ctx.cr6.eq) goto loc_82FAFA00;
loc_82FAF9DC:
	// lwz r11,96(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 96);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r26.u32);
	// bne cr6,0x82fafa50
	if (!ctx.cr6.eq) goto loc_82FAFA50;
	// lwz r11,100(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 100);
	// li r10,140
	ctx.r10.s64 = 140;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,100(r27)
	PPC_STORE_U32(ctx.r27.u32 + 100, ctx.r10.u32);
loc_82FAFA00:
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bne cr6,0x82fafa50
	if (!ctx.cr6.eq) goto loc_82FAFA50;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lwz r10,-12672(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12672);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
loc_82FAFA1C:
	// lwz r9,-12668(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12668);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82fafa54
	if (!ctx.cr6.lt) goto loc_82FAFA54;
	// lwz r9,92(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 92);
	// mulli r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r26,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r26.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lwz r10,-12672(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12672);
	// b 0x82fafa1c
	goto loc_82FAFA1C;
loc_82FAFA50:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82FAFA54:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,160
	ctx.r12.s64 = ctx.r31.s64 + 160;
	// bl 0x82fafaf0
	ctx.lr = 0x82FAFA60;
	sub_82FAFAF0(ctx, base);
	// lwz r30,180(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bne cr6,0x82fafa88
	if (!ctx.cr6.eq) goto loc_82FAFA88;
	// li r3,8
	ctx.r3.s64 = 8;
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,100(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// bctrl 
	ctx.lr = 0x82FAFA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fafa94
	goto loc_82FAFA94;
loc_82FAFA88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82FAFA90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r29,88(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
loc_82FAFA94:
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// beq cr6,0x82fafaac
	if (ctx.cr6.eq) goto loc_82FAFAAC;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x82fafaac
	if (ctx.cr6.eq) goto loc_82FAFAAC;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82fafac4
	if (!ctx.cr6.eq) goto loc_82FAFAC4;
loc_82FAFAAC:
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// stw r11,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r11.u32);
	// bne cr6,0x82fafac4
	if (!ctx.cr6.eq) goto loc_82FAFAC4;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82FAFAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FAFAC8:
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAFAD0"))) PPC_WEAK_FUNC(sub_82FAFAD0);
PPC_FUNC_IMPL(__imp__sub_82FAFAD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,84(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x82fafb08
	goto loc_82FAFB08;
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82FAFB08:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82fafb18
	if (ctx.cr6.eq) goto loc_82FAFB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fafd98
	ctx.lr = 0x82FAFB18;
	sub_82FAFD98(ctx, base);
loc_82FAFB18:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFAF0"))) PPC_WEAK_FUNC(sub_82FAFAF0);
PPC_FUNC_IMPL(__imp__sub_82FAFAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r31,r12,-160
	ctx.r31.s64 = ctx.r12.s64 + -160;
	// std r28,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r28.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82fafb18
	if (ctx.cr6.eq) goto loc_82FAFB18;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fafd98
	ctx.lr = 0x82FAFB18;
	sub_82FAFD98(ctx, base);
loc_82FAFB18:
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// ld r28,-16(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// lwz r12,-24(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -24);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFB30"))) PPC_WEAK_FUNC(sub_82FAFB30);
PPC_FUNC_IMPL(__imp__sub_82FAFB30) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// addi r10,r4,1022
	ctx.r10.s64 = ctx.r4.s64 + 1022;
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFB58"))) PPC_WEAK_FUNC(sub_82FAFB58);
PPC_FUNC_IMPL(__imp__sub_82FAFB58) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// addi r11,r11,-1022
	ctx.r11.s64 = ctx.r11.s64 + -1022;
	// extsh r3,r11
	ctx.r3.s64 = ctx.r11.s16;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFB70"))) PPC_WEAK_FUNC(sub_82FAFB70);
PPC_FUNC_IMPL(__imp__sub_82FAFB70) {
	PPC_FUNC_PROLOGUE();
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r10,-16(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// rlwinm r11,r11,28,21,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7FF;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// andi. r10,r10,32783
	ctx.r10.u64 = ctx.r10.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// lfd f1,-16(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFBA4"))) PPC_WEAK_FUNC(sub_82FAFBA4);
PPC_FUNC_IMPL(__imp__sub_82FAFBA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFBA8"))) PPC_WEAK_FUNC(sub_82FAFBA8);
PPC_FUNC_IMPL(__imp__sub_82FAFBA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,32752
	ctx.r11.s64 = 2146435072;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lwz r10,16(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fafbd0
	if (!ctx.cr6.eq) goto loc_82FAFBD0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fafbec
	if (!ctx.cr6.eq) goto loc_82FAFBEC;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82FAFBD0:
	// lis r11,-16
	ctx.r11.s64 = -1048576;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fafbec
	if (!ctx.cr6.eq) goto loc_82FAFBEC;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82fafbec
	if (!ctx.cr6.eq) goto loc_82FAFBEC;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82FAFBEC:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r11,r11,0,17,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF8;
	// cmplwi cr6,r11,32760
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32760, ctx.xer);
	// bne cr6,0x82fafc04
	if (!ctx.cr6.eq) goto loc_82FAFC04;
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82FAFC04:
	// cmplwi cr6,r11,32752
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32752, ctx.xer);
	// bne cr6,0x82fafc24
	if (!ctx.cr6.eq) goto loc_82FAFC24;
	// clrlwi. r11,r10,13
	ctx.r11.u64 = ctx.r10.u32 & 0x7FFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fafc1c
	if (!ctx.cr0.eq) goto loc_82FAFC1C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82fafc24
	if (ctx.cr6.eq) goto loc_82FAFC24;
loc_82FAFC1C:
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
loc_82FAFC24:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFC2C"))) PPC_WEAK_FUNC(sub_82FAFC2C);
PPC_FUNC_IMPL(__imp__sub_82FAFC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFC30"))) PPC_WEAK_FUNC(sub_82FAFC30);
PPC_FUNC_IMPL(__imp__sub_82FAFC30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stfd f1,16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 16, ctx.f1.u64);
	// lfd f0,22472(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22472);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82fafc4c
	if (!ctx.cr6.eq) goto loc_82FAFC4C;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82fafd1c
	goto loc_82FAFD1C;
loc_82FAFC4C:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm. r9,r11,0,17,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7FF0;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fafcf4
	if (!ctx.cr0.eq) goto loc_82FAFCF4;
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lwz r10,20(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// clrlwi. r7,r8,12
	ctx.r7.u64 = ctx.r8.u32 & 0xFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82fafc70
	if (!ctx.cr0.eq) goto loc_82FAFC70;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fafcf4
	if (ctx.cr6.eq) goto loc_82FAFCF4;
loc_82FAFC70:
	// li r9,-1021
	ctx.r9.s64 = -1021;
	// fcmpu cr6,f1,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// li r7,1
	ctx.r7.s64 = 1;
	// blt cr6,0x82fafc84
	if (ctx.cr6.lt) goto loc_82FAFC84;
	// li r7,0
	ctx.r7.s64 = 0;
loc_82FAFC84:
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82fafcbc
	if (!ctx.cr0.eq) goto loc_82FAFCBC;
loc_82FAFC8C:
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm. r11,r10,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
	// beq 0x82fafca4
	if (ctx.cr0.eq) goto loc_82FAFCA4;
	// ori r8,r8,1
	ctx.r8.u64 = ctx.r8.u64 | 1;
	// stw r8,16(r1)
	PPC_STORE_U32(ctx.r1.u32 + 16, ctx.r8.u32);
loc_82FAFCA4:
	// lhz r11,16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 16);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// rlwinm. r6,r11,0,27,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82fafc8c
	if (ctx.cr0.eq) goto loc_82FAFC8C;
	// stw r10,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r10.u32);
loc_82FAFCBC:
	// andi. r11,r11,65519
	ctx.r11.u64 = ctx.r11.u64 & 65519;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
	// beq cr6,0x82fafcd4
	if (ctx.cr6.eq) goto loc_82FAFCD4;
	// ori r11,r11,32768
	ctx.r11.u64 = ctx.r11.u64 | 32768;
	// sth r11,16(r1)
	PPC_STORE_U16(ctx.r1.u32 + 16, ctx.r11.u16);
loc_82FAFCD4:
	// lfd f0,16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 16);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// b 0x82fafd18
	goto loc_82FAFD18;
loc_82FAFCF4:
	// stfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// lhz r11,-16(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + -16);
	// andi. r11,r11,32783
	ctx.r11.u64 = ctx.r11.u64 & 32783;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stfd f1,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f1.u64);
	// ori r11,r11,16352
	ctx.r11.u64 = ctx.r11.u64 | 16352;
	// rlwinm r10,r9,28,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 28) & 0xFFF;
	// sth r11,-16(r1)
	PPC_STORE_U16(ctx.r1.u32 + -16, ctx.r11.u16);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r9,r10,-1022
	ctx.r9.s64 = ctx.r10.s64 + -1022;
loc_82FAFD18:
	// lfd f1,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
loc_82FAFD1C:
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFD24"))) PPC_WEAK_FUNC(sub_82FAFD24);
PPC_FUNC_IMPL(__imp__sub_82FAFD24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFD28"))) PPC_WEAK_FUNC(sub_82FAFD28);
PPC_FUNC_IMPL(__imp__sub_82FAFD28) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r30,r11,-14848
	ctx.r30.s64 = ctx.r11.s64 + -14848;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_82FAFD48:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fafd6c
	if (ctx.cr6.eq) goto loc_82FAFD6C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82fafd6c
	if (ctx.cr6.eq) goto loc_82FAFD6C;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAFD64;
	sub_82FA27A8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FAFD6C:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82fafd48
	if (ctx.cr6.lt) goto loc_82FAFD48;
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

__attribute__((alias("__imp__sub_82FAFD94"))) PPC_WEAK_FUNC(sub_82FAFD94);
PPC_FUNC_IMPL(__imp__sub_82FAFD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFD98"))) PPC_WEAK_FUNC(sub_82FAFD98);
PPC_FUNC_IMPL(__imp__sub_82FAFD98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r11,r11,-14848
	ctx.r11.s64 = ctx.r11.s64 + -14848;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x831791b4
	__imp__RtlLeaveCriticalSection(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAFDAC"))) PPC_WEAK_FUNC(sub_82FAFDAC);
PPC_FUNC_IMPL(__imp__sub_82FAFDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFDB0"))) PPC_WEAK_FUNC(sub_82FAFDB0);
PPC_FUNC_IMPL(__imp__sub_82FAFDB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,10192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10192);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83179224
	ctx.lr = 0x82FAFDDC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82fafe14
	// ERROR 82FAFE14
	return;
}

__attribute__((alias("__imp__sub_82FAFDB8"))) PPC_WEAK_FUNC(sub_82FAFDB8);
PPC_FUNC_IMPL(__imp__sub_82FAFDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// bl 0x83179224
	ctx.lr = 0x82FAFDDC;
	__imp__RtlInitializeCriticalSectionAndSpinCount(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82fafe14
	goto loc_82FAFE14;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fafe0c
	if (!ctx.cr6.eq) goto loc_82FAFE0C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a831c0
	ctx.lr = 0x82FAFE0C;
	sub_82A831C0(ctx, base);
loc_82FAFE0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
loc_82FAFE14:
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFDF4"))) PPC_WEAK_FUNC(sub_82FAFDF4);
PPC_FUNC_IMPL(__imp__sub_82FAFDF4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82fafe0c
	if (!ctx.cr6.eq) goto loc_82FAFE0C;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82a831c0
	ctx.lr = 0x82FAFE0C;
	sub_82A831C0(ctx, base);
loc_82FAFE0C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFE28"))) PPC_WEAK_FUNC(sub_82FAFE28);
PPC_FUNC_IMPL(__imp__sub_82FAFE28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r11,r11,23
	ctx.r11.u64 = ctx.r11.u64 | 23;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFE4C"))) PPC_WEAK_FUNC(sub_82FAFE4C);
PPC_FUNC_IMPL(__imp__sub_82FAFE4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FAFE50"))) PPC_WEAK_FUNC(sub_82FAFE50);
PPC_FUNC_IMPL(__imp__sub_82FAFE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FAFE58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31969
	ctx.r10.s64 = -2095120384;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r10,-14848
	ctx.r30.s64 = ctx.r10.s64 + -14848;
	// addi r28,r11,11464
	ctx.r28.s64 = ctx.r11.s64 + 11464;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82FAFE74:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82fafe9c
	if (!ctx.cr6.eq) goto loc_82FAFE9C;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rotlwi r3,r28,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// li r4,4000
	ctx.r4.s64 = 4000;
	// addi r28,r28,28
	ctx.r28.s64 = ctx.r28.s64 + 28;
	// bl 0x82fafdb8
	ctx.lr = 0x82FAFE94;
	sub_82FAFDB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82fafebc
	if (ctx.cr0.eq) goto loc_82FAFEBC;
loc_82FAFE9C:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r11,r30,288
	ctx.r11.s64 = ctx.r30.s64 + 288;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82fafe74
	if (ctx.cr6.lt) goto loc_82FAFE74;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82FAFEB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82FAFEBC:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// b 0x82fafeb4
	goto loc_82FAFEB4;
}

__attribute__((alias("__imp__sub_82FAFED0"))) PPC_WEAK_FUNC(sub_82FAFED0);
PPC_FUNC_IMPL(__imp__sub_82FAFED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,10216(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10216);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FAFEE0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82a831b0
	ctx.lr = 0x82FAFEF8;
	sub_82A831B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82faff14
	if (!ctx.cr0.eq) goto loc_82FAFF14;
	// bl 0x82faea38
	ctx.lr = 0x82FAFF04;
	sub_82FAEA38(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82faea08
	ctx.lr = 0x82FAFF0C;
	sub_82FAEA08(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82fab288
	ctx.lr = 0x82FAFF14;
	sub_82FAB288(ctx, base);
loc_82FAFF14:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-14848
	ctx.r30.s64 = ctx.r11.s64 + -14848;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faff34
	if (ctx.cr6.eq) goto loc_82FAFF34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82faffc4
	goto loc_82FAFFC4;
loc_82FAFF34:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82fa76f0
	ctx.lr = 0x82FAFF3C;
	sub_82FA76F0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82faff5c
	if (!ctx.cr0.eq) goto loc_82FAFF5C;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAFF48;
	sub_82FA6DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82faffc4
	goto loc_82FAFFC4;
loc_82FAFF5C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82fb0018
	ctx.lr = 0x82FAFF64;
	sub_82FB0018(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82faffb0
	if (!ctx.cr6.eq) goto loc_82FAFFB0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82fafdb8
	ctx.lr = 0x82FAFF80;
	sub_82FAFDB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82faffa8
	if (!ctx.cr0.eq) goto loc_82FAFFA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAFF90;
	sub_82FA27A8(ctx, base);
	// bl 0x82fa6db0
	ctx.lr = 0x82FAFF94;
	sub_82FA6DB0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82faffb4
	goto loc_82FAFFB4;
loc_82FAFFA8:
	// stwx r28,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x82faffb4
	goto loc_82FAFFB4;
loc_82FAFFB0:
	// bl 0x82fa27a8
	ctx.lr = 0x82FAFFB4;
	sub_82FA27A8(ctx, base);
loc_82FAFFB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82faffe8
	ctx.lr = 0x82FAFFC0;
	sub_82FAFFE8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82FAFFC4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAFED8"))) PPC_WEAK_FUNC(sub_82FAFED8);
PPC_FUNC_IMPL(__imp__sub_82FAFED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FAFEE0;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x82a831b0
	ctx.lr = 0x82FAFEF8;
	sub_82A831B0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82faff14
	if (!ctx.cr0.eq) goto loc_82FAFF14;
	// bl 0x82faea38
	ctx.lr = 0x82FAFF04;
	sub_82FAEA38(ctx, base);
	// li r3,30
	ctx.r3.s64 = 30;
	// bl 0x82faea08
	ctx.lr = 0x82FAFF0C;
	sub_82FAEA08(ctx, base);
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x82fab288
	ctx.lr = 0x82FAFF14;
	sub_82FAB288(ctx, base);
loc_82FAFF14:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-14848
	ctx.r30.s64 = ctx.r11.s64 + -14848;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82faff34
	if (ctx.cr6.eq) goto loc_82FAFF34;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82faffc4
	goto loc_82FAFFC4;
loc_82FAFF34:
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82fa76f0
	ctx.lr = 0x82FAFF3C;
	sub_82FA76F0(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82faff5c
	if (!ctx.cr0.eq) goto loc_82FAFF5C;
	// bl 0x82fa6db0
	ctx.lr = 0x82FAFF48;
	sub_82FA6DB0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,12
	ctx.r10.s64 = 12;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82faffc4
	goto loc_82FAFFC4;
loc_82FAFF5C:
	// li r3,10
	ctx.r3.s64 = 10;
	// bl 0x82fb0018
	ctx.lr = 0x82FAFF64;
	sub_82FB0018(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bne cr6,0x82faffb0
	if (!ctx.cr6.eq) goto loc_82FAFFB0;
	// li r4,4000
	ctx.r4.s64 = 4000;
	// bl 0x82fafdb8
	ctx.lr = 0x82FAFF80;
	sub_82FAFDB8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82faffa8
	if (!ctx.cr0.eq) goto loc_82FAFFA8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa27a8
	ctx.lr = 0x82FAFF90;
	sub_82FA27A8(ctx, base);
	// bl 0x82fa6db0
	ctx.lr = 0x82FAFF94;
	sub_82FA6DB0(ctx, base);
	// li r11,12
	ctx.r11.s64 = 12;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// b 0x82faffb4
	goto loc_82FAFFB4;
loc_82FAFFA8:
	// stwx r28,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r28.u32);
	// b 0x82faffb4
	goto loc_82FAFFB4;
loc_82FAFFB0:
	// bl 0x82fa27a8
	ctx.lr = 0x82FAFFB4;
	sub_82FA27A8(ctx, base);
loc_82FAFFB4:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// addi r12,r31,128
	ctx.r12.s64 = ctx.r31.s64 + 128;
	// bl 0x82faffe8
	ctx.lr = 0x82FAFFC0;
	sub_82FAFFE8(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_82FAFFC4:
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FAFFCC"))) PPC_WEAK_FUNC(sub_82FAFFCC);
PPC_FUNC_IMPL(__imp__sub_82FAFFCC) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r30,r11,-14848
	ctx.r30.s64 = ctx.r11.s64 + -14848;
	// b 0x82fafff8
	goto loc_82FAFFF8;
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
loc_82FAFFF8:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x831791b4
	ctx.lr = 0x82FB0000;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FAFFE8"))) PPC_WEAK_FUNC(sub_82FAFFE8);
PPC_FUNC_IMPL(__imp__sub_82FAFFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r30.u64);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-16(r1)
	PPC_STORE_U32(ctx.r1.u32 + -16, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// bl 0x831791b4
	ctx.lr = 0x82FB0000;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r1,0(r1)
	ctx.r1.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// ld r30,-8(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// lwz r12,-16(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0014"))) PPC_WEAK_FUNC(sub_82FB0014);
PPC_FUNC_IMPL(__imp__sub_82FB0014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0018"))) PPC_WEAK_FUNC(sub_82FB0018);
PPC_FUNC_IMPL(__imp__sub_82FB0018) {
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
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r31,r3,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r30,r11,-14848
	ctx.r30.s64 = ctx.r11.s64 + -14848;
	// lwzx r11,r31,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb0058
	if (!ctx.cr6.eq) goto loc_82FB0058;
	// bl 0x82fafed8
	ctx.lr = 0x82FB0048;
	sub_82FAFED8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82fb0058
	if (!ctx.cr0.eq) goto loc_82FB0058;
	// li r3,17
	ctx.r3.s64 = 17;
	// bl 0x82fab538
	ctx.lr = 0x82FB0058;
	sub_82FAB538(ctx, base);
loc_82FB0058:
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// bl 0x831791a4
	ctx.lr = 0x82FB0060;
	__imp__RtlEnterCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82FB0078"))) PPC_WEAK_FUNC(sub_82FB0078);
PPC_FUNC_IMPL(__imp__sub_82FB0078) {
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
	// beq cr6,0x82fb00c8
	if (ctx.cr6.eq) goto loc_82FB00C8;
	// b 0x82fb00b8
	goto loc_82FB00B8;
loc_82FB009C:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82FB00B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB00B8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bne cr6,0x82fb009c
	if (!ctx.cr6.eq) goto loc_82FB009C;
loc_82FB00C8:
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

__attribute__((alias("__imp__sub_82FB00DC"))) PPC_WEAK_FUNC(sub_82FB00DC);
PPC_FUNC_IMPL(__imp__sub_82FB00DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB00E0"))) PPC_WEAK_FUNC(sub_82FB00E0);
PPC_FUNC_IMPL(__imp__sub_82FB00E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lwz r10,11888(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11888);
	// lbz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// extsb. r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb00fc
	if (!ctx.cr0.eq) goto loc_82FB00FC;
loc_82FB00F4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82FB00FC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82fb011c
	if (ctx.cr6.lt) goto loc_82FB011C;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// bgt cr6,0x82fb011c
	if (ctx.cr6.gt) goto loc_82FB011C;
	// addi r3,r11,-47
	ctx.r3.s64 = ctx.r11.s64 + -47;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// stw r11,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r11.u32);
	// blr 
	return;
loc_82FB011C:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fb0154
	goto loc_82FB0154;
loc_82FB0124:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fb00f4
	if (ctx.cr6.eq) goto loc_82FB00F4;
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82fb016c
	if (ctx.cr6.lt) goto loc_82FB016C;
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// bgt cr6,0x82fb016c
	if (ctx.cr6.gt) goto loc_82FB016C;
	// lbzu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// rlwinm r8,r3,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// addi r3,r8,-65
	ctx.r3.s64 = ctx.r8.s64 + -65;
	// stw r10,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r10.u32);
loc_82FB0154:
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// bne cr6,0x82fb0124
	if (!ctx.cr6.eq) goto loc_82FB0124;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r11,64
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 64, ctx.xer);
	// stw r10,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r10.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82FB016C:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0174"))) PPC_WEAK_FUNC(sub_82FB0174);
PPC_FUNC_IMPL(__imp__sub_82FB0174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0178"))) PPC_WEAK_FUNC(sub_82FB0178);
PPC_FUNC_IMPL(__imp__sub_82FB0178) {
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
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// lwz r11,11888(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 11888);
loc_82FB018C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r10,95
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 95, ctx.xer);
	// bne cr6,0x82fb01a8
	if (!ctx.cr6.eq) goto loc_82FB01A8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,16384
	ctx.r8.s64 = 16384;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
loc_82FB01A8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x82fb01c0
	if (ctx.cr6.lt) goto loc_82FB01C0;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// ble cr6,0x82fb0268
	if (!ctx.cr6.gt) goto loc_82FB0268;
loc_82FB01C0:
	// cmpwi cr6,r10,36
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 36, ctx.xer);
	// bne cr6,0x82fb0500
	if (!ctx.cr6.eq) goto loc_82FB0500;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,66
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 66, ctx.xer);
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// bgt cr6,0x82fb03d4
	if (ctx.cr6.gt) goto loc_82FB03D4;
	// beq cr6,0x82fb03cc
	if (ctx.cr6.eq) goto loc_82FB03CC;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fb03bc
	if (ctx.cr6.eq) goto loc_82FB03BC;
	// cmplwi cr6,r10,36
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 36, ctx.xer);
	// bne cr6,0x82fb0358
	if (!ctx.cr6.eq) goto loc_82FB0358;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,80
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 80, ctx.xer);
	// bne cr6,0x82fb0210
	if (!ctx.cr6.eq) goto loc_82FB0210;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// stw r10,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r10.u32);
loc_82FB0210:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// cmplwi cr6,r10,74
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 74, ctx.xer);
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// bgt cr6,0x82fb023c
	if (ctx.cr6.gt) goto loc_82FB023C;
	// beq cr6,0x82fb0380
	if (ctx.cr6.eq) goto loc_82FB0380;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fb0648
	if (ctx.cr6.eq) goto loc_82FB0648;
	// cmplwi cr6,r10,70
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 70, ctx.xer);
	// beq cr6,0x82fb025c
	if (ctx.cr6.eq) goto loc_82FB025C;
	// cmplwi cr6,r10,72
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 72, ctx.xer);
	// b 0x82fb0258
	goto loc_82FB0258;
loc_82FB023C:
	// cmplwi cr6,r10,76
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 76, ctx.xer);
	// blt cr6,0x82fb02c0
	if (ctx.cr6.lt) goto loc_82FB02C0;
	// cmplwi cr6,r10,77
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 77, ctx.xer);
	// ble cr6,0x82fb025c
	if (!ctx.cr6.gt) goto loc_82FB025C;
	// cmplwi cr6,r10,79
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 79, ctx.xer);
	// ble cr6,0x82fb0380
	if (!ctx.cr6.gt) goto loc_82FB0380;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
loc_82FB0258:
	// bne cr6,0x82fb02c0
	if (!ctx.cr6.eq) goto loc_82FB02C0;
loc_82FB025C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// b 0x82fb018c
	goto loc_82FB018C;
loc_82FB0268:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,-65
	ctx.r10.s64 = ctx.r10.s64 + -65;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// ori r11,r8,32768
	ctx.r11.u64 = ctx.r8.u64 | 32768;
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r3,r11,8192
	ctx.r3.u64 = ctx.r11.u64 | 8192;
	// bne 0x82fb0288
	if (!ctx.cr0.eq) goto loc_82FB0288;
	// rlwinm r3,r11,0,19,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_82FB0288:
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// bge cr6,0x82fb0650
	if (!ctx.cr6.lt) goto loc_82FB0650;
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x82fb02a4
	if (ctx.cr0.eq) goto loc_82FB02A4;
	// rlwimi r3,r6,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb02a8
	goto loc_82FB02A8;
loc_82FB02A4:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_82FB02A8:
	// rlwinm. r11,r10,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x18;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb02fc
	if (ctx.cr0.eq) goto loc_82FB02FC;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82fb02e4
	if (ctx.cr6.eq) goto loc_82FB02E4;
	// cmpwi cr6,r11,16
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 16, ctx.xer);
	// beq cr6,0x82fb02cc
	if (ctx.cr6.eq) goto loc_82FB02CC;
loc_82FB02C0:
	// lis r3,0
	ctx.r3.s64 = 0;
loc_82FB02C4:
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB02CC:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb02dc
	if (ctx.cr0.eq) goto loc_82FB02DC;
	// rlwinm r3,r3,0,26,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x82fb0310
	goto loc_82FB0310;
loc_82FB02DC:
	// rlwinm r3,r3,0,21,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// b 0x82fb0310
	goto loc_82FB0310;
loc_82FB02E4:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb02f4
	if (ctx.cr0.eq) goto loc_82FB02F4;
	// rlwimi r3,r6,7,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82fb0310
	goto loc_82FB0310;
loc_82FB02F4:
	// rlwimi r3,r6,12,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 12) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb0310
	goto loc_82FB0310;
loc_82FB02FC:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb030c
	if (ctx.cr0.eq) goto loc_82FB030C;
	// rlwimi r3,r6,6,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82fb0310
	goto loc_82FB0310;
loc_82FB030C:
	// rlwimi r3,r6,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
loc_82FB0310:
	// rlwinm. r11,r10,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb0650
	if (ctx.cr0.eq) goto loc_82FB0650;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82fb0340
	if (ctx.cr6.eq) goto loc_82FB0340;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82fb0338
	if (ctx.cr6.eq) goto loc_82FB0338;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// bne cr6,0x82fb02c0
	if (!ctx.cr6.eq) goto loc_82FB02C0;
	// rlwimi r3,r6,10,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 10) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0338:
	// rlwimi r3,r6,8,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 8) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0340:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb0350
	if (ctx.cr0.eq) goto loc_82FB0350;
	// rlwimi r3,r6,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0350:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0358:
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// ble cr6,0x82fb02c0
	if (!ctx.cr6.gt) goto loc_82FB02C0;
	// cmplwi cr6,r9,53
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 53, ctx.xer);
	// ble cr6,0x82fb0414
	if (!ctx.cr6.gt) goto loc_82FB0414;
	// cmplwi cr6,r9,65
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65, ctx.xer);
	// bne cr6,0x82fb02c0
	if (!ctx.cr6.eq) goto loc_82FB02C0;
	// rlwinm r10,r8,0,24,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFCFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// ori r3,r10,36864
	ctx.r3.u64 = ctx.r10.u64 | 36864;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB0380:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82fb03b0
	if (ctx.cr6.lt) goto loc_82FB03B0;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x82fb03b0
	if (ctx.cr6.gt) goto loc_82FB03B0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// bl 0x82fb0178
	ctx.lr = 0x82FB03A8;
	sub_82FB0178(ctx, base);
	// oris r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 65536;
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB03B0:
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB03BC:
	// lis r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB03CC:
	// ori r3,r8,38912
	ctx.r3.u64 = ctx.r8.u64 | 38912;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB03D4:
	// cmplwi cr6,r9,67
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 67, ctx.xer);
	// beq cr6,0x82fb04f0
	if (ctx.cr6.eq) goto loc_82FB04F0;
	// cmplwi cr6,r9,68
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 68, ctx.xer);
	// beq cr6,0x82fb04e0
	if (ctx.cr6.eq) goto loc_82FB04E0;
	// cmplwi cr6,r9,69
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 69, ctx.xer);
	// beq cr6,0x82fb04d0
	if (ctx.cr6.eq) goto loc_82FB04D0;
	// cmplwi cr6,r9,82
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 82, ctx.xer);
	// bne cr6,0x82fb02c0
	if (!ctx.cr6.eq) goto loc_82FB02C0;
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// extsb r9,r10
	ctx.r9.s64 = ctx.r10.s8;
	// cmpwi cr6,r9,48
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 48, ctx.xer);
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// blt cr6,0x82fb04c0
	if (ctx.cr6.lt) goto loc_82FB04C0;
	// cmpwi cr6,r9,53
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 53, ctx.xer);
	// bgt cr6,0x82fb04c0
	if (ctx.cr6.gt) goto loc_82FB04C0;
loc_82FB0414:
	// ori r9,r8,32768
	ctx.r9.u64 = ctx.r8.u64 | 32768;
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// rlwinm. r8,r9,0,16,16
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// beq 0x82fb0430
	if (ctx.cr0.eq) goto loc_82FB0430;
	// rlwimi r9,r6,11,19,20
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x1800) | (ctx.r9.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb0434
	goto loc_82FB0434;
loc_82FB0430:
	// rlwinm r9,r9,0,19,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_82FB0434:
	// clrlwi. r8,r7,24
	ctx.r8.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82fb0448
	if (ctx.cr0.eq) goto loc_82FB0448;
	// li r8,3
	ctx.r8.s64 = 3;
	// rlwimi r9,r8,9,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 9) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb0450
	goto loc_82FB0450;
loc_82FB0448:
	// li r8,5
	ctx.r8.s64 = 5;
	// rlwimi r9,r8,8,21,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0x700) | (ctx.r9.u64 & 0xFFFFFFFFFFFFF8FF);
loc_82FB0450:
	// clrlwi. r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r3,r9,8192
	ctx.r3.u64 = ctx.r9.u64 | 8192;
	// bne 0x82fb0460
	if (!ctx.cr0.eq) goto loc_82FB0460;
	// rlwinm r3,r9,0,19,17
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFFFFFFFDFFF;
loc_82FB0460:
	// rlwinm. r10,r10,0,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x6;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb04a8
	if (ctx.cr0.eq) goto loc_82FB04A8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82fb0490
	if (ctx.cr6.eq) goto loc_82FB0490;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82fb02c0
	if (!ctx.cr6.eq) goto loc_82FB02C0;
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb0488
	if (ctx.cr0.eq) goto loc_82FB0488;
	// rlwinm r3,r3,0,26,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB0488:
	// rlwinm r3,r3,0,21,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB0490:
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb04a0
	if (ctx.cr0.eq) goto loc_82FB04A0;
	// rlwimi r3,r6,7,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB04A0:
	// rlwimi r3,r6,12,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 12) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB04A8:
	// rlwinm. r10,r3,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb04b8
	if (ctx.cr0.eq) goto loc_82FB04B8;
	// rlwimi r3,r6,6,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB04B8:
	// rlwimi r3,r6,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB04C0:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lis r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82fb02c4
	if (ctx.cr6.eq) goto loc_82FB02C4;
	// b 0x82fb064c
	goto loc_82FB064C;
loc_82FB04D0:
	// rlwinm r10,r8,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// ori r3,r10,37376
	ctx.r3.u64 = ctx.r10.u64 | 37376;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB04E0:
	// rlwinm r10,r8,0,23,21
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFFFDFF;
	// rlwinm r10,r10,0,21,19
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFF7FF;
	// ori r3,r10,37120
	ctx.r3.u64 = ctx.r10.u64 | 37120;
	// b 0x82fb04f4
	goto loc_82FB04F4;
loc_82FB04F0:
	// ori r3,r8,31744
	ctx.r3.u64 = ctx.r8.u64 | 31744;
loc_82FB04F4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0500:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82fb0624
	if (ctx.cr6.lt) goto loc_82FB0624;
	// cmpwi cr6,r10,56
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 56, ctx.xer);
	// bgt cr6,0x82fb0624
	if (ctx.cr6.gt) goto loc_82FB0624;
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r3,r8,0,17,15
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFFFFFF7FFF;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bgt cr6,0x82fb02c0
	if (ctx.cr6.gt) goto loc_82FB02C0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82fb0580
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB0580;
	// bdzf 4*cr6+eq,0x82fb05b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB05B0;
	// bdzf 4*cr6+eq,0x82fb05e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB05E0;
	// bdzf 4*cr6+eq,0x82fb05f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB05F8;
	// bdzf 4*cr6+eq,0x82fb05ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB05EC;
	// bdzf 4*cr6+eq,0x82fb0604
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB0604;
	// bdzf 4*cr6+eq,0x82fb060c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB060C;
	// bne cr6,0x82fb0618
	if (!ctx.cr6.eq) goto loc_82FB0618;
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x82fb0564
	if (ctx.cr0.eq) goto loc_82FB0564;
	// rlwimi r3,r6,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb0568
	goto loc_82FB0568;
loc_82FB0564:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_82FB0568:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb0578
	if (ctx.cr0.eq) goto loc_82FB0578;
	// rlwimi r3,r6,6,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 6) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0578:
	// rlwimi r3,r6,11,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 11) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0580:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// beq 0x82fb0594
	if (ctx.cr0.eq) goto loc_82FB0594;
	// rlwimi r3,r6,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb0598
	goto loc_82FB0598;
loc_82FB0594:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_82FB0598:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb05a8
	if (ctx.cr0.eq) goto loc_82FB05A8;
	// rlwimi r3,r6,7,24,25
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 7) & 0xC0) | (ctx.r3.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB05A8:
	// rlwimi r3,r6,12,19,20
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r6.u32, 12) & 0x1800) | (ctx.r3.u64 & 0xFFFFFFFFFFFFE7FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB05B0:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb05c4
	if (ctx.cr0.eq) goto loc_82FB05C4;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r3,r11,9,21,23
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 9) & 0x700) | (ctx.r3.u64 & 0xFFFFFFFFFFFFF8FF);
	// b 0x82fb05c8
	goto loc_82FB05C8;
loc_82FB05C4:
	// rlwinm r3,r3,0,19,16
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFF9FFF;
loc_82FB05C8:
	// rlwinm. r11,r3,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb05d8
	if (ctx.cr0.eq) goto loc_82FB05D8;
	// rlwinm r3,r3,0,26,23
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB05D8:
	// rlwinm r3,r3,0,21,18
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFFFFFFE7FF;
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB05E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r3,r11,14,17,18
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 14) & 0x6000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF9FFF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB05EC:
	// li r11,3
	ctx.r11.s64 = 3;
	// rlwimi r3,r11,13,17,21
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0x7C00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF83FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB05F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r3,r11,13,17,18
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 13) & 0x6000) | (ctx.r3.u64 & 0xFFFFFFFFFFFF9FFF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0604:
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82fb061c
	goto loc_82FB061C;
loc_82FB060C:
	// li r11,7
	ctx.r11.s64 = 7;
	// rlwimi r3,r11,12,17,21
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x7C00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF83FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0618:
	// li r11,15
	ctx.r11.s64 = 15;
loc_82FB061C:
	// rlwimi r3,r11,11,17,21
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 11) & 0x7C00) | (ctx.r3.u64 & 0xFFFFFFFFFFFF83FF);
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0624:
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bne cr6,0x82fb0640
	if (!ctx.cr6.eq) goto loc_82FB0640;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r11,11888(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11888, ctx.r11.u32);
	// ori r3,r3,65533
	ctx.r3.u64 = ctx.r3.u64 | 65533;
	// b 0x82fb0650
	goto loc_82FB0650;
loc_82FB0640:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82fb02c0
	if (!ctx.cr6.eq) goto loc_82FB02C0;
loc_82FB0648:
	// lis r3,0
	ctx.r3.s64 = 0;
loc_82FB064C:
	// ori r3,r3,65534
	ctx.r3.u64 = ctx.r3.u64 | 65534;
loc_82FB0650:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0660"))) PPC_WEAK_FUNC(sub_82FB0660);
PPC_FUNC_IMPL(__imp__sub_82FB0660) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// rlwinm r30,r11,0,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF8;
	// beq cr6,0x82fb069c
	if (ctx.cr6.eq) goto loc_82FB069C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82fb0734
	goto loc_82FB0734;
loc_82FB069C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82fb06a8
	if (!ctx.cr6.eq) goto loc_82FB06A8;
	// li r30,8
	ctx.r30.s64 = 8;
loc_82FB06A8:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82fb071c
	if (!ctx.cr6.lt) goto loc_82FB071C;
	// cmplwi cr6,r30,4096
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4096, ctx.xer);
	// ble cr6,0x82fb06c4
	if (!ctx.cr6.gt) goto loc_82FB06C4;
loc_82FB06BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fb0734
	goto loc_82FB0734;
loc_82FB06C4:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// li r4,4100
	ctx.r4.s64 = 4100;
	// bl 0x82fb0660
	ctx.lr = 0x82FB06D8;
	sub_82FB0660(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb06ec
	if (ctx.cr0.eq) goto loc_82FB06EC;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82fb06f0
	goto loc_82FB06F0;
loc_82FB06EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB06F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb06bc
	if (ctx.cr6.eq) goto loc_82FB06BC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fb070c
	if (ctx.cr6.eq) goto loc_82FB070C;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82fb0710
	goto loc_82FB0710;
loc_82FB070C:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82FB0710:
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// subfic r11,r30,4096
	ctx.xer.ca = ctx.r30.u32 <= 4096;
	ctx.r11.s64 = 4096 - ctx.r30.s64;
	// b 0x82fb0720
	goto loc_82FB0720;
loc_82FB071C:
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
loc_82FB0720:
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
loc_82FB0734:
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

__attribute__((alias("__imp__sub_82FB074C"))) PPC_WEAK_FUNC(sub_82FB074C);
PPC_FUNC_IMPL(__imp__sub_82FB074C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0750"))) PPC_WEAK_FUNC(sub_82FB0750);
PPC_FUNC_IMPL(__imp__sub_82FB0750) {
	PPC_FUNC_PROLOGUE();
	// lbz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0758"))) PPC_WEAK_FUNC(sub_82FB0758);
PPC_FUNC_IMPL(__imp__sub_82FB0758) {
	PPC_FUNC_PROLOGUE();
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82fb076c
	if (!ctx.cr6.lt) goto loc_82FB076C;
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// stb r11,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r11.u8);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82FB076C:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0774"))) PPC_WEAK_FUNC(sub_82FB0774);
PPC_FUNC_IMPL(__imp__sub_82FB0774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0778"))) PPC_WEAK_FUNC(sub_82FB0778);
PPC_FUNC_IMPL(__imp__sub_82FB0778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb07a0
	if (ctx.cr6.eq) goto loc_82FB07A0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb07a0
	if (ctx.cr6.eq) goto loc_82FB07A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82FB07A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB07A8"))) PPC_WEAK_FUNC(sub_82FB07A8);
PPC_FUNC_IMPL(__imp__sub_82FB07A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb07d0
	if (ctx.cr6.eq) goto loc_82FB07D0;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb07d0
	if (ctx.cr6.eq) goto loc_82FB07D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82FB07D0:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB07D8"))) PPC_WEAK_FUNC(sub_82FB07D8);
PPC_FUNC_IMPL(__imp__sub_82FB07D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb0800
	if (ctx.cr6.eq) goto loc_82FB0800;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb0800
	if (ctx.cr6.eq) goto loc_82FB0800;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82FB0800:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0808"))) PPC_WEAK_FUNC(sub_82FB0808);
PPC_FUNC_IMPL(__imp__sub_82FB0808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,32
	ctx.r10.s64 = 32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0824"))) PPC_WEAK_FUNC(sub_82FB0824);
PPC_FUNC_IMPL(__imp__sub_82FB0824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0828"))) PPC_WEAK_FUNC(sub_82FB0828);
PPC_FUNC_IMPL(__imp__sub_82FB0828) {
	PPC_FUNC_PROLOGUE();
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,11916
	ctx.r11.s64 = ctx.r11.s64 + 11916;
	// lwz r10,11964(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11964);
	// clrlwi. r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82fb08ac
	if (!ctx.cr0.eq) goto loc_82FB08AC;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// addi r7,r9,-16016
	ctx.r7.s64 = ctx.r9.s64 + -16016;
	// stw r10,11964(r8)
	PPC_STORE_U32(ctx.r8.u32 + 11964, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
loc_82FB08AC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82fb08c8
	if (ctx.cr6.lt) goto loc_82FB08C8;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// bge cr6,0x82fb08c8
	if (!ctx.cr6.lt) goto loc_82FB08C8;
	// mulli r10,r3,12
	ctx.r10.s64 = ctx.r3.s64 * 12;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// blr 
	return;
loc_82FB08C8:
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB08D0"))) PPC_WEAK_FUNC(sub_82FB08D0);
PPC_FUNC_IMPL(__imp__sub_82FB08D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FB08D8;
	__savegprlr_29(ctx, base);
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
	// bge cr6,0x82fb0924
	if (!ctx.cr6.lt) goto loc_82FB0924;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0904;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB091C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r11,r29,r3
	ctx.r11.u64 = ctx.r29.u64 + ctx.r3.u64;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82FB0924:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB0930"))) PPC_WEAK_FUNC(sub_82FB0930);
PPC_FUNC_IMPL(__imp__sub_82FB0930) {
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
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0958;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// extsb. r11,r3
	ctx.r11.s64 = ctx.r3.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb0974
	if (!ctx.cr0.eq) goto loc_82FB0974;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0974;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB0974:
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

__attribute__((alias("__imp__sub_82FB0988"))) PPC_WEAK_FUNC(sub_82FB0988);
PPC_FUNC_IMPL(__imp__sub_82FB0988) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB09B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82fb09e0
	if (!ctx.cr6.lt) goto loc_82FB09E0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB09E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB09E0:
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

__attribute__((alias("__imp__sub_82FB09F8"))) PPC_WEAK_FUNC(sub_82FB09F8);
PPC_FUNC_IMPL(__imp__sub_82FB09F8) {
	PPC_FUNC_PROLOGUE();
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r10,-1
	ctx.r10.s64 = -1;
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r5,11892(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11892, ctx.r5.u32);
	// stw r5,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r5.u32);
	// beq cr6,0x82fb0a38
	if (ctx.cr6.eq) goto loc_82FB0A38;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// stw r6,11900(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11900, ctx.r6.u32);
	// stw r4,11896(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11896, ctx.r4.u32);
	// b 0x82fb0a50
	goto loc_82FB0A50;
loc_82FB0A38:
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,11896(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11896, ctx.r10.u32);
	// stw r9,11900(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11900, ctx.r9.u32);
loc_82FB0A50:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lis r6,-31958
	ctx.r6.s64 = -2094399488;
	// lis r5,-31958
	ctx.r5.s64 = -2094399488;
	// lis r4,-31958
	ctx.r4.s64 = -2094399488;
	// stw r11,11880(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11880, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,11876(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11876, ctx.r3.u32);
	// stw r8,11904(r6)
	PPC_STORE_U32(ctx.r6.u32 + 11904, ctx.r8.u32);
	// stw r7,11908(r5)
	PPC_STORE_U32(ctx.r5.u32 + 11908, ctx.r7.u32);
	// stb r11,11912(r4)
	PPC_STORE_U8(ctx.r4.u32 + 11912, ctx.r11.u8);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0A84"))) PPC_WEAK_FUNC(sub_82FB0A84);
PPC_FUNC_IMPL(__imp__sub_82FB0A84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0A88"))) PPC_WEAK_FUNC(sub_82FB0A88);
PPC_FUNC_IMPL(__imp__sub_82FB0A88) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r8,32570
	ctx.r5.s64 = ctx.r8.s64 + 32570;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fb5940
	ctx.lr = 0x82FB0AD8;
	sub_82FB5940(ctx, base);
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

__attribute__((alias("__imp__sub_82FB0AF0"))) PPC_WEAK_FUNC(sub_82FB0AF0);
PPC_FUNC_IMPL(__imp__sub_82FB0AF0) {
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
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r8,32570
	ctx.r5.s64 = ctx.r8.s64 + 32570;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82fb5940
	ctx.lr = 0x82FB0B40;
	sub_82FB5940(ctx, base);
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

__attribute__((alias("__imp__sub_82FB0B58"))) PPC_WEAK_FUNC(sub_82FB0B58);
PPC_FUNC_IMPL(__imp__sub_82FB0B58) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb0be8
	if (ctx.cr6.eq) goto loc_82FB0BE8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82fb0660
	ctx.lr = 0x82FB0B90;
	sub_82FB0660(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb0bc8
	if (ctx.cr0.eq) goto loc_82FB0BC8;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r10,r10,-16028
	ctx.r10.s64 = ctx.r10.s64 + -16028;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82fb0bbc
	if (ctx.cr6.eq) goto loc_82FB0BBC;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82fb0bc0
	if (!ctx.cr6.eq) goto loc_82FB0BC0;
loc_82FB0BBC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82FB0BC0:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x82fb0bcc
	goto loc_82FB0BCC;
loc_82FB0BC8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB0BCC:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// li r11,3
	ctx.r11.s64 = 3;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// b 0x82fb0bf8
	goto loc_82FB0BF8;
loc_82FB0BE8:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
loc_82FB0BF8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82FB0C1C"))) PPC_WEAK_FUNC(sub_82FB0C1C);
PPC_FUNC_IMPL(__imp__sub_82FB0C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0C20"))) PPC_WEAK_FUNC(sub_82FB0C20);
PPC_FUNC_IMPL(__imp__sub_82FB0C20) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// beq cr6,0x82fb0c50
	if (ctx.cr6.eq) goto loc_82FB0C50;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bne cr6,0x82fb0c54
	if (!ctx.cr6.eq) goto loc_82FB0C54;
loc_82FB0C50:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82FB0C54:
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// bne cr6,0x82fb0c80
	if (!ctx.cr6.eq) goto loc_82FB0C80;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fb0828
	ctx.lr = 0x82FB0C6C;
	sub_82FB0828(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fb0c80
	if (!ctx.cr0.eq) goto loc_82FB0C80;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82FB0C80:
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

__attribute__((alias("__imp__sub_82FB0C98"))) PPC_WEAK_FUNC(sub_82FB0C98);
PPC_FUNC_IMPL(__imp__sub_82FB0C98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FB0CA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82fb0d30
	if (ctx.cr6.eq) goto loc_82FB0D30;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fb0cf4
	if (!ctx.cr6.eq) goto loc_82FB0CF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0CD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fb0660
	ctx.lr = 0x82FB0CEC;
	sub_82FB0660(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82fb0d40
	if (ctx.cr0.eq) goto loc_82FB0D40;
loc_82FB0CF4:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82fb0d08
	if (!ctx.cr6.eq) goto loc_82FB0D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82fb0d24
	goto loc_82FB0D24;
loc_82FB0D08:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// add r11,r31,r30
	ctx.r11.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82FB0D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82FB0D24:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// b 0x82fb0d40
	goto loc_82FB0D40;
loc_82FB0D30:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb0d40
	if (ctx.cr6.eq) goto loc_82FB0D40;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
loc_82FB0D40:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB0D4C"))) PPC_WEAK_FUNC(sub_82FB0D4C);
PPC_FUNC_IMPL(__imp__sub_82FB0D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0D50"))) PPC_WEAK_FUNC(sub_82FB0D50);
PPC_FUNC_IMPL(__imp__sub_82FB0D50) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb0dc8
	if (ctx.cr6.eq) goto loc_82FB0DC8;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x82fb0660
	ctx.lr = 0x82FB0D88;
	sub_82FB0660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb0db8
	if (ctx.cr0.eq) goto loc_82FB0DB8;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// addi r8,r11,-16004
	ctx.r8.s64 = ctx.r11.s64 + -16004;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r8,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r8.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x82fb0dbc
	goto loc_82FB0DBC;
loc_82FB0DB8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB0DBC:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb0dd0
	if (!ctx.cr6.eq) goto loc_82FB0DD0;
loc_82FB0DC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
loc_82FB0DD0:
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

__attribute__((alias("__imp__sub_82FB0DE8"))) PPC_WEAK_FUNC(sub_82FB0DE8);
PPC_FUNC_IMPL(__imp__sub_82FB0DE8) {
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
	// stb r4,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// bne cr6,0x82fb0e30
	if (!ctx.cr6.eq) goto loc_82FB0E30;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82fb0828
	ctx.lr = 0x82FB0E18;
	sub_82FB0828(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82fb0e34
	if (!ctx.cr0.eq) goto loc_82FB0E34;
	// li r11,3
	ctx.r11.s64 = 3;
	// stb r11,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r11.u8);
	// b 0x82fb0e34
	goto loc_82FB0E34;
loc_82FB0E30:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82FB0E34:
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

__attribute__((alias("__imp__sub_82FB0E4C"))) PPC_WEAK_FUNC(sub_82FB0E4C);
PPC_FUNC_IMPL(__imp__sub_82FB0E4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0E50"))) PPC_WEAK_FUNC(sub_82FB0E50);
PPC_FUNC_IMPL(__imp__sub_82FB0E50) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82fb0edc
	if (ctx.cr6.eq) goto loc_82FB0EDC;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb0edc
	if (ctx.cr6.eq) goto loc_82FB0EDC;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82fb0660
	ctx.lr = 0x82FB0E98;
	sub_82FB0660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb0eb8
	if (ctx.cr0.eq) goto loc_82FB0EB8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// b 0x82fb0ebc
	goto loc_82FB0EBC;
loc_82FB0EB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82FB0EBC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fb0edc
	if (ctx.cr6.eq) goto loc_82FB0EDC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82FB0EDC:
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

__attribute__((alias("__imp__sub_82FB0EF8"))) PPC_WEAK_FUNC(sub_82FB0EF8);
PPC_FUNC_IMPL(__imp__sub_82FB0EF8) {
	PPC_FUNC_PROLOGUE();
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82fb0f44
	if (ctx.cr6.lt) goto loc_82FB0F44;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bgt cr6,0x82fb0f44
	if (ctx.cr6.gt) goto loc_82FB0F44;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82fb0f3c
	if (ctx.cr6.eq) goto loc_82FB0F3C;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82fb0f3c
	if (ctx.cr6.gt) goto loc_82FB0F3C;
	// addi r11,r5,1
	ctx.r11.s64 = ctx.r5.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
loc_82FB0F3C:
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82fb0f48
	goto loc_82FB0F48;
loc_82FB0F44:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82FB0F48:
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB0F5C"))) PPC_WEAK_FUNC(sub_82FB0F5C);
PPC_FUNC_IMPL(__imp__sub_82FB0F5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB0F60"))) PPC_WEAK_FUNC(sub_82FB0F60);
PPC_FUNC_IMPL(__imp__sub_82FB0F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FB0F68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-15992
	ctx.r11.s64 = ctx.r11.s64 + -15992;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// beq cr6,0x82fb0fe0
	if (ctx.cr6.eq) goto loc_82FB0FE0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb0fe0
	if (ctx.cr6.eq) goto loc_82FB0FE0;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fb0660
	ctx.lr = 0x82FB0FA8;
	sub_82FB0660(ctx, base);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb0fec
	if (ctx.cr0.eq) goto loc_82FB0FEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82fb0fec
	if (ctx.cr6.eq) goto loc_82FB0FEC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
loc_82FB0FCC:
	// lbzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fb0fcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FB0FCC;
	// b 0x82fb0fec
	goto loc_82FB0FEC;
loc_82FB0FE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
loc_82FB0FEC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB0FF8"))) PPC_WEAK_FUNC(sub_82FB0FF8);
PPC_FUNC_IMPL(__imp__sub_82FB0FF8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82fb1014
	if (ctx.cr6.eq) goto loc_82FB1014;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r3,-1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// blr 
	return;
loc_82FB1014:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB101C"))) PPC_WEAK_FUNC(sub_82FB101C);
PPC_FUNC_IMPL(__imp__sub_82FB101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1020"))) PPC_WEAK_FUNC(sub_82FB1020);
PPC_FUNC_IMPL(__imp__sub_82FB1020) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82fb1038
	if (!ctx.cr6.gt) goto loc_82FB1038;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82FB1038:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb105c
	if (ctx.cr6.eq) goto loc_82FB105C;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
loc_82FB104C:
	// lbzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82fb104c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FB104C;
loc_82FB105C:
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB1064"))) PPC_WEAK_FUNC(sub_82FB1064);
PPC_FUNC_IMPL(__imp__sub_82FB1064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1068"))) PPC_WEAK_FUNC(sub_82FB1068);
PPC_FUNC_IMPL(__imp__sub_82FB1068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82fb10bc
	if (!ctx.cr6.eq) goto loc_82FB10BC;
	// subf r11,r4,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r4.s64;
	// li r10,4
	ctx.r10.s64 = 4;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82fb1088
	if (!ctx.cr6.lt) goto loc_82FB1088;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82FB1088:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82fb10b4
	if (ctx.cr6.eq) goto loc_82FB10B4;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r9,-15980
	ctx.r9.s64 = ctx.r9.s64 + -15980;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
loc_82FB10A4:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82fb10a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82FB10A4;
loc_82FB10B4:
	// add r3,r10,r4
	ctx.r3.u64 = ctx.r10.u64 + ctx.r4.u64;
	// blr 
	return;
loc_82FB10BC:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82FB10C4"))) PPC_WEAK_FUNC(sub_82FB10C4);
PPC_FUNC_IMPL(__imp__sub_82FB10C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB10C8"))) PPC_WEAK_FUNC(sub_82FB10C8);
PPC_FUNC_IMPL(__imp__sub_82FB10C8) {
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
	// lwz r11,11888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11888);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bne cr6,0x82fb1100
	if (!ctx.cr6.eq) goto loc_82FB1100;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11888, ctx.r11.u32);
	// bl 0x82fb0b58
	ctx.lr = 0x82FB10FC;
	sub_82FB0B58(ctx, base);
	// b 0x82fb1104
	goto loc_82FB1104;
loc_82FB1100:
	// bl 0x82fb6a98
	ctx.lr = 0x82FB1104;
	sub_82FB6A98(ctx, base);
loc_82FB1104:
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

__attribute__((alias("__imp__sub_82FB111C"))) PPC_WEAK_FUNC(sub_82FB111C);
PPC_FUNC_IMPL(__imp__sub_82FB111C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1120"))) PPC_WEAK_FUNC(sub_82FB1120);
PPC_FUNC_IMPL(__imp__sub_82FB1120) {
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
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82fb118c
	if (ctx.cr6.gt) goto loc_82FB118C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb1184
	if (ctx.cr6.eq) goto loc_82FB1184;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82fb1184
	if (ctx.cr6.eq) goto loc_82FB1184;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82fb1184
	if (ctx.cr6.eq) goto loc_82FB1184;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82fb118c
	if (ctx.cr6.eq) goto loc_82FB118C;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82fb0828
	ctx.lr = 0x82FB1174;
	sub_82FB0828(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb0d50
	ctx.lr = 0x82FB1180;
	sub_82FB0D50(ctx, base);
	// b 0x82fb118c
	goto loc_82FB118C;
loc_82FB1184:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb0de8
	ctx.lr = 0x82FB118C;
	sub_82FB0DE8(ctx, base);
loc_82FB118C:
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

__attribute__((alias("__imp__sub_82FB11A4"))) PPC_WEAK_FUNC(sub_82FB11A4);
PPC_FUNC_IMPL(__imp__sub_82FB11A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB11A8"))) PPC_WEAK_FUNC(sub_82FB11A8);
PPC_FUNC_IMPL(__imp__sub_82FB11A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FB11B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb11e4
	if (ctx.cr6.eq) goto loc_82FB11E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82fb1288
	goto loc_82FB1288;
loc_82FB11E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82fb1280
	if (ctx.cr6.eq) goto loc_82FB1280;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82fb1280
	if (ctx.cr6.eq) goto loc_82FB1280;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82fb123c
	if (ctx.cr6.lt) goto loc_82FB123C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// beq cr6,0x82fb1244
	if (ctx.cr6.eq) goto loc_82FB1244;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82fb0660
	ctx.lr = 0x82FB1214;
	sub_82FB0660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb122c
	if (ctx.cr0.eq) goto loc_82FB122C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fb0f60
	ctx.lr = 0x82FB1228;
	sub_82FB0F60(ctx, base);
	// b 0x82fb1230
	goto loc_82FB1230;
loc_82FB122C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82FB1230:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
loc_82FB1238:
	// bne cr6,0x82fb1288
	if (!ctx.cr6.eq) goto loc_82FB1288;
loc_82FB123C:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82fb1284
	goto loc_82FB1284;
loc_82FB1244:
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82fb0660
	ctx.lr = 0x82FB124C;
	sub_82FB0660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb1270
	if (ctx.cr0.eq) goto loc_82FB1270;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r9,-16040
	ctx.r9.s64 = ctx.r9.s64 + -16040;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// b 0x82fb1274
	goto loc_82FB1274;
loc_82FB1270:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82FB1274:
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// b 0x82fb1238
	goto loc_82FB1238;
loc_82FB1280:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82FB1284:
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
loc_82FB1288:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB1290"))) PPC_WEAK_FUNC(sub_82FB1290);
PPC_FUNC_IMPL(__imp__sub_82FB1290) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stb r5,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r5.u8);
	// beq cr6,0x82fb12e8
	if (ctx.cr6.eq) goto loc_82FB12E8;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb12e8
	if (ctx.cr0.eq) goto loc_82FB12E8;
loc_82FB12C8:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb12c8
	if (!ctx.cr0.eq) goto loc_82FB12C8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82fb12e8
	if (ctx.cr6.eq) goto loc_82FB12E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb11a8
	ctx.lr = 0x82FB12E8;
	sub_82FB11A8(ctx, base);
loc_82FB12E8:
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

__attribute__((alias("__imp__sub_82FB1300"))) PPC_WEAK_FUNC(sub_82FB1300);
PPC_FUNC_IMPL(__imp__sub_82FB1300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FB1308;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stb r28,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r28.u8);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb1440
	if (ctx.cr6.eq) goto loc_82FB1440;
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82fb1438
	if (ctx.cr0.eq) goto loc_82FB1438;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// extsb r29,r10
	ctx.r29.s64 = ctx.r10.s8;
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
loc_82FB1350:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x82fb13f8
	if (ctx.cr6.eq) goto loc_82FB13F8;
	// cmpwi cr6,r11,95
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 95, ctx.xer);
	// beq cr6,0x82fb13dc
	if (ctx.cr6.eq) goto loc_82FB13DC;
	// cmpwi cr6,r11,36
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 36, ctx.xer);
	// beq cr6,0x82fb13dc
	if (ctx.cr6.eq) goto loc_82FB13DC;
	// cmpwi cr6,r11,60
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 60, ctx.xer);
	// beq cr6,0x82fb13dc
	if (ctx.cr6.eq) goto loc_82FB13DC;
	// cmpwi cr6,r11,62
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 62, ctx.xer);
	// beq cr6,0x82fb13dc
	if (ctx.cr6.eq) goto loc_82FB13DC;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82fb13dc
	if (ctx.cr6.eq) goto loc_82FB13DC;
	// cmpwi cr6,r11,97
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 97, ctx.xer);
	// blt cr6,0x82fb139c
	if (ctx.cr6.lt) goto loc_82FB139C;
	// cmpwi cr6,r11,122
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 122, ctx.xer);
	// ble cr6,0x82fb13dc
	if (!ctx.cr6.gt) goto loc_82FB13DC;
loc_82FB139C:
	// cmpwi cr6,r11,65
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 65, ctx.xer);
	// blt cr6,0x82fb13ac
	if (ctx.cr6.lt) goto loc_82FB13AC;
	// cmpwi cr6,r11,90
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 90, ctx.xer);
	// ble cr6,0x82fb13dc
	if (!ctx.cr6.gt) goto loc_82FB13DC;
loc_82FB13AC:
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82fb13bc
	if (ctx.cr6.lt) goto loc_82FB13BC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82fb13dc
	if (!ctx.cr6.gt) goto loc_82FB13DC;
loc_82FB13BC:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// blt cr6,0x82fb13d0
	if (ctx.cr6.lt) goto loc_82FB13D0;
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// ble cr6,0x82fb13dc
	if (!ctx.cr6.gt) goto loc_82FB13DC;
loc_82FB13D0:
	// lwz r11,11904(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 11904);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1440
	if (ctx.cr0.eq) goto loc_82FB1440;
loc_82FB13DC:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb1350
	if (!ctx.cr0.eq) goto loc_82FB1350;
loc_82FB13F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb11a8
	ctx.lr = 0x82FB1400;
	sub_82FB11A8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb142c
	if (ctx.cr0.eq) goto loc_82FB142C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82fb1448
	if (ctx.cr6.eq) goto loc_82FB1448;
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// b 0x82fb1444
	goto loc_82FB1444;
loc_82FB142C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb1448
	if (!ctx.cr0.eq) goto loc_82FB1448;
loc_82FB1438:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82fb1444
	goto loc_82FB1444;
loc_82FB1440:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82FB1444:
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
loc_82FB1448:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB1454"))) PPC_WEAK_FUNC(sub_82FB1454);
PPC_FUNC_IMPL(__imp__sub_82FB1454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1458"))) PPC_WEAK_FUNC(sub_82FB1458);
PPC_FUNC_IMPL(__imp__sub_82FB1458) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// li r9,10
	ctx.r9.s64 = 10;
	// stb r10,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r10.u8);
loc_82FB148C:
	// divdu r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 / ctx.r9.u64;
	// mulli r10,r10,10
	ctx.r10.s64 = ctx.r10.s64 * 10;
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divdu r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 / ctx.r9.u64;
	// clrlwi r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stbu r10,-1(r4)
	ea = -1 + ctx.r4.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r4.u32 = ea;
	// bne cr6,0x82fb148c
	if (!ctx.cr6.eq) goto loc_82FB148C;
	// addi r11,r1,100
	ctx.r11.s64 = ctx.r1.s64 + 100;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x82fb11a8
	ctx.lr = 0x82FB14C0;
	sub_82FB11A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FB14D8"))) PPC_WEAK_FUNC(sub_82FB14D8);
PPC_FUNC_IMPL(__imp__sub_82FB14D8) {
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
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// addi r4,r1,101
	ctx.r4.s64 = ctx.r1.s64 + 101;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// stb r10,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r10.u8);
	// stb r10,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r10.u8);
	// bge cr6,0x82fb1518
	if (!ctx.cr6.lt) goto loc_82FB1518;
	// li r10,1
	ctx.r10.s64 = 1;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82FB1518:
	// li r8,10
	ctx.r8.s64 = 10;
loc_82FB151C:
	// divdu r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 / ctx.r8.u64;
	// mulli r9,r9,10
	ctx.r9.s64 = ctx.r9.s64 * 10;
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// divdu r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 / ctx.r8.u64;
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// stbu r9,-1(r4)
	ea = -1 + ctx.r4.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r4.u32 = ea;
	// bne cr6,0x82fb151c
	if (!ctx.cr6.eq) goto loc_82FB151C;
	// clrlwi. r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1550
	if (ctx.cr0.eq) goto loc_82FB1550;
	// li r11,45
	ctx.r11.s64 = 45;
	// stbu r11,-1(r4)
	ea = -1 + ctx.r4.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r4.u32 = ea;
loc_82FB1550:
	// addi r11,r1,101
	ctx.r11.s64 = ctx.r1.s64 + 101;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// subf r5,r4,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r4.s64;
	// bl 0x82fb11a8
	ctx.lr = 0x82FB1560;
	sub_82FB11A8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82FB1578"))) PPC_WEAK_FUNC(sub_82FB1578);
PPC_FUNC_IMPL(__imp__sub_82FB1578) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,256
	ctx.r9.s64 = 16777216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bgt cr6,0x82fb15e8
	if (ctx.cr6.gt) goto loc_82FB15E8;
	// lwz r4,0(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82fb15c0
	if (!ctx.cr6.eq) goto loc_82FB15C0;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// extsb r4,r11
	ctx.r4.s64 = ctx.r11.s8;
	// bl 0x82fb1120
	ctx.lr = 0x82FB15BC;
	sub_82FB1120(ctx, base);
	// b 0x82fb15e8
	goto loc_82FB15E8;
loc_82FB15C0:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82fb15e0
	if (!ctx.cr6.eq) goto loc_82FB15E0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82fb15e8
	goto loc_82FB15E8;
loc_82FB15E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb0d50
	ctx.lr = 0x82FB15E8;
	sub_82FB0D50(ctx, base);
loc_82FB15E8:
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

__attribute__((alias("__imp__sub_82FB1600"))) PPC_WEAK_FUNC(sub_82FB1600);
PPC_FUNC_IMPL(__imp__sub_82FB1600) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// extsb. r10,r4
	ctx.r10.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r11,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r11.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// beq 0x82fb163c
	if (ctx.cr0.eq) goto loc_82FB163C;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// bl 0x82fb11a8
	ctx.lr = 0x82FB163C;
	sub_82FB11A8(ctx, base);
loc_82FB163C:
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

__attribute__((alias("__imp__sub_82FB1654"))) PPC_WEAK_FUNC(sub_82FB1654);
PPC_FUNC_IMPL(__imp__sub_82FB1654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1658"))) PPC_WEAK_FUNC(sub_82FB1658);
PPC_FUNC_IMPL(__imp__sub_82FB1658) {
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
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r5,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r5.u8);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stb r5,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r5.u8);
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// b 0x82fb168c
	goto loc_82FB168C;
loc_82FB1684:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r5,r4
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r4.u32);
loc_82FB168C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb1684
	if (!ctx.cr0.eq) goto loc_82FB1684;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb11a8
	ctx.lr = 0x82FB169C;
	sub_82FB11A8(ctx, base);
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

__attribute__((alias("__imp__sub_82FB16B4"))) PPC_WEAK_FUNC(sub_82FB16B4);
PPC_FUNC_IMPL(__imp__sub_82FB16B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB16B8"))) PPC_WEAK_FUNC(sub_82FB16B8);
PPC_FUNC_IMPL(__imp__sub_82FB16B8) {
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
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,11888(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11888);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb1880
	if (ctx.cr0.eq) goto loc_82FB1880;
	// addi r10,r10,-65
	ctx.r10.s64 = ctx.r10.s64 + -65;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 14, ctx.xer);
	// stw r11,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r11.u32);
	// bgt cr6,0x82fb1868
	if (ctx.cr6.gt) goto loc_82FB1868;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// oris r8,r9,512
	ctx.r8.u64 = ctx.r9.u64 | 33554432;
	// lwz r9,11904(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11904);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb185c
	if (ctx.cr0.eq) goto loc_82FB185C;
	// rlwinm. r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb1830
	if (ctx.cr0.eq) goto loc_82FB1830;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82fb180c
	if (ctx.cr6.eq) goto loc_82FB180C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82fb17e8
	if (ctx.cr6.eq) goto loc_82FB17E8;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82fb17c4
	if (ctx.cr6.eq) goto loc_82FB17C4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82fb17a0
	if (ctx.cr6.eq) goto loc_82FB17A0;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82fb177c
	if (ctx.cr6.eq) goto loc_82FB177C;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// bne cr6,0x82fb185c
	if (!ctx.cr6.eq) goto loc_82FB185C;
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb1774
	if (ctx.cr0.eq) goto loc_82FB1774;
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB1774:
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// b 0x82fb1850
	goto loc_82FB1850;
loc_82FB177C:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb1798
	if (ctx.cr0.eq) goto loc_82FB1798;
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB1798:
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82fb1850
	goto loc_82FB1850;
loc_82FB17A0:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb17bc
	if (ctx.cr0.eq) goto loc_82FB17BC;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB17BC:
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// b 0x82fb1850
	goto loc_82FB1850;
loc_82FB17C4:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb17e0
	if (ctx.cr0.eq) goto loc_82FB17E0;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB17E0:
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// b 0x82fb1850
	goto loc_82FB1850;
loc_82FB17E8:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb1804
	if (ctx.cr0.eq) goto loc_82FB1804;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB1804:
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// b 0x82fb1850
	goto loc_82FB1850;
loc_82FB180C:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb1828
	if (ctx.cr0.eq) goto loc_82FB1828;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB1828:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82fb1850
	goto loc_82FB1850;
loc_82FB1830:
	// not r11,r9
	ctx.r11.u64 = ~ctx.r9.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16496
	ctx.r11.s64 = ctx.r11.s64 + -16496;
	// beq 0x82fb184c
	if (ctx.cr0.eq) goto loc_82FB184C;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82fb1854
	goto loc_82FB1854;
loc_82FB184C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82FB1850:
	// addi r4,r11,2
	ctx.r4.s64 = ctx.r11.s64 + 2;
loc_82FB1854:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1658
	ctx.lr = 0x82FB185C;
	sub_82FB1658(ctx, base);
loc_82FB185C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// b 0x82fb188c
	goto loc_82FB188C;
loc_82FB1868:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,5(r31)
	PPC_STORE_U8(ctx.r31.u32 + 5, ctx.r11.u8);
	// stb r10,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r10.u8);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82fb188c
	goto loc_82FB188C;
loc_82FB1880:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb0c20
	ctx.lr = 0x82FB188C;
	sub_82FB0C20(ctx, base);
loc_82FB188C:
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

__attribute__((alias("__imp__sub_82FB18A4"))) PPC_WEAK_FUNC(sub_82FB18A4);
PPC_FUNC_IMPL(__imp__sub_82FB18A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB18A8"))) PPC_WEAK_FUNC(sub_82FB18A8);
PPC_FUNC_IMPL(__imp__sub_82FB18A8) {
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
	// lwz r11,11888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11888);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82fb1908
	if (ctx.cr0.eq) goto loc_82FB1908;
	// cmplwi cr6,r9,65
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65, ctx.xer);
	// beq cr6,0x82fb18f0
	if (ctx.cr6.eq) goto loc_82FB18F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,5(r3)
	PPC_STORE_U8(ctx.r3.u32 + 5, ctx.r11.u8);
	// stb r10,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r10.u8);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82fb1914
	goto loc_82FB1914;
loc_82FB18F0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// stw r11,11888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11888, ctx.r11.u32);
	// addi r4,r9,-15972
	ctx.r4.s64 = ctx.r9.s64 + -15972;
	// bl 0x82fb1290
	ctx.lr = 0x82FB1904;
	sub_82FB1290(ctx, base);
	// b 0x82fb1910
	goto loc_82FB1910;
loc_82FB1908:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82fb0c20
	ctx.lr = 0x82FB1910;
	sub_82FB0C20(ctx, base);
loc_82FB1910:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82FB1914:
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

__attribute__((alias("__imp__sub_82FB1928"))) PPC_WEAK_FUNC(sub_82FB1928);
PPC_FUNC_IMPL(__imp__sub_82FB1928) {
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
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82fb19b4
	if (ctx.cr6.gt) goto loc_82FB19B4;
	// extsb. r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb19b4
	if (ctx.cr0.eq) goto loc_82FB19B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb1974
	if (!ctx.cr6.eq) goto loc_82FB1974;
	// bl 0x82fb1600
	ctx.lr = 0x82FB1970;
	sub_82FB1600(ctx, base);
	// b 0x82fb19b4
	goto loc_82FB19B4;
loc_82FB1974:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x82fb0660
	ctx.lr = 0x82FB1988;
	sub_82FB0660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb19a8
	if (ctx.cr0.eq) goto loc_82FB19A8;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stb r31,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r31.u8);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-16040
	ctx.r11.s64 = ctx.r11.s64 + -16040;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82fb19ac
	goto loc_82FB19AC;
loc_82FB19A8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FB19AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb0d50
	ctx.lr = 0x82FB19B4;
	sub_82FB0D50(ctx, base);
loc_82FB19B4:
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

__attribute__((alias("__imp__sub_82FB19D0"))) PPC_WEAK_FUNC(sub_82FB19D0);
PPC_FUNC_IMPL(__imp__sub_82FB19D0) {
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
	// lis r10,256
	ctx.r10.s64 = 16777216;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82fb1a7c
	if (ctx.cr6.gt) goto loc_82FB1A7C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82fb1a7c
	if (ctx.cr6.eq) goto loc_82FB1A7C;
	// lbz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb1a7c
	if (ctx.cr0.eq) goto loc_82FB1A7C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82fb1a28
	if (!ctx.cr6.eq) goto loc_82FB1A28;
	// bl 0x82fb1658
	ctx.lr = 0x82FB1A24;
	sub_82FB1658(ctx, base);
	// b 0x82fb1a7c
	goto loc_82FB1A7C;
loc_82FB1A28:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,11856
	ctx.r3.s64 = ctx.r11.s64 + 11856;
	// li r4,12
	ctx.r4.s64 = 12;
	// bl 0x82fb0660
	ctx.lr = 0x82FB1A3C;
	sub_82FB0660(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82fb1a70
	if (ctx.cr0.eq) goto loc_82FB1A70;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82fb1a58
	goto loc_82FB1A58;
loc_82FB1A50:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// lbzx r11,r5,r31
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r31.u32);
loc_82FB1A58:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb1a50
	if (!ctx.cr0.eq) goto loc_82FB1A50;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82fb0f60
	ctx.lr = 0x82FB1A68;
	sub_82FB0F60(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82fb1a74
	goto loc_82FB1A74;
loc_82FB1A70:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82FB1A74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb0d50
	ctx.lr = 0x82FB1A7C;
	sub_82FB0D50(ctx, base);
loc_82FB1A7C:
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

__attribute__((alias("__imp__sub_82FB1A98"))) PPC_WEAK_FUNC(sub_82FB1A98);
PPC_FUNC_IMPL(__imp__sub_82FB1A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82FB1AA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stb r28,4(r3)
	PPC_STORE_U8(ctx.r3.u32 + 4, ctx.r28.u8);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,16,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFF00FFFF;
	// rlwinm. r10,r11,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bne 0x82fb1be0
	if (!ctx.cr0.eq) goto loc_82FB1BE0;
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// lis r27,-31958
	ctx.r27.s64 = -2094399488;
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
loc_82FB1AD8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// beq cr6,0x82fb1be0
	if (ctx.cr6.eq) goto loc_82FB1BE0;
	// cmpwi cr6,r10,90
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 90, ctx.xer);
	// beq cr6,0x82fb1be0
	if (ctx.cr6.eq) goto loc_82FB1BE0;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82fb1b00
	if (ctx.cr6.eq) goto loc_82FB1B00;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// b 0x82fb1b10
	goto loc_82FB1B10;
loc_82FB1B00:
	// li r4,44
	ctx.r4.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb1928
	ctx.lr = 0x82FB1B0C;
	sub_82FB1928(ctx, base);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
loc_82FB1B10:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb1bd4
	if (ctx.cr0.eq) goto loc_82FB1BD4;
	// addic. r5,r10,-48
	ctx.xer.ca = ctx.r10.u32 > 47;
	ctx.r5.s64 = ctx.r10.s64 + -48;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt 0x82fb1b50
	if (ctx.cr0.lt) goto loc_82FB1B50;
	// cmpwi cr6,r5,9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 9, ctx.xer);
	// bgt cr6,0x82fb1b50
	if (ctx.cr6.gt) goto loc_82FB1B50;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r4,11876(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11876);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// bl 0x82fb0ef8
	ctx.lr = 0x82FB1B40;
	sub_82FB0EF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb1578
	ctx.lr = 0x82FB1B4C;
	sub_82FB1578(ctx, base);
	// b 0x82fb1bc0
	goto loc_82FB1BC0;
loc_82FB1B50:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// bl 0x82fb6890
	ctx.lr = 0x82FB1B70;
	sub_82FB6890(ctx, base);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82fb1b98
	if (!ctx.cr6.gt) goto loc_82FB1B98;
	// lwz r3,11876(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 11876);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82fb1b98
	if (ctx.cr6.eq) goto loc_82FB1B98;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb0e50
	ctx.lr = 0x82FB1B98;
	sub_82FB0E50(ctx, base);
loc_82FB1B98:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb1578
	ctx.lr = 0x82FB1BA4;
	sub_82FB1578(ctx, base);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82fb1bc4
	if (!ctx.cr6.eq) goto loc_82FB1BC4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r28,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r28.u8);
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
loc_82FB1BC0:
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
loc_82FB1BC4:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb1ad8
	if (ctx.cr0.eq) goto loc_82FB1AD8;
	// b 0x82fb1be0
	goto loc_82FB1BE0;
loc_82FB1BD4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb1120
	ctx.lr = 0x82FB1BE0;
	sub_82FB1120(ctx, base);
loc_82FB1BE0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB1BEC"))) PPC_WEAK_FUNC(sub_82FB1BEC);
PPC_FUNC_IMPL(__imp__sub_82FB1BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1BF0"))) PPC_WEAK_FUNC(sub_82FB1BF0);
PPC_FUNC_IMPL(__imp__sub_82FB1BF0) {
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
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r9,-15964
	ctx.r4.s64 = ctx.r9.s64 + -15964;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x82fb19d0
	ctx.lr = 0x82FB1C24;
	sub_82FB19D0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb51b8
	ctx.lr = 0x82FB1C2C;
	sub_82FB51B8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb1578
	ctx.lr = 0x82FB1C38;
	sub_82FB1578(ctx, base);
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb1928
	ctx.lr = 0x82FB1C44;
	sub_82FB1928(ctx, base);
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lwz r11,11888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11888);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,64
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 64, ctx.xer);
	// bne cr6,0x82fb1c60
	if (!ctx.cr6.eq) goto loc_82FB1C60;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11888, ctx.r11.u32);
loc_82FB1C60:
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

__attribute__((alias("__imp__sub_82FB1C78"))) PPC_WEAK_FUNC(sub_82FB1C78);
PPC_FUNC_IMPL(__imp__sub_82FB1C78) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82fb1600
	ctx.lr = 0x82FB1C9C;
	sub_82FB1600(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82fb1578
	ctx.lr = 0x82FB1CBC;
	sub_82FB1578(ctx, base);
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

__attribute__((alias("__imp__sub_82FB1CD8"))) PPC_WEAK_FUNC(sub_82FB1CD8);
PPC_FUNC_IMPL(__imp__sub_82FB1CD8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82fb0c20
	ctx.lr = 0x82FB1CFC;
	sub_82FB0C20(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82fb1578
	ctx.lr = 0x82FB1D1C;
	sub_82FB1578(ctx, base);
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

__attribute__((alias("__imp__sub_82FB1D38"))) PPC_WEAK_FUNC(sub_82FB1D38);
PPC_FUNC_IMPL(__imp__sub_82FB1D38) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82fb1290
	ctx.lr = 0x82FB1D5C;
	sub_82FB1290(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82fb1578
	ctx.lr = 0x82FB1D7C;
	sub_82FB1578(ctx, base);
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

__attribute__((alias("__imp__sub_82FB1D98"))) PPC_WEAK_FUNC(sub_82FB1D98);
PPC_FUNC_IMPL(__imp__sub_82FB1D98) {
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
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r11,11888(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 11888);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82fb1de0
	if (!ctx.cr6.eq) goto loc_82FB1DE0;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r31,r10,-15956
	ctx.r31.s64 = ctx.r10.s64 + -15956;
	// stw r11,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r11.u32);
loc_82FB1DE0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82fb1dfc
	if (!ctx.cr0.eq) goto loc_82FB1DFC;
loc_82FB1DEC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb0c20
	ctx.lr = 0x82FB1DF8;
	sub_82FB0C20(ctx, base);
	// b 0x82fb1f08
	goto loc_82FB1F08;
loc_82FB1DFC:
	// cmpwi cr6,r10,48
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 48, ctx.xer);
	// blt cr6,0x82fb1e50
	if (ctx.cr6.lt) goto loc_82FB1E50;
	// cmpwi cr6,r10,57
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 57, ctx.xer);
	// bgt cr6,0x82fb1e50
	if (ctx.cr6.gt) goto loc_82FB1E50;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r11,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// addi r11,r11,-47
	ctx.r11.s64 = ctx.r11.s64 + -47;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// beq cr6,0x82fb1e48
	if (ctx.cr6.eq) goto loc_82FB1E48;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82FB1E30:
	// bl 0x82fb1458
	ctx.lr = 0x82FB1E34;
	sub_82FB1458(ctx, base);
loc_82FB1E34:
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb1d38
	ctx.lr = 0x82FB1E44;
	sub_82FB1D38(ctx, base);
	// b 0x82fb1ef4
	goto loc_82FB1EF4;
loc_82FB1E48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82fb1ef0
	goto loc_82FB1EF0;
loc_82FB1E50:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x82fb1e8c
	goto loc_82FB1E8C;
loc_82FB1E58:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82fb1dec
	if (ctx.cr6.eq) goto loc_82FB1DEC;
	// cmpwi cr6,r10,65
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 65, ctx.xer);
	// blt cr6,0x82fb1ec0
	if (ctx.cr6.lt) goto loc_82FB1EC0;
	// cmpwi cr6,r10,80
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 80, ctx.xer);
	// bgt cr6,0x82fb1ec0
	if (ctx.cr6.gt) goto loc_82FB1EC0;
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r10,r10,-65
	ctx.r10.s64 = ctx.r10.s64 + -65;
	// rldicr r7,r4,4,59
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u64, 4) & 0xFFFFFFFFFFFFFFF0;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// extsb r10,r3
	ctx.r10.s64 = ctx.r3.s8;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// stw r11,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r11.u32);
loc_82FB1E8C:
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// bne cr6,0x82fb1e58
	if (!ctx.cr6.eq) goto loc_82FB1E58;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// stw r11,11888(r9)
	PPC_STORE_U32(ctx.r9.u32 + 11888, ctx.r11.u32);
	// bne cr6,0x82fb1ec0
	if (!ctx.cr6.eq) goto loc_82FB1EC0;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82fb1ee0
	if (ctx.cr0.eq) goto loc_82FB1EE0;
	// beq cr6,0x82fb1ed4
	if (ctx.cr6.eq) goto loc_82FB1ED4;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb14d8
	ctx.lr = 0x82FB1EBC;
	sub_82FB14D8(ctx, base);
	// b 0x82fb1e34
	goto loc_82FB1E34;
loc_82FB1EC0:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r6,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r6.u8);
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// b 0x82fb1f08
	goto loc_82FB1F08;
loc_82FB1ED4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb14d8
	ctx.lr = 0x82FB1EDC;
	sub_82FB14D8(ctx, base);
	// b 0x82fb1ef4
	goto loc_82FB1EF4;
loc_82FB1EE0:
	// beq cr6,0x82fb1eec
	if (ctx.cr6.eq) goto loc_82FB1EEC;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// b 0x82fb1e30
	goto loc_82FB1E30;
loc_82FB1EEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82FB1EF0:
	// bl 0x82fb1458
	ctx.lr = 0x82FB1EF4;
	sub_82FB1458(ctx, base);
loc_82FB1EF4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82FB1F08:
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

__attribute__((alias("__imp__sub_82FB1F24"))) PPC_WEAK_FUNC(sub_82FB1F24);
PPC_FUNC_IMPL(__imp__sub_82FB1F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB1F28"))) PPC_WEAK_FUNC(sub_82FB1F28);
PPC_FUNC_IMPL(__imp__sub_82FB1F28) {
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
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r10,0
	ctx.r10.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb2044
	if (ctx.cr0.eq) goto loc_82FB2044;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x82fb2030
	if (ctx.cr6.gt) goto loc_82FB2030;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82fb1f9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB1F9C;
	// bdzf 4*cr6+eq,0x82fb1fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB1FA8;
	// bdzf 4*cr6+eq,0x82fb1fa8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB1FA8;
	// bdzf 4*cr6+eq,0x82fb1fd0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB1FD0;
	// bdzf 4*cr6+eq,0x82fb1fb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB1FB4;
	// bdzf 4*cr6+eq,0x82fb1fc0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82FB1FC0;
	// bne cr6,0x82fb1fc0
	if (!ctx.cr6.eq) goto loc_82FB1FC0;
loc_82FB1F9C:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15888
	ctx.r4.s64 = ctx.r11.s64 + -15888;
	// b 0x82fb1fc8
	goto loc_82FB1FC8;
loc_82FB1FA8:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15896
	ctx.r4.s64 = ctx.r11.s64 + -15896;
	// b 0x82fb1fc8
	goto loc_82FB1FC8;
loc_82FB1FB4:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15904
	ctx.r4.s64 = ctx.r11.s64 + -15904;
	// b 0x82fb1fc8
	goto loc_82FB1FC8;
loc_82FB1FC0:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15912
	ctx.r4.s64 = ctx.r11.s64 + -15912;
loc_82FB1FC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1658
	ctx.lr = 0x82FB1FD0;
	sub_82FB1658(ctx, base);
loc_82FB1FD0:
	// lwz r10,11888(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// extsb r11,r10
	ctx.r11.s64 = ctx.r10.s8;
	// cmpwi cr6,r11,49
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 49, ctx.xer);
	// beq cr6,0x82fb2008
	if (ctx.cr6.eq) goto loc_82FB2008;
	// cmpwi cr6,r11,51
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 51, ctx.xer);
	// beq cr6,0x82fb2008
	if (ctx.cr6.eq) goto loc_82FB2008;
	// cmpwi cr6,r11,53
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 53, ctx.xer);
	// beq cr6,0x82fb2008
	if (ctx.cr6.eq) goto loc_82FB2008;
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// bne cr6,0x82fb2024
	if (!ctx.cr6.eq) goto loc_82FB2024;
loc_82FB2008:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-15924
	ctx.r4.s64 = ctx.r11.s64 + -15924;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb1d38
	ctx.lr = 0x82FB201C;
	sub_82FB1D38(ctx, base);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// b 0x82fb2028
	goto loc_82FB2028;
loc_82FB2024:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
loc_82FB2028:
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// b 0x82fb2050
	goto loc_82FB2050;
loc_82FB2030:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r10,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r10.u8);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stb r11,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r11.u8);
	// b 0x82fb2050
	goto loc_82FB2050;
loc_82FB2044:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb0c20
	ctx.lr = 0x82FB2050;
	sub_82FB0C20(ctx, base);
loc_82FB2050:
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

__attribute__((alias("__imp__sub_82FB206C"))) PPC_WEAK_FUNC(sub_82FB206C);
PPC_FUNC_IMPL(__imp__sub_82FB206C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB2070"))) PPC_WEAK_FUNC(sub_82FB2070);
PPC_FUNC_IMPL(__imp__sub_82FB2070) {
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
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,88
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 88, ctx.xer);
	// beq cr6,0x82fb2184
	if (ctx.cr6.eq) goto loc_82FB2184;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x82fb2150
	if (ctx.cr6.eq) goto loc_82FB2150;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1a98
	ctx.lr = 0x82FB20AC;
	sub_82FB1A98(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm. r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82fb2130
	if (!ctx.cr0.eq) goto loc_82FB2130;
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fb2130
	if (ctx.cr0.eq) goto loc_82FB2130;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// beq cr6,0x82fb213c
	if (ctx.cr6.eq) goto loc_82FB213C;
	// cmplwi cr6,r10,90
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 90, ctx.xer);
	// beq cr6,0x82fb20f0
	if (ctx.cr6.eq) goto loc_82FB20F0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// stb r11,5(r30)
	PPC_STORE_U8(ctx.r30.u32 + 5, ctx.r11.u8);
	// stb r10,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r10.u8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82fb219c
	goto loc_82FB219C;
loc_82FB20F0:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// lwz r11,11904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11904);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb2118
	if (ctx.cr0.eq) goto loc_82FB2118;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15852
	ctx.r4.s64 = ctx.r11.s64 + -15852;
	// b 0x82fb2120
	goto loc_82FB2120;
loc_82FB2118:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15864
	ctx.r4.s64 = ctx.r11.s64 + -15864;
loc_82FB2120:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82fb19d0
	ctx.lr = 0x82FB2130;
	sub_82FB19D0(ctx, base);
loc_82FB2130:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r11.u64);
	// b 0x82fb219c
	goto loc_82FB219C;
loc_82FB213C:
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// b 0x82fb219c
	goto loc_82FB219C;
loc_82FB2150:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// lwz r11,11904(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11904);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// rlwinm. r11,r11,14,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb2178
	if (ctx.cr0.eq) goto loc_82FB2178;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15868
	ctx.r4.s64 = ctx.r11.s64 + -15868;
	// b 0x82fb2194
	goto loc_82FB2194;
loc_82FB2178:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r4,r11,-15880
	ctx.r4.s64 = ctx.r11.s64 + -15880;
	// b 0x82fb2194
	goto loc_82FB2194;
loc_82FB2184:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// addi r4,r10,5308
	ctx.r4.s64 = ctx.r10.s64 + 5308;
loc_82FB2194:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fb1290
	ctx.lr = 0x82FB219C;
	sub_82FB1290(ctx, base);
loc_82FB219C:
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

__attribute__((alias("__imp__sub_82FB21B8"))) PPC_WEAK_FUNC(sub_82FB21B8);
PPC_FUNC_IMPL(__imp__sub_82FB21B8) {
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
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,11888(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 11888);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fb2244
	if (ctx.cr0.eq) goto loc_82FB2244;
	// cmpwi cr6,r9,90
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 90, ctx.xer);
	// bne cr6,0x82fb2210
	if (!ctx.cr6.eq) goto loc_82FB2210;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// stw r11,11888(r10)
	PPC_STORE_U32(ctx.r10.u32 + 11888, ctx.r11.u32);
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r11.u64);
	// b 0x82fb2280
	goto loc_82FB2280;
loc_82FB2210:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb2070
	ctx.lr = 0x82FB2218;
	sub_82FB2070(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,-15844
	ctx.r4.s64 = ctx.r11.s64 + -15844;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb1d38
	ctx.lr = 0x82FB222C;
	sub_82FB1D38(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82fb2274
	goto loc_82FB2274;
loc_82FB2244:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r11,-15844
	ctx.r4.s64 = ctx.r11.s64 + -15844;
	// bl 0x82fb1290
	ctx.lr = 0x82FB2254;
	sub_82FB1290(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82fb1120
	ctx.lr = 0x82FB226C;
	sub_82FB1120(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
loc_82FB2274:
	// li r4,41
	ctx.r4.s64 = 41;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb1928
	ctx.lr = 0x82FB2280;
	sub_82FB1928(ctx, base);
loc_82FB2280:
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

__attribute__((alias("__imp__sub_82FB2298"))) PPC_WEAK_FUNC(sub_82FB2298);
PPC_FUNC_IMPL(__imp__sub_82FB2298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82FB22A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lis r31,-31958
	ctx.r31.s64 = -2094399488;
	// li r30,0
	ctx.r30.s64 = 0;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// cmplwi cr6,r9,65
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65, ctx.xer);
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// beq cr6,0x82fb241c
	if (ctx.cr6.eq) goto loc_82FB241C;
	// cmplwi cr6,r9,66
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 66, ctx.xer);
	// beq cr6,0x82fb23fc
	if (ctx.cr6.eq) goto loc_82FB23FC;
	// cmplwi cr6,r9,67
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 67, ctx.xer);
	// beq cr6,0x82fb2434
	if (ctx.cr6.eq) goto loc_82FB2434;
	// extsb. r10,r9
	ctx.r10.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb23ec
	if (ctx.cr0.eq) goto loc_82FB23EC;
	// lbz r9,1(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// extsb. r9,r9
	ctx.r9.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82fb23ec
	if (ctx.cr0.eq) goto loc_82FB23EC;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82fb2310
	if (ctx.cr6.eq) goto loc_82FB2310;
loc_82FB2304:
	// li r11,2
	ctx.r11.s64 = 2;
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
	// b 0x82fb245c
	goto loc_82FB245C;
loc_82FB2310:
	// addi r10,r10,-48
	ctx.r10.s64 = ctx.r10.s64 + -48;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r30,r11,-48
	ctx.r30.s64 = ctx.r11.s64 + -48;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// ble cr6,0x82fb235c
	if (!ctx.cr6.gt) goto loc_82FB235C;
	// li r4,44
	ctx.r4.s64 = 44;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1600
	ctx.lr = 0x82FB233C;
	sub_82FB1600(ctx, base);
	// clrldi r4,r30,32
	ctx.r4.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb1458
	ctx.lr = 0x82FB2348;
	sub_82FB1458(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82fb1578
	ctx.lr = 0x82FB235C;
	sub_82FB1578(ctx, base);
loc_82FB235C:
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r4,62
	ctx.r4.s64 = 62;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB2370;
	sub_82FB1928(ctx, base);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// cmplwi cr6,r9,36
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 36, ctx.xer);
	// bne cr6,0x82fb2394
	if (!ctx.cr6.eq) goto loc_82FB2394;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// b 0x82fb23b0
	goto loc_82FB23B0;
loc_82FB2394:
	// li r4,94
	ctx.r4.s64 = 94;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1928
	ctx.lr = 0x82FB23A4;
	sub_82FB1928(ctx, base);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82FB23B0:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82fb23c8
	if (ctx.cr0.eq) goto loc_82FB23C8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// b 0x82fb23d4
	goto loc_82FB23D4;
loc_82FB23C8:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1120
	ctx.lr = 0x82FB23D4;
	sub_82FB1120(ctx, base);
loc_82FB23D4:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// oris r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 131072;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,0(r29)
	PPC_STORE_U64(ctx.r29.u32 + 0, ctx.r11.u64);
	// b 0x82fb2464
	goto loc_82FB2464;
loc_82FB23EC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fb0c20
	ctx.lr = 0x82FB23F8;
	sub_82FB0C20(ctx, base);
	// b 0x82fb2464
	goto loc_82FB2464;
loc_82FB23FC:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82fb2304
	if (!ctx.cr6.eq) goto loc_82FB2304;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r4,62
	ctx.r4.s64 = 62;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1600
	ctx.lr = 0x82FB2418;
	sub_82FB1600(ctx, base);
	// b 0x82fb244c
	goto loc_82FB244C;
loc_82FB241C:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82fb2450
	if (!ctx.cr6.eq) goto loc_82FB2450;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,38
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 38, ctx.xer);
	// bne cr6,0x82fb2440
	if (!ctx.cr6.eq) goto loc_82FB2440;
loc_82FB2434:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16668
	ctx.r11.s64 = ctx.r11.s64 + -16668;
	// b 0x82fb2448
	goto loc_82FB2448;
loc_82FB2440:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r11,r11,-16680
	ctx.r11.s64 = ctx.r11.s64 + -16680;
loc_82FB2448:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82FB244C:
	// lwz r11,11888(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11888);
loc_82FB2450:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11888, ctx.r11.u32);
	// stb r30,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r30.u8);
loc_82FB245C:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
	// stb r30,5(r29)
	PPC_STORE_U8(ctx.r29.u32 + 5, ctx.r30.u8);
loc_82FB2464:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB2470"))) PPC_WEAK_FUNC(sub_82FB2470);
PPC_FUNC_IMPL(__imp__sub_82FB2470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82FB2478;
	__savegprlr_27(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb2630
	if (ctx.cr0.eq) goto loc_82FB2630;
	// bl 0x82fb00e0
	ctx.lr = 0x82FB249C;
	sub_82FB00E0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r27,r11,r3
	ctx.r27.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82fb24f0
	if (!ctx.cr6.eq) goto loc_82FB24F0;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fb1600
	ctx.lr = 0x82FB24BC;
	sub_82FB1600(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82fb1120
	ctx.lr = 0x82FB24D4;
	sub_82FB1120(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,93
	ctx.r4.s64 = 93;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB24E8;
	sub_82FB1928(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// b 0x82fb26d0
	goto loc_82FB26D0;
loc_82FB24F0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// rlwinm. r10,r9,0,11,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// beq 0x82fb2520
	if (ctx.cr0.eq) goto loc_82FB2520;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-16644
	ctx.r4.s64 = ctx.r11.s64 + -16644;
	// bl 0x82fb19d0
	ctx.lr = 0x82FB2520;
	sub_82FB19D0(ctx, base);
loc_82FB2520:
	// lis r29,256
	ctx.r29.s64 = 16777216;
	// b 0x82fb2584
	goto loc_82FB2584;
loc_82FB2528:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r27,r27,-1
	ctx.r27.s64 = ctx.r27.s64 + -1;
	// beq cr6,0x82fb2594
	if (ctx.cr6.eq) goto loc_82FB2594;
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb2594
	if (ctx.cr0.eq) goto loc_82FB2594;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fb1d98
	ctx.lr = 0x82FB2550;
	sub_82FB1D98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,91
	ctx.r4.s64 = 91;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82fb1c78
	ctx.lr = 0x82FB2560;
	sub_82FB1C78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,93
	ctx.r4.s64 = 93;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB2578;
	sub_82FB1928(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1578
	ctx.lr = 0x82FB2584;
	sub_82FB1578(ctx, base);
loc_82FB2584:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82fb2528
	if (!ctx.cr6.gt) goto loc_82FB2528;
loc_82FB2594:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb260c
	if (ctx.cr6.eq) goto loc_82FB260C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,0,11,11
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x100000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82fb25c8
	if (ctx.cr0.eq) goto loc_82FB25C8;
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82fb1578
	ctx.lr = 0x82FB25C0;
	sub_82FB1578(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// b 0x82fb2608
	goto loc_82FB2608;
loc_82FB25C8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82fb1c78
	ctx.lr = 0x82FB25D8;
	sub_82FB1C78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,41
	ctx.r4.s64 = 41;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB25F0;
	sub_82FB1928(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82fb1578
	ctx.lr = 0x82FB2604;
	sub_82FB1578(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
loc_82FB2608:
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
loc_82FB260C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb6890
	ctx.lr = 0x82FB2618;
	sub_82FB6890(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// oris r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 1048576;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,0(r28)
	PPC_STORE_U64(ctx.r28.u32 + 0, ctx.r11.u64);
	// b 0x82fb26d8
	goto loc_82FB26D8;
loc_82FB2630:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82fb2698
	if (ctx.cr6.eq) goto loc_82FB2698;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// bl 0x82fb1c78
	ctx.lr = 0x82FB264C;
	sub_82FB1C78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r10,-15836
	ctx.r4.s64 = ctx.r10.s64 + -15836;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82fb19d0
	ctx.lr = 0x82FB2668;
	sub_82FB19D0(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82fb1120
	ctx.lr = 0x82FB267C;
	sub_82FB1120(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,93
	ctx.r4.s64 = 93;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// std r11,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB2690;
	sub_82FB1928(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// b 0x82fb26d0
	goto loc_82FB26D0;
loc_82FB2698:
	// li r4,91
	ctx.r4.s64 = 91;
	// bl 0x82fb1600
	ctx.lr = 0x82FB26A0;
	sub_82FB1600(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// bl 0x82fb1120
	ctx.lr = 0x82FB26B8;
	sub_82FB1120(ctx, base);
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// li r4,93
	ctx.r4.s64 = 93;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB26CC;
	sub_82FB1928(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
loc_82FB26D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fb6458
	ctx.lr = 0x82FB26D8;
	sub_82FB6458(ctx, base);
loc_82FB26D8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB26E4"))) PPC_WEAK_FUNC(sub_82FB26E4);
PPC_FUNC_IMPL(__imp__sub_82FB26E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82FB26E8"))) PPC_WEAK_FUNC(sub_82FB26E8);
PPC_FUNC_IMPL(__imp__sub_82FB26E8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb1d98
	ctx.lr = 0x82FB2708;
	sub_82FB1D98(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82fb1c78
	ctx.lr = 0x82FB2718;
	sub_82FB1C78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,39
	ctx.r4.s64 = 39;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82fb1928
	ctx.lr = 0x82FB2738;
	sub_82FB1928(ctx, base);
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

__attribute__((alias("__imp__sub_82FB2750"))) PPC_WEAK_FUNC(sub_82FB2750);
PPC_FUNC_IMPL(__imp__sub_82FB2750) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82FB2758;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// extsb r10,r11
	ctx.r10.s64 = ctx.r11.s8;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82fb2938
	if (ctx.cr6.gt) goto loc_82FB2938;
	// lis r30,-31958
	ctx.r30.s64 = -2094399488;
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82fb2910
	if (ctx.cr0.eq) goto loc_82FB2910;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fb0a88
	ctx.lr = 0x82FB279C;
	sub_82FB0A88(ctx, base);
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB27B0;
	sub_82FB1928(ctx, base);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82fb1578
	ctx.lr = 0x82FB27C4;
	sub_82FB1578(ctx, base);
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lis r28,256
	ctx.r28.s64 = 16777216;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82fb2938
	if (ctx.cr6.gt) goto loc_82FB2938;
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// beq cr6,0x82fb28f8
	if (ctx.cr6.eq) goto loc_82FB28F8;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-15964
	ctx.r4.s64 = ctx.r11.s64 + -15964;
	// bl 0x82fb19d0
	ctx.lr = 0x82FB2800;
	sub_82FB19D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r11,r28
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r28.s32, ctx.xer);
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
	// bgt cr6,0x82fb28c0
	if (ctx.cr6.gt) goto loc_82FB28C0;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// addi r29,r10,-15832
	ctx.r29.s64 = ctx.r10.s64 + -15832;
loc_82FB281C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// extsb. r10,r10
	ctx.r10.s64 = ctx.r10.s8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82fb28c0
	if (ctx.cr0.eq) goto loc_82FB28C0;
	// cmpwi cr6,r10,64
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 64, ctx.xer);
	// beq cr6,0x82fb28c0
	if (ctx.cr6.eq) goto loc_82FB28C0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fb51b8
	ctx.lr = 0x82FB2838;
	sub_82FB51B8(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,96
	ctx.r4.s64 = 96;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fb1c78
	ctx.lr = 0x82FB2848;
	sub_82FB1C78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,39
	ctx.r4.s64 = 39;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// bl 0x82fb1928
	ctx.lr = 0x82FB2860;
	sub_82FB1928(ctx, base);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb1578
	ctx.lr = 0x82FB286C;
	sub_82FB1578(ctx, base);
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82fb2884
	if (!ctx.cr6.eq) goto loc_82FB2884;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11888, ctx.r11.u32);
loc_82FB2884:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82fb28b0
	if (ctx.cr6.gt) goto loc_82FB28B0;
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// beq cr6,0x82fb28b0
	if (ctx.cr6.eq) goto loc_82FB28B0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb19d0
	ctx.lr = 0x82FB28AC;
	sub_82FB19D0(ctx, base);
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
loc_82FB28B0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82fb281c
	if (!ctx.cr6.gt) goto loc_82FB281C;
loc_82FB28C0:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r10,0,0,7
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFF000000;
	// cmpw cr6,r10,r28
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r28.s32, ctx.xer);
	// bgt cr6,0x82fb28f8
	if (ctx.cr6.gt) goto loc_82FB28F8;
	// lbz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82fb28e8
	if (!ctx.cr0.eq) goto loc_82FB28E8;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb1120
	ctx.lr = 0x82FB28E8;
	sub_82FB1120(ctx, base);
loc_82FB28E8:
	// li r4,125
	ctx.r4.s64 = 125;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fb1928
	ctx.lr = 0x82FB28F4;
	sub_82FB1928(ctx, base);
	// lwz r11,11888(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11888);
loc_82FB28F8:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82fb2938
	if (!ctx.cr6.eq) goto loc_82FB2938;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,11888(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11888, ctx.r11.u32);
	// b 0x82fb2938
	goto loc_82FB2938;
loc_82FB2910:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82fb2938
	if (ctx.cr6.gt) goto loc_82FB2938;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82fb1cd8
	ctx.lr = 0x82FB2928;
	sub_82FB1CD8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82FB2938:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82FB2944"))) PPC_WEAK_FUNC(sub_82FB2944);
PPC_FUNC_IMPL(__imp__sub_82FB2944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

