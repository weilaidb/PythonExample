typedef struct TrimContext  TrimContext;
static av_cold int init(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define OFFSET(x) offsetof(TrimContext, x)
#define COMMON_OPTS                                                                                                                                                         \
, \
, \
, \
, \
,
#define COMPAT_OPTS \
, \
, \
,
#if CONFIG_TRIM_FILTER
static int trim_filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption trim_options[] = ;
#undef FLAGS
AVFILTER_DEFINE_CLASS(trim);
static const AVFilterPad trim_inputs[] = ;
static const AVFilterPad trim_outputs[] = ;
AVFilter ff_vf_trim = ;
#if CONFIG_ATRIM_FILTER
static int atrim_filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption atrim_options[] = ;
#undef FLAGS
AVFILTER_DEFINE_CLASS(atrim);
static const AVFilterPad atrim_inputs[] = ;
static const AVFilterPad atrim_outputs[] = ;
AVFilter ff_af_atrim = ;
