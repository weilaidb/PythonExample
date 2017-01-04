static const uint32_t monoblack_pal[16] = ;
static av_cold int pcx_encode_init(AVCodecContext *avctx)
static int pcx_rle_encode(      uint8_t *dst, int dst_size,
const uint8_t *src, int src_plane_size, int nplanes)
static int pcx_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
AVCodec ff_pcx_encoder = ;
