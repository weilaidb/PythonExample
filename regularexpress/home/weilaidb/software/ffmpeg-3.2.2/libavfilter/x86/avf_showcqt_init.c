#define DECLARE_CQT_CALC(type) \
void ff_showcqt_cqt_calc_##type(FFTComplex *dst, const FFTComplex *src, \
const Coeffs *coeffs, int len, int fft_len)
DECLARE_CQT_CALC(sse);
DECLARE_CQT_CALC(sse3);
DECLARE_CQT_CALC(avx);
DECLARE_CQT_CALC(fma3);
DECLARE_CQT_CALC(fma4);
#define permute_coeffs_0 NULL
static void permute_coeffs_01452367(float *v, int len)
av_cold void ff_showcqt_init_x86(ShowCQTContext *s)
