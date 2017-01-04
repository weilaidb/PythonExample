#define _ASM_ATOMIC_H
#error not SMP safe
#define smp_mb__before_atomic_dec()	barrier()
#define smp_mb__after_atomic_dec()	barrier()
#define smp_mb__before_atomic_inc()	barrier()
#define smp_mb__after_atomic_inc()	barrier()
#define ATOMIC_INIT(i)
#define atomic_read(v)		(*(volatile int *)&(v)->counter)
#define atomic_set(v, i)	(((v)->counter) = (i))
static inline int atomic_add_return(int i, atomic_t *v)
static inline int atomic_sub_return(int i, atomic_t *v)
extern int atomic_add_return(int i, atomic_t *v);
extern int atomic_sub_return(int i, atomic_t *v);
static inline int atomic_add_negative(int i, atomic_t *v)
static inline void atomic_add(int i, atomic_t *v)
static inline void atomic_sub(int i, atomic_t *v)
static inline void atomic_inc(atomic_t *v)
static inline void atomic_dec(atomic_t *v)
#define atomic_dec_return(v)		atomic_sub_return(1, (v))
#define atomic_inc_return(v)		atomic_add_return(1, (v))
#define atomic_sub_and_test(i,v)	(atomic_sub_return((i), (v)) == 0)
#define atomic_dec_and_test(v)		(atomic_sub_return(1, (v)) == 0)
#define atomic_inc_and_test(v)		(atomic_add_return(1, (v)) == 0)
typedef struct  atomic64_t;
#define ATOMIC64_INIT(i)
static inline long long atomic64_read(atomic64_t *v)
static inline void atomic64_set(atomic64_t *v, long long i)
extern long long atomic64_inc_return(atomic64_t *v);
extern long long atomic64_dec_return(atomic64_t *v);
extern long long atomic64_add_return(long long i, atomic64_t *v);
extern long long atomic64_sub_return(long long i, atomic64_t *v);
static inline long long atomic64_add_negative(long long i, atomic64_t *v)
static inline void atomic64_add(long long i, atomic64_t *v)
static inline void atomic64_sub(long long i, atomic64_t *v)
static inline void atomic64_inc(atomic64_t *v)
static inline void atomic64_dec(atomic64_t *v)
#define atomic64_sub_and_test(i,v)	(atomic64_sub_return((i), (v)) == 0)
#define atomic64_dec_and_test(v)	(atomic64_dec_return((v)) == 0)
#define atomic64_inc_and_test(v)	(atomic64_inc_return((v)) == 0)
extern uint64_t __xchg_64(uint64_t i, volatile void *v);
#define xchg(ptr, x)								\
()
extern uint32_t __xchg_32(uint32_t i, volatile void *v);
#define xchg(ptr, x)										\
()
#define tas(ptr) (xchg((ptr), 1))
#define atomic_cmpxchg(v, old, new)	(cmpxchg(&(v)->counter, old, new))
#define atomic_xchg(v, new)		(xchg(&(v)->counter, new))
#define atomic64_cmpxchg(v, old, new)	(__cmpxchg_64(old, new, &(v)->counter))
#define atomic64_xchg(v, new)		(__xchg_64(new, &(v)->counter))
static __inline__ int atomic_add_unless(atomic_t *v, int a, int u)
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
