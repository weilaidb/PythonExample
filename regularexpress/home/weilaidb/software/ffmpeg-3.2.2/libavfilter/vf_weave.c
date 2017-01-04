typedef struct WeaveContext  WeaveContext;
#define OFFSET(x) offsetof(WeaveContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption weave_options[] = ;
AVFILTER_DEFINE_CLASS(weave);
static int config_props_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad weave_inputs[] = ;
static const AVFilterPad weave_outputs[] = ;
AVFilter ff_vf_weave = ;
