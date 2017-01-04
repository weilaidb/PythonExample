#define DEFAULT_RESULT_NAME     "transforms.trf"
typedef struct  StabData;
#define OFFSET(x) offsetof(StabData, x)
#define OFFSETC(x) (offsetof(StabData, conf)+offsetof(VSMotionDetectConfig, x))
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vidstabdetect_options[] = ;
AVFILTER_DEFINE_CLASS(vidstabdetect);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad avfilter_vf_vidstabdetect_inputs[] = ;
static const AVFilterPad avfilter_vf_vidstabdetect_outputs[] = ;
AVFilter ff_vf_vidstabdetect = ;
