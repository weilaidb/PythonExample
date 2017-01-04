#define DEF_PEL(OPNAME, OP)                                             \
static inline void FUNCC(OPNAME ## _pixels2)(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void FUNCC(OPNAME ## _pixels4)(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
static inline void FUNCC(OPNAME ## _pixels8)(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
CALL_2X_PIXELS(FUNCC(OPNAME ## _pixels16),                              \
FUNCC(OPNAME ## _pixels8),                               \
8 * sizeof(pixel))
#define op_avg(a, b) a = rnd_avg_pixel4(a, b)
#define op_put(a, b) a = b
DEF_PEL(avg, op_avg)
DEF_PEL(put, op_put)
#undef op_avg
#undef op_put
