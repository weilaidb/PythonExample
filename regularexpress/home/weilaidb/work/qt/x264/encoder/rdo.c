#define RDO_SKIP_BS 1
uint8_t x264_cabac_transition_unary[15][128];
uint16_t x264_cabac_size_unary[15][128];
static uint8_t cabac_transition_5ones[128];
static uint16_t cabac_size_5ones[128];
#define bs_write1(s,v)     ((s)->i_bits_encoded += 1)
#define bs_write(s,n,v)    ((s)->i_bits_encoded += (n))
#define bs_write_ue(s,v)   ((s)->i_bits_encoded += bs_size_ue(v))
#define bs_write_se(s,v)   ((s)->i_bits_encoded += bs_size_se(v))
#define bs_write_te(s,v,l) ((s)->i_bits_encoded += bs_size_te(v,l))
#define x264_macroblock_write_cavlc  static x264_macroblock_size_cavlc
#undef  x264_cabac_encode_decision
#undef  x264_cabac_encode_decision_noup
#undef  x264_cabac_encode_bypass
#undef  x264_cabac_encode_terminal
#define x264_cabac_encode_decision(c,x,v) x264_cabac_size_decision(c,x,v)
#define x264_cabac_encode_decision_noup(c,x,v) x264_cabac_size_decision_noup(c,x,v)
#define x264_cabac_encode_terminal(c)     ((c)->f8_bits_encoded += 7)
#define x264_cabac_encode_bypass(c,v)     ((c)->f8_bits_encoded += 256)
#define x264_cabac_encode_ue_bypass(c,e,v) ((c)->f8_bits_encoded += (bs_size_ue_big(v+(1<<e)-1)-e)<<8)
#define x264_macroblock_write_cabac  static x264_macroblock_size_cabac
#define COPY_CABAC h->mc.memcpy_aligned( &cabac_tmp.f8_bits_encoded, &h->cabac.f8_bits_encoded, \
sizeof(x264_cabac_t) - offsetof(x264_cabac_t,f8_bits_encoded) - (CHROMA444 ? 0 : (1024+12)-460) )
#define COPY_CABAC_PART( pos, size )\
memcpy( &cb->state[pos], &h->cabac.state[pos], size )
static ALWAYS_INLINE uint64_t cached_hadamard( x264_t *h, int size, int x, int y )
static ALWAYS_INLINE int cached_satd( x264_t *h, int size, int x, int y )
static inline int ssd_plane( x264_t *h, int size, int p, int x, int y )
static inline int ssd_mb( x264_t *h )
static int x264_rd_cost_mb( x264_t *h, int i_lambda2 )
static uint64_t x264_rd_cost_subpart( x264_t *h, int i_lambda2, int i4, int i_pixel )
uint64_t x264_rd_cost_part( x264_t *h, int i_lambda2, int i4, int i_pixel )
static uint64_t x264_rd_cost_i8x8( x264_t *h, int i_lambda2, int i8, int i_mode, pixel edge[4][32] )
static uint64_t x264_rd_cost_i4x4( x264_t *h, int i_lambda2, int i4, int i_mode )
static uint64_t x264_rd_cost_chroma( x264_t *h, int i_lambda2, int i_mode, int b_dct )
#define TRELLIS_SCORE_MAX -1LL
#define TRELLIS_SCORE_BIAS 1LL<<60;
#define CABAC_SIZE_BITS 8
#define LAMBDA_BITS 4
void x264_rdo_init( void )
typedef struct
trellis_node_t;
typedef struct
trellis_level_t;
#define SIGN(x,y) ((x^(y >> 31))-(y >> 31))
#define SET_LEVEL(ndst, nsrc, l)
static NOINLINE
int trellis_dc_shortcut( int sign_coef, int quant_coef, int unquant_mf, int coef_weight, int lambda2, uint8_t *cabac_state, int cost_sig )
static ALWAYS_INLINE
int trellis_coef( int j, int const_level, int abs_level, int prefix, int suffix_cost,
int node_ctx, int level1_ctx, int levelgt1_ctx, uint64_t ssd, int cost_siglast[3],
trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used, int lambda2, uint8_t *level_state )
static NOINLINE
int trellis_coef0_0( uint64_t ssd0, trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used )
static NOINLINE
int trellis_coef0_1( uint64_t ssd0, trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used )
#define COEF(const_level, ctx_hi, j, ...)\
if( !j || (int64_t)nodes_prev[j].score >= 0 )\
levels_used = trellis_coef( j, const_level, abs_level, prefix, suffix_cost, __VA_ARGS__,\
j?ssd1:ssd0, cost_siglast, nodes_cur, nodes_prev,\
level_tree, levels_used, lambda2, level_state );\
else if( !ctx_hi )\
return levels_used;
static NOINLINE
int trellis_coef1_0( uint64_t ssd0, uint64_t ssd1, int cost_siglast[3],
trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used, int lambda2,
uint8_t *level_state )
static NOINLINE
int trellis_coef1_1( uint64_t ssd0, uint64_t ssd1, int cost_siglast[3],
trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used, int lambda2,
uint8_t *level_state )
static NOINLINE
int trellis_coefn_0( int abs_level, uint64_t ssd0, uint64_t ssd1, int cost_siglast[3],
trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used, int lambda2,
uint8_t *level_state, int levelgt1_ctx )
static NOINLINE
int trellis_coefn_1( int abs_level, uint64_t ssd0, uint64_t ssd1, int cost_siglast[3],
trellis_node_t *nodes_cur, trellis_node_t *nodes_prev,
trellis_level_t *level_tree, int levels_used, int lambda2,
uint8_t *level_state, int levelgt1_ctx )
static ALWAYS_INLINE
int quant_trellis_cabac( x264_t *h, dctcoef *dct,
udctcoef *quant_mf, udctcoef *quant_bias, const int *unquant_mf,
const uint8_t *zigzag, int ctx_block_cat, int lambda2, int b_ac,
int b_chroma, int dc, int num_coefs, int idx )
static ALWAYS_INLINE
int quant_trellis_cavlc( x264_t *h, dctcoef *dct,
const udctcoef *quant_mf, const int *unquant_mf,
const uint8_t *zigzag, int ctx_block_cat, int lambda2, int b_ac,
int b_chroma, int dc, int num_coefs, int idx, int b_8x8 )
int x264_quant_luma_dc_trellis( x264_t *h, dctcoef *dct, int i_quant_cat, int i_qp, int ctx_block_cat, int b_intra, int idx )
static const uint8_t x264_zigzag_scan2x2[4] = ;
static const uint8_t x264_zigzag_scan2x4[8] = ;
int x264_quant_chroma_dc_trellis( x264_t *h, dctcoef *dct, int i_qp, int b_intra, int idx )
int x264_quant_4x4_trellis( x264_t *h, dctcoef *dct, int i_quant_cat,
int i_qp, int ctx_block_cat, int b_intra, int b_chroma, int idx )
int x264_quant_8x8_trellis( x264_t *h, dctcoef *dct, int i_quant_cat,
int i_qp, int ctx_block_cat, int b_intra, int b_chroma, int idx )
