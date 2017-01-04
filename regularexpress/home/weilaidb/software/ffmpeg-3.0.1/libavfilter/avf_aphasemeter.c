typedef struct AudioPhaseMeterContext  AudioPhaseMeterContext;
#define OFFSET(x) offsetof(AudioPhaseMeterContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption aphasemeter_options[] = ;
AVFILTER_DEFINE_CLASS(aphasemeter);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static inline int get_x(float phase, int w)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_avf_aphasemeter = ;
