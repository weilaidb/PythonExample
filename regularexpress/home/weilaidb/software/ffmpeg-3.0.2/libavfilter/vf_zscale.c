static const char *const var_names[] = ;
enum var_name ;
typedef struct ZScaleContext  ZScaleContext;
static av_cold int init_dict(AVFilterContext *ctx, AVDictionary **opts)
static int query_formats(AVFilterContext *ctx)
static int config_props(AVFilterLink *outlink)
static int print_zimg_error(AVFilterContext *ctx)
static int convert_matrix(enum AVColorSpace colorspace)
static int convert_trc(enum AVColorTransferCharacteristic color_trc)
static int convert_primaries(enum AVColorPrimaries color_primaries)
static int convert_range(enum AVColorRange color_range)
static int filter_frame(AVFilterLink *link, AVFrame *in)
static void uninit(AVFilterContext *ctx)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
#define OFFSET(x) offsetof(ZScaleContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption zscale_options[] = ;
static const AVClass zscale_class = ;
static const AVFilterPad avfilter_vf_zscale_inputs[] = ;
static const AVFilterPad avfilter_vf_zscale_outputs[] = ;
AVFilter ff_vf_zscale = ;
