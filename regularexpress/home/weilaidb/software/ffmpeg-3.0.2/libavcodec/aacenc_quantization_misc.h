#define AVCODEC_AACENC_QUANTIZATION_MISC_H
static inline float quantize_band_cost_cached(struct AACEncContext *s, int w, int g, const float *in,
const float *scaled, int size, int scale_idx,
int cb, const float lambda, const float uplim,
int *bits, float *energy, int rtz)
