enum FilterMode ;
struct plane_info ;
typedef struct  EdgeDetectContext;
OFFSET offsetof(EdgeDetectContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption edgedetect_options[] = ;
AVFILTER_DEFINE_CLASS(edgedetect);
init
query_formats
config_props
gaussian_blur
enum ;
get_rounded_direction
sobel
non_maximum_suppression
double_threshold
color_mix
filter_frame
uninit
static const AVFilterPad edgedetect_inputs[] = ;
static const AVFilterPad edgedetect_outputs[] = ;
AVFilter ff_vf_edgedetect = ;
