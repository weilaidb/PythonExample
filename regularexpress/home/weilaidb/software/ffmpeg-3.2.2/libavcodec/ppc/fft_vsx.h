#define AVCODEC_PPC_FFT_VSX_H
#if HAVE_VSX
void ff_fft_calc_interleave_vsx(FFTContext *s, FFTComplex *z);
void ff_fft_calc_vsx(FFTContext *s, FFTComplex *z);
#define byte_2complex (2*sizeof(FFTComplex))
#define byte_4complex (4*sizeof(FFTComplex))
#define byte_6complex (6*sizeof(FFTComplex))
#define byte_8complex (8*sizeof(FFTComplex))
#define byte_10complex (10*sizeof(FFTComplex))
#define byte_12complex (12*sizeof(FFTComplex))
#define byte_14complex (14*sizeof(FFTComplex))
inline static void pass_vsx_interleave(FFTComplex *z, const FFTSample *wre, unsigned int n)
inline static void fft2_vsx_interleave(FFTComplex *z)
inline static void fft4_vsx_interleave(FFTComplex *z)
inline static void fft8_vsx_interleave(FFTComplex *z)
inline static void fft16_vsx_interleave(FFTComplex *z)
inline static void fft4_vsx(FFTComplex *z)
inline static void fft8_vsx(FFTComplex *z)
inline static void fft16_vsx(FFTComplex *z)
inline static void pass_vsx(FFTComplex * z, const FFTSample * wre, unsigned int n)
