#if !HIGH_BIT_DEPTH
#define PIXEL_SAD_ALTIVEC( name, lx, ly, a, b )        \
static int name( uint8_t *pix1, intptr_t i_pix1,       \
uint8_t *pix2, intptr_t i_pix2 )      \
PIXEL_SAD_ALTIVEC( pixel_sad_16x16_altivec, 16, 16, s,  3 )
PIXEL_SAD_ALTIVEC( pixel_sad_8x16_altivec,  8,  16, 2s, 1 )
PIXEL_SAD_ALTIVEC( pixel_sad_16x8_altivec,  16, 8,  s,  3 )
PIXEL_SAD_ALTIVEC( pixel_sad_8x8_altivec,   8,  8,  2s, 1 )
#define VEC_HADAMAR(a0,a1,a2,a3,b0,b1,b2,b3) \
b2 = vec_add( a0, a1 ); \
b3 = vec_add( a2, a3 ); \
a0 = vec_sub( a0, a1 ); \
a2 = vec_sub( a2, a3 ); \
b0 = vec_add( b2, b3 ); \
b1 = vec_sub( b2, b3 ); \
b2 = vec_sub( a0, a2 ); \
b3 = vec_add( a0, a2 )
#define VEC_ABS(a)                            \
a = vec_max( a, vec_sub( zero_s16v, a ) );
#define VEC_ABSOLUTE(a) (vec_u16_t)vec_max( a, vec_sub( zero_s16v, a ) )
#define VEC_ADD_ABS(a,b,c) \
VEC_ABS( a );          \
c = vec_sum4s( a, b )
static int pixel_satd_4x4_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_satd_4x8_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_satd_8x4_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_satd_8x8_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_satd_8x16_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_satd_16x8_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_satd_16x16_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static void pixel_sad_x4_16x16_altivec( uint8_t *fenc,
uint8_t *pix0, uint8_t *pix1,
uint8_t *pix2, uint8_t *pix3,
intptr_t i_stride, int scores[4] )
static void pixel_sad_x3_16x16_altivec( uint8_t *fenc, uint8_t *pix0,
uint8_t *pix1, uint8_t *pix2,
intptr_t i_stride, int scores[3] )
static void pixel_sad_x4_16x8_altivec( uint8_t *fenc, uint8_t *pix0, uint8_t *pix1, uint8_t *pix2,
uint8_t *pix3, intptr_t i_stride, int scores[4] )
static void pixel_sad_x3_16x8_altivec( uint8_t *fenc, uint8_t *pix0,
uint8_t *pix1, uint8_t *pix2,
intptr_t i_stride, int scores[3] )
static void pixel_sad_x4_8x16_altivec( uint8_t *fenc,
uint8_t *pix0, uint8_t *pix1,
uint8_t *pix2, uint8_t *pix3,
intptr_t i_stride, int scores[4] )
static void pixel_sad_x3_8x16_altivec( uint8_t *fenc, uint8_t *pix0,
uint8_t *pix1, uint8_t *pix2,
intptr_t i_stride, int scores[3] )
static void pixel_sad_x4_8x8_altivec( uint8_t *fenc,
uint8_t *pix0, uint8_t *pix1,
uint8_t *pix2, uint8_t *pix3,
intptr_t i_stride, int scores[4] )
static void pixel_sad_x3_8x8_altivec( uint8_t *fenc, uint8_t *pix0,
uint8_t *pix1, uint8_t *pix2,
intptr_t i_stride, int scores[3] )
static int pixel_ssd_16x16_altivec( uint8_t *pix1, intptr_t i_stride_pix1,
uint8_t *pix2, intptr_t i_stride_pix2 )
static int pixel_ssd_8x8_altivec( uint8_t *pix1, intptr_t i_stride_pix1,
uint8_t *pix2, intptr_t i_stride_pix2 )
static uint64_t x264_pixel_var_16x16_altivec( uint8_t *pix, intptr_t i_stride )
static uint64_t x264_pixel_var_8x8_altivec( uint8_t *pix, intptr_t i_stride )
#define SA8D_1D_ALTIVEC( sa8d0v, sa8d1v, sa8d2v, sa8d3v,  \
sa8d4v, sa8d5v, sa8d6v, sa8d7v ) \
static int pixel_sa8d_8x8_core_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_sa8d_8x8_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
static int pixel_sa8d_16x16_altivec( uint8_t *pix1, intptr_t i_pix1,
uint8_t *pix2, intptr_t i_pix2 )
#define HADAMARD4_ALTIVEC(d0,d1,d2,d3,s0,s1,s2,s3)
#define vec_perm_extend_s16(val, perm) (vec_s16_t)vec_perm(val, zero_u8v, perm)
#define vec_perm_extend_s16(val, perm) (vec_s16_t)vec_perm(zero_u8v, val, perm)
#define VEC_LOAD_HIGH( p, num )                                    \
vec_u8_t pix8_##num = vec_ld( stride*num, p );                 \
vec_s16_t pix16_s##num = vec_perm_extend_s16( pix8_##num, perm ); \
vec_s16_t pix16_d##num;
static uint64_t pixel_hadamard_ac_altivec( uint8_t *pix, intptr_t stride, const vec_u8_t perm )
static const vec_u8_t hadamard_permtab[] =
;
static uint64_t x264_pixel_hadamard_ac_16x16_altivec( uint8_t *pix, intptr_t stride )
static uint64_t x264_pixel_hadamard_ac_16x8_altivec( uint8_t *pix, intptr_t stride )
static uint64_t x264_pixel_hadamard_ac_8x16_altivec( uint8_t *pix, intptr_t stride )
static uint64_t x264_pixel_hadamard_ac_8x8_altivec( uint8_t *pix, intptr_t stride )
static void ssim_4x4x2_core_altivec( const uint8_t *pix1, intptr_t stride1,
const uint8_t *pix2, intptr_t stride2,
int sums[2][4] )
#define SATD_X( size ) \
static void pixel_satd_x3_##size##_altivec( uint8_t *fenc, uint8_t *pix0, uint8_t *pix1, uint8_t *pix2,\
intptr_t i_stride, int scores[3] )\
\
static void pixel_satd_x4_##size##_altivec( uint8_t *fenc, uint8_t *pix0, uint8_t *pix1, uint8_t *pix2,\
uint8_t *pix3, intptr_t i_stride, int scores[4] )\
SATD_X( 16x16 )\
SATD_X( 16x8 )\
SATD_X( 8x16 )\
SATD_X( 8x8 )\
SATD_X( 8x4 )\
SATD_X( 4x8 )\
SATD_X( 4x4 )
#define INTRA_MBCMP_8x8( mbcmp )\
void intra_##mbcmp##_x3_8x8_altivec( uint8_t *fenc, uint8_t edge[36], int res[3] )\
INTRA_MBCMP_8x8(sad)
INTRA_MBCMP_8x8(sa8d)
#define INTRA_MBCMP( mbcmp, size, pred1, pred2, pred3, chroma )\
void intra_##mbcmp##_x3_##size##x##size##chroma##_altivec( uint8_t *fenc, uint8_t *fdec, int res[3] )\
INTRA_MBCMP(satd, 4, v, h, dc, )
INTRA_MBCMP(sad, 8, dc, h, v, c )
INTRA_MBCMP(satd, 8, dc, h, v, c )
INTRA_MBCMP(sad, 16, v, h, dc, )
INTRA_MBCMP(satd, 16, v, h, dc, )
void x264_pixel_altivec_init( x264_pixel_function_t *pixf )
