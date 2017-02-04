#define PLANE_R 0x01
#define PLANE_G 0x02
#define PLANE_B 0x04
#define PLANE_A 0x08
#define PLANE_Y 0x10
#define PLANE_U 0x20
#define PLANE_V 0x40
typedef struct  ExtractPlanesContext;
OFFSET offsetof(ExtractPlanesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption extractplanes_options[] = ;
AVFILTER_DEFINE_CLASS(extractplanes);
query_formats
config_input
config_output
extract_from_packed
filter_frame
init
uninit
static const AVFilterPad extractplanes_inputs[] = ;
AVFilter ff_vf_extractplanes = ;
#if CONFIG_ALPHAEXTRACT_FILTER
init_alphaextract
AVFilter ff_vf_alphaextract = ;
