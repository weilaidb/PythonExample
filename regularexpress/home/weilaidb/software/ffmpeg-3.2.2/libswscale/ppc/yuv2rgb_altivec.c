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
vec_merge3     \
do  while (0)
vec_mstbgr24          \
do  while (0)
vec_mstrgb24          \
do  while (0)
vec_mstrgb32                            \
do  while (0)
#if HAVE_BIGENDIAN
vec_unh                                                      \
(vector signed short)                                               \
vec_perm(x, (__typeof__(x)) ,                              \
((vector unsigned char) ))
vec_unl                                                      \
(vector signed short)                                               \
vec_perm(x, (__typeof__(x)) ,                              \
((vector unsigned char) ))
vec_unh(vector signed short) vec_mergeh(x,(__typeof__(x)) )
vec_unl(vector signed short) vec_mergel(x,(__typeof__(x)) )
vec_clip_s16                                                 \
vec_max(vec_min(x, ((vector signed short) )),         \
((vector signed short) ))
vec_packclp                                               \
(vector unsigned char)                                              \
vec_packs((vector unsigned short)                               \
vec_max(x, ((vector signed short) )),        \
(vector unsigned short)                               \
vec_max(y, ((vector signed short) )))
cvtyuvtoRGB
DEFCSP420_CVT                                       \
static int altivec_ ## name(SwsContext *c, const unsigned char **in,          \
int *instrides, int srcSliceY, int srcSliceH,     \
unsigned char **oplanes, int *outstrides)         \
out_abgr                                          \
vec_mstrgb32(__typeof__(a), ((__typeof__(a)) ), c, b, a, ptr)
out_bgra                                          \
vec_mstrgb32(__typeof__(a), c, b, a, ((__typeof__(a)) ), ptr)
out_rgba                                          \
vec_mstrgb32(__typeof__(a), a, b, c, ((__typeof__(a)) ), ptr)
out_argb                                          \
vec_mstrgb32(__typeof__(a), ((__typeof__(a)) ), a, b, c, ptr)
out_rgb24 vec_mstrgb24(a, b, c, ptr)
out_bgr24 vec_mstbgr24(a, b, c, ptr)
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
altivec_uyvy_rgb32
ff_yuv2rgb_init_ppc
ff_yuv2rgb_init_tables_ppc
#if HAVE_ALTIVEC
yuv2packedX_altivec
YUV2PACKEDX_WRAPPER                             \
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
