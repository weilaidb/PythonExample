typedef struct LclEncContext  LclEncContext;
static int encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *p, int *got_packet)
static av_cold int encode_init(AVCodecContext *avctx)
static av_cold int encode_end(AVCodecContext *avctx)
AVCodec ff_zlib_encoder = ;
