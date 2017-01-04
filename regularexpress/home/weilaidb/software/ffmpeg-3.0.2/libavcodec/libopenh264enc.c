typedef struct SVCContext  SVCContext;
#define OPENH264_VER_AT_LEAST(maj, min) \
((OPENH264_MAJOR  > (maj)) || \
(OPENH264_MAJOR == (maj) && OPENH264_MINOR >= (min)))
#define OFFSET(x) offsetof(SVCContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static int libopenh264_to_ffmpeg_log_level(int libopenh264_log_level)
static void libopenh264_trace_callback(void *ctx, int level, char const *msg)
static av_cold int svc_encode_close(AVCodecContext *avctx)
static av_cold int svc_encode_init(AVCodecContext *avctx)
static int svc_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_libopenh264_encoder = ;
