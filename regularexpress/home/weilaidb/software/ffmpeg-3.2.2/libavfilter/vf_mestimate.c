typedef struct MEContext  MEContext;
#define OFFSET(x) offsetof(MEContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define CONST(name, help, val, unit)
static const AVOption mestimate_options[] = ;
AVFILTER_DEFINE_CLASS(mestimate);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void add_mv_data(AVMotionVector *mv, int mb_size,
int x, int y, int x_mv, int y_mv, int dir)
#define SEARCH_MV(method)\
do  while (0)
#define ADD_PRED(preds, px, py)\
do  while(0)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad mestimate_inputs[] = ;
static const AVFilterPad mestimate_outputs[] = ;
AVFilter ff_vf_mestimate = ;
