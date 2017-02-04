typedef struct AverageBlurContext  AverageBlurContext;
OFFSET offsetof(AverageBlurContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption avgblur_options[] = ;
AVFILTER_DEFINE_CLASS(avgblur);
typedef struct ThreadData  ThreadData;
HORIZONTAL_FILTER                                                         \
static int filter_horizontally_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)\
HORIZONTAL_FILTER(8, uint8_t)
HORIZONTAL_FILTER(16, uint16_t)
VERTICAL_FILTER                                                           \
static int filter_vertically_##name(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)  \
VERTICAL_FILTER(8, uint8_t)
VERTICAL_FILTER(16, uint16_t)
config_input
averageiir2d
query_formats
filter_frame
uninit
static const AVFilterPad avgblur_inputs[] = ;
static const AVFilterPad avgblur_outputs[] = ;
AVFilter ff_vf_avgblur = ;
