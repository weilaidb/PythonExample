typedef struct ConvolutionContext  ConvolutionContext;
#define OFFSET(x) offsetof(ConvolutionContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption convolution_options[] = ;
AVFILTER_DEFINE_CLASS(convolution);
static const int same3x3[9] = ;
static const int same5x5[25] = ;
static int query_formats(AVFilterContext *ctx)
static inline void line_copy8(uint8_t *line, const uint8_t *srcp, int width, int mergin)
static inline void line_copy16(uint16_t *line, const uint16_t *srcp, int width, int mergin)
typedef struct ThreadData  ThreadData;
static int filter16_prewitt(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter16_sobel(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_prewitt(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_sobel(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter16_3x3(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter16_5x5(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_3x3(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int filter_5x5(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad convolution_inputs[] = ;
static const AVFilterPad convolution_outputs[] = ;
#if CONFIG_CONVOLUTION_FILTER
AVFilter ff_vf_convolution = ;
#if CONFIG_PREWITT_FILTER
static const AVOption prewitt_options[] = ;
AVFILTER_DEFINE_CLASS(prewitt);
AVFilter ff_vf_prewitt = ;
#if CONFIG_SOBEL_FILTER
static const AVOption sobel_options[] = ;
AVFILTER_DEFINE_CLASS(sobel);
AVFilter ff_vf_sobel = ;
