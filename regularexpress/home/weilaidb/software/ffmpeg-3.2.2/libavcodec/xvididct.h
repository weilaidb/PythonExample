#define AVCODEC_XVIDIDCT_H
void ff_xvid_idct(int16_t *const in);
void ff_xvid_idct_init(IDCTDSPContext *c, AVCodecContext *avctx);
void ff_xvid_idct_init_x86(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
void ff_xvid_idct_init_mips(IDCTDSPContext *c, AVCodecContext *avctx,
unsigned high_bit_depth);
