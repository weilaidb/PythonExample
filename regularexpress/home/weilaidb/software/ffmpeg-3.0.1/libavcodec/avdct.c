#define OFFSET(x) offsetof(AVDCT,x)
#define DEFAULT 0
#define V AV_OPT_FLAG_VIDEO_PARAM
#define A AV_OPT_FLAG_AUDIO_PARAM
#define E AV_OPT_FLAG_ENCODING_PARAM
#define D AV_OPT_FLAG_DECODING_PARAM
static const AVOption avdct_options[] = ;
static const AVClass avdct_class = ;
const AVClass *avcodec_dct_get_class(void)
AVDCT *avcodec_dct_alloc(void)
int avcodec_dct_init(AVDCT *dsp)
