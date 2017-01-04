static const char *const var_names[] = ;
enum var_name ;
typedef struct LUT2Context  LUT2Context;
#define OFFSET(x) offsetof(LUT2Context, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption lut2_options[] = ;
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_inputx(AVFilterLink *inlink)
static int config_inputy(AVFilterLink *inlink)
static void lut2_8bit(struct LUT2Context *s, AVFrame *out, AVFrame *srcx, AVFrame *srcy)
static void lut2_16bit(struct LUT2Context *s, AVFrame *out, AVFrame *srcx, AVFrame *srcy)
static int process_frame(FFFrameSync *fs)
static int config_output(AVFilterLink *outlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *buf)
static int request_frame(AVFilterLink *outlink)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFILTER_DEFINE_CLASS(lut2);
AVFilter ff_vf_lut2 = ;
