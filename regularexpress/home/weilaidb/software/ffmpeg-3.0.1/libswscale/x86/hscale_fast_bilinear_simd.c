#define RET 0xC3
#define PREFETCH "prefetchnta"
#if HAVE_INLINE_ASM
av_cold int ff_init_hscaler_mmxext(int dstW, int xInc, uint8_t *filterCode,
int16_t *filter, int32_t *filterPos,
int numSplits)
void ff_hyscale_fast_mmxext(SwsContext *c, int16_t *dst,
int dstWidth, const uint8_t *src,
int srcW, int xInc)
void ff_hcscale_fast_mmxext(SwsContext *c, int16_t *dst1, int16_t *dst2,
int dstWidth, const uint8_t *src1,
const uint8_t *src2, int srcW, int xInc)
