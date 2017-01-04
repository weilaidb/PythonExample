static void ac3_exponent_min_c(uint8_t *exp, int num_reuse_blocks, int nb_coefs)
static int ac3_max_msb_abs_int16_c(const int16_t *src, int len)
static void ac3_lshift_int16_c(int16_t *src, unsigned int len,
unsigned int shift)
static void ac3_rshift_int32_c(int32_t *src, unsigned int len,
unsigned int shift)
static void float_to_fixed24_c(int32_t *dst, const float *src, unsigned int len)
static void ac3_bit_alloc_calc_bap_c(int16_t *mask, int16_t *psd,
int start, int end,
int snr_offset, int floor,
const uint8_t *bap_tab, uint8_t *bap)
static void ac3_update_bap_counts_c(uint16_t mant_cnt[16], uint8_t *bap,
int len)
DECLARE_ALIGNED(16, const uint16_t, ff_ac3_bap_bits)[16] = ;
static int ac3_compute_mantissa_size_c(uint16_t mant_cnt[6][16])
static void ac3_extract_exponents_c(uint8_t *exp, int32_t *coef, int nb_coefs)
static void ac3_sum_square_butterfly_int32_c(int64_t sum[4],
const int32_t *coef0,
const int32_t *coef1,
int len)
static void ac3_sum_square_butterfly_float_c(float sum[4],
const float *coef0,
const float *coef1,
int len)
static void ac3_downmix_c(float **samples, float (*matrix)[2],
int out_ch, int in_ch, int len)
static void ac3_downmix_c_fixed(int32_t **samples, int16_t (*matrix)[2],
int out_ch, int in_ch, int len)
static void apply_window_int16_c(int16_t *output, const int16_t *input,
const int16_t *window, unsigned int len)
av_cold void ff_ac3dsp_init(AC3DSPContext *c, int bit_exact)
