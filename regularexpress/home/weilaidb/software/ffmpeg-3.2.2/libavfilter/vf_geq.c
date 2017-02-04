typedef struct  GEQContext;
enum ;
OFFSET offsetof(GEQContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption geq_options[] = ;
AVFILTER_DEFINE_CLASS(geq);
getpix
lum
cb
cr
alpha
static const char *const var_names[] = ;
enum                                   ;
geq_init
geq_query_formats
geq_config_props
geq_filter_frame
geq_uninit
static const AVFilterPad geq_inputs[] = ;
static const AVFilterPad geq_outputs[] = ;
AVFilter ff_vf_geq = ;
