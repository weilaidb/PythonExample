static uint8_t ungroup_3_in_7_bits_tab[128][3];
static int b1_mantissas[32][3];
static int b2_mantissas[128][3];
static int b3_mantissas[8];
static int b4_mantissas[128][2];
static int b5_mantissas[16];
static const uint8_t quantization_tab[16] = ;
#if (!USE_FIXED)
static float dynamic_range_tab[256];
float ff_ac3_heavy_dynamic_range_tab[256];
static const float gain_levels[9] = ;
static const float gain_levels_lfe[32] = ;
static const uint8_t ac3_default_coeffs[8][5][2] = ;
symmetric_dequant
ac3_tables_init
ac3_decode_init
ac3_parse_header
parse_frame_header
set_downmix_coeffs
decode_exponents
calc_transform_coeffs_cpl
typedef struct mant_groups  mant_groups;
ac3_decode_transform_coeffs_ch
remove_dithering
decode_transform_coeffs_ch
decode_transform_coeffs
do_rematrixing
do_imdct
ac3_upmix_delay
decode_band_structure
decode_audio_block
ac3_decode_frame
ac3_decode_end
OFFSET offsetof(AC3DecodeContext, x)
#define PAR (AV_OPT_FLAG_DECODING_PARAM | AV_OPT_FLAG_AUDIO_PARAM)
