typedef struct  DejudderContext;
#define OFFSET(x) offsetof(DejudderContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_VIDEO_PARAM
static const AVOption dejudder_options[] = ;
AVFILTER_DEFINE_CLASS(dejudder);
static int config_out_props(AVFilterLink *outlink)
static av_cold int dejudder_init(AVFilterContext *ctx)
static av_cold void dejudder_uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVFilterPad dejudder_inputs[] = ;
static const AVFilterPad dejudder_outputs[] = ;
AVFilter ff_vf_dejudder = ;
