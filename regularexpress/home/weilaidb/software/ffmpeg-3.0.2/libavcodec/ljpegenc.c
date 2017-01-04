typedef struct LJpegEncContext  LJpegEncContext;
static int ljpeg_encode_bgr(AVCodecContext *avctx, PutBitContext *pb,
const AVFrame *frame)
static inline void ljpeg_encode_yuv_mb(LJpegEncContext *s, PutBitContext *pb,
const AVFrame *frame, int predictor,
int mb_x, int mb_y)
static int ljpeg_encode_yuv(AVCodecContext *avctx, PutBitContext *pb,
const AVFrame *frame)
static int ljpeg_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
static av_cold int ljpeg_encode_close(AVCodecContext *avctx)
static av_cold int ljpeg_encode_init(AVCodecContext *avctx)
#define OFFSET(x) offsetof(LJpegEncContext, x)
#define VE AV_OPT_FLAG_VIDEO_PARAM | AV_OPT_FLAG_ENCODING_PARAM
static const AVOption options[] = ;
static const AVClass ljpeg_class = ;
AVCodec ff_ljpeg_encoder = ;
