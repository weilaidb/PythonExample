#define CPAIR 2
#define CQUAD 4
#define COCTET 8
#define COLORS_PER_TABLE 256
typedef struct SmcContext  SmcContext;
#define GET_BLOCK_COUNT() \
(opcode & 0x10) ? (1 + bytestream2_get_byte(&s->gb)) : 1 + (opcode & 0x0F);
#define ADVANCE_BLOCK() \
static void smc_decode_stream(SmcContext *s)
static av_cold int smc_decode_init(AVCodecContext *avctx)
static int smc_decode_frame(AVCodecContext *avctx,
void *data, int *got_frame,
AVPacket *avpkt)
static av_cold int smc_decode_end(AVCodecContext *avctx)
AVCodec ff_smc_decoder = ;
