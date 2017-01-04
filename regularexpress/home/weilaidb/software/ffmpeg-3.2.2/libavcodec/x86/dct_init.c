void ff_dct32_float_sse(FFTSample *out, const FFTSample *in);
void ff_dct32_float_sse2(FFTSample *out, const FFTSample *in);
void ff_dct32_float_avx(FFTSample *out, const FFTSample *in);
av_cold void ff_dct_init_x86(DCTContext *s)
