#define RDO_SKIP_BS 0
static const uint8_t cbp_to_golomb[2][2][48] =
;
static const uint8_t mb_type_b_to_golomb[3][9]=
;
static const uint8_t subpartition_p_to_golomb[4]=
;
static const uint8_t subpartition_b_to_golomb[13]=
;
#define bs_write_vlc(s,v) bs_write( s, (v).i_size, (v).i_bits )
static inline int x264_cavlc_block_residual_escape( x264_t *h, int i_suffix_length, int level )
static int x264_cavlc_block_residual_internal( x264_t *h, int ctx_block_cat, dctcoef *l, int nC )
static const uint8_t ct_index[17] = ;
#define x264_cavlc_block_residual(h,cat,idx,l)\
static void x264_cavlc_qp_delta( x264_t *h )
static void x264_cavlc_mvd( x264_t *h, int i_list, int idx, int width )
static inline void x264_cavlc_8x8_mvd( x264_t *h, int i )
static ALWAYS_INLINE void x264_cavlc_macroblock_luma_residual( x264_t *h, int plane_count )
#if RDO_SKIP_BS
static ALWAYS_INLINE void x264_cavlc_partition_luma_residual( x264_t *h, int i8, int p )
static void x264_cavlc_mb_header_i( x264_t *h, int i_mb_type, int i_mb_i_offset, int chroma )
static ALWAYS_INLINE void x264_cavlc_mb_header_p( x264_t *h, int i_mb_type, int chroma )
static ALWAYS_INLINE void x264_cavlc_mb_header_b( x264_t *h, int i_mb_type, int chroma )
void x264_macroblock_write_cavlc( x264_t *h )
#if RDO_SKIP_BS
static int x264_partition_size_cavlc( x264_t *h, int i8, int i_pixel )
static int x264_subpartition_size_cavlc( x264_t *h, int i4, int i_pixel )
static int x264_cavlc_intra4x4_pred_size( x264_t *h, int i4, int i_mode )
static int x264_partition_i8x8_size_cavlc( x264_t *h, int i8, int i_mode )
static int x264_partition_i4x4_size_cavlc( x264_t *h, int i4, int i_mode )
static int x264_chroma_size_cavlc( x264_t *h )
