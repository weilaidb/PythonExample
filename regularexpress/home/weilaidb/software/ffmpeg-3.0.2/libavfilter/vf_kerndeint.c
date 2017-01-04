typedef struct  KerndeintContext;
#define OFFSET(x) offsetof(KerndeintContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption kerndeint_options[] = ;
AVFILTER_DEFINE_CLASS(kerndeint);
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpic)
static const AVFilterPad kerndeint_inputs[] = ;
static const AVFilterPad kerndeint_outputs[] = ;
AVFilter ff_vf_kerndeint = ;
