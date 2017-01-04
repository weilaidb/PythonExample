void ff_put_vc1_chroma_mc8_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
void ff_avg_vc1_chroma_mc8_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
void ff_put_vc1_chroma_mc4_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
void ff_avg_vc1_chroma_mc4_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
av_cold void ff_vc1dsp_init_aarch64(VC1DSPContext *dsp)
