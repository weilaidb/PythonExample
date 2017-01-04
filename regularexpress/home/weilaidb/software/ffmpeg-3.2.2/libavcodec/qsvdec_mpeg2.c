typedef struct QSVMPEG2Context  QSVMPEG2Context;
static av_cold int qsv_decode_close(AVCodecContext *avctx)
static av_cold int qsv_decode_init(AVCodecContext *avctx)
static int qsv_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static void qsv_decode_flush(AVCodecContext *avctx)
AVHWAccel ff_mpeg2_qsv_hwaccel = ;
#define OFFSET(x) offsetof(QSVMPEG2Context, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
static const AVClass class = ;
AVCodec ff_mpeg2_qsv_decoder = ;
