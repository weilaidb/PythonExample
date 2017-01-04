#define _ASM_S390_FUTEX_H
static inline int futex_atomic_op_inuser (int encoded_op, u32 __user *uaddr)
static inline int futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
