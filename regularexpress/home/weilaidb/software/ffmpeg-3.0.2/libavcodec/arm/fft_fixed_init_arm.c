#define FFT_FLOAT 0
void ff_fft_fixed_calc_neon(FFTContext *s, FFTComplex *z);
void ff_mdct_fixed_calc_neon(FFTContext *s, FFTSample *o, const FFTSample *i);
void ff_mdct_fixed_calcw_neon(FFTContext *s, FFTDouble *o, const FFTSample *i);
av_cold void ff_fft_fixed_init_arm(FFTContext *s)
