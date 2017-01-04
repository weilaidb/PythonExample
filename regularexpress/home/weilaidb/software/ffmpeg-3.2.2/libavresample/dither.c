typedef struct DitherState  DitherState;
struct DitherContext ;
#define MUTE_THRESHOLD_SEC 0.000333
#define S16_SCALE 32753.0f
#define LFG_SCALE (1.0f / (2.0f * INT32_MAX))
static const float ns_48_coef_b[4] = ;
static const float ns_48_coef_a[4] = ;
static const float ns_44_coef_b[4] = ;
static const float ns_44_coef_a[4] = ;
static void dither_int_to_float_rectangular_c(float *dst, int *src, int len)
static void dither_int_to_float_triangular_c(float *dst, int *src0, int len)
static void quantize_c(int16_t *dst, const float *src, float *dither, int len)
#define SQRT_1_6 0.40824829046386301723f
static void dither_highpass_filter(float *src, int len)
static int generate_dither_noise(DitherContext *c, DitherState *state,
int min_samples)
static void quantize_triangular_ns(DitherContext *c, DitherState *state,
int16_t *dst, const float *src,
int nb_samples)
static int convert_samples(DitherContext *c, int16_t **dst, float * const *src,
int channels, int nb_samples)
int ff_convert_dither(DitherContext *c, AudioData *dst, AudioData *src)
void ff_dither_free(DitherContext **cp)
static av_cold void dither_init(DitherDSPContext *ddsp,
enum AVResampleDitherMethod method)
DitherContext *ff_dither_alloc(AVAudioResampleContext *avr,
enum AVSampleFormat out_fmt,
enum AVSampleFormat in_fmt,
int channels, int sample_rate, int apply_map)
