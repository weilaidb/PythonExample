#define LCG_A 4096
#define LCG_C 150889
#define LCG_M 714025
LCG (((x) * LCG_A + LCG_C) % LCG_M)
#define LCG_SEED 739187
enum HisteqAntibanding ;
typedef struct  HisteqContext;
OFFSET offsetof(HisteqContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
CONST
static const AVOption histeq_options[] = ;
AVFILTER_DEFINE_CLASS(histeq);
init
query_formats
config_input
#define R 0
#define G 1
#define B 2
#define A 3
GET_RGB_VALUES do  while (0)
filter_frame
static const AVFilterPad histeq_inputs[] = ;
static const AVFilterPad histeq_outputs[] = ;
AVFilter ff_vf_histeq = ;
