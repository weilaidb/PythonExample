#define AVCODEC_BLOCKDSP_H
typedef void (*op_fill_func)(uint8_t *block,
uint8_t value, int line_size, int h);
typedef struct BlockDSPContext  BlockDSPContext;
void ff_blockdsp_init(BlockDSPContext *c, AVCodecContext *avctx);
void ff_blockdsp_init_alpha(BlockDSPContext *c);
void ff_blockdsp_init_arm(BlockDSPContext *c);
void ff_blockdsp_init_ppc(BlockDSPContext *c);
void ff_blockdsp_init_x86(BlockDSPContext *c, AVCodecContext *avctx);
void ff_blockdsp_init_mips(BlockDSPContext *c);
