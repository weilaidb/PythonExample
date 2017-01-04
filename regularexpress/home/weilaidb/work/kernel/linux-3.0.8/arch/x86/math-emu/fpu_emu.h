#define _FPU_EMU_H_
#define PECULIAR_486
#define	Const(x)	$##x
#define	Const(x)	x
#define EXP_BIAS	Const(0)
#define EXP_OVER	Const(0x4000)
#define	EXP_UNDER	Const(-0x3fff)
#define EXP_WAY_UNDER   Const(-0x6000)
#define EXP_Infinity    EXP_OVER
#define EXP_NaN         EXP_OVER
#define EXTENDED_Ebias Const(0x3fff)
#define EXTENDED_Emin (-0x3ffe)
#define SIGN_POS	Const(0)
#define SIGN_NEG	Const(0x80)
#define SIGN_Positive	Const(0)
#define SIGN_Negative	Const(0x8000)
#define TW_Denormal     Const(4)
#define TW_Infinity	Const(5)
#define	TW_NaN		Const(6)
#define	TW_Unsupported	Const(7)
#define TAG_Valid	Const(0)
#define TAG_Zero	Const(1)
#define TAG_Special	Const(2)
#define TAG_Empty	Const(3)
#define TAG_Error	Const(0x80)
#define LOADED_DATA	Const(10101)
#define REV             0x10
#define DEST_RM         0x20
#define LOADED          0x40
#define FPU_Exception   Const(0x80000000)
extern u_char emulating;
#  define RE_ENTRANT_CHECK_OFF emulating = 0
#  define RE_ENTRANT_CHECK_ON emulating = 1
#  define RE_ENTRANT_CHECK_OFF
#  define RE_ENTRANT_CHECK_ON
#define FWAIT_OPCODE 0x9b
#define OP_SIZE_PREFIX 0x66
#define ADDR_SIZE_PREFIX 0x67
#define PREFIX_CS 0x2e
#define PREFIX_DS 0x3e
#define PREFIX_ES 0x26
#define PREFIX_SS 0x36
#define PREFIX_FS 0x64
#define PREFIX_GS 0x65
#define PREFIX_REPE 0xf3
#define PREFIX_REPNE 0xf2
#define PREFIX_LOCK 0xf0
#define PREFIX_CS_ 1
#define PREFIX_DS_ 2
#define PREFIX_ES_ 3
#define PREFIX_FS_ 4
#define PREFIX_GS_ 5
#define PREFIX_SS_ 6
#define PREFIX_DEFAULT 7
struct address ;
struct fpu__reg ;
typedef void (*FUNC) (void);
typedef struct fpu__reg FPU_REG;
typedef void (*FUNC_ST0) (FPU_REG *st0_ptr, u_char st0_tag);
typedef struct  overrides;
typedef struct  fpu_addr_modes;
#define PROTECTED 4
#define SIXTEEN   1
#define VM86      SIXTEEN
#define PM16      (SIXTEEN | PROTECTED)
#define SEG32     PROTECTED
extern u_char const data_sizes_16[32];
#define register_base ((u_char *) registers )
#define fpu_register(x)  ( * ((FPU_REG *)( register_base + 10 * (x & 7) )) )
#define	st(x)      ( * ((FPU_REG *)( register_base + 10 * ((top+x) & 7) )) )
#define	STACK_OVERFLOW	(FPU_stackoverflow(&st_new_ptr))
#define	NOT_EMPTY(i)	(!FPU_empty_i(i))
#define	NOT_EMPTY_ST0	(st0_tag ^ TAG_Empty)
#define poppop()
#define push()
#define signbyte(a) (((u_char *)(a))[9])
#define getsign(a) (signbyte(a) & 0x80)
#define setsign(a,b)
#define copysign(a,b)
#define changesign(a)
#define setpositive(a)
#define setnegative(a)
#define signpositive(a) ( (signbyte(a) & 0x80) == 0 )
#define signnegative(a) (signbyte(a) & 0x80)
static inline void reg_copy(FPU_REG const *x, FPU_REG *y)
#define exponent(x)  (((*(short *)&((x)->exp)) & 0x7fff) - EXTENDED_Ebias)
#define setexponentpos(x,y)
#define exponent16(x)         (*(short *)&((x)->exp))
#define setexponent16(x,y)
#define addexponent(x,y)
#define stdexp(x)
#define isdenormal(ptr)   (exponent(ptr) == EXP_BIAS+EXP_UNDER)
#define significand(x) ( ((unsigned long long *)&((x)->sigl))[0] )
asmlinkage int FPU_normalize(FPU_REG *x);
asmlinkage int FPU_normalize_nuo(FPU_REG *x);
asmlinkage int FPU_u_sub(FPU_REG const *arg1, FPU_REG const *arg2,
FPU_REG * answ, unsigned int control_w, u_char sign,
int expa, int expb);
asmlinkage int FPU_u_mul(FPU_REG const *arg1, FPU_REG const *arg2,
FPU_REG * answ, unsigned int control_w, u_char sign,
int expon);
asmlinkage int FPU_u_div(FPU_REG const *arg1, FPU_REG const *arg2,
FPU_REG * answ, unsigned int control_w, u_char sign);
asmlinkage int FPU_u_add(FPU_REG const *arg1, FPU_REG const *arg2,
FPU_REG * answ, unsigned int control_w, u_char sign,
int expa, int expb);
asmlinkage int wm_sqrt(FPU_REG *n, int dummy1, int dummy2,
unsigned int control_w, u_char sign);
asmlinkage unsigned FPU_shrx(void *l, unsigned x);
asmlinkage unsigned FPU_shrxs(void *v, unsigned x);
asmlinkage unsigned long FPU_div_small(unsigned long long *x, unsigned long y);
asmlinkage int FPU_round(FPU_REG *arg, unsigned int extent, int dummy,
unsigned int control_w, u_char sign);
