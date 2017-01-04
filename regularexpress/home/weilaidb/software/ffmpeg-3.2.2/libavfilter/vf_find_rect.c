#define MAX_MIPMAPS 5
typedef struct FOCContext  FOCContext;
#define OFFSET(x) offsetof(FOCContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption find_rect_options[] = ;
AVFILTER_DEFINE_CLASS(find_rect);
static int query_formats(AVFilterContext *ctx)
static AVFrame *downscale(AVFrame *in)
static float compare(const AVFrame *haystack, const AVFrame *obj, int offx, int offy)
static int config_input(AVFilterLink *inlink)
static float search(FOCContext *foc, int pass, int maxpass, int xmin, int xmax, int ymin, int ymax, int *best_x, int *best_y, float best_score)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static const AVFilterPad foc_inputs[] = ;
static const AVFilterPad foc_outputs[] = ;
AVFilter ff_vf_find_rect = ;
