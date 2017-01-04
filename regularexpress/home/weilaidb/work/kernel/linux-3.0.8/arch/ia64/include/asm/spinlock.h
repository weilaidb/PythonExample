#define _ASM_IA64_SPINLOCK_H
#define arch_spin_lock_init(x)			((x)->lock = 0)
#define TICKET_SHIFT	17
#define TICKET_BITS	15
#define	TICKET_MASK	((1 << TICKET_BITS) - 1)
static __always_inline void __ticket_spin_lock(arch_spinlock_t *lock)
static __always_inline int __ticket_spin_trylock(arch_spinlock_t *lock)
static __always_inline void __ticket_spin_unlock(arch_spinlock_t *lock)
static __always_inline void __ticket_spin_unlock_wait(arch_spinlock_t *lock)
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
#define arch_read_can_lock(rw)		(*(volatile int *)(rw) >= 0)
#define arch_write_can_lock(rw)	(*(volatile int *)(rw) == 0)
static __always_inline void
arch_read_lock_flags(arch_rwlock_t *lock, unsigned long flags)
#define arch_read_lock(lock) arch_read_lock_flags(lock, 0)
#define arch_read_lock_flags(rw, flags) arch_read_lock(rw)
#define arch_read_lock(rw)								\
do  while (0)
#define arch_read_unlock(rw)					\
do  while (0)
static __always_inline void
arch_write_lock_flags(arch_rwlock_t *lock, unsigned long flags)
#define arch_write_lock(rw) arch_write_lock_flags(rw, 0)
#define arch_write_trylock(rw)							\
()
static inline void arch_write_unlock(arch_rwlock_t *x)
#define arch_write_lock_flags(l, flags) arch_write_lock(l)
#define arch_write_lock(l)								\
()
#define arch_write_trylock(rw)						\
()
static inline void arch_write_unlock(arch_rwlock_t *x)
static inline int arch_read_trylock(arch_rwlock_t *x)
#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
