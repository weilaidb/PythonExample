#define BIT_DEPTH 8
#define PIXOP2(OPNAME, OP)                                              \
static inline void OPNAME ## _no_rnd_pixels8_l2_8(uint8_t *dst,         \
const uint8_t *src1,  \
const uint8_t *src2,  \
int dst_stride,       \
int src_stride1,      \
int src_stride2,      \
int h)                \
\
\
static inline void OPNAME ## _no_rnd_pixels8_x2_8_c(uint8_t *block,     \
const uint8_t *pixels, \
ptrdiff_t line_size, \
int h)              \
\
\
static inline void OPNAME ## _pixels8_x2_8_c(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void OPNAME ## _no_rnd_pixels8_y2_8_c(uint8_t *block,     \
const uint8_t *pixels, \
ptrdiff_t line_size, \
int h)              \
\
\
static inline void OPNAME ## _pixels8_y2_8_c(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void OPNAME ## _pixels4_x2_8_c(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void OPNAME ## _pixels4_y2_8_c(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void OPNAME ## _pixels2_x2_8_c(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void OPNAME ## _pixels2_y2_8_c(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void OPNAME ## _pixels2_xy2_8_c(uint8_t *block,           \
const uint8_t *pixels,    \
ptrdiff_t line_size,      \
int h)                    \
\
\
static inline void OPNAME ## _pixels4_xy2_8_c(uint8_t *block,           \
const uint8_t *pixels,    \
ptrdiff_t line_size,      \
int h)                    \
\
\
static inline void OPNAME ## _pixels8_xy2_8_c(uint8_t *block,           \
const uint8_t *pixels,    \
ptrdiff_t line_size,      \
int h)                    \
\
\
static inline void OPNAME ## _no_rnd_pixels8_xy2_8_c(uint8_t *block,    \
const uint8_t *pixels, \
ptrdiff_t line_size, \
int h)             \
\
\
CALL_2X_PIXELS(OPNAME ## _pixels16_x2_8_c,                              \
OPNAME ## _pixels8_x2_8_c,                               \
8)                                                       \
CALL_2X_PIXELS(OPNAME ## _pixels16_y2_8_c,                              \
OPNAME ## _pixels8_y2_8_c,                               \
8)                                                       \
CALL_2X_PIXELS(OPNAME ## _pixels16_xy2_8_c,                             \
OPNAME ## _pixels8_xy2_8_c,                              \
8)                                                       \
CALL_2X_PIXELS(OPNAME ## _no_rnd_pixels16_8_c,                          \
OPNAME ## _pixels8_8_c,                                  \
8)                                                       \
CALL_2X_PIXELS(OPNAME ## _no_rnd_pixels16_x2_8_c,                       \
OPNAME ## _no_rnd_pixels8_x2_8_c,                        \
8)                                                       \
CALL_2X_PIXELS(OPNAME ## _no_rnd_pixels16_y2_8_c,                       \
OPNAME ## _no_rnd_pixels8_y2_8_c,                        \
8)                                                       \
CALL_2X_PIXELS(OPNAME ## _no_rnd_pixels16_xy2_8_c,                      \
OPNAME ## _no_rnd_pixels8_xy2_8_c,                       \
8)                                                       \
#define op_avg(a, b) a = rnd_avg32(a, b)
#define op_put(a, b) a = b
#define put_no_rnd_pixels8_8_c put_pixels8_8_c
PIXOP2(avg, op_avg)
PIXOP2(put, op_put)
#undef op_avg
#undef op_put
av_cold void ff_hpeldsp_init(HpelDSPContext *c, int flags)
