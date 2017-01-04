void ff_hyscale_fast_c(SwsContext *c, int16_t *dst, int dstWidth,
const uint8_t *src, int srcW, int xInc)
void ff_hcscale_fast_c(SwsContext *c, int16_t *dst1, int16_t *dst2,
int dstWidth, const uint8_t *src1,
const uint8_t *src2, int srcW, int xInc)
