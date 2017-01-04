static int get_mode(AVCodecContext *avctx)
typedef struct ILBCDecContext  ILBCDecContext;
static const AVOption ilbc_dec_options[] = ;
static const AVClass ilbc_dec_class = ;
static av_cold int ilbc_decode_init(AVCodecContext *avctx)
static int ilbc_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame_ptr, AVPacket *avpkt)
AVCodec ff_libilbc_decoder = ;
typedef struct ILBCEncContext  ILBCEncContext;
static const AVOption ilbc_enc_options[] = ;
static const AVClass ilbc_enc_class = ;
static av_cold int ilbc_encode_init(AVCodecContext *avctx)
static int ilbc_encode_frame(AVCodecContext *avctx, AVPacket *avpkt,
const AVFrame *frame, int *got_packet_ptr)
static const AVCodecDefault ilbc_encode_defaults[] = ;
AVCodec ff_libilbc_encoder = ;
