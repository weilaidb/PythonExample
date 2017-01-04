static av_cold int adx_decode_init(AVCodecContext *avctx)
static int adx_decode(ADXContext *c, int16_t *out, int offset,
const uint8_t *in, int ch)
static int adx_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
static void adx_decode_flush(AVCodecContext *avctx)
AVCodec ff_adpcm_adx_decoder = ;
