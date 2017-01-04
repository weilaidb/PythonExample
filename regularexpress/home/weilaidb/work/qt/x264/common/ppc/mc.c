#if !HIGH_BIT_DEPTH
typedef void (*pf_mc_t)( uint8_t *src, intptr_t i_src,
uint8_t *dst, intptr_t i_dst, int i_height );
static inline int x264_tapfilter( uint8_t *pix, int i_pix_next )
static inline int x264_tapfilter1( uint8_t *pix )
static inline void x264_pixel_avg2_w4_altivec( uint8_t *dst,  intptr_t i_dst,
uint8_t *src1, intptr_t i_src1,
uint8_t *src2, int i_height )
static inline void x264_pixel_avg2_w8_altivec( uint8_t *dst,  intptr_t i_dst,
uint8_t *src1, intptr_t i_src1,
uint8_t *src2, int i_height )
static inline void x264_pixel_avg2_w16_altivec( uint8_t *dst,  intptr_t i_dst,
uint8_t *src1, intptr_t i_src1,
uint8_t *src2, int i_height )
static inline void x264_pixel_avg2_w20_altivec( uint8_t *dst,  intptr_t i_dst,
uint8_t *src1, intptr_t i_src1,
uint8_t *src2, int i_height )
#define MC_COPY( name, a )                                \
static void name( uint8_t *dst, intptr_t i_dst,           \
uint8_t *src, intptr_t i_src, int i_height ) \
MC_COPY( x264_mc_copy_w4_altivec,  4  )
MC_COPY( x264_mc_copy_w8_altivec,  8  )
static void x264_mc_copy_w16_altivec( uint8_t *dst, intptr_t i_dst,
uint8_t *src, intptr_t i_src, int i_height )
static void x264_mc_copy_w16_aligned_altivec( uint8_t *dst, intptr_t i_dst,
uint8_t *src, intptr_t i_src, int i_height )
void x264_plane_copy_swap_core_altivec( uint8_t *dst, intptr_t i_dst,
uint8_t *src, intptr_t i_src, int w, int h )
void x264_plane_copy_interleave_core_altivec( uint8_t *dst, intptr_t i_dst,
uint8_t *srcu, intptr_t i_srcu,
uint8_t *srcv, intptr_t i_srcv, int w, int h )
void x264_store_interleave_chroma_altivec( uint8_t *dst, intptr_t i_dst,
uint8_t *srcu, uint8_t *srcv, int height )
static void mc_luma_altivec( uint8_t *dst,    intptr_t i_dst_stride,
uint8_t *src[4], intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height, const x264_weight_t *weight )
static uint8_t *get_ref_altivec( uint8_t *dst,   intptr_t *i_dst_stride,
uint8_t *src[4], intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height, const x264_weight_t *weight )
static void mc_chroma_2xh( uint8_t *dstu, uint8_t *dstv, intptr_t i_dst_stride,
uint8_t *src, intptr_t i_src_stride,
int mvx, int mvy, int i_height )
#define VSLD(a,b,n) vec_sld(a,b,n)
#define VSLD(a,b,n) vec_sld(b,a,16-n)
static void mc_chroma_altivec_4xh( uint8_t *dstu, uint8_t *dstv, intptr_t i_dst_stride,
uint8_t *src, intptr_t i_src_stride,
int mvx, int mvy, int i_height )
static void mc_chroma_altivec_8xh( uint8_t *dstu, uint8_t *dstv, intptr_t i_dst_stride,
uint8_t *src, intptr_t i_src_stride,
int mvx, int mvy, int i_height )
static void mc_chroma_altivec( uint8_t *dstu, uint8_t *dstv, intptr_t i_dst_stride,
uint8_t *src, intptr_t i_src_stride,
int mvx, int mvy, int i_width, int i_height )
#define HPEL_FILTER_1( t1v, t2v, t3v, t4v, t5v, t6v ) \
#define HPEL_FILTER_2( t1v, t2v, t3v, t4v, t5v, t6v ) \
#define HPEL_FILTER_HORIZONTAL()                             \
#define HPEL_FILTER_VERTICAL()                                    \
#define HPEL_FILTER_CENTRAL()                           \
void x264_hpel_filter_altivec( uint8_t *dsth, uint8_t *dstv, uint8_t *dstc, uint8_t *src,
intptr_t i_stride, int i_width, int i_height, int16_t *buf )
static void frame_init_lowres_core_altivec( uint8_t *src0, uint8_t *dst0, uint8_t *dsth, uint8_t *dstv, uint8_t *dstc,
intptr_t src_stride, intptr_t dst_stride, int width, int height )
static void mc_weight_w2_altivec( uint8_t *dst, intptr_t i_dst, uint8_t *src, intptr_t i_src,
const x264_weight_t *weight, int i_height )
static void mc_weight_w4_altivec( uint8_t *dst, intptr_t i_dst, uint8_t *src, intptr_t i_src,
const x264_weight_t *weight, int i_height )
static void mc_weight_w8_altivec( uint8_t *dst, intptr_t i_dst, uint8_t *src, intptr_t i_src,
const x264_weight_t *weight, int i_height )
static void mc_weight_w16_altivec( uint8_t *dst, intptr_t i_dst, uint8_t *src, intptr_t i_src,
const x264_weight_t *weight, int i_height )
static void mc_weight_w20_altivec( uint8_t *dst, intptr_t i_dst, uint8_t *src, intptr_t i_src,
const x264_weight_t *weight, int i_height )
static weight_fn_t x264_mc_weight_wtab_altivec[6] =
;
PLANE_COPY_SWAP(16, altivec)
PLANE_INTERLEAVE(altivec)
void x264_mc_altivec_init( x264_mc_functions_t *pf )
