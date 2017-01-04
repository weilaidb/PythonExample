#define RV40_LOWPASS(OPNAME, OP) \
static void OPNAME ## rv40_qpel8_h_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride,\
const int h, const int C1, const int C2, const int SHIFT)\
\
static void OPNAME ## rv40_qpel8_v_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride,\
const int w, const int C1, const int C2, const int SHIFT)\
\
static void OPNAME ## rv40_qpel16_v_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride,\
const int w, const int C1, const int C2, const int SHIFT)\
\
static void OPNAME ## rv40_qpel16_h_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride,\
const int h, const int C1, const int C2, const int SHIFT)\
\
#define RV40_MC(OPNAME, SIZE) \
static void OPNAME ## rv40_qpel ## SIZE ## _mc10_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc30_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc01_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc11_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc21_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc31_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc12_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc22_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc32_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc03_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc13_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv40_qpel ## SIZE ## _mc23_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
#define op_avg(a, b)  a = (((a)+cm[b]+1)>>1)
#define op_put(a, b)  a = cm[b]
RV40_LOWPASS(put_       , op_put)
RV40_LOWPASS(avg_       , op_avg)
#undef op_avg
#undef op_put
RV40_MC(put_, 8)
RV40_MC(put_, 16)
RV40_MC(avg_, 8)
RV40_MC(avg_, 16)
#define PIXOP2(OPNAME, OP)                                              \
static inline void OPNAME ## _pixels8_xy2_8_c(uint8_t *block,           \
const uint8_t *pixels,    \
ptrdiff_t line_size,      \
int h)                    \
\
\
CALL_2X_PIXELS(OPNAME ## _pixels16_xy2_8_c,                             \
OPNAME ## _pixels8_xy2_8_c,                              \
8)                                                       \
#define op_avg(a, b) a = rnd_avg32(a, b)
#define op_put(a, b) a = b
PIXOP2(avg, op_avg)
PIXOP2(put, op_put)
#undef op_avg
#undef op_put
static void put_rv40_qpel16_mc33_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void avg_rv40_qpel16_mc33_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void put_rv40_qpel8_mc33_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static void avg_rv40_qpel8_mc33_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)
static const int rv40_bias[4][4] = ;
#define RV40_CHROMA_MC(OPNAME, OP)\
static void OPNAME ## rv40_chroma_mc4_c(uint8_t *dst, uint8_t *src, int stride, int h, int x, int y)\
\
static void OPNAME ## rv40_chroma_mc8_c(uint8_t *dst, uint8_t *src, int stride, int h, int x, int y)
#define op_avg(a, b) a = (((a)+((b)>>6)+1)>>1)
#define op_put(a, b) a = ((b)>>6)
RV40_CHROMA_MC(put_, op_put)
RV40_CHROMA_MC(avg_, op_avg)
#define RV40_WEIGHT_FUNC(size) \
static void rv40_weight_func_rnd_ ## size (uint8_t *dst, uint8_t *src1, uint8_t *src2, int w1, int w2, ptrdiff_t stride)\
\
static void rv40_weight_func_nornd_ ## size (uint8_t *dst, uint8_t *src1, uint8_t *src2, int w1, int w2, ptrdiff_t stride)\
RV40_WEIGHT_FUNC(16)
RV40_WEIGHT_FUNC(8)
static const uint8_t rv40_dither_l[16] = ;
static const uint8_t rv40_dither_r[16] = ;
#define CLIP_SYMM(a, b) av_clip(a, -(b), b)
static av_always_inline void rv40_weak_loop_filter(uint8_t *src,
const int step,
const ptrdiff_t stride,
const int filter_p1,
const int filter_q1,
const int alpha,
const int beta,
const int lim_p0q0,
const int lim_q1,
const int lim_p1)
static void rv40_h_weak_loop_filter(uint8_t *src, const ptrdiff_t stride,
const int filter_p1, const int filter_q1,
const int alpha, const int beta,
const int lim_p0q0, const int lim_q1,
const int lim_p1)
static void rv40_v_weak_loop_filter(uint8_t *src, const ptrdiff_t stride,
const int filter_p1, const int filter_q1,
const int alpha, const int beta,
const int lim_p0q0, const int lim_q1,
const int lim_p1)
static av_always_inline void rv40_strong_loop_filter(uint8_t *src,
const int step,
const ptrdiff_t stride,
const int alpha,
const int lims,
const int dmode,
const int chroma)
static void rv40_h_strong_loop_filter(uint8_t *src, const ptrdiff_t stride,
const int alpha, const int lims,
const int dmode, const int chroma)
static void rv40_v_strong_loop_filter(uint8_t *src, const ptrdiff_t stride,
const int alpha, const int lims,
const int dmode, const int chroma)
static av_always_inline int rv40_loop_filter_strength(uint8_t *src,
int step, ptrdiff_t stride,
int beta, int beta2,
int edge,
int *p1, int *q1)
static int rv40_h_loop_filter_strength(uint8_t *src, ptrdiff_t stride,
int beta, int beta2, int edge,
int *p1, int *q1)
static int rv40_v_loop_filter_strength(uint8_t *src, ptrdiff_t stride,
int beta, int beta2, int edge,
int *p1, int *q1)
av_cold void ff_rv40dsp_init(RV34DSPContext *c)
