typedef struct AudioLimiterContext  AudioLimiterContext;
OFFSET offsetof(AudioLimiterContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption alimiter_options[] = ;
AVFILTER_DEFINE_CLASS(alimiter);
init
get_rdelta
filter_frame
query_formats
config_input
uninit
static const AVFilterPad alimiter_inputs[] = ;
static const AVFilterPad alimiter_outputs[] = ;
AVFilter ff_af_alimiter = ;
