static av_always_inline void deinterleave(dwtcoef *linell, ptrdiff_t stride,
int width, int height, dwtcoef *synthl)
static void vc2_subband_dwt_97(VC2TransformContext *t, dwtcoef *data,
ptrdiff_t stride, int width, int height)
static void vc2_subband_dwt_53(VC2TransformContext *t, dwtcoef *data,
ptrdiff_t stride, int width, int height)
static av_always_inline void dwt_haar(VC2TransformContext *t, dwtcoef *data,
ptrdiff_t stride, int width, int height,
const int s)
static void vc2_subband_dwt_haar(VC2TransformContext *t, dwtcoef *data,
ptrdiff_t stride, int width, int height)
static void vc2_subband_dwt_haar_shift(VC2TransformContext *t, dwtcoef *data,
ptrdiff_t stride, int width, int height)
av_cold int ff_vc2enc_init_transforms(VC2TransformContext *s, int p_width, int p_height)
av_cold void ff_vc2enc_free_transforms(VC2TransformContext *s)
