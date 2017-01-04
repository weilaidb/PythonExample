typedef struct AudioLimiterContext  AudioLimiterContext;
#define OFFSET(x) offsetof(AudioLimiterContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM
#define F AV_OPT_FLAG_FILTERING_PARAM
static const AVOption alimiter_options[] = ;
AVFILTER_DEFINE_CLASS(alimiter);
static av_cold int init(AVFilterContext *ctx)
static double get_rdelta(AudioLimiterContext *s, double release, int sample_rate,
double peak, double limit, double patt, int asc)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad alimiter_inputs[] = ;
static const AVFilterPad alimiter_outputs[] = ;
AVFilter ff_af_alimiter = ;
