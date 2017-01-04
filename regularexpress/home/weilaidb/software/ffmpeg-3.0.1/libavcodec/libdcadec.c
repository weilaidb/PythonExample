typedef struct DCADecContext  DCADecContext;
static void my_log_cb(int level, const char *file, int line,
const char *message, void *cbarg)
static int dcadec_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static av_cold void dcadec_flush(AVCodecContext *avctx)
static av_cold int dcadec_close(AVCodecContext *avctx)
static av_cold int dcadec_init(AVCodecContext *avctx)
#define OFFSET(x) offsetof(DCADecContext, x)
#define PARAM AV_OPT_FLAG_AUDIO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption dcadec_options[] = ;
static const AVClass dcadec_class = ;
AVCodec ff_libdcadec_decoder = ;
