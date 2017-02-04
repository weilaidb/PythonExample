static const enum AVPixelFormat supported_formats[] = ;
static const enum AVPixelFormat deinterleaved_formats[][2] = ;
static const char *const var_names[] = ;
enum var_name ;
enum ScaleStage ;
typedef struct NPPScaleStageContext  NPPScaleStageContext;
typedef struct NPPScaleContext  NPPScaleContext;
nppscale_init
nppscale_uninit
nppscale_query_formats
init_stage
format_is_supported
get_deinterleaved_format
init_processing_chain
nppscale_config_props
nppscale_deinterleave
nppscale_resize
nppscale_interleave
static int (*const nppscale_process[])(AVFilterContext *ctx, NPPScaleStageContext *stage,
AVFrame *out, AVFrame *in) = ;
nppscale_scale
nppscale_filter_frame
OFFSET offsetof(NPPScaleContext, x)
#define FLAGS (AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM)
static const AVOption options[] = ,
, .flags = FLAGS },
, .flags = FLAGS },
,
,
,
,
,
,
,
,
,
,
};
static const AVClass nppscale_class = ;
static const AVFilterPad nppscale_inputs[] = ;
static const AVFilterPad nppscale_outputs[] = ;
AVFilter ff_vf_scale_npp = ;
