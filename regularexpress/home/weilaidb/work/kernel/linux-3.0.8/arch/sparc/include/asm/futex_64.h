#define _SPARC64_FUTEX_H
#define __futex_cas_op(insn, ret, oldval, uaddr, oparg)	\
__asm__ __volatile__(				\
"\n1:	lduwa	[%3] %%asi, %2\n"		\
"	" insn "\n"				\
"2:	casa	[%3] %%asi, %2, %1\n"		\
"	cmp	%2, %1\n"			\
"	bne,pn	%%icc, 1b\n"			\
"	 mov	0, %0\n"			\
"3:\n"						\
"	.section .fixup,#alloc,#execinstr\n"	\
"	.align	4\n"				\
"4:	sethi	%%hi(3b), %0\n"			\
"	jmpl	%0 + %%lo(3b), %%g0\n"		\
"	 mov	%5, %0\n"			\
"	.previous\n"				\
"	.section __ex_table,\"a\"\n"		\
"	.align	4\n"				\
"	.word	1b, 4b\n"			\
"	.word	2b, 4b\n"			\
"	.previous\n"				\
: "=&r" (ret), "=&r" (oldval), "=&r" (tem)	\
: "r" (uaddr), "r" (oparg), "i" (-EFAULT)	\
: "memory")
static inline int futex_atomic_op_inuser(int encoded_op, u32 __user *uaddr)
static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
