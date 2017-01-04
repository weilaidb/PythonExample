typedef struct ELBGContext  ELBGContext;
#define OFFSET(x) offsetof(ELBGContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption elbg_options[] = ;
AVFILTER_DEFINE_CLASS(elbg);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
#define NB_COMPONENTS 3
static int config_input(AVFilterLink *inlink)
#define R 0
#define G 1
#define B 2
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad elbg_inputs[] = ;
static const AVFilterPad elbg_outputs[] = ;
AVFilter ff_vf_elbg = ;
