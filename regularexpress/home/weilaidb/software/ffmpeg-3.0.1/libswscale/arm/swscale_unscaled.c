#define YUV_TO_RGB_TABLE(precision)                                                         \
c->yuv2rgb_v2r_coeff / ((precision) == 16 ? 1 << 7 : 1),                            \
c->yuv2rgb_u2g_coeff / ((precision) == 16 ? 1 << 7 : 1),                            \
c->yuv2rgb_v2g_coeff / ((precision) == 16 ? 1 << 7 : 1),                            \
c->yuv2rgb_u2b_coeff / ((precision) == 16 ? 1 << 7 : 1),                            \
#define DECLARE_FF_YUVX_TO_RGBX_FUNCS(ifmt, ofmt, precision)                                \
int ff_##ifmt##_to_##ofmt##_neon_##precision(int w, int h,                                  \
uint8_t *dst, int linesize,                                \
const uint8_t *srcY, int linesizeY,                        \
const uint8_t *srcU, int linesizeU,                        \
const uint8_t *srcV, int linesizeV,                        \
const int16_t *table,                                      \
int y_offset,                                              \
int y_coeff);                                              \
\
static int ifmt##_to_##ofmt##_neon_wrapper_##precision(SwsContext *c, const uint8_t *src[], \
int srcStride[], int srcSliceY, int srcSliceH,   \
uint8_t *dst[], int dstStride[])                                                                                            \
#define DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuvx, precision)                                  \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, argb, precision)                                        \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, rgba, precision)                                        \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, abgr, precision)                                        \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, bgra, precision)                                        \
#define DECLARE_FF_YUVX_TO_ALL_RGBX_ALL_PRECISION_FUNCS(yuvx)                               \
DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuvx, 16)                                                 \
DECLARE_FF_YUVX_TO_ALL_RGBX_ALL_PRECISION_FUNCS(yuv420p)
DECLARE_FF_YUVX_TO_ALL_RGBX_ALL_PRECISION_FUNCS(yuv422p)
#define DECLARE_FF_NVX_TO_RGBX_FUNCS(ifmt, ofmt, precision)                                 \
int ff_##ifmt##_to_##ofmt##_neon_##precision(int w, int h,                                  \
uint8_t *dst, int linesize,                                \
const uint8_t *srcY, int linesizeY,                        \
const uint8_t *srcC, int linesizeC,                        \
const int16_t *table,                                      \
int y_offset,                                              \
int y_coeff);                                              \
\
static int ifmt##_to_##ofmt##_neon_wrapper_##precision(SwsContext *c, const uint8_t *src[], \
int srcStride[], int srcSliceY, int srcSliceH,   \
uint8_t *dst[], int dstStride[])                                                                                            \
#define DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nvx, precision)                                    \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, argb, precision)                                          \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, rgba, precision)                                          \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, abgr, precision)                                          \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, bgra, precision)                                          \
#define DECLARE_FF_NVX_TO_ALL_RGBX_ALL_PRECISION_FUNCS(nvx)                                 \
DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nvx, 16)                                                   \
DECLARE_FF_NVX_TO_ALL_RGBX_ALL_PRECISION_FUNCS(nv12)
DECLARE_FF_NVX_TO_ALL_RGBX_ALL_PRECISION_FUNCS(nv21)
#define SET_FF_NVX_TO_RGBX_FUNC(ifmt, IFMT, ofmt, OFMT, accurate_rnd) do  while (0)
#define SET_FF_NVX_TO_ALL_RGBX_FUNC(nvx, NVX, accurate_rnd) do  while (0)
static void get_unscaled_swscale_neon(SwsContext *c)
void ff_get_unscaled_swscale_arm(SwsContext *c)
