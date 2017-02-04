struct ChannelMap ;
enum MappingMode ;
#define MAX_CH 64
typedef struct ChannelMapContext  ChannelMapContext;
OFFSET offsetof(ChannelMapContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption channelmap_options[] = ;
AVFILTER_DEFINE_CLASS(channelmap);
split
get_channel_idx
get_channel
channelmap_init
channelmap_query_formats
channelmap_filter_frame
channelmap_config_input
static const AVFilterPad avfilter_af_channelmap_inputs[] = ;
static const AVFilterPad avfilter_af_channelmap_outputs[] = ;
AVFilter ff_af_channelmap = ;
