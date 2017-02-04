RV40_LOWPASS \
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
RV40_MC \
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
op_avg  a = (((a)+cm[b]+1)>>1)
op_put  a = cm[b]
RV40_LOWPASS(put_       , op_put)
RV40_LOWPASS(avg_       , op_avg)
#undef op_avg
RV40_MC
RV40_MC(put_, 16)
RV40_MC(avg_, 8)
RV40_MC(avg_, 16)
PIXOP2                                              \
static inline void OPNAME ## _pixels8_xy2_8_c(uint8_t *block,           \
const uint8_t *pixels,    \
ptrdiff_t line_size,      \
int h)                    \
\
\
CALL_2X_PIXELS(OPNAME ## _pixels16_xy2_8_c,                             \
OPNAME ## _pixels8_xy2_8_c,                              \
8)                                                       \
op_avg a = rnd_avg32(a, b)
PIXOP2
PIXOP2(put, op_put)
#undef op_avg
#undef op_put
put_rv40_qpel16_mc33_c
avg_rv40_qpel16_mc33_c
put_rv40_qpel8_mc33_c
avg_rv40_qpel8_mc33_c
static const int rv40_bias[4][4] = ;
RV40_CHROMA_MC\
static void OPNAME ## rv40_chroma_mc4_c(uint8_t *dst, uint8_t *src, int stride, int h, int x, int y)\
\
static void OPNAME ## rv40_chroma_mc8_c(uint8_t *dst, uint8_t *src, int stride, int h, int x, int y)
op_avg a = (((a)+((b)>>6)+1)>>1)
op_put a = ((b)>>6)
RV40_CHROMA_MC(put_, op_put)
RV40_CHROMA_MC(avg_, op_avg)
RV40_WEIGHT_FUNC \
static void rv40_weight_func_rnd_ ## size (uint8_t *dst, uint8_t *src1, uint8_t *src2, int w1, int w2, ptrdiff_t stride)\
\
static void rv40_weight_func_nornd_ ## size (uint8_t *dst, uint8_t *src1, uint8_t *src2, int w1, int w2, ptrdiff_t stride)\
RV40_WEIGHT_FUNC(16)
RV40_WEIGHT_FUNC(8)
static const uint8_t rv40_dither_l[16] = ;
static const uint8_t rv40_dither_r[16] = ;
CLIP_SYMM av_clip(a, -(b), b)
rv40_weak_loop_filter
rv40_h_weak_loop_filter
rv40_v_weak_loop_filter
rv40_strong_loop_filter
rv40_h_strong_loop_filter
rv40_v_strong_loop_filter
rv40_loop_filter_strength
rv40_h_loop_filter_strength
rv40_v_loop_filter_strength
ff_rv40dsp_init
