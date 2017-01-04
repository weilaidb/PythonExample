typedef struct NullContext  FrameStepContext;
#define OFFSET(x) offsetof(FrameStepContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption framestep_options[] = ;
AVFILTER_DEFINE_CLASS(framestep);
static int config_output_props(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *ref)
static const AVFilterPad framestep_inputs[] = ;
static const AVFilterPad framestep_outputs[] = ;
AVFilter ff_vf_framestep = ;
