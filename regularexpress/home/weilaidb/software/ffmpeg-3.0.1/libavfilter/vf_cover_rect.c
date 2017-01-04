enum mode ;
typedef struct CoverContext  CoverContext;
#define OFFSET(x) offsetof(CoverContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption cover_rect_options[] = ;
AVFILTER_DEFINE_CLASS(cover_rect);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static void cover_rect(CoverContext *cover, AVFrame *in, int offx, int offy)
static void blur(CoverContext *cover, AVFrame *in, int offx, int offy)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static av_cold int init(AVFilterContext *ctx)
static const AVFilterPad cover_rect_inputs[] = ;
static const AVFilterPad cover_rect_outputs[] = ;
AVFilter ff_vf_cover_rect = ;
