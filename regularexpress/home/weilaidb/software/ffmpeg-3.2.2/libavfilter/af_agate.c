typedef struct AudioGateContext  AudioGateContext;
OFFSET offsetof(AudioGateContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption options[] = ;
agate_config_input
#define FAKE_INFINITY (65536.0 * 65536.0)
IS_FAKE_INFINITY (fabs(value-FAKE_INFINITY) < 1.0)
output_gain
gate
#if CONFIG_AGATE_FILTER
AVFILTER_DEFINE_CLASS;
query_formats
filter_frame
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_agate = ;
#if CONFIG_SIDECHAINGATE_FILTER
AVFILTER_DEFINE_CLASS;
scfilter_frame
screquest_frame
scquery_formats
scconfig_output
uninit
static const AVFilterPad sidechaingate_inputs[] = ;
static const AVFilterPad sidechaingate_outputs[] = ;
AVFilter ff_af_sidechaingate = ;
