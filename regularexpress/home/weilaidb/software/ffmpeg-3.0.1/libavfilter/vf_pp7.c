enum mode ;
#define OFFSET(x) offsetof(PP7Context, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption pp7_options[] = ;
AVFILTER_DEFINE_CLASS(pp7);
DECLARE_ALIGNED(8, static const uint8_t, dither)[8][8] = ;
#define N0 4
#define N1 5
#define N2 10
#define SN0 2
#define SN1 2.2360679775
#define SN2 3.16227766017
#define N (1 << 16)
static const int factor[16] = ;
static void init_thres2(PP7Context *p)
static inline void dctA_c(int16_t *dst, uint8_t *src, int stride)
static void dctB_c(int16_t *dst, int16_t *src)
static int hardthresh_c(PP7Context *p, int16_t *src, int qp)
static int mediumthresh_c(PP7Context *p, int16_t *src, int qp)
static int softthresh_c(PP7Context *p, int16_t *src, int qp)
static void filter(PP7Context *p, uint8_t *dst, uint8_t *src,
int dst_stride, int src_stride,
int width, int height,
uint8_t *qp_store, int qp_stride, int is_luma)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad pp7_inputs[] = ;
static const AVFilterPad pp7_outputs[] = ;
AVFilter ff_vf_pp7 = ;
