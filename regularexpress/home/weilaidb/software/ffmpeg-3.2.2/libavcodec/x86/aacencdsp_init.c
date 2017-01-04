void ff_abs_pow34_sse(float *out, const float *in, const int size);
void ff_aac_quantize_bands_sse2(int *out, const float *in, const float *scaled,
int size, int is_signed, int maxval, const float Q34,
const float rounding);
av_cold void ff_aac_dsp_init_x86(AACEncContext *s)
