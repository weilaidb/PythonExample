static const char *const var_names[] = ;
enum var_name ;
typedef struct CropContext  CropContext;
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static inline int normalize_double(int *n, double d)
static int config_input(AVFilterLink *link)
static int config_output(AVFilterLink *link)
static int filter_frame(AVFilterLink *link, AVFrame *frame)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
#define OFFSET(x) offsetof(CropContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption crop_options[] = ;
AVFILTER_DEFINE_CLASS(crop);
static const AVFilterPad avfilter_vf_crop_inputs[] = ;
static const AVFilterPad avfilter_vf_crop_outputs[] = ;
AVFilter ff_vf_crop = ;
