static const uint8_t i_alpha_table[52+12*3] =
;
static const uint8_t i_beta_table[52+12*3] =
;
static const int8_t i_tc0_table[52+12*3][4] =
;
#define alpha_table(x) i_alpha_table[(x)+24]
#define beta_table(x)  i_beta_table[(x)+24]
#define tc0_table(x)   i_tc0_table[(x)+24]
static ALWAYS_INLINE void deblock_edge_luma_c( pixel *pix, intptr_t xstride, int alpha, int beta, int8_t tc0 )
static inline void deblock_luma_c( pixel *pix, intptr_t xstride, intptr_t ystride, int alpha, int beta, int8_t *tc0 )
static void deblock_h_luma_mbaff_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static void deblock_v_luma_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static void deblock_h_luma_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static ALWAYS_INLINE void deblock_edge_chroma_c( pixel *pix, intptr_t xstride, int alpha, int beta, int8_t tc )
static ALWAYS_INLINE void deblock_chroma_c( pixel *pix, int height, intptr_t xstride, intptr_t ystride, int alpha, int beta, int8_t *tc0 )
static void deblock_h_chroma_mbaff_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static void deblock_v_chroma_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static void deblock_h_chroma_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static void deblock_h_chroma_422_c( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static ALWAYS_INLINE void deblock_edge_luma_intra_c( pixel *pix, intptr_t xstride, int alpha, int beta )
static inline void deblock_luma_intra_c( pixel *pix, intptr_t xstride, intptr_t ystride, int alpha, int beta )
static void deblock_h_luma_intra_mbaff_c( pixel *pix, intptr_t ystride, int alpha, int beta )
static void deblock_v_luma_intra_c( pixel *pix, intptr_t stride, int alpha, int beta )
static void deblock_h_luma_intra_c( pixel *pix, intptr_t stride, int alpha, int beta )
static ALWAYS_INLINE void deblock_edge_chroma_intra_c( pixel *pix, intptr_t xstride, int alpha, int beta )
static ALWAYS_INLINE void deblock_chroma_intra_c( pixel *pix, int width, int height, intptr_t xstride, intptr_t ystride, int alpha, int beta )
static void deblock_h_chroma_intra_mbaff_c( pixel *pix, intptr_t stride, int alpha, int beta )
static void deblock_v_chroma_intra_c( pixel *pix, intptr_t stride, int alpha, int beta )
static void deblock_h_chroma_intra_c( pixel *pix, intptr_t stride, int alpha, int beta )
static void deblock_h_chroma_422_intra_c( pixel *pix, intptr_t stride, int alpha, int beta )
static void deblock_strength_c( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4], int mvy_limit,
int bframe )
static ALWAYS_INLINE void deblock_edge( x264_t *h, pixel *pix, intptr_t i_stride, uint8_t bS[4], int i_qp,
int a, int b, int b_chroma, x264_deblock_inter_t pf_inter )
static ALWAYS_INLINE void deblock_edge_intra( x264_t *h, pixel *pix, intptr_t i_stride, uint8_t bS[4], int i_qp,
int a, int b, int b_chroma, x264_deblock_intra_t pf_intra )
static ALWAYS_INLINE void x264_macroblock_cache_load_neighbours_deblock( x264_t *h, int mb_x, int mb_y )
void x264_frame_deblock_row( x264_t *h, int mb_y )
void x264_macroblock_deblock( x264_t *h )
#if HAVE_MMX
void x264_deblock_v_luma_sse2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_luma_avx ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_luma_sse2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_luma_avx ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_chroma_sse2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_chroma_avx ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_sse2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_avx ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_mbaff_sse2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_mbaff_avx ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_422_mmx2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_422_sse2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_422_avx ( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_luma_intra_sse2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_luma_intra_avx ( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_luma_intra_sse2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_luma_intra_avx ( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_chroma_intra_sse2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_chroma_intra_avx ( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_sse2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_avx ( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_422_intra_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_422_intra_sse2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_422_intra_avx ( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_strength_mmx2 ( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4],
int mvy_limit, int bframe );
void x264_deblock_strength_sse2 ( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4],
int mvy_limit, int bframe );
void x264_deblock_strength_ssse3( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4],
int mvy_limit, int bframe );
void x264_deblock_strength_avx  ( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4],
int mvy_limit, int bframe );
void x264_deblock_strength_avx2 ( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4],
int mvy_limit, int bframe );
void x264_deblock_h_chroma_intra_mbaff_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_mbaff_sse2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_mbaff_avx ( pixel *pix, intptr_t stride, int alpha, int beta );
#if ARCH_X86
void x264_deblock_h_luma_mmx2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v8_luma_mmx2( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_chroma_mmx2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_mmx2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_mbaff_mmx2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_luma_intra_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v8_luma_intra_mmx2( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_chroma_intra_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_mbaff_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
#if HIGH_BIT_DEPTH
void x264_deblock_v_luma_mmx2( pixel *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_luma_intra_mmx2( pixel *pix, intptr_t stride, int alpha, int beta );
static void x264_deblock_v_luma_mmx2( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 )
static void x264_deblock_v_luma_intra_mmx2( uint8_t *pix, intptr_t stride, int alpha, int beta )
#if ARCH_PPC
void x264_deblock_v_luma_altivec( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_luma_altivec( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
#if HAVE_ARMV6 || ARCH_AARCH64
void x264_deblock_v_luma_neon  ( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_luma_neon  ( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_chroma_neon( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_neon( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_strength_neon( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4],
int mvy_limit, int bframe );
void x264_deblock_h_chroma_422_neon( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_mbaff_neon( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_intra_mbaff_neon( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_neon( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_422_intra_neon( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_chroma_intra_neon( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_luma_intra_neon( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_luma_intra_neon( uint8_t *pix, intptr_t stride, int alpha, int beta );
#if !HIGH_BIT_DEPTH
#if HAVE_MSA
void x264_deblock_v_luma_msa( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_luma_msa( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_chroma_msa( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_h_chroma_msa( uint8_t *pix, intptr_t stride, int alpha, int beta, int8_t *tc0 );
void x264_deblock_v_luma_intra_msa( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_luma_intra_msa( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_v_chroma_intra_msa( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_h_chroma_intra_msa( uint8_t *pix, intptr_t stride, int alpha, int beta );
void x264_deblock_strength_msa( uint8_t nnz[X264_SCAN8_SIZE], int8_t ref[2][X264_SCAN8_LUMA_SIZE],
int16_t mv[2][X264_SCAN8_LUMA_SIZE][2], uint8_t bs[2][8][4], int mvy_limit,
int bframe );
void x264_deblock_init( int cpu, x264_deblock_function_t *pf, int b_mbaff )
