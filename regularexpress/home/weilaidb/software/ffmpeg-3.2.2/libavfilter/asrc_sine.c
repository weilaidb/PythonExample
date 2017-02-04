typedef struct  SineContext;
#define CONTEXT SineContext
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
OPT_GENERIC \
OPT_INT \
OPT_GENERIC(name, field, def, min, max, descr, INT, i64, __VA_ARGS__)
OPT_DBL \
OPT_GENERIC(name, field, def, min, max, descr, DOUBLE, dbl, __VA_ARGS__)
OPT_DUR \
OPT_GENERIC(name, field, def, min, max, descr, DURATION, str, __VA_ARGS__)
OPT_STR \
OPT_GENERIC(name, field, def, min, max, descr, STRING, str, __VA_ARGS__)
static const AVOption sine_options[] = ;
AVFILTER_DEFINE_CLASS(sine);
#define LOG_PERIOD 15
#define AMPLITUDE 4095
#define AMPLITUDE_SHIFT 3
make_sin_table
static const char *const var_names[] = ;
enum ;
init
uninit
query_formats
config_props
request_frame
static const AVFilterPad sine_outputs[] = ;
AVFilter ff_asrc_sine = ;
