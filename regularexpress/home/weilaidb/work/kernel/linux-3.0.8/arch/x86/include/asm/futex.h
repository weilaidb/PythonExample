#define _ASM_X86_FUTEX_H
#define __futex_atomic_op1(insn, ret, oldval, uaddr, oparg)	\
asm volatile("1:\t" insn "\n"				\
"2:\t.section .fixup,\"ax\"\n"		\
"3:\tmov\t%3, %1\n"			\
"\tjmp\t2b\n"				\
"\t.previous\n"				\
_ASM_EXTABLE(1b, 3b)			\
: "=r" (oldval), "=r" (ret), "+m" (*uaddr)	\
: "i" (-EFAULT), "0" (oparg), "1" (0))
#define __futex_atomic_op2(insn, ret, oldval, uaddr, oparg)	\
asm volatile("1:\tmovl	%2, %0\n"			\
"\tmovl\t%0, %3\n"				\
"\t" insn "\n"				\
"2:\t" LOCK_PREFIX "cmpxchgl %3, %2\n"	\
"\tjnz\t1b\n"				\
"3:\t.section .fixup,\"ax\"\n"		\
"4:\tmov\t%5, %1\n"			\
"\tjmp\t3b\n"				\
"\t.previous\n"				\
_ASM_EXTABLE(1b, 4b)			\
_ASM_EXTABLE(2b, 4b)			\
: "=&a" (oldval), "=&r" (ret),		\
"+m" (*uaddr), "=&r" (tem)		\
: "r" (oparg), "i" (-EFAULT), "1" (0))
static inline int futex_atomic_op_inuser(int encoded_op, u32 __user *uaddr)
static inline int futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
