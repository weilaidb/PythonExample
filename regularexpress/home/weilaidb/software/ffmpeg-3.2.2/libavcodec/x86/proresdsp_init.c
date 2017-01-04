void ff_prores_idct_put_10_sse2(uint16_t *dst, int linesize,
int16_t *block, const int16_t *qmat);
void ff_prores_idct_put_10_avx (uint16_t *dst, int linesize,
int16_t *block, const int16_t *qmat);
av_cold void ff_proresdsp_init_x86(ProresDSPContext *dsp, AVCodecContext *avctx)
