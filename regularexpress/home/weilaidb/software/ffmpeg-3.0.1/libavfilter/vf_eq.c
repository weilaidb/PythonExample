static void create_lut(EQParameters *param)
static void apply_lut(EQParameters *param, uint8_t *dst, int dst_stride,
const uint8_t *src, int src_stride, int w, int h)
static void process_c(EQParameters *param, uint8_t *dst, int dst_stride,
const uint8_t *src, int src_stride, int w, int h)
static void check_values(EQParameters *param, EQContext *eq)
static void set_contrast(EQContext *eq)
static void set_brightness(EQContext *eq)
static void set_gamma(EQContext *eq)
static void set_saturation(EQContext *eq)
static int set_expr(AVExpr **pexpr, const char *expr, const char *option, void *log_ctx)
static int initialize(AVFilterContext *ctx)
static void uninit(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static int query_formats(AVFilterContext *ctx)
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts) * av_q2d(tb))
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static inline int set_param(AVExpr **pexpr, const char *args, const char *cmd,
void (*set_fn)(EQContext *eq), AVFilterContext *ctx)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad eq_inputs[] = ;
static const AVFilterPad eq_outputs[] = ;
#define OFFSET(x) offsetof(EQContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption eq_options[] = ;
AVFILTER_DEFINE_CLASS(eq);
AVFilter ff_vf_eq = ;
