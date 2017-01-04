int ff_pix_norm1_armv6(uint8_t *pix, int line_size);
int ff_pix_sum_armv6(uint8_t *pix, int line_size);
av_cold void ff_mpegvideoencdsp_init_arm(MpegvideoEncDSPContext *c,
AVCodecContext *avctx)
