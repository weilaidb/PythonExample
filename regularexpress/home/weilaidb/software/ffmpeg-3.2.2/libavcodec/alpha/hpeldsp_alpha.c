avg2_no_rnd
avg2
OP                         \
do  while (--h)
OP_X2                                      \
do  while (--h)
OP_Y2                      \
do  while (0)
OP_XY2                                                 \
do  while (0)
MAKE_OP                                \
static void OPNAME ## _pixels ## SUFF ## _axp                               \
(uint8_t *restrict block, const uint8_t *restrict pixels,           \
ptrdiff_t line_size, int h)                                        \
\
\
static void OPNAME ## _pixels16 ## SUFF ## _axp                             \
(uint8_t *restrict block, const uint8_t *restrict pixels,           \
ptrdiff_t line_size, int h)                                        \
PIXOP                    \
MAKE_OP(OPNAME, ,     OP,     STORE)        \
MAKE_OP(OPNAME, _x2,  OP_X2,  STORE)        \
MAKE_OP(OPNAME, _y2,  OP_Y2,  STORE)        \
MAKE_OP(OPNAME, _xy2, OP_XY2, STORE)
#define AVG2 avg2
#define AVG4 avg4
BYTE_VEC
STORE stq(l, b)
PIXOP(put, STORE);
#undef STORE
STORE stq(AVG2(l, ldq(b)), b);
PIXOP(avg, STORE);
#undef AVG2
#undef AVG4
#undef AVG4_ROUNDER
#undef STORE
#define AVG2 avg2_no_rnd
#define AVG4 avg4_no_rnd
BYTE_VEC
STORE stq(l, b)
PIXOP(put_no_rnd, STORE);
#undef STORE
STORE stq(AVG2(l, ldq(b)), b);
PIXOP(avg_no_rnd, STORE);
put_pixels16_axp_asm
ff_hpeldsp_init_alpha
