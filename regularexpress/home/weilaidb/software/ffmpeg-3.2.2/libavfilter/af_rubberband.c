typedef struct RubberBandContext  RubberBandContext;
#define OFFSET(x) offsetof(RubberBandContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption rubberband_options[] = ;
AVFILTER_DEFINE_CLASS(rubberband);
static av_cold void uninit(AVFilterContext *ctx)
static int query_formats(AVFilterContext *ctx)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int config_input(AVFilterLink *inlink)
static int request_frame(AVFilterLink *outlink)
static int process_command(AVFilterContext *ctx, const char *cmd, const char *args,
char *res, int res_len, int flags)
static const AVFilterPad rubberband_inputs[] = ;
static const AVFilterPad rubberband_outputs[] = ;
AVFilter ff_af_rubberband = ;
