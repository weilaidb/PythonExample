#define AVCODEC_BSWAPDSP_H
typedef struct BswapDSPContext  BswapDSPContext;
void ff_bswapdsp_init(BswapDSPContext *c);
void ff_bswapdsp_init_x86(BswapDSPContext *c);
