#define __ASM_GENERIC_CMPXCHG_H
#error "Cannot use generic cmpxchg on SMP"
#define cmpxchg(ptr, o, n)	cmpxchg_local((ptr), (o), (n))
#define cmpxchg64(ptr, o, n)	cmpxchg64_local((ptr), (o), (n))
