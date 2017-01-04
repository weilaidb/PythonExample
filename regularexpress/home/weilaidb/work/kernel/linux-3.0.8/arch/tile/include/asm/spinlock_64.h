#define _ASM_TILE_SPINLOCK_64_H
#define __ARCH_SPIN_CURRENT_SHIFT	17
#define __ARCH_SPIN_NEXT_MASK		0x7fff
#define __ARCH_SPIN_NEXT_OVERFLOW	0x8000
static inline int arch_spin_current(u32 val)
static inline int arch_spin_next(u32 val)
static inline int arch_spin_is_locked(arch_spinlock_t *lock)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
void arch_spin_unlock_wait(arch_spinlock_t *lock);
void arch_spin_lock_slow(arch_spinlock_t *lock, u32 val);
static inline void arch_spin_lock(arch_spinlock_t *lock)
int arch_spin_trylock(arch_spinlock_t *lock);
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
#define __WRITE_LOCK_BIT (1 << 31)
static inline int arch_write_val_locked(int val)
static inline int arch_read_can_lock(arch_rwlock_t *rw)
static inline int arch_write_can_lock(arch_rwlock_t *rw)
extern void __read_lock_failed(arch_rwlock_t *rw);
static inline void arch_read_lock(arch_rwlock_t *rw)
extern void __write_lock_failed(arch_rwlock_t *rw, u32 val);
static inline void arch_write_lock(arch_rwlock_t *rw)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline void arch_write_unlock(arch_rwlock_t *rw)
static inline int arch_read_trylock(arch_rwlock_t *rw)
static inline int arch_write_trylock(arch_rwlock_t *rw)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
