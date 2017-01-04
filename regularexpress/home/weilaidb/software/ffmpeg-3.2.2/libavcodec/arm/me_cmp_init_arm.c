int ff_pix_abs16_armv6(MpegEncContext *s, uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h);
int ff_pix_abs16_x2_armv6(MpegEncContext *s, uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h);
int ff_pix_abs16_y2_armv6(MpegEncContext *s, uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h);
int ff_pix_abs8_armv6(MpegEncContext *s, uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h);
int ff_sse16_armv6(MpegEncContext *s, uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h);
av_cold void ff_me_cmp_init_arm(MECmpContext *c, AVCodecContext *avctx)
