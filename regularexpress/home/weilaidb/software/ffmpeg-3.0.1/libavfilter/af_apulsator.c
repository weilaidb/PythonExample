enum PulsatorModes ;
enum PulsatorTimings ;
typedef struct SimpleLFO  SimpleLFO;
typedef struct AudioPulsatorContext  AudioPulsatorContext;
#define OFFSET(x) offsetof(AudioPulsatorContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption apulsator_options[] = ;
AVFILTER_DEFINE_CLASS(apulsator);
static void lfo_advance(SimpleLFO *lfo, unsigned count)
static double lfo_get_value(SimpleLFO *lfo)
static int filter_frame(AVFilterLink *inlink, AVFrame *in)
static int query_formats(AVFilterContext *ctx)
static int config_input(AVFilterLink *inlink)
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_apulsator = ;
