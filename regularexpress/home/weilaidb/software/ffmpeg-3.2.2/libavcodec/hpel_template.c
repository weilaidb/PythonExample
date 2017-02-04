DEF_HPEL                                            \
FUNC(uint8_t *dst,            \
const uint8_t *src1,     \
const uint8_t *src2,     \
int dst_stride,          \
int src_stride1,         \
int src_stride2,         \
int h)                   \
\
\
FUNC(uint8_t *dst,            \
const uint8_t *src1,     \
const uint8_t *src2,     \
int dst_stride,          \
int src_stride1,         \
int src_stride2,         \
int h)                   \
\
\
FUNC(uint8_t *dst,            \
const uint8_t *src1,     \
const uint8_t *src2,     \
int dst_stride,          \
int src_stride1,         \
int src_stride2,         \
int h)                   \
\
\
FUNC(uint8_t *dst,           \
const uint8_t *src1,    \
const uint8_t *src2,    \
int dst_stride,         \
int src_stride1,        \
int src_stride2,        \
int h)                  \
\
op_avg a = rnd_avg_pixel4(a, b)
DEF_HPEL
DEF_HPEL(put, op_put)
#undef op_avg
#undef op_put
