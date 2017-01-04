typedef struct VagueDenoiserContext  VagueDenoiserContext;
#define OFFSET(x) offsetof(VagueDenoiserContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption vaguedenoiser_options[] = ;
AVFILTER_DEFINE_CLASS(vaguedenoiser);
#define NPAD 10
static const float analysis_low[9] = ;
static const float analysis_high[7] = ;
static const float synthesis_low[7] = ;
static const float synthesis_high[9] = ;
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static inline void copy(const float *p1, float *p2, const int length)
static inline void copyv(const float *p1, const int stride1, float *p2, const int length)
static inline void copyh(const float *p1, float *p2, const int stride2, const int length)
static void symmetric_extension(float *output, const int size, const int left_ext, const int right_ext)
static void transform_step(float *input, float *output, const int size, const int low_size, VagueDenoiserContext *s)
static void invert_step(const float *input, float *output, float *temp, const int size, VagueDenoiserContext *s)
static void hard_thresholding(float *block, const int width, const int height,
const int stride, const float threshold,
const float percent, const int unused)
static void soft_thresholding(float *block, const int width, const int height, const int stride,
const float threshold, const float percent, const int nsteps)
static void qian_thresholding(float *block, const int width, const int height,
const int stride, const float threshold,
const float percent, const int unused)
static void filter(VagueDenoiserContext *s, AVFrame *in, AVFrame *out)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad vaguedenoiser_inputs[] = ;
static const AVFilterPad vaguedenoiser_outputs[] = ;
AVFilter ff_vf_vaguedenoiser = ;
