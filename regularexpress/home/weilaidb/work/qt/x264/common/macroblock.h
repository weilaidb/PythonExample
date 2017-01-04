#define X264_MACROBLOCK_H
enum macroblock_position_e
;
static const uint8_t x264_pred_i4x4_neighbors[12] =
;
#define IS_INTRA(type) ( (type) == I_4x4 || (type) == I_8x8 || (type) == I_16x16 || (type) == I_PCM )
#define IS_SKIP(type)  ( (type) == P_SKIP || (type) == B_SKIP )
#define IS_DIRECT(type)  ( (type) == B_DIRECT )
enum mb_class_e
;
static const uint8_t x264_mb_type_fix[X264_MBTYPE_MAX] =
;
static const uint8_t x264_mb_type_list_table[X264_MBTYPE_MAX][2][2] =
;
#define IS_SUB4x4(type) ( (type == D_L0_4x4)||(type == D_L1_4x4)||(type == D_BI_4x4) )
#define IS_SUB4x8(type) ( (type == D_L0_4x8)||(type == D_L1_4x8)||(type == D_BI_4x8) )
#define IS_SUB8x4(type) ( (type == D_L0_8x4)||(type == D_L1_8x4)||(type == D_BI_8x4) )
#define IS_SUB8x8(type) ( (type == D_L0_8x8)||(type == D_L1_8x8)||(type == D_BI_8x8)||(type == D_DIRECT_8x8) )
enum mb_partition_e
;
static const uint8_t x264_mb_partition_listX_table[2][17] =
;
static const uint8_t x264_mb_partition_count_table[17] =
;
static const uint8_t x264_mb_partition_pixel_table[17] =
;
static const uint8_t x264_zigzag_scan4[2][16] =
;
static const uint8_t x264_zigzag_scan8[2][64] =
;
static const uint8_t block_idx_x[16] =
;
static const uint8_t block_idx_y[16] =
;
static const uint8_t block_idx_xy[4][4] =
;
static const uint8_t block_idx_xy_1d[16] =
;
static const uint8_t block_idx_yx_1d[16] =
;
static const uint8_t block_idx_xy_fenc[16] =
;
static const uint16_t block_idx_xy_fdec[16] =
;
#define QP(qP) ( (qP)+QP_BD_OFFSET )
static const uint8_t i_chroma_qp_table[QP_MAX+1+12*2] =
;
#undef QP
enum cabac_ctx_block_cat_e
;
static const uint8_t ctx_cat_plane[6][3] =
;
int  x264_macroblock_cache_allocate( x264_t *h );
void x264_macroblock_cache_free( x264_t *h );
int  x264_macroblock_thread_allocate( x264_t *h, int b_lookahead );
void x264_macroblock_thread_free( x264_t *h, int b_lookahead );
void x264_macroblock_slice_init( x264_t *h );
void x264_macroblock_thread_init( x264_t *h );
void x264_macroblock_cache_load_progressive( x264_t *h, int mb_x, int mb_y );
void x264_macroblock_cache_load_interlaced( x264_t *h, int mb_x, int mb_y );
void x264_macroblock_deblock_strength( x264_t *h );
void x264_macroblock_cache_save( x264_t *h );
void x264_macroblock_bipred_init( x264_t *h );
void x264_prefetch_fenc( x264_t *h, x264_frame_t *fenc, int i_mb_x, int i_mb_y );
void x264_copy_column8( pixel *dst, pixel *src );
void x264_mb_predict_mv_16x16( x264_t *h, int i_list, int i_ref, int16_t mvp[2] );
void x264_mb_predict_mv_pskip( x264_t *h, int16_t mv[2] );
void x264_mb_predict_mv( x264_t *h, int i_list, int idx, int i_width, int16_t mvp[2] );
int x264_mb_predict_mv_direct16x16( x264_t *h, int *b_changed );
void x264_mb_predict_mv_ref16x16( x264_t *h, int i_list, int i_ref, int16_t mvc[8][2], int *i_mvc );
void x264_mb_mc( x264_t *h );
void x264_mb_mc_8x8( x264_t *h, int i8 );
static ALWAYS_INLINE uint32_t pack16to32( uint32_t a, uint32_t b )
static ALWAYS_INLINE uint32_t pack8to16( uint32_t a, uint32_t b )
static ALWAYS_INLINE uint32_t pack8to32( uint32_t a, uint32_t b, uint32_t c, uint32_t d )
static ALWAYS_INLINE uint32_t pack16to32_mask( int a, int b )
static ALWAYS_INLINE uint64_t pack32to64( uint32_t a, uint32_t b )
#if HIGH_BIT_DEPTH
#   define pack_pixel_1to2 pack16to32
#   define pack_pixel_2to4 pack32to64
#   define pack_pixel_1to2 pack8to16
#   define pack_pixel_2to4 pack16to32
static ALWAYS_INLINE int x264_mb_predict_intra4x4_mode( x264_t *h, int idx )
static ALWAYS_INLINE int x264_mb_predict_non_zero_code( x264_t *h, int idx )
static const uint8_t x264_transform_allowed[X264_MBTYPE_MAX] =
;
static ALWAYS_INLINE int x264_mb_transform_8x8_allowed( x264_t *h )
