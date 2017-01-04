#define MAX_LEVEL 8
#define BLOCK 16
typedef struct  USPPContext;
#define OFFSET(x) offsetof(USPPContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption uspp_options[] = ;
AVFILTER_DEFINE_CLASS(uspp);
DECLARE_ALIGNED(8, static const uint8_t, dither)[8][8] = ;
static const uint8_t offset[511][2] = ;
static void store_slice_c(uint8_t *dst, const uint16_t *src,
int dst_stride, int src_stride,
int width, int height, int log2_scale)
static void filter(USPPContext *p, uint8_t *dst[3], uint8_t *src[3],
int dst_stride[3], int src_stride[3], int width,
int height, uint8_t *qp_store, int qp_stride)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad uspp_inputs[] = ;
static const AVFilterPad uspp_outputs[] = ;
AVFilter ff_vf_uspp = ;
