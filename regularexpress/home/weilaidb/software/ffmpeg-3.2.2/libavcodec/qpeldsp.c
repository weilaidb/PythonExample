#define BIT_DEPTH 8
QPEL_MC                                           \
static void OPNAME ## mpeg4_qpel8_h_lowpass(uint8_t *dst, const uint8_t *src, \
int dstStride, int srcStride,     \
int h)                            \
\
\
static void OPNAME ## mpeg4_qpel8_v_lowpass(uint8_t *dst, const uint8_t *src, \
int dstStride, int srcStride)     \
\
\
static void OPNAME ## mpeg4_qpel16_h_lowpass(uint8_t *dst,                    \
const uint8_t *src,              \
int dstStride, int srcStride,    \
int h)                           \
\
\
static void OPNAME ## mpeg4_qpel16_v_lowpass(uint8_t *dst,                    \
const uint8_t *src,              \
int dstStride, int srcStride)    \
\
\
static void OPNAME ## qpel8_mc10_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc20_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc30_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc01_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc02_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc03_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
void ff_ ## OPNAME ## qpel8_mc11_old_c(uint8_t *dst, const uint8_t *src,      \
ptrdiff_t stride)                      \
\
\
static void OPNAME ## qpel8_mc11_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
void ff_ ## OPNAME ## qpel8_mc31_old_c(uint8_t *dst, const uint8_t *src,      \
ptrdiff_t stride)                      \
\
\
static void OPNAME ## qpel8_mc31_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
void ff_ ## OPNAME ## qpel8_mc13_old_c(uint8_t *dst, const uint8_t *src,      \
ptrdiff_t stride)                      \
\
\
static void OPNAME ## qpel8_mc13_c(uint8_t *dst, const uint8_t *src,    \
ptrdiff_t stride)                          \
\
\
void ff_ ## OPNAME ## qpel8_mc33_old_c(uint8_t *dst, const uint8_t *src,      \
ptrdiff_t stride)                      \
\
\
static void OPNAME ## qpel8_mc33_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc21_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc23_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
void ff_ ## OPNAME ## qpel8_mc12_old_c(uint8_t *dst, const uint8_t *src,      \
ptrdiff_t stride)                      \
\
\
static void OPNAME ## qpel8_mc12_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
void ff_ ## OPNAME ## qpel8_mc32_old_c(uint8_t *dst, const uint8_t *src,      \
ptrdiff_t stride)                      \
\
\
static void OPNAME ## qpel8_mc32_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel8_mc22_c(uint8_t *dst, const uint8_t *src,          \
ptrdiff_t stride)                          \
\
\
static void OPNAME ## qpel16_mc10_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc20_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc30_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc01_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc02_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc03_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
void ff_ ## OPNAME ## qpel16_mc11_old_c(uint8_t *dst, const uint8_t *src,     \
ptrdiff_t stride)                     \
\
\
static void OPNAME ## qpel16_mc11_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
void ff_ ## OPNAME ## qpel16_mc31_old_c(uint8_t *dst, const uint8_t *src,     \
ptrdiff_t stride)                     \
\
\
static void OPNAME ## qpel16_mc31_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
void ff_ ## OPNAME ## qpel16_mc13_old_c(uint8_t *dst, const uint8_t *src,     \
ptrdiff_t stride)                     \
\
\
static void OPNAME ## qpel16_mc13_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
void ff_ ## OPNAME ## qpel16_mc33_old_c(uint8_t *dst, const uint8_t *src,     \
ptrdiff_t stride)                     \
\
\
static void OPNAME ## qpel16_mc33_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc21_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc23_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
void ff_ ## OPNAME ## qpel16_mc12_old_c(uint8_t *dst, const uint8_t *src,     \
ptrdiff_t stride)                     \
\
\
static void OPNAME ## qpel16_mc12_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
void ff_ ## OPNAME ## qpel16_mc32_old_c(uint8_t *dst, const uint8_t *src,     \
ptrdiff_t stride)                     \
\
\
static void OPNAME ## qpel16_mc32_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
\
\
static void OPNAME ## qpel16_mc22_c(uint8_t *dst, const uint8_t *src,         \
ptrdiff_t stride)                         \
op_avg        a = (((a) + cm[((b) + 16) >> 5] + 1) >> 1)
op_put        a = cm[((b) + 16) >> 5]
op_put_no_rnd a = cm[((b) + 15) >> 5]
QPEL_MC(0, put_, _, op_put)
QPEL_MC(1, put_no_rnd_, _no_rnd_, op_put_no_rnd)
QPEL_MC(0, avg_, _, op_avg)
#undef op_avg
#undef op_put
#undef op_put_no_rnd
ff_put_pixels8x8_c
ff_avg_pixels8x8_c
ff_put_pixels16x16_c
ff_avg_pixels16x16_c
#define put_qpel8_mc00_c         ff_put_pixels8x8_c
#define avg_qpel8_mc00_c         ff_avg_pixels8x8_c
#define put_qpel16_mc00_c        ff_put_pixels16x16_c
#define avg_qpel16_mc00_c        ff_avg_pixels16x16_c
#define put_no_rnd_qpel8_mc00_c  ff_put_pixels8x8_c
#define put_no_rnd_qpel16_mc00_c ff_put_pixels16x16_c
ff_put_pixels8_l2_8
#if CONFIG_DIRAC_DECODER
DIRAC_MC\
void ff_ ## OPNAME ## _dirac_pixels8_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels16_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels32_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels8_l2_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels16_l2_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels32_l2_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels8_l4_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels16_l4_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
\
void ff_ ## OPNAME ## _dirac_pixels32_l4_c(uint8_t *dst, const uint8_t *src[5], int stride, int h)\
DIRAC_MC(put)
DIRAC_MC(avg)
ff_qpeldsp_init
