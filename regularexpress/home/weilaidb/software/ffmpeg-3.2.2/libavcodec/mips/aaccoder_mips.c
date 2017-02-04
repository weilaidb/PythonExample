#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
typedef struct BandCodingPath  BandCodingPath;
static const uint8_t uquad_sign_bits[81] = ;
static const uint8_t upair7_sign_bits[64] = ;
static const uint8_t upair12_sign_bits[169] = ;
static const uint8_t esc_sign_bits[289] = ;
quantize_and_encode_band_cost_SQUAD_mips
quantize_and_encode_band_cost_UQUAD_mips
quantize_and_encode_band_cost_SPAIR_mips
quantize_and_encode_band_cost_UPAIR7_mips
quantize_and_encode_band_cost_UPAIR12_mips
quantize_and_encode_band_cost_ESC_mips
quantize_and_encode_band_cost_NONE_mips
quantize_and_encode_band_cost_ZERO_mips
static void (*const quantize_and_encode_band_cost_arr[])(struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, const float ROUNDING) = ;
quantize_and_encode_band_cost       \
quantize_and_encode_band_cost_arr[cb](                                   \
s, pb, in, out, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy, ROUNDING)
quantize_and_encode_band_mips
get_band_numbits_ZERO_mips
get_band_numbits_NONE_mips
get_band_numbits_SQUAD_mips
get_band_numbits_UQUAD_mips
get_band_numbits_SPAIR_mips
get_band_numbits_UPAIR7_mips
get_band_numbits_UPAIR12_mips
get_band_numbits_ESC_mips
static float (*const get_band_numbits_arr[])(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits) = ;
get_band_numbits                    \
get_band_numbits_arr[cb](                              \
s, pb, in, scaled, size, scale_idx, cb, \
lambda, uplim, bits)
quantize_band_cost_bits
#if HAVE_MIPSFPU
get_band_cost_ZERO_mips
get_band_cost_NONE_mips
get_band_cost_SQUAD_mips
get_band_cost_UQUAD_mips
get_band_cost_SPAIR_mips
get_band_cost_UPAIR7_mips
get_band_cost_UPAIR12_mips
get_band_cost_ESC_mips
static float (*const get_band_cost_arr[])(struct AACEncContext *s,
PutBitContext *pb, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy) = ;
get_band_cost            \
get_band_cost_arr[cb](                              \
s, pb, in, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy)
quantize_band_cost
search_for_ms_mips
ff_aac_coder_init_mips
