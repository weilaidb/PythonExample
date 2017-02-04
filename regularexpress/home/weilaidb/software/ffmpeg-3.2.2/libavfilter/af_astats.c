typedef struct ChannelStats  ChannelStats;
typedef struct  AudioStatsContext;
OFFSET offsetof(AudioStatsContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption astats_options[] = ;
AVFILTER_DEFINE_CLASS(astats);
query_formats
reset_stats
config_output
bit_depth
update_stat
set_meta
LINEAR_TO_DB (log10(x) * 20)
set_metadata
filter_frame
print_stats
uninit
static const AVFilterPad astats_inputs[] = ;
static const AVFilterPad astats_outputs[] = ;
AVFilter ff_af_astats = ;
