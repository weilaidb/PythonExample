#define _ASM_X86_ATOMIC_H
#define ATOMIC_INIT(i)
static inline int atomic_read(const atomic_t *v)
static inline void atomic_set(atomic_t *v, int i)
static inline void atomic_add(int i, atomic_t *v)
static inline void atomic_sub(int i, atomic_t *v)
static inline int atomic_sub_and_test(int i, atomic_t *v)
static inline void atomic_inc(atomic_t *v)
static inline void atomic_dec(atomic_t *v)
static inline int atomic_dec_and_test(atomic_t *v)
static inline int atomic_inc_and_test(atomic_t *v)
static inline int atomic_add_negative(int i, atomic_t *v)
static inline int atomic_add_return(int i, atomic_t *v)
static inline int atomic_sub_return(int i, atomic_t *v)
#define atomic_inc_return(v)  (atomic_add_return(1, v))
#define atomic_dec_return(v)  (atomic_sub_return(1, v))
static inline int atomic_cmpxchg(atomic_t *v, int old, int new)
static inline int atomic_xchg(atomic_t *v, int new)
static inline int atomic_add_unless(atomic_t *v, int a, int u)
#define atomic_inc_not_zero(v) atomic_add_unless((v), 1, 0)
static inline int atomic_dec_if_positive(atomic_t *v)
static inline short int atomic_inc_short(short int *v)
static inline void atomic_or_long(unsigned long *v1, unsigned long v2)
#define atomic_clear_mask(mask, addr)				\
asm volatile(LOCK_PREFIX "andl %0,%1"			\
: : "r" (~(mask)), "m" (*(addr)) : "memory")
#define atomic_set_mask(mask, addr)				\
asm volatile(LOCK_PREFIX "orl %0,%1"			\
: : "r" ((unsigned)(mask)), "m" (*(addr))	\
: "memory")
#define smp_mb__before_atomic_dec()	barrier()
#define smp_mb__after_atomic_dec()	barrier()
#define smp_mb__before_atomic_inc()	barrier()
#define smp_mb__after_atomic_inc()	barrier()
# include "atomic64_32.h"
# include "atomic64_64.h"
