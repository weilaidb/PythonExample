#define R 0
#define G 1
#define B 2
#define A 3
typedef struct  Range;
typedef struct  ColorLevelsContext;
#define OFFSET(x) offsetof(ColorLevelsContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption colorlevels_options[] = ;
AVFILTER_DEFINE_CLASS(colorlevels);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad colorlevels_inputs[] = ;
static const AVFilterPad colorlevels_outputs[] = ;
AVFilter ff_vf_colorlevels = ;
