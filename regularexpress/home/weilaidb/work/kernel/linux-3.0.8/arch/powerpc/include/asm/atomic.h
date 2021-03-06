#define _ASM_POWERPC_ATOMIC_H_
#define ATOMIC_INIT(i)
static __inline__ int atomic_read(const atomic_t *v)
static __inline__ void atomic_set(atomic_t *v, int i)
static __inline__ void atomic_add(int a, atomic_t *v)
static __inline__ int atomic_add_return(int a, atomic_t *v)
#define atomic_add_negative(a, v)	(atomic_add_return((a), (v)) < 0)
static __inline__ void atomic_sub(int a, atomic_t *v)
static __inline__ int atomic_sub_return(int a, atomic_t *v)
static __inline__ void atomic_inc(atomic_t *v)
static __inline__ int atomic_inc_return(atomic_t *v)
#define atomic_inc_and_test(v) (atomic_inc_return(v) == 0)
static __inline__ void atomic_dec(atomic_t *v)
static __inline__ int atomic_dec_return(atomic_t *v)
#define atomic_cmpxchg(v, o, n) (cmpxchg(&((v)->counter), (o), (n)))
#define atomic_xchg(v, new) (xchg(&((v)->counter), new))
static __inline__ int atomic_add_unless(atomic_t *v, int a, int u)
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
#define atomic_sub_and_test(a, v)	(atomic_sub_return((a), (v)) == 0)
#define atomic_dec_and_test(v)		(atomic_dec_return((v)) == 0)
static __inline__ int atomic_dec_if_positive(atomic_t *v)
#define smp_mb__before_atomic_dec()     smp_mb()
#define smp_mb__after_atomic_dec()      smp_mb()
#define smp_mb__before_atomic_inc()     smp_mb()
#define smp_mb__after_atomic_inc()      smp_mb()
#define ATOMIC64_INIT(i)
static __inline__ long atomic64_read(const atomic64_t *v)
static __inline__ void atomic64_set(atomic64_t *v, long i)
static __inline__ void atomic64_add(long a, atomic64_t *v)
static __inline__ long atomic64_add_return(long a, atomic64_t *v)
#define atomic64_add_negative(a, v)	(atomic64_add_return((a), (v)) < 0)
static __inline__ void atomic64_sub(long a, atomic64_t *v)
static __inline__ long atomic64_sub_return(long a, atomic64_t *v)
static __inline__ void atomic64_inc(atomic64_t *v)
static __inline__ long atomic64_inc_return(atomic64_t *v)
#define atomic64_inc_and_test(v) (atomic64_inc_return(v) == 0)
static __inline__ void atomic64_dec(atomic64_t *v)
static __inline__ long atomic64_dec_return(atomic64_t *v)
#define atomic64_sub_and_test(a, v)	(atomic64_sub_return((a), (v)) == 0)
#define atomic64_dec_and_test(v)	(atomic64_dec_return((v)) == 0)
static __inline__ long atomic64_dec_if_positive(atomic64_t *v)
#define atomic64_cmpxchg(v, o, n) (cmpxchg(&((v)->counter), (o), (n)))
#define atomic64_xchg(v, new) (xchg(&((v)->counter), new))
static __inline__ int atomic64_add_unless(atomic64_t *v, long a, long u)
#define atomic64_inc_not_zero(v) atomic64_add_unless((v), 1, 0)
