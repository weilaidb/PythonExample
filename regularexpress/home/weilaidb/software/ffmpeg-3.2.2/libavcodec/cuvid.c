#define MAX_FRAME_COUNT 25
typedef struct CuvidContext
CuvidContext;
typedef struct CuvidParsedFrame
CuvidParsedFrame;
static int check_cu(AVCodecContext *avctx, CUresult err, const char *func)
#define CHECK_CU(x) check_cu(avctx, (x), #x)
static int CUDAAPI cuvid_handle_video_sequence(void *opaque, CUVIDEOFORMAT* format)
static int CUDAAPI cuvid_handle_picture_decode(void *opaque, CUVIDPICPARAMS* picparams)
static int CUDAAPI cuvid_handle_picture_display(void *opaque, CUVIDPARSERDISPINFO* dispinfo)
static int cuvid_decode_packet(AVCodecContext *avctx, const AVPacket *avpkt)
static int cuvid_output_frame(AVCodecContext *avctx, AVFrame *frame)
static int cuvid_decode_frame(AVCodecContext *avctx, void *data, int *got_frame, AVPacket *avpkt)
static av_cold int cuvid_decode_end(AVCodecContext *avctx)
static int cuvid_test_dummy_decoder(AVCodecContext *avctx, CUVIDPARSERPARAMS *cuparseinfo)
static av_cold int cuvid_decode_init(AVCodecContext *avctx)
static void cuvid_flush(AVCodecContext *avctx)
#define OFFSET(x) offsetof(CuvidContext, x)
#define VD AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_DECODING_PARAM
static const AVOption options[] = ;
#define DEFINE_CUVID_CODEC(x, X) \
static const AVClass x##_cuvid_class = ; \
AVHWAccel ff_##x##_cuvid_hwaccel = ; \
AVCodec ff_##x##_cuvid_decoder = ;
#if CONFIG_HEVC_CUVID_DECODER
DEFINE_CUVID_CODEC(hevc, HEVC)
#if CONFIG_H263_CUVID_DECODER
DEFINE_CUVID_CODEC(h263, H263)
#if CONFIG_H264_CUVID_DECODER
DEFINE_CUVID_CODEC(h264, H264)
#if CONFIG_MJPEG_CUVID_DECODER
DEFINE_CUVID_CODEC(mjpeg, MJPEG)
#if CONFIG_MPEG1_CUVID_DECODER
DEFINE_CUVID_CODEC(mpeg1, MPEG1VIDEO)
#if CONFIG_MPEG2_CUVID_DECODER
DEFINE_CUVID_CODEC(mpeg2, MPEG2VIDEO)
#if CONFIG_MPEG4_CUVID_DECODER
DEFINE_CUVID_CODEC(mpeg4, MPEG4)
#if CONFIG_VP8_CUVID_DECODER
DEFINE_CUVID_CODEC(vp8, VP8)
#if CONFIG_VP9_CUVID_DECODER
DEFINE_CUVID_CODEC(vp9, VP9)
#if CONFIG_VC1_CUVID_DECODER
DEFINE_CUVID_CODEC(vc1, VC1)
