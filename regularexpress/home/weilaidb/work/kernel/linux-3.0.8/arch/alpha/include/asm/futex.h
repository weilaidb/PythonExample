#define _ASM_ALPHA_FUTEX_H
#define __futex_atomic_op(insn, ret, oldval, uaddr, oparg)	\
__asm__ __volatile__(					\
__ASM_SMP_MB					\
"1:	ldl_l	%0,0(%2)\n"				\
insn						\
"2:	stl_c	%1,0(%2)\n"				\
"	beq	%1,4f\n"				\
"	mov	$31,%1\n"				\
"3:	.subsection 2\n"				\
"4:	br	1b\n"					\
"	.previous\n"					\
"	.section __ex_table,\"a\"\n"			\
"	.long	1b-.\n"					\
"	lda	$31,3b-1b(%1)\n"			\
"	.long	2b-.\n"					\
"	lda	$31,3b-2b(%1)\n"			\
"	.previous\n"					\
:	"=&r" (oldval), "=&r"(ret)			\
:	"r" (uaddr), "r"(oparg)				\
:	"memory")
static inline int futex_atomic_op_inuser (int encoded_op, u32 __user *uaddr)
static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
