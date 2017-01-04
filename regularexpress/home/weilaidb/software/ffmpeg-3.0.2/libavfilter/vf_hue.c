#define SAT_MIN_VAL -10
#define SAT_MAX_VAL 10
static const char *const var_names[] = ;
enum var_name ;
typedef struct  HueContext;
#define OFFSET(x) offsetof(HueContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption hue_options[] = ;
AVFILTER_DEFINE_CLASS(hue);
static inline void compute_sin_and_cos(HueContext *hue)
static inline void create_luma_lut(HueContext *h)
static inline void create_chrominance_lut(HueContext *h, const int32_t c,
const int32_t s)
static int set_expr(AVExpr **pexpr_ptr, char **expr_ptr,
const char *expr, const char *option, void *log_ctx)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static void apply_luma_lut(HueContext *s,
uint8_t *ldst, const int dst_linesize,
uint8_t *lsrc, const int src_linesize,
int w, int h)
static void apply_lut(HueContext *s,
uint8_t *udst, uint8_t *vdst, const int dst_linesize,
uint8_t *usrc, uint8_t *vsrc, const int src_linesize,
int w, int h)
#define TS2D(ts) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts) * av_q2d(tb))
static int filter_frame(AVFilterLink *inlink, AVFrame *inpic)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad hue_inputs[] = ;
static const AVFilterPad hue_outputs[] = ;
AVFilter ff_vf_hue = ;
