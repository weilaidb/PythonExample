#define OFFSET(x) offsetof(FSPPContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption fspp_options[] = ;
AVFILTER_DEFINE_CLASS(fspp);
DECLARE_ALIGNED(32, static const uint8_t, dither)[8][8] = ;
static const short custom_threshold[64] = ;
static void store_slice_c(uint8_t *dst, int16_t *src,
ptrdiff_t dst_stride, ptrdiff_t src_stride,
ptrdiff_t width, ptrdiff_t height, ptrdiff_t log2_scale)
static void store_slice2_c(uint8_t *dst, int16_t *src,
ptrdiff_t dst_stride, ptrdiff_t src_stride,
ptrdiff_t width, ptrdiff_t height, ptrdiff_t log2_scale)
static void mul_thrmat_c(int16_t *thr_adr_noq, int16_t *thr_adr, int q)
static void filter(FSPPContext *p, uint8_t *dst, uint8_t *src,
int dst_stride, int src_stride,
int width, int height,
uint8_t *qp_store, int qp_stride, int is_luma)
static void column_fidct_c(int16_t *thr_adr, int16_t *data, int16_t *output, int cnt)
static void row_idct_c(int16_t *workspace, int16_t *output_adr, ptrdiff_t output_stride, int cnt)
static void row_fdct_c(int16_t *data, const uint8_t *pixels, ptrdiff_t line_size, int cnt)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad fspp_inputs[] = ;
static const AVFilterPad fspp_outputs[] = ;
AVFilter ff_vf_fspp = ;
