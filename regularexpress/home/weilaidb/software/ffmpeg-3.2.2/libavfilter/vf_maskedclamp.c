#define OFFSET(x) offsetof(MaskedClampContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
typedef struct MaskedClampContext  MaskedClampContext;
static const AVOption maskedclamp_options[] = ;
AVFILTER_DEFINE_CLASS(maskedclamp);
static int query_formats(AVFilterContext *ctx)
static int process_frame(FFFrameSync *fs)
static void maskedclamp8(const uint8_t *bsrc, const uint8_t *darksrc,
const uint8_t *brightsrc, uint8_t *dst,
ptrdiff_t blinesize, ptrdiff_t darklinesize,
ptrdiff_t brightlinesize, ptrdiff_t dlinesize,
int w, int h,
int undershoot, int overshoot)
static void maskedclamp16(const uint8_t *bbsrc, const uint8_t *oosrc,
const uint8_t *mmsrc, uint8_t *ddst,
ptrdiff_t blinesize, ptrdiff_t darklinesize,
ptrdiff_t brightlinesize, ptrdiff_t dlinesize,
int w, int h,
int undershoot, int overshoot)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad maskedclamp_inputs[] = ;
static const AVFilterPad maskedclamp_outputs[] = ;
AVFilter ff_vf_maskedclamp = ;
