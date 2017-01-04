void ff_ssim_4x4_line_ssse3(const uint8_t *buf, ptrdiff_t buf_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int (*sums)[4], int w);
void ff_ssim_4x4_line_xop  (const uint8_t *buf, ptrdiff_t buf_stride,
const uint8_t *ref, ptrdiff_t ref_stride,
int (*sums)[4], int w);
float ff_ssim_end_line_sse4(const int (*sum0)[4], const int (*sum1)[4], int w);
void ff_ssim_init_x86(SSIMDSPContext *dsp)
