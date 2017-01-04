typedef struct SilenceDetectContext  SilenceDetectContext;
#define OFFSET(x) offsetof(SilenceDetectContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
static const AVOption silencedetect_options[] = ;
AVFILTER_DEFINE_CLASS(silencedetect);
static char *get_metadata_val(AVFrame *insamples, const char *key)
static av_always_inline void update(SilenceDetectContext *s, AVFrame *insamples,
int is_silence, int64_t nb_samples_notify,
AVRational time_base)
#define SILENCE_DETECT(name, type)                                               \
static void silencedetect_##name(SilenceDetectContext *s, AVFrame *insamples,    \
int nb_samples, int64_t nb_samples_notify,      \
AVRational time_base)                           \
SILENCE_DETECT(dbl, double)
SILENCE_DETECT(flt, float)
SILENCE_DETECT(s32, int32_t)
SILENCE_DETECT(s16, int16_t)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad silencedetect_inputs[] = ;
static const AVFilterPad silencedetect_outputs[] = ;
AVFilter ff_af_silencedetect = ;
