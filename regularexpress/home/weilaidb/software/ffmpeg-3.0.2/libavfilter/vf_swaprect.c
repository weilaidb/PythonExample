typedef struct SwapRectContext  SwapRectContext;
#define OFFSET(x) offsetof(SwapRectContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption swaprect_options[] = ;
AVFILTER_DEFINE_CLASS(swaprect);
static int query_formats(AVFilterContext *ctx)
static const char *const var_names[] = ;
enum                                   ;
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_swaprect = ;
