#define AVCODEC_G723_1_H
#define SUBFRAMES       4
#define SUBFRAME_LEN    60
#define FRAME_LEN       (SUBFRAME_LEN << 2)
#define HALF_FRAME_LEN  (FRAME_LEN / 2)
#define LPC_FRAME       (HALF_FRAME_LEN + SUBFRAME_LEN)
#define LPC_ORDER       10
#define LSP_BANDS       3
#define LSP_CB_SIZE     256
#define PITCH_MIN       18
#define PITCH_MAX       (PITCH_MIN + 127)
#define PITCH_ORDER     5
#define GRID_SIZE       2
#define PULSE_MAX       6
#define GAIN_LEVELS     24
#define COS_TBL_SIZE    512
MULL2 \
((((a) >> 16) * (b) << 1) + (((a) & 0xffff) * (b) >> 15))
enum FrameType ;
enum Rate ;
typedef struct G723_1_Subframe  G723_1_Subframe;
typedef struct PPFParam  PPFParam;
typedef struct HFParam  HFParam;
typedef struct FCBParam  FCBParam;
typedef struct g723_1_context  G723_1_Context;
ff_g723_1_scale_vector;
ff_g723_1_normalize_bits;
ff_g723_1_dot_product;
ff_g723_1_get_residual;
ff_g723_1_gen_dirac_train;
ff_g723_1_gen_acb_excitation;
ff_g723_1_lsp_interpolate;
ff_g723_1_inverse_quant;
static const uint8_t frame_size[4] = ;
static const int16_t ppf_gain_weight[2] = ;
static const int16_t dc_lsp[LPC_ORDER] = ;
static const int16_t cos_tab[COS_TBL_SIZE + 1] = ;
static const int16_t lsp_band0[LSP_CB_SIZE][3] = ;
static const int16_t lsp_band1[LSP_CB_SIZE][3] = ;
static const int16_t lsp_band2[LSP_CB_SIZE][4] = ;
static const int32_t combinatorial_table[PULSE_MAX][SUBFRAME_LEN/GRID_SIZE] = ;
static const int16_t pitch_contrib[340] = ;
static const int8_t pulses[4] = ;
static const int32_t max_pos[4] = ;
static const int16_t fixed_cb_gain[GAIN_LEVELS] = ;
static const int16_t adaptive_cb_gain85[85 * 20] = ;
static const int16_t adaptive_cb_gain170[170 * 20] = ;
static const int16_t postfilter_tbl[2][LPC_ORDER] = ;
static const int16_t hamming_window[LPC_FRAME] = ;
static const int16_t binomial_window[LPC_ORDER] = ;
static const int16_t bandwidth_expand[LPC_ORDER] = ;
static const int16_t percept_flt_tbl[2][LPC_ORDER] = ;
static const int cng_adaptive_cb_lag[4] = ;
static const int cng_filt[4] = ;
static const int cng_bseg[3] = ;
