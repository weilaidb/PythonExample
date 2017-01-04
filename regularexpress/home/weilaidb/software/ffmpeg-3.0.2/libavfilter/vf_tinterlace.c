#define OFFSET(x) offsetof(TInterlaceContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define TINTERLACE_FLAG_VLPF 01
#define TINTERLACE_FLAG_EXACT_TB 2
static const AVOption tinterlace_options[] = ;
AVFILTER_DEFINE_CLASS(tinterlace);
#define FULL_SCALE_YUVJ_FORMATS \
AV_PIX_FMT_YUVJ420P, AV_PIX_FMT_YUVJ422P, AV_PIX_FMT_YUVJ444P, AV_PIX_FMT_YUVJ440P
static const enum AVPixelFormat full_scale_yuvj_pix_fmts[] = ;
static const AVRational standard_tbs[] = ;
static int query_formats(AVFilterContext *ctx)
static void lowpass_line_c(uint8_t *dstp, ptrdiff_t width, const uint8_t *srcp,
const uint8_t *srcp_above, const uint8_t *srcp_below)
static av_cold void uninit(AVFilterContext *ctx)
static int config_out_props(AVFilterLink *outlink)
#define FIELD_UPPER           0
#define FIELD_LOWER           1
#define FIELD_UPPER_AND_LOWER 2
static inline
void copy_picture_field(TInterlaceContext *tinterlace,
uint8_t *dst[4], int dst_linesize[4],
const uint8_t *src[4], int src_linesize[4],
enum AVPixelFormat format, int w, int src_h,
int src_field, int interleave, int dst_field,
int flags)
static int filter_frame(AVFilterLink *inlink, AVFrame *picref)
static const AVFilterPad tinterlace_inputs[] = ;
static const AVFilterPad tinterlace_outputs[] = ;
AVFilter ff_vf_tinterlace = ;
