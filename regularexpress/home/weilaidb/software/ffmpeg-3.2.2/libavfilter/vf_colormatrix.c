#define NS(n) ((n) < 0 ? (int)((n)*65536.0-0.5+DBL_EPSILON) : (int)((n)*65536.0+0.5))
#define CB(n) av_clip_uint8(n)
static const double yuv_coeff_luma[5][3] = ;
enum ColorMode ;
typedef struct  ColorMatrixContext;
typedef struct ThreadData  ThreadData;
#define OFFSET(x) offsetof(ColorMatrixContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption colormatrix_options[] = ;
AVFILTER_DEFINE_CLASS(colormatrix);
#define ma m[0][0]
#define mb m[0][1]
#define mc m[0][2]
#define md m[1][0]
#define me m[1][1]
#define mf m[1][2]
#define mg m[2][0]
#define mh m[2][1]
#define mi m[2][2]
#define ima im[0][0]
#define imb im[0][1]
#define imc im[0][2]
#define imd im[1][0]
#define ime im[1][1]
#define imf im[1][2]
#define img im[2][0]
#define imh im[2][1]
#define imi im[2][2]
static void inverse3x3(double im[3][3], double m[3][3])
static void solve_coefficients(double cm[3][3], double rgb[3][3], double yuv[3][3])
static void calc_coefficients(AVFilterContext *ctx)
static const char * const color_modes[] = ;
static av_cold int init(AVFilterContext *ctx)
static int process_slice_uyvy422(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int process_slice_yuv444p(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int process_slice_yuv422p(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int process_slice_yuv420p(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int config_input(AVFilterLink *inlink)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *link, AVFrame *in)
static const AVFilterPad colormatrix_inputs[] = ;
static const AVFilterPad colormatrix_outputs[] = ;
AVFilter ff_vf_colormatrix = ;
