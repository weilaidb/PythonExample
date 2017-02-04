#define AVCODEC_BLOCKDSP_H
typedef void (*op_fill_func)(uint8_t *block,
uint8_t value, int line_size, int h);
typedef struct BlockDSPContext  BlockDSPContext;
ff_blockdsp_init;
ff_blockdsp_init_alpha;
ff_blockdsp_init_arm;
ff_blockdsp_init_ppc;
ff_blockdsp_init_x86;
ff_blockdsp_init_mips;
