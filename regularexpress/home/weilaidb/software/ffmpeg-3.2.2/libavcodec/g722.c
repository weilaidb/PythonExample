static const int8_t sign_lookup[2] = ;
static const int16_t inv_log2_table[32] = ;
static const int16_t high_log_factor_step[2] = ;
const int16_t ff_g722_high_inv_quant[4] = ;
static const int16_t low_log_factor_step[16] = ;
const int16_t ff_g722_low_inv_quant4[16] = ;
const int16_t ff_g722_low_inv_quant6[64] = ;
static inline void s_zero(int cur_diff, struct G722Band *band)
static void do_adaptive_prediction(struct G722Band *band, const int cur_diff)
static inline int linear_scale_factor(const int log_factor)
void ff_g722_update_low_predictor(struct G722Band *band, const int ilow)
void ff_g722_update_high_predictor(struct G722Band *band, const int dhigh,
const int ihigh)
