#define BITSTREAM_READER_LE
typedef struct TSCC2Context  TSCC2Context;
static av_cold void free_vlcs(TSCC2Context *c)
static av_cold int init_vlcs(TSCC2Context *c)
#define DEQUANT(val, q) (((q) * (val) + 0x80) >> 8)
#define DCT1D(d0, d1, d2, d3, s0, s1, s2, s3, OP) \
OP(d0, 5 * ((s0) + (s1) + (s2)) + 2 * (s3));  \
OP(d1, 5 * ((s0) - (s2) - (s3)) + 2 * (s1));  \
OP(d2, 5 * ((s0) - (s2) + (s3)) - 2 * (s1));  \
OP(d3, 5 * ((s0) - (s1) + (s2)) - 2 * (s3));  \
#define COL_OP(a, b)  a = (b)
#define ROW_OP(a, b)  a = ((b) + 0x20) >> 6
static void tscc2_idct4_put(int *in, int q[3], uint8_t *dst, int stride)
static int tscc2_decode_mb(TSCC2Context *c, int *q, int vlc_set,
uint8_t *dst, int stride, int plane)
static int tscc2_decode_slice(TSCC2Context *c, int mb_y,
const uint8_t *buf, int buf_size)
static int tscc2_decode_frame(AVCodecContext *avctx, void *data,
int *got_frame, AVPacket *avpkt)
static av_cold int tscc2_decode_end(AVCodecContext *avctx)
static av_cold int tscc2_decode_init(AVCodecContext *avctx)
AVCodec ff_tscc2_decoder = ;
