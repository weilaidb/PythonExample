#if defined(CONFIG_PPC_SPLPAR) || defined(CONFIG_PPC_ISERIES)
void __spin_yield(arch_spinlock_t *lock)
void __rw_yield(arch_rwlock_t *rw)
void arch_spin_unlock_wait(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_unlock_wait);
