typedef struct SilenceDetectContext  SilenceDetectContext;
OFFSET offsetof(SilenceDetectContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM
static const AVOption silencedetect_options[] = ;
AVFILTER_DEFINE_CLASS(silencedetect);
*get_metadata_val
update
SILENCE_DETECT                                               \
static void silencedetect_##name(SilenceDetectContext *s, AVFrame *insamples,    \
int nb_samples, int64_t nb_samples_notify,      \
AVRational time_base)                           \
SILENCE_DETECT(dbl, double)
SILENCE_DETECT(flt, float)
SILENCE_DETECT(s32, int32_t)
SILENCE_DETECT(s16, int16_t)
config_input
filter_frame
query_formats
static const AVFilterPad silencedetect_inputs[] = ;
static const AVFilterPad silencedetect_outputs[] = ;
AVFilter ff_af_silencedetect = ;
