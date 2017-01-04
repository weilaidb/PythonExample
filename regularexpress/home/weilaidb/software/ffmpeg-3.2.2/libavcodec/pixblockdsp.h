#define AVCODEC_PIXBLOCKDSP_H
typedef struct PixblockDSPContext  PixblockDSPContext;
void ff_pixblockdsp_init(PixblockDSPContext *c, AVCodecContext *avctx);
void ff_pixblockdsp_init_alpha(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_pixblockdsp_init_arm(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_pixblockdsp_init_ppc(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_pixblockdsp_init_x86(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_pixblockdsp_init_mips(PixblockDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
