typedef struct BFIContext  BFIContext;
static av_cold int bfi_decode_init(AVCodecContext *avctx)
static int bfi_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int bfi_decode_close(AVCodecContext *avctx)
AVCodec ff_bfi_decoder = ;
