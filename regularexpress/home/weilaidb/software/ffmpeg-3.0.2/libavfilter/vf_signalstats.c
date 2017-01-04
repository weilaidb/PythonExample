enum FilterMode ;
typedef struct  SignalstatsContext;
typedef struct ThreadData  ThreadData;
typedef struct ThreadDataHueSatMetrics  ThreadDataHueSatMetrics;
#define OFFSET(x) offsetof(SignalstatsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption signalstats_options[] = ;
AVFILTER_DEFINE_CLASS(signalstats);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static AVFrame *alloc_frame(enum AVPixelFormat pixfmt, int w, int h)
static int config_props(AVFilterLink *outlink)
static void burn_frame(const SignalstatsContext *s, AVFrame *f, int x, int y)
static int filter_brng(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_tout_outlier(uint8_t x, uint8_t y, uint8_t z)
static int filter_tout(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
#define VREP_START 4
static int filter_vrep(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static const struct  filters_def[] = ;
#define DEPTH 256
static int compute_sat_hue_metrics(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *link, AVFrame *in)
static const AVFilterPad signalstats_inputs[] = ;
static const AVFilterPad signalstats_outputs[] = ;
AVFilter ff_vf_signalstats = ;
