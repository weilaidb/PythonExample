void ff_fft_calc_vfp(FFTContext *s, FFTComplex *z);
void ff_fft_permute_neon(FFTContext *s, FFTComplex *z);
void ff_fft_calc_neon(FFTContext *s, FFTComplex *z);
void ff_imdct_half_vfp(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_calc_neon(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_imdct_half_neon(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_mdct_calc_neon(FFTContext *s, FFTSample *output, const FFTSample *input);
void ff_rdft_calc_neon(struct RDFTContext *s, FFTSample *z);
av_cold void ff_fft_init_arm(FFTContext *s)
#if CONFIG_RDFT
av_cold void ff_rdft_init_arm(RDFTContext *s)
