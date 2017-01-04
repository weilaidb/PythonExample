#define OFFSET(x) offsetof(DeshakeContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption deshake_options[] = ;
AVFILTER_DEFINE_CLASS(deshake);
static int cmp(const void *a, const void *b)
static double clean_mean(double *values, int count)
static void find_block_motion(DeshakeContext *deshake, uint8_t *src1,
uint8_t *src2, int cx, int cy, int stride,
IntMotionVector *mv)
static int block_contrast(uint8_t *src, int x, int y, int stride, int blocksize)
static double block_angle(int x, int y, int cx, int cy, IntMotionVector *shift)
static void find_motion(DeshakeContext *deshake, uint8_t *src1, uint8_t *src2,
int width, int height, int stride, Transform *t)
static int deshake_transform_c(AVFilterContext *ctx,
int width, int height, int cw, int ch,
const float *matrix_y, const float *matrix_uv,
enum InterpolateMethod interpolate,
enum FillMethod fill, AVFrame *in, AVFrame *out)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *link)
static av_cold void uninit(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *link, AVFrame *in)
static const AVFilterPad deshake_inputs[] = ;
static const AVFilterPad deshake_outputs[] = ;
AVFilter ff_vf_deshake = ;
