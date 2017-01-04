typedef struct  ShowPaletteContext;
#define OFFSET(x) offsetof(ShowPaletteContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showpalette_options[] = ;
AVFILTER_DEFINE_CLASS(showpalette);
static int query_formats(AVFilterContext *ctx)
static int config_output(AVFilterLink *outlink)
static int disp_palette(AVFrame *out, const AVFrame *in, int size)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad showpalette_inputs[] = ;
static const AVFilterPad showpalette_outputs[] = ;
AVFilter ff_vf_showpalette = ;
