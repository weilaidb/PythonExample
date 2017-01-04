#define MALLOC PyMem_Malloc
#define FREE PyMem_Free
#  define IEEE_8087
#if defined(DOUBLE_IS_BIG_ENDIAN_IEEE754) ||  \
defined(DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754)
#  define IEEE_MC68k
#if defined(IEEE_8087) + defined(IEEE_MC68k) != 1
#error "Exactly one of IEEE_8087 or IEEE_MC68k should be defined."
#if defined(WORDS_BIGENDIAN) && (defined(DOUBLE_IS_LITTLE_ENDIAN_IEEE754) || \
defined(DOUBLE_IS_ARM_MIXED_ENDIAN_IEEE754))
#error "doubles and ints have incompatible endianness"
#if !defined(WORDS_BIGENDIAN) && defined(DOUBLE_IS_BIG_ENDIAN_IEEE754)
#error "doubles and ints have incompatible endianness"
#if defined(HAVE_UINT32_T) && defined(HAVE_INT32_T)
typedef PY_UINT32_T ULong;
typedef PY_INT32_T Long;
#error "Failed to find an exact-width 32-bit integer type"
#if defined(HAVE_UINT64_T)
#define ULLong PY_UINT64_T
#undef ULLong
#undef DEBUG
#define DEBUG
#define Bug(x)
#define PRIVATE_MEM 2304
#define PRIVATE_mem ((PRIVATE_MEM+sizeof(double)-1)/sizeof(double))
static double private_mem[PRIVATE_mem], *pmem_next = private_mem;
typedef union  U;
#define word0(x) (x)->L[1]
#define word1(x) (x)->L[0]
#define word0(x) (x)->L[0]
#define word1(x) (x)->L[1]
#define dval(x) (x)->d
#define STRTOD_DIGLIM 40
#define MAX_ABS_EXP 1100000000U
#define MAX_DIGITS 1000000000U
#if MAX_ABS_EXP > INT_MAX
#error "MAX_ABS_EXP should fit in an int"
#if MAX_DIGITS > INT_MAX
#error "MAX_DIGITS should fit in an int"
#if defined(IEEE_8087)
#define Storeinc(a,b,c) (((unsigned short *)a)[1] = (unsigned short)b,  \
((unsigned short *)a)[0] = (unsigned short)c, a++)
#define Storeinc(a,b,c) (((unsigned short *)a)[0] = (unsigned short)b,  \
((unsigned short *)a)[1] = (unsigned short)c, a++)
#define Exp_shift  20
#define Exp_shift1 20
#define Exp_msk1    0x100000
#define Exp_msk11   0x100000
#define Exp_mask  0x7ff00000
#define P 53
#define Nbits 53
#define Bias 1023
#define Emax 1023
#define Emin (-1022)
#define Etiny (-1074)
#define Exp_1  0x3ff00000
#define Exp_11 0x3ff00000
#define Ebits 11
#define Frac_mask  0xfffff
#define Frac_mask1 0xfffff
#define Ten_pmax 22
#define Bletch 0x10
#define Bndry_mask  0xfffff
#define Bndry_mask1 0xfffff
#define Sign_bit 0x80000000
#define Log2P 1
#define Tiny0 0
#define Tiny1 1
#define Quick_max 14
#define Int_max 14
#define Flt_Rounds FLT_ROUNDS
#define Flt_Rounds 1
#define Rounding Flt_Rounds
#define Big0 (Frac_mask1 | Exp_msk1*(DBL_MAX_EXP+Bias-1))
#define Big1 0xffffffff
typedef struct BCinfo BCinfo;
struct
BCinfo ;
#define FFFFFFFF 0xffffffffUL
#define Kmax 7
struct
Bigint ;
typedef struct Bigint Bigint;
static Bigint *freelist[Kmax+1];
static Bigint *
Balloc(int k)
static void
Bfree(Bigint *v)
static Bigint *
Balloc(int k)
static void
Bfree(Bigint *v)
#define Bcopy(x,y) memcpy((char *)&x->sign, (char *)&y->sign,   \
y->wds*sizeof(Long) + 2*sizeof(int))
static Bigint *
multadd(Bigint *b, int m, int a)
static Bigint *
s2b(const char *s, int nd0, int nd, ULong y9)
static int
hi0bits(ULong x)
static int
lo0bits(ULong *y)
static Bigint *
i2b(int i)
static Bigint *
mult(Bigint *a, Bigint *b)
static Bigint *p5s;
static Bigint *
pow5mult(Bigint *b, int k)
static Bigint *
pow5mult(Bigint *b, int k)
static Bigint *
lshift(Bigint *b, int k)
static int
cmp(Bigint *a, Bigint *b)
static Bigint *
diff(Bigint *a, Bigint *b)
static double
ulp(U *x)
static double
b2d(Bigint *a, int *e)
static Bigint *
sd2b(U *d, int scale, int *e)
static Bigint *
d2b(U *d, int *e, int *bits)
static double
ratio(Bigint *a, Bigint *b)
static const double
tens[] = ;
static const double
bigtens[] = ;
static const double tinytens[] = ;
#define Scale_Bit 0x10
#define n_bigtens 5
#define ULbits 32
#define kshift 5
#define kmask 31
static int
dshift(Bigint *b, int p2)
static int
quorem(Bigint *b, Bigint *S)
static double
sulp(U *x, BCinfo *bc)
static int
bigcomp(U *rv, const char *s0, BCinfo *bc)
double
_Py_dg_strtod(const char *s00, char **se)
static char *
rv_alloc(int i)
static char *
nrv_alloc(char *s, char **rve, int n)
void
_Py_dg_freedtoa(char *s)
char *
_Py_dg_dtoa(double dd, int mode, int ndigits,
int *decpt, int *sign, char **rve)
