typedef LibWebPContextCommon LibWebPContext;
static av_cold int libwebp_encode_init(AVCodecContext *avctx)
static int libwebp_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static int libwebp_encode_close(AVCodecContext *avctx)
static const AVClass class = ;
AVCodec ff_libwebp_encoder = ;
