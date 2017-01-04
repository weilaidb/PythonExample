typedef struct  FilterParam;
typedef struct  SabContext;
static int query_formats(AVFilterContext *ctx)
#define RADIUS_MIN 0.1
#define RADIUS_MAX 4.0
#define PRE_FILTER_RADIUS_MIN 0.1
#define PRE_FILTER_RADIUS_MAX 2.0
#define STRENGTH_MIN 0.1
#define STRENGTH_MAX 100.0
#define OFFSET(x) offsetof(SabContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption sab_options[] = ;
AVFILTER_DEFINE_CLASS(sab);
static av_cold int init(AVFilterContext *ctx)
static void close_filter_param(FilterParam *f)
static av_cold void uninit(AVFilterContext *ctx)
static int open_filter_param(FilterParam *f, int width, int height, unsigned int sws_flags)
static int config_props(AVFilterLink *inlink)
#define NB_PLANES 4
static void blur(uint8_t       *dst, const int dst_linesize,
const uint8_t *src, const int src_linesize,
const int w, const int h, FilterParam *fp)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpic)
static const AVFilterPad sab_inputs[] = ;
static const AVFilterPad sab_outputs[] = ;
AVFilter ff_vf_sab = ;
