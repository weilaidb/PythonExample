static const char *const var_names[] = ;
enum var_name ;
enum EvalMode ;
typedef struct ScaleContext  ScaleContext;
AVFilter ff_vf_scale2ref;
static av_cold int init_dict(AVFilterContext *ctx, AVDictionary **opts)
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static const int *parse_yuv_type(const char *s, enum AVColorSpace colorspace)
static int config_props(AVFilterLink *outlink)
static int config_props_ref(AVFilterLink *outlink)
static int request_frame(AVFilterLink *outlink)
static int request_frame_ref(AVFilterLink *outlink)
static int scale_slice(AVFilterLink *link, AVFrame *out_buf, AVFrame *cur_pic, struct SwsContext *sws, int y, int h, int mul, int field)
static int filter_frame(AVFilterLink *link, AVFrame *in)
static int filter_frame_ref(AVFilterLink *link, AVFrame *in)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVClass *child_class_next(const AVClass *prev)
#define OFFSET(x) offsetof(ScaleContext, x)
#define FLAGS AV_OPT_FLAG_VIDEO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption scale_options[] = ;
static const AVClass scale_class = ;
static const AVFilterPad avfilter_vf_scale_inputs[] = ;
static const AVFilterPad avfilter_vf_scale_outputs[] = ;
AVFilter ff_vf_scale = ;
static const AVClass scale2ref_class = ;
static const AVFilterPad avfilter_vf_scale2ref_inputs[] = ;
static const AVFilterPad avfilter_vf_scale2ref_outputs[] = ;
AVFilter ff_vf_scale2ref = ;
