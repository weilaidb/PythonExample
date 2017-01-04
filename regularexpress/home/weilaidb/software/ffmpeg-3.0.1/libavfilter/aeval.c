static const char * const var_names[] = ;
enum var_name ;
typedef struct  EvalContext;
static double val(void *priv, double ch)
static double (* const aeval_func1[])(void *, double) = ;
static const char * const aeval_func1_names[] = ;
#define OFFSET(x) offsetof(EvalContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aevalsrc_options[]= ;
AVFILTER_DEFINE_CLASS(aevalsrc);
static int parse_channel_expressions(AVFilterContext *ctx,
int expected_nb_channels)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static int request_frame(AVFilterLink *outlink)
#if CONFIG_AEVALSRC_FILTER
static const AVFilterPad aevalsrc_outputs[] = ;
AVFilter ff_asrc_aevalsrc = ;
#define OFFSET(x) offsetof(EvalContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aeval_options[]= ;
AVFILTER_DEFINE_CLASS(aeval);
static int aeval_query_formats(AVFilterContext *ctx)
static int aeval_config_output(AVFilterLink *outlink)
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#if CONFIG_AEVAL_FILTER
static const AVFilterPad aeval_inputs[] = ;
static const AVFilterPad aeval_outputs[] = ;
AVFilter ff_af_aeval = ;
