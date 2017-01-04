static const char *const var_names[] = ;
enum var_name ;
enum EvalMode ;
typedef struct  VignetteContext;
#define OFFSET(x) offsetof(VignetteContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption vignette_options[] = ;
AVFILTER_DEFINE_CLASS(vignette);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static double get_natural_factor(const VignetteContext *s, int x, int y)
#define TS2D(ts)     ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts))
#define TS2T(ts, tb) ((ts) == AV_NOPTS_VALUE ? NAN : (double)(ts) * av_q2d(tb))
static void update_context(VignetteContext *s, AVFilterLink *inlink, AVFrame *frame)
static inline double get_dither_value(VignetteContext *s)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_props(AVFilterLink *inlink)
static const AVFilterPad vignette_inputs[] = ;
static const AVFilterPad vignette_outputs[] = ;
AVFilter ff_vf_vignette = ;
