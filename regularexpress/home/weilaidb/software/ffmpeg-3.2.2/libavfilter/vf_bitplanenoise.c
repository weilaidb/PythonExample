typedef struct BPNContext  BPNContext;
#define OFFSET(x) offsetof(BPNContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption bitplanenoise_options[] = ;
AVFILTER_DEFINE_CLASS(bitplanenoise);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define CHECK_BIT(x, a, b, c)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_bitplanenoise = ;
