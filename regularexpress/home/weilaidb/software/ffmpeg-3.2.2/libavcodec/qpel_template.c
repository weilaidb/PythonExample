PIXOP2                                              \
static inline void OPNAME ## _no_rnd_pixels8_l2_8(uint8_t *dst,         \
const uint8_t *src1,  \
const uint8_t *src2,  \
int dst_stride,       \
int src_stride1,      \
int src_stride2,      \
int h)                \
\
\
static inline void OPNAME ## _no_rnd_pixels16_l2_8(uint8_t *dst,        \
const uint8_t *src1, \
const uint8_t *src2, \
int dst_stride,      \
int src_stride1,     \
int src_stride2,     \
int h)               \
\
\
static inline void OPNAME ## _pixels8_l4_8(uint8_t *dst,                \
const uint8_t *src1,         \
const uint8_t *src2,         \
const uint8_t *src3,         \
const uint8_t *src4,         \
int dst_stride,              \
int src_stride1,             \
int src_stride2,             \
int src_stride3,             \
int src_stride4,             \
int h)                       \
\
\
static inline void OPNAME ## _no_rnd_pixels8_l4_8(uint8_t *dst,         \
const uint8_t *src1,  \
const uint8_t *src2,  \
const uint8_t *src3,  \
const uint8_t *src4,  \
int dst_stride,       \
int src_stride1,      \
int src_stride2,      \
int src_stride3,      \
int src_stride4,      \
int h)                \
\
\
static inline void OPNAME ## _pixels16_l4_8(uint8_t *dst,               \
const uint8_t *src1,        \
const uint8_t *src2,        \
const uint8_t *src3,        \
const uint8_t *src4,        \
int dst_stride,             \
int src_stride1,            \
int src_stride2,            \
int src_stride3,            \
int src_stride4,            \
int h)                      \
\
\
static inline void OPNAME ## _no_rnd_pixels16_l4_8(uint8_t *dst,        \
const uint8_t *src1, \
const uint8_t *src2, \
const uint8_t *src3, \
const uint8_t *src4, \
int dst_stride,      \
int src_stride1,     \
int src_stride2,     \
int src_stride3,     \
int src_stride4,     \
int h)               \
\
op_avg a = rnd_avg32(a, b)
op_put a = b
PIXOP2
PIXOP2(put, op_put)
#undef op_avg
#undef op_put
