#define __ASM_CMPXCHG_H
#define __HAVE_ARCH_CMPXCHG 1
#define __cmpxchg_asm(ld, st, m, old, new)				\
()
extern void __cmpxchg_called_with_bad_pointer(void);
#define __cmpxchg(ptr, old, new, pre_barrier, post_barrier)		\
()
#define cmpxchg(ptr, old, new)		__cmpxchg(ptr, old, new, smp_mb__before_llsc(), smp_llsc_mb())
#define cmpxchg_local(ptr, old, new)	__cmpxchg(ptr, old, new, , )
#define cmpxchg64(ptr, o, n)						\
()
#define cmpxchg64_local(ptr, o, n)					\
()
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
