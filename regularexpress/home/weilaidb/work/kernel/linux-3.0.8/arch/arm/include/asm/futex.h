#define _ASM_ARM_FUTEX_H
#if defined(CONFIG_CPU_USE_DOMAINS) && defined(CONFIG_SMP)
#define __futex_atomic_ex_table(err_reg)			\
"3:\n"							\
"	.pushsection __ex_table,\"a\"\n"		\
"	.align	3\n"					\
"	.long	1b, 4f, 2b, 4f\n"			\
"	.popsection\n"					\
"	.pushsection .fixup,\"ax\"\n"			\
"4:	mov	%0, " err_reg "\n"			\
"	b	3b\n"					\
"	.popsection"
#define __futex_atomic_op(insn, ret, oldval, tmp, uaddr, oparg)	\
smp_mb();						\
__asm__ __volatile__(					\
"1:	ldrex	%1, [%3]\n"				\
"	" insn "\n"					\
"2:	strex	%2, %0, [%3]\n"				\
"	teq	%2, #0\n"				\
"	bne	1b\n"					\
"	mov	%0, #0\n"				\
__futex_atomic_ex_table("%5")				\
: "=&r" (ret), "=&r" (oldval), "=&r" (tmp)		\
: "r" (uaddr), "r" (oparg), "Ir" (-EFAULT)		\
: "cc", "memory")
static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
#define __futex_atomic_op(insn, ret, oldval, tmp, uaddr, oparg)	\
__asm__ __volatile__(					\
"1:	" T(ldr) "	%1, [%3]\n"			\
"	" insn "\n"					\
"2:	" T(str) "	%0, [%3]\n"			\
"	mov	%0, #0\n"				\
__futex_atomic_ex_table("%5")				\
: "=&r" (ret), "=&r" (oldval), "=&r" (tmp)		\
: "r" (uaddr), "r" (oparg), "Ir" (-EFAULT)		\
: "cc", "memory")
static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
static inline int
futex_atomic_op_inuser (int encoded_op, u32 __user *uaddr)
