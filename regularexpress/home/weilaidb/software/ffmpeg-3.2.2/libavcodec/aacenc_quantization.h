#define AVCODEC_AACENC_QUANTIZATION_H
quantize_and_encode_band_cost_template
quantize_and_encode_band_cost_NONE
QUANTIZE_AND_ENCODE_BAND_COST_FUNC \
static float quantize_and_encode_band_cost_ ## NAME(                                         \
struct AACEncContext *s,                                     \
PutBitContext *pb, const float *in, float *quant,            \
const float *scaled, int size, int scale_idx,                \
int cb, const float lambda, const float uplim,               \
int *bits, float *energy)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(ZERO,  1, 0, 0, 0, 0, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(SQUAD, 0, 0, 0, 0, 0, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(UQUAD, 0, 1, 0, 0, 0, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(SPAIR, 0, 0, 1, 0, 0, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(UPAIR, 0, 1, 1, 0, 0, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(ESC,   0, 1, 1, 1, 0, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(ESC_RTZ, 0, 1, 1, 1, 0, 0, ROUND_TO_ZERO)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(NOISE, 0, 0, 0, 0, 1, 0, ROUND_STANDARD)
QUANTIZE_AND_ENCODE_BAND_COST_FUNC(STEREO,0, 0, 0, 0, 0, 1, ROUND_STANDARD)
static float (*const quantize_and_encode_band_cost_arr[])(
struct AACEncContext *s,
PutBitContext *pb, const float *in, float *quant,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy) = ;
static float (*const quantize_and_encode_band_cost_rtz_arr[])(
struct AACEncContext *s,
PutBitContext *pb, const float *in, float *quant,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy) = ;
quantize_and_encode_band_cost               \
((rtz) ? quantize_and_encode_band_cost_rtz_arr : quantize_and_encode_band_cost_arr)[cb]( \
s, pb, in, quant, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy)
quantize_band_cost
quantize_band_cost_bits
quantize_and_encode_band
