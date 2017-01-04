static const char *const var_names[] = ;
enum ;
enum var_name ;
typedef struct DrawBoxContext  DrawBoxContext;
static const int NUM_EXPR_EVALS = 5;
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
#define OFFSET(x) offsetof(DrawBoxContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
#if CONFIG_DRAWBOX_FILTER
static const AVOption drawbox_options[] = ;
AVFILTER_DEFINE_CLASS(drawbox);
static const AVFilterPad drawbox_inputs[] = ;
static const AVFilterPad drawbox_outputs[] = ;
AVFilter ff_vf_drawbox = ;
#if CONFIG_DRAWGRID_FILTER
static av_pure av_always_inline int pixel_belongs_to_grid(DrawBoxContext *drawgrid, int x, int y)
static int drawgrid_filter_frame(AVFilterLink *inlink, AVFrame *frame)
static const AVOption drawgrid_options[] = ;
AVFILTER_DEFINE_CLASS(drawgrid);
static const AVFilterPad drawgrid_inputs[] = ;
static const AVFilterPad drawgrid_outputs[] = ;
AVFilter ff_vf_drawgrid = ;
