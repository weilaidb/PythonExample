void ff_put_pixels8_l2_mmxext(uint8_t *dst,
const uint8_t *src1, const uint8_t *src2,
int dstStride, int src1Stride, int h);
void ff_put_no_rnd_pixels8_l2_mmxext(uint8_t *dst,
const uint8_t *src1, const uint8_t *src2,
int dstStride, int src1Stride, int h);
void ff_avg_pixels8_l2_mmxext(uint8_t *dst,
const uint8_t *src1, const uint8_t *src2,
int dstStride, int src1Stride, int h);
void ff_put_pixels16_l2_mmxext(uint8_t *dst,
const uint8_t *src1, const uint8_t *src2,
int dstStride, int src1Stride, int h);
void ff_avg_pixels16_l2_mmxext(uint8_t *dst,
const uint8_t *src1, const uint8_t *src2,
int dstStride, int src1Stride, int h);
void ff_put_no_rnd_pixels16_l2_mmxext(uint8_t *dst,
const uint8_t *src1, const uint8_t *src2,
int dstStride, int src1Stride, int h);
void ff_put_mpeg4_qpel16_h_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h);
void ff_avg_mpeg4_qpel16_h_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h);
void ff_put_no_rnd_mpeg4_qpel16_h_lowpass_mmxext(uint8_t *dst,
const uint8_t *src,
int dstStride, int srcStride,
int h);
void ff_put_mpeg4_qpel8_h_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h);
void ff_avg_mpeg4_qpel8_h_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride, int h);
void ff_put_no_rnd_mpeg4_qpel8_h_lowpass_mmxext(uint8_t *dst,
const uint8_t *src,
int dstStride, int srcStride,
int h);
void ff_put_mpeg4_qpel16_v_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride);
void ff_avg_mpeg4_qpel16_v_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride);
void ff_put_no_rnd_mpeg4_qpel16_v_lowpass_mmxext(uint8_t *dst,
const uint8_t *src,
int dstStride, int srcStride);
void ff_put_mpeg4_qpel8_v_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride);
void ff_avg_mpeg4_qpel8_v_lowpass_mmxext(uint8_t *dst, const uint8_t *src,
int dstStride, int srcStride);
void ff_put_no_rnd_mpeg4_qpel8_v_lowpass_mmxext(uint8_t *dst,
const uint8_t *src,
int dstStride, int srcStride);
#define ff_put_no_rnd_pixels16_mmxext ff_put_pixels16_mmx
#define ff_put_no_rnd_pixels8_mmxext ff_put_pixels8_mmx
#if HAVE_YASM
#define ff_put_pixels16_mmxext ff_put_pixels16_mmx
#define ff_put_pixels8_mmxext  ff_put_pixels8_mmx
#define QPEL_OP(OPNAME, RND, MMX)                                       \
static void OPNAME ## qpel8_mc00_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc10_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc20_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc30_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc01_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc02_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc03_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc11_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc31_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc13_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc33_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc21_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc23_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc12_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc32_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel8_mc22_ ## MMX(uint8_t *dst,                  \
const uint8_t *src,            \
ptrdiff_t stride)              \
\
\
static void OPNAME ## qpel16_mc00_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc10_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc20_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc30_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc01_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc02_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc03_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc11_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc31_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc13_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc33_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc21_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc23_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc12_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc32_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
\
\
static void OPNAME ## qpel16_mc22_ ## MMX(uint8_t *dst,                 \
const uint8_t *src,           \
ptrdiff_t stride)             \
QPEL_OP(put_,        _,        mmxext)
QPEL_OP(avg_,        _,        mmxext)
QPEL_OP(put_no_rnd_, _no_rnd_, mmxext)
#define SET_QPEL_FUNCS(PFX, IDX, SIZE, CPU, PREFIX)                          \
do  while (0)
av_cold void ff_qpeldsp_init_x86(QpelDSPContext *c)
