static inline u32 arch_spin_read_noalloc(void *lock)
void arch_spin_lock_slow(arch_spinlock_t *lock, u32 my_ticket)
EXPORT_SYMBOL(arch_spin_lock_slow);
int arch_spin_trylock(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_trylock);
void arch_spin_unlock_wait(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_unlock_wait);
void __read_lock_failed(arch_rwlock_t *rw)
EXPORT_SYMBOL(__read_lock_failed);
void __write_lock_failed(arch_rwlock_t *rw, u32 val)
EXPORT_SYMBOL(__write_lock_failed);
