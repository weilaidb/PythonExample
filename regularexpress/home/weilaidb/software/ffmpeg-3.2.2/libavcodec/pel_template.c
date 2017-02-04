DEF_PEL                                             \
FUNCC(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
FUNCC(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
FUNCC(uint8_t *block,            \
const uint8_t *pixels,     \
ptrdiff_t line_size,       \
int h)                     \
\
\
CALL_2X_PIXELS(FUNCC(OPNAME ## _pixels16),                              \
FUNCC(OPNAME ## _pixels8),                               \
sizeof)
op_avg a = rnd_avg_pixel4(a, b)
DEF_PEL
DEF_PEL(put, op_put)
#undef op_avg
#undef op_put
