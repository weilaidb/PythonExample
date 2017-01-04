struct ChannelMap ;
enum MappingMode ;
#define MAX_CH 64
typedef struct ChannelMapContext  ChannelMapContext;
#define OFFSET(x) offsetof(ChannelMapContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption channelmap_options[] = ;
AVFILTER_DEFINE_CLASS(channelmap);
static char* split(char *message, char delim)
static int get_channel_idx(char **map, int *ch, char delim, int max_ch)
static int get_channel(char **map, uint64_t *ch, char delim)
static av_cold int channelmap_init(AVFilterContext *ctx)
static int channelmap_query_formats(AVFilterContext *ctx)
static int channelmap_filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int channelmap_config_input(AVFilterLink *inlink)
static const AVFilterPad avfilter_af_channelmap_inputs[] = ;
static const AVFilterPad avfilter_af_channelmap_outputs[] = ;
AVFilter ff_af_channelmap = ;
