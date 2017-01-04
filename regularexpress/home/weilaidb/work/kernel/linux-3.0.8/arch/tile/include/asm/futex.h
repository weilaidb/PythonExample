#define _ASM_TILE_FUTEX_H
extern struct __get_user futex_set(u32 __user *v, int i);
extern struct __get_user futex_add(u32 __user *v, int n);
extern struct __get_user futex_or(u32 __user *v, int n);
extern struct __get_user futex_andn(u32 __user *v, int n);
extern struct __get_user futex_cmpxchg(u32 __user *v, int o, int n);
extern struct __get_user futex_xor(u32 __user *v, int n);
static inline struct __get_user futex_xor(u32 __user *uaddr, int n)
static inline int futex_atomic_op_inuser(int encoded_op, u32 __user *uaddr)
static inline int futex_atomic_cmpxchg_inatomic(u32 *uval, u32 __user *uaddr,
u32 oldval, u32 newval)
struct __get_user __atomic_bad_address(int __user *addr);
