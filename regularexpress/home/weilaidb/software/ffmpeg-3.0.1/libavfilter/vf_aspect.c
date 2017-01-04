static const char *const var_names[] = ;
enum var_name ;
typedef struct AspectContext  AspectContext;
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
#define OFFSET(x) offsetof(AspectContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static inline void compute_dar(AVRational *dar, AVRational sar, int w, int h)
static int get_aspect_ratio(AVFilterLink *inlink, AVRational *aspect_ratio)
#if CONFIG_SETDAR_FILTER
static int setdar_config_props(AVFilterLink *inlink)
static const AVOption setdar_options[] = ;
AVFILTER_DEFINE_CLASS(setdar);
static const AVFilterPad avfilter_vf_setdar_inputs[] = ;
static const AVFilterPad avfilter_vf_setdar_outputs[] = ;
AVFilter ff_vf_setdar = ;
#if CONFIG_SETSAR_FILTER
static int setsar_config_props(AVFilterLink *inlink)
static const AVOption setsar_options[] = ;
AVFILTER_DEFINE_CLASS(setsar);
static const AVFilterPad avfilter_vf_setsar_inputs[] = ;
static const AVFilterPad avfilter_vf_setsar_outputs[] = ;
AVFilter ff_vf_setsar = ;
