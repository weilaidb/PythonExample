#define R 0
#define G 1
#define B 2
#define A 3
typedef struct  ColorChannelMixerContext;
#define OFFSET(x) offsetof(ColorChannelMixerContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption colorchannelmixer_options[] = ;
AVFILTER_DEFINE_CLASS(colorchannelmixer);
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad colorchannelmixer_inputs[] = ;
static const AVFilterPad colorchannelmixer_outputs[] = ;
AVFilter ff_vf_colorchannelmixer = ;
