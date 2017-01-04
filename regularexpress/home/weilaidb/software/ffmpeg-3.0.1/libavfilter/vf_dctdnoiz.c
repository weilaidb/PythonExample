static const char *const var_names[] = ;
enum ;
#define MAX_THREADS 8
typedef struct DCTdnoizContext  DCTdnoizContext;
#define MIN_NBITS 3
#define MAX_NBITS 4
#define DEFAULT_NBITS 3
#define OFFSET(x) offsetof(DCTdnoizContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption dctdnoiz_options[] = ;
AVFILTER_DEFINE_CLASS(dctdnoiz);
static void av_always_inline fdct8_1d(float *dst, const float *src,
int dst_stridea, int dst_strideb,
int src_stridea, int src_strideb)
static void av_always_inline idct8_1d(float *dst, const float *src,
int dst_stridea, int dst_strideb,
int src_stridea, int src_strideb,
int add)
static void av_always_inline fdct16_1d(float *dst, const float *src,
int dst_stridea, int dst_strideb,
int src_stridea, int src_strideb)
static void av_always_inline idct16_1d(float *dst, const float *src,
int dst_stridea, int dst_strideb,
int src_stridea, int src_strideb,
int add)
#define DEF_FILTER_FREQ_FUNCS(bsize)                                                        \
static av_always_inline void filter_freq_##bsize(const float *src, int src_linesize,        \
float *dst, int dst_linesize,              \
AVExpr *expr, double *var_values,          \
int sigma_th)                              \
\
\
static void filter_freq_sigma_##bsize(DCTdnoizContext *s,                                   \
const float *src, int src_linesize,                   \
float *dst, int dst_linesize, int thread_id)          \
\
\
static void filter_freq_expr_##bsize(DCTdnoizContext *s,                                    \
const float *src, int src_linesize,                    \
float *dst, int dst_linesize, int thread_id)           \
DEF_FILTER_FREQ_FUNCS(8)
DEF_FILTER_FREQ_FUNCS(16)
#define DCT3X3_0_0  0.5773502691896258f
#define DCT3X3_0_1  0.5773502691896258f
#define DCT3X3_0_2  0.5773502691896258f
#define DCT3X3_1_0  0.7071067811865475f
#define DCT3X3_1_2 -0.7071067811865475f
#define DCT3X3_2_0  0.4082482904638631f
#define DCT3X3_2_1 -0.8164965809277261f
#define DCT3X3_2_2  0.4082482904638631f
static av_always_inline void color_decorrelation(float **dst, int dst_linesize,
const uint8_t *src, int src_linesize,
int w, int h,
int r, int g, int b)
static av_always_inline void color_correlation(uint8_t *dst, int dst_linesize,
float **src, int src_linesize,
int w, int h,
int r, int g, int b)
#define DECLARE_COLOR_FUNCS(name, r, g, b)                                          \
static void color_decorrelation_##name(float **dst, int dst_linesize,               \
const uint8_t *src, int src_linesize,        \
int w, int h)                                \
\
\
static void color_correlation_##name(uint8_t *dst, int dst_linesize,                \
float **src, int src_linesize,                 \
int w, int h)                                  \
DECLARE_COLOR_FUNCS(rgb, 0, 1, 2)
DECLARE_COLOR_FUNCS(bgr, 2, 1, 0)
static int config_input(AVFilterLink *inlink)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
typedef struct ThreadData  ThreadData;
static int filter_slice(AVFilterContext *ctx,
void *arg, int jobnr, int nb_jobs)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad dctdnoiz_inputs[] = ;
static const AVFilterPad dctdnoiz_outputs[] = ;
AVFilter ff_vf_dctdnoiz = ;
