static const char * const var_names[] = ;
enum var_name ;
typedef struct  EvalContext;
val
static double (* const aeval_func1[])(void *, double) = ;
static const char * const aeval_func1_names[] = ;
OFFSET offsetof(EvalContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aevalsrc_options[]= ,
, CHAR_MIN, CHAR_MAX, FLAGS },
,
,
,
,
};
AVFILTER_DEFINE_CLASS(aevalsrc);
parse_channel_expressions
init
uninit
config_props
query_formats
request_frame
#if CONFIG_AEVALSRC_FILTER
static const AVFilterPad aevalsrc_outputs[] = ;
AVFilter ff_asrc_aevalsrc = ;
OFFSET offsetof(EvalContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aeval_options[]= ;
AVFILTER_DEFINE_CLASS(aeval);
aeval_query_formats
aeval_config_output
TS2T ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts)*av_q2d(tb))
filter_frame
#if CONFIG_AEVAL_FILTER
static const AVFilterPad aeval_inputs[] = ;
static const AVFilterPad aeval_outputs[] = ;
AVFilter ff_af_aeval = ;
