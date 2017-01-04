#define	N 624
#define	M 397
#define	MATRIX_A 0x9908b0df
#define	UPPER_MASK 0x80000000
#define	LOWER_MASK 0x7fffffff
#define	TEMPERING_MASK_B 0x9d2c5680
#define	TEMPERING_MASK_C 0xefc60000
#define	TEMPERING_SHIFT_U(y)  (y >> 11)
#define	TEMPERING_SHIFT_S(y)  (y << 7)
#define	TEMPERING_SHIFT_T(y)  (y << 15)
#define	TEMPERING_SHIFT_L(y)  (y >> 18)
static void __db_sgenrand __P((unsigned long, unsigned long *, int *));
static void __db_lsgenrand __P((unsigned long *, unsigned long *, int *));
static unsigned long __db_genrand __P((ENV *));
int
__db_generate_iv(env, iv)
ENV *env;
u_int32_t *iv;
static void
__db_sgenrand(seed, mt, mtip)
unsigned long seed;
unsigned long mt[];
int *mtip;
static void
__db_lsgenrand(seed_array, mt, mtip)
unsigned long seed_array[];
unsigned long mt[];
int *mtip;
static unsigned long
__db_genrand(env)
ENV *env;
