typedef struct AFFTFiltContext  AFFTFiltContext;
static const char *const var_names[] = ;
enum                                   ;
#define OFFSET(x) offsetof(AFFTFiltContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption afftfilt_options[] = ;
AVFILTER_DEFINE_CLASS(afftfilt);
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_afftfilt = ;
