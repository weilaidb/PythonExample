enum FilterType ;
enum WidthType ;
typedef struct ChanCache  ChanCache;
typedef struct BiquadsContext  BiquadsContext;
init
query_formats
BIQUAD_FILTER                    \
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
config_output
filter_frame
uninit
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
OFFSET offsetof(BiquadsContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
DEFINE_BIQUAD_FILTER                       \
AVFILTER_DEFINE_CLASS(name_);                                           \
static av_cold int name_##_init(AVFilterContext *ctx) \
\
\
AVFilter ff_af_##name_ =
#if CONFIG_EQUALIZER_FILTER
static const AVOption equalizer_options[] = ;
DEFINE_BIQUAD_FILTER(equalizer, );
#if CONFIG_BASS_FILTER
static const AVOption bass_options[] = ;
DEFINE_BIQUAD_FILTER(bass, );
#if CONFIG_TREBLE_FILTER
static const AVOption treble_options[] = ;
DEFINE_BIQUAD_FILTER(treble, );
#if CONFIG_BANDPASS_FILTER
static const AVOption bandpass_options[] = ;
DEFINE_BIQUAD_FILTER(bandpass, );
#if CONFIG_BANDREJECT_FILTER
static const AVOption bandreject_options[] = ;
DEFINE_BIQUAD_FILTER(bandreject, );
#if CONFIG_LOWPASS_FILTER
static const AVOption lowpass_options[] = ;
DEFINE_BIQUAD_FILTER(lowpass, );
#if CONFIG_HIGHPASS_FILTER
static const AVOption highpass_options[] = ;
DEFINE_BIQUAD_FILTER(highpass, );
#if CONFIG_ALLPASS_FILTER
static const AVOption allpass_options[] = ;
DEFINE_BIQUAD_FILTER(allpass, );
#if CONFIG_BIQUAD_FILTER
static const AVOption biquad_options[] = ;
DEFINE_BIQUAD_FILTER(biquad, );
