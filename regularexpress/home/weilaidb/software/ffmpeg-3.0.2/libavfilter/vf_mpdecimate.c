typedef struct  DecimateContext;
#define OFFSET(x) offsetof(DecimateContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption mpdecimate_options[] = ;
AVFILTER_DEFINE_CLASS(mpdecimate);
static int diff_planes(AVFilterContext *ctx,
uint8_t *cur, int cur_linesize,
uint8_t *ref, int ref_linesize,
int w, int h)
static int decimate_frame(AVFilterContext *ctx,
AVFrame *cur, AVFrame *ref)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *cur)
static const AVFilterPad mpdecimate_inputs[] = ;
static const AVFilterPad mpdecimate_outputs[] = ;
AVFilter ff_vf_mpdecimate = ;
