#define AVCODEC_FFT_H
#define FFT_FLOAT 1
#define FFT_FIXED_32 0
#if FFT_FLOAT
#define FFT_NAME(x) x
typedef float FFTDouble;
#if FFT_FIXED_32
#define Q31(x) (int)((x)*2147483648.0 + 0.5)
#define FFT_NAME(x) x ## _fixed_32
typedef int32_t FFTSample;
#define FFT_NAME(x) x ## _fixed
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
#define COSTABLE(size) \
COSTABLE_CONST DECLARE_ALIGNED(32, FFTSample, FFT_NAME(ff_cos_##size))[size/2]
extern COSTABLE(16);
extern COSTABLE(32);
extern COSTABLE(64);
extern COSTABLE(128);
extern COSTABLE(256);
extern COSTABLE(512);
extern COSTABLE(1024);
extern COSTABLE(2048);
extern COSTABLE(4096);
extern COSTABLE(8192);
extern COSTABLE(16384);
extern COSTABLE(32768);
extern COSTABLE(65536);
extern COSTABLE_CONST FFTSample* const FFT_NAME(ff_cos_tabs)[17];
#define ff_init_ff_cos_tabs FFT_NAME(ff_init_ff_cos_tabs)
void ff_init_ff_cos_tabs(int index);
#define ff_fft_init FFT_NAME(ff_fft_init)
#define ff_fft_end  FFT_NAME(ff_fft_end)
int ff_fft_init(FFTContext *s, int nbits, int inverse);
void ff_fft_init_aarch64(FFTContext *s);
void ff_fft_init_x86(FFTContext *s);
void ff_fft_init_arm(FFTContext *s);
void ff_fft_init_mips(FFTContext *s);
void ff_fft_init_ppc(FFTContext *s);
void ff_fft_fixed_init_arm(FFTContext *s);
void ff_fft_end(FFTContext *s);
#define ff_mdct_init FFT_NAME(ff_mdct_init)
#define ff_mdct_end  FFT_NAME(ff_mdct_end)
int ff_mdct_init(FFTContext *s, int nbits, int inverse, double scale);
void ff_mdct_end(FFTContext *s);
