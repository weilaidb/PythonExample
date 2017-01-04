#define AVCODEC_ARM_IDCTDSP_ARM_H
void ff_idctdsp_init_armv5te(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_idctdsp_init_armv6(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_idctdsp_init_neon(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
