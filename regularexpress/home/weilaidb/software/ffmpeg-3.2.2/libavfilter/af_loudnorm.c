/* http:
enum FrameType ;
enum LimiterState ;
enum PrintFormat ;
typedef struct LoudNormContext  LoudNormContext;
#define OFFSET(x) offsetof(LoudNormContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption loudnorm_options[] = ;
AVFILTER_DEFINE_CLASS(loudnorm);
static inline int frame_size(int sample_rate, int frame_len_msec)
static void init_gaussian_filter(LoudNormContext *s)
static double gaussian_filter(LoudNormContext *s, int index)
static void detect_peak(LoudNormContext *s, int offset, int nb_samples, int channels, int *peak_delta, double *peak_value)
static void true_peak_limiter(LoudNormContext *s, double *out, int nb_samples, int channels)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad avfilter_af_loudnorm_inputs[] = ;
static const AVFilterPad avfilter_af_loudnorm_outputs[] = ;
AVFilter ff_af_loudnorm = ;
