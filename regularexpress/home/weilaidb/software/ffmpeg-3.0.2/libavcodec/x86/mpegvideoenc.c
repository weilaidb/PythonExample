DECLARE_ALIGNED(16, static uint16_t, inv_zigzag_direct16)[64];
#if HAVE_6REGS
#if HAVE_MMX_INLINE
#define COMPILE_TEMPLATE_MMXEXT 0
#define COMPILE_TEMPLATE_SSE2   0
#define COMPILE_TEMPLATE_SSSE3  0
#define RENAME(a)      a ## _mmx
#define RENAME_FDCT(a) a ## _mmx
#if HAVE_MMXEXT_INLINE
#undef COMPILE_TEMPLATE_SSSE3
#undef COMPILE_TEMPLATE_SSE2
#undef COMPILE_TEMPLATE_MMXEXT
#define COMPILE_TEMPLATE_MMXEXT 1
#define COMPILE_TEMPLATE_SSE2   0
#define COMPILE_TEMPLATE_SSSE3  0
#undef RENAME
#undef RENAME_FDCT
#define RENAME(a)      a ## _mmxext
#define RENAME_FDCT(a) a ## _mmxext
#if HAVE_SSE2_INLINE
#undef COMPILE_TEMPLATE_MMXEXT
#undef COMPILE_TEMPLATE_SSE2
#undef COMPILE_TEMPLATE_SSSE3
#define COMPILE_TEMPLATE_MMXEXT 0
#define COMPILE_TEMPLATE_SSE2   1
#define COMPILE_TEMPLATE_SSSE3  0
#undef RENAME
#undef RENAME_FDCT
#define RENAME(a)      a ## _sse2
#define RENAME_FDCT(a) a ## _sse2
#if HAVE_SSSE3_INLINE
#undef COMPILE_TEMPLATE_MMXEXT
#undef COMPILE_TEMPLATE_SSE2
#undef COMPILE_TEMPLATE_SSSE3
#define COMPILE_TEMPLATE_MMXEXT 0
#define COMPILE_TEMPLATE_SSE2   1
#define COMPILE_TEMPLATE_SSSE3  1
#undef RENAME
#undef RENAME_FDCT
#define RENAME(a)      a ## _ssse3
#define RENAME_FDCT(a) a ## _sse2
#if HAVE_INLINE_ASM
#if HAVE_MMX_INLINE
static void  denoise_dct_mmx(MpegEncContext *s, int16_t *block)
#if HAVE_SSE2_INLINE
static void  denoise_dct_sse2(MpegEncContext *s, int16_t *block)
av_cold void ff_dct_encode_init_x86(MpegEncContext *s)
