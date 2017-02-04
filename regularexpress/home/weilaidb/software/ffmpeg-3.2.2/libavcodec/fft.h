#define AVCODEC_FFT_H
#define FFT_FLOAT 1
#define FFT_FIXED_32 0
#if FFT_FLOAT
FFT_NAME x
typedef float FFTDouble;
#if FFT_FIXED_32
Q31 (int)((x)*2147483648.0 + 0.5)
FFT_NAME x ## _fixed_32
typedef int32_t FFTSample;
FFT_NAME x ## _fixed
typedef int16_t FFTSample;
typedef struct FFTComplex  FFTComplex;
typedef int    FFTDouble;
typedef struct FFTContext FFTContext;
typedef struct FFTDComplex  FFTDComplex;
enum fft_permutation_type ;
enum mdct_permutation_type ;
struct FFTContext ;
#if CONFIG_HARDCODED_TABLES
#define COSTABLE_CONST const
#define COSTABLE_CONST
COSTABLE \
DECLARE_ALIGNED)[size/2]
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
COSTABLE;
FFT_NAME[18];
FFT_NAME
ff_init_ff_cos_tabs;
FFT_NAME
FFT_NAME
ff_fft_init;
ff_fft_init_aarch64;
ff_fft_init_x86;
ff_fft_init_arm;
ff_fft_init_mips;
ff_fft_init_ppc;
ff_fft_fixed_init_arm;
ff_fft_end;
FFT_NAME
FFT_NAME
ff_mdct_init;
ff_mdct_end;
