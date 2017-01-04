void ff_put_rv40_chroma_mc8_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
void ff_put_rv40_chroma_mc4_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
void ff_avg_rv40_chroma_mc8_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
void ff_avg_rv40_chroma_mc4_neon(uint8_t *dst, uint8_t *src, int stride, int h,
int x, int y);
av_cold void ff_rv40dsp_init_aarch64(RV34DSPContext *c)
