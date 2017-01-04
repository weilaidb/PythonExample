int ff_sum_abs_dctelem_mmx(int16_t *block);
int ff_sum_abs_dctelem_mmxext(int16_t *block);
int ff_sum_abs_dctelem_sse2(int16_t *block);
int ff_sum_abs_dctelem_ssse3(int16_t *block);
int ff_sse8_mmx(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sse16_mmx(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sse16_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_hf_noise8_mmx(uint8_t *pix1, ptrdiff_t stride, int h);
int ff_hf_noise16_mmx(uint8_t *pix1, ptrdiff_t stride, int h);
int ff_sad8_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad8_x2_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_x2_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_x2_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad8_y2_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_y2_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_y2_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad8_approx_xy2_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_approx_xy2_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_sad16_approx_xy2_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_vsad_intra8_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_vsad_intra16_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_vsad_intra16_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_vsad8_approx_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_vsad16_approx_mmxext(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
int ff_vsad16_approx_sse2(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h);
#define hadamard_func(cpu)                                                    \
int ff_hadamard8_diff_ ## cpu(MpegEncContext *s, uint8_t *src1,           \
uint8_t *src2, ptrdiff_t stride, int h);    \
int ff_hadamard8_diff16_ ## cpu(MpegEncContext *s, uint8_t *src1,         \
uint8_t *src2, ptrdiff_t stride, int h);
hadamard_func(mmx)
hadamard_func(mmxext)
hadamard_func(sse2)
hadamard_func(ssse3)
#if HAVE_YASM
static int nsse16_mmx(MpegEncContext *c, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
static int nsse8_mmx(MpegEncContext *c, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
#if HAVE_INLINE_ASM
static int vsad_intra16_mmx(MpegEncContext *v, uint8_t *pix, uint8_t *dummy,
ptrdiff_t stride, int h)
#undef SUM
static int vsad16_mmx(MpegEncContext *v, uint8_t *pix1, uint8_t *pix2,
ptrdiff_t stride, int h)
#undef SUM
DECLARE_ASM_CONST(8, uint64_t, round_tab)[3] = ;
static inline void sad8_1_mmx(uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h)
static inline void sad8_2_mmx(uint8_t *blk1a, uint8_t *blk1b, uint8_t *blk2,
ptrdiff_t stride, int h)
static inline void sad8_4_mmx(uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h)
static inline int sum_mmx(void)
static inline void sad8_x2a_mmx(uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h)
static inline void sad8_y2a_mmx(uint8_t *blk1, uint8_t *blk2,
ptrdiff_t stride, int h)
#define PIX_SAD(suf)                                                    \
static int sad8_ ## suf(MpegEncContext *v, uint8_t *blk2,               \
uint8_t *blk1, ptrdiff_t stride, int h)         \
\
\
static int sad8_x2_ ## suf(MpegEncContext *v, uint8_t *blk2,            \
uint8_t *blk1, ptrdiff_t stride, int h)      \
\
\
static int sad8_y2_ ## suf(MpegEncContext *v, uint8_t *blk2,            \
uint8_t *blk1, ptrdiff_t stride, int h)      \
\
\
static int sad8_xy2_ ## suf(MpegEncContext *v, uint8_t *blk2,           \
uint8_t *blk1, ptrdiff_t stride, int h)     \
\
\
static int sad16_ ## suf(MpegEncContext *v, uint8_t *blk2,              \
uint8_t *blk1, ptrdiff_t stride, int h)        \
\
\
static int sad16_x2_ ## suf(MpegEncContext *v, uint8_t *blk2,           \
uint8_t *blk1, ptrdiff_t stride, int h)     \
\
\
static int sad16_y2_ ## suf(MpegEncContext *v, uint8_t *blk2,           \
uint8_t *blk1, ptrdiff_t stride, int h)     \
\
\
static int sad16_xy2_ ## suf(MpegEncContext *v, uint8_t *blk2,          \
uint8_t *blk1, ptrdiff_t stride, int h)    \
\
PIX_SAD(mmx)
av_cold void ff_me_cmp_init_x86(MECmpContext *c, AVCodecContext *avctx)
