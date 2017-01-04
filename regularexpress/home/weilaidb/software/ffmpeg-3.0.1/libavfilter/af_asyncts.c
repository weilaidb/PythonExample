typedef struct ASyncContext  ASyncContext;
#define OFFSET(x) offsetof(ASyncContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption asyncts_options[] = ;
AVFILTER_DEFINE_CLASS(asyncts);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *link)
static int64_t get_delay(ASyncContext *s)
static void handle_trimming(AVFilterContext *ctx)
static int request_frame(AVFilterLink *link)
static int write_to_fifo(ASyncContext *s, AVFrame *buf)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad avfilter_af_asyncts_inputs[] = ;
static const AVFilterPad avfilter_af_asyncts_outputs[] = ;
AVFilter ff_af_asyncts = ;
