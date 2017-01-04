#define R 0
#define G 1
#define B 2
#define A 3
typedef struct  Range;
typedef struct  ColorBalanceContext;
#define OFFSET(x) offsetof(ColorBalanceContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption colorbalance_options[] = ;
AVFILTER_DEFINE_CLASS(colorbalance);
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad colorbalance_inputs[] = ;
static const AVFilterPad colorbalance_outputs[] = ;
AVFilter ff_vf_colorbalance = ;
