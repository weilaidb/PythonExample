#define OFFSET(x) offsetof(InterlaceContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption interlace_options[] = ;
AVFILTER_DEFINE_CLASS(interlace);
static void lowpass_line_c(uint8_t *dstp, ptrdiff_t linesize,
const uint8_t *srcp,
const uint8_t *srcp_above,
const uint8_t *srcp_below)
static const enum AVPixelFormat formats_supported[] = ;
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_out_props(AVFilterLink *outlink)
static void copy_picture_field(InterlaceContext *s,
AVFrame *src_frame, AVFrame *dst_frame,
AVFilterLink *inlink, enum FieldType field_type,
int lowpass)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_interlace = ;
