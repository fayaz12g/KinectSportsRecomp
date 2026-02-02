#include "ppc_recomp_shared.h"

__attribute__((alias("__imp____savevmx_74"))) PPC_WEAK_FUNC(__savevmx_74);
PPC_FUNC_IMPL(__imp____savevmx_74) {
	PPC_FUNC_PROLOGUE();
	// li r11,-864
	ctx.r11.s64 = -864;
	// stvx128 v74,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v74.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v75.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v76.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v78.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v79.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_75"))) PPC_WEAK_FUNC(__savevmx_75);
PPC_FUNC_IMPL(__imp____savevmx_75) {
	PPC_FUNC_PROLOGUE();
	// li r11,-848
	ctx.r11.s64 = -848;
	// stvx128 v75,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v75.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v76.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v78.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v79.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_76"))) PPC_WEAK_FUNC(__savevmx_76);
PPC_FUNC_IMPL(__imp____savevmx_76) {
	PPC_FUNC_PROLOGUE();
	// li r11,-832
	ctx.r11.s64 = -832;
	// stvx128 v76,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v76.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v78.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v79.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_77"))) PPC_WEAK_FUNC(__savevmx_77);
PPC_FUNC_IMPL(__imp____savevmx_77) {
	PPC_FUNC_PROLOGUE();
	// li r11,-816
	ctx.r11.s64 = -816;
	// stvx128 v77,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v78.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v79.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_78"))) PPC_WEAK_FUNC(__savevmx_78);
PPC_FUNC_IMPL(__imp____savevmx_78) {
	PPC_FUNC_PROLOGUE();
	// li r11,-800
	ctx.r11.s64 = -800;
	// stvx128 v78,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v78.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v79.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_79"))) PPC_WEAK_FUNC(__savevmx_79);
PPC_FUNC_IMPL(__imp____savevmx_79) {
	PPC_FUNC_PROLOGUE();
	// li r11,-784
	ctx.r11.s64 = -784;
	// stvx128 v79,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v79.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_80"))) PPC_WEAK_FUNC(__savevmx_80);
PPC_FUNC_IMPL(__imp____savevmx_80) {
	PPC_FUNC_PROLOGUE();
	// li r11,-768
	ctx.r11.s64 = -768;
	// stvx128 v80,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v80.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_81"))) PPC_WEAK_FUNC(__savevmx_81);
PPC_FUNC_IMPL(__imp____savevmx_81) {
	PPC_FUNC_PROLOGUE();
	// li r11,-752
	ctx.r11.s64 = -752;
	// stvx128 v81,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v81.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_82"))) PPC_WEAK_FUNC(__savevmx_82);
PPC_FUNC_IMPL(__imp____savevmx_82) {
	PPC_FUNC_PROLOGUE();
	// li r11,-736
	ctx.r11.s64 = -736;
	// stvx128 v82,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v82.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_83"))) PPC_WEAK_FUNC(__savevmx_83);
PPC_FUNC_IMPL(__imp____savevmx_83) {
	PPC_FUNC_PROLOGUE();
	// li r11,-720
	ctx.r11.s64 = -720;
	// stvx128 v83,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v83.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_84"))) PPC_WEAK_FUNC(__savevmx_84);
PPC_FUNC_IMPL(__imp____savevmx_84) {
	PPC_FUNC_PROLOGUE();
	// li r11,-704
	ctx.r11.s64 = -704;
	// stvx128 v84,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v84.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_85"))) PPC_WEAK_FUNC(__savevmx_85);
PPC_FUNC_IMPL(__imp____savevmx_85) {
	PPC_FUNC_PROLOGUE();
	// li r11,-688
	ctx.r11.s64 = -688;
	// stvx128 v85,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v85.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_86"))) PPC_WEAK_FUNC(__savevmx_86);
PPC_FUNC_IMPL(__imp____savevmx_86) {
	PPC_FUNC_PROLOGUE();
	// li r11,-672
	ctx.r11.s64 = -672;
	// stvx128 v86,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v86.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_87"))) PPC_WEAK_FUNC(__savevmx_87);
PPC_FUNC_IMPL(__imp____savevmx_87) {
	PPC_FUNC_PROLOGUE();
	// li r11,-656
	ctx.r11.s64 = -656;
	// stvx128 v87,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v87.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_88"))) PPC_WEAK_FUNC(__savevmx_88);
PPC_FUNC_IMPL(__imp____savevmx_88) {
	PPC_FUNC_PROLOGUE();
	// li r11,-640
	ctx.r11.s64 = -640;
	// stvx128 v88,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v88.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_89"))) PPC_WEAK_FUNC(__savevmx_89);
PPC_FUNC_IMPL(__imp____savevmx_89) {
	PPC_FUNC_PROLOGUE();
	// li r11,-624
	ctx.r11.s64 = -624;
	// stvx128 v89,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v89.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_90"))) PPC_WEAK_FUNC(__savevmx_90);
PPC_FUNC_IMPL(__imp____savevmx_90) {
	PPC_FUNC_PROLOGUE();
	// li r11,-608
	ctx.r11.s64 = -608;
	// stvx128 v90,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v90.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_91"))) PPC_WEAK_FUNC(__savevmx_91);
PPC_FUNC_IMPL(__imp____savevmx_91) {
	PPC_FUNC_PROLOGUE();
	// li r11,-592
	ctx.r11.s64 = -592;
	// stvx128 v91,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v91.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_92"))) PPC_WEAK_FUNC(__savevmx_92);
PPC_FUNC_IMPL(__imp____savevmx_92) {
	PPC_FUNC_PROLOGUE();
	// li r11,-576
	ctx.r11.s64 = -576;
	// stvx128 v92,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v92.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_93"))) PPC_WEAK_FUNC(__savevmx_93);
PPC_FUNC_IMPL(__imp____savevmx_93) {
	PPC_FUNC_PROLOGUE();
	// li r11,-560
	ctx.r11.s64 = -560;
	// stvx128 v93,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v93.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_94"))) PPC_WEAK_FUNC(__savevmx_94);
PPC_FUNC_IMPL(__imp____savevmx_94) {
	PPC_FUNC_PROLOGUE();
	// li r11,-544
	ctx.r11.s64 = -544;
	// stvx128 v94,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v94.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_95"))) PPC_WEAK_FUNC(__savevmx_95);
PPC_FUNC_IMPL(__imp____savevmx_95) {
	PPC_FUNC_PROLOGUE();
	// li r11,-528
	ctx.r11.s64 = -528;
	// stvx128 v95,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v95.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_96"))) PPC_WEAK_FUNC(__savevmx_96);
PPC_FUNC_IMPL(__imp____savevmx_96) {
	PPC_FUNC_PROLOGUE();
	// li r11,-512
	ctx.r11.s64 = -512;
	// stvx128 v96,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v96.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_97"))) PPC_WEAK_FUNC(__savevmx_97);
PPC_FUNC_IMPL(__imp____savevmx_97) {
	PPC_FUNC_PROLOGUE();
	// li r11,-496
	ctx.r11.s64 = -496;
	// stvx128 v97,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v97.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_98"))) PPC_WEAK_FUNC(__savevmx_98);
PPC_FUNC_IMPL(__imp____savevmx_98) {
	PPC_FUNC_PROLOGUE();
	// li r11,-480
	ctx.r11.s64 = -480;
	// stvx128 v98,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v98.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_99"))) PPC_WEAK_FUNC(__savevmx_99);
PPC_FUNC_IMPL(__imp____savevmx_99) {
	PPC_FUNC_PROLOGUE();
	// li r11,-464
	ctx.r11.s64 = -464;
	// stvx128 v99,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v99.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_100"))) PPC_WEAK_FUNC(__savevmx_100);
PPC_FUNC_IMPL(__imp____savevmx_100) {
	PPC_FUNC_PROLOGUE();
	// li r11,-448
	ctx.r11.s64 = -448;
	// stvx128 v100,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v100.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_101"))) PPC_WEAK_FUNC(__savevmx_101);
PPC_FUNC_IMPL(__imp____savevmx_101) {
	PPC_FUNC_PROLOGUE();
	// li r11,-432
	ctx.r11.s64 = -432;
	// stvx128 v101,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v101.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_102"))) PPC_WEAK_FUNC(__savevmx_102);
PPC_FUNC_IMPL(__imp____savevmx_102) {
	PPC_FUNC_PROLOGUE();
	// li r11,-416
	ctx.r11.s64 = -416;
	// stvx128 v102,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v102.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_103"))) PPC_WEAK_FUNC(__savevmx_103);
PPC_FUNC_IMPL(__imp____savevmx_103) {
	PPC_FUNC_PROLOGUE();
	// li r11,-400
	ctx.r11.s64 = -400;
	// stvx128 v103,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v103.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_104"))) PPC_WEAK_FUNC(__savevmx_104);
PPC_FUNC_IMPL(__imp____savevmx_104) {
	PPC_FUNC_PROLOGUE();
	// li r11,-384
	ctx.r11.s64 = -384;
	// stvx128 v104,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v104.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_105"))) PPC_WEAK_FUNC(__savevmx_105);
PPC_FUNC_IMPL(__imp____savevmx_105) {
	PPC_FUNC_PROLOGUE();
	// li r11,-368
	ctx.r11.s64 = -368;
	// stvx128 v105,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v105.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_106"))) PPC_WEAK_FUNC(__savevmx_106);
PPC_FUNC_IMPL(__imp____savevmx_106) {
	PPC_FUNC_PROLOGUE();
	// li r11,-352
	ctx.r11.s64 = -352;
	// stvx128 v106,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v106.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_107"))) PPC_WEAK_FUNC(__savevmx_107);
PPC_FUNC_IMPL(__imp____savevmx_107) {
	PPC_FUNC_PROLOGUE();
	// li r11,-336
	ctx.r11.s64 = -336;
	// stvx128 v107,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v107.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_108"))) PPC_WEAK_FUNC(__savevmx_108);
PPC_FUNC_IMPL(__imp____savevmx_108) {
	PPC_FUNC_PROLOGUE();
	// li r11,-320
	ctx.r11.s64 = -320;
	// stvx128 v108,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v108.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_109"))) PPC_WEAK_FUNC(__savevmx_109);
PPC_FUNC_IMPL(__imp____savevmx_109) {
	PPC_FUNC_PROLOGUE();
	// li r11,-304
	ctx.r11.s64 = -304;
	// stvx128 v109,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v109.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_110"))) PPC_WEAK_FUNC(__savevmx_110);
PPC_FUNC_IMPL(__imp____savevmx_110) {
	PPC_FUNC_PROLOGUE();
	// li r11,-288
	ctx.r11.s64 = -288;
	// stvx128 v110,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v110.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_111"))) PPC_WEAK_FUNC(__savevmx_111);
PPC_FUNC_IMPL(__imp____savevmx_111) {
	PPC_FUNC_PROLOGUE();
	// li r11,-272
	ctx.r11.s64 = -272;
	// stvx128 v111,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v111.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_112"))) PPC_WEAK_FUNC(__savevmx_112);
PPC_FUNC_IMPL(__imp____savevmx_112) {
	PPC_FUNC_PROLOGUE();
	// li r11,-256
	ctx.r11.s64 = -256;
	// stvx128 v112,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v112.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_113"))) PPC_WEAK_FUNC(__savevmx_113);
PPC_FUNC_IMPL(__imp____savevmx_113) {
	PPC_FUNC_PROLOGUE();
	// li r11,-240
	ctx.r11.s64 = -240;
	// stvx128 v113,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v113.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_114"))) PPC_WEAK_FUNC(__savevmx_114);
PPC_FUNC_IMPL(__imp____savevmx_114) {
	PPC_FUNC_PROLOGUE();
	// li r11,-224
	ctx.r11.s64 = -224;
	// stvx128 v114,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_115"))) PPC_WEAK_FUNC(__savevmx_115);
PPC_FUNC_IMPL(__imp____savevmx_115) {
	PPC_FUNC_PROLOGUE();
	// li r11,-208
	ctx.r11.s64 = -208;
	// stvx128 v115,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v115.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_116"))) PPC_WEAK_FUNC(__savevmx_116);
PPC_FUNC_IMPL(__imp____savevmx_116) {
	PPC_FUNC_PROLOGUE();
	// li r11,-192
	ctx.r11.s64 = -192;
	// stvx128 v116,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v116.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_117"))) PPC_WEAK_FUNC(__savevmx_117);
PPC_FUNC_IMPL(__imp____savevmx_117) {
	PPC_FUNC_PROLOGUE();
	// li r11,-176
	ctx.r11.s64 = -176;
	// stvx128 v117,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_118"))) PPC_WEAK_FUNC(__savevmx_118);
PPC_FUNC_IMPL(__imp____savevmx_118) {
	PPC_FUNC_PROLOGUE();
	// li r11,-160
	ctx.r11.s64 = -160;
	// stvx128 v118,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_119"))) PPC_WEAK_FUNC(__savevmx_119);
PPC_FUNC_IMPL(__imp____savevmx_119) {
	PPC_FUNC_PROLOGUE();
	// li r11,-144
	ctx.r11.s64 = -144;
	// stvx128 v119,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_120"))) PPC_WEAK_FUNC(__savevmx_120);
PPC_FUNC_IMPL(__imp____savevmx_120) {
	PPC_FUNC_PROLOGUE();
	// li r11,-128
	ctx.r11.s64 = -128;
	// stvx128 v120,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_121"))) PPC_WEAK_FUNC(__savevmx_121);
PPC_FUNC_IMPL(__imp____savevmx_121) {
	PPC_FUNC_PROLOGUE();
	// li r11,-112
	ctx.r11.s64 = -112;
	// stvx128 v121,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_122"))) PPC_WEAK_FUNC(__savevmx_122);
PPC_FUNC_IMPL(__imp____savevmx_122) {
	PPC_FUNC_PROLOGUE();
	// li r11,-96
	ctx.r11.s64 = -96;
	// stvx128 v122,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_123"))) PPC_WEAK_FUNC(__savevmx_123);
PPC_FUNC_IMPL(__imp____savevmx_123) {
	PPC_FUNC_PROLOGUE();
	// li r11,-80
	ctx.r11.s64 = -80;
	// stvx128 v123,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_124"))) PPC_WEAK_FUNC(__savevmx_124);
PPC_FUNC_IMPL(__imp____savevmx_124) {
	PPC_FUNC_PROLOGUE();
	// li r11,-64
	ctx.r11.s64 = -64;
	// stvx128 v124,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_125"))) PPC_WEAK_FUNC(__savevmx_125);
PPC_FUNC_IMPL(__imp____savevmx_125) {
	PPC_FUNC_PROLOGUE();
	// li r11,-48
	ctx.r11.s64 = -48;
	// stvx128 v125,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_126"))) PPC_WEAK_FUNC(__savevmx_126);
PPC_FUNC_IMPL(__imp____savevmx_126) {
	PPC_FUNC_PROLOGUE();
	// li r11,-32
	ctx.r11.s64 = -32;
	// stvx128 v126,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____savevmx_127"))) PPC_WEAK_FUNC(__savevmx_127);
PPC_FUNC_IMPL(__imp____savevmx_127) {
	PPC_FUNC_PROLOGUE();
	// li r11,-16
	ctx.r11.s64 = -16;
	// stvx128 v127,r11,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_14"))) PPC_WEAK_FUNC(__restvmx_14);
PPC_FUNC_IMPL(__imp____restvmx_14) {
	PPC_FUNC_PROLOGUE();
	// li r11,-288
	ctx.r11.s64 = -288;
	// lvx v14,r11,r12
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx v15,r11,r12
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_15"))) PPC_WEAK_FUNC(__restvmx_15);
PPC_FUNC_IMPL(__imp____restvmx_15) {
	PPC_FUNC_PROLOGUE();
	// li r11,-272
	ctx.r11.s64 = -272;
	// lvx v15,r11,r12
	simd::store_shuffled(ctx.v15, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_16"))) PPC_WEAK_FUNC(__restvmx_16);
PPC_FUNC_IMPL(__imp____restvmx_16) {
	PPC_FUNC_PROLOGUE();
	// li r11,-256
	ctx.r11.s64 = -256;
	// lvx v16,r11,r12
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_17"))) PPC_WEAK_FUNC(__restvmx_17);
PPC_FUNC_IMPL(__imp____restvmx_17) {
	PPC_FUNC_PROLOGUE();
	// li r11,-240
	ctx.r11.s64 = -240;
	// lvx v17,r11,r12
	simd::store_shuffled(ctx.v17, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_18"))) PPC_WEAK_FUNC(__restvmx_18);
PPC_FUNC_IMPL(__imp____restvmx_18) {
	PPC_FUNC_PROLOGUE();
	// li r11,-224
	ctx.r11.s64 = -224;
	// lvx v18,r11,r12
	simd::store_shuffled(ctx.v18, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_19"))) PPC_WEAK_FUNC(__restvmx_19);
PPC_FUNC_IMPL(__imp____restvmx_19) {
	PPC_FUNC_PROLOGUE();
	// li r11,-208
	ctx.r11.s64 = -208;
	// lvx v19,r11,r12
	simd::store_shuffled(ctx.v19, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_20"))) PPC_WEAK_FUNC(__restvmx_20);
PPC_FUNC_IMPL(__imp____restvmx_20) {
	PPC_FUNC_PROLOGUE();
	// li r11,-192
	ctx.r11.s64 = -192;
	// lvx v20,r11,r12
	simd::store_shuffled(ctx.v20, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_21"))) PPC_WEAK_FUNC(__restvmx_21);
PPC_FUNC_IMPL(__imp____restvmx_21) {
	PPC_FUNC_PROLOGUE();
	// li r11,-176
	ctx.r11.s64 = -176;
	// lvx v21,r11,r12
	simd::store_shuffled(ctx.v21, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_22"))) PPC_WEAK_FUNC(__restvmx_22);
PPC_FUNC_IMPL(__imp____restvmx_22) {
	PPC_FUNC_PROLOGUE();
	// li r11,-160
	ctx.r11.s64 = -160;
	// lvx v22,r11,r12
	simd::store_shuffled(ctx.v22, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_23"))) PPC_WEAK_FUNC(__restvmx_23);
PPC_FUNC_IMPL(__imp____restvmx_23) {
	PPC_FUNC_PROLOGUE();
	// li r11,-144
	ctx.r11.s64 = -144;
	// lvx v23,r11,r12
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_24"))) PPC_WEAK_FUNC(__restvmx_24);
PPC_FUNC_IMPL(__imp____restvmx_24) {
	PPC_FUNC_PROLOGUE();
	// li r11,-128
	ctx.r11.s64 = -128;
	// lvx v24,r11,r12
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_25"))) PPC_WEAK_FUNC(__restvmx_25);
PPC_FUNC_IMPL(__imp____restvmx_25) {
	PPC_FUNC_PROLOGUE();
	// li r11,-112
	ctx.r11.s64 = -112;
	// lvx v25,r11,r12
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_26"))) PPC_WEAK_FUNC(__restvmx_26);
PPC_FUNC_IMPL(__imp____restvmx_26) {
	PPC_FUNC_PROLOGUE();
	// li r11,-96
	ctx.r11.s64 = -96;
	// lvx v26,r11,r12
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_27"))) PPC_WEAK_FUNC(__restvmx_27);
PPC_FUNC_IMPL(__imp____restvmx_27) {
	PPC_FUNC_PROLOGUE();
	// li r11,-80
	ctx.r11.s64 = -80;
	// lvx v27,r11,r12
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_28"))) PPC_WEAK_FUNC(__restvmx_28);
PPC_FUNC_IMPL(__imp____restvmx_28) {
	PPC_FUNC_PROLOGUE();
	// li r11,-64
	ctx.r11.s64 = -64;
	// lvx v28,r11,r12
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_29"))) PPC_WEAK_FUNC(__restvmx_29);
PPC_FUNC_IMPL(__imp____restvmx_29) {
	PPC_FUNC_PROLOGUE();
	// li r11,-48
	ctx.r11.s64 = -48;
	// lvx v29,r11,r12
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_30"))) PPC_WEAK_FUNC(__restvmx_30);
PPC_FUNC_IMPL(__imp____restvmx_30) {
	PPC_FUNC_PROLOGUE();
	// li r11,-32
	ctx.r11.s64 = -32;
	// lvx v30,r11,r12
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_31"))) PPC_WEAK_FUNC(__restvmx_31);
PPC_FUNC_IMPL(__imp____restvmx_31) {
	PPC_FUNC_PROLOGUE();
	// li r11,-16
	ctx.r11.s64 = -16;
	// lvx v31,r11,r12
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
}

__attribute__((alias("__imp____restvmx_64"))) PPC_WEAK_FUNC(__restvmx_64);
PPC_FUNC_IMPL(__imp____restvmx_64) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1024
	ctx.r11.s64 = -1024;
	// lvx128 v64,r11,r12
	simd::store_shuffled(ctx.v64, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// lvx128 v65,r11,r12
	simd::store_shuffled(ctx.v65, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	simd::store_shuffled(ctx.v66, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	simd::store_shuffled(ctx.v67, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	simd::store_shuffled(ctx.v68, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	simd::store_shuffled(ctx.v69, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_65"))) PPC_WEAK_FUNC(__restvmx_65);
PPC_FUNC_IMPL(__imp____restvmx_65) {
	PPC_FUNC_PROLOGUE();
	// li r11,-1008
	ctx.r11.s64 = -1008;
	// lvx128 v65,r11,r12
	simd::store_shuffled(ctx.v65, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	simd::store_shuffled(ctx.v66, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	simd::store_shuffled(ctx.v67, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	simd::store_shuffled(ctx.v68, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	simd::store_shuffled(ctx.v69, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_66"))) PPC_WEAK_FUNC(__restvmx_66);
PPC_FUNC_IMPL(__imp____restvmx_66) {
	PPC_FUNC_PROLOGUE();
	// li r11,-992
	ctx.r11.s64 = -992;
	// lvx128 v66,r11,r12
	simd::store_shuffled(ctx.v66, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	simd::store_shuffled(ctx.v67, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	simd::store_shuffled(ctx.v68, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	simd::store_shuffled(ctx.v69, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_67"))) PPC_WEAK_FUNC(__restvmx_67);
PPC_FUNC_IMPL(__imp____restvmx_67) {
	PPC_FUNC_PROLOGUE();
	// li r11,-976
	ctx.r11.s64 = -976;
	// lvx128 v67,r11,r12
	simd::store_shuffled(ctx.v67, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	simd::store_shuffled(ctx.v68, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	simd::store_shuffled(ctx.v69, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_68"))) PPC_WEAK_FUNC(__restvmx_68);
PPC_FUNC_IMPL(__imp____restvmx_68) {
	PPC_FUNC_PROLOGUE();
	// li r11,-960
	ctx.r11.s64 = -960;
	// lvx128 v68,r11,r12
	simd::store_shuffled(ctx.v68, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	simd::store_shuffled(ctx.v69, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_69"))) PPC_WEAK_FUNC(__restvmx_69);
PPC_FUNC_IMPL(__imp____restvmx_69) {
	PPC_FUNC_PROLOGUE();
	// li r11,-944
	ctx.r11.s64 = -944;
	// lvx128 v69,r11,r12
	simd::store_shuffled(ctx.v69, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_70"))) PPC_WEAK_FUNC(__restvmx_70);
PPC_FUNC_IMPL(__imp____restvmx_70) {
	PPC_FUNC_PROLOGUE();
	// li r11,-928
	ctx.r11.s64 = -928;
	// lvx128 v70,r11,r12
	simd::store_shuffled(ctx.v70, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_71"))) PPC_WEAK_FUNC(__restvmx_71);
PPC_FUNC_IMPL(__imp____restvmx_71) {
	PPC_FUNC_PROLOGUE();
	// li r11,-912
	ctx.r11.s64 = -912;
	// lvx128 v71,r11,r12
	simd::store_shuffled(ctx.v71, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_72"))) PPC_WEAK_FUNC(__restvmx_72);
PPC_FUNC_IMPL(__imp____restvmx_72) {
	PPC_FUNC_PROLOGUE();
	// li r11,-896
	ctx.r11.s64 = -896;
	// lvx128 v72,r11,r12
	simd::store_shuffled(ctx.v72, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_73"))) PPC_WEAK_FUNC(__restvmx_73);
PPC_FUNC_IMPL(__imp____restvmx_73) {
	PPC_FUNC_PROLOGUE();
	// li r11,-880
	ctx.r11.s64 = -880;
	// lvx128 v73,r11,r12
	simd::store_shuffled(ctx.v73, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_74"))) PPC_WEAK_FUNC(__restvmx_74);
PPC_FUNC_IMPL(__imp____restvmx_74) {
	PPC_FUNC_PROLOGUE();
	// li r11,-864
	ctx.r11.s64 = -864;
	// lvx128 v74,r11,r12
	simd::store_shuffled(ctx.v74, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_75"))) PPC_WEAK_FUNC(__restvmx_75);
PPC_FUNC_IMPL(__imp____restvmx_75) {
	PPC_FUNC_PROLOGUE();
	// li r11,-848
	ctx.r11.s64 = -848;
	// lvx128 v75,r11,r12
	simd::store_shuffled(ctx.v75, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_76"))) PPC_WEAK_FUNC(__restvmx_76);
PPC_FUNC_IMPL(__imp____restvmx_76) {
	PPC_FUNC_PROLOGUE();
	// li r11,-832
	ctx.r11.s64 = -832;
	// lvx128 v76,r11,r12
	simd::store_shuffled(ctx.v76, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_77"))) PPC_WEAK_FUNC(__restvmx_77);
PPC_FUNC_IMPL(__imp____restvmx_77) {
	PPC_FUNC_PROLOGUE();
	// li r11,-816
	ctx.r11.s64 = -816;
	// lvx128 v77,r11,r12
	simd::store_shuffled(ctx.v77, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_78"))) PPC_WEAK_FUNC(__restvmx_78);
PPC_FUNC_IMPL(__imp____restvmx_78) {
	PPC_FUNC_PROLOGUE();
	// li r11,-800
	ctx.r11.s64 = -800;
	// lvx128 v78,r11,r12
	simd::store_shuffled(ctx.v78, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_79"))) PPC_WEAK_FUNC(__restvmx_79);
PPC_FUNC_IMPL(__imp____restvmx_79) {
	PPC_FUNC_PROLOGUE();
	// li r11,-784
	ctx.r11.s64 = -784;
	// lvx128 v79,r11,r12
	simd::store_shuffled(ctx.v79, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_80"))) PPC_WEAK_FUNC(__restvmx_80);
PPC_FUNC_IMPL(__imp____restvmx_80) {
	PPC_FUNC_PROLOGUE();
	// li r11,-768
	ctx.r11.s64 = -768;
	// lvx128 v80,r11,r12
	simd::store_shuffled(ctx.v80, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_81"))) PPC_WEAK_FUNC(__restvmx_81);
PPC_FUNC_IMPL(__imp____restvmx_81) {
	PPC_FUNC_PROLOGUE();
	// li r11,-752
	ctx.r11.s64 = -752;
	// lvx128 v81,r11,r12
	simd::store_shuffled(ctx.v81, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_82"))) PPC_WEAK_FUNC(__restvmx_82);
PPC_FUNC_IMPL(__imp____restvmx_82) {
	PPC_FUNC_PROLOGUE();
	// li r11,-736
	ctx.r11.s64 = -736;
	// lvx128 v82,r11,r12
	simd::store_shuffled(ctx.v82, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_83"))) PPC_WEAK_FUNC(__restvmx_83);
PPC_FUNC_IMPL(__imp____restvmx_83) {
	PPC_FUNC_PROLOGUE();
	// li r11,-720
	ctx.r11.s64 = -720;
	// lvx128 v83,r11,r12
	simd::store_shuffled(ctx.v83, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_84"))) PPC_WEAK_FUNC(__restvmx_84);
PPC_FUNC_IMPL(__imp____restvmx_84) {
	PPC_FUNC_PROLOGUE();
	// li r11,-704
	ctx.r11.s64 = -704;
	// lvx128 v84,r11,r12
	simd::store_shuffled(ctx.v84, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_85"))) PPC_WEAK_FUNC(__restvmx_85);
PPC_FUNC_IMPL(__imp____restvmx_85) {
	PPC_FUNC_PROLOGUE();
	// li r11,-688
	ctx.r11.s64 = -688;
	// lvx128 v85,r11,r12
	simd::store_shuffled(ctx.v85, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_86"))) PPC_WEAK_FUNC(__restvmx_86);
PPC_FUNC_IMPL(__imp____restvmx_86) {
	PPC_FUNC_PROLOGUE();
	// li r11,-672
	ctx.r11.s64 = -672;
	// lvx128 v86,r11,r12
	simd::store_shuffled(ctx.v86, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_87"))) PPC_WEAK_FUNC(__restvmx_87);
PPC_FUNC_IMPL(__imp____restvmx_87) {
	PPC_FUNC_PROLOGUE();
	// li r11,-656
	ctx.r11.s64 = -656;
	// lvx128 v87,r11,r12
	simd::store_shuffled(ctx.v87, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_88"))) PPC_WEAK_FUNC(__restvmx_88);
PPC_FUNC_IMPL(__imp____restvmx_88) {
	PPC_FUNC_PROLOGUE();
	// li r11,-640
	ctx.r11.s64 = -640;
	// lvx128 v88,r11,r12
	simd::store_shuffled(ctx.v88, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_89"))) PPC_WEAK_FUNC(__restvmx_89);
PPC_FUNC_IMPL(__imp____restvmx_89) {
	PPC_FUNC_PROLOGUE();
	// li r11,-624
	ctx.r11.s64 = -624;
	// lvx128 v89,r11,r12
	simd::store_shuffled(ctx.v89, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_90"))) PPC_WEAK_FUNC(__restvmx_90);
PPC_FUNC_IMPL(__imp____restvmx_90) {
	PPC_FUNC_PROLOGUE();
	// li r11,-608
	ctx.r11.s64 = -608;
	// lvx128 v90,r11,r12
	simd::store_shuffled(ctx.v90, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_91"))) PPC_WEAK_FUNC(__restvmx_91);
PPC_FUNC_IMPL(__imp____restvmx_91) {
	PPC_FUNC_PROLOGUE();
	// li r11,-592
	ctx.r11.s64 = -592;
	// lvx128 v91,r11,r12
	simd::store_shuffled(ctx.v91, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_92"))) PPC_WEAK_FUNC(__restvmx_92);
PPC_FUNC_IMPL(__imp____restvmx_92) {
	PPC_FUNC_PROLOGUE();
	// li r11,-576
	ctx.r11.s64 = -576;
	// lvx128 v92,r11,r12
	simd::store_shuffled(ctx.v92, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_93"))) PPC_WEAK_FUNC(__restvmx_93);
PPC_FUNC_IMPL(__imp____restvmx_93) {
	PPC_FUNC_PROLOGUE();
	// li r11,-560
	ctx.r11.s64 = -560;
	// lvx128 v93,r11,r12
	simd::store_shuffled(ctx.v93, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_94"))) PPC_WEAK_FUNC(__restvmx_94);
PPC_FUNC_IMPL(__imp____restvmx_94) {
	PPC_FUNC_PROLOGUE();
	// li r11,-544
	ctx.r11.s64 = -544;
	// lvx128 v94,r11,r12
	simd::store_shuffled(ctx.v94, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_95"))) PPC_WEAK_FUNC(__restvmx_95);
PPC_FUNC_IMPL(__imp____restvmx_95) {
	PPC_FUNC_PROLOGUE();
	// li r11,-528
	ctx.r11.s64 = -528;
	// lvx128 v95,r11,r12
	simd::store_shuffled(ctx.v95, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_96"))) PPC_WEAK_FUNC(__restvmx_96);
PPC_FUNC_IMPL(__imp____restvmx_96) {
	PPC_FUNC_PROLOGUE();
	// li r11,-512
	ctx.r11.s64 = -512;
	// lvx128 v96,r11,r12
	simd::store_shuffled(ctx.v96, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_97"))) PPC_WEAK_FUNC(__restvmx_97);
PPC_FUNC_IMPL(__imp____restvmx_97) {
	PPC_FUNC_PROLOGUE();
	// li r11,-496
	ctx.r11.s64 = -496;
	// lvx128 v97,r11,r12
	simd::store_shuffled(ctx.v97, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_98"))) PPC_WEAK_FUNC(__restvmx_98);
PPC_FUNC_IMPL(__imp____restvmx_98) {
	PPC_FUNC_PROLOGUE();
	// li r11,-480
	ctx.r11.s64 = -480;
	// lvx128 v98,r11,r12
	simd::store_shuffled(ctx.v98, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_99"))) PPC_WEAK_FUNC(__restvmx_99);
PPC_FUNC_IMPL(__imp____restvmx_99) {
	PPC_FUNC_PROLOGUE();
	// li r11,-464
	ctx.r11.s64 = -464;
	// lvx128 v99,r11,r12
	simd::store_shuffled(ctx.v99, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_100"))) PPC_WEAK_FUNC(__restvmx_100);
PPC_FUNC_IMPL(__imp____restvmx_100) {
	PPC_FUNC_PROLOGUE();
	// li r11,-448
	ctx.r11.s64 = -448;
	// lvx128 v100,r11,r12
	simd::store_shuffled(ctx.v100, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp____restvmx_101"))) PPC_WEAK_FUNC(__restvmx_101);
PPC_FUNC_IMPL(__imp____restvmx_101) {
	PPC_FUNC_PROLOGUE();
	// li r11,-432
	ctx.r11.s64 = -432;
	// lvx128 v101,r11,r12
	simd::store_shuffled(ctx.v101, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r12.u32) & ~0xF), VectorMaskL));
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

