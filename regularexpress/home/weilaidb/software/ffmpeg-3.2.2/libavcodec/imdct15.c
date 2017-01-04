#define CELT_MIN_IMDCT_SIZE 120
#define CMUL3(cre, cim, are, aim, bre, bim)          \
do  while (0)
#define CMUL(c, a, b) CMUL3((c).re, (c).im, (a).re, (a).im, (b).re, (b).im)
#define CMUL2(c, d, a, b)                            \
do  while (0)
av_cold void ff_imdct15_uninit(IMDCT15Context **ps)
static void imdct15_half(IMDCT15Context *s, float *dst, const float *src,
ptrdiff_t stride, float scale);
av_cold int ff_imdct15_init(IMDCT15Context **ps, int N)
static void fft5(FFTComplex *out, const FFTComplex *in, ptrdiff_t stride)
static void fft15(IMDCT15Context *s, FFTComplex *out, const FFTComplex *in,
ptrdiff_t stride)
static void fft_calc(IMDCT15Context *s, FFTComplex *out, const FFTComplex *in,
int N, ptrdiff_t stride)
static void imdct15_half(IMDCT15Context *s, float *dst, const float *src,
ptrdiff_t stride, float scale)
