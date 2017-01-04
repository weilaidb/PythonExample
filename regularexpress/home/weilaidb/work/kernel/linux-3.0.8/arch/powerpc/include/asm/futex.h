#define _ASM_POWERPC_FUTEX_H
#define __futex_atomic_op(insn, ret, oldval, uaddr, oparg) \
__asm__ __volatile ( \
PPC_RELEASE_BARRIER \
"1:	lwarx	%0,0,%2\n" \
insn \
PPC405_ERR77(0, %2) \
"2:	stwcx.	%1,0,%2\n" \
"bne-	1b\n" \
"li	%1,0\n" \
"3:	.section .fixup,\"ax\"\n" \
"4:	li	%1,%3\n" \
"b	3b\n" \
".previous\n" \
".section __ex_table,\"a\"\n" \
".align 3\n" \
PPC_LONG "1b,4b,2b,4b\n" \
".previous" \
: "=&r" (oldval), "=&r" (ret) \
: "b" (uaddr), "i" (-EFAULT), "r" (oparg) \
: "cr0", "memory")
static inline int futex_atomic_op_inuser (int encoded_op, u32 __user *uaddr)
static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
