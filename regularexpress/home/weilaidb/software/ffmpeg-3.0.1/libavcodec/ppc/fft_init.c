#if HAVE_VSX
void ff_fft_calc_altivec(FFTContext *s, FFTComplex *z);
void ff_fft_calc_interleave_altivec(FFTContext *s, FFTComplex *z);
#if HAVE_GNU_AS && HAVE_ALTIVEC
static void imdct_half_altivec(FFTContext *s, FFTSample *output, const FFTSample *input)
static void imdct_calc_altivec(FFTContext *s, FFTSample *output, const FFTSample *input)
av_cold void ff_fft_init_ppc(FFTContext *s)
