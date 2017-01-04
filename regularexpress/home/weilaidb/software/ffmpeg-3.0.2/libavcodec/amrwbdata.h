#define AVCODEC_AMRWBDATA_H
#define LP_ORDER            16
#define LP_ORDER_16k        20
#define HB_FIR_SIZE         30
#define UPS_FIR_SIZE        12
#define UPS_MEM_SIZE        (2 * UPS_FIR_SIZE)
#define MIN_ISF_SPACING     (128.0 / 32768.0)
#define PRED_FACTOR         (1.0 / 3.0)
#define MIN_ENERGY         -14.0
#define ENERGY_MEAN         30.0
#define PREEMPH_FAC         0.68
#define AMRWB_SFR_SIZE      64
#define AMRWB_SFR_SIZE_16k  80
#define AMRWB_P_DELAY_MAX   231
#define AMRWB_P_DELAY_MIN   34
enum Mode ;
typedef struct AMRWBSubFrame  AMRWBSubFrame;
typedef struct AMRWBFrame  AMRWBFrame;
#define AMR_BIT(field)                  (offsetof(AMRWBFrame, field))
#define AMR_OF(frame_num, variable)     AMR_BIT(subframe[frame_num].variable)
static const uint16_t order_MODE_6k60[] = ;
static const uint16_t order_MODE_8k85[] = ;
static const uint16_t order_MODE_12k65[] = ;
static const uint16_t order_MODE_14k25[] = ;
static const uint16_t order_MODE_15k85[] = ;
static const uint16_t order_MODE_18k25[] = ;
static const uint16_t order_MODE_19k85[] = ;
static const uint16_t order_MODE_23k05[] = ;
static const uint16_t order_MODE_23k85[] = ;
static const uint16_t* amr_bit_orderings_by_mode[] = ;
static const int16_t dico1_isf[256][9] = ;
static const int16_t dico2_isf[256][7] = ;
static const int16_t dico21_isf[64][3] = ;
static const int16_t dico22_isf[128][3] = ;
static const int16_t dico23_isf[128][3] = ;
static const int16_t dico24_isf[32][3] = ;
static const int16_t dico25_isf[32][4] = ;
static const int16_t dico21_isf_36b[128][5] = ;
static const int16_t dico22_isf_36b[128][4] = ;
static const int16_t dico23_isf_36b[64][7] = ;
static const int16_t isf_mean[LP_ORDER] = ;
static const int16_t isf_init[LP_ORDER] = ;
static const float isfp_inter[4] = ;
static const float ac_inter[65] = ;
static const uint8_t pulses_nb_per_mode_tr[][4] = ;
static const int16_t qua_gain_6b[64][2] = ;
static const int16_t qua_gain_7b[128][2] = ;
static const float energy_pred_fac[4] = ;
static const float ir_filter_str[64] = ;
static const float ir_filter_mid[64] = ;
static const float * const ir_filters_lookup[2] = ;
static const float hpf_zeros[2]     = ;
static const float hpf_31_poles[2]  = ;
static const float hpf_31_gain      = 0.989501953;
static const float hpf_400_poles[2] = ;
static const float hpf_400_gain     = 0.893554687;
static const float upsample_fir[4][24] = ;
static const uint16_t qua_hb_gain[16] = ;
static const float bpf_6_7_coef[31] = ;
static const float lpf_7_coef[31] = ;
static const uint16_t cf_sizes_wb[] = ;
