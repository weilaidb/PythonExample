#if HAVE_MMX
#   include "x86/pixel.h"
#   include "x86/predict.h"
#if ARCH_PPC
#   include "ppc/pixel.h"
#if ARCH_ARM
#   include "arm/pixel.h"
#   include "arm/predict.h"
#if ARCH_AARCH64
#   include "aarch64/pixel.h"
#   include "aarch64/predict.h"
#if ARCH_MIPS
#   include "mips/pixel.h"
#define PIXEL_SAD_C( name, lx, ly ) \
static int name( pixel *pix1, intptr_t i_stride_pix1,  \
pixel *pix2, intptr_t i_stride_pix2 ) \
PIXEL_SAD_C( x264_pixel_sad_16x16, 16, 16 )
PIXEL_SAD_C( x264_pixel_sad_16x8,  16,  8 )
PIXEL_SAD_C( x264_pixel_sad_8x16,   8, 16 )
PIXEL_SAD_C( x264_pixel_sad_8x8,    8,  8 )
PIXEL_SAD_C( x264_pixel_sad_8x4,    8,  4 )
PIXEL_SAD_C( x264_pixel_sad_4x16,   4, 16 )
PIXEL_SAD_C( x264_pixel_sad_4x8,    4,  8 )
PIXEL_SAD_C( x264_pixel_sad_4x4,    4,  4 )
#define PIXEL_SSD_C( name, lx, ly ) \
static int name( pixel *pix1, intptr_t i_stride_pix1,  \
pixel *pix2, intptr_t i_stride_pix2 ) \
PIXEL_SSD_C( x264_pixel_ssd_16x16, 16, 16 )
PIXEL_SSD_C( x264_pixel_ssd_16x8,  16,  8 )
PIXEL_SSD_C( x264_pixel_ssd_8x16,   8, 16 )
PIXEL_SSD_C( x264_pixel_ssd_8x8,    8,  8 )
PIXEL_SSD_C( x264_pixel_ssd_8x4,    8,  4 )
PIXEL_SSD_C( x264_pixel_ssd_4x16,   4, 16 )
PIXEL_SSD_C( x264_pixel_ssd_4x8,    4,  8 )
PIXEL_SSD_C( x264_pixel_ssd_4x4,    4,  4 )
uint64_t x264_pixel_ssd_wxh( x264_pixel_function_t *pf, pixel *pix1, intptr_t i_pix1,
pixel *pix2, intptr_t i_pix2, int i_width, int i_height )
static void pixel_ssd_nv12_core( pixel *pixuv1, intptr_t stride1, pixel *pixuv2, intptr_t stride2,
int width, int height, uint64_t *ssd_u, uint64_t *ssd_v )
void x264_pixel_ssd_nv12( x264_pixel_function_t *pf, pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2,
int i_width, int i_height, uint64_t *ssd_u, uint64_t *ssd_v )
#define PIXEL_VAR_C( name, w, h ) \
static uint64_t name( pixel *pix, intptr_t i_stride ) \
PIXEL_VAR_C( x264_pixel_var_16x16, 16, 16 )
PIXEL_VAR_C( x264_pixel_var_8x16,   8, 16 )
PIXEL_VAR_C( x264_pixel_var_8x8,    8,  8 )
#define PIXEL_VAR2_C( name, w, h, shift ) \
static int name( pixel *pix1, intptr_t i_stride1, pixel *pix2, intptr_t i_stride2, int *ssd ) \
PIXEL_VAR2_C( x264_pixel_var2_8x16, 8, 16, 7 )
PIXEL_VAR2_C( x264_pixel_var2_8x8,  8,  8, 6 )
#if BIT_DEPTH > 8
typedef uint32_t sum_t;
typedef uint64_t sum2_t;
typedef uint16_t sum_t;
typedef uint32_t sum2_t;
#define BITS_PER_SUM (8 * sizeof(sum_t))
#define HADAMARD4(d0, d1, d2, d3, s0, s1, s2, s3)
static ALWAYS_INLINE sum2_t abs2( sum2_t a )
static NOINLINE int x264_pixel_satd_4x4( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 )
static NOINLINE int x264_pixel_satd_8x4( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 )
#define PIXEL_SATD_C( w, h, sub )\
static int x264_pixel_satd_##w##x##h( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 )\
PIXEL_SATD_C( 16, 16, x264_pixel_satd_8x4 )
PIXEL_SATD_C( 16, 8,  x264_pixel_satd_8x4 )
PIXEL_SATD_C( 8,  16, x264_pixel_satd_8x4 )
PIXEL_SATD_C( 8,  8,  x264_pixel_satd_8x4 )
PIXEL_SATD_C( 4,  16, x264_pixel_satd_4x4 )
PIXEL_SATD_C( 4,  8,  x264_pixel_satd_4x4 )
static NOINLINE int sa8d_8x8( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 )
static int x264_pixel_sa8d_8x8( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 )
static int x264_pixel_sa8d_16x16( pixel *pix1, intptr_t i_pix1, pixel *pix2, intptr_t i_pix2 )
static NOINLINE uint64_t pixel_hadamard_ac( pixel *pix, intptr_t stride )
#define HADAMARD_AC(w,h) \
static uint64_t x264_pixel_hadamard_ac_##w##x##h( pixel *pix, intptr_t stride )\
HADAMARD_AC( 16, 16 )
HADAMARD_AC( 16, 8 )
HADAMARD_AC( 8, 16 )
HADAMARD_AC( 8, 8 )
#define SAD_X( size ) \
static void x264_pixel_sad_x3_##size( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2,\
intptr_t i_stride, int scores[3] )\
\
static void x264_pixel_sad_x4_##size( pixel *fenc, pixel *pix0, pixel *pix1,pixel *pix2, pixel *pix3,\
intptr_t i_stride, int scores[4] )\
SAD_X( 16x16 )
SAD_X( 16x8 )
SAD_X( 8x16 )
SAD_X( 8x8 )
SAD_X( 8x4 )
SAD_X( 4x8 )
SAD_X( 4x4 )
#define SATD_X( size, cpu ) \
static void x264_pixel_satd_x3_##size##cpu( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2,\
intptr_t i_stride, int scores[3] )\
\
static void x264_pixel_satd_x4_##size##cpu( pixel *fenc, pixel *pix0, pixel *pix1, pixel *pix2, pixel *pix3,\
intptr_t i_stride, int scores[4] )\
#define SATD_X_DECL6( cpu )\
SATD_X( 16x16, cpu )\
SATD_X( 16x8, cpu )\
SATD_X( 8x16, cpu )\
SATD_X( 8x8, cpu )\
SATD_X( 8x4, cpu )\
SATD_X( 4x8, cpu )
#define SATD_X_DECL7( cpu )\
SATD_X_DECL6( cpu )\
SATD_X( 4x4, cpu )
SATD_X_DECL7()
#if HAVE_MMX
SATD_X_DECL7( _mmx2 )
#if !HIGH_BIT_DEPTH
SATD_X_DECL6( _sse2 )
SATD_X_DECL7( _ssse3 )
SATD_X_DECL6( _ssse3_atom )
SATD_X_DECL7( _sse4 )
SATD_X_DECL7( _avx )
SATD_X_DECL7( _xop )
#if !HIGH_BIT_DEPTH
#if HAVE_ARMV6 || ARCH_AARCH64
SATD_X_DECL7( _neon )
#define INTRA_MBCMP_8x8( mbcmp, cpu, cpu2 )\
void x264_intra_##mbcmp##_x3_8x8##cpu( pixel *fenc, pixel edge[36], int res[3] )\
INTRA_MBCMP_8x8( sad,, _c )
INTRA_MBCMP_8x8(sa8d,, _c )
#if HIGH_BIT_DEPTH && HAVE_MMX
#define x264_predict_8x8_v_sse2 x264_predict_8x8_v_sse
INTRA_MBCMP_8x8( sad, _mmx2,  _c )
INTRA_MBCMP_8x8(sa8d, _sse2,  _sse2 )
#if !HIGH_BIT_DEPTH && (HAVE_ARMV6 || ARCH_AARCH64)
INTRA_MBCMP_8x8( sad, _neon, _neon )
INTRA_MBCMP_8x8(sa8d, _neon, _neon )
#define INTRA_MBCMP( mbcmp, size, pred1, pred2, pred3, chroma, cpu, cpu2 )\
void x264_intra_##mbcmp##_x3_##size##chroma##cpu( pixel *fenc, pixel *fdec, int res[3] )\
INTRA_MBCMP( sad,  4x4,   v, h, dc,  ,, _c )
INTRA_MBCMP(satd,  4x4,   v, h, dc,  ,, _c )
INTRA_MBCMP( sad,  8x8,  dc, h,  v, c,, _c )
INTRA_MBCMP(satd,  8x8,  dc, h,  v, c,, _c )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c,, _c )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c,, _c )
INTRA_MBCMP( sad, 16x16,  v, h, dc,  ,, _c )
INTRA_MBCMP(satd, 16x16,  v, h, dc,  ,, _c )
#if HAVE_MMX
#if HIGH_BIT_DEPTH
#define x264_predict_8x8c_v_mmx2 x264_predict_8x8c_v_mmx
#define x264_predict_8x16c_v_mmx2 x264_predict_8x16c_v_c
#define x264_predict_16x16_dc_mmx2 x264_predict_16x16_dc_c
#define x264_predict_8x8c_v_sse2 x264_predict_8x8c_v_sse
#define x264_predict_8x16c_v_sse2 x264_predict_8x16c_v_sse
#define x264_predict_16x16_v_sse2 x264_predict_16x16_v_sse
INTRA_MBCMP( sad,  4x4,   v, h, dc,  , _mmx2, _c )
INTRA_MBCMP( sad,  8x8,  dc, h,  v, c, _mmx2, _mmx2 )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _mmx2, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _mmx2, _mmx2 )
INTRA_MBCMP( sad, 16x16,  v, h, dc,  , _mmx2, _mmx2 )
INTRA_MBCMP( sad,  8x8,  dc, h,  v, c, _sse2, _sse2 )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _sse2, _sse2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _sse2, _sse2 )
INTRA_MBCMP( sad, 16x16,  v, h, dc,  , _sse2, _sse2 )
INTRA_MBCMP( sad,  8x8,  dc, h,  v, c, _ssse3, _sse2 )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _ssse3, _sse2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _ssse3, _sse2 )
INTRA_MBCMP( sad, 16x16,  v, h, dc,  , _ssse3, _sse2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _sse4, _sse2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _avx, _sse2 )
#define x264_predict_8x16c_v_mmx2 x264_predict_8x16c_v_mmx
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _mmx2, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _mmx2, _mmx2 )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _sse2, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _sse2, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _ssse3, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _sse4, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _avx, _mmx2 )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _xop, _mmx2 )
#if !HIGH_BIT_DEPTH && HAVE_ARMV6
INTRA_MBCMP( sad,  4x4,   v, h, dc,  , _neon, _armv6 )
INTRA_MBCMP(satd,  4x4,   v, h, dc,  , _neon, _armv6 )
INTRA_MBCMP( sad,  8x8,  dc, h,  v, c, _neon, _neon )
INTRA_MBCMP(satd,  8x8,  dc, h,  v, c, _neon, _neon )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _neon, _c )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _neon, _c )
INTRA_MBCMP( sad, 16x16,  v, h, dc,  , _neon, _neon )
INTRA_MBCMP(satd, 16x16,  v, h, dc,  , _neon, _neon )
#if !HIGH_BIT_DEPTH && ARCH_AARCH64
INTRA_MBCMP( sad,  4x4,   v, h, dc,  , _neon, _neon )
INTRA_MBCMP(satd,  4x4,   v, h, dc,  , _neon, _neon )
INTRA_MBCMP( sad,  8x8,  dc, h,  v, c, _neon, _neon )
INTRA_MBCMP(satd,  8x8,  dc, h,  v, c, _neon, _neon )
INTRA_MBCMP( sad,  8x16, dc, h,  v, c, _neon, _neon )
INTRA_MBCMP(satd,  8x16, dc, h,  v, c, _neon, _neon )
INTRA_MBCMP( sad, 16x16,  v, h, dc,  , _neon, _neon )
INTRA_MBCMP(satd, 16x16,  v, h, dc,  , _neon, _neon )
static void ssim_4x4x2_core( const pixel *pix1, intptr_t stride1,
const pixel *pix2, intptr_t stride2,
int sums[2][4] )
static float ssim_end1( int s1, int s2, int ss, int s12 )
static float ssim_end4( int sum0[5][4], int sum1[5][4], int width )
float x264_pixel_ssim_wxh( x264_pixel_function_t *pf,
pixel *pix1, intptr_t stride1,
pixel *pix2, intptr_t stride2,
int width, int height, void *buf, int *cnt )
static int pixel_vsad( pixel *src, intptr_t stride, int height )
int x264_field_vsad( x264_t *h, int mb_x, int mb_y )
static int pixel_asd8( pixel *pix1, intptr_t stride1, pixel *pix2, intptr_t stride2, int height )
static int x264_pixel_ads4( int enc_dc[4], uint16_t *sums, int delta,
uint16_t *cost_mvx, int16_t *mvs, int width, int thresh )
static int x264_pixel_ads2( int enc_dc[2], uint16_t *sums, int delta,
uint16_t *cost_mvx, int16_t *mvs, int width, int thresh )
static int x264_pixel_ads1( int enc_dc[1], uint16_t *sums, int delta,
uint16_t *cost_mvx, int16_t *mvs, int width, int thresh )
void x264_pixel_init( int cpu, x264_pixel_function_t *pixf )
