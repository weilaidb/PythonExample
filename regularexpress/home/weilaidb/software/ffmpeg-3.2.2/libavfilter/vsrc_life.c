typedef struct  LifeContext;
#define ALIVE_CELL 0xFF
OFFSET offsetof(LifeContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption life_options[] = ,
, 0, INT_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
,
,
,
,
,
,
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
, CHAR_MIN, CHAR_MAX, FLAGS },
};
AVFILTER_DEFINE_CLASS(life);
parse_rule
show_life_grid
init_pattern_from_file
init
uninit
config_props
evolve
fill_picture_monoblack
FAST_DIV255 ((((x) + 128) * 257) >> 16)
fill_picture_rgb
request_frame
query_formats
static const AVFilterPad life_outputs[] = ;
AVFilter ff_vsrc_life = ;
