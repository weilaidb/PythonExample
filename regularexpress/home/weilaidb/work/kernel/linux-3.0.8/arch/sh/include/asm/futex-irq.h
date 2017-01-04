#define __ASM_SH_FUTEX_IRQ_H
static inline int atomic_futex_op_xchg_set(int oparg, u32 __user *uaddr,
int *oldval)
static inline int atomic_futex_op_xchg_add(int oparg, u32 __user *uaddr,
int *oldval)
static inline int atomic_futex_op_xchg_or(int oparg, u32 __user *uaddr,
int *oldval)
static inline int atomic_futex_op_xchg_and(int oparg, u32 __user *uaddr,
int *oldval)
static inline int atomic_futex_op_xchg_xor(int oparg, u32 __user *uaddr,
int *oldval)
static inline int atomic_futex_op_cmpxchg_inatomic(u32 *uval,
u32 __user *uaddr,
u32 oldval, u32 newval)
