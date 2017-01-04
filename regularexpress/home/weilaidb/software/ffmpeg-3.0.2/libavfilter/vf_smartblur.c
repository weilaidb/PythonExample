#define RADIUS_MIN 0.1
#define RADIUS_MAX 5.0
#define STRENGTH_MIN -1.0
#define STRENGTH_MAX 1.0
#define THRESHOLD_MIN -30
#define THRESHOLD_MAX 30
typedef struct  FilterParam;
typedef struct  SmartblurContext;
#define OFFSET(x) offsetof(SmartblurContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption smartblur_options[] = ;
AVFILTER_DEFINE_CLASS(smartblur);
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int alloc_sws_context(FilterParam *f, int width, int height, unsigned int flags)
static int config_props(AVFilterLink *inlink)
static void blur(uint8_t       *dst, const int dst_linesize,
const uint8_t *src, const int src_linesize,
const int w, const int h, const int threshold,
struct SwsContext *filter_context)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpic)
static const AVFilterPad smartblur_inputs[] = ;
static const AVFilterPad smartblur_outputs[] = ;
AVFilter ff_vf_smartblur = ;
