int ff_pixelutils_sad_8x8_mmx(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
int ff_pixelutils_sad_8x8_mmxext(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
int ff_pixelutils_sad_16x16_mmxext(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
int ff_pixelutils_sad_16x16_sse2(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
int ff_pixelutils_sad_a_16x16_sse2(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
int ff_pixelutils_sad_u_16x16_sse2(const uint8_t *src1, ptrdiff_t stride1,
const uint8_t *src2, ptrdiff_t stride2);
void ff_pixelutils_sad_init_x86(av_pixelutils_sad_fn *sad, int aligned)
