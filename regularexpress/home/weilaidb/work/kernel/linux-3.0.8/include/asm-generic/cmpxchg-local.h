#define __ASM_GENERIC_CMPXCHG_LOCAL_H
extern unsigned long wrong_size_cmpxchg(volatile void *ptr);
static inline unsigned long __cmpxchg_local_generic(volatile void *ptr,
unsigned long old, unsigned long new, int size)
static inline u64 __cmpxchg64_local_generic(volatile void *ptr,
u64 old, u64 new)
