static inline pte_t *follow_table(struct mm_struct *mm, unsigned long addr)
static __always_inline size_t __user_copy_pt(unsigned long uaddr, void *kptr,
size_t n, int write_user)
static __always_inline unsigned long __dat_user_addr(unsigned long uaddr)
size_t copy_from_user_pt(size_t n, const void __user *from, void *to)
size_t copy_to_user_pt(size_t n, void __user *to, const void *from)
static size_t clear_user_pt(size_t n, void __user *to)
static size_t strnlen_user_pt(size_t count, const char __user *src)
static size_t strncpy_from_user_pt(size_t count, const char __user *src,
char *dst)
static size_t copy_in_user_pt(size_t n, void __user *to,
const void __user *from)
#define __futex_atomic_op(insn, ret, oldval, newval, uaddr, oparg)	\
asm volatile("0: l   %1,0(%6)\n"				\
"1: " insn						\
"2: cs  %1,%2,0(%6)\n"				\
"3: jl  1b\n"					\
"   lhi %0,0\n"					\
"4:\n"						\
EX_TABLE(0b,4b) EX_TABLE(2b,4b) EX_TABLE(3b,4b)	\
: "=d" (ret), "=&d" (oldval), "=&d" (newval),	\
"=m" (*uaddr)					\
: "0" (-EFAULT), "d" (oparg), "a" (uaddr),		\
"m" (*uaddr) : "cc" );
static int __futex_atomic_op_pt(int op, u32 __user *uaddr, int oparg, int *old)
int futex_atomic_op_pt(int op, u32 __user *uaddr, int oparg, int *old)
static int __futex_atomic_cmpxchg_pt(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
int futex_atomic_cmpxchg_pt(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
struct uaccess_ops uaccess_pt = ;
