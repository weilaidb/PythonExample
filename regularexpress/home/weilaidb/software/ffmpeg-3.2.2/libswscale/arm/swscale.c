void ff_hscale_8_to_15_neon(SwsContext *c, int16_t *dst, int dstW,
const uint8_t *src, const int16_t *filter,
const int32_t *filterPos, int filterSize);
void ff_yuv2planeX_8_neon(const int16_t *filter, int filterSize,
const int16_t **src, uint8_t *dest, int dstW,
const uint8_t *dither, int offset);
av_cold void ff_sws_init_swscale_arm(SwsContext *c)
