typedef struct DxaDecContext  DxaDecContext;
static const int shift1[6] = ;
static const int shift2[6] = ;
static int decode_13(AVCodecContext *avctx, DxaDecContext *c, uint8_t* dst,
int stride, uint8_t *src, int srcsize, uint8_t *ref)
static int decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
static av_cold int decode_init(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
AVCodec ff_dxa_decoder = ;
