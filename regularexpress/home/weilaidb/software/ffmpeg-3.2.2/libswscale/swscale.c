DECLARE_ALIGNED(8, const uint8_t, ff_dither_8x8_128)[9][8] = ;
DECLARE_ALIGNED(8, static const uint8_t, sws_pb_64)[8] = ;
static av_always_inline void fillPlane(uint8_t *plane, int stride, int width,
int height, int y, uint8_t val)
static void hScale16To19_c(SwsContext *c, int16_t *_dst, int dstW,
const uint8_t *_src, const int16_t *filter,
const int32_t *filterPos, int filterSize)
static void hScale16To15_c(SwsContext *c, int16_t *dst, int dstW,
const uint8_t *_src, const int16_t *filter,
const int32_t *filterPos, int filterSize)
static void hScale8To15_c(SwsContext *c, int16_t *dst, int dstW,
const uint8_t *src, const int16_t *filter,
const int32_t *filterPos, int filterSize)
static void hScale8To19_c(SwsContext *c, int16_t *_dst, int dstW,
const uint8_t *src, const int16_t *filter,
const int32_t *filterPos, int filterSize)
static void chrRangeToJpeg_c(int16_t *dstU, int16_t *dstV, int width)
static void chrRangeFromJpeg_c(int16_t *dstU, int16_t *dstV, int width)
static void lumRangeToJpeg_c(int16_t *dst, int width)
static void lumRangeFromJpeg_c(int16_t *dst, int width)
static void chrRangeToJpeg16_c(int16_t *_dstU, int16_t *_dstV, int width)
static void chrRangeFromJpeg16_c(int16_t *_dstU, int16_t *_dstV, int width)
static void lumRangeToJpeg16_c(int16_t *_dst, int width)
static void lumRangeFromJpeg16_c(int16_t *_dst, int width)
#define DEBUG_SWSCALE_BUFFERS 0
#define DEBUG_BUFFERS(...)                      \
if (DEBUG_SWSCALE_BUFFERS)                  \
av_log(c, AV_LOG_DEBUG, __VA_ARGS__)
static int swscale(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY,
int srcSliceH, uint8_t *dst[], int dstStride[])
av_cold void ff_sws_init_range_convert(SwsContext *c)
static av_cold void sws_init_swscale(SwsContext *c)
SwsFunc ff_getSwsFunc(SwsContext *c)
static void reset_ptr(const uint8_t *src[], enum AVPixelFormat format)
static int check_image_pointers(const uint8_t * const data[4], enum AVPixelFormat pix_fmt,
const int linesizes[4])
static void xyz12Torgb48(struct SwsContext *c, uint16_t *dst,
const uint16_t *src, int stride, int h)
static void rgb48Toxyz12(struct SwsContext *c, uint16_t *dst,
const uint16_t *src, int stride, int h)
int attribute_align_arg sws_scale(struct SwsContext *c,
const uint8_t * const srcSlice[],
const int srcStride[], int srcSliceY,
int srcSliceH, uint8_t *const dst[],
const int dstStride[])
