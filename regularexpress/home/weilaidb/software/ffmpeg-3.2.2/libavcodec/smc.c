#define CPAIR 2
#define CQUAD 4
#define COCTET 8
#define COLORS_PER_TABLE 256
typedef struct SmcContext  SmcContext;
GET_BLOCK_COUNT \
(opcode & 0x10) ? (1 + bytestream2_get_byte(&s->gb)) : 1 + (opcode & 0x0F);
ADVANCE_BLOCK \
smc_decode_stream
smc_decode_init
smc_decode_frame
smc_decode_end
AVCodec ff_smc_decoder = ;
