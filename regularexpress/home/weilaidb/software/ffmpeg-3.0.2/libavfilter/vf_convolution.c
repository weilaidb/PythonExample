typedef struct ConvolutionContext  ConvolutionContext;
#define OFFSET(x) offsetof(ConvolutionContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption convolution_options[] = ;
AVFILTER_DEFINE_CLASS(convolution);
static const int same3x3[9] = ;
static const int same5x5[25] = ;
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static inline void line_copy8(uint8_t *line, const uint8_t *srcp, int width, int mergin)
static void filter_3x3(ConvolutionContext *s, AVFrame *in, AVFrame *out, int plane)
static void filter_5x5(ConvolutionContext *s, AVFrame *in, AVFrame *out, int plane)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold int init(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad convolution_inputs[] = ;
static const AVFilterPad convolution_outputs[] = ;
AVFilter ff_vf_convolution = ;
