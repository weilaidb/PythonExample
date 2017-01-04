void arch_spin_lock(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_lock);
int arch_spin_trylock(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_trylock);
void arch_spin_unlock_wait(arch_spinlock_t *lock)
EXPORT_SYMBOL(arch_spin_unlock_wait);
#define WR_NEXT_SHIFT   _WR_NEXT_SHIFT
#define WR_CURR_SHIFT   _WR_CURR_SHIFT
#define WR_WIDTH        _WR_WIDTH
#define WR_MASK         ((1 << WR_WIDTH) - 1)
#define RD_COUNT_SHIFT  _RD_COUNT_SHIFT
#define RD_COUNT_WIDTH  _RD_COUNT_WIDTH
#define RD_COUNT_MASK   ((1 << RD_COUNT_WIDTH) - 1)
inline int arch_read_trylock(arch_rwlock_t *rwlock)
EXPORT_SYMBOL(arch_read_trylock);
void arch_read_lock(arch_rwlock_t *rwlock)
EXPORT_SYMBOL(arch_read_lock);
void arch_read_unlock(arch_rwlock_t *rwlock)
EXPORT_SYMBOL(arch_read_unlock);
void arch_write_lock(arch_rwlock_t *rwlock)
EXPORT_SYMBOL(arch_write_lock);
int arch_write_trylock(arch_rwlock_t *rwlock)
EXPORT_SYMBOL(arch_write_trylock);
void arch_write_unlock(arch_rwlock_t *rwlock)
EXPORT_SYMBOL(arch_write_unlock);
