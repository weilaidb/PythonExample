typedef struct PicContext  PicContext;
static void picmemset_8bpp(PicContext *s, AVFrame *frame, int value, int run,
int *x, int *y)
static void picmemset(PicContext *s, AVFrame *frame, int value, int run,
int *x, int *y, int *plane, int bits_per_plane)
static const uint8_t cga_mode45_index[6][4] = ;
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_pictor_decoder = ;
