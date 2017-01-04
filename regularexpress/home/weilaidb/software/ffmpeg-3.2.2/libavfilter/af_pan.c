#define MAX_CHANNELS 64
typedef struct PanContext  PanContext;
static void skip_spaces(char **arg)
static int parse_channel_name(char **arg, int *rchannel, int *rnamed)
static av_cold int init(AVFilterContext *ctx)
static int are_gains_pure(const PanContext *pan)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *link)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static av_cold void uninit(AVFilterContext *ctx)
#define OFFSET(x) offsetof(PanContext, x)
static const AVOption pan_options[] = ;
AVFILTER_DEFINE_CLASS(pan);
static const AVFilterPad pan_inputs[] = ;
static const AVFilterPad pan_outputs[] = ;
AVFilter ff_af_pan = ;
