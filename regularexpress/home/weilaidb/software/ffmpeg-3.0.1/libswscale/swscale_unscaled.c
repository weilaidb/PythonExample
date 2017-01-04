DECLARE_ALIGNED(8, static const uint8_t, dithers)[8][8][8]=;
static const uint16_t dither_scale[15][16]=;
static void fillPlane(uint8_t *plane, int stride, int width, int height, int y,
uint8_t val)
static void copyPlane(const uint8_t *src, int srcStride,
int srcSliceY, int srcSliceH, int width,
uint8_t *dst, int dstStride)
static int planarToNv12Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY,
int srcSliceH, uint8_t *dstParam[],
int dstStride[])
static int nv12ToPlanarWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY,
int srcSliceH, uint8_t *dstParam[],
int dstStride[])
static int planarToYuy2Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int planarToUyvyWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int yuv422pToYuy2Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int yuv422pToUyvyWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int yuyvToYuv420Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int yuyvToYuv422Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int uyvyToYuv420Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static int uyvyToYuv422Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dstParam[], int dstStride[])
static void gray8aToPacked32(const uint8_t *src, uint8_t *dst, int num_pixels,
const uint8_t *palette)
static void gray8aToPacked32_1(const uint8_t *src, uint8_t *dst, int num_pixels,
const uint8_t *palette)
static void gray8aToPacked24(const uint8_t *src, uint8_t *dst, int num_pixels,
const uint8_t *palette)
static int packed_16bpc_bswap(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static int palToRgbWrapper(SwsContext *c, const uint8_t *src[], int srcStride[],
int srcSliceY, int srcSliceH, uint8_t *dst[],
int dstStride[])
static void packed16togbra16(const uint8_t *src, int srcStride,
uint16_t *dst[], int dstStride[], int srcSliceH,
int src_alpha, int swap, int shift, int width)
static int Rgb16ToPlanarRgb16Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static void gbr16ptopacked16(const uint16_t *src[], int srcStride[],
uint8_t *dst, int dstStride, int srcSliceH,
int alpha, int swap, int bpp, int width)
static int planarRgb16ToRgb16Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static void gbr24ptopacked24(const uint8_t *src[], int srcStride[],
uint8_t *dst, int dstStride, int srcSliceH,
int width)
static void gbr24ptopacked32(const uint8_t *src[], int srcStride[],
uint8_t *dst, int dstStride, int srcSliceH,
int alpha_first, int width)
static int planarRgbToRgbWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static int planarRgbToplanarRgbWrapper(SwsContext *c,
const uint8_t *src[], int srcStride[],
int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static void packedtogbr24p(const uint8_t *src, int srcStride,
uint8_t *dst[], int dstStride[], int srcSliceH,
int alpha_first, int inc_size, int width)
static int rgbToPlanarRgbWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#define BAYER_GBRG
#define BAYER_8
#define BAYER_RENAME(x) bayer_gbrg8_to_##x
#define BAYER_GBRG
#define BAYER_16LE
#define BAYER_RENAME(x) bayer_gbrg16le_to_##x
#define BAYER_GBRG
#define BAYER_16BE
#define BAYER_RENAME(x) bayer_gbrg16be_to_##x
#define BAYER_GRBG
#define BAYER_8
#define BAYER_RENAME(x) bayer_grbg8_to_##x
#define BAYER_GRBG
#define BAYER_16LE
#define BAYER_RENAME(x) bayer_grbg16le_to_##x
#define BAYER_GRBG
#define BAYER_16BE
#define BAYER_RENAME(x) bayer_grbg16be_to_##x
#define BAYER_BGGR
#define BAYER_8
#define BAYER_RENAME(x) bayer_bggr8_to_##x
#define BAYER_BGGR
#define BAYER_16LE
#define BAYER_RENAME(x) bayer_bggr16le_to_##x
#define BAYER_BGGR
#define BAYER_16BE
#define BAYER_RENAME(x) bayer_bggr16be_to_##x
#define BAYER_RGGB
#define BAYER_8
#define BAYER_RENAME(x) bayer_rggb8_to_##x
#define BAYER_RGGB
#define BAYER_16LE
#define BAYER_RENAME(x) bayer_rggb16le_to_##x
#define BAYER_RGGB
#define BAYER_16BE
#define BAYER_RENAME(x) bayer_rggb16be_to_##x
static int bayer_to_rgb24_wrapper(SwsContext *c, const uint8_t* src[], int srcStride[], int srcSliceY,
int srcSliceH, uint8_t* dst[], int dstStride[])
static int bayer_to_yv12_wrapper(SwsContext *c, const uint8_t* src[], int srcStride[], int srcSliceY,
int srcSliceH, uint8_t* dst[], int dstStride[])
#define isRGBA32(x) (            \
(x) == AV_PIX_FMT_ARGB   \
|| (x) == AV_PIX_FMT_RGBA   \
|| (x) == AV_PIX_FMT_BGRA   \
|| (x) == AV_PIX_FMT_ABGR   \
)
#define isRGBA64(x) (                \
(x) == AV_PIX_FMT_RGBA64LE   \
|| (x) == AV_PIX_FMT_RGBA64BE   \
|| (x) == AV_PIX_FMT_BGRA64LE   \
|| (x) == AV_PIX_FMT_BGRA64BE   \
)
#define isRGB48(x) (                \
(x) == AV_PIX_FMT_RGB48LE   \
|| (x) == AV_PIX_FMT_RGB48BE   \
|| (x) == AV_PIX_FMT_BGR48LE   \
|| (x) == AV_PIX_FMT_BGR48BE   \
)
typedef void (* rgbConvFn) (const uint8_t *, uint8_t *, int);
static rgbConvFn findRgbConvFn(SwsContext *c)
static int rgbToRgbWrapper(SwsContext *c, const uint8_t *src[], int srcStride[],
int srcSliceY, int srcSliceH, uint8_t *dst[],
int dstStride[])
static int bgr24ToYv12Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static int yvu9ToYv12Wrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
static int packedCopyWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#define DITHER_COPY(dst, dstStride, src, srcStride, bswap, dbswap)\
uint16_t scale= dither_scale[dst_depth-1][src_depth-1];\
int shift= src_depth-dst_depth + dither_scale[src_depth-2][dst_depth-1];\
for (i = 0; i < height; i++)
static int planarCopyWrapper(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY, int srcSliceH,
uint8_t *dst[], int dstStride[])
#define IS_DIFFERENT_ENDIANESS(src_fmt, dst_fmt, pix_fmt)          \
((src_fmt == pix_fmt ## BE && dst_fmt == pix_fmt ## LE) ||     \
(src_fmt == pix_fmt ## LE && dst_fmt == pix_fmt ## BE))
void ff_get_unscaled_swscale(SwsContext *c)
void sws_convertPalette8ToPacked32(const uint8_t *src, uint8_t *dst,
int num_pixels, const uint8_t *palette)
void sws_convertPalette8ToPacked24(const uint8_t *src, uint8_t *dst,
int num_pixels, const uint8_t *palette)
