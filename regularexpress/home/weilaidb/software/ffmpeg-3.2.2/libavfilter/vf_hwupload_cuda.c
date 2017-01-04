typedef struct CudaUploadContext  CudaUploadContext;
static void cudaupload_ctx_free(AVHWDeviceContext *ctx)
static av_cold int cudaupload_init(AVFilterContext *ctx)
static av_cold void cudaupload_uninit(AVFilterContext *ctx)
static int cudaupload_query_formats(AVFilterContext *ctx)
static int cudaupload_config_output(AVFilterLink *outlink)
static int cudaupload_filter_frame(AVFilterLink *link, AVFrame *in)
#define OFFSET(x) offsetof(CudaUploadContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM | AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption cudaupload_options[] = ;
AVFILTER_DEFINE_CLASS(cudaupload);
static const AVFilterPad cudaupload_inputs[] = ;
static const AVFilterPad cudaupload_outputs[] = ;
AVFilter ff_vf_hwupload_cuda = ;
