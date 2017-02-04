enum LoadPlugin ;
typedef struct QSVH2645Context  QSVH2645Context;
qsv_clear_buffers
qsv_decode_close
qsv_decode_init
qsv_init_bsf
qsv_decode_frame
qsv_decode_flush
OFFSET offsetof(QSVH2645Context, x)
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
