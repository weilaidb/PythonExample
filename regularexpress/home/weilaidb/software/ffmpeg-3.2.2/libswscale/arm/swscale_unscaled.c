rgbx_to_nv12_neon_32;
rgbx_to_nv12_neon_16;
rgbx_to_nv12_neon_32_wrapper
rgbx_to_nv12_neon_16_wrapper
#define YUV_TO_RGB_TABLE                                                                    \
c->yuv2rgb_v2r_coeff,                                                               \
c->yuv2rgb_u2g_coeff,                                                               \
c->yuv2rgb_v2g_coeff,                                                               \
c->yuv2rgb_u2b_coeff,                                                               \
DECLARE_FF_YUVX_TO_RGBX_FUNCS                                           \
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
DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS                                             \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, argb)                                                   \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, rgba)                                                   \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, abgr)                                                   \
DECLARE_FF_YUVX_TO_RGBX_FUNCS(yuvx, bgra)                                                   \
DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuv420p)
DECLARE_FF_YUVX_TO_ALL_RGBX_FUNCS(yuv422p)
DECLARE_FF_NVX_TO_RGBX_FUNCS                                            \
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
DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS                                               \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, argb)                                                     \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, rgba)                                                     \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, abgr)                                                     \
DECLARE_FF_NVX_TO_RGBX_FUNCS(nvx, bgra)                                                     \
DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nv12)
DECLARE_FF_NVX_TO_ALL_RGBX_FUNCS(nv21)
SET_FF_NVX_TO_RGBX_FUNC do  while (0)
SET_FF_NVX_TO_ALL_RGBX_FUNC do  while (0)
get_unscaled_swscale_neon
ff_get_unscaled_swscale_arm
