#define _FIXP_ARITH_H
typedef s16 fixp_t;
#define FRAC_N 8
#define FRAC_MASK ((1<<FRAC_N)-1)
static const fixp_t cos_table[46] = ;
static inline fixp_t fixp_new(s16 a)
static inline fixp_t fixp_new16(s16 a)
static inline fixp_t fixp_cos(unsigned int degrees)
static inline fixp_t fixp_sin(unsigned int degrees)
static inline fixp_t fixp_mult(fixp_t a, fixp_t b)
