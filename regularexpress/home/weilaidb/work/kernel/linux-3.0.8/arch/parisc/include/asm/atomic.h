#define _ASM_PARISC_ATOMIC_H_
#  define ATOMIC_HASH_SIZE 4
#  define ATOMIC_HASH(a) (&(__atomic_hash[ (((unsigned long) (a))/L1_CACHE_BYTES) & (ATOMIC_HASH_SIZE-1) ]))
extern arch_spinlock_t __atomic_hash[ATOMIC_HASH_SIZE] __lock_aligned;
#define _atomic_spin_lock_irqsave(l,f) do  while(0)
#define _atomic_spin_unlock_irqrestore(l,f) do  while(0)
#  define _atomic_spin_lock_irqsave(l,f) do  while (0)
#  define _atomic_spin_unlock_irqrestore(l,f) do  while (0)
extern void __xchg_called_with_bad_pointer(void);
extern unsigned long __xchg8(char, char *);
extern unsigned long __xchg32(int, int *);
extern unsigned long __xchg64(unsigned long, unsigned long *);
static __inline__ unsigned long
__xchg(unsigned long x, __volatile__ void * ptr, int size)
#define xchg(ptr,x) \
((__typeof__(*(ptr)))__xchg((unsigned long)(x),(ptr),sizeof(*(ptr))))
#define __HAVE_ARCH_CMPXCHG	1
extern void __cmpxchg_called_with_bad_pointer(void);
extern unsigned long __cmpxchg_u32(volatile unsigned int *m, unsigned int old, unsigned int new_);
extern unsigned long __cmpxchg_u64(volatile unsigned long *ptr, unsigned long old, unsigned long new_);
static __inline__ unsigned long
__cmpxchg(volatile void *ptr, unsigned long old, unsigned long new_, int size)
#define cmpxchg(ptr,o,n)						 \
()
static inline unsigned long __cmpxchg_local(volatile void *ptr,
unsigned long old,
unsigned long new_, int size)
#define cmpxchg_local(ptr, o, n)				  	\
((__typeof__(*(ptr)))__cmpxchg_local((ptr), (unsigned long)(o),	\
(unsigned long)(n), sizeof(*(ptr))))
#define cmpxchg64_local(ptr, o, n)					\
()
#define cmpxchg64_local(ptr, o, n) __cmpxchg64_local_generic((ptr), (o), (n))
static __inline__ int __atomic_add_return(int i, atomic_t *v)
static __inline__ void atomic_set(atomic_t *v, int i)
static __inline__ int atomic_read(const atomic_t *v)
#define atomic_cmpxchg(v, o, n) (cmpxchg(&((v)->counter), (o), (n)))
#define atomic_xchg(v, new) (xchg(&((v)->counter), new))
static __inline__ int atomic_add_unless(atomic_t *v, int a, int u)
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
#define atomic_add(i,v)	((void)(__atomic_add_return( (i),(v))))
#define atomic_sub(i,v)	((void)(__atomic_add_return(-(i),(v))))
#define atomic_inc(v)	((void)(__atomic_add_return(   1,(v))))
#define atomic_dec(v)	((void)(__atomic_add_return(  -1,(v))))
#define atomic_add_return(i,v)	(__atomic_add_return( (i),(v)))
#define atomic_sub_return(i,v)	(__atomic_add_return(-(i),(v)))
#define atomic_inc_return(v)	(__atomic_add_return(   1,(v)))
#define atomic_dec_return(v)	(__atomic_add_return(  -1,(v)))
#define atomic_add_negative(a, v)	(atomic_add_return((a), (v)) < 0)
#define atomic_inc_and_test(v) (atomic_inc_return(v) == 0)
#define atomic_dec_and_test(v)	(atomic_dec_return(v) == 0)
#define atomic_sub_and_test(i,v)	(atomic_sub_return((i),(v)) == 0)
#define ATOMIC_INIT(i)	((atomic_t) )
#define smp_mb__before_atomic_dec()	smp_mb()
#define smp_mb__after_atomic_dec()	smp_mb()
#define smp_mb__before_atomic_inc()	smp_mb()
#define smp_mb__after_atomic_inc()	smp_mb()
#define ATOMIC64_INIT(i) ((atomic64_t) )
static __inline__ s64
__atomic64_add_return(s64 i, atomic64_t *v)
static __inline__ void
atomic64_set(atomic64_t *v, s64 i)
static __inline__ s64
atomic64_read(const atomic64_t *v)
#define atomic64_add(i,v)	((void)(__atomic64_add_return( ((s64)(i)),(v))))
#define atomic64_sub(i,v)	((void)(__atomic64_add_return(-((s64)(i)),(v))))
#define atomic64_inc(v)		((void)(__atomic64_add_return(   1,(v))))
#define atomic64_dec(v)		((void)(__atomic64_add_return(  -1,(v))))
#define atomic64_add_return(i,v)	(__atomic64_add_return( ((s64)(i)),(v)))
#define atomic64_sub_return(i,v)	(__atomic64_add_return(-((s64)(i)),(v)))
#define atomic64_inc_return(v)		(__atomic64_add_return(   1,(v)))
#define atomic64_dec_return(v)		(__atomic64_add_return(  -1,(v)))
#define atomic64_add_negative(a, v)	(atomic64_add_return((a), (v)) < 0)
#define atomic64_inc_and_test(v) 	(atomic64_inc_return(v) == 0)
#define atomic64_dec_and_test(v)	(atomic64_dec_return(v) == 0)
#define atomic64_sub_and_test(i,v)	(atomic64_sub_return((i),(v)) == 0)
#define atomic64_cmpxchg(v, o, n) \
((__typeof__((v)->counter))cmpxchg(&((v)->counter), (o), (n)))
#define atomic64_xchg(v, new) (xchg(&((v)->counter), new))
static __inline__ int atomic64_add_unless(atomic64_t *v, long a, long u)
#define atomic64_inc_not_zero(v) atomic64_add_unless((v), 1, 0)
