#define AVCODEC_PPC_FFT_VSX_H
#if HAVE_VSX
ff_fft_calc_interleave_vsx;
ff_fft_calc_vsx;
#define byte_2complex (2*sizeof(FFTComplex))
#define byte_4complex (4*sizeof(FFTComplex))
#define byte_6complex (6*sizeof(FFTComplex))
#define byte_8complex (8*sizeof(FFTComplex))
#define byte_10complex (10*sizeof(FFTComplex))
#define byte_12complex (12*sizeof(FFTComplex))
#define byte_14complex (14*sizeof(FFTComplex))
pass_vsx_interleave
fft2_vsx_interleave
fft4_vsx_interleave
fft8_vsx_interleave
fft16_vsx_interleave
fft4_vsx
fft8_vsx
fft16_vsx
pass_vsx
