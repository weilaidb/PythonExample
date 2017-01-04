#define AVCODEC_AMRNBDATA_H
#define AMR_SUBFRAME_SIZE            40
enum Mode ;
#define LP_FILTER_ORDER 10
typedef struct AMRNBSubframe  AMRNBSubframe;
typedef struct AMRNBFrame  AMRNBFrame;
#define AMR_BIT(field)                  (offsetof(AMRNBFrame, field))
#define AMR_OF(frame_num, variable)     AMR_BIT(subframe[frame_num].variable)
static const uint8_t order_MODE_4k75[] = ;
static const uint8_t order_MODE_5k15[] = ;
static const uint8_t order_MODE_5k9[] = ;
static const uint8_t order_MODE_6k7[] = ;
static const uint8_t order_MODE_7k4[] = ;
static const uint8_t order_MODE_7k95[] = ;
static const uint8_t order_MODE_10k2[] = ;
static const uint8_t order_MODE_12k2[] = ;
static const uint8_t * const amr_unpacking_bitmaps_per_mode[N_MODES] = ;
static const uint8_t frame_sizes_nb[N_MODES] = ;
static const uint8_t base_five_table[128][3] = ;
static const int8_t lsp_sub4_init[LP_FILTER_ORDER] = ;
static const int16_t lsp_avg_init[LP_FILTER_ORDER] = ;
static const int16_t lsf_3_3_MODE_5k15[128][4] = ;
static const int16_t lsf_3_1_MODE_7k95[512][3] = ;
static const int16_t lsf_3_1[256][3] = ;
static const int16_t lsf_3_2[512][3] = ;
static const int16_t lsf_3_3[512][4] = ;
static const int16_t lsf_5_1[128][4] = ;
static const int16_t lsf_5_2[256][4] = ;
static const int16_t lsf_5_3[256][4] = ;
static const int16_t lsf_5_4[256][4] = ;
static const int16_t lsf_5_5[64][4] = ;
static const float lsf_3_mean[LP_FILTER_ORDER] = ;
static const float lsf_5_mean[LP_FILTER_ORDER] = ;
static const float pred_fac[LP_FILTER_ORDER] = ;
static const uint8_t pulses_nb_per_mode[] = ;
static const uint8_t track_position[16] = ;
static const uint8_t gray_decode[8] = ;
static const uint16_t qua_gain_pit[16] = ;
static const uint16_t qua_gain_code[32] = ;
static const float energy_mean[8] = ;
static const float energy_pred_fac[4] = ;
static const uint16_t gains_MODE_4k75[512][2] = ;
static const uint16_t gains_high[128][2] = ;
static const uint16_t gains_low[64][2] = ;
static const float ir_filter_strong_MODE_7k95[AMR_SUBFRAME_SIZE] = ;
static const float ir_filter_strong[AMR_SUBFRAME_SIZE] = ;
static const float ir_filter_medium[AMR_SUBFRAME_SIZE] = ;
static const float * const ir_filters_lookup[2]           = ;
static const float * const ir_filters_lookup_MODE_7k95[2] = ;
static const float highpass_zeros[2] = ;
static const float highpass_poles[2] = ;
static const float highpass_gain     = 0.939819335;
