enum PulsatorModes ;
enum PulsatorTimings ;
typedef struct SimpleLFO  SimpleLFO;
typedef struct AudioPulsatorContext  AudioPulsatorContext;
OFFSET offsetof(AudioPulsatorContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption apulsator_options[] = ;
AVFILTER_DEFINE_CLASS(apulsator);
lfo_advance
lfo_get_value
filter_frame
query_formats
config_input
static const AVFilterPad inputs[] = ;
static const AVFilterPad outputs[] = ;
AVFilter ff_af_apulsator = ;
