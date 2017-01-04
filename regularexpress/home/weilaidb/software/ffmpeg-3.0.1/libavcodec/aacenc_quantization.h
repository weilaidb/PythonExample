#define AVCODEC_AACENC_QUANTIZATION_H
static av_always_inline float quantize_and_encode_band_cost_template(
struct AACEncContext *s,
PutBitContext *pb, const float *in, float *out,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, int BT_ZERO, int BT_UNSIGNED,
int BT_PAIR, int BT_ESC, int BT_NOISE, int BT_STEREO,
const float ROUNDING)
static inline float quantize_and_encode_band_cost_NONE(struct AACEncContext *s, PutBitContext *pb,
const float *in, float *quant, const float *scaled,
int size, int scale_idx, int cb,
const float lambda, const float uplim,
int *bits, float *energy)
#define QUANTIZE_AND_ENCODE_BAND_COST_FUNC(NAME, BT_ZERO, BT_UNSIGNED, BT_PAIR, BT_ESC, BT_NOISE, BT_STEREO, ROUNDING) \
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
#define quantize_and_encode_band_cost(                                  \
s, pb, in, quant, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy, rtz)               \
((rtz) ? quantize_and_encode_band_cost_rtz_arr : quantize_and_encode_band_cost_arr)[cb]( \
s, pb, in, quant, scaled, size, scale_idx, cb, \
lambda, uplim, bits, energy)
static inline float quantize_band_cost(struct AACEncContext *s, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, int rtz)
static inline int quantize_band_cost_bits(struct AACEncContext *s, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, int rtz)
static inline void quantize_and_encode_band(struct AACEncContext *s, PutBitContext *pb,
const float *in, float *out, int size, int scale_idx,
int cb, const float lambda, int rtz)
