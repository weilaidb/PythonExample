#define __ASM_CMPXCHG_H
extern void __xchg_called_with_bad_pointer(void);
static inline unsigned long __xchg(unsigned long x, void *ptr, int size)
#define xchg(ptr, x)							  \
()
#define __HAVE_ARCH_CMPXCHG
extern void __cmpxchg_called_with_bad_pointer(void);
static inline unsigned long __cmpxchg(void *ptr, unsigned long old,
unsigned long new, int size)
#define cmpxchg(ptr, o, n)						\
((__typeof__(*(ptr)))__cmpxchg((ptr), (unsigned long)(o),	\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64(ptr, o, n)						\
()
static inline unsigned long long __cmpxchg64(void *ptr,
unsigned long long old,
unsigned long long new)
#define cmpxchg64(ptr, o, n)						\
((__typeof__(*(ptr)))__cmpxchg64((ptr),				\
(unsigned long long)(o),	\
(unsigned long long)(n)))
static inline unsigned long __cmpxchg_local(void *ptr,
unsigned long old,
unsigned long new, int size)
#define cmpxchg_local(ptr, o, n)					\
((__typeof__(*(ptr)))__cmpxchg_local((ptr), (unsigned long)(o),	\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n)	cmpxchg64((ptr), (o), (n))
