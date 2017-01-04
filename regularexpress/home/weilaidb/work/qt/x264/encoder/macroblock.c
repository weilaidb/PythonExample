#define ZIG(i,y,x) level[i] = dct[x*2+y];
static inline void zigzag_scan_2x2_dc( dctcoef level[4], dctcoef dct[4] )
#undef ZIG
static inline void zigzag_scan_2x4_dc( dctcoef level[8], dctcoef dct[8] )
#define IDCT_DEQUANT_2X2_START \
int d0 = dct[0] + dct[1]; \
int d1 = dct[2] + dct[3]; \
int d2 = dct[0] - dct[1]; \
int d3 = dct[2] - dct[3]; \
int dmf = dequant_mf[i_qp%6][0] << i_qp/6;
static inline void idct_dequant_2x2_dc( dctcoef dct[4], dctcoef dct4x4[4][16], int dequant_mf[6][16], int i_qp )
static inline void idct_dequant_2x2_dconly( dctcoef dct[4], int dequant_mf[6][16], int i_qp )
#undef IDCT_2X2_DEQUANT_START
static inline void dct2x2dc( dctcoef d[4], dctcoef dct4x4[4][16] )
static ALWAYS_INLINE int array_non_zero( dctcoef *v, int i_count )
static void x264_mb_encode_i16x16( x264_t *h, int p, int i_qp )
static ALWAYS_INLINE int x264_mb_optimize_chroma_dc( x264_t *h, dctcoef *dct_dc, int dequant_mf[6][16], int i_qp, int chroma422 )
static ALWAYS_INLINE void x264_mb_encode_chroma_internal( x264_t *h, int b_inter, int i_qp, int chroma422 )
void x264_mb_encode_chroma( x264_t *h, int b_inter, int i_qp )
static void x264_macroblock_encode_skip( x264_t *h )
void x264_predict_lossless_chroma( x264_t *h, int i_mode )
void x264_predict_lossless_4x4( x264_t *h, pixel *p_dst, int p, int idx, int i_mode )
void x264_predict_lossless_8x8( x264_t *h, pixel *p_dst, int p, int idx, int i_mode, pixel edge[36] )
void x264_predict_lossless_16x16( x264_t *h, int p, int i_mode )
static ALWAYS_INLINE void x264_macroblock_encode_internal( x264_t *h, int plane_count, int chroma )
void x264_macroblock_encode( x264_t *h )
static ALWAYS_INLINE int x264_macroblock_probe_skip_internal( x264_t *h, int b_bidir, int plane_count, int chroma )
int x264_macroblock_probe_skip( x264_t *h, int b_bidir )
void x264_noise_reduction_update( x264_t *h )
static ALWAYS_INLINE void x264_macroblock_encode_p8x8_internal( x264_t *h, int i8, int plane_count, int chroma )
void x264_macroblock_encode_p8x8( x264_t *h, int i8 )
static ALWAYS_INLINE void x264_macroblock_encode_p4x4_internal( x264_t *h, int i4, int plane_count )
void x264_macroblock_encode_p4x4( x264_t *h, int i8 )
