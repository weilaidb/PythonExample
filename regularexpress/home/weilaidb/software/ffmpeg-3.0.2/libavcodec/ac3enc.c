typedef struct AC3Mant  AC3Mant;
#define CMIXLEV_NUM_OPTIONS 3
static const float cmixlev_options[CMIXLEV_NUM_OPTIONS] = ;
#define SURMIXLEV_NUM_OPTIONS 3
static const float surmixlev_options[SURMIXLEV_NUM_OPTIONS] = ;
#define EXTMIXLEV_NUM_OPTIONS 8
static const float extmixlev_options[EXTMIXLEV_NUM_OPTIONS] = ;
static uint8_t exponent_group_tab[2][3][256];
const uint64_t ff_ac3_channel_layouts[19] = ;
static const uint8_t ac3_bandwidth_tab[5][3][19] = ;
static const int8_t ac3_coupling_start_tab[6][3][19] = ;
void ff_ac3_adjust_frame_size(AC3EncodeContext *s)
void ff_ac3_compute_coupling_strategy(AC3EncodeContext *s)
void ff_ac3_apply_rematrixing(AC3EncodeContext *s)
static av_cold void exponent_init(AC3EncodeContext *s)
static void extract_exponents(AC3EncodeContext *s)
#define EXP_DIFF_THRESHOLD 500
static const uint8_t exp_strategy_reuse_tab[4][6] = ;
static void compute_exp_strategy(AC3EncodeContext *s)
static void encode_exponents_blk_ch(uint8_t *exp, int nb_exps, int exp_strategy,
int cpl)
static void encode_exponents(AC3EncodeContext *s)
static int count_exponent_bits(AC3EncodeContext *s)
void ff_ac3_group_exponents(AC3EncodeContext *s)
void ff_ac3_process_exponents(AC3EncodeContext *s)
static void count_frame_bits_fixed(AC3EncodeContext *s)
static av_cold void bit_alloc_init(AC3EncodeContext *s)
static void count_frame_bits(AC3EncodeContext *s)
static void bit_alloc_masking(AC3EncodeContext *s)
static void reset_block_bap(AC3EncodeContext *s)
static void count_mantissa_bits_init(uint16_t mant_cnt[AC3_MAX_BLOCKS][16])
static void count_mantissa_bits_update_ch(AC3EncodeContext *s, int ch,
uint16_t mant_cnt[AC3_MAX_BLOCKS][16],
int start, int end)
static int count_mantissa_bits(AC3EncodeContext *s)
static int bit_alloc(AC3EncodeContext *s, int snr_offset)
static int cbr_bit_allocation(AC3EncodeContext *s)
int ff_ac3_compute_bit_allocation(AC3EncodeContext *s)
static inline int sym_quant(int c, int e, int levels)
static inline int asym_quant(int c, int e, int qbits)
static void quantize_mantissas_blk_ch(AC3Mant *s, int32_t *fixed_coef,
uint8_t *exp, uint8_t *bap,
int16_t *qmant, int start_freq,
int end_freq)
void ff_ac3_quantize_mantissas(AC3EncodeContext *s)
static void ac3_output_frame_header(AC3EncodeContext *s)
static void output_audio_block(AC3EncodeContext *s, int blk)
#define CRC16_POLY ((1 << 0) | (1 << 2) | (1 << 15) | (1 << 16))
static unsigned int mul_poly(unsigned int a, unsigned int b, unsigned int poly)
static unsigned int pow_poly(unsigned int a, unsigned int n, unsigned int poly)
static void output_frame_end(AC3EncodeContext *s)
void ff_ac3_output_frame(AC3EncodeContext *s, unsigned char *frame)
static void dprint_options(AC3EncodeContext *s)
#define FLT_OPTION_THRESHOLD 0.01
static int validate_float_option(float v, const float *v_list, int v_list_size)
static void validate_mix_level(void *log_ctx, const char *opt_name,
float *opt_param, const float *list,
int list_size, int default_value, int min_value,
int *ctx_param)
int ff_ac3_validate_metadata(AC3EncodeContext *s)
av_cold int ff_ac3_encode_close(AVCodecContext *avctx)
static av_cold int set_channel_info(AC3EncodeContext *s, int channels,
uint64_t *channel_layout)
static av_cold int validate_options(AC3EncodeContext *s)
static av_cold void set_bandwidth(AC3EncodeContext *s)
static av_cold int allocate_buffers(AC3EncodeContext *s)
av_cold int ff_ac3_encode_init(AVCodecContext *avctx)
