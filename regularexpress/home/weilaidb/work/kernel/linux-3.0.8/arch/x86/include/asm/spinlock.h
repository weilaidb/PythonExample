#define _ASM_X86_SPINLOCK_H
# define LOCK_PTR_REG "a"
# define REG_PTR_MODE "k"
# define LOCK_PTR_REG "D"
# define REG_PTR_MODE "q"
#if defined(CONFIG_X86_32) && \
(defined(CONFIG_X86_OOSTORE) || defined(CONFIG_X86_PPRO_FENCE))
# define UNLOCK_LOCK_PREFIX LOCK_PREFIX
# define UNLOCK_LOCK_PREFIX
#if (NR_CPUS < 256)
#define TICKET_SHIFT 8
static __always_inline void __ticket_spin_lock(arch_spinlock_t *lock)
static __always_inline int __ticket_spin_trylock(arch_spinlock_t *lock)
static __always_inline void __ticket_spin_unlock(arch_spinlock_t *lock)
#define TICKET_SHIFT 16
static __always_inline void __ticket_spin_lock(arch_spinlock_t *lock)
static __always_inline int __ticket_spin_trylock(arch_spinlock_t *lock)
static __always_inline void __ticket_spin_unlock(arch_spinlock_t *lock)
static inline int __ticket_spin_is_locked(arch_spinlock_t *lock)
static inline int __ticket_spin_is_contended(arch_spinlock_t *lock)
static inline int arch_spin_is_locked(arch_spinlock_t *lock)
static inline int arch_spin_is_contended(arch_spinlock_t *lock)
#define arch_spin_is_contended	arch_spin_is_contended
static __always_inline void arch_spin_lock(arch_spinlock_t *lock)
static __always_inline int arch_spin_trylock(arch_spinlock_t *lock)
static __always_inline void arch_spin_unlock(arch_spinlock_t *lock)
static __always_inline void arch_spin_lock_flags(arch_spinlock_t *lock,
unsigned long flags)
static inline void arch_spin_unlock_wait(arch_spinlock_t *lock)
static inline int arch_read_can_lock(arch_rwlock_t *lock)
static inline int arch_write_can_lock(arch_rwlock_t *lock)
static inline void arch_read_lock(arch_rwlock_t *rw)
static inline void arch_write_lock(arch_rwlock_t *rw)
static inline int arch_read_trylock(arch_rwlock_t *lock)
static inline int arch_write_trylock(arch_rwlock_t *lock)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline void arch_write_unlock(arch_rwlock_t *rw)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
static inline void smp_mb__after_lock(void)
#define ARCH_HAS_SMP_MB_AFTER_LOCK
