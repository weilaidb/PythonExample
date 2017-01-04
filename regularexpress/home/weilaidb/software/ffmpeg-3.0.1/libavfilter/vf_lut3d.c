#define R 0
#define G 1
#define B 2
#define A 3
enum interp_mode ;
struct rgbvec ;
#define MAX_LEVEL 64
typedef struct LUT3DContext  LUT3DContext;
typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(LUT3DContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define COMMON_OPTIONS \
, \
, \
, \
, \
static inline float lerpf(float v0, float v1, float f)
static inline struct rgbvec lerp(const struct rgbvec *v0, const struct rgbvec *v1, float f)
#define NEAR(x) ((int)((x) + .5))
#define PREV(x) ((int)(x))
#define NEXT(x) (FFMIN((int)(x) + 1, lut3d->lutsize - 1))
static inline struct rgbvec interp_nearest(const LUT3DContext *lut3d,
const struct rgbvec *s)
static inline struct rgbvec interp_trilinear(const LUT3DContext *lut3d,
const struct rgbvec *s)
static inline struct rgbvec interp_tetrahedral(const LUT3DContext *lut3d,
const struct rgbvec *s)
#define DEFINE_INTERP_FUNC(name, nbits)                                                             \
static int interp_##nbits##_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)         \
DEFINE_INTERP_FUNC(nearest,     8)
DEFINE_INTERP_FUNC(trilinear,   8)
DEFINE_INTERP_FUNC(tetrahedral, 8)
DEFINE_INTERP_FUNC(nearest,     16)
DEFINE_INTERP_FUNC(trilinear,   16)
DEFINE_INTERP_FUNC(tetrahedral, 16)
#define MAX_LINE_SIZE 512
static int skip_line(const char *p)
#define NEXT_LINE(loop_cond) do  while (loop_cond)
static int parse_dat(AVFilterContext *ctx, FILE *f)
static int parse_cube(AVFilterContext *ctx, FILE *f)
static int parse_3dl(AVFilterContext *ctx, FILE *f)
static int parse_m3d(AVFilterContext *ctx, FILE *f)
static void set_identity_matrix(LUT3DContext *lut3d, int size)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static AVFrame *apply_lut(AVFilterLink *inlink, AVFrame *in)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#if CONFIG_LUT3D_FILTER
static const AVOption lut3d_options[] = ;
AVFILTER_DEFINE_CLASS(lut3d);
static av_cold int lut3d_init(AVFilterContext *ctx)
static const AVFilterPad lut3d_inputs[] = ;
static const AVFilterPad lut3d_outputs[] = ;
AVFilter ff_vf_lut3d = ;
#if CONFIG_HALDCLUT_FILTER
static void update_clut(LUT3DContext *lut3d, const AVFrame *frame)
static int config_output(AVFilterLink *outlink)
static int filter_frame_hald(AVFilterLink *inlink, AVFrame *inpicref)
static int request_frame(AVFilterLink *outlink)
static int config_clut(AVFilterLink *inlink)
static AVFrame *update_apply_clut(AVFilterContext *ctx, AVFrame *main,
const AVFrame *second)
static av_cold int haldclut_init(AVFilterContext *ctx)
static av_cold void haldclut_uninit(AVFilterContext *ctx)
static const AVOption haldclut_options[] = ;
AVFILTER_DEFINE_CLASS(haldclut);
static const AVFilterPad haldclut_inputs[] = ;
static const AVFilterPad haldclut_outputs[] = ;
AVFilter ff_vf_haldclut = ;
