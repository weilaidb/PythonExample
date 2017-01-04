enum QuickdrawOpcodes ;
static int parse_palette(AVCodecContext *avctx, GetByteContext *gbc,
uint32_t *pal, int colors)
static int decode_rle(AVCodecContext *avctx, AVFrame *p, GetByteContext *gbc,
int step)
static int check_header(const char *buf, int buf_size)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_qdraw_decoder = ;
