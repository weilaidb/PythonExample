static void pcx_rle_decode(GetByteContext *gb,
uint8_t *dst,
unsigned int bytes_per_scanline,
int compressed)
static void pcx_palette(GetByteContext *gb, uint32_t *dst, int pallen)
static int pcx_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_pcx_decoder = ;
