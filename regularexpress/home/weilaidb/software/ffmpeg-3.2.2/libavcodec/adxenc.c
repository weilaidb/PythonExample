static void adx_encode(ADXContext *c, uint8_t *adx, const int16_t *wav,
ADXChannelState *prev, int channels)
#define HEADER_SIZE 36
static int adx_encode_header(AVCodecContext *avctx, uint8_t *buf, int bufsize)
static av_cold int adx_encode_init(AVCodecContext *avctx)
static int adx_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
AVCodec ff_adpcm_adx_encoder = ;
