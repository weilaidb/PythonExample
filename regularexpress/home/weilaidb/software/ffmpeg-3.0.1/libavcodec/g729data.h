#define AVCODEC_G729DATA_H
#define MA_NP                4
#define VQ_1ST_BITS          7
#define VQ_2ND_BITS          5
#define GC_1ST_IDX_BITS_8K   3
#define GC_2ND_IDX_BITS_8K   4
#define GC_1ST_IDX_BITS_6K4  3
#define GC_2ND_IDX_BITS_6K4  3
static const int16_t cb_lsp_1st[1<<VQ_1ST_BITS][10] = ;
static const int16_t cb_lsp_2nd[1<<VQ_2ND_BITS][10] = ;
static const int16_t cb_gain_1st_8k[1<<GC_1ST_IDX_BITS_8K][2] = ;
static const int16_t cb_gain_2nd_8k[1<<GC_2ND_IDX_BITS_8K][2] = ;
static const int16_t cb_gain_1st_6k4[1<<GC_1ST_IDX_BITS_6K4][2] =
;
static const int16_t cb_gain_2nd_6k4[1<<GC_2ND_IDX_BITS_6K4][2] =
;
static const int16_t cb_ma_predictor[2][MA_NP][10] = ;
static const int16_t cb_ma_predictor_sum[2][10] = ;
static const int16_t cb_ma_predictor_sum_inv[2][10] = ;
static const uint16_t ma_prediction_coeff[4] = ;
static const int16_t lsp_init[10]= ;
static const int16_t phase_filter[3][40] =
;
