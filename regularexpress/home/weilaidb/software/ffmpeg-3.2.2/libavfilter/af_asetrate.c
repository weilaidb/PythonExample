typedef struct  ASetRateContext;
#define CONTEXT ASetRateContext
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
OPT_GENERIC \
OPT_INT \
OPT_GENERIC(name, field, def, min, max, descr, INT, i64, __VA_ARGS__)
static const AVOption asetrate_options[] = ;
AVFILTER_DEFINE_CLASS(asetrate);
query_formats
config_props
filter_frame
static const AVFilterPad asetrate_inputs[] = ;
static const AVFilterPad asetrate_outputs[] = ;
AVFilter ff_af_asetrate = ;
