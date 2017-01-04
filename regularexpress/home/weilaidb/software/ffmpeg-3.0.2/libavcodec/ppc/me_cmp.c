#if HAVE_ALTIVEC_H
#if HAVE_ALTIVEC
#if HAVE_BIGENDIAN
#define GET_PERM(per1, per2, pix)
#define LOAD_PIX(v, iv, pix, per1, per2)
#define GET_PERM(per1, per2, pix)
#define LOAD_PIX(v, iv, pix, per1, per2)
static int sad16_x2_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sad16_y2_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sad16_xy2_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sad16_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sad8_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sse8_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sse16_altivec(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int hadamard8_diff8x8_altivec(MpegEncContext *s, uint8_t *dst,
uint8_t *src, ptrdiff_t stride, int h)
static int hadamard8_diff16x8_altivec(MpegEncContext *s, uint8_t *dst,
uint8_t *src, ptrdiff_t stride, int h)
static int hadamard8_diff16_altivec(MpegEncContext *s, uint8_t *dst,
uint8_t *src, ptrdiff_t stride, int h)
av_cold void ff_me_cmp_init_ppc(MECmpContext *c, AVCodecContext *avctx)
