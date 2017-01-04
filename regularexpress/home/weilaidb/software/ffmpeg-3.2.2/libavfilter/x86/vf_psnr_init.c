uint64_t ff_sse_line_8bit_sse2(const uint8_t *buf, const uint8_t *ref, int w);
uint64_t ff_sse_line_16bit_sse2(const uint8_t *buf, const uint8_t *ref, int w);
void ff_psnr_init_x86(PSNRDSPContext *dsp, int bpp)
