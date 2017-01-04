#if !HIGH_BIT_DEPTH
#define VEC_DCT(a0,a1,a2,a3,b0,b1,b2,b3) \
b1 = vec_add( a0, a3 );              \
b3 = vec_add( a1, a2 );              \
b0 = vec_add( b1, b3 );              \
b2 = vec_sub( b1, b3 );              \
a0 = vec_sub( a0, a3 );              \
a1 = vec_sub( a1, a2 );              \
b1 = vec_add( a0, a0 );              \
b1 = vec_add( b1, a1 );              \
b3 = vec_sub( a0, a1 );              \
b3 = vec_sub( b3, a1 )
void x264_sub4x4_dct_altivec( int16_t dct[16], uint8_t *pix1, uint8_t *pix2 )
void x264_sub8x8_dct_altivec( int16_t dct[4][16], uint8_t *pix1, uint8_t *pix2 )
void x264_sub16x16_dct_altivec( int16_t dct[16][16], uint8_t *pix1, uint8_t *pix2 )
static void pix_diff( uint8_t *p1, uint8_t *p2, vec_s16_t *diff, int i )
void x264_sub8x8_dct_dc_altivec( int16_t dct[4], uint8_t *pix1, uint8_t *pix2 )
#define DCT8_1D_ALTIVEC( dct0v, dct1v, dct2v, dct3v, dct4v, dct5v, dct6v, dct7v ) \
void x264_sub8x8_dct8_altivec( int16_t dct[64], uint8_t *pix1, uint8_t *pix2 )
void x264_sub16x16_dct8_altivec( int16_t dct[4][64], uint8_t *pix1, uint8_t *pix2 )
#define ALTIVEC_STORE8_DC_SUM_CLIP(dest, dcv)                         \
static void idct8_dc_altivec( uint8_t *dst, int16_t dc1, int16_t dc2 )
void x264_add8x8_idct_dc_altivec( uint8_t *p_dst, int16_t dct[4] )
#define IDCT_1D_ALTIVEC(s0, s1, s2, s3,  d0, d1, d2, d3) \
#define VEC_LOAD_U8_ADD_S16_STORE_U8(va)             \
vdst_orig = vec_ld(0, dst);                      \
vdst = vec_perm(vdst_orig, zero_u8v, vdst_mask); \
vdst_ss = (vec_s16_t)vec_mergeh(zero_u8v, vdst); \
va = vec_add(va, vdst_ss);                       \
va_u8 = vec_s16_to_u8(va);                       \
va_u32 = vec_splat((vec_u32_t)va_u8, 0);         \
vec_ste(va_u32, element, (uint32_t*)dst);
#define ALTIVEC_STORE4_SUM_CLIP(dest, idctv)                    \
void x264_add4x4_idct_altivec( uint8_t *dst, int16_t dct[16] )
void x264_add8x8_idct_altivec( uint8_t *p_dst, int16_t dct[4][16] )
void x264_add16x16_idct_altivec( uint8_t *p_dst, int16_t dct[16][16] )
#define IDCT8_1D_ALTIVEC(s0, s1, s2, s3, s4, s5, s6, s7,  d0, d1, d2, d3, d4, d5, d6, d7)\
#define ALTIVEC_STORE_SUM_CLIP(dest, idctv)                             \
void x264_add8x8_idct8_altivec( uint8_t *dst, int16_t dct[64] )
void x264_add16x16_idct8_altivec( uint8_t *dst, int16_t dct[4][64] )
void x264_zigzag_scan_4x4_frame_altivec( int16_t level[16], int16_t dct[16] )
void x264_zigzag_scan_4x4_field_altivec( int16_t level[16], int16_t dct[16] )
void x264_zigzag_scan_8x8_frame_altivec( int16_t level[64], int16_t dct[64] )
void x264_zigzag_interleave_8x8_cavlc_altivec( int16_t *dst, int16_t *src, uint8_t *nnz )
