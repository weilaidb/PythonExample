FFTContext *av_fft_init(int nbits, int inverse)
void av_fft_permute(FFTContext *s, FFTComplex *z)
void av_fft_calc(FFTContext *s, FFTComplex *z)
av_cold void av_fft_end(FFTContext *s)
#if CONFIG_MDCT
FFTContext *av_mdct_init(int nbits, int inverse, double scale)
void av_imdct_calc(FFTContext *s, FFTSample *output, const FFTSample *input)
void av_imdct_half(FFTContext *s, FFTSample *output, const FFTSample *input)
void av_mdct_calc(FFTContext *s, FFTSample *output, const FFTSample *input)
av_cold void av_mdct_end(FFTContext *s)
#if CONFIG_RDFT
RDFTContext *av_rdft_init(int nbits, enum RDFTransformType trans)
void av_rdft_calc(RDFTContext *s, FFTSample *data)
av_cold void av_rdft_end(RDFTContext *s)
#if CONFIG_DCT
DCTContext *av_dct_init(int nbits, enum DCTTransformType inverse)
void av_dct_calc(DCTContext *s, FFTSample *data)
av_cold void av_dct_end(DCTContext *s)
