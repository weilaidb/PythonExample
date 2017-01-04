typedef struct  TelecineContext;
#define OFFSET(x) offsetof(TelecineContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption telecine_options[] = ;
AVFILTER_DEFINE_CLASS(telecine);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad telecine_inputs[] = ;
static const AVFilterPad telecine_outputs[] = ;
AVFilter ff_vf_telecine = ;
