/* http:
enum FrameType ;
enum LimiterState ;
enum PrintFormat ;
typedef struct LoudNormContext  LoudNormContext;
OFFSET offsetof(LoudNormContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption loudnorm_options[] = ;
AVFILTER_DEFINE_CLASS(loudnorm);
frame_size
init_gaussian_filter
gaussian_filter
detect_peak
true_peak_limiter
filter_frame
request_frame
query_formats
config_input
uninit
static const AVFilterPad avfilter_af_loudnorm_inputs[] = ;
static const AVFilterPad avfilter_af_loudnorm_outputs[] = ;
AVFilter ff_af_loudnorm = ;
