typedef struct AudioEchoContext  AudioEchoContext;
OFFSET offsetof(AudioEchoContext, x)
#define A AV_OPT_FLAG_AUDIO_PARAM|AV_OPT_FLAG_FILTERING_PARAM
static const AVOption aecho_options[] = ,
, 0, 0, A },
};
AVFILTER_DEFINE_CLASS(aecho);
count_items
fill_items
uninit
init
query_formats
MOD (((a) >= (b)) ? (a) - (b) : (a))
ECHO                                          \
static void echo_samples_## name ##p(AudioEchoContext *ctx,                 \
uint8_t **delayptrs,                   \
uint8_t * const *src, uint8_t **dst,   \
int nb_samples, int channels)          \
ECHO(dbl, double,  -1.0,      1.0      )
ECHO(flt, float,   -1.0,      1.0      )
ECHO(s16, int16_t, INT16_MIN, INT16_MAX)
ECHO(s32, int32_t, INT32_MIN, INT32_MAX)
config_output
filter_frame
request_frame
static const AVFilterPad aecho_inputs[] = ;
static const AVFilterPad aecho_outputs[] = ;
AVFilter ff_af_aecho = ;
