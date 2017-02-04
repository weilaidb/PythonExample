#if HAVE_INLINE_ASM
DECLARE_ASM_CONST=       0xF8F8F8F8F8F8F8F8LL;
DECLARE_ASM_CONST(8, uint64_t, bFC)=       0xFCFCFCFCFCFCFCFCLL;
DECLARE_ASM_CONST(8, uint64_t, w10)=       0x0010001000100010LL;
DECLARE_ASM_CONST(8, uint64_t, w02)=       0x0002000200020002LL;
DECLARE_ALIGNED[2] = ;
DECLARE_ALIGNED[2] = ;
DECLARE_ASM_CONST(8, uint64_t, b16Mask)=   0x001F001F001F001FLL;
DECLARE_ASM_CONST(8, uint64_t, g16Mask)=   0x07E007E007E007E0LL;
DECLARE_ASM_CONST(8, uint64_t, r16Mask)=   0xF800F800F800F800LL;
DECLARE_ASM_CONST(8, uint64_t, b15Mask)=   0x001F001F001F001FLL;
DECLARE_ASM_CONST(8, uint64_t, g15Mask)=   0x03E003E003E003E0LL;
DECLARE_ASM_CONST(8, uint64_t, r15Mask)=   0x7C007C007C007C00LL;
DECLARE_ALIGNED(8, const uint64_t, ff_M24A)         = 0x00FF0000FF0000FFLL;
DECLARE_ALIGNED(8, const uint64_t, ff_M24B)         = 0xFF0000FF0000FF00LL;
DECLARE_ALIGNED(8, const uint64_t, ff_M24C)         = 0x0000FF0000FF0000LL;
DECLARE_ALIGNED(8, const uint64_t, ff_bgr2YOffset)  = 0x1010101010101010ULL;
DECLARE_ALIGNED(8, const uint64_t, ff_bgr2UVOffset) = 0x8080808080808080ULL;
DECLARE_ALIGNED(8, const uint64_t, ff_w1111)        = 0x0001000100010001ULL;
#if HAVE_MMX_INLINE
#undef RENAME
#define COMPILE_TEMPLATE_MMXEXT 0
RENAME a ## _mmx
#if HAVE_MMXEXT_INLINE
#undef RENAME
#undef COMPILE_TEMPLATE_MMXEXT
#define COMPILE_TEMPLATE_MMXEXT 1
RENAME a ## _mmxext
ff_updateMMXDitherTables
#if HAVE_MMXEXT
yuv2yuvX_sse3
SCALE_FUNC \
void ff_hscale ## from_bpc ## to ## to_bpc ## _ ## filter_n ## _ ## opt( \
SwsContext *c, int16_t *data, \
int dstW, const uint8_t *src, \
const int16_t *filter, \
const int32_t *filterPos, int filterSize)
SCALE_FUNCS \
SCALE_FUNC(filter_n,  8, 15, opt); \
SCALE_FUNC(filter_n,  9, 15, opt); \
SCALE_FUNC(filter_n, 10, 15, opt); \
SCALE_FUNC(filter_n, 12, 15, opt); \
SCALE_FUNC(filter_n, 14, 15, opt); \
SCALE_FUNC(filter_n, 16, 15, opt); \
SCALE_FUNC(filter_n,  8, 19, opt); \
SCALE_FUNC(filter_n,  9, 19, opt); \
SCALE_FUNC(filter_n, 10, 19, opt); \
SCALE_FUNC(filter_n, 12, 19, opt); \
SCALE_FUNC(filter_n, 14, 19, opt); \
SCALE_FUNC(filter_n, 16, 19, opt)
SCALE_FUNCS_MMX \
SCALE_FUNCS(4, opt); \
SCALE_FUNCS(8, opt); \
SCALE_FUNCS(X, opt)
SCALE_FUNCS_SSE \
SCALE_FUNCS(4, opt); \
SCALE_FUNCS(8, opt); \
SCALE_FUNCS(X4, opt); \
SCALE_FUNCS(X8, opt)
SCALE_FUNCS_MMX;
SCALE_FUNCS_SSE;
SCALE_FUNCS_SSE(ssse3);
SCALE_FUNCS_SSE(sse4);
VSCALEX_FUNC \
void ff_yuv2planeX_ ## size ## _ ## opt(const int16_t *filter, int filterSize, \
const int16_t **src, uint8_t *dest, int dstW, \
const uint8_t *dither, int offset)
VSCALEX_FUNCS \
VSCALEX_FUNC(8,  opt); \
VSCALEX_FUNC(9,  opt); \
VSCALEX_FUNC(10, opt)
VSCALEX_FUNCS;
VSCALEX_FUNCS;
VSCALEX_FUNCS(sse4);
VSCALEX_FUNC(16, sse4);
VSCALEX_FUNCS(avx);
VSCALE_FUNC \
void ff_yuv2plane1_ ## size ## _ ## opt(const int16_t *src, uint8_t *dst, int dstW, \
const uint8_t *dither, int offset)
VSCALE_FUNCS \
VSCALE_FUNC(8,  opt1); \
VSCALE_FUNC(9,  opt2); \
VSCALE_FUNC(10, opt2); \
VSCALE_FUNC(16, opt1)
VSCALE_FUNCS;
VSCALE_FUNCS;
VSCALE_FUNC(16, sse4);
VSCALE_FUNCS(avx, avx);
INPUT_Y_FUNC \
void ff_ ## fmt ## ToY_  ## opt(uint8_t *dst, const uint8_t *src, \
const uint8_t *unused1, const uint8_t *unused2, \
int w, uint32_t *unused)
INPUT_UV_FUNC \
void ff_ ## fmt ## ToUV_ ## opt(uint8_t *dstU, uint8_t *dstV, \
const uint8_t *unused0, \
const uint8_t *src1, \
const uint8_t *src2, \
int w, uint32_t *unused)
INPUT_FUNC \
INPUT_Y_FUNC(fmt, opt); \
INPUT_UV_FUNC(fmt, opt)
INPUT_FUNCS \
INPUT_FUNC(uyvy, opt); \
INPUT_FUNC(yuyv, opt); \
INPUT_UV_FUNC(nv12, opt); \
INPUT_UV_FUNC(nv21, opt); \
INPUT_FUNC(rgba, opt); \
INPUT_FUNC(bgra, opt); \
INPUT_FUNC(argb, opt); \
INPUT_FUNC(abgr, opt); \
INPUT_FUNC(rgb24, opt); \
INPUT_FUNC(bgr24, opt)
INPUT_FUNCS;
INPUT_FUNCS;
INPUT_FUNCS(ssse3);
INPUT_FUNCS(avx);
ff_sws_init_swscale_x86
