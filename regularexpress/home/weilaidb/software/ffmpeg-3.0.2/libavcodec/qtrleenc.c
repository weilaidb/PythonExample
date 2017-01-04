#define MAX_RLE_BULK   127
#define MAX_RLE_REPEAT 128
#define MAX_RLE_SKIP   254
typedef struct QtrleEncContext  QtrleEncContext;
static av_cold int qtrle_encode_end(AVCodecContext *avctx)
static av_cold int qtrle_encode_init(AVCodecContext *avctx)
static void qtrle_encode_line(QtrleEncContext *s, const AVFrame *p, int line, uint8_t **buf)
static int encode_frame(QtrleEncContext *s, const AVFrame *p, uint8_t *buf)
static int qtrle_encode_frame(AVCodecContext *avctx, AVPacket *pkt,
const AVFrame *pict, int *got_packet)
AVCodec ff_qtrle_encoder = ;
