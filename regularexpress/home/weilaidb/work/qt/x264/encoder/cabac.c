#define RDO_SKIP_BS 0
static inline void x264_cabac_mb_type_intra( x264_t *h, x264_cabac_t *cb, int i_mb_type,
int ctx0, int ctx1, int ctx2, int ctx3, int ctx4, int ctx5 )
#if !RDO_SKIP_BS
static void x264_cabac_field_decoding_flag( x264_t *h, x264_cabac_t *cb )
static void x264_cabac_intra4x4_pred_mode( x264_cabac_t *cb, int i_pred, int i_mode )
static void x264_cabac_intra_chroma_pred_mode( x264_t *h, x264_cabac_t *cb )
static void x264_cabac_cbp_luma( x264_t *h, x264_cabac_t *cb )
static void x264_cabac_cbp_chroma( x264_t *h, x264_cabac_t *cb )
static void x264_cabac_qp_delta( x264_t *h, x264_cabac_t *cb )
#if !RDO_SKIP_BS
void x264_cabac_mb_skip( x264_t *h, int b_skip )
static inline void x264_cabac_subpartition_p( x264_cabac_t *cb, int i_sub )
static ALWAYS_INLINE void x264_cabac_subpartition_b( x264_cabac_t *cb, int i_sub )
static ALWAYS_INLINE void x264_cabac_transform_size( x264_t *h, x264_cabac_t *cb )
static ALWAYS_INLINE void x264_cabac_ref_internal( x264_t *h, x264_cabac_t *cb, int i_list, int idx, int bframe )
static NOINLINE void x264_cabac_ref_p( x264_t *h, x264_cabac_t *cb, int idx )
static NOINLINE void x264_cabac_ref_b( x264_t *h, x264_cabac_t *cb, int i_list, int idx )
static ALWAYS_INLINE int x264_cabac_mvd_cpn( x264_t *h, x264_cabac_t *cb, int i_list, int idx, int l, int mvd, int ctx )
static NOINLINE uint16_t x264_cabac_mvd( x264_t *h, x264_cabac_t *cb, int i_list, int idx, int width )
#define x264_cabac_mvd(h,cb,i_list,idx,width,height)\
do\
while( 0 )
static inline void x264_cabac_8x8_mvd( x264_t *h, x264_cabac_t *cb, int i )
static ALWAYS_INLINE void x264_cabac_mb_header_i( x264_t *h, x264_cabac_t *cb, int i_mb_type, int slice_type, int chroma )
static ALWAYS_INLINE void x264_cabac_mb_header_p( x264_t *h, x264_cabac_t *cb, int i_mb_type, int chroma )
static ALWAYS_INLINE void x264_cabac_mb_header_b( x264_t *h, x264_cabac_t *cb, int i_mb_type, int chroma )
static int ALWAYS_INLINE x264_cabac_cbf_ctxidxinc( x264_t *h, int i_cat, int i_idx, int b_intra, int b_dc )
#if !RDO_SKIP_BS
extern const uint8_t x264_significant_coeff_flag_offset_8x8[2][64];
extern const uint8_t x264_last_coeff_flag_offset_8x8[63];
extern const uint8_t x264_coeff_flag_offset_chroma_422_dc[7];
extern const uint16_t x264_significant_coeff_flag_offset[2][16];
extern const uint16_t x264_last_coeff_flag_offset[2][16];
extern const uint16_t x264_coeff_abs_level_m1_offset[16];
extern const uint8_t x264_count_cat_m1[14];
const uint8_t x264_significant_coeff_flag_offset_8x8[2][64] =
;
const uint8_t x264_last_coeff_flag_offset_8x8[63] =
;
const uint8_t x264_coeff_flag_offset_chroma_422_dc[7] = ;
const uint16_t x264_significant_coeff_flag_offset[2][16] =
;
const uint16_t x264_last_coeff_flag_offset[2][16] =
;
const uint16_t x264_coeff_abs_level_m1_offset[16] =
;
const uint8_t x264_count_cat_m1[14] = ;
static const uint8_t coeff_abs_level1_ctx[8] = ;
static const uint8_t coeff_abs_levelgt1_ctx[8] = ;
static const uint8_t coeff_abs_levelgt1_ctx_chroma_dc[8] = ;
static const uint8_t coeff_abs_level_transition[2][8] = ;
#if !RDO_SKIP_BS
static ALWAYS_INLINE void x264_cabac_block_residual_internal( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l, int chroma422dc )
void x264_cabac_block_residual_c( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
static void ALWAYS_INLINE x264_cabac_block_residual( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
static void x264_cabac_block_residual_422_dc( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
#define x264_cabac_block_residual_8x8( h, cb, cat, l ) x264_cabac_block_residual( h, cb, cat, l )
static void ALWAYS_INLINE x264_cabac_block_residual_internal( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l, int b_8x8, int chroma422dc )
void x264_cabac_block_residual_8x8_rd_c( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
void x264_cabac_block_residual_rd_c( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
static ALWAYS_INLINE void x264_cabac_block_residual_8x8( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
static ALWAYS_INLINE void x264_cabac_block_residual( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
static void x264_cabac_block_residual_422_dc( x264_t *h, x264_cabac_t *cb, int ctx_block_cat, dctcoef *l )
#define x264_cabac_block_residual_cbf_internal( h, cb, ctx_block_cat, i_idx, l, b_intra, b_dc, name )\
do\
while( 0 )
#define x264_cabac_block_residual_dc_cbf( h, cb, ctx_block_cat, i_idx, l, b_intra )\
x264_cabac_block_residual_cbf_internal( h, cb, ctx_block_cat, i_idx, l, b_intra, 1, )
#define x264_cabac_block_residual_cbf( h, cb, ctx_block_cat, i_idx, l, b_intra )\
x264_cabac_block_residual_cbf_internal( h, cb, ctx_block_cat, i_idx, l, b_intra, 0, )
#define x264_cabac_block_residual_8x8_cbf( h, cb, ctx_block_cat, i_idx, l, b_intra )\
x264_cabac_block_residual_cbf_internal( h, cb, ctx_block_cat, i_idx, l, b_intra, 0, _8x8 )
#define x264_cabac_block_residual_422_dc_cbf( h, cb, ch, b_intra )\
x264_cabac_block_residual_cbf_internal( h, cb, DCT_CHROMA_DC, CHROMA_DC+(ch), h->dct.chroma_dc[ch], b_intra, 1, _422_dc )
static ALWAYS_INLINE void x264_macroblock_write_cabac_internal( x264_t *h, x264_cabac_t *cb, int plane_count, int chroma )
void x264_macroblock_write_cabac( x264_t *h, x264_cabac_t *cb )
#if RDO_SKIP_BS
static void x264_partition_size_cabac( x264_t *h, x264_cabac_t *cb, int i8, int i_pixel )
static void x264_subpartition_size_cabac( x264_t *h, x264_cabac_t *cb, int i4, int i_pixel )
static void x264_partition_i8x8_size_cabac( x264_t *h, x264_cabac_t *cb, int i8, int i_mode )
static void x264_partition_i4x4_size_cabac( x264_t *h, x264_cabac_t *cb, int i4, int i_mode )
static void x264_chroma_size_cabac( x264_t *h, x264_cabac_t *cb )
