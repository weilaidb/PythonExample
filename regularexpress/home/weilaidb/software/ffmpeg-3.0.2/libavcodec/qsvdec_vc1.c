typedef struct QSVVC1Context  QSVVC1Context;
static av_cold int qsv_decode_close(AVCodecContext *avctx)
static int qsv_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static void qsv_decode_flush(AVCodecContext *avctx)
AVHWAccel ff_vc1_qsv_hwaccel = ;
#define OFFSET(x) offsetof(QSVVC1Context, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
AVCodec ff_vc1_qsv_decoder = ;
