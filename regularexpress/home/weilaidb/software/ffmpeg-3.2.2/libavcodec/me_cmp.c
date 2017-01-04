uint32_t ff_square_tab[512] = ;
static int sse4_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sse8_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sse16_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int sum_abs_dctelem_c(int16_t *block)
#define avg2(a, b) (((a) + (b) + 1) >> 1)
#define avg4(a, b, c, d) (((a) + (b) + (c) + (d) + 2) >> 2)
static inline int pix_abs16_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static inline int pix_median_abs16_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int pix_abs16_x2_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int pix_abs16_y2_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int pix_abs16_xy2_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static inline int pix_abs8_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static inline int pix_median_abs8_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int pix_abs8_x2_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int pix_abs8_y2_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int pix_abs8_xy2_c(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int nsse16_c(MpegEncContext *c, uint8_t *s1, uint8_t *s2,
ptrdiff_t stride, int h)
static int nsse8_c(MpegEncContext *c, uint8_t *s1, uint8_t *s2,
ptrdiff_t stride, int h)
static int zero_cmp(MpegEncContext *s, uint8_t *a, uint8_t *b,
ptrdiff_t stride, int h)
void ff_set_cmp(MECmpContext *c, me_cmp_func *cmp, int type)
#define BUTTERFLY2(o1, o2, i1, i2)              \
o1 = (i1) + (i2);                           \
o2 = (i1) - (i2);
#define BUTTERFLY1(x, y)                        \
#define BUTTERFLYA(x, y) (FFABS((x) + (y)) + FFABS((x) - (y)))
static int hadamard8_diff8x8_c(MpegEncContext *s, uint8_t *dst,
uint8_t *src, ptrdiff_t stride, int h)
static int hadamard8_intra8x8_c(MpegEncContext *s, uint8_t *src,
uint8_t *dummy, ptrdiff_t stride, int h)
static int dct_sad8x8_c(MpegEncContext *s, uint8_t *src1,
uint8_t *src2, ptrdiff_t stride, int h)
#if CONFIG_GPL
#define DCT8_1D                                         \
static int dct264_sad8x8_c(MpegEncContext *s, uint8_t *src1,
uint8_t *src2, ptrdiff_t stride, int h)
static int dct_max8x8_c(MpegEncContext *s, uint8_t *src1,
uint8_t *src2, ptrdiff_t stride, int h)
static int quant_psnr8x8_c(MpegEncContext *s, uint8_t *src1,
uint8_t *src2, ptrdiff_t stride, int h)
static int rd8x8_c(MpegEncContext *s, uint8_t *src1, uint8_t *src2,
ptrdiff_t stride, int h)
static int bit8x8_c(MpegEncContext *s, uint8_t *src1, uint8_t *src2,
ptrdiff_t stride, int h)
#define VSAD_INTRA(size)                                                \
static int vsad_intra ## size ## _c(MpegEncContext *c,                  \
uint8_t *s, uint8_t *dummy,         \
ptrdiff_t stride, int h)            \
VSAD_INTRA(8)
VSAD_INTRA(16)
#define VSAD(size)                                                             \
static int vsad ## size ## _c(MpegEncContext *c,                               \
uint8_t *s1, uint8_t *s2,                        \
ptrdiff_t stride, int h)                               \
VSAD(8)
VSAD(16)
#define SQ(a) ((a) * (a))
#define VSSE_INTRA(size)                                                \
static int vsse_intra ## size ## _c(MpegEncContext *c,                  \
uint8_t *s, uint8_t *dummy,         \
ptrdiff_t stride, int h)            \
VSSE_INTRA(8)
VSSE_INTRA(16)
#define VSSE(size)                                                             \
static int vsse ## size ## _c(MpegEncContext *c, uint8_t *s1, uint8_t *s2,     \
ptrdiff_t stride, int h)                         \
VSSE(8)
VSSE(16)
#define WRAPPER8_16_SQ(name8, name16)                                   \
static int name16(MpegEncContext *s, uint8_t *dst, uint8_t *src,        \
ptrdiff_t stride, int h)                              \
WRAPPER8_16_SQ(hadamard8_diff8x8_c, hadamard8_diff16_c)
WRAPPER8_16_SQ(hadamard8_intra8x8_c, hadamard8_intra16_c)
WRAPPER8_16_SQ(dct_sad8x8_c, dct_sad16_c)
#if CONFIG_GPL
WRAPPER8_16_SQ(dct264_sad8x8_c, dct264_sad16_c)
WRAPPER8_16_SQ(dct_max8x8_c, dct_max16_c)
WRAPPER8_16_SQ(quant_psnr8x8_c, quant_psnr16_c)
WRAPPER8_16_SQ(rd8x8_c, rd16_c)
WRAPPER8_16_SQ(bit8x8_c, bit16_c)
av_cold void ff_me_cmp_init_static(void)
int ff_check_alignment(void)
av_cold void ff_me_cmp_init(MECmpContext *c, AVCodecContext *avctx)
