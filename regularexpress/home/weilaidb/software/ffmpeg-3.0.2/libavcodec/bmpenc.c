static const uint32_t monoblack_pal[] = ;
static const uint32_t rgb565_masks[]  = ;
static const uint32_t rgb444_masks[]  = ;
static av_cold int bmp_encode_init(AVCodecContext *avctx)
static int bmp_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
AVCodec ff_bmp_encoder = ;
