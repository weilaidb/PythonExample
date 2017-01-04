#define MULTI_ARITH_H
static inline void fp_denormalize(struct fp_ext *reg, unsigned int cnt)
static inline int fp_overnormalize(struct fp_ext *reg)
static inline int fp_addmant(struct fp_ext *dest, struct fp_ext *src)
static inline int fp_addcarry(struct fp_ext *reg)
static inline void fp_submant(struct fp_ext *dest, struct fp_ext *src1,
struct fp_ext *src2)
#define fp_mul64(desth, destl, src1, src2) ()
#define fp_div64(quot, rem, srch, srcl, div)				\
asm ("divu.l %2,%1:%0" : "=d" (quot), "=d" (rem)		\
: "dm" (div), "1" (srch), "0" (srcl))
#define fp_add64(dest1, dest2, src1, src2) ()
#define fp_addx96(dest, src) ()
#define fp_sub64(dest, src) ()
#define fp_sub96c(dest, srch, srcm, srcl) ()
static inline void fp_multiplymant(union fp_mant128 *dest, struct fp_ext *src1,
struct fp_ext *src2)
static inline void fp_dividemant(union fp_mant128 *dest, struct fp_ext *src,
struct fp_ext *div)
static inline void fp_putmant128(struct fp_ext *dest, union fp_mant128 *src,
int shift)
