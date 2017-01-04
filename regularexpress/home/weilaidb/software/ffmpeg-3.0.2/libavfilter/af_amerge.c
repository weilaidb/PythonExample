#define SWR_CH_MAX 64
typedef struct  AMergeContext;
#define OFFSET(x) offsetof(AMergeContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption amerge_options[] = ;
AVFILTER_DEFINE_CLASS(amerge);
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static inline void copy_samples(int nb_inputs, struct amerge_input in[],
int *route, uint8_t *ins[],
uint8_t **outs, int ns, int bps)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static av_cold int init(AVFilterContext *ctx)
static const AVFilterPad amerge_outputs[] = ;
AVFilter ff_af_amerge = ;
