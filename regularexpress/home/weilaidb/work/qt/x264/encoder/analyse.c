typedef struct
x264_mb_analysis_list_t;
typedef struct
x264_mb_analysis_t;
const uint16_t x264_lambda_tab[QP_MAX_MAX+1] =
;
const int x264_lambda2_tab[QP_MAX_MAX+1] =
;
const uint8_t x264_exp2_lut[64] =
;
const float x264_log2_lut[128] =
;
const float x264_log2_lz_lut[32] =
;
static const int x264_trellis_lambda2_tab[2][QP_MAX_MAX+1] =
;
#define MAX_CHROMA_LAMBDA_OFFSET 36
static const uint16_t x264_chroma_lambda2_offset_tab[MAX_CHROMA_LAMBDA_OFFSET+1] =
;
static const uint8_t i_mb_b_cost_table[X264_MBTYPE_MAX] =
;
static const uint8_t i_mb_b16x8_cost_table[17] =
;
static const uint8_t i_sub_mb_b_cost_table[13] =
;
static const uint8_t i_sub_mb_p_cost_table[4] =
;
static void x264_analyse_update_cache( x264_t *h, x264_mb_analysis_t *a );
static uint16_t x264_cost_ref[QP_MAX+1][3][33];
static UNUSED x264_pthread_mutex_t cost_ref_mutex = X264_PTHREAD_MUTEX_INITIALIZER;
static uint16_t x264_cost_i4x4_mode[(QP_MAX+2)*32];
static int init_costs( x264_t *h, float *logs, int qp )
int x264_analyse_init_costs( x264_t *h )
void x264_analyse_free_costs( x264_t *h )
void x264_analyse_weight_frame( x264_t *h, int end )
static void x264_mb_analyse_load_costs( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_init_qp( x264_t *h, x264_mb_analysis_t *a, int qp )
static void x264_mb_analyse_init( x264_t *h, x264_mb_analysis_t *a, int qp )
static const int8_t i16x16_mode_available[5][5] =
;
static const int8_t chroma_mode_available[5][5] =
;
static const int8_t i8x8_mode_available[2][5][10] =
;
static const int8_t i4x4_mode_available[2][5][10] =
;
static ALWAYS_INLINE const int8_t *predict_16x16_mode_available( int i_neighbour )
static ALWAYS_INLINE const int8_t *predict_chroma_mode_available( int i_neighbour )
static ALWAYS_INLINE const int8_t *predict_8x8_mode_available( int force_intra, int i_neighbour, int i )
static ALWAYS_INLINE const int8_t *predict_4x4_mode_available( int force_intra, int i_neighbour, int i )
static void inline x264_psy_trellis_init( x264_t *h, int do_both_dct )
static inline void x264_mb_init_fenc_cache( x264_t *h, int b_satd )
static void x264_mb_analyse_intra_chroma( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_intra( x264_t *h, x264_mb_analysis_t *a, int i_satd_inter )
static void x264_intra_rd( x264_t *h, x264_mb_analysis_t *a, int i_satd_thresh )
static void x264_intra_rd_refine( x264_t *h, x264_mb_analysis_t *a )
#define LOAD_FENC(m, src, xoff, yoff) \
#define LOAD_HPELS(m, src, list, ref, xoff, yoff) \
#define LOAD_WPELS(m, src, list, ref, xoff, yoff) \
(m)->p_fref_w = &(src)[(xoff)+(yoff)*(m)->i_stride[0]]; \
(m)->weight = h->sh.weight[i_ref];
#define REF_COST(list, ref) \
(a->p_cost_ref[list][ref])
static void x264_mb_analyse_inter_p16x16( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_inter_p8x8_mixed_ref( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_inter_p8x8( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_inter_p16x8( x264_t *h, x264_mb_analysis_t *a, int i_best_satd )
static void x264_mb_analyse_inter_p8x16( x264_t *h, x264_mb_analysis_t *a, int i_best_satd )
static ALWAYS_INLINE int x264_mb_analyse_inter_p4x4_chroma_internal( x264_t *h, x264_mb_analysis_t *a,
pixel **p_fref, int i8x8, int size, int chroma )
static int x264_mb_analyse_inter_p4x4_chroma( x264_t *h, x264_mb_analysis_t *a, pixel **p_fref, int i8x8, int size )
static void x264_mb_analyse_inter_p4x4( x264_t *h, x264_mb_analysis_t *a, int i8x8 )
static void x264_mb_analyse_inter_p8x4( x264_t *h, x264_mb_analysis_t *a, int i8x8 )
static void x264_mb_analyse_inter_p4x8( x264_t *h, x264_mb_analysis_t *a, int i8x8 )
static ALWAYS_INLINE int x264_analyse_bi_chroma( x264_t *h, x264_mb_analysis_t *a, int idx, int i_pixel )
static void x264_mb_analyse_inter_direct( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_inter_b16x16( x264_t *h, x264_mb_analysis_t *a )
static inline void x264_mb_cache_mv_p8x8( x264_t *h, x264_mb_analysis_t *a, int i )
static void x264_mb_load_mv_direct8x8( x264_t *h, int idx )
#define CACHE_MV_BI(x,y,dx,dy,me0,me1,part) \
if( x264_mb_partition_listX_table[0][part] ) \
\
else \
\
if( x264_mb_partition_listX_table[1][part] ) \
\
else \
static inline void x264_mb_cache_mv_b8x8( x264_t *h, x264_mb_analysis_t *a, int i, int b_mvd )
static inline void x264_mb_cache_mv_b16x8( x264_t *h, x264_mb_analysis_t *a, int i, int b_mvd )
static inline void x264_mb_cache_mv_b8x16( x264_t *h, x264_mb_analysis_t *a, int i, int b_mvd )
#undef CACHE_MV_BI
static void x264_mb_analyse_inter_b8x8_mixed_ref( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_inter_b8x8( x264_t *h, x264_mb_analysis_t *a )
static void x264_mb_analyse_inter_b16x8( x264_t *h, x264_mb_analysis_t *a, int i_best_satd )
static void x264_mb_analyse_inter_b8x16( x264_t *h, x264_mb_analysis_t *a, int i_best_satd )
static void x264_mb_analyse_p_rd( x264_t *h, x264_mb_analysis_t *a, int i_satd )
static void x264_mb_analyse_b_rd( x264_t *h, x264_mb_analysis_t *a, int i_satd_inter )
static void x264_refine_bidir( x264_t *h, x264_mb_analysis_t *a )
static inline void x264_mb_analyse_transform( x264_t *h )
static inline void x264_mb_analyse_transform_rd( x264_t *h, x264_mb_analysis_t *a, int *i_satd, int *i_rd )
static inline void x264_mb_analyse_qp_rd( x264_t *h, x264_mb_analysis_t *a )
void x264_macroblock_analyse( x264_t *h )
static void x264_analyse_update_cache( x264_t *h, x264_mb_analysis_t *a  )
