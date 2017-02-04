static const char *const var_names[] = ;
enum var_name ;
typedef struct AspectContext  AspectContext;
init
filter_frame
OFFSET offsetof(AspectContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
compute_dar
get_aspect_ratio
#if CONFIG_SETDAR_FILTER
setdar_config_props
static const AVOption setdar_options[] = ,
, .flags = FLAGS },
, .flags = FLAGS },
#if FF_API_OLD_FILTER_OPTS
,
,
};
AVFILTER_DEFINE_CLASS(setdar);
static const AVFilterPad avfilter_vf_setdar_inputs[] = ;
static const AVFilterPad avfilter_vf_setdar_outputs[] = ;
AVFilter ff_vf_setdar = ;
#if CONFIG_SETSAR_FILTER
setsar_config_props
static const AVOption setsar_options[] = ,
, .flags = FLAGS },
, .flags = FLAGS },
#if FF_API_OLD_FILTER_OPTS
,
,
};
AVFILTER_DEFINE_CLASS(setsar);
static const AVFilterPad avfilter_vf_setsar_inputs[] = ;
static const AVFilterPad avfilter_vf_setsar_outputs[] = ;
AVFilter ff_vf_setsar = ;
