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
static int parse_points_str(AVFilterContext *ctx, struct keypoint **points, const char *s,
int lut_size)
static int get_nb_points(const struct keypoint *d)
#define CLIP(v) (nbits == 8 ? av_clip_uint8(v) : av_clip_uint16(v))
static inline int interpolate(void *log_ctx, uint16_t *y,
const struct keypoint *points, int nbits)
#define DECLARE_INTERPOLATE_FUNC(nbits)                                     \
static int interpolate##nbits(void *log_ctx, uint16_t *y,                   \
const struct keypoint *points)                \
DECLARE_INTERPOLATE_FUNC(8)
DECLARE_INTERPOLATE_FUNC(16)
static int parse_psfile(AVFilterContext *ctx, const char *fname)
static int dump_curves(const char *fname, uint16_t *graph[NB_COMP + 1],
struct keypoint *comp_points[NB_COMP + 1],
int lut_size)
static av_cold int curves_init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_slice(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void curves_uninit(AVFilterContext *ctx)
static const AVFilterPad curves_inputs[] = ;
static const AVFilterPad curves_outputs[] = ;
AVFilter ff_vf_curves = ;
