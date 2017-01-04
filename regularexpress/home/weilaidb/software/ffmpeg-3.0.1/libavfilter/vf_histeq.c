#define LCG_A 4096
#define LCG_C 150889
#define LCG_M 714025
#define LCG(x) (((x) * LCG_A + LCG_C) % LCG_M)
#define LCG_SEED 739187
enum HisteqAntibanding ;
typedef struct  HisteqContext;
#define OFFSET(x) offsetof(HisteqContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#define CONST(name, help, val, unit)
static const AVOption histeq_options[] = ;
AVFILTER_DEFINE_CLASS(histeq);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define R 0
#define G 1
#define B 2
#define A 3
#define GET_RGB_VALUES(r, g, b, src, map) do  while (0)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpic)
static const AVFilterPad histeq_inputs[] = ;
static const AVFilterPad histeq_outputs[] = ;
AVFilter ff_vf_histeq = ;
