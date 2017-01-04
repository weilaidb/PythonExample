#define _ASM_FUTEX_H
#define __futex_atomic_op1(insn, ret, oldval, uaddr, oparg) \
do  while (0)
#define __futex_atomic_op2(insn, ret, oldval, uaddr, oparg) \
do  while (0)
static inline int
futex_atomic_op_inuser (int encoded_op, u32 __user *uaddr)
static inline int
futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
