#define SUB_PIXEL_BITS  8
#define SUB_PIXELS      (1 << SUB_PIXEL_BITS)
#define COEFF_BITS      11
#define LINEAR 0
#define CUBIC  1
typedef struct PerspectiveContext  PerspectiveContext;
#define OFFSET(x) offsetof(PerspectiveContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
enum PERSPECTIVESense ;
enum EvalMode ;
static const AVOption perspective_options[] = ;
AVFILTER_DEFINE_CLASS(perspective);
static int query_formats(AVFilterContext *ctx)
static inline double get_coeff(double d)
static const char *const var_names[] = ;
enum                                   ;
static int calc_persp_luts(AVFilterContext *ctx, AVFilterLink *inlink)
static int config_input(AVFilterLink *inlink)
typedef struct ThreadData  ThreadData;
static int resample_cubic(AVFilterContext *ctx, void *arg,
int job, int nb_jobs)
static int resample_linear(AVFilterContext *ctx, void *arg,
int job, int nb_jobs)
static av_cold int init(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad perspective_inputs[] = ;
static const AVFilterPad perspective_outputs[] = ;
AVFilter ff_vf_perspective = ;
