typedef struct CNGContext  CNGContext;
static av_cold int cng_encode_close(AVCodecContext *avctx)
static av_cold int cng_encode_init(AVCodecContext *avctx)
static int cng_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_comfortnoise_encoder = ;
