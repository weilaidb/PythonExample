#define PLANE_R 0x01
#define PLANE_G 0x02
#define PLANE_B 0x04
#define PLANE_A 0x08
#define PLANE_Y 0x10
#define PLANE_U 0x20
#define PLANE_V 0x40
typedef struct  ExtractPlanesContext;
#define OFFSET(x) offsetof(ExtractPlanesContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption extractplanes_options[] = ;
AVFILTER_DEFINE_CLASS(extractplanes);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static void extract_from_packed(uint8_t *dst, int dst_linesize,
const uint8_t *src, int src_linesize,
int width, int height,
int depth, int step, int comp)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad extractplanes_inputs[] = ;
AVFilter ff_vf_extractplanes = ;
#if CONFIG_ALPHAEXTRACT_FILTER
static av_cold int init_alphaextract(AVFilterContext *ctx)
AVFilter ff_vf_alphaextract = ;
