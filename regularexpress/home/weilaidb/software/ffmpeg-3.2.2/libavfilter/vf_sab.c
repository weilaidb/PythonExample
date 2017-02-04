typedef struct  FilterParam;
typedef struct  SabContext;
query_formats
#define RADIUS_MIN 0.1
#define RADIUS_MAX 4.0
#define PRE_FILTER_RADIUS_MIN 0.1
#define PRE_FILTER_RADIUS_MAX 2.0
#define STRENGTH_MIN 0.1
#define STRENGTH_MAX 100.0
OFFSET offsetof(SabContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption sab_options[] = ;
AVFILTER_DEFINE_CLASS(sab);
init
close_filter_param
uninit
open_filter_param
config_props
#define NB_PLANES 4
blur
filter_frame
static const AVFilterPad sab_inputs[] = ;
static const AVFilterPad sab_outputs[] = ;
AVFilter ff_vf_sab = ;
