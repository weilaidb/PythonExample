#if HAVE_ALTIVEC
#undef PROFILE_THE_BEAST
#undef INC_SCALING
typedef unsigned char ubyte;
typedef signed char   sbyte;
static const vector unsigned char
perm_rgb_0 = ,
perm_rgb_1 = ,
perm_rgb_2 = ,
perm_rgb_3 = ;
#define vec_merge3(x2, x1, x0, y0, y1, y2)     \
do  while (0)
#define vec_mstbgr24(x0, x1, x2, ptr)          \
do  while (0)
#define vec_mstrgb24(x0, x1, x2, ptr)          \
do  while (0)
#define vec_mstrgb32(T, x0, x1, x2, x3, ptr)                            \
do  while (0)
#if HAVE_BIGENDIAN
#define vec_unh(x)                                                      \
(vector signed short)                                               \
vec_perm(x, (__typeof__(x)) ,                              \
((vector unsigned char) ))
#define vec_unl(x)                                                      \
(vector signed short)                                               \
vec_perm(x, (__typeof__(x)) ,                              \
((vector unsigned char) ))
#define vec_unh(x)(vector signed short) vec_mergeh(x,(__typeof__(x)) )
#define vec_unl(x)(vector signed short) vec_mergel(x,(__typeof__(x)) )
#define vec_clip_s16(x)                                                 \
vec_max(vec_min(x, ((vector signed short) )),         \
((vector signed short) ))
#define vec_packclp(x, y)                                               \
(vector unsigned char)                                              \
vec_packs((vector unsigned short)                               \
vec_max(x, ((vector signed short) )),        \
(vector unsigned short)                               \
vec_max(y, ((vector signed short) )))
static inline void cvtyuvtoRGB(SwsContext *c, vector signed short Y,
vector signed short U, vector signed short V,
vector signed short *R, vector signed short *G,
vector signed short *B)
#define DEFCSP420_CVT(name, out_pixels)                                       \
static int altivec_ ## name(SwsContext *c, const unsigned char **in,          \
int *instrides, int srcSliceY, int srcSliceH,     \
unsigned char **oplanes, int *outstrides)         \
#define out_abgr(a, b, c, ptr)                                          \
vec_mstrgb32(__typeof__(a), ((__typeof__(a)) ), c, b, a, ptr)
#define out_bgra(a, b, c, ptr)                                          \
vec_mstrgb32(__typeof__(a), c, b, a, ((__typeof__(a)) ), ptr)
#define out_rgba(a, b, c, ptr)                                          \
vec_mstrgb32(__typeof__(a), a, b, c, ((__typeof__(a)) ), ptr)
#define out_argb(a, b, c, ptr)                                          \
vec_mstrgb32(__typeof__(a), ((__typeof__(a)) ), a, b, c, ptr)
#define out_rgb24(a, b, c, ptr) vec_mstrgb24(a, b, c, ptr)
#define out_bgr24(a, b, c, ptr) vec_mstbgr24(a, b, c, ptr)
DEFCSP420_CVT(yuv2_abgr,  out_abgr)
DEFCSP420_CVT(yuv2_bgra,  out_bgra)
DEFCSP420_CVT(yuv2_rgba,  out_rgba)
DEFCSP420_CVT(yuv2_argb,  out_argb)
DEFCSP420_CVT(yuv2_rgb24, out_rgb24)
DEFCSP420_CVT(yuv2_bgr24, out_bgr24)
static const vector unsigned char
demux_u = ,
demux_v = ,
demux_y = ;
static int altivec_uyvy_rgb32(SwsContext *c, const unsigned char **in,
int *instrides, int srcSliceY, int srcSliceH,
unsigned char **oplanes, int *outstrides)
av_cold SwsFunc ff_yuv2rgb_init_ppc(SwsContext *c)
av_cold void ff_yuv2rgb_init_tables_ppc(SwsContext *c,
const int inv_table[4],
int brightness,
int contrast,
int saturation)
#if HAVE_ALTIVEC
static av_always_inline void yuv2packedX_altivec(SwsContext *c,
const int16_t *lumFilter,
const int16_t **lumSrc,
int lumFilterSize,
const int16_t *chrFilter,
const int16_t **chrUSrc,
const int16_t **chrVSrc,
int chrFilterSize,
const int16_t **alpSrc,
uint8_t *dest,
int dstW, int dstY,
enum AVPixelFormat target)
#define YUV2PACKEDX_WRAPPER(suffix, pixfmt)                             \
void ff_yuv2 ## suffix ## _X_altivec(SwsContext *c,                     \
const int16_t *lumFilter,          \
const int16_t **lumSrc,            \
int lumFilterSize,                 \
const int16_t *chrFilter,          \
const int16_t **chrUSrc,           \
const int16_t **chrVSrc,           \
int chrFilterSize,                 \
const int16_t **alpSrc,            \
uint8_t *dest, int dstW, int dstY) \
YUV2PACKEDX_WRAPPER(abgr,  AV_PIX_FMT_ABGR);
YUV2PACKEDX_WRAPPER(bgra,  AV_PIX_FMT_BGRA);
YUV2PACKEDX_WRAPPER(argb,  AV_PIX_FMT_ARGB);
YUV2PACKEDX_WRAPPER(rgba,  AV_PIX_FMT_RGBA);
YUV2PACKEDX_WRAPPER(rgb24, AV_PIX_FMT_RGB24);
YUV2PACKEDX_WRAPPER(bgr24, AV_PIX_FMT_BGR24);
