typedef struct  APadContext;
#define OFFSET(x) offsetof(APadContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption apad_options[] = ;
AVFILTER_DEFINE_CLASS(apad);
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad apad_inputs[] = ;
static const AVFilterPad apad_outputs[] = ;
AVFilter ff_af_apad = ;
