#if HAVE_INLINE_ASM
#if !HAVE_MIPS32R6 && !HAVE_MIPS64R6
static void ff_fft_calc_mips(FFTContext *s, FFTComplex *z)
static void ff_imdct_half_mips(FFTContext *s, FFTSample *output, const FFTSample *input)
static void ff_imdct_calc_mips(FFTContext *s, FFTSample *output, const FFTSample *input)
av_cold void ff_fft_init_mips(FFTContext *s)
