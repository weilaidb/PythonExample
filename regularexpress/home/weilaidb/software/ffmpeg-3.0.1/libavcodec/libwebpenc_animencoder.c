typedef struct LibWebPAnimContext  LibWebPAnimContext;
static av_cold int libwebp_anim_encode_init(AVCodecContext *avctx)
static int libwebp_anim_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static int libwebp_anim_encode_close(AVCodecContext *avctx)
static const AVClass class = ;
AVCodec ff_libwebp_anim_encoder = ;
