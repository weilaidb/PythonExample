typedef struct QSVH264EncContext  QSVH264EncContext;
static int qsv_h264_set_encode_ctrl(AVCodecContext *avctx,
const AVFrame *frame, mfxEncodeCtrl* enc_ctrl)
static av_cold int qsv_enc_init(AVCodecContext *avctx)
static int qsv_enc_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *frame, int *got_packet)
static av_cold int qsv_enc_close(AVCodecContext *avctx)
#define OFFSET(x) offsetof(QSVH264EncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
static const AVCodecDefault qsv_enc_defaults[] = ;
AVCodec ff_h264_qsv_encoder = ;
