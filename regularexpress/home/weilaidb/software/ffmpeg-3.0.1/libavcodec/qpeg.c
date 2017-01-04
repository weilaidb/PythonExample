typedef struct QpegContext QpegContext;
static void qpeg_decode_intra(QpegContext *qctx, uint8_t *dst,
int stride, int width, int height)
static const int qpeg_table_h[16] =
;
static const int qpeg_table_w[16] =
;
static void av_noinline qpeg_decode_inter(QpegContext *qctx, uint8_t *dst,
int stride, int width, int height,
int delta, const uint8_t *ctable,
uint8_t *refdata)
static int decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static void decode_flush(AVCodecContext *avctx)
static av_cold int decode_end(AVCodecContext *avctx)
static av_cold int decode_init(AVCodecContext *avctx)
AVCodec ff_qpeg_decoder = ;
