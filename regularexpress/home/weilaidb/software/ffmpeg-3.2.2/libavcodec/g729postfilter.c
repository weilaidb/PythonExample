#define FRAC_BITS 15
static const int16_t ff_g729_interp_filt_short[(ANALYZED_FRAC_DELAYS+1)*SHORT_INT_FILT_LEN] = ;
static const int16_t ff_g729_interp_filt_long[(ANALYZED_FRAC_DELAYS+1)*LONG_INT_FILT_LEN] = ;
static const int16_t formant_pp_factor_num_pow[10]= ;
static const int16_t formant_pp_factor_den_pow[10] = ;
static void residual_filter(int16_t* out, const int16_t* filter_coeffs, const int16_t* in,
int subframe_size)
static int16_t long_term_filter(AudioDSPContext *adsp, int pitch_delay_int,
const int16_t* residual, int16_t *residual_filt,
int subframe_size)
static int16_t get_tilt_comp(AudioDSPContext *adsp, int16_t *lp_gn,
const int16_t *lp_gd, int16_t* speech,
int subframe_size)
static int16_t apply_tilt_comp(int16_t* out, int16_t* res_pst, int refl_coeff,
int subframe_size, int16_t ht_prev_data)
void ff_g729_postfilter(AudioDSPContext *adsp, int16_t* ht_prev_data, int* voicing,
const int16_t *lp_filter_coeffs, int pitch_delay_int,
int16_t* residual, int16_t* res_filter_data,
int16_t* pos_filter_data, int16_t *speech, int subframe_size)
int16_t ff_g729_adaptive_gain_control(int gain_before, int gain_after, int16_t *speech,
int subframe_size, int16_t gain_prev)
