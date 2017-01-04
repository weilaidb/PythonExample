typedef struct StereoToolsContext  StereoToolsContext;
#define OFFSET(x) offsetof(StereoToolsContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption stereotools_options[] = ;
AVFILTER_DEFINE_CLASS(stereotools);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_stereotools = ;
