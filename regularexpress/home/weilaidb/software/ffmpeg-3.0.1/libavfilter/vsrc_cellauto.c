typedef struct  CellAutoContext;
#define OFFSET(x) offsetof(CellAutoContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption cellauto_options[] = ;
AVFILTER_DEFINE_CLASS(cellauto);
static void show_cellauto_row(AVFilterContext *ctx)
static int init_pattern_from_string(AVFilterContext *ctx)
static int init_pattern_from_file(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static void evolve(AVFilterContext *ctx)
static void fill_picture(AVFilterContext *ctx, AVFrame *picref)
static int request_frame(AVFilterLink *outlink)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad cellauto_outputs[] = ;
AVFilter ff_vsrc_cellauto = ;
