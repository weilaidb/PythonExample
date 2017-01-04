static uint32_t sad_8width_msa(uint8_t *src, int32_t src_stride,
uint8_t *ref, int32_t ref_stride,
int32_t height)
static uint32_t sad_16width_msa(uint8_t *src, int32_t src_stride,
uint8_t *ref, int32_t ref_stride,
int32_t height)
static uint32_t sad_horiz_bilinear_filter_8width_msa(uint8_t *src,
int32_t src_stride,
uint8_t *ref,
int32_t ref_stride,
int32_t height)
static uint32_t sad_horiz_bilinear_filter_16width_msa(uint8_t *src,
int32_t src_stride,
uint8_t *ref,
int32_t ref_stride,
int32_t height)
static uint32_t sad_vert_bilinear_filter_8width_msa(uint8_t *src,
int32_t src_stride,
uint8_t *ref,
int32_t ref_stride,
int32_t height)
static uint32_t sad_vert_bilinear_filter_16width_msa(uint8_t *src,
int32_t src_stride,
uint8_t *ref,
int32_t ref_stride,
int32_t height)
static uint32_t sad_hv_bilinear_filter_8width_msa(uint8_t *src,
int32_t src_stride,
uint8_t *ref,
int32_t ref_stride,
int32_t height)
static uint32_t sad_hv_bilinear_filter_16width_msa(uint8_t *src,
int32_t src_stride,
uint8_t *ref,
int32_t ref_stride,
int32_t height)
#define CALC_MSE_B(src, ref, var)                                    \
static uint32_t sse_4width_msa(uint8_t *src_ptr, int32_t src_stride,
uint8_t *ref_ptr, int32_t ref_stride,
int32_t height)
static uint32_t sse_8width_msa(uint8_t *src_ptr, int32_t src_stride,
uint8_t *ref_ptr, int32_t ref_stride,
int32_t height)
static uint32_t sse_16width_msa(uint8_t *src_ptr, int32_t src_stride,
uint8_t *ref_ptr, int32_t ref_stride,
int32_t height)
static int32_t hadamard_diff_8x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *ref, int32_t ref_stride)
static int32_t hadamard_intra_8x8_msa(uint8_t *src, int32_t src_stride,
uint8_t *ref, int32_t ref_stride)
int ff_pix_abs16_msa(MpegEncContext *v, uint8_t *src, uint8_t *ref,
ptrdiff_t stride, int height)
int ff_pix_abs8_msa(MpegEncContext *v, uint8_t *src, uint8_t *ref,
ptrdiff_t stride, int height)
int ff_pix_abs16_x2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
int ff_pix_abs16_y2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
int ff_pix_abs16_xy2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
int ff_pix_abs8_x2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
int ff_pix_abs8_y2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
int ff_pix_abs8_xy2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
int ff_sse16_msa(MpegEncContext *v, uint8_t *src, uint8_t *ref,
ptrdiff_t stride, int height)
int ff_sse8_msa(MpegEncContext *v, uint8_t *src, uint8_t *ref,
ptrdiff_t stride, int height)
int ff_sse4_msa(MpegEncContext *v, uint8_t *src, uint8_t *ref,
ptrdiff_t stride, int height)
int ff_hadamard8_diff8x8_msa(MpegEncContext *s, uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int h)
int ff_hadamard8_intra8x8_msa(MpegEncContext *s, uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int h)
#define WRAPPER8_16_SQ(name8, name16)                      \
int name16(MpegEncContext *s, uint8_t *dst, uint8_t *src,  \
ptrdiff_t stride, int h)                        \
WRAPPER8_16_SQ(ff_hadamard8_diff8x8_msa, ff_hadamard8_diff16_msa);
WRAPPER8_16_SQ(ff_hadamard8_intra8x8_msa, ff_hadamard8_intra16_msa);
