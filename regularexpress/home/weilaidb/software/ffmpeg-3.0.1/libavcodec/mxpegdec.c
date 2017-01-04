typedef struct MXpegDecodeContext  MXpegDecodeContext;
static av_cold int mxpeg_decode_end(AVCodecContext *avctx)
static av_cold int mxpeg_decode_init(AVCodecContext *avctx)
static int mxpeg_decode_app(MXpegDecodeContext *s,
const uint8_t *buf_ptr, int buf_size)
static int mxpeg_decode_mxm(MXpegDecodeContext *s,
const uint8_t *buf_ptr, int buf_size)
static int mxpeg_decode_com(MXpegDecodeContext *s,
const uint8_t *buf_ptr, int buf_size)
static int mxpeg_check_dimensions(MXpegDecodeContext *s, MJpegDecodeContext *jpg,
AVFrame *reference_ptr)
static int mxpeg_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
AVCodec ff_mxpeg_decoder = ;
