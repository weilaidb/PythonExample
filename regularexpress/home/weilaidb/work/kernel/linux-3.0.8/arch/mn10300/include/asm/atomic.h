#define _ASM_ATOMIC_H
static inline
unsigned long __xchg(volatile unsigned long *m, unsigned long val)
static inline unsigned long __cmpxchg(volatile unsigned long *m,
unsigned long old, unsigned long new)
#error "No SMP atomic operation support!"
struct __xchg_dummy ;
#define __xg(x) ((struct __xchg_dummy *)(x))
static inline
unsigned long __xchg(volatile unsigned long *m, unsigned long val)
static inline unsigned long __cmpxchg(volatile unsigned long *m,
unsigned long old, unsigned long new)
#define xchg(ptr, v)						\
((__typeof__(*(ptr))) __xchg((unsigned long *)(ptr),	\
(unsigned long)(v)))
#define cmpxchg(ptr, o, n)					\
((__typeof__(*(ptr))) __cmpxchg((unsigned long *)(ptr), \
(unsigned long)(o),	\
(unsigned long)(n)))
#define atomic_xchg(ptr, v)		(xchg(&(ptr)->counter, (v)))
#define atomic_cmpxchg(v, old, new)	(cmpxchg(&((v)->counter), (old), (new)))
#define ATOMIC_INIT(i)
#define atomic_read(v)	(ACCESS_ONCE((v)->counter))
#define atomic_set(v, i) (((v)->counter) = (i))
static inline int atomic_add_return(int i, atomic_t *v)
static inline int atomic_sub_return(int i, atomic_t *v)
static inline int atomic_add_negative(int i, atomic_t *v)
static inline void atomic_add(int i, atomic_t *v)
static inline void atomic_sub(int i, atomic_t *v)
static inline void atomic_inc(atomic_t *v)
static inline void atomic_dec(atomic_t *v)
#define atomic_dec_return(v)		atomic_sub_return(1, (v))
#define atomic_inc_return(v)		atomic_add_return(1, (v))
#define atomic_sub_and_test(i, v)	(atomic_sub_return((i), (v)) == 0)
#define atomic_dec_and_test(v)		(atomic_sub_return(1, (v)) == 0)
#define atomic_inc_and_test(v)		(atomic_add_return(1, (v)) == 0)
#define atomic_add_unless(v, a, u)				\
()
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
static inline void atomic_clear_mask(unsigned long mask, unsigned long *addr)
static inline void atomic_set_mask(unsigned long mask, unsigned long *addr)
#define smp_mb__before_atomic_dec()	barrier()
#define smp_mb__after_atomic_dec()	barrier()
#define smp_mb__before_atomic_inc()	barrier()
#define smp_mb__after_atomic_inc()	barrier()
