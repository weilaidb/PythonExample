#define NR_LOCKS	16
static union  atomic64_lock[NR_LOCKS] __cacheline_aligned_in_smp;
static inline spinlock_t *lock_addr(const atomic64_t *v)
long long atomic64_read(const atomic64_t *v)
EXPORT_SYMBOL(atomic64_read);
void atomic64_set(atomic64_t *v, long long i)
EXPORT_SYMBOL(atomic64_set);
void atomic64_add(long long a, atomic64_t *v)
EXPORT_SYMBOL(atomic64_add);
long long atomic64_add_return(long long a, atomic64_t *v)
EXPORT_SYMBOL(atomic64_add_return);
void atomic64_sub(long long a, atomic64_t *v)
EXPORT_SYMBOL(atomic64_sub);
long long atomic64_sub_return(long long a, atomic64_t *v)
EXPORT_SYMBOL(atomic64_sub_return);
long long atomic64_dec_if_positive(atomic64_t *v)
EXPORT_SYMBOL(atomic64_dec_if_positive);
long long atomic64_cmpxchg(atomic64_t *v, long long o, long long n)
EXPORT_SYMBOL(atomic64_cmpxchg);
long long atomic64_xchg(atomic64_t *v, long long new)
EXPORT_SYMBOL(atomic64_xchg);
int atomic64_add_unless(atomic64_t *v, long long a, long long u)
EXPORT_SYMBOL(atomic64_add_unless);
static int init_atomic64_lock(void)
pure_initcall(init_atomic64_lock);
