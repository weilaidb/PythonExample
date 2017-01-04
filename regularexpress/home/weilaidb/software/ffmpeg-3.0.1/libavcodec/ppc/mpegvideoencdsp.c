#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
#if HAVE_VSX
static int pix_norm1_altivec(uint8_t *pix, int line_size)
static int pix_norm1_altivec(uint8_t *pix, int line_size)
#if HAVE_VSX
static int pix_sum_altivec(uint8_t *pix, int line_size)
static int pix_sum_altivec(uint8_t *pix, int line_size)
av_cold void ff_mpegvideoencdsp_init_ppc(MpegvideoEncDSPContext *c,
AVCodecContext *avctx)
