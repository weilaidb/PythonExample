#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 10
#define EXTRA_SHIFT  2
#undef EXTRA_SHIFT
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef BIT_DEPTH
#define CN_SHIFT 12
#define C_FIX(x) ((int)((x) * (1 << CN_SHIFT) + 0.5))
#define C1 C_FIX(0.6532814824)
#define C2 C_FIX(0.2705980501)
#define C_SHIFT (4+1+12)
static inline void idct4col_put(uint8_t *dest, int line_size, const int16_t *col)
#define BF(k) \
void ff_simple_idct248_put(uint8_t *dest, int line_size, int16_t *block)
#undef CN_SHIFT
#undef C_SHIFT
#undef C_FIX
#undef C1
#undef C2
#define CN_SHIFT 12
#define C_FIX(x) ((int)((x) * M_SQRT2 * (1 << CN_SHIFT) + 0.5))
#define C1 C_FIX(0.6532814824)
#define C2 C_FIX(0.2705980501)
#define C3 C_FIX(0.5)
#define C_SHIFT (4+1+12)
static inline void idct4col_add(uint8_t *dest, int line_size, const int16_t *col)
#define RN_SHIFT 15
#define R_FIX(x) ((int)((x) * M_SQRT2 * (1 << RN_SHIFT) + 0.5))
#define R1 R_FIX(0.6532814824)
#define R2 R_FIX(0.2705980501)
#define R3 R_FIX(0.5)
#define R_SHIFT 11
static inline void idct4row(int16_t *row)
void ff_simple_idct84_add(uint8_t *dest, int line_size, int16_t *block)
void ff_simple_idct48_add(uint8_t *dest, int line_size, int16_t *block)
void ff_simple_idct44_add(uint8_t *dest, int line_size, int16_t *block)
void ff_prores_idct(int16_t *block, const int16_t *qmat)
