#define SIN(s, n, x) (s->costab[(n) - (x)])
#define COS(s, n, x) (s->costab[x])
static void dst_calc_I_c(DCTContext *ctx, FFTSample *data)
static void dct_calc_I_c(DCTContext *ctx, FFTSample *data)
static void dct_calc_III_c(DCTContext *ctx, FFTSample *data)
static void dct_calc_II_c(DCTContext *ctx, FFTSample *data)
static void dct32_func(DCTContext *ctx, FFTSample *data)
av_cold int ff_dct_init(DCTContext *s, int nbits, enum DCTTransformType inverse)
av_cold void ff_dct_end(DCTContext *s)