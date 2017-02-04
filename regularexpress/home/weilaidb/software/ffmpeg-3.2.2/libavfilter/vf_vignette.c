static const char *const var_names[] = ;
enum var_name ;
enum EvalMode ;
typedef struct  VignetteContext;
OFFSET offsetof(VignetteContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vignette_options[] = ,
, .flags = FLAGS },
, .flags = FLAGS },
, .flags = FLAGS },
,
,
,
,
,
,
,
,
};
AVFILTER_DEFINE_CLASS(vignette);
init
uninit
query_formats
get_natural_factor
TS2D     ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
av_q2d)
update_context
get_dither_value
filter_frame
config_props
static const AVFilterPad vignette_inputs[] = ;
static const AVFilterPad vignette_outputs[] = ;
AVFilter ff_vf_vignette = ;
