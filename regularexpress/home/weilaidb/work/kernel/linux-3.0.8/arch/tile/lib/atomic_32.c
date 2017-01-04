#if ATOMIC_LOCKS_FOUND_VIA_TABLE()
struct atomic_locks_on_cpu  __attribute__((aligned(ATOMIC_HASH_L2_SIZE * 4)));
static DEFINE_PER_CPU(struct atomic_locks_on_cpu, atomic_lock_pool);
static struct atomic_locks_on_cpu __initdata initial_atomic_locks;
struct atomic_locks_on_cpu *atomic_lock_ptr[ATOMIC_HASH_L1_SIZE]
__write_once = ;
int atomic_locks[PAGE_SIZE / sizeof(int)] __page_aligned_bss;
static inline int *__atomic_hashed_lock(volatile void *v)
static int is_atomic_lock(int *p)
void __atomic_fault_unlock(int *irqlock_word)
static inline int *__atomic_setup(volatile void *v)
int _atomic_xchg(atomic_t *v, int n)
EXPORT_SYMBOL(_atomic_xchg);
int _atomic_xchg_add(atomic_t *v, int i)
EXPORT_SYMBOL(_atomic_xchg_add);
int _atomic_xchg_add_unless(atomic_t *v, int a, int u)
EXPORT_SYMBOL(_atomic_xchg_add_unless);
int _atomic_cmpxchg(atomic_t *v, int o, int n)
EXPORT_SYMBOL(_atomic_cmpxchg);
unsigned long _atomic_or(volatile unsigned long *p, unsigned long mask)
EXPORT_SYMBOL(_atomic_or);
unsigned long _atomic_andn(volatile unsigned long *p, unsigned long mask)
EXPORT_SYMBOL(_atomic_andn);
unsigned long _atomic_xor(volatile unsigned long *p, unsigned long mask)
EXPORT_SYMBOL(_atomic_xor);
u64 _atomic64_xchg(atomic64_t *v, u64 n)
EXPORT_SYMBOL(_atomic64_xchg);
u64 _atomic64_xchg_add(atomic64_t *v, u64 i)
EXPORT_SYMBOL(_atomic64_xchg_add);
u64 _atomic64_xchg_add_unless(atomic64_t *v, u64 a, u64 u)
EXPORT_SYMBOL(_atomic64_xchg_add_unless);
u64 _atomic64_cmpxchg(atomic64_t *v, u64 o, u64 n)
EXPORT_SYMBOL(_atomic64_cmpxchg);
static inline int *__futex_setup(int __user *v)
struct __get_user futex_set(u32 __user *v, int i)
struct __get_user futex_add(u32 __user *v, int n)
struct __get_user futex_or(u32 __user *v, int n)
struct __get_user futex_andn(u32 __user *v, int n)
struct __get_user futex_xor(u32 __user *v, int n)
struct __get_user futex_cmpxchg(u32 __user *v, int o, int n)
struct __get_user __atomic_bad_address(int __user *addr)
#if CHIP_HAS_CBOX_HOME_MAP()
static int __init noatomichash(char *str)
__setup("noatomichash", noatomichash);
void __init __init_atomic_per_cpu(void)
