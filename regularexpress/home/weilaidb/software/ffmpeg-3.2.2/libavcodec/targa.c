typedef struct TargaContext  TargaContext;
static uint8_t *advance_line(uint8_t *start, uint8_t *line,
int stride, int *y, int h, int interleave)
static int targa_decode_rle(AVCodecContext *avctx, TargaContext *s,
uint8_t *start, int w, int h, int stride,
int bpp, int interleave)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_targa_decoder = ;
