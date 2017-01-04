typedef struct ChannelSplitContext  ChannelSplitContext;
#define OFFSET(x) offsetof(ChannelSplitContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption channelsplit_options[] = ;
AVFILTER_DEFINE_CLASS(channelsplit);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad avfilter_af_channelsplit_inputs[] = ;
AVFilter ff_af_channelsplit = ;
