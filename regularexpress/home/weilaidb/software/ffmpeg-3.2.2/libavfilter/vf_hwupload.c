typedef struct HWUploadContext  HWUploadContext;
static int hwupload_query_formats(AVFilterContext *avctx)
static int hwupload_config_output(AVFilterLink *outlink)
static int hwupload_filter_frame(AVFilterLink *link, AVFrame *input)
static av_cold void hwupload_uninit(AVFilterContext *avctx)
static const AVClass hwupload_class = ;
static const AVFilterPad hwupload_inputs[] = ;
static const AVFilterPad hwupload_outputs[] = ;
AVFilter ff_vf_hwupload = ;
