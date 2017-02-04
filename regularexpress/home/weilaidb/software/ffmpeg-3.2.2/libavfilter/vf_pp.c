typedef struct  PPFilterContext;
OFFSET offsetof(PPFilterContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption pp_options[] = ,
};
AVFILTER_DEFINE_CLASS(pp);
pp_init
pp_process_command
pp_query_formats
pp_config_props
pp_filter_frame
pp_uninit
static const AVFilterPad pp_inputs[] = ;
static const AVFilterPad pp_outputs[] = ;
AVFilter ff_vf_pp = ;
