#define _POLY_H
typedef struct  Xsig;
asmlinkage void mul64(unsigned long long const *a, unsigned long long const *b,
unsigned long long *result);
asmlinkage void polynomial_Xsig(Xsig *, const unsigned long long *x,
const unsigned long long terms[], const int n);
asmlinkage void mul32_Xsig(Xsig *, const unsigned long mult);
asmlinkage void mul64_Xsig(Xsig *, const unsigned long long *mult);
asmlinkage void mul_Xsig_Xsig(Xsig *dest, const Xsig *mult);
asmlinkage void shr_Xsig(Xsig *, const int n);
asmlinkage int round_Xsig(Xsig *);
asmlinkage int norm_Xsig(Xsig *);
asmlinkage void div_Xsig(Xsig *x1, const Xsig *x2, const Xsig *dest);
#define LL_MSW(x)     (((unsigned long *)&x)[1])
#define MK_XSIG(a,b,c)
#define XSIG_LL(x)         (*(unsigned long long *)&x.midw)
static inline unsigned long mul_32_32(const unsigned long arg1,
const unsigned long arg2)
static inline void add_Xsig_Xsig(Xsig *dest, const Xsig *x2)
static inline void add_two_Xsig(Xsig *dest, const Xsig *x2, long int *exp)
static inline void negate_Xsig(Xsig *x)
