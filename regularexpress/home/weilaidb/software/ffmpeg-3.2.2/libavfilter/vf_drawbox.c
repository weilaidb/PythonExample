static const char *const var_names[] = ;
enum ;
enum var_name ;
typedef struct DrawBoxContext  DrawBoxContext;
static const int NUM_EXPR_EVALS = 5;
init
query_formats
config_input
filter_frame
OFFSET offsetof(DrawBoxContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#if CONFIG_DRAWBOX_FILTER
static const AVOption drawbox_options[] = ,
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
};
AVFILTER_DEFINE_CLASS(drawbox);
static const AVFilterPad drawbox_inputs[] = ;
static const AVFilterPad drawbox_outputs[] = ;
AVFilter ff_vf_drawbox = ;
#if CONFIG_DRAWGRID_FILTER
pixel_belongs_to_grid
drawgrid_filter_frame
static const AVOption drawgrid_options[] = ,
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
,       CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
,         CHAR_MIN, CHAR_MAX, FLAGS },
,         CHAR_MIN, CHAR_MAX, FLAGS },
};
AVFILTER_DEFINE_CLASS(drawgrid);
static const AVFilterPad drawgrid_inputs[] = ;
static const AVFilterPad drawgrid_outputs[] = ;
AVFilter ff_vf_drawgrid = ;
