typedef struct  AudioFadeContext;
enum CurveType ;
OFFSET offsetof(AudioFadeContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
query_formats
fade_gain
FADE_PLANAR                                             \
static void fade_samples_## name ##p(uint8_t **dst, uint8_t * const *src,   \
int nb_samples, int channels, int dir, \
int64_t start, int range, int curve)   \
FADE                                                    \
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
config_output
#if CONFIG_AFADE_FILTER
static const AVOption afade_options[] = ;
AVFILTER_DEFINE_CLASS(afade);
init
filter_frame
static const AVFilterPad avfilter_af_afade_inputs[] = ;
static const AVFilterPad avfilter_af_afade_outputs[] = ;
AVFilter ff_af_afade = ;
#if CONFIG_ACROSSFADE_FILTER
static const AVOption acrossfade_options[] = ;
AVFILTER_DEFINE_CLASS(acrossfade);
CROSSFADE_PLANAR                                           \
static void crossfade_samples_## name ##p(uint8_t **dst, uint8_t * const *cf0, \
uint8_t * const *cf1,                \
int nb_samples, int channels,        \
int curve0, int curve1)              \
CROSSFADE                                               \
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
acrossfade_filter_frame
acrossfade_request_frame
acrossfade_config_output
uninit
static const AVFilterPad avfilter_af_acrossfade_inputs[] = ;
static const AVFilterPad avfilter_af_acrossfade_outputs[] = ;
AVFilter ff_af_acrossfade = ;
