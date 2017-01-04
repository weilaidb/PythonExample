#if HAVE_MMX
#if ARCH_PPC
#if ARCH_ARM
#if ARCH_AARCH64
#if ARCH_MIPS
static inline void pixel_avg( pixel *dst,  intptr_t i_dst_stride,
pixel *src1, intptr_t i_src1_stride,
pixel *src2, intptr_t i_src2_stride, int i_width, int i_height )
static inline void pixel_avg_wxh( pixel *dst,  intptr_t i_dst,
pixel *src1, intptr_t i_src1,
pixel *src2, intptr_t i_src2, int width, int height )
static inline void pixel_avg_weight_wxh( pixel *dst,  intptr_t i_dst,
pixel *src1, intptr_t i_src1,
pixel *src2, intptr_t i_src2, int width, int height, int i_weight1 )
#undef op_scale2
#define PIXEL_AVG_C( name, width, height ) \
static void name( pixel *pix1, intptr_t i_stride_pix1, \
pixel *pix2, intptr_t i_stride_pix2, \
pixel *pix3, intptr_t i_stride_pix3, int weight ) \
PIXEL_AVG_C( pixel_avg_16x16, 16, 16 )
PIXEL_AVG_C( pixel_avg_16x8,  16, 8 )
PIXEL_AVG_C( pixel_avg_8x16,  8, 16 )
PIXEL_AVG_C( pixel_avg_8x8,   8, 8 )
PIXEL_AVG_C( pixel_avg_8x4,   8, 4 )
PIXEL_AVG_C( pixel_avg_4x16,  4, 16 )
PIXEL_AVG_C( pixel_avg_4x8,   4, 8 )
PIXEL_AVG_C( pixel_avg_4x4,   4, 4 )
PIXEL_AVG_C( pixel_avg_4x2,   4, 2 )
PIXEL_AVG_C( pixel_avg_2x8,   2, 8 )
PIXEL_AVG_C( pixel_avg_2x4,   2, 4 )
PIXEL_AVG_C( pixel_avg_2x2,   2, 2 )
static void x264_weight_cache( x264_t *h, x264_weight_t *w )
#define opscale(x) dst[x] = x264_clip_pixel( ((src[x] * scale + (1<<(denom - 1))) >> denom) + offset )
#define opscale_noden(x) dst[x] = x264_clip_pixel( src[x] * scale + offset )
static void mc_weight( pixel *dst, intptr_t i_dst_stride, pixel *src, intptr_t i_src_stride,
const x264_weight_t *weight, int i_width, int i_height )
#define MC_WEIGHT_C( name, width ) \
static void name( pixel *dst, intptr_t i_dst_stride, pixel *src, intptr_t i_src_stride, const x264_weight_t *weight, int height ) \
MC_WEIGHT_C( mc_weight_w20, 20 )
MC_WEIGHT_C( mc_weight_w16, 16 )
MC_WEIGHT_C( mc_weight_w12, 12 )
MC_WEIGHT_C( mc_weight_w8,   8 )
MC_WEIGHT_C( mc_weight_w4,   4 )
MC_WEIGHT_C( mc_weight_w2,   2 )
static weight_fn_t x264_mc_weight_wtab[6] =
;
const x264_weight_t x264_weight_none[3] = ;
static void mc_copy( pixel *src, intptr_t i_src_stride, pixel *dst, intptr_t i_dst_stride, int i_width, int i_height )
#define TAPFILTER(pix, d) ((pix)[x-2*d] + (pix)[x+3*d] - 5*((pix)[x-d] + (pix)[x+2*d]) + 20*((pix)[x] + (pix)[x+d]))
static void hpel_filter( pixel *dsth, pixel *dstv, pixel *dstc, pixel *src,
intptr_t stride, int width, int height, int16_t *buf )
const uint8_t x264_hpel_ref0[16] = ;
const uint8_t x264_hpel_ref1[16] = ;
static void mc_luma( pixel *dst,    intptr_t i_dst_stride,
pixel *src[4], intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height, const x264_weight_t *weight )
static pixel *get_ref( pixel *dst,   intptr_t *i_dst_stride,
pixel *src[4], intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height, const x264_weight_t *weight )
static void mc_chroma( pixel *dstu, pixel *dstv, intptr_t i_dst_stride,
pixel *src, intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height )
#define MC_COPY(W) \
static void mc_copy_w##W( pixel *dst, intptr_t i_dst, pixel *src, intptr_t i_src, int i_height ) \
MC_COPY( 16 )
MC_COPY( 8 )
MC_COPY( 4 )
void x264_plane_copy_c( pixel *dst, intptr_t i_dst,
pixel *src, intptr_t i_src, int w, int h )
void x264_plane_copy_swap_c( pixel *dst, intptr_t i_dst,
pixel *src, intptr_t i_src, int w, int h )
void x264_plane_copy_interleave_c( pixel *dst,  intptr_t i_dst,
pixel *srcu, intptr_t i_srcu,
pixel *srcv, intptr_t i_srcv, int w, int h )
static void x264_plane_copy_deinterleave_c( pixel *dstu, intptr_t i_dstu,
pixel *dstv, intptr_t i_dstv,
pixel *src,  intptr_t i_src, int w, int h )
static void x264_plane_copy_deinterleave_rgb_c( pixel *dsta, intptr_t i_dsta,
pixel *dstb, intptr_t i_dstb,
pixel *dstc, intptr_t i_dstc,
pixel *src,  intptr_t i_src, int pw, int w, int h )
void x264_plane_copy_deinterleave_v210_c( pixel *dsty, intptr_t i_dsty,
pixel *dstc, intptr_t i_dstc,
uint32_t *src, intptr_t i_src, int w, int h )
static void store_interleave_chroma( pixel *dst, intptr_t i_dst, pixel *srcu, pixel *srcv, int height )
static void load_deinterleave_chroma_fenc( pixel *dst, pixel *src, intptr_t i_src, int height )
static void load_deinterleave_chroma_fdec( pixel *dst, pixel *src, intptr_t i_src, int height )
static void prefetch_fenc_null( pixel *pix_y,  intptr_t stride_y,
pixel *pix_uv, intptr_t stride_uv, int mb_x )
static void prefetch_ref_null( pixel *pix, intptr_t stride, int parity )
static void memzero_aligned( void * dst, size_t n )
static void integral_init4h( uint16_t *sum, pixel *pix, intptr_t stride )
static void integral_init8h( uint16_t *sum, pixel *pix, intptr_t stride )
static void integral_init4v( uint16_t *sum8, uint16_t *sum4, intptr_t stride )
static void integral_init8v( uint16_t *sum8, intptr_t stride )
void x264_frame_init_lowres( x264_t *h, x264_frame_t *frame )
static void frame_init_lowres_core( pixel *src0, pixel *dst0, pixel *dsth, pixel *dstv, pixel *dstc,
intptr_t src_stride, intptr_t dst_stride, int width, int height )
static void mbtree_propagate_cost( int16_t *dst, uint16_t *propagate_in, uint16_t *intra_costs,
uint16_t *inter_costs, uint16_t *inv_qscales, float *fps_factor, int len )
static void mbtree_propagate_list( x264_t *h, uint16_t *ref_costs, int16_t (*mvs)[2],
int16_t *propagate_amount, uint16_t *lowres_costs,
int bipred_weight, int mb_y, int len, int list )
static void mbtree_fix8_pack( uint16_t *dst, float *src, int count )
static void mbtree_fix8_unpack( float *dst, uint16_t *src, int count )
void x264_mc_init( int cpu, x264_mc_functions_t *pf, int cpu_independent )
void x264_frame_filter( x264_t *h, x264_frame_t *frame, int mb_y, int b_end )
