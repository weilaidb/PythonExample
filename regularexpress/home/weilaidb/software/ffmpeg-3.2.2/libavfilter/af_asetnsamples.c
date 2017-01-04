typedef struct  ASNSContext;
#define OFFSET(x) offsetof(ASNSContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption asetnsamples_options[] = ;
AVFILTER_DEFINE_CLASS(asetnsamples);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props_output(AVFilterLink *outlink)
static int push_samples(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad asetnsamples_inputs[] = ;
static const AVFilterPad asetnsamples_outputs[] = ;
AVFilter ff_af_asetnsamples = ;
