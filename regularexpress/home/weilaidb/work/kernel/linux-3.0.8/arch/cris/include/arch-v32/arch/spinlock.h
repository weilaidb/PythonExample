#define __ASM_ARCH_SPINLOCK_H
#define RW_LOCK_BIAS 0x01000000
extern void cris_spin_unlock(void *l, int val);
extern void cris_spin_lock(void *l);
extern int cris_spin_trylock(void *l);
static inline int arch_spin_is_locked(arch_spinlock_t *x)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
static inline void arch_spin_unlock_wait(arch_spinlock_t *lock)
static inline int arch_spin_trylock(arch_spinlock_t *lock)
static inline void arch_spin_lock(arch_spinlock_t *lock)
static inline void
arch_spin_lock_flags(arch_spinlock_t *lock, unsigned long flags)
static inline int arch_read_can_lock(arch_rwlock_t *x)
static inline int arch_write_can_lock(arch_rwlock_t *x)
static  inline void arch_read_lock(arch_rwlock_t *rw)
static  inline void arch_write_lock(arch_rwlock_t *rw)
static  inline void arch_read_unlock(arch_rwlock_t *rw)
static  inline void arch_write_unlock(arch_rwlock_t *rw)
static  inline int arch_read_trylock(arch_rwlock_t *rw)
static  inline int arch_write_trylock(arch_rwlock_t *rw)
#define _raw_read_lock_flags(lock, flags) _raw_read_lock(lock)
#define _raw_write_lock_flags(lock, flags) _raw_write_lock(lock)
#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
