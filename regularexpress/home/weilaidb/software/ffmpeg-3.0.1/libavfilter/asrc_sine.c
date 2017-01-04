typedef struct  SineContext;
#define CONTEXT SineContext
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define OPT_GENERIC(name, field, def, min, max, descr, type, deffield, ...) \
#define OPT_INT(name, field, def, min, max, descr, ...) \
OPT_GENERIC(name, field, def, min, max, descr, INT, i64, __VA_ARGS__)
#define OPT_DBL(name, field, def, min, max, descr, ...) \
OPT_GENERIC(name, field, def, min, max, descr, DOUBLE, dbl, __VA_ARGS__)
#define OPT_DUR(name, field, def, min, max, descr, ...) \
OPT_GENERIC(name, field, def, min, max, descr, DURATION, str, __VA_ARGS__)
#define OPT_STR(name, field, def, min, max, descr, ...) \
OPT_GENERIC(name, field, def, min, max, descr, STRING, str, __VA_ARGS__)
static const AVOption sine_options[] = ;
AVFILTER_DEFINE_CLASS(sine);
#define LOG_PERIOD 15
#define AMPLITUDE 4095
#define AMPLITUDE_SHIFT 3
static void make_sin_table(int16_t *sin)
static const char *const var_names[] = ;
enum ;
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static av_cold int query_formats(AVFilterContext *ctx)
static av_cold int config_props(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad sine_outputs[] = ;
AVFilter ff_asrc_sine = ;
