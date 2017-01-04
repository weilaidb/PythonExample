typedef struct ShufflePlanesContext  ShufflePlanesContext;
static av_cold int shuffleplanes_config_input(AVFilterLink *inlink)
static int shuffleplanes_filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(ShufflePlanesContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption shuffleplanes_options[] = ;
AVFILTER_DEFINE_CLASS(shuffleplanes);
static const AVFilterPad shuffleplanes_inputs[] = ;
static const AVFilterPad shuffleplanes_outputs[] = ;
AVFilter ff_vf_shuffleplanes = ;
