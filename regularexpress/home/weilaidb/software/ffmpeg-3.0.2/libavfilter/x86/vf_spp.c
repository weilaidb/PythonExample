#if HAVE_MMX_INLINE
static void hardthresh_mmx(int16_t dst[64], const int16_t src[64],
int qp, const uint8_t *permutation)
static void softthresh_mmx(int16_t dst[64], const int16_t src[64],
int qp, const uint8_t *permutation)
static void store_slice_mmx(uint8_t *dst, const int16_t *src,
int dst_stride, int src_stride,
int width, int height, int log2_scale,
const uint8_t dither[8][8])
av_cold void ff_spp_init_x86(SPPContext *s)
