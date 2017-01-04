#if HAVE_ALTIVEC
static int yv12toyuy2_unscaled_altivec(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY,
int srcSliceH, uint8_t *dstParam[],
int dstStride_a[])
static int yv12touyvy_unscaled_altivec(SwsContext *c, const uint8_t *src[],
int srcStride[], int srcSliceY,
int srcSliceH, uint8_t *dstParam[],
int dstStride_a[])
av_cold void ff_get_unscaled_swscale_ppc(SwsContext *c)
