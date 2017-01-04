enum SideDataMode ;
typedef struct SideDataContext  SideDataContext;
#define OFFSET(x) offsetof(SideDataContext, x)
#define DEFINE_OPTIONS(filt_name, FLAGS) \
static const AVOption filt_name##_options[] =
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#if CONFIG_ASIDEDATA_FILTER
DEFINE_OPTIONS(asidedata, AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(asidedata);
static const AVFilterPad ainputs[] = ;
static const AVFilterPad aoutputs[] = ;
AVFilter ff_af_asidedata = ;
#if CONFIG_SIDEDATA_FILTER
DEFINE_OPTIONS(sidedata, AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM);
AVFILTER_DEFINE_CLASS(sidedata);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_sidedata = ;
