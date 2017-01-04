#define X264_ENCODER_MACROBLOCK_H
extern const int x264_lambda2_tab[QP_MAX_MAX+1];
extern const uint16_t x264_lambda_tab[QP_MAX_MAX+1];
void x264_rdo_init( void );
int x264_macroblock_probe_skip( x264_t *h, int b_bidir );
#define x264_macroblock_probe_pskip( h )\
x264_macroblock_probe_skip( h, 0 )
#define x264_macroblock_probe_bskip( h )\
x264_macroblock_probe_skip( h, 1 )
void x264_predict_lossless_4x4( x264_t *h, pixel *p_dst, int p, int idx, int i_mode );
void x264_predict_lossless_8x8( x264_t *h, pixel *p_dst, int p, int idx, int i_mode, pixel edge[36] );
void x264_predict_lossless_16x16( x264_t *h, int p, int i_mode );
void x264_predict_lossless_chroma( x264_t *h, int i_mode );
void x264_macroblock_encode      ( x264_t *h );
void x264_macroblock_write_cabac ( x264_t *h, x264_cabac_t *cb );
void x264_macroblock_write_cavlc ( x264_t *h );
void x264_macroblock_encode_p8x8( x264_t *h, int i8 );
void x264_macroblock_encode_p4x4( x264_t *h, int i4 );
void x264_mb_encode_chroma( x264_t *h, int b_inter, int i_qp );
void x264_cabac_mb_skip( x264_t *h, int b_skip );
int x264_quant_luma_dc_trellis( x264_t *h, dctcoef *dct, int i_quant_cat, int i_qp,
int ctx_block_cat, int b_intra, int idx );
int x264_quant_chroma_dc_trellis( x264_t *h, dctcoef *dct, int i_qp, int b_intra, int idx );
int x264_quant_4x4_trellis( x264_t *h, dctcoef *dct, int i_quant_cat,
int i_qp, int ctx_block_cat, int b_intra, int b_chroma, int idx );
int x264_quant_8x8_trellis( x264_t *h, dctcoef *dct, int i_quant_cat,
int i_qp, int ctx_block_cat, int b_intra, int b_chroma, int idx );
void x264_noise_reduction_update( x264_t *h );
static ALWAYS_INLINE int x264_quant_4x4( x264_t *h, dctcoef dct[16], int i_qp, int ctx_block_cat, int b_intra, int p, int idx )
static ALWAYS_INLINE int x264_quant_8x8( x264_t *h, dctcoef dct[64], int i_qp, int ctx_block_cat, int b_intra, int p, int idx )
#define STORE_8x8_NNZ( p, idx, nz )\
do\
while( 0 )
#define CLEAR_16x16_NNZ( p ) \
do\
while( 0 )
#define FOREACH_BIT(idx,start,mask) for( int idx = start, msk = mask, skip; msk && (skip = x264_ctz_4bit(msk), idx += skip, msk >>= skip+1, 1); idx++ )
static ALWAYS_INLINE void x264_mb_encode_i4x4( x264_t *h, int p, int idx, int i_qp, int i_mode, int b_predict )
static ALWAYS_INLINE void x264_mb_encode_i8x8( x264_t *h, int p, int idx, int i_qp, int i_mode, pixel *edge, int b_predict )
