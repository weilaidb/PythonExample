RV30_LOWPASS \
static void OPNAME ## rv30_tpel8_h_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, const int C1, const int C2)\
\
static void OPNAME ## rv30_tpel8_v_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, const int C1, const int C2)\
\
static void OPNAME ## rv30_tpel8_hv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel8_hhv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel8_hvv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel8_hhvv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel16_v_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, const int C1, const int C2)\
\
static void OPNAME ## rv30_tpel16_h_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride, const int C1, const int C2)\
\
static void OPNAME ## rv30_tpel16_hv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel16_hhv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel16_hvv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## rv30_tpel16_hhvv_lowpass(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
RV30_MC \
static void OPNAME ## rv30_tpel ## SIZE ## _mc10_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc20_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc01_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc02_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc11_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc12_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc21_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## rv30_tpel ## SIZE ## _mc22_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
op_avg  a = (((a)+cm[b]+1)>>1)
op_put  a = cm[b]
RV30_LOWPASS(put_       , op_put)
RV30_LOWPASS(avg_       , op_avg)
RV30_MC(put_, 8)
RV30_MC(put_, 16)
RV30_MC(avg_, 8)
RV30_MC(avg_, 16)
ff_rv30dsp_init
