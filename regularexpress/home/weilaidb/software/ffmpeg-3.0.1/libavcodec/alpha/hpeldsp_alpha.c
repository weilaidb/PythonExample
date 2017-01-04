static inline uint64_t avg2_no_rnd(uint64_t a, uint64_t b)
static inline uint64_t avg2(uint64_t a, uint64_t b)
#define OP(LOAD, STORE)                         \
do  while (--h)
#define OP_X2(LOAD, STORE)                                      \
do  while (--h)
#define OP_Y2(LOAD, STORE)                      \
do  while (0)
#define OP_XY2(LOAD, STORE)                                                 \
do  while (0)
#define MAKE_OP(OPNAME, SUFF, OPKIND, STORE)                                \
static void OPNAME ## _pixels ## SUFF ## _axp                               \
(uint8_t *restrict block, const uint8_t *restrict pixels,           \
ptrdiff_t line_size, int h)                                        \
\
\
static void OPNAME ## _pixels16 ## SUFF ## _axp                             \
(uint8_t *restrict block, const uint8_t *restrict pixels,           \
ptrdiff_t line_size, int h)                                        \
#define PIXOP(OPNAME, STORE)                    \
MAKE_OP(OPNAME, ,     OP,     STORE)        \
MAKE_OP(OPNAME, _x2,  OP_X2,  STORE)        \
MAKE_OP(OPNAME, _y2,  OP_Y2,  STORE)        \
MAKE_OP(OPNAME, _xy2, OP_XY2, STORE)
#define AVG2 avg2
#define AVG4 avg4
#define AVG4_ROUNDER BYTE_VEC(0x02)
#define STORE(l, b) stq(l, b)
PIXOP(put, STORE);
#undef STORE
#define STORE(l, b) stq(AVG2(l, ldq(b)), b);
PIXOP(avg, STORE);
#undef AVG2
#undef AVG4
#undef AVG4_ROUNDER
#undef STORE
#define AVG2 avg2_no_rnd
#define AVG4 avg4_no_rnd
#define AVG4_ROUNDER BYTE_VEC(0x01)
#define STORE(l, b) stq(l, b)
PIXOP(put_no_rnd, STORE);
#undef STORE
#define STORE(l, b) stq(AVG2(l, ldq(b)), b);
PIXOP(avg_no_rnd, STORE);
static void put_pixels16_axp_asm(uint8_t *block, const uint8_t *pixels,
ptrdiff_t line_size, int h)
av_cold void ff_hpeldsp_init_alpha(HpelDSPContext *c, int flags)
