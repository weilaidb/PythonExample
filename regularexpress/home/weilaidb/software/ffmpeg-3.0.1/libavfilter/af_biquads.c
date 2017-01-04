enum FilterType ;
enum WidthType ;
typedef struct ChanCache  ChanCache;
typedef struct BiquadsContext  BiquadsContext;
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
#define BIQUAD_FILTER(name, type, min, max, need_clipping)                    \
static void biquad_## name (BiquadsContext *s,                                \
const void *input, void *output, int len,         \
double *in1, double *in2,                         \
double *out1, double *out2,                       \
double b0, double b1, double b2,                  \
double a1, double a2)                             \
BIQUAD_FILTER(s16, int16_t, INT16_MIN, INT16_MAX, 1)
BIQUAD_FILTER(s32, int32_t, INT32_MIN, INT32_MAX, 1)
BIQUAD_FILTER(flt, float,   -1., 1., 0)
BIQUAD_FILTER(dbl, double,  -1., 1., 0)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
#define OFFSET(x) offsetof(BiquadsContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define DEFINE_BIQUAD_FILTER(name_, description_)                       \
AVFILTER_DEFINE_CLASS(name_);                                           \
static av_cold int name_##_init(AVFilterContext *ctx) \
\
\
AVFilter ff_af_##name_ =
#if CONFIG_EQUALIZER_FILTER
static const AVOption equalizer_options[] = ;
DEFINE_BIQUAD_FILTER(equalizer, "Apply two-pole peaking equalization (EQ) filter.");
#if CONFIG_BASS_FILTER
static const AVOption bass_options[] = ;
DEFINE_BIQUAD_FILTER(bass, "Boost or cut lower frequencies.");
#if CONFIG_TREBLE_FILTER
static const AVOption treble_options[] = ;
DEFINE_BIQUAD_FILTER(treble, "Boost or cut upper frequencies.");
#if CONFIG_BANDPASS_FILTER
static const AVOption bandpass_options[] = ;
DEFINE_BIQUAD_FILTER(bandpass, "Apply a two-pole Butterworth band-pass filter.");
#if CONFIG_BANDREJECT_FILTER
static const AVOption bandreject_options[] = ;
DEFINE_BIQUAD_FILTER(bandreject, "Apply a two-pole Butterworth band-reject filter.");
#if CONFIG_LOWPASS_FILTER
static const AVOption lowpass_options[] = ;
DEFINE_BIQUAD_FILTER(lowpass, "Apply a low-pass filter with 3dB point frequency.");
#if CONFIG_HIGHPASS_FILTER
static const AVOption highpass_options[] = ;
DEFINE_BIQUAD_FILTER(highpass, "Apply a high-pass filter with 3dB point frequency.");
#if CONFIG_ALLPASS_FILTER
static const AVOption allpass_options[] = ;
DEFINE_BIQUAD_FILTER(allpass, "Apply a two-pole all-pass filter.");
#if CONFIG_BIQUAD_FILTER
static const AVOption biquad_options[] = ;
DEFINE_BIQUAD_FILTER(biquad, "Apply a biquad IIR filter with the given coefficients.");
