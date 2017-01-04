#define AVCODEC_X86_FFT_H
void ff_fft_permute_sse(FFTContext *s, FFTComplex *z);
void ff_fft_calc_avx(FFTContext *s, FFTComplex *z);
void ff_fft_calc_sse(FFTContext *s, FFTComplex *z);
void ff_fft_calc_3dnow(FFTContext *s, FFTComplex *z);
void ff_fft_calc_3dnowext(FFTContext *s, FFTComplex *z);
void ff_imdct_calc_3dnow(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_half_3dnow(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_calc_3dnowext(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_half_3dnowext(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_calc_sse(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_half_sse(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_half_avx(FFTContext *s, FFTSample *output, const FFTSample *input);
