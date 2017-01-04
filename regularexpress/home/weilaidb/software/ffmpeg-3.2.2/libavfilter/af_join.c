typedef struct ChannelMap  ChannelMap;
typedef struct JoinContext  JoinContext;
#define OFFSET(x) offsetof(JoinContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption join_options[] = ;
AVFILTER_DEFINE_CLASS(join);
static int try_push_frame(AVFilterContext *ctx);
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static int parse_maps(AVFilterContext *ctx)
static av_cold int join_init(AVFilterContext *ctx)
static av_cold void join_uninit(AVFilterContext *ctx)
static int join_query_formats(AVFilterContext *ctx)
static void guess_map_matching(AVFilterContext *ctx, ChannelMap *ch,
uint64_t *inputs)
static void guess_map_any(AVFilterContext *ctx, ChannelMap *ch,
uint64_t *inputs)
static int join_config_output(AVFilterLink *outlink)
static int join_request_frame(AVFilterLink *outlink)
static int try_push_frame(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_join_outputs[] = ;
AVFilter ff_af_join = ;
