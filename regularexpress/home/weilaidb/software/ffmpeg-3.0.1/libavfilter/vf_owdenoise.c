typedef struct  OWDenoiseContext;
#define OFFSET(x) offsetof(OWDenoiseContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption owdenoise_options[] = ;
AVFILTER_DEFINE_CLASS(owdenoise);
DECLARE_ALIGNED(8, static const uint8_t, dither)[8][8] = ;
static const double coeff[2][5] = ;
static const double icoeff[2][5] = ;
static inline void decompose(float *dst_l, float *dst_h, const float *src,
int linesize, int w)
static inline void compose(float *dst, const float *src_l, const float *src_h,
int linesize, int w)
static inline void decompose2D(float *dst_l, float *dst_h, const float *src,
int xlinesize, int ylinesize,
int step, int w, int h)
static inline void compose2D(float *dst, const float *src_l, const float *src_h,
int xlinesize, int ylinesize,
int step, int w, int h)
static void decompose2D2(float *dst[4], float *src, float *temp[2],
int linesize, int step, int w, int h)
static void compose2D2(float *dst, float *src[4], float *temp[2],
int linesize, int step, int w, int h)
static void filter(OWDenoiseContext *s,
uint8_t       *dst, int dst_linesize,
const uint8_t *src, int src_linesize,
int width, int height, double strength)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad owdenoise_inputs[] = ;
static const AVFilterPad owdenoise_outputs[] = ;
AVFilter ff_vf_owdenoise = ;
