#define SWSCALE_SWSCALE_INTERNAL_H
#if HAVE_ALTIVEC_H
STR AV_TOSTRING(s)
#define YUVRGB_TABLE_HEADROOM 512
#define YUVRGB_TABLE_LUMA_HEADROOM 512
#define MAX_FILTER_SIZE SWS_MAX_FILTER_SIZE
#define DITHER1XBPP
#if HAVE_BIGENDIAN
#define ALT32_CORR (-1)
#define ALT32_CORR   1
#if ARCH_X86_64
#   define APCK_PTR2  8
#   define APCK_COEF 16
#   define APCK_SIZE 24
#   define APCK_PTR2  4
#   define APCK_COEF  8
#   define APCK_SIZE 16
#define RETCODE_USE_CASCADE -12345
struct SwsContext;
typedef enum SwsDither  SwsDither;
typedef enum SwsAlphaBlend  SwsAlphaBlend;
typedef int (*SwsFunc)(struct SwsContext *context, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[]);
typedef void (*yuv2planar1_fn)(const int16_t *src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset);
typedef void (*yuv2planarX_fn)(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset);
typedef void (*yuv2interleavedX_fn)(struct SwsContext *c,
const int16_t *chrFilter,
int chrFilterSize,
const int16_t **chrUSrc,
const int16_t **chrVSrc,
uint8_t *dest, int dstW);
typedef void (*yuv2packed1_fn)(struct SwsContext *c, const int16_t *lumSrc,
const int16_t *chrUSrc[2],
const int16_t *chrVSrc[2],
const int16_t *alpSrc, uint8_t *dest,
int dstW, int uvalpha, int y);
typedef void (*yuv2packed2_fn)(struct SwsContext *c, const int16_t *lumSrc[2],
const int16_t *chrUSrc[2],
const int16_t *chrVSrc[2],
const int16_t *alpSrc[2],
uint8_t *dest,
int dstW, int yalpha, int uvalpha, int y);
typedef void (*yuv2packedX_fn)(struct SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter,
const int16_t **chrUSrc,
const int16_t **chrVSrc, int chrFilterSize,
const int16_t **alpSrc, uint8_t *dest,
int dstW, int y);
typedef void (*yuv2anyX_fn)(struct SwsContext *c, const int16_t *lumFilter,
const int16_t **lumSrc, int lumFilterSize,
const int16_t *chrFilter,
const int16_t **chrUSrc,
const int16_t **chrVSrc, int chrFilterSize,
const int16_t **alpSrc, uint8_t **dest,
int dstW, int y);
struct SwsSlice;
struct SwsFilterDescriptor;
typedef struct SwsContext  SwsContext;
ff_yuv2rgb_get_func_ptr;
ff_yuv2rgb_c_init_tables;
ff_yuv2rgb_init_tables_ppc;
ff_updateMMXDitherTables;
ff_sws_init_range_convert;
ff_yuv2rgb_init_x86;
ff_yuv2rgb_init_ppc;
is16BPS
is9_OR_10BPS
isNBPS is9_OR_10BPS(x)
isBE
isYUV
isPlanarYUV
isRGB
isRGBinInt \
(           \
(x) == AV_PIX_FMT_RGB48BE     ||  \
(x) == AV_PIX_FMT_RGB48LE     ||  \
(x) == AV_PIX_FMT_RGB32       ||  \
(x) == AV_PIX_FMT_RGB32_1     ||  \
(x) == AV_PIX_FMT_RGB24       ||  \
(x) == AV_PIX_FMT_RGB565BE    ||  \
(x) == AV_PIX_FMT_RGB565LE    ||  \
(x) == AV_PIX_FMT_RGB555BE    ||  \
(x) == AV_PIX_FMT_RGB555LE    ||  \
(x) == AV_PIX_FMT_RGB444BE    ||  \
(x) == AV_PIX_FMT_RGB444LE    ||  \
(x) == AV_PIX_FMT_RGB8        ||  \
(x) == AV_PIX_FMT_RGB4        ||  \
(x) == AV_PIX_FMT_RGB4_BYTE   ||  \
(x) == AV_PIX_FMT_RGBA64BE    ||  \
(x) == AV_PIX_FMT_RGBA64LE    ||  \
(x) == AV_PIX_FMT_MONOBLACK   ||  \
(x) == AV_PIX_FMT_MONOWHITE   \
)
isBGRinInt \
(           \
(x) == AV_PIX_FMT_BGR48BE     ||  \
(x) == AV_PIX_FMT_BGR48LE     ||  \
(x) == AV_PIX_FMT_BGR32       ||  \
(x) == AV_PIX_FMT_BGR32_1     ||  \
(x) == AV_PIX_FMT_BGR24       ||  \
(x) == AV_PIX_FMT_BGR565BE    ||  \
(x) == AV_PIX_FMT_BGR565LE    ||  \
(x) == AV_PIX_FMT_BGR555BE    ||  \
(x) == AV_PIX_FMT_BGR555LE    ||  \
(x) == AV_PIX_FMT_BGR444BE    ||  \
(x) == AV_PIX_FMT_BGR444LE    ||  \
(x) == AV_PIX_FMT_BGR8        ||  \
(x) == AV_PIX_FMT_BGR4        ||  \
(x) == AV_PIX_FMT_BGR4_BYTE   ||  \
(x) == AV_PIX_FMT_BGRA64BE    ||  \
(x) == AV_PIX_FMT_BGRA64LE    ||  \
(x) == AV_PIX_FMT_MONOBLACK   ||  \
(x) == AV_PIX_FMT_MONOWHITE   \
)
isRGBinBytes (           \
(x) == AV_PIX_FMT_RGB48BE     \
|| (x) == AV_PIX_FMT_RGB48LE     \
|| (x) == AV_PIX_FMT_RGBA64BE    \
|| (x) == AV_PIX_FMT_RGBA64LE    \
|| (x) == AV_PIX_FMT_RGBA        \
|| (x) == AV_PIX_FMT_ARGB        \
|| (x) == AV_PIX_FMT_RGB24       \
)
isBGRinBytes (           \
(x) == AV_PIX_FMT_BGR48BE     \
|| (x) == AV_PIX_FMT_BGR48LE     \
|| (x) == AV_PIX_FMT_BGRA64BE    \
|| (x) == AV_PIX_FMT_BGRA64LE    \
|| (x) == AV_PIX_FMT_BGRA        \
|| (x) == AV_PIX_FMT_ABGR        \
|| (x) == AV_PIX_FMT_BGR24       \
)
isBayer ( \
(x)==AV_PIX_FMT_BAYER_BGGR8    \
|| (x)==AV_PIX_FMT_BAYER_BGGR16LE \
|| (x)==AV_PIX_FMT_BAYER_BGGR16BE \
|| (x)==AV_PIX_FMT_BAYER_RGGB8    \
|| (x)==AV_PIX_FMT_BAYER_RGGB16LE \
|| (x)==AV_PIX_FMT_BAYER_RGGB16BE \
|| (x)==AV_PIX_FMT_BAYER_GBRG8    \
|| (x)==AV_PIX_FMT_BAYER_GBRG16LE \
|| (x)==AV_PIX_FMT_BAYER_GBRG16BE \
|| (x)==AV_PIX_FMT_BAYER_GRBG8    \
|| (x)==AV_PIX_FMT_BAYER_GRBG16LE \
|| (x)==AV_PIX_FMT_BAYER_GRBG16BE \
)
isAnyRGB \
(           \
isBayer(x)          ||    \
isRGBinInt(x)       ||    \
isBGRinInt(x)       ||    \
isRGB(x)      \
)
isALPHA
#if 1
isPacked         (       \
(x)==AV_PIX_FMT_PAL8        \
|| (x)==AV_PIX_FMT_YUYV422     \
|| (x)==AV_PIX_FMT_YVYU422     \
|| (x)==AV_PIX_FMT_UYVY422     \
|| (x)==AV_PIX_FMT_YA8       \
|| (x)==AV_PIX_FMT_YA16LE      \
|| (x)==AV_PIX_FMT_YA16BE      \
|| (x)==AV_PIX_FMT_AYUV64LE    \
|| (x)==AV_PIX_FMT_AYUV64BE    \
||  isRGBinInt(x)           \
||  isBGRinInt(x)           \
)
isPacked
isPlanar
isPackedRGB
isPlanarRGB
usePal
extern const uint64_t ff_dither4[2];
extern const uint64_t ff_dither8[2];
extern const uint8_t ff_dither_2x2_4[3][8];
extern const uint8_t ff_dither_2x2_8[3][8];
extern const uint8_t ff_dither_4x4_16[5][8];
extern const uint8_t ff_dither_8x8_32[9][8];
extern const uint8_t ff_dither_8x8_73[9][8];
extern const uint8_t ff_dither_8x8_128[9][8];
extern const uint8_t ff_dither_8x8_220[9][8];
extern const int32_t ff_yuv2rgb_coeffs[11][4];
extern const AVClass ff_sws_context_class;
ff_get_unscaled_swscale;
ff_get_unscaled_swscale_ppc;
ff_get_unscaled_swscale_arm;
ff_get_unscaled_swscale_aarch64;
ff_getSwsFunc;
ff_sws_init_input_funcs;
ff_sws_init_output_funcs;
ff_sws_init_swscale_ppc;
ff_sws_init_swscale_x86;
ff_sws_init_swscale_aarch64;
ff_sws_init_swscale_arm;
ff_hyscale_fast_c;
ff_hcscale_fast_c;
ff_init_hscaler_mmxext;
ff_hyscale_fast_mmxext;
ff_hcscale_fast_mmxext;
*sws_alloc_set_opts;
ff_sws_alphablendaway;
fillPlane16
#define MAX_SLICE_PLANES 4
typedef struct SwsPlane
SwsPlane;
typedef struct SwsSlice
SwsSlice;
typedef struct SwsFilterDescriptor
SwsFilterDescriptor;
ff_init_slice_from_src;
ff_init_filters;
ff_free_filters;
ff_rotate_slice;
ff_init_gamma_convert;
ff_init_desc_fmt_convert;
ff_init_desc_hscale;
ff_init_desc_cfmt_convert;
ff_init_desc_chscale;
ff_init_desc_no_chr;
ff_init_vscale;
ff_init_vscale_pfn;
#define MAX_LINES_AHEAD 4
