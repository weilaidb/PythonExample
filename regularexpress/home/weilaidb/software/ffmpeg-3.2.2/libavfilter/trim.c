typedef struct TrimContext  TrimContext;
init
config_input
OFFSET offsetof(TrimContext, x)
#define COMMON_OPTS                                                                                                                                                         \
, \
, \
, \
, \
, \
, \
, \
,
#if CONFIG_TRIM_FILTER
trim_filter_frame
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption trim_options[] = ;
AVFILTER_DEFINE_CLASS;
static const AVFilterPad trim_inputs[] = ;
static const AVFilterPad trim_outputs[] = ;
AVFilter ff_vf_trim = ;
#if CONFIG_ATRIM_FILTER
atrim_filter_frame
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption atrim_options[] = ;
AVFILTER_DEFINE_CLASS;
static const AVFilterPad atrim_inputs[] = ;
static const AVFilterPad atrim_outputs[] = ;
AVFilter ff_af_atrim = ;
