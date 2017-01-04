#define AHI	"ahi"
#define ALR	"alr"
#define CLR	"clr"
#define LHI	"lhi"
#define SLR	"slr"
#define AHI	"aghi"
#define ALR	"algr"
#define CLR	"clgr"
#define LHI	"lghi"
#define SLR	"slgr"
size_t copy_from_user_std(size_t size, const void __user *ptr, void *x)
static size_t copy_from_user_std_check(size_t size, const void __user *ptr,
void *x)
size_t copy_to_user_std(size_t size, void __user *ptr, const void *x)
static size_t copy_to_user_std_check(size_t size, void __user *ptr,
const void *x)
static size_t copy_in_user_std(size_t size, void __user *to,
const void __user *from)
static size_t clear_user_std(size_t size, void __user *to)
size_t strnlen_user_std(size_t size, const char __user *src)
size_t strncpy_from_user_std(size_t size, const char __user *src, char *dst)
#define __futex_atomic_op(insn, ret, oldval, newval, uaddr, oparg)	\
asm volatile(							\
"   sacf  256\n"					\
"0: l     %1,0(%6)\n"					\
"1:"insn						\
"2: cs    %1,%2,0(%6)\n"				\
"3: jl    1b\n"						\
"   lhi   %0,0\n"					\
"4: sacf  0\n"						\
EX_TABLE(0b,4b) EX_TABLE(2b,4b) EX_TABLE(3b,4b)		\
: "=d" (ret), "=&d" (oldval), "=&d" (newval),		\
"=m" (*uaddr)						\
: "0" (-EFAULT), "d" (oparg), "a" (uaddr),		\
"m" (*uaddr) : "cc");
int futex_atomic_op_std(int op, u32 __user *uaddr, int oparg, int *old)
int futex_atomic_cmpxchg_std(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
struct uaccess_ops uaccess_std = ;
