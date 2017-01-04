typedef struct QSVMpeg2EncContext  QSVMpeg2EncContext;
static av_cold int qsv_enc_init(AVCodecContext *avctx)
static int qsv_enc_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int qsv_enc_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(QSVMpeg2EncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static const AVCodecDefault qsv_enc_defaults[] = ;
AVCodec ff_mpeg2_qsv_encoder = ;
