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
ff_ac3_adjust_frame_size
ff_ac3_compute_coupling_strategy
ff_ac3_apply_rematrixing
exponent_init
extract_exponents
#define EXP_DIFF_THRESHOLD 500
static const uint8_t exp_strategy_reuse_tab[4][6] = ;
compute_exp_strategy
encode_exponents_blk_ch
encode_exponents
count_exponent_bits
ff_ac3_group_exponents
ff_ac3_process_exponents
count_frame_bits_fixed
bit_alloc_init
count_frame_bits
bit_alloc_masking
reset_block_bap
count_mantissa_bits_init
count_mantissa_bits_update_ch
count_mantissa_bits
bit_alloc
cbr_bit_allocation
ff_ac3_compute_bit_allocation
sym_quant
asym_quant
quantize_mantissas_blk_ch
ff_ac3_quantize_mantissas
ac3_output_frame_header
output_audio_block
#define CRC16_POLY ((1 << 0) | (1 << 2) | (1 << 15) | (1 << 16))
mul_poly
pow_poly
output_frame_end
ff_ac3_output_frame
dprint_options
#define FLT_OPTION_THRESHOLD 0.01
validate_float_option
validate_mix_level
ff_ac3_validate_metadata
ff_ac3_encode_close
set_channel_info
validate_options
set_bandwidth
allocate_buffers
ff_ac3_encode_init
