typedef struct  AudioFadeContext;
enum CurveType ;
#define OFFSET(x) offsetof(AudioFadeContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static int query_formats(AVFilterContext *ctx)
static double fade_gain(int curve, int64_t index, int range)
#define FADE_PLANAR(name, type)                                             \
static void fade_samples_## name ##p(uint8_t **dst, uint8_t * const *src,   \
int nb_samples, int channels, int dir, \
int64_t start, int range, int curve)   \
#define FADE(name, type)                                                    \
static void fade_samples_## name (uint8_t **dst, uint8_t * const *src,      \
int nb_samples, int channels, int dir,    \
int64_t start, int range, int curve)      \
FADE_PLANAR(dbl, double)
FADE_PLANAR(flt, float)
FADE_PLANAR(s16, int16_t)
FADE_PLANAR(s32, int32_t)
FADE(dbl, double)
FADE(flt, float)
FADE(s16, int16_t)
FADE(s32, int32_t)
static int config_output(AVFilterLink *outlink)
#if CONFIG_AFADE_FILTER
static const AVOption afade_options[] = ;
AVFILTER_DEFINE_CLASS(afade);
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad avfilter_af_afade_inputs[] = ;
static const AVFilterPad avfilter_af_afade_outputs[] = ;
AVFilter ff_af_afade = ;
#if CONFIG_ACROSSFADE_FILTER
static const AVOption acrossfade_options[] = ;
AVFILTER_DEFINE_CLASS(acrossfade);
#define CROSSFADE_PLANAR(name, type)                                           \
static void crossfade_samples_## name ##p(uint8_t **dst, uint8_t * const *cf0, \
uint8_t * const *cf1,                \
int nb_samples, int channels,        \
int curve0, int curve1)              \
#define CROSSFADE(name, type)                                               \
static void crossfade_samples_## name (uint8_t **dst, uint8_t * const *cf0, \
uint8_t * const *cf1,                \
int nb_samples, int channels,        \
int curve0, int curve1)              \
CROSSFADE_PLANAR(dbl, double)
CROSSFADE_PLANAR(flt, float)
CROSSFADE_PLANAR(s16, int16_t)
CROSSFADE_PLANAR(s32, int32_t)
CROSSFADE(dbl, double)
CROSSFADE(flt, float)
CROSSFADE(s16, int16_t)
CROSSFADE(s32, int32_t)
static int acrossfade_filter_frame(AVFilterLink *inlink, AVFrame *in)
static int acrossfade_request_frame(AVFilterLink *outlink)
static int acrossfade_config_output(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_acrossfade_inputs[] = ;
static const AVFilterPad avfilter_af_acrossfade_outputs[] = ;
AVFilter ff_af_acrossfade = ;
