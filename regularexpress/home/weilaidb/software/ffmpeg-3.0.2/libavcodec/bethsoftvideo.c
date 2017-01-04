typedef struct BethsoftvidContext  BethsoftvidContext;
static av_cold int bethsoftvid_decode_init(AVCodecContext *avctx)
static int set_palette(BethsoftvidContext *ctx)
static int bethsoftvid_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int bethsoftvid_decode_end(AVCodecContext *avctx)
AVCodec ff_bethsoftvid_decoder = ;
