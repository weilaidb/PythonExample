typedef struct ScaleVAAPIContext  ScaleVAAPIContext;
static int scale_vaapi_query_formats(AVFilterContext *avctx)
static int scale_vaapi_pipeline_uninit(ScaleVAAPIContext *ctx)
static int scale_vaapi_config_input(AVFilterLink *inlink)
static int scale_vaapi_config_output(AVFilterLink *outlink)
static int vaapi_proc_colour_standard(enum AVColorSpace av_cs)
static int scale_vaapi_filter_frame(AVFilterLink *inlink, AVFrame *input_frame)
static av_cold int scale_vaapi_init(AVFilterContext *avctx)
static av_cold void scale_vaapi_uninit(AVFilterContext *avctx)
#define OFFSET(x) offsetof(ScaleVAAPIContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption scale_vaapi_options[] = ;
static const AVClass scale_vaapi_class = ;
static const AVFilterPad scale_vaapi_inputs[] = ;
static const AVFilterPad scale_vaapi_outputs[] = ;
AVFilter ff_vf_scale_vaapi = ;
