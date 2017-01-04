#define R 0
#define G 1
#define B 2
#define A 3
struct keypoint ;
#define NB_COMP 3
enum preset ;
typedef struct  CurvesContext;
typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(CurvesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption curves_options[] = ;
AVFILTER_DEFINE_CLASS(curves);
static const struct  curves_presets[] = ;
static struct keypoint *make_point(double x, double y, struct keypoint *next)
static int parse_points_str(AVFilterContext *ctx, struct keypoint **points, const char *s)
static int get_nb_points(const struct keypoint *d)
static int interpolate(AVFilterContext *ctx, uint8_t *y, const struct keypoint *points)
static int parse_psfile(AVFilterContext *ctx, const char *fname)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad curves_inputs[] = ;
static const AVFilterPad curves_outputs[] = ;
AVFilter ff_vf_curves = ;
