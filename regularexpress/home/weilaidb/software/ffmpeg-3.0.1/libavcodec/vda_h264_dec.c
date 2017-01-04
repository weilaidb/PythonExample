#define kCFCoreFoundationVersionNumber10_7      635.00
extern AVCodec ff_h264_decoder, ff_h264_vda_decoder;
static const enum AVPixelFormat vda_pixfmts_prior_10_7[] = ;
static const enum AVPixelFormat vda_pixfmts[] = ;
typedef struct  VDADecoderContext;
static enum AVPixelFormat get_format(struct AVCodecContext *avctx,
const enum AVPixelFormat *fmt)
typedef struct  VDABufferContext;
static void release_buffer(void *opaque, uint8_t *data)
static int get_buffer2(AVCodecContext *avctx, AVFrame *pic, int flag)
static inline void set_context(AVCodecContext *avctx)
static inline void restore_context(AVCodecContext *avctx)
static int vdadec_decode(AVCodecContext *avctx,
void *data, int *got_frame, AVPacket *avpkt)
static av_cold int vdadec_close(AVCodecContext *avctx)
static av_cold int vdadec_init(AVCodecContext *avctx)
static void vdadec_flush(AVCodecContext *avctx)
AVCodec ff_h264_vda_decoder = ;
