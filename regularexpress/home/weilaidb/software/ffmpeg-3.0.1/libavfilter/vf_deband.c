typedef struct DebandContext  DebandContext;
#define OFFSET(x) offsetof(DebandContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
static const AVOption deband_options[] = ;
AVFILTER_DEFINE_CLASS(deband);
static int query_formats(AVFilterContext *ctx)
static float frand(int x, int y)
static int inline get_avg(int ref0, int ref1, int ref2, int ref3)
typedef struct ThreadData  ThreadData;
static int deband_8_c(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int deband_16_c(AVFilterContext *ctx, void *arg, int jobnr, int nb_jobs)
static int config_input(AVFilterLink *inlink)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad avfilter_vf_deband_inputs[] = ;
static const AVFilterPad avfilter_vf_deband_outputs[] = ;
AVFilter ff_vf_deband = ;
