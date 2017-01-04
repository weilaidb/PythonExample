void ff_ac3_exponent_min_neon(uint8_t *exp, int num_reuse_blocks, int nb_coefs);
int ff_ac3_max_msb_abs_int16_neon(const int16_t *src, int len);
void ff_ac3_lshift_int16_neon(int16_t *src, unsigned len, unsigned shift);
void ff_ac3_rshift_int32_neon(int32_t *src, unsigned len, unsigned shift);
void ff_float_to_fixed24_neon(int32_t *dst, const float *src, unsigned int len);
void ff_ac3_extract_exponents_neon(uint8_t *exp, int32_t *coef, int nb_coefs);
void ff_apply_window_int16_neon(int16_t *dst, const int16_t *src,
const int16_t *window, unsigned n);
void ff_ac3_sum_square_butterfly_int32_neon(int64_t sum[4],
const int32_t *coef0,
const int32_t *coef1,
int len);
void ff_ac3_sum_square_butterfly_float_neon(float sum[4],
const float *coef0,
const float *coef1,
int len);
void ff_ac3_bit_alloc_calc_bap_armv6(int16_t *mask, int16_t *psd,
int start, int end,
int snr_offset, int floor,
const uint8_t *bap_tab, uint8_t *bap);
void ff_ac3_update_bap_counts_arm(uint16_t mant_cnt[16], uint8_t *bap, int len);
av_cold void ff_ac3dsp_init_arm(AC3DSPContext *c, int bit_exact)
