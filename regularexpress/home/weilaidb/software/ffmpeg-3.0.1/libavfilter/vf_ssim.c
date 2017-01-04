typedef struct SSIMContext  SSIMContext;
#define OFFSET(x) offsetof(SSIMContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption ssim_options[] = ;
AVFILTER_DEFINE_CLASS(ssim);
static void set_meta(AVDictionary **metadata, const char *key, char comp, float d)
static void ssim_4x4xn(const uint8_t *main, ptrdiff_t main_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int (*sums)[4], int width)
static float ssim_end1(int s1, int s2, int ss, int s12)
static float ssim_endn(const int (*sum0)[4], const int (*sum1)[4], int width)
static float ssim_plane(SSIMDSPContext *dsp,
uint8_t *main, int main_stride,
uint8_t *ref, int ref_stride,
int width, int height, void *temp)
static double ssim_db(double ssim, double weight)
static AVFrame *do_ssim(AVFilterContext *ctx, AVFrame *main,
const AVFrame *ref)
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input_ref(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad ssim_inputs[] = ;
static const AVFilterPad ssim_outputs[] = ;
AVFilter ff_vf_ssim = ;
