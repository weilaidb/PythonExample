#define BIT_DEPTH 8
#undef BIT_DEPTH
#define BIT_DEPTH 10
#define EXTRA_SHIFT  2
#undef EXTRA_SHIFT
#undef BIT_DEPTH
#define BIT_DEPTH 12
#undef BIT_DEPTH
#define CN_SHIFT 12
C_FIX ((int)((x) * (1 << CN_SHIFT) + 0.5))
C_FIX
C_FIX
#define C_SHIFT (4+1+12)
idct4col_put
BF \
ff_simple_idct248_put
#undef CN_SHIFT
#undef C_SHIFT
#undef C_FIX
#undef C1
#undef C2
#define CN_SHIFT 12
C_FIX ((int)((x) * M_SQRT2 * (1 << CN_SHIFT) + 0.5))
C_FIX
C_FIX
C_FIX
#define C_SHIFT (4+1+12)
idct4col_add
#define RN_SHIFT 15
R_FIX ((int)((x) * M_SQRT2 * (1 << RN_SHIFT) + 0.5))
R_FIX
R_FIX
R_FIX
#define R_SHIFT 11
idct4row
ff_simple_idct84_add
ff_simple_idct48_add
ff_simple_idct44_add
ff_prores_idct
