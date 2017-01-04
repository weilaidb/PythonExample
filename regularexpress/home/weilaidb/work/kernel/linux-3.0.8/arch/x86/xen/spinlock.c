static struct xen_spinlock_stats
spinlock_stats;
static u8 zero_stats;
static unsigned lock_timeout = 1 << 10;
#define TIMEOUT lock_timeout
static inline void check_zero(void)
#define ADD_STATS(elem, val)			\
do  while(0)
static inline u64 spin_time_start(void)
static void __spin_time_accum(u64 delta, u32 *array)
static inline void spin_time_accum_spinning(u64 start)
static inline void spin_time_accum_total(u64 start)
static inline void spin_time_accum_blocked(u64 start)
#define TIMEOUT			(1 << 10)
#define ADD_STATS(elem, val)	do  while(0)
static inline u64 spin_time_start(void)
static inline void spin_time_accum_total(u64 start)
static inline void spin_time_accum_spinning(u64 start)
static inline void spin_time_accum_blocked(u64 start)
struct xen_spinlock ;
static int xen_spin_is_locked(struct arch_spinlock *lock)
static int xen_spin_is_contended(struct arch_spinlock *lock)
static int xen_spin_trylock(struct arch_spinlock *lock)
static DEFINE_PER_CPU(int, lock_kicker_irq) = -1;
static DEFINE_PER_CPU(struct xen_spinlock *, lock_spinners);
static inline struct xen_spinlock *spinning_lock(struct xen_spinlock *xl)
static inline void unspinning_lock(struct xen_spinlock *xl, struct xen_spinlock *prev)
static noinline int xen_spin_lock_slow(struct arch_spinlock *lock, bool irq_enable)
static inline void __xen_spin_lock(struct arch_spinlock *lock, bool irq_enable)
static void xen_spin_lock(struct arch_spinlock *lock)
static void xen_spin_lock_flags(struct arch_spinlock *lock, unsigned long flags)
static noinline void xen_spin_unlock_slow(struct xen_spinlock *xl)
static void xen_spin_unlock(struct arch_spinlock *lock)
static irqreturn_t dummy_handler(int irq, void *dev_id)
void __cpuinit xen_init_lock_cpu(int cpu)
void xen_uninit_lock_cpu(int cpu)
void __init xen_init_spinlocks(void)
static struct dentry *d_spin_debug;
static int __init xen_spinlock_debugfs(void)
fs_initcall(xen_spinlock_debugfs);
