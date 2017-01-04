#if FFT_FIXED_32
#if !CONFIG_HARDCODED_TABLES
COSTABLE(16);
COSTABLE(32);
COSTABLE(64);
COSTABLE(128);
COSTABLE(256);
COSTABLE(512);
COSTABLE(1024);
COSTABLE(2048);
COSTABLE(4096);
COSTABLE(8192);
COSTABLE(16384);
COSTABLE(32768);
COSTABLE(65536);
COSTABLE_CONST FFTSample * const FFT_NAME(ff_cos_tabs)[] = ;
static void fft_permute_c(FFTContext *s, FFTComplex *z);
static void fft_calc_c(FFTContext *s, FFTComplex *z);
static int split_radix_permutation(int i, int n, int inverse)
av_cold void ff_init_ff_cos_tabs(int index)
static const int avx_tab[] = ;
static int is_second_half_of_fft32(int i, int n)
static av_cold void fft_perm_avx(FFTContext *s)
av_cold int ff_fft_init(FFTContext *s, int nbits, int inverse)
static void fft_permute_c(FFTContext *s, FFTComplex *z)
av_cold void ff_fft_end(FFTContext *s)
#if FFT_FIXED_32
static void fft_calc_c(FFTContext *s, FFTComplex *z)
#define BUTTERFLIES(a0,a1,a2,a3)
#define BUTTERFLIES_BIG(a0,a1,a2,a3)
#define TRANSFORM(a0,a1,a2,a3,wre,wim)
#define TRANSFORM_ZERO(a0,a1,a2,a3)
#define PASS(name)\
static void name(FFTComplex *z, const FFTSample *wre, unsigned int n)\
PASS(pass)
#undef BUTTERFLIES
#define BUTTERFLIES BUTTERFLIES_BIG
PASS(pass_big)
#define DECL_FFT(n,n2,n4)\
static void fft##n(FFTComplex *z)\
static void fft4(FFTComplex *z)
static void fft8(FFTComplex *z)
#if !CONFIG_SMALL
static void fft16(FFTComplex *z)
DECL_FFT(16,8,4)
DECL_FFT(32,16,8)
DECL_FFT(64,32,16)
DECL_FFT(128,64,32)
DECL_FFT(256,128,64)
DECL_FFT(512,256,128)
#if !CONFIG_SMALL
#define pass pass_big
DECL_FFT(1024,512,256)
DECL_FFT(2048,1024,512)
DECL_FFT(4096,2048,1024)
DECL_FFT(8192,4096,2048)
DECL_FFT(16384,8192,4096)
DECL_FFT(32768,16384,8192)
DECL_FFT(65536,32768,16384)
static void (* const fft_dispatch[])(FFTComplex*) = ;
static void fft_calc_c(FFTContext *s, FFTComplex *z)
