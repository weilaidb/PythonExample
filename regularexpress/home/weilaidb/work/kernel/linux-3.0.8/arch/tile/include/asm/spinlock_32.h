#define _ASM_TILE_SPINLOCK_32_H
#define TICKET_QUANTUM 2
static inline int arch_spin_is_locked(arch_spinlock_t *lock)
void arch_spin_lock(arch_spinlock_t *lock);
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
int arch_spin_trylock(arch_spinlock_t *lock);
static inline void arch_spin_unlock(arch_spinlock_t *lock)
void arch_spin_unlock_wait(arch_spinlock_t *lock);
#define _WR_NEXT_SHIFT	8
#define _WR_CURR_SHIFT  16
#define _WR_WIDTH       8
#define _RD_COUNT_SHIFT 24
#define _RD_COUNT_WIDTH 8
static inline int arch_read_can_lock(arch_rwlock_t *rwlock)
static inline int arch_write_can_lock(arch_rwlock_t *rwlock)
void arch_read_lock(arch_rwlock_t *rwlock);
void arch_write_lock(arch_rwlock_t *rwlock);
int arch_read_trylock(arch_rwlock_t *rwlock);
int arch_write_trylock(arch_rwlock_t *rwlock);
void arch_read_unlock(arch_rwlock_t *rwlock);
void arch_write_unlock(arch_rwlock_t *rwlock);
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
