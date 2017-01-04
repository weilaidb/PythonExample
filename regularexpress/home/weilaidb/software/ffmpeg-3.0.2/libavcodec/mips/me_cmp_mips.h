#define AVCODEC_MIPS_ME_CMP_MIPS_H
int ff_hadamard8_diff8x8_msa(MpegEncContext *s, uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int h);
int ff_hadamard8_intra8x8_msa(MpegEncContext *s, uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int h);
int ff_hadamard8_diff16_msa(MpegEncContext *s, uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int h);
int ff_hadamard8_intra16_msa(MpegEncContext *s, uint8_t *dst, uint8_t *src,
ptrdiff_t stride, int h);
int ff_pix_abs16_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs16_x2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs16_y2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs16_xy2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs8_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs8_x2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs8_y2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_pix_abs8_xy2_msa(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sse16_msa(MpegEncContext *v, uint8_t *pu8Src, uint8_t *pu8Ref,
ptrdiff_t stride, int i32Height);
int ff_sse8_msa(MpegEncContext *v, uint8_t *pu8Src, uint8_t *pu8Ref,
ptrdiff_t stride, int i32Height);
int ff_sse4_msa(MpegEncContext *v, uint8_t *pu8Src, uint8_t *pu8Ref,
ptrdiff_t stride, int i32Height);
void ff_add_pixels8_msa(uint8_t *av_restrict pixels, int16_t *block,
ptrdiff_t stride);
