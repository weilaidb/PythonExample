#define AVFFT 0
#if HAVE_UNISTD_H
#if AVFFT
#if FFT_FLOAT
#define MUL16(a, b) ((a) * (b))
#define CMAC(pre, pim, are, aim, bre, bim)          \
#if FFT_FLOAT || AVFFT
#define RANGE 1.0
#define REF_SCALE(x, bits)  (x)
#define FMT "%10.6f"
#elif FFT_FIXED_32
#define RANGE 8388608
#define REF_SCALE(x, bits) (x)
#define FMT "%6d"
#define RANGE 16384
#define REF_SCALE(x, bits) ((x) / (1 << (bits)))
#define FMT "%6d"
static struct  *exptab;
static int fft_ref_init(int nbits, int inverse)
static void fft_ref(FFTComplex *tabr, FFTComplex *tab, int nbits)
#if CONFIG_MDCT
static void imdct_ref(FFTSample *out, FFTSample *in, int nbits)
static void mdct_ref(FFTSample *output, FFTSample *input, int nbits)
#if FFT_FLOAT
#if CONFIG_DCT
static void idct_ref(FFTSample *output, FFTSample *input, int nbits)
static void dct_ref(FFTSample *output, FFTSample *input, int nbits)
static FFTSample frandom(AVLFG *prng)
static int check_diff(FFTSample *tab1, FFTSample *tab2, int n, double scale)
static inline void fft_init(FFTContext **s, int nbits, int inverse)
static inline void mdct_init(FFTContext **s, int nbits, int inverse, double scale)
static inline void mdct_calc(FFTContext *s, FFTSample *output, const FFTSample *input)
static inline void imdct_calc(struct FFTContext *s, FFTSample *output, const FFTSample *input)
static inline void fft_permute(FFTContext *s, FFTComplex *z)
static inline void fft_calc(FFTContext *s, FFTComplex *z)
static inline void mdct_end(FFTContext *s)
static inline void fft_end(FFTContext *s)
#if FFT_FLOAT
static inline void rdft_init(RDFTContext **r, int nbits, enum RDFTransformType trans)
static inline void dct_init(DCTContext **d, int nbits, enum DCTTransformType trans)
static inline void rdft_calc(RDFTContext *r, FFTSample *tab)
static inline void dct_calc(DCTContext *d, FFTSample *data)
static inline void rdft_end(RDFTContext *r)
static inline void dct_end(DCTContext *d)
static void help(void)
enum tf_transform ;
#if !HAVE_GETOPT
int main(int argc, char **argv)
