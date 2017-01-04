static void apply_delogo(uint8_t *dst, int dst_linesize,
uint8_t *src, int src_linesize,
int w, int h, AVRational sar,
int logo_x, int logo_y, int logo_w, int logo_h,
unsigned int band, int show, int direct)
typedef struct DelogoContext   DelogoContext;
#define OFFSET(x) offsetof(DelogoContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption delogo_options[]= ;
AVFILTER_DEFINE_CLASS(delogo);
static int query_formats(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static const AVFilterPad avfilter_vf_delogo_inputs[] = ;
static const AVFilterPad avfilter_vf_delogo_outputs[] = ;
AVFilter ff_vf_delogo = ;
