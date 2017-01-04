void ff_vp6_filter_diag4_mmx(uint8_t *dst, uint8_t *src, int stride,
const int16_t *h_weights,const int16_t *v_weights);
void ff_vp6_filter_diag4_sse2(uint8_t *dst, uint8_t *src, int stride,
const int16_t *h_weights,const int16_t *v_weights);
av_cold void ff_vp6dsp_init_x86(VP56DSPContext* c, enum AVCodecID codec)
