void x264_prefetch_ref_aarch64( uint8_t *, intptr_t, int );
void x264_prefetch_fenc_420_aarch64( uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_prefetch_fenc_422_aarch64( uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void *x264_memcpy_aligned_neon( void *dst, const void *src, size_t n );
void x264_memzero_aligned_neon( void *dst, size_t n );
void x264_pixel_avg_16x16_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_16x8_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_8x16_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_8x8_neon  ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_8x4_neon  ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_4x16_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_4x8_neon  ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_4x4_neon  ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg_4x2_neon  ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_pixel_avg2_w4_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, int );
void x264_pixel_avg2_w8_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, int );
void x264_pixel_avg2_w16_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, int );
void x264_pixel_avg2_w20_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, int );
void x264_plane_copy_core_neon( pixel *dst, intptr_t i_dst,
pixel *src, intptr_t i_src, int w, int h );
void x264_plane_copy_swap_core_neon( pixel *dst, intptr_t i_dst,
pixel *src, intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_neon(  pixel *dstu, intptr_t i_dstu,
pixel *dstv, intptr_t i_dstv,
pixel *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_rgb_neon( pixel *dsta, intptr_t i_dsta,
pixel *dstb, intptr_t i_dstb,
pixel *dstc, intptr_t i_dstc,
pixel *src,  intptr_t i_src, int pw, int w, int h );
void x264_plane_copy_interleave_core_neon( pixel *dst,  intptr_t i_dst,
pixel *srcu, intptr_t i_srcu,
pixel *srcv, intptr_t i_srcv, int w, int h );
void x264_store_interleave_chroma_neon( pixel *dst, intptr_t i_dst, pixel *srcu, pixel *srcv, int height );
void x264_load_deinterleave_chroma_fdec_neon( pixel *dst, pixel *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fenc_neon( pixel *dst, pixel *src, intptr_t i_src, int height );
#define MC_WEIGHT(func)\
void x264_mc_weight_w20##func##_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, const x264_weight_t *, int );\
void x264_mc_weight_w16##func##_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, const x264_weight_t *, int );\
void x264_mc_weight_w8##func##_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, const x264_weight_t *, int );\
void x264_mc_weight_w4##func##_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, const x264_weight_t *, int );\
\
static void (* x264_mc##func##_wtab_neon[6])( uint8_t *, intptr_t, uint8_t *, intptr_t, const x264_weight_t *, int ) =\
;
MC_WEIGHT()
MC_WEIGHT(_nodenom)
MC_WEIGHT(_offsetadd)
MC_WEIGHT(_offsetsub)
void x264_mc_copy_w4_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_mc_copy_w8_neon ( uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_mc_copy_w16_neon( uint8_t *, intptr_t, uint8_t *, intptr_t, int );
void x264_mc_chroma_neon( uint8_t *, uint8_t *, intptr_t, uint8_t *, intptr_t, int, int, int, int );
void integral_init4h_neon( uint16_t *, uint8_t *, intptr_t );
void integral_init4v_neon( uint16_t *, uint16_t *, intptr_t );
void integral_init8h_neon( uint16_t *, uint8_t *, intptr_t );
void integral_init8v_neon( uint16_t *, intptr_t );
void x264_frame_init_lowres_core_neon( uint8_t *, uint8_t *, uint8_t *, uint8_t *, uint8_t *, intptr_t, intptr_t, int, int );
void x264_mbtree_propagate_cost_neon( int16_t *, uint16_t *, uint16_t *, uint16_t *, uint16_t *, float *, int );
void x264_mbtree_fix8_pack_neon( uint16_t *dst, float *src, int count );
void x264_mbtree_fix8_unpack_neon( float *dst, uint16_t *src, int count );
#if !HIGH_BIT_DEPTH
static void x264_weight_cache_neon( x264_t *h, x264_weight_t *w )
static void (* const x264_pixel_avg_wtab_neon[6])( uint8_t *, intptr_t, uint8_t *, intptr_t, uint8_t *, int ) =
;
static void (* const x264_mc_copy_wtab_neon[5])( uint8_t *, intptr_t, uint8_t *, intptr_t, int ) =
;
static void mc_luma_neon( uint8_t *dst,    intptr_t i_dst_stride,
uint8_t *src[4], intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height, const x264_weight_t *weight )
static uint8_t *get_ref_neon( uint8_t *dst,   intptr_t *i_dst_stride,
uint8_t *src[4], intptr_t i_src_stride,
int mvx, int mvy,
int i_width, int i_height, const x264_weight_t *weight )
void x264_hpel_filter_neon( uint8_t *dsth, uint8_t *dstv, uint8_t *dstc,
uint8_t *src, intptr_t stride, int width,
int height, int16_t *buf );
PLANE_COPY(16, neon)
PLANE_COPY_SWAP(16, neon)
PLANE_INTERLEAVE(neon)
PROPAGATE_LIST(neon)
void x264_mc_init_aarch64( int cpu, x264_mc_functions_t *pf )
