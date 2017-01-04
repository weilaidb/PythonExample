typedef struct  AVRnContext;
static av_cold int init(AVCodecContext *avctx)
static av_cold int end(AVCodecContext *avctx)
static int decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
AVCodec ff_avrn_decoder = ;
