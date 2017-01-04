enum BenchAction ;
typedef struct  BenchContext;
#define OFFSET(x) offsetof(BenchContext, x)
#define DEFINE_OPTIONS(filt_name, FLAGS)                                                                                \
static const AVOption filt_name##_options[] =
#define START_TIME_KEY "lavfi.bench.start_time"
#define T2F(v) ((v) / 1000000.)
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#if CONFIG_BENCH_FILTER
DEFINE_OPTIONS(bench, AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM);
AVFILTER_DEFINE_CLASS(bench);
static const AVFilterPad bench_inputs[] = ;
static const AVFilterPad bench_outputs[] = ;
AVFilter ff_vf_bench = ;
#if CONFIG_ABENCH_FILTER
DEFINE_OPTIONS(abench, AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_AUDIO_PARAM);
AVFILTER_DEFINE_CLASS(abench);
static const AVFilterPad abench_inputs[] = ;
static const AVFilterPad abench_outputs[] = ;
AVFilter ff_af_abench = ;
