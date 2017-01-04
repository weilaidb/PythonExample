typedef struct SgiState  SgiState;
static int expand_rle_row8(SgiState *s, uint8_t *out_buf,
int len, int pixelstride)
static int expand_rle_row16(SgiState *s, uint16_t *out_buf,
int len, int pixelstride)
static int read_rle_sgi(uint8_t *out_buf, SgiState *s)
static int read_uncompressed_sgi(unsigned char *out_buf, SgiState *s)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int sgi_decode_init(AVCodecContext *avctx)
AVCodec ff_sgi_decoder = ;
