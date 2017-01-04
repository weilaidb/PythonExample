enum DisplayScale   ;
enum AmplitudeScale ;
enum SlideMode      ;
enum DisplayMode    ;
enum HistogramMode  ;
typedef struct AudioHistogramContext  AudioHistogramContext;
#define OFFSET(x) offsetof(AudioHistogramContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption ahistogram_options[] = ;
AVFILTER_DEFINE_CLASS(ahistogram);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad audiovectorscope_inputs[] = ;
static const AVFilterPad audiovectorscope_outputs[] = ;
AVFilter ff_avf_ahistogram = ;
