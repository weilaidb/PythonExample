int ff_ssd_int8_vs_int16_mmx(const int8_t *pix1, const int16_t *pix2,
intptr_t size);
int ff_ssd_int8_vs_int16_sse2(const int8_t *pix1, const int16_t *pix2,
intptr_t size);
av_cold void ff_svq1enc_init_x86(SVQ1EncContext *c)
