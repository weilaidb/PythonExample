void ff_diff_bytes_mmx(uint8_t *dst, const uint8_t *src1, const uint8_t *src2,
intptr_t w);
void ff_diff_bytes_sse2(uint8_t *dst, const uint8_t *src1, const uint8_t *src2,
intptr_t w);
void ff_diff_bytes_avx2(uint8_t *dst, const uint8_t *src1, const uint8_t *src2,
intptr_t w);
#if HAVE_INLINE_ASM
static void sub_hfyu_median_pred_mmxext(uint8_t *dst, const uint8_t *src1,
const uint8_t *src2, intptr_t w,
int *left, int *left_top)
av_cold void ff_huffyuvencdsp_init_x86(HuffYUVEncDSPContext *c)
