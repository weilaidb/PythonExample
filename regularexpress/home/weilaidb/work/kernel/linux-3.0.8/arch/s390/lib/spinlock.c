int spin_retry = 1000;
static int __init spin_retry_setup(char *str)
__setup("spin_retry=", spin_retry_setup);
static inline void _raw_yield(void)
static inline void _raw_yield_cpu(int cpu)
void arch_spin_lock_wait(arch_spinlock_t *lp)
EXPORT_SYMBOL(arch_spin_lock_wait);
void arch_spin_lock_wait_flags(arch_spinlock_t *lp, unsigned long flags)
EXPORT_SYMBOL(arch_spin_lock_wait_flags);
int arch_spin_trylock_retry(arch_spinlock_t *lp)
EXPORT_SYMBOL(arch_spin_trylock_retry);
void arch_spin_relax(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_relax);
void _raw_read_lock_wait(arch_rwlock_t *rw)
EXPORT_SYMBOL(_raw_read_lock_wait);
void _raw_read_lock_wait_flags(arch_rwlock_t *rw, unsigned long flags)
EXPORT_SYMBOL(_raw_read_lock_wait_flags);
int _raw_read_trylock_retry(arch_rwlock_t *rw)
EXPORT_SYMBOL(_raw_read_trylock_retry);
void _raw_write_lock_wait(arch_rwlock_t *rw)
EXPORT_SYMBOL(_raw_write_lock_wait);
void _raw_write_lock_wait_flags(arch_rwlock_t *rw, unsigned long flags)
EXPORT_SYMBOL(_raw_write_lock_wait_flags);
int _raw_write_trylock_retry(arch_rwlock_t *rw)
EXPORT_SYMBOL(_raw_write_trylock_retry);
