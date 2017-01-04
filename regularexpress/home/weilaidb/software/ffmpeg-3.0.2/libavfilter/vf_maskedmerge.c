#define OFFSET(x) offsetof(MaskedMergeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption maskedmerge_options[] = ;
AVFILTER_DEFINE_CLASS(maskedmerge);
static int query_formats(AVFilterContext *ctx)
static int process_frame(FFFrameSync *fs)
static void maskedmerge8(const uint8_t *bsrc, const uint8_t *osrc,
const uint8_t *msrc, uint8_t *dst,
ptrdiff_t blinesize, ptrdiff_t olinesize,
ptrdiff_t mlinesize, ptrdiff_t dlinesize,
int w, int h,
int half, int shift)
static void maskedmerge16(const uint8_t *bbsrc, const uint8_t *oosrc,
const uint8_t *mmsrc, uint8_t *ddst,
ptrdiff_t blinesize, ptrdiff_t olinesize,
ptrdiff_t mlinesize, ptrdiff_t dlinesize,
int w, int h,
int half, int shift)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad maskedmerge_inputs[] = ;
static const AVFilterPad maskedmerge_outputs[] = ;
AVFilter ff_vf_maskedmerge = ;
