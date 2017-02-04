typedef struct ChannelMap  ChannelMap;
typedef struct JoinContext  JoinContext;
OFFSET offsetof(JoinContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption join_options[] = ,
,
};
AVFILTER_DEFINE_CLASS(join);
try_push_frame;
filter_frame
parse_maps
join_init
join_uninit
join_query_formats
guess_map_matching
guess_map_any
join_config_output
join_request_frame
try_push_frame
static const AVFilterPad avfilter_af_join_outputs[] = ;
AVFilter ff_af_join = ;
