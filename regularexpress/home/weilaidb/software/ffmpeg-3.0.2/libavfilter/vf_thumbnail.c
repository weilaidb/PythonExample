#define HIST_SIZE (3*256)
struct thumb_frame ;
typedef struct  ThumbContext;
#define OFFSET(x) offsetof(ThumbContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption thumbnail_options[] = ;
AVFILTER_DEFINE_CLASS(thumbnail);
static av_cold int init(AVFilterContext *ctx)
static double frame_sum_square_err(const int *hist, const double *median)
static AVFrame *get_best_frame(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *frame)
static av_cold void uninit(AVFilterContext *ctx)
static int request_frame(AVFilterLink *link)
static int config_props(AVFilterLink *inlink)
static int query_formats(AVFilterContext *ctx)
static const AVFilterPad thumbnail_inputs[] = ;
static const AVFilterPad thumbnail_outputs[] = ;
AVFilter ff_vf_thumbnail = ;
