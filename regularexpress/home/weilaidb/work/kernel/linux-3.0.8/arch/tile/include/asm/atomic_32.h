#define _ASM_TILE_ATOMIC_32_H
int _atomic_xchg(atomic_t *v, int n);
int _atomic_xchg_add(atomic_t *v, int i);
int _atomic_xchg_add_unless(atomic_t *v, int a, int u);
int _atomic_cmpxchg(atomic_t *v, int o, int n);
static inline int atomic_xchg(atomic_t *v, int n)
static inline int atomic_cmpxchg(atomic_t *v, int o, int n)
static inline void atomic_add(int i, atomic_t *v)
static inline int atomic_add_return(int i, atomic_t *v)
static inline int atomic_add_unless(atomic_t *v, int a, int u)
static inline void atomic_set(atomic_t *v, int n)
typedef struct  atomic64_t;
#define ATOMIC64_INIT(val)
u64 _atomic64_xchg(atomic64_t *v, u64 n);
u64 _atomic64_xchg_add(atomic64_t *v, u64 i);
u64 _atomic64_xchg_add_unless(atomic64_t *v, u64 a, u64 u);
u64 _atomic64_cmpxchg(atomic64_t *v, u64 o, u64 n);
static inline u64 atomic64_read(const atomic64_t *v)
static inline u64 atomic64_xchg(atomic64_t *v, u64 n)
static inline u64 atomic64_cmpxchg(atomic64_t *v, u64 o, u64 n)
static inline void atomic64_add(u64 i, atomic64_t *v)
static inline u64 atomic64_add_return(u64 i, atomic64_t *v)
static inline u64 atomic64_add_unless(atomic64_t *v, u64 a, u64 u)
static inline void atomic64_set(atomic64_t *v, u64 n)
#define atomic64_add_negative(a, v)	(atomic64_add_return((a), (v)) < 0)
#define atomic64_inc(v)			atomic64_add(1LL, (v))
#define atomic64_inc_return(v)		atomic64_add_return(1LL, (v))
#define atomic64_inc_and_test(v)	(atomic64_inc_return(v) == 0)
#define atomic64_sub_return(i, v)	atomic64_add_return(-(i), (v))
#define atomic64_sub_and_test(a, v)	(atomic64_sub_return((a), (v)) == 0)
#define atomic64_sub(i, v)		atomic64_add(-(i), (v))
#define atomic64_dec(v)			atomic64_sub(1LL, (v))
#define atomic64_dec_return(v)		atomic64_sub_return(1LL, (v))
#define atomic64_dec_and_test(v)	(atomic64_dec_return((v)) == 0)
#define atomic64_inc_not_zero(v)	atomic64_add_unless((v), 1LL, 0LL)
#define smp_mb__before_atomic_dec()	smp_mb()
#define smp_mb__before_atomic_inc()	smp_mb()
#define smp_mb__after_atomic_dec()	do  while (0)
#define smp_mb__after_atomic_inc()	do  while (0)
#define ATOMIC_LOCKS_FOUND_VIA_TABLE() \
(!CHIP_HAS_CBOX_HOME_MAP() && defined(CONFIG_SMP))
#if ATOMIC_LOCKS_FOUND_VIA_TABLE()
#define ATOMIC_HASH_L1_SHIFT 6
#define ATOMIC_HASH_L1_SIZE (1 << ATOMIC_HASH_L1_SHIFT)
#define ATOMIC_HASH_L2_SHIFT (CHIP_L2_LOG_LINE_SIZE() - 2)
#define ATOMIC_HASH_L2_SIZE (1 << ATOMIC_HASH_L2_SHIFT)
#define ATOMIC_HASH_SHIFT (PAGE_SHIFT - 3)
#define ATOMIC_HASH_SIZE (1 << ATOMIC_HASH_SHIFT)
extern int atomic_locks[];
#define ATOMIC_LOCK_REG 20
#define ATOMIC_LOCK_REG_NAME r20
void __init_atomic_per_cpu(void);
void __atomic_fault_unlock(int *lock_ptr);
extern struct __get_user __atomic_cmpxchg(volatile int *p,
int *lock, int o, int n);
extern struct __get_user __atomic_xchg(volatile int *p, int *lock, int n);
extern struct __get_user __atomic_xchg_add(volatile int *p, int *lock, int n);
extern struct __get_user __atomic_xchg_add_unless(volatile int *p,
int *lock, int o, int n);
extern struct __get_user __atomic_or(volatile int *p, int *lock, int n);
extern struct __get_user __atomic_andn(volatile int *p, int *lock, int n);
extern struct __get_user __atomic_xor(volatile int *p, int *lock, int n);
extern u64 __atomic64_cmpxchg(volatile u64 *p, int *lock, u64 o, u64 n);
extern u64 __atomic64_xchg(volatile u64 *p, int *lock, u64 n);
extern u64 __atomic64_xchg_add(volatile u64 *p, int *lock, u64 n);
extern u64 __atomic64_xchg_add_unless(volatile u64 *p,
int *lock, u64 o, u64 n);
