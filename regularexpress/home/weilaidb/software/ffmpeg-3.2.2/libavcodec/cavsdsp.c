#define P2 p0_p[-3*stride]
#define P1 p0_p[-2*stride]
#define P0 p0_p[-1*stride]
#define Q0 p0_p[ 0*stride]
#define Q1 p0_p[ 1*stride]
#define Q2 p0_p[ 2*stride]
loop_filter_l2
loop_filter_l1
loop_filter_c2
loop_filter_c1
#undef P0
#undef P1
#undef P2
#undef Q0
#undef Q1
#undef Q2
cavs_filter_lv_c
cavs_filter_lh_c
cavs_filter_cv_c
cavs_filter_ch_c
cavs_idct8_add_c
CAVS_SUBPIX \
static void OPNAME ## cavs_filt8_h_ ## NAME(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_filt8_v_  ## NAME(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_filt16_v_ ## NAME(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_filt16_h_ ## NAME(uint8_t *dst, const uint8_t *src, int dstStride, int srcStride)\
CAVS_SUBPIX_HV \
static void OPNAME ## cavs_filt8_hv_ ## NAME(uint8_t *dst, const uint8_t *src1, const uint8_t *src2, int dstStride, int srcStride)\
\
static void OPNAME ## cavs_filt16_hv_ ## NAME(uint8_t *dst, const uint8_t *src1, const uint8_t *src2, int dstStride, int srcStride)\
CAVS_MC \
static void OPNAME ## cavs_qpel ## SIZE ## _mc10_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc20_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc30_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc01_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc02_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc03_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc22_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc11_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc13_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc31_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc33_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc21_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc12_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc32_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
\
static void OPNAME ## cavs_qpel ## SIZE ## _mc23_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride)\
\
op_put1  a = cm[((b)+4)>>3]
op_put2  a = cm[((b)+64)>>7]
op_put3  a = cm[((b)+32)>>6]
op_put4  a = cm[((b)+512)>>10]
op_avg1  a = ((a)+cm[((b)+4)>>3]   +1)>>1
op_avg2  a = ((a)+cm[((b)+64)>>7]  +1)>>1
op_avg3  a = ((a)+cm[((b)+32)>>6]  +1)>>1
CAVS_SUBPIX
CAVS_SUBPIX(put_   , op_put2, qpel_l, -1, -2, 96, 42, -7,  0)
CAVS_SUBPIX(put_   , op_put2, qpel_r,  0, -7, 42, 96, -2, -1)
CAVS_SUBPIX_HV(put_, op_put3, jj,      0, -1,  5,  5, -1,  0,  0, -1,  5,  5, -1, 0, 0)
CAVS_SUBPIX_HV(put_, op_put4, ff,      0, -1,  5,  5, -1,  0, -1, -2, 96, 42, -7, 0, 0)
CAVS_SUBPIX_HV(put_, op_put4, ii,     -1, -2, 96, 42, -7,  0,  0, -1,  5,  5, -1, 0, 0)
CAVS_SUBPIX_HV(put_, op_put4, kk,      0, -7, 42, 96, -2, -1,  0, -1,  5,  5, -1, 0, 0)
CAVS_SUBPIX_HV(put_, op_put4, qq,      0, -1,  5,  5, -1,  0,  0, -7, 42, 96, -2,-1, 0)
CAVS_SUBPIX_HV(put_, op_put2, egpr,    0, -1,  5,  5, -1,  0,  0, -1,  5,  5, -1, 0, 1)
CAVS_SUBPIX(avg_   , op_avg1, hpel,    0, -1,  5,  5, -1,  0)
CAVS_SUBPIX(avg_   , op_avg2, qpel_l, -1, -2, 96, 42, -7,  0)
CAVS_SUBPIX(avg_   , op_avg2, qpel_r,  0, -7, 42, 96, -2, -1)
CAVS_SUBPIX_HV(avg_, op_avg3, jj,      0, -1,  5,  5, -1,  0,  0, -1,  5,  5, -1, 0, 0)
CAVS_SUBPIX_HV(avg_, op_avg4, ff,      0, -1,  5,  5, -1,  0, -1, -2, 96, 42, -7, 0, 0)
CAVS_SUBPIX_HV(avg_, op_avg4, ii,     -1, -2, 96, 42, -7,  0,  0, -1,  5,  5, -1, 0, 0)
CAVS_SUBPIX_HV(avg_, op_avg4, kk,      0, -7, 42, 96, -2, -1,  0, -1,  5,  5, -1, 0, 0)
CAVS_SUBPIX_HV(avg_, op_avg4, qq,      0, -1,  5,  5, -1,  0,  0, -7, 42, 96, -2,-1, 0)
CAVS_SUBPIX_HV(avg_, op_avg2, egpr,    0, -1,  5,  5, -1,  0,  0, -1,  5,  5, -1, 0, 1)
CAVS_MC(put_, 8)
CAVS_MC(put_, 16)
CAVS_MC(avg_, 8)
CAVS_MC(avg_, 16)
#define put_cavs_qpel8_mc00_c  ff_put_pixels8x8_c
#define avg_cavs_qpel8_mc00_c  ff_avg_pixels8x8_c
#define put_cavs_qpel16_mc00_c ff_put_pixels16x16_c
#define avg_cavs_qpel16_mc00_c ff_avg_pixels16x16_c
ff_cavsdsp_init
