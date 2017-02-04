#if HAVE_ALTIVEC
VEC_1D_DCT               \                                               \
vz0 = vec_add(vb0,vb2);     \
vz1 = vec_sub(vb0,vb2);     \
vz2 = vec_sra(vb1,vec_splat_u16(1));                          \
vz2 = vec_sub(vz2,vb3); \
vz3 = vec_sra(vb3,vec_splat_u16(1));                          \
vz3 = vec_add(vb1,vz3); \                                       \
va0 = vec_add(vz0,vz3);  \
va1 = vec_add(vz1,vz2);  \
va2 = vec_sub(vz1,vz2);  \
va3 = vec_sub(vz0,vz3)
VEC_TRANSPOSE_4 \
b0 = vec_mergeh( a0, a0 ); \
b1 = vec_mergeh( a1, a0 ); \
b2 = vec_mergeh( a2, a0 ); \
b3 = vec_mergeh( a3, a0 ); \
a0 = vec_mergeh( b0, b2 ); \
a1 = vec_mergel( b0, b2 ); \
a2 = vec_mergeh( b1, b3 ); \
a3 = vec_mergel( b1, b3 ); \
b0 = vec_mergeh( a0, a2 ); \
b1 = vec_mergel( a0, a2 ); \
b2 = vec_mergeh( a1, a3 ); \
b3 = vec_mergel( a1, a3 )
#if HAVE_BIGENDIAN
vdst_load              \
vdst_orig = vec_ld(0, dst);   \
vdst = vec_perm(vdst_orig, zero_u8v, vdst_mask);
vdst_load vdst = vec_vsx_ld(0, dst)
VEC_LOAD_U8_ADD_S16_STORE_U8                      \
vdst_load();                                              \
vdst_ss = (vec_s16) VEC_MERGEH(zero_u8v, vdst);           \
va = vec_add(va, vdst_ss);                                \
va_u8 = vec_packsu(va, zero_s16v);                        \
va_u32 = vec_splat((vec_u32)va_u8, 0);                  \
vec_ste(va_u32, element, (uint32_t*)dst);
h264_idct_add_altivec
IDCT8_1D_ALTIVEC
#if HAVE_BIGENDIAN
GET_2PERM  \
ldv = vec_lvsl(0, d);       \
stv = vec_lvsr(8, d);
dstv_load            \
vec_u8 hv = vec_ld( 0, d ); \
vec_u8 lv = vec_ld( 7, d);  \
vec_u8 dstv   = vec_perm( hv, lv, (vec_u8)perm_ldv );
dest_unligned_store                                 \
vec_u8 edgehv;                                             \
vec_u8 bodyv  = vec_perm( idstsum8, idstsum8, perm_stv );  \
vec_u8 edgelv = vec_perm( sel, zero_u8v, perm_stv );       \
lv    = vec_sel( lv, bodyv, edgelv );                      \
vec_st( lv, 7, d );                                        \
hv    = vec_ld( 0, d );                                    \
edgehv = vec_perm( zero_u8v, sel, perm_stv );              \
hv    = vec_sel( hv, bodyv, edgehv );                      \
vec_st( hv, 0, d );
GET_2PERM
dstv_load vec_u8 dstv = vec_vsx_ld(0, d)
dest_unligned_store\
vec_u8 dst8 = vec_perm((vec_u8)idstsum8, dstv, vcprm(2,3,s2,s3));\
vec_vsx_st(dst8, 0, d)
ALTIVEC_STORE_SUM_CLIP
h264_idct8_add_altivec
#if HAVE_BIGENDIAN
#define DST_LD vec_ld
#define DST_LD vec_vsx_ld
h264_idct_dc_add_internal
h264_idct_dc_add_altivec
h264_idct8_dc_add_altivec
h264_idct_add16_altivec
h264_idct_add16intra_altivec
h264_idct8_add4_altivec
h264_idct_add8_altivec
transpose4x16
write16x4
readAndTranspose16x6
static inline vec_u8 diff_lt_altivec ( register vec_u8 x,
register vec_u8 y,
register vec_u8 a)
static inline vec_u8 h264_deblock_mask ( register vec_u8 p0,
register vec_u8 p1,
register vec_u8 q0,
register vec_u8 q1,
register vec_u8 alpha,
register vec_u8 beta)
h264_deblock_q1
h264_deblock_p0_q0
h264_loop_filter_luma_altivec
h264_v_loop_filter_luma_altivec
h264_h_loop_filter_luma_altivec
static av_always_inline
weight_h264_W_altivec
static av_always_inline
biweight_h264_W_altivec
H264_WEIGHT \
static void weight_h264_pixels ## W ## _altivec(uint8_t *block, int stride, int height, \
int log2_denom, int weight, int offset) \
\
static void biweight_h264_pixels ## W ## _altivec(uint8_t *dst, uint8_t *src, int stride, int height, \
int log2_denom, int weightd, int weights, int offset) \
H264_WEIGHT(16)
H264_WEIGHT( 8)
ff_h264dsp_init_ppc
