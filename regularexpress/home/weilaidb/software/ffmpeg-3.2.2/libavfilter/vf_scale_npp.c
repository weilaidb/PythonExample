static const enum AVPixelFormat supported_formats[] = ;
static const enum AVPixelFormat deinterleaved_formats[][2] = ;
static const char *const var_names[] = ;
enum var_name ;
enum ScaleStage ;
typedef struct NPPScaleStageContext  NPPScaleStageContext;
typedef struct NPPScaleContext  NPPScaleContext;
static int nppscale_init(AVFilterContext *ctx)
static void nppscale_uninit(AVFilterContext *ctx)
static int nppscale_query_formats(AVFilterContext *ctx)
static int init_stage(NPPScaleStageContext *stage, AVBufferRef *device_ctx)
static int format_is_supported(enum AVPixelFormat fmt)
static enum AVPixelFormat get_deinterleaved_format(enum AVPixelFormat fmt)
static int init_processing_chain(AVFilterContext *ctx, int in_width, int in_height,
int out_width, int out_height)
static int nppscale_config_props(AVFilterLink *outlink)
static int nppscale_deinterleave(AVFilterContext *ctx, NPPScaleStageContext *stage,
AVFrame *out, AVFrame *in)
static int nppscale_resize(AVFilterContext *ctx, NPPScaleStageContext *stage,
AVFrame *out, AVFrame *in)
static int nppscale_interleave(AVFilterContext *ctx, NPPScaleStageContext *stage,
AVFrame *out, AVFrame *in)
static int (*const nppscale_process[])(AVFilterContext *ctx, NPPScaleStageContext *stage,
AVFrame *out, AVFrame *in) = ;
static int nppscale_scale(AVFilterContext *ctx, AVFrame *out, AVFrame *in)
static int nppscale_filter_frame(AVFilterLink *link, AVFrame *in)
#define OFFSET(x) offsetof(NPPScaleContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption options[] = ;
static const AVClass nppscale_class = ;
static const AVFilterPad nppscale_inputs[] = ;
static const AVFilterPad nppscale_outputs[] = ;
AVFilter ff_vf_scale_npp = ;
