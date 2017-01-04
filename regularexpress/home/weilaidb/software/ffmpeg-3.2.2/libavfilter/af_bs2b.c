typedef struct Bs2bContext  Bs2bContext;
#define OFFSET(x) offsetof(Bs2bContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
static const AVOption bs2b_options[] = ;
AVFILTER_DEFINE_CLASS(bs2b);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int config_output(AVFilterLink *outlink)
static const AVFilterPad bs2b_inputs[] = ;
static const AVFilterPad bs2b_outputs[] = ;
AVFilter ff_af_bs2b = ;
