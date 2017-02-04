ff_sum_abs_dctelem_mmx;
ff_sum_abs_dctelem_mmxext;
ff_sum_abs_dctelem_sse2;
ff_sum_abs_dctelem_ssse3;
ff_sse8_mmx;
ff_sse16_mmx;
ff_sse16_sse2;
ff_hf_noise8_mmx;
ff_hf_noise16_mmx;
ff_sad8_mmxext;
ff_sad16_mmxext;
ff_sad16_sse2;
ff_sad8_x2_mmxext;
ff_sad16_x2_mmxext;
ff_sad16_x2_sse2;
ff_sad8_y2_mmxext;
ff_sad16_y2_mmxext;
ff_sad16_y2_sse2;
ff_sad8_approx_xy2_mmxext;
ff_sad16_approx_xy2_mmxext;
ff_sad16_approx_xy2_sse2;
ff_vsad_intra8_mmxext;
ff_vsad_intra16_mmxext;
ff_vsad_intra16_sse2;
ff_vsad8_approx_mmxext;
ff_vsad16_approx_mmxext;
ff_vsad16_approx_sse2;
hadamard_func                                                    \
int ff_hadamard8_diff_ ## cpu(MpegEncContext *s, uint8_t *src1,           \
uint8_t *src2, ptrdiff_t stride, int h);    \
int ff_hadamard8_diff16_ ## cpu(MpegEncContext *s, uint8_t *src1,         \
uint8_t *src2, ptrdiff_t stride, int h);
hadamard_func(mmx)
hadamard_func(mmxext)
hadamard_func(sse2)
hadamard_func(ssse3)
#if HAVE_YASM
nsse16_mmx
nsse8_mmx
#if HAVE_INLINE_ASM
vsad_intra16_mmx
#undef SUM
vsad16_mmx
DECLARE_ASM_CONST[3] = ;
sad8_1_mmx
sad8_2_mmx
sad8_4_mmx
sum_mmx
sad8_x2a_mmx
sad8_y2a_mmx
PIX_SAD                                                    \
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
ff_me_cmp_init_x86
