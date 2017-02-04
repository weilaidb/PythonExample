uint32_t ff_square_tab[512] = ;
sse4_c
sse8_c
sse16_c
sum_abs_dctelem_c
avg2 (((a) + (b) + 1) >> 1)
avg4 (((a) + (b) + (c) + (d) + 2) >> 2)
pix_abs16_c
pix_median_abs16_c
pix_abs16_x2_c
pix_abs16_y2_c
pix_abs16_xy2_c
pix_abs8_c
pix_median_abs8_c
pix_abs8_x2_c
pix_abs8_y2_c
pix_abs8_xy2_c
nsse16_c
nsse8_c
zero_cmp
ff_set_cmp
BUTTERFLY2              \
o1 = (i1) + (i2);                           \
o2 = (i1) - (i2);
BUTTERFLY1                        \
BUTTERFLYA (FFABS((x) + (y)) + FFABS((x) - (y)))
hadamard8_diff8x8_c
hadamard8_intra8x8_c
dct_sad8x8_c
#if CONFIG_GPL
#define DCT8_1D                                         \
dct264_sad8x8_c
dct_max8x8_c
quant_psnr8x8_c
rd8x8_c
bit8x8_c
VSAD_INTRA                                                \
static int vsad_intra ## size ## _c(MpegEncContext *c,                  \
uint8_t *s, uint8_t *dummy,         \
ptrdiff_t stride, int h)            \
VSAD_INTRA(8)
VSAD_INTRA(16)
VSAD                                                             \
static int vsad ## size ## _c(MpegEncContext *c,                               \
uint8_t *s1, uint8_t *s2,                        \
ptrdiff_t stride, int h)                               \
VSAD(8)
VSAD(16)
SQ ((a) * (a))
VSSE_INTRA                                                \
static int vsse_intra ## size ## _c(MpegEncContext *c,                  \
uint8_t *s, uint8_t *dummy,         \
ptrdiff_t stride, int h)            \
VSSE_INTRA(8)
VSSE_INTRA(16)
VSSE                                                             \
static int vsse ## size ## _c(MpegEncContext *c, uint8_t *s1, uint8_t *s2,     \
ptrdiff_t stride, int h)                         \
VSSE(8)
VSSE(16)
WRAPPER8_16_SQ                                   \
name16                              \
WRAPPER8_16_SQ(hadamard8_diff8x8_c, hadamard8_diff16_c)
WRAPPER8_16_SQ(hadamard8_intra8x8_c, hadamard8_intra16_c)
WRAPPER8_16_SQ(dct_sad8x8_c, dct_sad16_c)
WRAPPER8_16_SQ
WRAPPER8_16_SQ
WRAPPER8_16_SQ(quant_psnr8x8_c, quant_psnr16_c)
WRAPPER8_16_SQ(rd8x8_c, rd16_c)
WRAPPER8_16_SQ(bit8x8_c, bit16_c)
ff_me_cmp_init_static
ff_check_alignment
ff_me_cmp_init
