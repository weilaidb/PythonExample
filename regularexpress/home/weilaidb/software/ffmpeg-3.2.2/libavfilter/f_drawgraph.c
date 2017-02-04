typedef struct DrawGraphContext  DrawGraphContext;
OFFSET offsetof(DrawGraphContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption drawgraph_options[] = ,
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
,
,
,
,
,
,
,
,
,
,
,
,
, 0, 0, FLAGS },
, 0, 0, FLAGS },
};
static const char *const var_names[] = ;
enum                                   ;
init
query_formats
clear_image
draw_dot
filter_frame
request_frame
config_output
uninit
AVFILTER_DEFINE_CLASS;
static const AVFilterPad drawgraph_inputs[] = ;
static const AVFilterPad drawgraph_outputs[] = ;
AVFilter ff_vf_drawgraph = ;
#if CONFIG_ADRAWGRAPH_FILTER
AVFILTER_DEFINE_CLASS;
static const AVFilterPad adrawgraph_inputs[] = ;
static const AVFilterPad adrawgraph_outputs[] = ;
AVFilter ff_avf_adrawgraph = ;
