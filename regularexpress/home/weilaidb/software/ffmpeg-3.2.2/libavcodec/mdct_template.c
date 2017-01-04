#if FFT_FLOAT
#   define RSCALE(x) (x)
#if FFT_FIXED_32
#   define RSCALE(x) (((x) + 32) >> 6)
#   define RSCALE(x) ((x) >> 1)
av_cold int ff_mdct_init(FFTContext *s, int nbits, int inverse, double scale)
void ff_imdct_half_c(FFTContext *s, FFTSample *output, const FFTSample *input)
void ff_imdct_calc_c(FFTContext *s, FFTSample *output, const FFTSample *input)
void ff_mdct_calc_c(FFTContext *s, FFTSample *out, const FFTSample *input)
av_cold void ff_mdct_end(FFTContext *s)
