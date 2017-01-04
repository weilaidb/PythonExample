typedef struct AudioGateContext  AudioGateContext;
#define OFFSET(x) offsetof(AudioGateContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ;
static int agate_config_input(AVFilterLink *inlink)
#define FAKE_INFINITY (65536.0 * 65536.0)
#define IS_FAKE_INFINITY(value) (fabs(value-FAKE_INFINITY) < 1.0)
static double output_gain(double lin_slope, double ratio, double thres,
double knee, double knee_start, double knee_stop,
double lin_knee_stop, double range)
static void gate(AudioGateContext *s,
const double *src, double *dst, const double *scsrc,
int nb_samples, double level_in, double level_sc,
AVFilterLink *inlink, AVFilterLink *sclink)
#if CONFIG_AGATE_FILTER
#define agate_options options
AVFILTER_DEFINE_CLASS(agate);
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_agate = ;
#if CONFIG_SIDECHAINGATE_FILTER
#define sidechaingate_options options
AVFILTER_DEFINE_CLASS(sidechaingate);
static int scfilter_frame(AVFilterLink *link, AVFrame *frame)
static int screquest_frame(AVFilterLink *outlink)
static int scquery_formats(AVFilterContext *ctx)
static int scconfig_output(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad sidechaingate_inputs[] = ;
static const AVFilterPad sidechaingate_outputs[] = ;
AVFilter ff_af_sidechaingate = ;
