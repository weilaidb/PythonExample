#define _ASM_IA64_ATOMIC_H
#define ATOMIC_INIT(i)		((atomic_t) )
#define ATOMIC64_INIT(i)	((atomic64_t) )
#define atomic_read(v)		(*(volatile int *)&(v)->counter)
#define atomic64_read(v)	(*(volatile long *)&(v)->counter)
#define atomic_set(v,i)		(((v)->counter) = (i))
#define atomic64_set(v,i)	(((v)->counter) = (i))
static __inline__ int
ia64_atomic_add (int i, atomic_t *v)
static __inline__ long
ia64_atomic64_add (__s64 i, atomic64_t *v)
static __inline__ int
ia64_atomic_sub (int i, atomic_t *v)
static __inline__ long
ia64_atomic64_sub (__s64 i, atomic64_t *v)
#define atomic_cmpxchg(v, old, new) (cmpxchg(&((v)->counter), old, new))
#define atomic_xchg(v, new) (xchg(&((v)->counter), new))
#define atomic64_cmpxchg(v, old, new) \
(cmpxchg(&((v)->counter), old, new))
#define atomic64_xchg(v, new) (xchg(&((v)->counter), new))
static __inline__ int atomic_add_unless(atomic_t *v, int a, int u)
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
static __inline__ long atomic64_add_unless(atomic64_t *v, long a, long u)
#define atomic64_inc_not_zero(v) atomic64_add_unless((v), 1, 0)
#define atomic_add_return(i,v)						\
()
#define atomic64_add_return(i,v)					\
()
static __inline__ int
atomic_add_negative (int i, atomic_t *v)
static __inline__ long
atomic64_add_negative (__s64 i, atomic64_t *v)
#define atomic_sub_return(i,v)						\
()
#define atomic64_sub_return(i,v)					\
()
#define atomic_dec_return(v)		atomic_sub_return(1, (v))
#define atomic_inc_return(v)		atomic_add_return(1, (v))
#define atomic64_dec_return(v)		atomic64_sub_return(1, (v))
#define atomic64_inc_return(v)		atomic64_add_return(1, (v))
#define atomic_sub_and_test(i,v)	(atomic_sub_return((i), (v)) == 0)
#define atomic_dec_and_test(v)		(atomic_sub_return(1, (v)) == 0)
#define atomic_inc_and_test(v)		(atomic_add_return(1, (v)) == 0)
#define atomic64_sub_and_test(i,v)	(atomic64_sub_return((i), (v)) == 0)
#define atomic64_dec_and_test(v)	(atomic64_sub_return(1, (v)) == 0)
#define atomic64_inc_and_test(v)	(atomic64_add_return(1, (v)) == 0)
#define atomic_add(i,v)			atomic_add_return((i), (v))
#define atomic_sub(i,v)			atomic_sub_return((i), (v))
#define atomic_inc(v)			atomic_add(1, (v))
#define atomic_dec(v)			atomic_sub(1, (v))
#define atomic64_add(i,v)		atomic64_add_return((i), (v))
#define atomic64_sub(i,v)		atomic64_sub_return((i), (v))
#define atomic64_inc(v)			atomic64_add(1, (v))
#define atomic64_dec(v)			atomic64_sub(1, (v))
#define smp_mb__before_atomic_dec()	barrier()
#define smp_mb__after_atomic_dec()	barrier()
#define smp_mb__before_atomic_inc()	barrier()
#define smp_mb__after_atomic_inc()	barrier()
