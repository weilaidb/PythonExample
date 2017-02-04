NS ((n) < 0 ? (int)((n)*65536.0-0.5+DBL_EPSILON) : (int)((n)*65536.0+0.5))
CB av_clip_uint8(n)
static const double yuv_coeff_luma[5][3] = ;
enum ColorMode ;
typedef struct  ColorMatrixContext;
typedef struct ThreadData  ThreadData;
OFFSET offsetof(ColorMatrixContext, x)
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
inverse3x3
solve_coefficients
calc_coefficients
static const char * const color_modes[] = ;
init
process_slice_uyvy422
process_slice_yuv444p
process_slice_yuv422p
process_slice_yuv420p
config_input
query_formats
filter_frame
static const AVFilterPad colormatrix_inputs[] = ;
static const AVFilterPad colormatrix_outputs[] = ;
AVFilter ff_vf_colormatrix = ;
