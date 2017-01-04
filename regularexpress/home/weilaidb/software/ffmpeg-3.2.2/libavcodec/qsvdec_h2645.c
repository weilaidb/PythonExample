enum LoadPlugin ;
typedef struct QSVH2645Context  QSVH2645Context;
static void qsv_clear_buffers(QSVH2645Context *s)
static av_cold int qsv_decode_close(AVCodecContext *avctx)
static av_cold int qsv_decode_init(AVCodecContext *avctx)
static int qsv_init_bsf(AVCodecContext *avctx, QSVH2645Context *s)
static int qsv_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static void qsv_decode_flush(AVCodecContext *avctx)
#define OFFSET(x) offsetof(QSVH2645Context, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
#if CONFIG_HEVC_QSV_DECODER
AVHWAccel ff_hevc_qsv_hwaccel = ;
static const AVOption hevc_options[] = ;
static const AVClass hevc_class = ;
AVCodec ff_hevc_qsv_decoder = ;
#if CONFIG_H264_QSV_DECODER
AVHWAccel ff_h264_qsv_hwaccel = ;
static const AVOption options[] = ;
static const AVClass class = ;
AVCodec ff_h264_qsv_decoder = ;
