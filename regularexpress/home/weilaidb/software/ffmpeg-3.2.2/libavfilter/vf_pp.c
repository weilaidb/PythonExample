typedef struct  PPFilterContext;
#define OFFSET(x) offsetof(PPFilterContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption pp_options[] = ;
AVFILTER_DEFINE_CLASS(pp);
static av_cold int pp_init(AVFilterContext *ctx)
static int pp_process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static int pp_query_formats(AVFilterContext *ctx)
static int pp_config_props(AVFilterLink *inlink)
static int pp_filter_frame(AVFilterLink *inlink, AVFrame *inbuf)
static av_cold void pp_uninit(AVFilterContext *ctx)
static const AVFilterPad pp_inputs[] = ;
static const AVFilterPad pp_outputs[] = ;
AVFilter ff_vf_pp = ;
