static const char *const var_names[] = ;
enum                                   ;
typedef struct ShowVolumeContext  ShowVolumeContext;
#define OFFSET(x) offsetof(ShowVolumeContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption showvolume_options[] = ;
AVFILTER_DEFINE_CLASS(showvolume);
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static int config_output(AVFilterLink *outlink)
static void drawtext(AVFrame *pic, int x, int y, const char *txt, int o)
static int filter_frame(AVFilterLink *inlink, AVFrame *insamples)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad showvolume_inputs[] = ;
static const AVFilterPad showvolume_outputs[] = ;
AVFilter ff_avf_showvolume = ;
