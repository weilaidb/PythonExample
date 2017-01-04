typedef struct DCShiftContext  DCShiftContext;
#define OFFSET(x) offsetof(DCShiftContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption dcshift_options[] = ;
AVFILTER_DEFINE_CLASS(dcshift);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad dcshift_inputs[] = ;
static const AVFilterPad dcshift_outputs[] = ;
AVFilter ff_af_dcshift = ;
