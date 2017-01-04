#define BUFFER_SIZE (4096 * 20)
typedef struct SHINEContext  SHINEContext;
static av_cold int libshine_encode_init(AVCodecContext *avctx)
static int libshine_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static av_cold int libshine_encode_close(AVCodecContext *avctx)
static const int libshine_sample_rates[] = ;
AVCodec ff_libshine_encoder = ;
