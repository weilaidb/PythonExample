typedef struct OCRContext  OCRContext;
#define OFFSET(x) offsetof(OCRContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption ocr_options[] = ;
static av_cold int init(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
AVFILTER_DEFINE_CLASS(ocr);
static const AVFilterPad ocr_inputs[] = ;
static const AVFilterPad ocr_outputs[] = ;
AVFilter ff_vf_ocr = ;
