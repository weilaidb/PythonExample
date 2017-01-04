#define YUV_TO_RGB_TABLE                                                                    \
c->yuv2rgb_v2r_coeff,                                                               \
c->yuv2rgb_u2g_coeff,                                                               \
c->yuv2rgb_v2g_coeff,                                                               \
c->yuv2rgb_u2b_coeff,                                                               \
#define DECLARE_FF_YUVX_TO_RGBX_FUNCS(ifmt, ofmt)                                           \
int ff_##ifmt##_to_##ofmt##_neon(int w, int h,                                              \
uint8_t *dst, int linesize,                                \
const uint8_t *srcY, int linesizeY,                        \
const uint8_t *srcU, int linesizeU,                        \
const uint8_t *srcV, int linesizeV,                        \
const int16_t *table,                                      \
int y_offset,                                              \
int y_coeff);                                              \
\
static int ifmt##_to_##ofmt##_neon_wrapper(SwsContext *c, const uint8_t *src[],             \
int srcStride[], int srcSliceY, int srcSliceH,   \
uint8_t *dst[], int dstStride[])                                                                                            \
#define DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuvx)                                             \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, argb)                                                   \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, rgba)                                                   \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, abgr)                                                   \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, bgra)                                                   \
DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuv420p)
DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuv422p)
#define DECLARE_FF_NVX_TO_RGBX_FUNCS(ifmt, ofmt)                                            \
int ff_##ifmt##_to_##ofmt##_neon(int w, int h,                                              \
uint8_t *dst, int linesize,                                \
const uint8_t *srcY, int linesizeY,                        \
const uint8_t *srcC, int linesizeC,                        \
const int16_t *table,                                      \
int y_offset,                                              \
int y_coeff);                                              \
\
static int ifmt##_to_##ofmt##_neon_wrapper(SwsContext *c, const uint8_t *src[],             \
int srcStride[], int srcSliceY, int srcSliceH,   \
uint8_t *dst[], int dstStride[])                                                                                            \
#define DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nvx)                                               \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, argb)                                                     \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, rgba)                                                     \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, abgr)                                                     \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, bgra)                                                     \
DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nv12)
DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nv21)
#define SET_FF_NVX_TO_RGBX_FUNC(ifmt, IFMT, ofmt, OFMT, accurate_rnd) do  while (0)
#define SET_FF_NVX_TO_ALL_RGBX_FUNC(nvx, NVX, accurate_rnd) do  while (0)
static void get_unscaled_swscale_neon(SwsContext *c)
void ff_get_unscaled_swscale_aarch64(SwsContext *c)
