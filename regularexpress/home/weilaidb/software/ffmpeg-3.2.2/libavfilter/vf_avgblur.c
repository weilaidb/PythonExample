typedef struct AverageBlurContext  AverageBlurContext;
#define OFFSET(x) offsetof(AverageBlurContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption avgblur_options[] = ;
AVFILTER_DEFINE_CLASS(avgblur);
typedef struct ThreadData  ThreadData;
#define HORIZONTAL_FILTER(name, type)                                                         \
static int filter_horizontally_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)\
HORIZONTAL_FILTER(8, uint8_t)
HORIZONTAL_FILTER(16, uint16_t)
#define VERTICAL_FILTER(name, type)                                                           \
static int filter_vertically_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)  \
VERTICAL_FILTER(8, uint8_t)
VERTICAL_FILTER(16, uint16_t)
static int config_input(AVFilterLink *inlink)
static void averageiir2d(AVFilterContext *ctx, AVFrame *in, AVFrame *out, int plane)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad avgblur_inputs[] = ;
static const AVFilterPad avgblur_outputs[] = ;
AVFilter ff_vf_avgblur = ;
