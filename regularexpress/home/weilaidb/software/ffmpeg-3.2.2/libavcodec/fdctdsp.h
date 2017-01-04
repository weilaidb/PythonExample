#define AVCODEC_FDCTDSP_H
typedef struct FDCTDSPContext  FDCTDSPContext;
void ff_fdctdsp_init(FDCTDSPContext *c, AVCodecContext *avctx);
void ff_fdctdsp_init_ppc(FDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_fdctdsp_init_x86(FDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
