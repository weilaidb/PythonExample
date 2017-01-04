#define DEFAULT_INPUT_NAME     "transforms.trf"
typedef struct  TransformContext;
#define OFFSET(x) offsetof(TransformContext, x)
#define OFFSETC(x) (offsetof(TransformContext, conf)+offsetof(VSTransformConfig, x))
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vidstabtransform_options[] = ;
AVFILTER_DEFINE_CLASS(vidstabtransform);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad avfilter_vf_vidstabtransform_inputs[] = ;
static const AVFilterPad avfilter_vf_vidstabtransform_outputs[] = ;
AVFilter ff_vf_vidstabtransform = ;
