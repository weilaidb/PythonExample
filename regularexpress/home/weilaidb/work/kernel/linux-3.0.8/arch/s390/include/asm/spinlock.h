#define __ASM_SPINLOCK_H
static inline int
_raw_compare_and_swap(volatile unsigned int *lock,
unsigned int old, unsigned int new)
#define arch_spin_is_locked(x) ((x)->owner_cpu != 0)
#define arch_spin_unlock_wait(lock) \
do  while (0)
extern void arch_spin_lock_wait(arch_spinlock_t *);
extern void arch_spin_lock_wait_flags(arch_spinlock_t *, unsigned long flags);
extern int arch_spin_trylock_retry(arch_spinlock_t *);
extern void arch_spin_relax(arch_spinlock_t *lock);
static inline void arch_spin_lock(arch_spinlock_t *lp)
static inline void arch_spin_lock_flags(arch_spinlock_t *lp,
unsigned long flags)
static inline int arch_spin_trylock(arch_spinlock_t *lp)
static inline void arch_spin_unlock(arch_spinlock_t *lp)
#define arch_read_can_lock(x) ((int)(x)->lock >= 0)
#define arch_write_can_lock(x) ((x)->lock == 0)
extern void _raw_read_lock_wait(arch_rwlock_t *lp);
extern void _raw_read_lock_wait_flags(arch_rwlock_t *lp, unsigned long flags);
extern int _raw_read_trylock_retry(arch_rwlock_t *lp);
extern void _raw_write_lock_wait(arch_rwlock_t *lp);
extern void _raw_write_lock_wait_flags(arch_rwlock_t *lp, unsigned long flags);
extern int _raw_write_trylock_retry(arch_rwlock_t *lp);
static inline void arch_read_lock(arch_rwlock_t *rw)
static inline void arch_read_lock_flags(arch_rwlock_t *rw, unsigned long flags)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline void arch_write_lock(arch_rwlock_t *rw)
static inline void arch_write_lock_flags(arch_rwlock_t *rw, unsigned long flags)
static inline void arch_write_unlock(arch_rwlock_t *rw)
static inline int arch_read_trylock(arch_rwlock_t *rw)
static inline int arch_write_trylock(arch_rwlock_t *rw)
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
