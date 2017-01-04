#define LUT_BITS (depth==16 ? 8 : 4)
#define LOAD(x) (((depth == 8 ? src[x] : AV_RN16A(src + (x) * 2)) << (16 - depth))\
+ (((1 << (16 - depth)) - 1) >> 1))
#define STORE(x,val) (depth == 8 ? dst[x] = (val) >> (16 - depth) : \
AV_WN16A(dst + (x) * 2, (val) >> (16 - depth)))
av_always_inline
static uint32_t lowpass(int prev, int cur, int16_t *coef, int depth)
av_always_inline
static void denoise_temporal(uint8_t *src, uint8_t *dst,
uint16_t *frame_ant,
int w, int h, int sstride, int dstride,
int16_t *temporal, int depth)
av_always_inline
static void denoise_spatial(HQDN3DContext *s,
uint8_t *src, uint8_t *dst,
uint16_t *line_ant, uint16_t *frame_ant,
int w, int h, int sstride, int dstride,
int16_t *spatial, int16_t *temporal, int depth)
av_always_inline
static int denoise_depth(HQDN3DContext *s,
uint8_t *src, uint8_t *dst,
uint16_t *line_ant, uint16_t **frame_ant_ptr,
int w, int h, int sstride, int dstride,
int16_t *spatial, int16_t *temporal, int depth)
#define denoise(...)                                                          \
do  while (0)
static int16_t *precalc_coefs(double dist25, int depth)
#define PARAM1_DEFAULT 4.0
#define PARAM2_DEFAULT 3.0
#define PARAM3_DEFAULT 6.0
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
#define OFFSET(x) offsetof(HQDN3DContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_FILTERING_PARAM
static const AVOption hqdn3d_options[] = ;
AVFILTER_DEFINE_CLASS(hqdn3d);
static const AVFilterPad avfilter_vf_hqdn3d_inputs[] = ;
static const AVFilterPad avfilter_vf_hqdn3d_outputs[] = ;
AVFilter ff_vf_hqdn3d = ;
