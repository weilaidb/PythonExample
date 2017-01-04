typedef struct LFOContext  LFOContext;
typedef struct SRContext  SRContext;
typedef struct ACrusherContext  ACrusherContext;
#define OFFSET(x) offsetof(ACrusherContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption acrusher_options[] = ;
AVFILTER_DEFINE_CLASS(acrusher);
static double samplereduction(ACrusherContext *s, SRContext *sr, double in)
static double add_dc(double s, double dc, double idc)
static double remove_dc(double s, double dc, double idc)
static inline double factor(double y, double k, double aa1, double aa)
static double bitreduction(ACrusherContext *s, double in)
static double lfo_get(LFOContext *lfo)
static void lfo_advance(LFOContext *lfo, unsigned count)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static av_cold void uninit(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad avfilter_af_acrusher_inputs[] = ;
static const AVFilterPad avfilter_af_acrusher_outputs[] = ;
AVFilter ff_af_acrusher = ;
