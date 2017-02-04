typedef struct LoopContext  LoopContext;
#define AFLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define VFLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
OFFSET offsetof(LoopContext, x)
#if CONFIG_ALOOP_FILTER
aconfig_input
auninit
push_samples
afilter_frame
arequest_frame
static const AVOption aloop_options[] = ;
AVFILTER_DEFINE_CLASS(aloop);
static const AVFilterPad ainputs[] = ;
static const AVFilterPad aoutputs[] = ;
AVFilter ff_af_aloop = ;
#if CONFIG_LOOP_FILTER
init
uninit
push_frame
filter_frame
request_frame
static const AVOption loop_options[] = ;
AVFILTER_DEFINE_CLASS(loop);
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_loop = ;
