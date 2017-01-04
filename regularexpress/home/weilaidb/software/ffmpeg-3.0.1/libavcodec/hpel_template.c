#define DEF_HPEL(OPNAME, OP)                                            \
static inline void FUNC(OPNAME ## _pixels8_l2)(uint8_t *dst,            \
const uint8_t *src1,     \
const uint8_t *src2,     \
int dst_stride,          \
int src_stride1,         \
int src_stride2,         \
int h)                   \
\
\
static inline void FUNC(OPNAME ## _pixels4_l2)(uint8_t *dst,            \
const uint8_t *src1,     \
const uint8_t *src2,     \
int dst_stride,          \
int src_stride1,         \
int src_stride2,         \
int h)                   \
\
\
static inline void FUNC(OPNAME ## _pixels2_l2)(uint8_t *dst,            \
const uint8_t *src1,     \
const uint8_t *src2,     \
int dst_stride,          \
int src_stride1,         \
int src_stride2,         \
int h)                   \
\
\
static inline void FUNC(OPNAME ## _pixels16_l2)(uint8_t *dst,           \
const uint8_t *src1,    \
const uint8_t *src2,    \
int dst_stride,         \
int src_stride1,        \
int src_stride2,        \
int h)                  \
\
#define op_avg(a, b) a = rnd_avg_pixel4(a, b)
#define op_put(a, b) a = b
DEF_HPEL(avg, op_avg)
DEF_HPEL(put, op_put)
#undef op_avg
#undef op_put
