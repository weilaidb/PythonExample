enum PhaseMode ;
typedef struct PhaseContext  PhaseContext;
#define OFFSET(x) offsetof(PhaseContext, x)
#define FLAGS AV_OPT_FLAG_FILTERING_PARAM|AV_OPT_FLAG_VIDEO_PARAM
#define CONST(name, help, val, unit)
static const AVOption phase_options[] = ;
AVFILTER_DEFINE_CLASS(phase);
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
#define DIFF(a, as, b, bs) ((t) = ((*(a) - (b)[bs]) << 2) + (a)[(as) << 1] - (b)[-(bs)], (t) * (t))
static enum PhaseMode analyze_plane(void *ctx, enum PhaseMode mode, AVFrame *old, AVFrame *new)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static av_cold void uninit(AVFilterContext *ctx)
static const AVFilterPad phase_inputs[] = ;
static const AVFilterPad phase_outputs[] = ;
AVFilter ff_vf_phase = ;
