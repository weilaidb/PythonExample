#define SWSCALE_SWSCALE_INTERNAL_H
#if HAVE_ALTIVEC_H
#define STR(s) AV_TOSTRING(s)
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
SwsFunc ff_yuv2rgb_get_func_ptr(SwsContext *c);
int ff_yuv2rgb_c_init_tables(SwsContext *c, const int inv_table[4],
int fullRange, int brightness,
int contrast, int saturation);
void ff_yuv2rgb_init_tables_ppc(SwsContext *c, const int inv_table[4],
int brightness, int contrast, int saturation);
void ff_updateMMXDitherTables(SwsContext *c, int dstY, int lumBufIndex, int chrBufIndex,
int lastInLumBuf, int lastInChrBuf);
av_cold void ff_sws_init_range_convert(SwsContext *c);
SwsFunc ff_yuv2rgb_init_x86(SwsContext *c);
SwsFunc ff_yuv2rgb_init_ppc(SwsContext *c);
static av_always_inline int is16BPS(enum AVPixelFormat pix_fmt)
static av_always_inline int is9_OR_10BPS(enum AVPixelFormat pix_fmt)
#define isNBPS(x) is9_OR_10BPS(x)
static av_always_inline int isBE(enum AVPixelFormat pix_fmt)
static av_always_inline int isYUV(enum AVPixelFormat pix_fmt)
static av_always_inline int isPlanarYUV(enum AVPixelFormat pix_fmt)
static av_always_inline int isRGB(enum AVPixelFormat pix_fmt)
#define isRGBinInt(x) \
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
#define isBGRinInt(x) \
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
#define isRGBinBytes(x) (           \
(x) == AV_PIX_FMT_RGB48BE     \
|| (x) == AV_PIX_FMT_RGB48LE     \
|| (x) == AV_PIX_FMT_RGBA64BE    \
|| (x) == AV_PIX_FMT_RGBA64LE    \
|| (x) == AV_PIX_FMT_RGBA        \
|| (x) == AV_PIX_FMT_ARGB        \
|| (x) == AV_PIX_FMT_RGB24       \
)
#define isBGRinBytes(x) (           \
(x) == AV_PIX_FMT_BGR48BE     \
|| (x) == AV_PIX_FMT_BGR48LE     \
|| (x) == AV_PIX_FMT_BGRA64BE    \
|| (x) == AV_PIX_FMT_BGRA64LE    \
|| (x) == AV_PIX_FMT_BGRA        \
|| (x) == AV_PIX_FMT_ABGR        \
|| (x) == AV_PIX_FMT_BGR24       \
)
#define isBayer(x) ( \
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
#define isAnyRGB(x) \
(           \
isBayer(x)          ||    \
isRGBinInt(x)       ||    \
isBGRinInt(x)       ||    \
isRGB(x)      \
)
static av_always_inline int isALPHA(enum AVPixelFormat pix_fmt)
#if 1
#define isPacked(x)         (       \
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
static av_always_inline int isPacked(enum AVPixelFormat pix_fmt)
static av_always_inline int isPlanar(enum AVPixelFormat pix_fmt)
static av_always_inline int isPackedRGB(enum AVPixelFormat pix_fmt)
static av_always_inline int isPlanarRGB(enum AVPixelFormat pix_fmt)
static av_always_inline int usePal(enum AVPixelFormat pix_fmt)
extern const uint64_t ff_dither4[2];
extern const uint64_t ff_dither8[2];
extern const uint8_t ff_dither_2x2_4[3][8];
extern const uint8_t ff_dither_2x2_8[3][8];
extern const uint8_t ff_dither_4x4_16[5][8];
extern const uint8_t ff_dither_8x8_32[9][8];
extern const uint8_t ff_dither_8x8_73[9][8];
extern const uint8_t ff_dither_8x8_128[9][8];
extern const uint8_t ff_dither_8x8_220[9][8];
extern const int32_t ff_yuv2rgb_coeffs[8][4];
extern const AVClass ff_sws_context_class;
void ff_get_unscaled_swscale(SwsContext *c);
void ff_get_unscaled_swscale_ppc(SwsContext *c);
void ff_get_unscaled_swscale_arm(SwsContext *c);
SwsFunc ff_getSwsFunc(SwsContext *c);
void ff_sws_init_input_funcs(SwsContext *c);
void ff_sws_init_output_funcs(SwsContext *c,
yuv2planar1_fn *yuv2plane1,
yuv2planarX_fn *yuv2planeX,
yuv2interleavedX_fn *yuv2nv12cX,
yuv2packed1_fn *yuv2packed1,
yuv2packed2_fn *yuv2packed2,
yuv2packedX_fn *yuv2packedX,
yuv2anyX_fn *yuv2anyX);
void ff_sws_init_swscale_ppc(SwsContext *c);
void ff_sws_init_swscale_x86(SwsContext *c);
void ff_hyscale_fast_c(SwsContext *c, int16_t *dst, int dstWidth,
const uint8_t *src, int srcW, int xInc);
void ff_hcscale_fast_c(SwsContext *c, int16_t *dst1, int16_t *dst2,
int dstWidth, const uint8_t *src1,
const uint8_t *src2, int srcW, int xInc);
int ff_init_hscaler_mmxext(int dstW, int xInc, uint8_t *filterCode,
int16_t *filter, int32_t *filterPos,
int numSplits);
void ff_hyscale_fast_mmxext(SwsContext *c, int16_t *dst,
int dstWidth, const uint8_t *src,
int srcW, int xInc);
void ff_hcscale_fast_mmxext(SwsContext *c, int16_t *dst1, int16_t *dst2,
int dstWidth, const uint8_t *src1,
const uint8_t *src2, int srcW, int xInc);
struct SwsContext *sws_alloc_set_opts(int srcW, int srcH, enum AVPixelFormat srcFormat,
int dstW, int dstH, enum AVPixelFormat dstFormat,
int flags, const double *param);
int ff_sws_alphablendaway(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[]);
static inline void fillPlane16(uint8_t *plane, int stride, int width, int height, int y,
int alpha, int bits, const int big_endian)
#define MAX_SLICE_PLANES 4
typedef struct SwsPlane
SwsPlane;
typedef struct SwsSlice
SwsSlice;
typedef struct SwsFilterDescriptor
SwsFilterDescriptor;
int ff_init_slice_from_src(SwsSlice * s, uint8_t *src[4], int stride[4], int srcW, int lumY, int lumH, int chrY, int chrH, int relative);
int ff_init_filters(SwsContext *c);
int ff_free_filters(SwsContext *c);
int ff_rotate_slice(SwsSlice *s, int lum, int chr);
int ff_init_gamma_convert(SwsFilterDescriptor *desc, SwsSlice * src, uint16_t *table);
int ff_init_desc_fmt_convert(SwsFilterDescriptor *desc, SwsSlice * src, SwsSlice *dst, uint32_t *pal);
int ff_init_desc_hscale(SwsFilterDescriptor *desc, SwsSlice *src, SwsSlice *dst, uint16_t *filter, int * filter_pos, int filter_size, int xInc);
int ff_init_desc_cfmt_convert(SwsFilterDescriptor *desc, SwsSlice * src, SwsSlice *dst, uint32_t *pal);
int ff_init_desc_chscale(SwsFilterDescriptor *desc, SwsSlice *src, SwsSlice *dst, uint16_t *filter, int * filter_pos, int filter_size, int xInc);
int ff_init_desc_no_chr(SwsFilterDescriptor *desc, SwsSlice * src, SwsSlice *dst);
int ff_init_vscale(SwsContext *c, SwsFilterDescriptor *desc, SwsSlice *src, SwsSlice *dst);
void ff_init_vscale_pfn(SwsContext *c, yuv2planar1_fn yuv2plane1, yuv2planarX_fn yuv2planeX,
yuv2interleavedX_fn yuv2nv12cX, yuv2packed1_fn yuv2packed1, yuv2packed2_fn yuv2packed2,
yuv2packedX_fn yuv2packedX, yuv2anyX_fn yuv2anyX, int use_mmx);
#define MAX_LINES_AHEAD 4
#define NEW_FILTER
