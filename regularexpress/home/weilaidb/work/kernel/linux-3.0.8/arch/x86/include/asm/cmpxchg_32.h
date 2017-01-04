#define _ASM_X86_CMPXCHG_32_H
extern void __xchg_wrong_size(void);
#define __xchg(x, ptr, size)						\
()
#define xchg(ptr, v)							\
__xchg((v), (ptr), sizeof(*ptr))
static inline void set_64bit(volatile u64 *ptr, u64 value)
extern void __cmpxchg_wrong_size(void);
#define __raw_cmpxchg(ptr, old, new, size, lock)			\
()
#define __cmpxchg(ptr, old, new, size)					\
__raw_cmpxchg((ptr), (old), (new), (size), LOCK_PREFIX)
#define __sync_cmpxchg(ptr, old, new, size)				\
__raw_cmpxchg((ptr), (old), (new), (size), "lock; ")
#define __cmpxchg_local(ptr, old, new, size)				\
__raw_cmpxchg((ptr), (old), (new), (size), "")
#define __HAVE_ARCH_CMPXCHG 1
#define cmpxchg(ptr, old, new)						\
__cmpxchg((ptr), (old), (new), sizeof(*ptr))
#define sync_cmpxchg(ptr, old, new)					\
__sync_cmpxchg((ptr), (old), (new), sizeof(*ptr))
#define cmpxchg_local(ptr, old, new)					\
__cmpxchg_local((ptr), (old), (new), sizeof(*ptr))
#define cmpxchg64(ptr, o, n)						\
((__typeof__(*(ptr)))__cmpxchg64((ptr), (unsigned long long)(o), \
(unsigned long long)(n)))
#define cmpxchg64_local(ptr, o, n)					\
((__typeof__(*(ptr)))__cmpxchg64_local((ptr), (unsigned long long)(o), \
(unsigned long long)(n)))
static inline u64 __cmpxchg64(volatile u64 *ptr, u64 old, u64 new)
static inline u64 __cmpxchg64_local(volatile u64 *ptr, u64 old, u64 new)
extern unsigned long cmpxchg_386_u8(volatile void *, u8, u8);
extern unsigned long cmpxchg_386_u16(volatile void *, u16, u16);
extern unsigned long cmpxchg_386_u32(volatile void *, u32, u32);
static inline unsigned long cmpxchg_386(volatile void *ptr, unsigned long old,
unsigned long new, int size)
#define cmpxchg(ptr, o, n)						\
()
#define cmpxchg_local(ptr, o, n)					\
()
#define cmpxchg64(ptr, o, n)					\
()
#define cmpxchg64_local(ptr, o, n)				\
()
