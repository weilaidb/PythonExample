#define DECL_SUF( func, args )\
void func##_mmx2 args;\
void func##_sse2 args;\
void func##_ssse3 args;\
void func##_avx2 args;
DECL_SUF( x264_pixel_avg_16x16, ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_16x8,  ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_8x16,  ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_8x8,   ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_8x4,   ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_4x16,  ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_4x8,   ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_4x4,   ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
DECL_SUF( x264_pixel_avg_4x2,   ( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t, int ))
#define MC_WEIGHT(w,type) \
void x264_mc_weight_w##w##_##type( pixel *, intptr_t, pixel *, intptr_t, const x264_weight_t *, int );
#define MC_WEIGHT_OFFSET(w,type) \
void x264_mc_offsetadd_w##w##_##type( pixel *, intptr_t, pixel *, intptr_t, const x264_weight_t *, int ); \
void x264_mc_offsetsub_w##w##_##type( pixel *, intptr_t, pixel *, intptr_t, const x264_weight_t *, int ); \
MC_WEIGHT(w,type)
MC_WEIGHT_OFFSET( 4, mmx2 )
MC_WEIGHT_OFFSET( 8, mmx2 )
MC_WEIGHT_OFFSET( 12, mmx2 )
MC_WEIGHT_OFFSET( 16, mmx2 )
MC_WEIGHT_OFFSET( 20, mmx2 )
MC_WEIGHT_OFFSET( 12, sse2 )
MC_WEIGHT_OFFSET( 16, sse2 )
MC_WEIGHT_OFFSET( 20, sse2 )
#if HIGH_BIT_DEPTH
MC_WEIGHT_OFFSET( 8, sse2 )
MC_WEIGHT( 8, sse2  )
MC_WEIGHT( 4, ssse3 )
MC_WEIGHT( 8, ssse3 )
MC_WEIGHT( 12, ssse3 )
MC_WEIGHT( 16, ssse3 )
MC_WEIGHT( 20, ssse3 )
MC_WEIGHT( 8, avx2 )
MC_WEIGHT( 16, avx2 )
MC_WEIGHT( 20, avx2 )
#undef MC_OFFSET
#undef MC_WEIGHT
void x264_mc_copy_w4_mmx ( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_mc_copy_w8_mmx ( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_mc_copy_w8_sse ( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_mc_copy_w16_mmx( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_mc_copy_w16_sse( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_mc_copy_w16_aligned_sse( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_mc_copy_w16_avx( uint16_t *, intptr_t, uint16_t *, intptr_t, int );
void x264_mc_copy_w16_aligned_avx( uint16_t *, intptr_t, uint16_t *, intptr_t, int );
void x264_prefetch_fenc_420_mmx2( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_prefetch_fenc_422_mmx2( pixel *, intptr_t, pixel *, intptr_t, int );
void x264_prefetch_ref_mmx2( pixel *, intptr_t, int );
void x264_plane_copy_core_sse( pixel *, intptr_t, pixel *, intptr_t, int w, int h );
void x264_plane_copy_core_avx( pixel *, intptr_t, pixel *, intptr_t, int w, int h );
void x264_plane_copy_swap_core_ssse3( pixel *, intptr_t, pixel *, intptr_t, int w, int h );
void x264_plane_copy_swap_core_avx2 ( pixel *, intptr_t, pixel *, intptr_t, int w, int h );
void x264_plane_copy_interleave_core_mmx2( pixel *dst,  intptr_t i_dst,
pixel *srcu, intptr_t i_srcu,
pixel *srcv, intptr_t i_srcv, int w, int h );
void x264_plane_copy_interleave_core_sse2( pixel *dst,  intptr_t i_dst,
pixel *srcu, intptr_t i_srcu,
pixel *srcv, intptr_t i_srcv, int w, int h );
void x264_plane_copy_interleave_core_avx( pixel *dst,  intptr_t i_dst,
pixel *srcu, intptr_t i_srcu,
pixel *srcv, intptr_t i_srcv, int w, int h );
void x264_plane_copy_deinterleave_mmx( pixel *dstu, intptr_t i_dstu,
pixel *dstv, intptr_t i_dstv,
pixel *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_sse2( pixel *dstu, intptr_t i_dstu,
pixel *dstv, intptr_t i_dstv,
pixel *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_ssse3( uint8_t *dstu, intptr_t i_dstu,
uint8_t *dstv, intptr_t i_dstv,
uint8_t *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_avx( uint16_t *dstu, intptr_t i_dstu,
uint16_t *dstv, intptr_t i_dstv,
uint16_t *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_rgb_sse2 ( pixel *dsta, intptr_t i_dsta,
pixel *dstb, intptr_t i_dstb,
pixel *dstc, intptr_t i_dstc,
pixel *src,  intptr_t i_src, int pw, int w, int h );
void x264_plane_copy_deinterleave_rgb_ssse3( pixel *dsta, intptr_t i_dsta,
pixel *dstb, intptr_t i_dstb,
pixel *dstc, intptr_t i_dstc,
pixel *src,  intptr_t i_src, int pw, int w, int h );
void x264_plane_copy_deinterleave_v210_ssse3( uint16_t *dstu, intptr_t i_dstu,
uint16_t *dstv, intptr_t i_dstv,
uint32_t *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_v210_avx  ( uint16_t *dstu, intptr_t i_dstu,
uint16_t *dstv, intptr_t i_dstv,
uint32_t *src,  intptr_t i_src, int w, int h );
void x264_plane_copy_deinterleave_v210_avx2 ( uint16_t *dstu, intptr_t i_dstu,
uint16_t *dstv, intptr_t i_dstv,
uint32_t *src,  intptr_t i_src, int w, int h );
void x264_store_interleave_chroma_mmx2( pixel *dst, intptr_t i_dst, pixel *srcu, pixel *srcv, int height );
void x264_store_interleave_chroma_sse2( pixel *dst, intptr_t i_dst, pixel *srcu, pixel *srcv, int height );
void x264_store_interleave_chroma_avx ( pixel *dst, intptr_t i_dst, pixel *srcu, pixel *srcv, int height );
void x264_load_deinterleave_chroma_fenc_mmx ( pixel *dst, pixel *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fenc_sse2( pixel *dst, pixel *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fenc_ssse3( uint8_t *dst, uint8_t *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fenc_avx( uint16_t *dst, uint16_t *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fdec_mmx ( pixel *dst, pixel *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fdec_sse2( pixel *dst, pixel *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fdec_ssse3( uint8_t *dst, uint8_t *src, intptr_t i_src, int height );
void x264_load_deinterleave_chroma_fdec_avx( uint16_t *dst, uint16_t *src, intptr_t i_src, int height );
void *x264_memcpy_aligned_mmx( void *dst, const void *src, size_t n );
void *x264_memcpy_aligned_sse( void *dst, const void *src, size_t n );
void x264_memzero_aligned_mmx( void *dst, size_t n );
void x264_memzero_aligned_sse( void *dst, size_t n );
void x264_memzero_aligned_avx( void *dst, size_t n );
void x264_integral_init4h_sse4( uint16_t *sum, uint8_t *pix, intptr_t stride );
void x264_integral_init4h_avx2( uint16_t *sum, uint8_t *pix, intptr_t stride );
void x264_integral_init8h_sse4( uint16_t *sum, uint8_t *pix, intptr_t stride );
void x264_integral_init8h_avx ( uint16_t *sum, uint8_t *pix, intptr_t stride );
void x264_integral_init8h_avx2( uint16_t *sum, uint8_t *pix, intptr_t stride );
void x264_integral_init4v_mmx  ( uint16_t *sum8, uint16_t *sum4, intptr_t stride );
void x264_integral_init4v_sse2 ( uint16_t *sum8, uint16_t *sum4, intptr_t stride );
void x264_integral_init4v_ssse3( uint16_t *sum8, uint16_t *sum4, intptr_t stride );
void x264_integral_init4v_avx2( uint16_t *sum8, uint16_t *sum4, intptr_t stride );
void x264_integral_init8v_mmx ( uint16_t *sum8, intptr_t stride );
void x264_integral_init8v_sse2( uint16_t *sum8, intptr_t stride );
void x264_integral_init8v_avx2( uint16_t *sum8, intptr_t stride );
void x264_mbtree_propagate_cost_sse2( int16_t *dst, uint16_t *propagate_in, uint16_t *intra_costs,
uint16_t *inter_costs, uint16_t *inv_qscales, float *fps_factor, int len );
void x264_mbtree_propagate_cost_avx ( int16_t *dst, uint16_t *propagate_in, uint16_t *intra_costs,
uint16_t *inter_costs, uint16_t *inv_qscales, float *fps_factor, int len );
void x264_mbtree_propagate_cost_fma4( int16_t *dst, uint16_t *propagate_in, uint16_t *intra_costs,
uint16_t *inter_costs, uint16_t *inv_qscales, float *fps_factor, int len );
void x264_mbtree_propagate_cost_avx2( int16_t *dst, uint16_t *propagate_in, uint16_t *intra_costs,
uint16_t *inter_costs, uint16_t *inv_qscales, float *fps_factor, int len );
void x264_mbtree_fix8_pack_ssse3( uint16_t *dst, float *src, int count );
void x264_mbtree_fix8_pack_avx2 ( uint16_t *dst, float *src, int count );
void x264_mbtree_fix8_unpack_ssse3( float *dst, uint16_t *src, int count );
void x264_mbtree_fix8_unpack_avx2 ( float *dst, uint16_t *src, int count );
#define MC_CHROMA(cpu)\
void x264_mc_chroma_##cpu( pixel *dstu, pixel *dstv, intptr_t i_dst, pixel *src, intptr_t i_src,\
int dx, int dy, int i_width, int i_height );
MC_CHROMA(mmx2)
MC_CHROMA(sse2)
MC_CHROMA(ssse3)
MC_CHROMA(ssse3_cache64)
MC_CHROMA(avx)
MC_CHROMA(avx2)
#define LOWRES(cpu)\
void x264_frame_init_lowres_core_##cpu( pixel *src0, pixel *dst0, pixel *dsth, pixel *dstv, pixel *dstc,\
intptr_t src_stride, intptr_t dst_stride, int width, int height );
LOWRES(mmx2)
LOWRES(cache32_mmx2)
LOWRES(sse2)
LOWRES(ssse3)
LOWRES(avx)
LOWRES(xop)
LOWRES(avx2)
#define PIXEL_AVG_W(width,cpu)\
void x264_pixel_avg2_w##width##_##cpu( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t );
#define PIXEL_AVG_WALL(cpu)\
PIXEL_AVG_W(4,cpu); PIXEL_AVG_W(8,cpu); PIXEL_AVG_W(10,cpu); PIXEL_AVG_W(12,cpu); PIXEL_AVG_W(16,cpu); PIXEL_AVG_W(18,cpu); PIXEL_AVG_W(20,cpu);
PIXEL_AVG_WALL(mmx2)
PIXEL_AVG_WALL(cache32_mmx2)
PIXEL_AVG_WALL(cache64_mmx2)
PIXEL_AVG_WALL(cache64_sse2)
PIXEL_AVG_WALL(sse2)
PIXEL_AVG_WALL(cache64_ssse3)
PIXEL_AVG_WALL(avx2)
#define PIXEL_AVG_WTAB(instr, name1, name2, name3, name4, name5)\
static void (* const x264_pixel_avg_wtab_##instr[6])( pixel *, intptr_t, pixel *, intptr_t, pixel *, intptr_t ) =\
;
#if HIGH_BIT_DEPTH
#define x264_pixel_avg2_w12_mmx2       x264_pixel_avg2_w10_mmx2
#define x264_pixel_avg2_w20_mmx2       x264_pixel_avg2_w18_mmx2
#define x264_pixel_avg2_w12_sse2         x264_pixel_avg2_w10_sse2
#define x264_pixel_avg2_w20_sse2         x264_pixel_avg2_w18_sse2
#define x264_pixel_avg2_w12_avx2         x264_pixel_avg2_w16_avx2
#define x264_pixel_avg2_w20_avx2         x264_pixel_avg2_w18_avx2
#define x264_pixel_avg2_w12_cache64_ssse3 x264_pixel_avg2_w16_cache64_ssse3
#define x264_pixel_avg2_w12_cache64_sse2 x264_pixel_avg2_w16_cache64_sse2
#define x264_pixel_avg2_w12_sse3         x264_pixel_avg2_w16_sse3
#define x264_pixel_avg2_w12_sse2         x264_pixel_avg2_w16_sse2
PIXEL_AVG_WTAB(mmx2, mmx2, mmx2, mmx2, mmx2, mmx2)
#if HIGH_BIT_DEPTH
PIXEL_AVG_WTAB(sse2, mmx2, sse2, sse2, sse2, sse2)
PIXEL_AVG_WTAB(avx2, mmx2, sse2, avx2, avx2, avx2)
#if ARCH_X86
PIXEL_AVG_WTAB(cache32_mmx2, mmx2, cache32_mmx2, cache32_mmx2, cache32_mmx2, cache32_mmx2)
PIXEL_AVG_WTAB(cache64_mmx2, mmx2, cache64_mmx2, cache64_mmx2, cache64_mmx2, cache64_mmx2)
PIXEL_AVG_WTAB(sse2, mmx2, mmx2, sse2, sse2, sse2)
PIXEL_AVG_WTAB(cache64_sse2, mmx2, cache64_mmx2, cache64_sse2, cache64_sse2, cache64_sse2)
PIXEL_AVG_WTAB(cache64_ssse3, mmx2, cache64_mmx2, cache64_ssse3, cache64_ssse3, cache64_sse2)
PIXEL_AVG_WTAB(cache64_ssse3_atom, mmx2, mmx2, cache64_ssse3, cache64_ssse3, sse2)
PIXEL_AVG_WTAB(avx2, mmx2, mmx2, sse2, sse2, avx2)
#define MC_COPY_WTAB(instr, name1, name2, name3)\
static void (* const x264_mc_copy_wtab_##instr[5])( pixel *, intptr_t, pixel *, intptr_t, int ) =\
;
MC_COPY_WTAB(mmx,mmx,mmx,mmx)
#if HIGH_BIT_DEPTH
MC_COPY_WTAB(sse,mmx,sse,sse)
MC_COPY_WTAB(avx,mmx,sse,avx)
MC_COPY_WTAB(sse,mmx,mmx,sse)
#define MC_WEIGHT_WTAB(function, instr, name1, name2, w12version)\
static void (* x264_mc_##function##_wtab_##instr[6])( pixel *, intptr_t, pixel *, intptr_t, const x264_weight_t *, int ) =\
;
#if HIGH_BIT_DEPTH
MC_WEIGHT_WTAB(weight,mmx2,mmx2,mmx2,12)
MC_WEIGHT_WTAB(offsetadd,mmx2,mmx2,mmx2,12)
MC_WEIGHT_WTAB(offsetsub,mmx2,mmx2,mmx2,12)
MC_WEIGHT_WTAB(weight,sse2,mmx2,sse2,12)
MC_WEIGHT_WTAB(offsetadd,sse2,mmx2,sse2,16)
MC_WEIGHT_WTAB(offsetsub,sse2,mmx2,sse2,16)
static void x264_weight_cache_mmx2( x264_t *h, x264_weight_t *w )
MC_WEIGHT_WTAB(weight,mmx2,mmx2,mmx2,12)
MC_WEIGHT_WTAB(offsetadd,mmx2,mmx2,mmx2,12)
MC_WEIGHT_WTAB(offsetsub,mmx2,mmx2,mmx2,12)
MC_WEIGHT_WTAB(weight,sse2,mmx2,sse2,16)
MC_WEIGHT_WTAB(offsetadd,sse2,mmx2,mmx2,16)
MC_WEIGHT_WTAB(offsetsub,sse2,mmx2,mmx2,16)
MC_WEIGHT_WTAB(weight,ssse3,ssse3,ssse3,16)
MC_WEIGHT_WTAB(weight,avx2,ssse3,avx2,16)
static void x264_weight_cache_mmx2( x264_t *h, x264_weight_t *w )
static void x264_weight_cache_ssse3( x264_t *h, x264_weight_t *w )
#define MC_LUMA(name,instr1,instr2)\
static void mc_luma_##name( pixel *dst,    intptr_t i_dst_stride,\
pixel *src[4], intptr_t i_src_stride,\
int mvx, int mvy,\
int i_width, int i_height, const x264_weight_t *weight )\
MC_LUMA(mmx2,mmx2,mmx)
MC_LUMA(sse2,sse2,sse)
#if HIGH_BIT_DEPTH
MC_LUMA(avx2,avx2,avx)
#if ARCH_X86
MC_LUMA(cache32_mmx2,cache32_mmx2,mmx)
MC_LUMA(cache64_mmx2,cache64_mmx2,mmx)
MC_LUMA(cache64_sse2,cache64_sse2,sse)
MC_LUMA(cache64_ssse3,cache64_ssse3,sse)
MC_LUMA(cache64_ssse3_atom,cache64_ssse3_atom,sse)
#define GET_REF(name)\
static pixel *get_ref_##name( pixel *dst,   intptr_t *i_dst_stride,\
pixel *src[4], intptr_t i_src_stride,\
int mvx, int mvy,\
int i_width, int i_height, const x264_weight_t *weight )\
GET_REF(mmx2)
GET_REF(sse2)
GET_REF(avx2)
#if !HIGH_BIT_DEPTH
#if ARCH_X86
GET_REF(cache32_mmx2)
GET_REF(cache64_mmx2)
GET_REF(cache64_sse2)
GET_REF(cache64_ssse3)
GET_REF(cache64_ssse3_atom)
#define HPEL(align, cpu, cpuv, cpuc, cpuh)\
void x264_hpel_filter_v_##cpuv( pixel *dst, pixel *src, int16_t *buf, intptr_t stride, intptr_t width);\
void x264_hpel_filter_c_##cpuc( pixel *dst, int16_t *buf, intptr_t width );\
void x264_hpel_filter_h_##cpuh( pixel *dst, pixel *src, intptr_t width );\
static void x264_hpel_filter_##cpu( pixel *dsth, pixel *dstv, pixel *dstc, pixel *src,\
intptr_t stride, int width, int height, int16_t *buf )\
HPEL(8, mmx2, mmx2, mmx2, mmx2)
#if HIGH_BIT_DEPTH
HPEL(16, sse2, sse2, sse2, sse2)
HPEL(16, sse2_amd, mmx2, mmx2, sse2)
#if ARCH_X86_64
void x264_hpel_filter_sse2 ( uint8_t *dsth, uint8_t *dstv, uint8_t *dstc, uint8_t *src, intptr_t stride, int width, int height, int16_t *buf );
void x264_hpel_filter_ssse3( uint8_t *dsth, uint8_t *dstv, uint8_t *dstc, uint8_t *src, intptr_t stride, int width, int height, int16_t *buf );
void x264_hpel_filter_avx  ( uint8_t *dsth, uint8_t *dstv, uint8_t *dstc, uint8_t *src, intptr_t stride, int width, int height, int16_t *buf );
void x264_hpel_filter_avx2 ( uint8_t *dsth, uint8_t *dstv, uint8_t *dstc, uint8_t *src, intptr_t stride, int width, int height, int16_t *buf );
HPEL(16, sse2, sse2, sse2, sse2)
HPEL(16, ssse3, ssse3, ssse3, ssse3)
HPEL(16, avx, avx, avx, avx)
HPEL(32, avx2, avx2, avx2, avx2)
PLANE_COPY(16, sse)
PLANE_COPY(32, avx)
PLANE_COPY_SWAP(16, ssse3)
PLANE_COPY_SWAP(32, avx2)
PLANE_INTERLEAVE(mmx2)
PLANE_INTERLEAVE(sse2)
#if HIGH_BIT_DEPTH
PLANE_INTERLEAVE(avx)
#if HAVE_X86_INLINE_ASM
#undef MC_CLIP_ADD
#define MC_CLIP_ADD(s,x)\
do\
while( 0 )
#undef MC_CLIP_ADD2
#define MC_CLIP_ADD2(s,x)\
do\
while( 0 )
PROPAGATE_LIST(ssse3)
PROPAGATE_LIST(avx)
PROPAGATE_LIST(avx2)
void x264_mc_init_mmx( int cpu, x264_mc_functions_t *pf )
