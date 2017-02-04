#define DEFAULT_INPUT_NAME
typedef struct  TransformContext;
OFFSET offsetof(TransformContext, x)
OFFSETC (offsetof(TransformContext, conf)+offsetof(VSTransformConfig, x))
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vidstabtransform_options[] = ;
AVFILTER_DEFINE_CLASS(vidstabtransform);
init
uninit
query_formats
config_input
filter_frame
static const AVFilterPad avfilter_vf_vidstabtransform_inputs[] = ;
static const AVFilterPad avfilter_vf_vidstabtransform_outputs[] = ;
AVFilter ff_vf_vidstabtransform = ;
