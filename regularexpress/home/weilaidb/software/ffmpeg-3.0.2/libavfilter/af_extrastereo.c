typedef struct ExtraStereoContext  ExtraStereoContext;
#define OFFSET(x) offsetof(ExtraStereoContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption extrastereo_options[] = ;
AVFILTER_DEFINE_CLASS(extrastereo);
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_extrastereo = ;
