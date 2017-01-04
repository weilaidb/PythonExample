typedef struct LoopContext  LoopContext;
#define AFLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define VFLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define OFFSET(x) offsetof(LoopContext, x)
#if CONFIG_ALOOP_FILTER
static int aconfig_input(AVFilterLink *inlink)
static av_cold void auninit(AVFilterContext *ctx)
static int push_samples(AVFilterContext *ctx, int nb_samples)
static int afilter_frame(AVFilterLink *inlink, AVFrame *frame)
static int arequest_frame(AVFilterLink *outlink)
static const AVOption aloop_options[] = ;
AVFILTER_DEFINE_CLASS(aloop);
static const AVFilterPad ainputs[] = ;
static const AVFilterPad aoutputs[] = ;
AVFilter ff_af_aloop = ;
#if CONFIG_LOOP_FILTER
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int push_frame(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static const AVOption loop_options[] = ;
AVFILTER_DEFINE_CLASS(loop);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_loop = ;
