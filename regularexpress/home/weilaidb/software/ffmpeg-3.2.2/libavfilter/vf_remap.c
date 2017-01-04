typedef struct RemapContext  RemapContext;
#define OFFSET(x) offsetof(RemapContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption remap_options[] = ;
AVFILTER_DEFINE_CLASS(remap);
static int query_formats(AVFilterContext *ctx)
static void remap_planar(RemapContext *s, const AVFrame *in,
const AVFrame *xin, const AVFrame *yin,
AVFrame *out)
static void remap_planar16(RemapContext *s, const AVFrame *in,
const AVFrame *xin, const AVFrame *yin,
AVFrame *out)
static void remap_packed(RemapContext *s, const AVFrame *in,
const AVFrame *xin, const AVFrame *yin,
AVFrame *out)
static void remap_packed16(RemapContext *s, const AVFrame *in,
const AVFrame *xin, const AVFrame *yin,
AVFrame *out)
static int config_input(AVFilterLink *inlink)
static int process_frame(FFFrameSync *fs)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad remap_inputs[] = ;
static const AVFilterPad remap_outputs[] = ;
AVFilter ff_vf_remap = ;
