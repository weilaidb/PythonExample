#define AVCODEC_G729POSTFILTER_H
#define G729_TILT_FACTOR_PLUS       6554
#define G729_TILT_FACTOR_MINUS     29491
#define FORMANT_PP_FACTOR_NUM  18022
#define FORMANT_PP_FACTOR_DEN  22938
#define G729_AGC_FACTOR            32358
#define G729_AGC_FAC1 (32768-G729_AGC_FACTOR)
#define MIN_LT_FILT_FACTOR_A       21845
#define SHORT_INT_FILT_LEN         2
#define LONG_INT_FILT_LEN          8
#define ANALYZED_FRAC_DELAYS       7
#define RES_PREV_DATA_SIZE (PITCH_DELAY_MAX + LONG_INT_FILT_LEN + 1)
void ff_g729_postfilter(AudioDSPContext *adsp, int16_t* ht_prev_data, int* voicing,
const int16_t *lp_filter_coeffs, int pitch_delay_int,
int16_t* residual, int16_t* res_filter_data,
int16_t* pos_filter_data, int16_t *speech,
int subframe_size);
int16_t ff_g729_adaptive_gain_control(int gain_before, int gain_after, int16_t *speech,
int subframe_size, int16_t gain_prev);
