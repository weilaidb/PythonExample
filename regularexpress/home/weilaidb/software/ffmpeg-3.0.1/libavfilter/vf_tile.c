typedef struct  TileContext;
#define REASONABLE_SIZE 1024
#define OFFSET(x) offsetof(TileContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption tile_options[] = ;
AVFILTER_DEFINE_CLASS(tile);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static void get_current_tile_pos(AVFilterContext *ctx, unsigned *x, unsigned *y)
static void draw_blank_frame(AVFilterContext *ctx, AVFrame *out_buf)
static int end_last_frame(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *picref)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad tile_inputs[] = ;
static const AVFilterPad tile_outputs[] = ;
AVFilter ff_vf_tile = ;
