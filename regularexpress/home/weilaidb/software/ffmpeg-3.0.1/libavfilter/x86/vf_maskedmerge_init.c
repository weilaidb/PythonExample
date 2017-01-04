void ff_maskedmerge8_sse2(const uint8_t *bsrc, const uint8_t *osrc,
const uint8_t *msrc, uint8_t *dst,
ptrdiff_t blinesize, ptrdiff_t olinesize,
ptrdiff_t mlinesize, ptrdiff_t dlinesize,
int w, int h,
int half, int shift);
av_cold void ff_maskedmerge_init_x86(MaskedMergeContext *s)
