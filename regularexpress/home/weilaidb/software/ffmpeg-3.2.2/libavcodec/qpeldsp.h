#define AVCODEC_QPELDSP_H
void ff_put_pixels8x8_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride);
void ff_avg_pixels8x8_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride);
void ff_put_pixels16x16_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride);
void ff_avg_pixels16x16_c(uint8_t *dst, const uint8_t *src, ptrdiff_t stride);
void ff_put_pixels8_l2_8(uint8_t *dst, const uint8_t *src1, const uint8_t *src2,
int dst_stride, int src_stride1, int src_stride2,
int h);
#define DEF_OLD_QPEL(name)                                              \
void ff_put_        ## name(uint8_t *dst,   \
const uint8_t *src,           \
ptrdiff_t stride);                          \
void ff_put_no_rnd_ ## name(uint8_t *dst,   \
const uint8_t *src,           \
ptrdiff_t stride);                          \
void ff_avg_        ## name(uint8_t *dst,   \
const uint8_t *src,           \
ptrdiff_t stride);
DEF_OLD_QPEL(qpel16_mc11_old_c)
DEF_OLD_QPEL(qpel16_mc31_old_c)
DEF_OLD_QPEL(qpel16_mc12_old_c)
DEF_OLD_QPEL(qpel16_mc32_old_c)
DEF_OLD_QPEL(qpel16_mc13_old_c)
DEF_OLD_QPEL(qpel16_mc33_old_c)
DEF_OLD_QPEL(qpel8_mc11_old_c)
DEF_OLD_QPEL(qpel8_mc31_old_c)
DEF_OLD_QPEL(qpel8_mc12_old_c)
DEF_OLD_QPEL(qpel8_mc32_old_c)
DEF_OLD_QPEL(qpel8_mc13_old_c)
DEF_OLD_QPEL(qpel8_mc33_old_c)
typedef void (*qpel_mc_func)(uint8_t *dst,
const uint8_t *src,
ptrdiff_t stride);
typedef struct QpelDSPContext  QpelDSPContext;
void ff_qpeldsp_init(QpelDSPContext *c);
void ff_qpeldsp_init_x86(QpelDSPContext *c);
void ff_qpeldsp_init_mips(QpelDSPContext *c);
