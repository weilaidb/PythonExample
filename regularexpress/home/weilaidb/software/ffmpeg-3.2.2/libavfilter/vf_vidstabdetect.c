#define DEFAULT_RESULT_NAME
typedef struct  StabData;
OFFSET offsetof(StabData, x)
OFFSETC (offsetof(StabData, conf)+offsetof(VSMotionDetectConfig, x))
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vidstabdetect_options[] = ;
AVFILTER_DEFINE_CLASS(vidstabdetect);
init
uninit
query_formats
config_input
filter_frame
static const AVFilterPad avfilter_vf_vidstabdetect_inputs[] = ;
static const AVFilterPad avfilter_vf_vidstabdetect_outputs[] = ;
AVFilter ff_vf_vidstabdetect = ;
