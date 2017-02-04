typedef struct AudioPhaserContext  AudioPhaserContext;
OFFSET offsetof(AudioPhaserContext, x)
#define FLAGS AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aphaser_options[] = ;
AVFILTER_DEFINE_CLASS(aphaser);
init
query_formats
MOD (((a) >= (b)) ? (a) - (b) : (a))
PHASER_PLANAR                                      \
static void phaser_## name ##p(AudioPhaserContext *s,                  \
uint8_t * const *ssrc, uint8_t **ddst,  \
int nb_samples, int channels)           \
PHASER                                              \
static void phaser_## name (AudioPhaserContext *s,                      \
uint8_t * const *ssrc, uint8_t **ddst,      \
int nb_samples, int channels)               \
PHASER_PLANAR(dbl, double)
PHASER_PLANAR(flt, float)
PHASER_PLANAR(s16, int16_t)
PHASER_PLANAR(s32, int32_t)
PHASER(dbl, double)
PHASER(flt, float)
PHASER(s16, int16_t)
PHASER(s32, int32_t)
config_output
filter_frame
uninit
static const AVFilterPad aphaser_inputs[] = ;
static const AVFilterPad aphaser_outputs[] = ;
AVFilter ff_af_aphaser = ;
