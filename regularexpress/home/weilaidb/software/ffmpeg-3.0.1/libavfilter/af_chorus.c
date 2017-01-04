typedef struct ChorusContext  ChorusContext;
#define OFFSET(x) offsetof(ChorusContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption chorus_options[] = ;
AVFILTER_DEFINE_CLASS(chorus);
static void count_items(char *item_str, int *nb_items)
static void fill_items(char *item_str, int *nb_items, float *items)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
#define MOD(a, b) (((a) >= (b)) ? (a) - (b) : (a))
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad chorus_inputs[] = ;
static const AVFilterPad chorus_outputs[] = ;
AVFilter ff_af_chorus = ;
