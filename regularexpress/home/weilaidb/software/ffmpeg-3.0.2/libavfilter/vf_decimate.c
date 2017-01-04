#define INPUT_MAIN     0
#define INPUT_CLEANSRC 1
struct qitem ;
typedef struct  DecimateContext;
#define OFFSET(x) offsetof(DecimateContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption decimate_options[] = ;
AVFILTER_DEFINE_CLASS(decimate);
static void calc_diffs(const DecimateContext *dm, struct qitem *q,
const AVFrame *f1, const AVFrame *f2)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_input(AVFilterLink *inlink)
static av_cold int decimate_init(AVFilterContext *ctx)
static av_cold void decimate_uninit(AVFilterContext *ctx)
static int request_inlink(AVFilterContext *ctx, int lid)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static const AVFilterPad decimate_outputs[] = ;
AVFilter ff_vf_decimate = ;
