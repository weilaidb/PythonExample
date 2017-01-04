typedef struct  ASetRateContext;
#define CONTEXT ASetRateContext
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define OPT_GENERIC(name, field, def, min, max, descr, type, deffield, ...) \
#define OPT_INT(name, field, def, min, max, descr, ...) \
OPT_GENERIC(name, field, def, min, max, descr, INT, i64, __VA_ARGS__)
static const AVOption asetrate_options[] = ;
AVFILTER_DEFINE_CLASS(asetrate);
static av_cold int query_formats(AVFilterContext *ctx)
static av_cold int config_props(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVFilterPad asetrate_inputs[] = ;
static const AVFilterPad asetrate_outputs[] = ;
AVFilter ff_af_asetrate = ;
