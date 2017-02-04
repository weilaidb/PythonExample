#define RADIUS_MIN 0.1
#define RADIUS_MAX 5.0
#define STRENGTH_MIN -1.0
#define STRENGTH_MAX 1.0
#define THRESHOLD_MIN -30
#define THRESHOLD_MAX 30
typedef struct  FilterParam;
typedef struct  SmartblurContext;
OFFSET offsetof(SmartblurContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption smartblur_options[] = ;
AVFILTER_DEFINE_CLASS(smartblur);
init
uninit
query_formats
alloc_sws_context
config_props
blur
filter_frame
static const AVFilterPad smartblur_inputs[] = ;
static const AVFilterPad smartblur_outputs[] = ;
AVFilter ff_vf_smartblur = ;
