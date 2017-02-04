#define AVCODEC_QPELDSP_H
ff_put_pixels8x8_c;
ff_avg_pixels8x8_c;
ff_put_pixels16x16_c;
ff_avg_pixels16x16_c;
ff_put_pixels8_l2_8;
DEF_OLD_QPEL                                              \
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
ff_qpeldsp_init;
ff_qpeldsp_init_x86;
ff_qpeldsp_init_mips;
