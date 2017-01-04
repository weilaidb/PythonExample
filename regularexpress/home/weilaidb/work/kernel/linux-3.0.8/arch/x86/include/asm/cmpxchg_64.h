#define _ASM_X86_CMPXCHG_64_H
static inline void set_64bit(volatile u64 *ptr, u64 val)
extern void __xchg_wrong_size(void);
extern void __cmpxchg_wrong_size(void);
#define __xchg(x, ptr, size)						\
()
#define xchg(ptr, v)							\
__xchg((v), (ptr), sizeof(*ptr))
#define __HAVE_ARCH_CMPXCHG 1
#define __raw_cmpxchg(ptr, old, new, size, lock)			\
()
#define __cmpxchg(ptr, old, new, size)					\
__raw_cmpxchg((ptr), (old), (new), (size), LOCK_PREFIX)
#define __sync_cmpxchg(ptr, old, new, size)				\
__raw_cmpxchg((ptr), (old), (new), (size), "lock; ")
#define __cmpxchg_local(ptr, old, new, size)				\
__raw_cmpxchg((ptr), (old), (new), (size), "")
#define cmpxchg(ptr, old, new)						\
__cmpxchg((ptr), (old), (new), sizeof(*ptr))
#define sync_cmpxchg(ptr, old, new)					\
__sync_cmpxchg((ptr), (old), (new), sizeof(*ptr))
#define cmpxchg_local(ptr, old, new)					\
__cmpxchg_local((ptr), (old), (new), sizeof(*ptr))
#define cmpxchg64(ptr, o, n)						\
()
#define cmpxchg64_local(ptr, o, n)					\
()
