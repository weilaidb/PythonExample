#define AES3_HEADER_LEN 4
typedef struct S302MEncContext  S302MEncContext;
static av_cold int s302m_encode_init(AVCodecContext *avctx)
static int s302m_encode2_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_s302m_encoder = ;
