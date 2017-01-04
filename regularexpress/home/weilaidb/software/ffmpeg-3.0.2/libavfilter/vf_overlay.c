static const char *const var_names[] = ;
enum var_name ;
enum EOFAction ;
static const char * const eof_action_str[] = ;
#define MAIN    0
#define OVERLAY 1
#define R 0
#define G 1
#define B 2
#define A 3
#define Y 0
#define U 1
#define V 2
enum EvalMode ;
enum OverlayFormat ;
typedef struct OverlayContext  OverlayContext;
static av_cold void uninit(AVFilterContext *ctx)
static inline int normalize_xy(double d, int chroma_sub)
static void eval_expr(AVFilterContext *ctx)
static int set_expr(AVExpr **pexpr, const char *expr, const char *option, void *log_ctx)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static int query_formats(AVFilterContext *ctx)
static const enum AVPixelFormat alpha_pix_fmts[] = ;
static int config_input_main(AVFilterLink *inlink)
static int config_input_overlay(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
#define FAST_DIV255(x) ((((x) + 128) * 257) >> 16)
#define UNPREMULTIPLY_ALPHA(x, y) ((((x) << 16) - ((x) << 9) + (x)) / ((((x) + (y)) << 8) - ((x) + (y)) - (y) * (x)))
static void blend_image(AVFilterContext *ctx,
AVFrame *dst, const AVFrame *src,
int x, int y)
static AVFrame *do_blend(AVFilterContext *ctx, AVFrame *mainpic,
const AVFrame *second)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static int request_frame(AVFilterLink *outlink)
static av_cold int init(AVFilterContext *ctx)
#define OFFSET(x) offsetof(OverlayContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption overlay_options[] = ;
AVFILTER_DEFINE_CLASS(overlay);
static const AVFilterPad avfilter_vf_overlay_inputs[] = ;
static const AVFilterPad avfilter_vf_overlay_outputs[] = ;
AVFilter ff_vf_overlay = ;
