typedef struct ChanParam  ChanParam;
typedef struct CompandSegment  CompandSegment;
typedef struct CompandContext  CompandContext;
#define OFFSET(x) offsetof(CompandContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption compand_options[] = ;
AVFILTER_DEFINE_CLASS(compand);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static void count_items(char *item_str, int *nb_items)
static void update_volume(ChanParam *cp, double in)
static double get_volume(CompandContext *s, double in_lin)
static int compand_nodelay(AVFilterContext *ctx, AVFrame *frame)
#define MOD(a, b) (((a) >= (b)) ? (a) - (b) : (a))
static int compand_delay(AVFilterContext *ctx, AVFrame *frame)
static int compand_drain(AVFilterLink *outlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad compand_inputs[] = ;
static const AVFilterPad compand_outputs[] = ;
AVFilter ff_af_compand = ;
