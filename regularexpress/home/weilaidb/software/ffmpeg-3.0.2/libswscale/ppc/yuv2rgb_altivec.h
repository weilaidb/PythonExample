#define SWSCALE_PPC_YUV2RGB_ALTIVEC_H
#define YUV2PACKEDX_HEADER(suffix)                                  \
void ff_yuv2 ## suffix ## _X_altivec(SwsContext *c,             \
const int16_t *lumFilter,  \
const int16_t **lumSrc,    \
int lumFilterSize,         \
const int16_t *chrFilter,  \
const int16_t **chrUSrc,   \
const int16_t **chrVSrc,   \
int chrFilterSize,         \
const int16_t **alpSrc,    \
uint8_t *dest,             \
int dstW, int dstY);
YUV2PACKEDX_HEADER(abgr);
YUV2PACKEDX_HEADER(bgra);
YUV2PACKEDX_HEADER(argb);
YUV2PACKEDX_HEADER(rgba);
YUV2PACKEDX_HEADER(rgb24);
YUV2PACKEDX_HEADER(bgr24);
