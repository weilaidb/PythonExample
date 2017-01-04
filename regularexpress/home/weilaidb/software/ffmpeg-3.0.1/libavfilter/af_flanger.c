#define INTERPOLATION_LINEAR    0
#define INTERPOLATION_QUADRATIC 1
typedef struct FlangerContext  FlangerContext;
#define OFFSET(x) offsetof(FlangerContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption flanger_options[] = ;
AVFILTER_DEFINE_CLASS(flanger);
static int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad flanger_inputs[] = ;
static const AVFilterPad flanger_outputs[] = ;
AVFilter ff_af_flanger = ;
