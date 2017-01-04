typedef struct TremoloContext  TremoloContext;
#define OFFSET(x) offsetof(TremoloContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption tremolo_options[] = ;
AVFILTER_DEFINE_CLASS(tremolo);
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad avfilter_af_tremolo_inputs[] = ;
static const AVFilterPad avfilter_af_tremolo_outputs[] = ;
AVFilter ff_af_tremolo = ;
