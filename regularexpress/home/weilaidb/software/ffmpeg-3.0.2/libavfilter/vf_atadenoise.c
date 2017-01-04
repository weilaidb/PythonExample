#define FF_BUFQUEUE_SIZE 129
#define SIZE FF_BUFQUEUE_SIZE
typedef struct ATADenoiseContext  ATADenoiseContext;
#define OFFSET(x) offsetof(ATADenoiseContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption atadenoise_options[] = ;
AVFILTER_DEFINE_CLASS(atadenoise);
static int query_formats(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
typedef struct ThreadData  ThreadData;
static int filter_slice8(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_slice16(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_atadenoise = ;
