enum LoadPlugin ;
typedef struct QSVHEVCEncContext  QSVHEVCEncContext;
static int generate_fake_vps(QSVEncContext *q, AVCodecContext *avctx)
static av_cold int qsv_enc_init(AVCodecContext *avctx)
static int qsv_enc_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int qsv_enc_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(QSVHEVCEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static const AVCodecDefault qsv_enc_defaults[] = ;
AVCodec ff_hevc_qsv_encoder = ;
