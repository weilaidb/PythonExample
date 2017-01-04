typedef struct MvcContext  MvcContext;
static av_cold int mvc_decode_init(AVCodecContext *avctx)
static int decode_mvc1(AVCodecContext *avctx, GetByteContext *gb,
uint8_t *dst_start, int width, int height, int linesize)
static void set_4x4_block(uint8_t *dst, int linesize, uint32_t pixel)
#define PIX32(target, true, false)                                            \
AV_WN32A(dst, (mask & target) ? v[true] : v[false]);                      \
dst += 4;
#define ROW32(row, a1, a0, b1, b0)                                            \
dst = dst_start + (y + row) * linesize + x * 4;                           \
PIX32(1 << (row * 4), a1, a0)                                             \
PIX32(1 << (row * 4 + 1), a1, a0)                                         \
PIX32(1 << (row * 4 + 2), b1, b0)                                         \
PIX32(1 << (row * 4 + 3), b1, b0)
#define MVC2_BLOCK                                                            \
ROW32(0, 1, 0, 3, 2);                                                     \
ROW32(1, 1, 0, 3, 2);                                                     \
ROW32(2, 5, 4, 7, 6);                                                     \
ROW32(3, 5, 4, 7, 6);
static int decode_mvc2(AVCodecContext *avctx, GetByteContext *gb,
uint8_t *dst_start, int width, int height,
int linesize, int vflip)
static int mvc_decode_frame(AVCodecContext *avctx, void *data, int *got_frame,
AVPacket *avpkt)
#if CONFIG_MVC1_DECODER
AVCodec ff_mvc1_decoder = ;
#if CONFIG_MVC2_DECODER
AVCodec ff_mvc2_decoder = ;
