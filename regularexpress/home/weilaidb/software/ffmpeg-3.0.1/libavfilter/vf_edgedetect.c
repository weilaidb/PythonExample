enum FilterMode ;
struct plane_info ;
typedef struct  EdgeDetectContext;
#define OFFSET(x) offsetof(EdgeDetectContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption edgedetect_options[] = ;
AVFILTER_DEFINE_CLASS(edgedetect);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *inlink)
static void gaussian_blur(AVFilterContext *ctx, int w, int h,
uint8_t *dst, int dst_linesize,
const uint8_t *src, int src_linesize)
enum ;
static int get_rounded_direction(int gx, int gy)
static void sobel(int w, int h,
uint16_t *dst, int dst_linesize,
int8_t *dir, int dir_linesize,
const uint8_t *src, int src_linesize)
static void non_maximum_suppression(int w, int h,
uint8_t  *dst, int dst_linesize,
const  int8_t  *dir, int dir_linesize,
const uint16_t *src, int src_linesize)
static void double_threshold(int low, int high, int w, int h,
uint8_t *dst, int dst_linesize,
const uint8_t *src, int src_linesize)
static void color_mix(int w, int h,
uint8_t *dst, int dst_linesize,
const uint8_t *src, int src_linesize)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad edgedetect_inputs[] = ;
static const AVFilterPad edgedetect_outputs[] = ;
AVFilter ff_vf_edgedetect = ;
