#if HAVE_INLINE_ASM
#define DITHER1XBPP
DECLARE_ASM_CONST(8, uint64_t, mmx_00ffw)   = 0x00ff00ff00ff00ffULL;
DECLARE_ASM_CONST(8, uint64_t, mmx_redmask) = 0xf8f8f8f8f8f8f8f8ULL;
DECLARE_ASM_CONST(8, uint64_t, mmx_grnmask) = 0xfcfcfcfcfcfcfcfcULL;
DECLARE_ASM_CONST(8, uint64_t, pb_e0) = 0xe0e0e0e0e0e0e0e0ULL;
DECLARE_ASM_CONST(8, uint64_t, pb_03) = 0x0303030303030303ULL;
DECLARE_ASM_CONST(8, uint64_t, pb_07) = 0x0707070707070707ULL;
#if HAVE_MMX_INLINE && HAVE_6REGS
#undef RENAME
#undef COMPILE_TEMPLATE_MMXEXT
#define COMPILE_TEMPLATE_MMXEXT 0
#define RENAME(a) a ## _mmx
#if HAVE_MMXEXT_INLINE && HAVE_6REGS
#undef RENAME
#undef COMPILE_TEMPLATE_MMXEXT
#define COMPILE_TEMPLATE_MMXEXT 1
#define RENAME(a) a ## _mmxext
av_cold SwsFunc ff_yuv2rgb_init_x86(SwsContext *c)
