#define INPUT_DEQUEUE_TIMEOUT_US 8000
#define OUTPUT_DEQUEUE_TIMEOUT_US 8000
#define OUTPUT_DEQUEUE_BLOCK_TIMEOUT_US 1000000
enum ;
static const struct  color_formats[] = ;
static enum AVPixelFormat mcdec_map_color_format(AVCodecContext *avctx,
MediaCodecDecContext *s,
int color_format)
static void ff_mediacodec_dec_ref(MediaCodecDecContext *s)
static void ff_mediacodec_dec_unref(MediaCodecDecContext *s)
static void mediacodec_buffer_release(void *opaque, uint8_t *data)
static int mediacodec_wrap_hw_buffer(AVCodecContext *avctx,
MediaCodecDecContext *s,
ssize_t index,
FFAMediaCodecBufferInfo *info,
AVFrame *frame)
static int mediacodec_wrap_sw_buffer(AVCodecContext *avctx,
MediaCodecDecContext *s,
uint8_t *data,
size_t size,
ssize_t index,
FFAMediaCodecBufferInfo *info,
AVFrame *frame)
static int mediacodec_dec_parse_format(AVCodecContext *avctx, MediaCodecDecContext *s)
static int mediacodec_dec_flush_codec(AVCodecContext *avctx, MediaCodecDecContext *s)
int ff_mediacodec_dec_init(AVCodecContext *avctx, MediaCodecDecContext *s,
const char *mime, FFAMediaFormat *format)
int ff_mediacodec_dec_decode(AVCodecContext *avctx, MediaCodecDecContext *s,
AVFrame *frame, int *got_frame,
AVPacket *pkt)
int ff_mediacodec_dec_flush(AVCodecContext *avctx, MediaCodecDecContext *s)
int ff_mediacodec_dec_close(AVCodecContext *avctx, MediaCodecDecContext *s)
int ff_mediacodec_dec_is_flushing(AVCodecContext *avctx, MediaCodecDecContext *s)
AVHWAccel ff_h264_mediacodec_hwaccel = ;
AVHWAccel ff_hevc_mediacodec_hwaccel = ;
AVHWAccel ff_mpeg4_mediacodec_hwaccel = ;
AVHWAccel ff_vp8_mediacodec_hwaccel = ;
AVHWAccel ff_vp9_mediacodec_hwaccel = ;
