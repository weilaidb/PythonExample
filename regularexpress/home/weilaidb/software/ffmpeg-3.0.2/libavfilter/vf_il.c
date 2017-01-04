enum FilterMode ;
typedef struct  IlContext;
#define OFFSET(x) offsetof(IlContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption il_options[] = ;
AVFILTER_DEFINE_CLASS(il);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void interleave(uint8_t *dst, uint8_t *src, int w, int h,
int dst_linesize, int src_linesize,
enum FilterMode mode, int swap)
static int filter_frame(AVFilterLink *inlink, AVFrame *inpicref)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_vf_il = ;
