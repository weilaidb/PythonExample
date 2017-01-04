#define _ASM_X86_ATOMIC64_32_H
typedef struct  atomic64_t;
#define ATOMIC64_INIT(val)
#define ATOMIC64_ALTERNATIVE_(f, g) "call atomic64_" #g "_cx8"
#define ATOMIC64_ALTERNATIVE_(f, g) ALTERNATIVE("call atomic64_" #f "_386", "call atomic64_" #g "_cx8", X86_FEATURE_CX8)
#define ATOMIC64_ALTERNATIVE(f) ATOMIC64_ALTERNATIVE_(f, f)
static inline long long atomic64_cmpxchg(atomic64_t *v, long long o, long long n)
static inline long long atomic64_xchg(atomic64_t *v, long long n)
static inline void atomic64_set(atomic64_t *v, long long i)
static inline long long atomic64_read(atomic64_t *v)
static inline long long atomic64_add_return(long long i, atomic64_t *v)
static inline long long atomic64_sub_return(long long i, atomic64_t *v)
static inline long long atomic64_inc_return(atomic64_t *v)
static inline long long atomic64_dec_return(atomic64_t *v)
static inline long long atomic64_add(long long i, atomic64_t *v)
static inline long long atomic64_sub(long long i, atomic64_t *v)
static inline int atomic64_sub_and_test(long long i, atomic64_t *v)
static inline void atomic64_inc(atomic64_t *v)
static inline void atomic64_dec(atomic64_t *v)
static inline int atomic64_dec_and_test(atomic64_t *v)
static inline int atomic64_inc_and_test(atomic64_t *v)
static inline int atomic64_add_negative(long long i, atomic64_t *v)
static inline int atomic64_add_unless(atomic64_t *v, long long a, long long u)
static inline int atomic64_inc_not_zero(atomic64_t *v)
static inline long long atomic64_dec_if_positive(atomic64_t *v)
#undef ATOMIC64_ALTERNATIVE
#undef ATOMIC64_ALTERNATIVE_
