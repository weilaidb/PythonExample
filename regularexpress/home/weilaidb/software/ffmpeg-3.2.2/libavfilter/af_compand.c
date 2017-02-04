typedef struct ChanParam  ChanParam;
typedef struct CompandSegment  CompandSegment;
typedef struct CompandContext  CompandContext;
OFFSET offsetof(CompandContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption compand_options[] = ,
, 0, 0, A },
, 0, 0, A },
,
,
,
,
};
AVFILTER_DEFINE_CLASS(compand);
init
uninit
query_formats
count_items
update_volume
get_volume
compand_nodelay
MOD (((a) >= (b)) ? (a) - (b) : (a))
compand_delay
compand_drain
config_output
filter_frame
request_frame
static const AVFilterPad compand_inputs[] = ;
static const AVFilterPad compand_outputs[] = ;
AVFilter ff_af_compand = ;
