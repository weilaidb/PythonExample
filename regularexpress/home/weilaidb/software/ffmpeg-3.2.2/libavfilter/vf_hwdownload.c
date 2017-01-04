typedef struct HWDownloadContext  HWDownloadContext;
static int hwdownload_query_formats(AVFilterContext *avctx)
static int hwdownload_config_input(AVFilterLink *inlink)
static int hwdownload_config_output(AVFilterLink *outlink)
static int hwdownload_filter_frame(AVFilterLink *link, AVFrame *input)
static av_cold void hwdownload_uninit(AVFilterContext *avctx)
static const AVClass hwdownload_class = ;
static const AVFilterPad hwdownload_inputs[] = ;
static const AVFilterPad hwdownload_outputs[] = ;
AVFilter ff_vf_hwdownload = ;
