#define OFFSET(x) offsetof(HysteresisContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
typedef struct HysteresisContext  HysteresisContext;
static const AVOption hysteresis_options[] = ;
AVFILTER_DEFINE_CLASS(hysteresis);
static int query_formats(AVFilterContext *ctx)
static int process_frame(FFFrameSync *fs)
static int passed(HysteresisContext *s, int x, int y, int w)
static void push(HysteresisContext *s, int x, int y, int w)
static void pop(HysteresisContext *s, int *x, int *y)
static int is_empty(HysteresisContext *s)
static void hysteresis8(HysteresisContext *s, const uint8_t *bsrc, const uint8_t *asrc,
uint8_t *dst,
ptrdiff_t blinesize, ptrdiff_t alinesize,
ptrdiff_t dlinesize,
int w, int h)
static void hysteresis16(HysteresisContext *s, const uint8_t *bbsrc, const uint8_t *aasrc,
uint8_t *ddst,
ptrdiff_t blinesize, ptrdiff_t alinesize,
ptrdiff_t dlinesize,
int w, int h)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad hysteresis_inputs[] = ;
static const AVFilterPad hysteresis_outputs[] = ;
AVFilter ff_vf_hysteresis = ;
