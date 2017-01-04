#define __BFIN_SPINLOCK_H
# include <asm-generic/spinlock.h>
asmlinkage int __raw_spin_is_locked_asm(volatile int *ptr);
asmlinkage void __raw_spin_lock_asm(volatile int *ptr);
asmlinkage int __raw_spin_trylock_asm(volatile int *ptr);
asmlinkage void __raw_spin_unlock_asm(volatile int *ptr);
asmlinkage void __raw_read_lock_asm(volatile int *ptr);
asmlinkage int __raw_read_trylock_asm(volatile int *ptr);
asmlinkage void __raw_read_unlock_asm(volatile int *ptr);
asmlinkage void __raw_write_lock_asm(volatile int *ptr);
asmlinkage int __raw_write_trylock_asm(volatile int *ptr);
asmlinkage void __raw_write_unlock_asm(volatile int *ptr);
static inline int arch_spin_is_locked(arch_spinlock_t *lock)
static inline void arch_spin_lock(arch_spinlock_t *lock)
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
static inline int arch_spin_trylock(arch_spinlock_t *lock)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
static inline void arch_spin_unlock_wait(arch_spinlock_t *lock)
static inline int arch_read_can_lock(arch_rwlock_t *rw)
static inline int arch_write_can_lock(arch_rwlock_t *rw)
static inline void arch_read_lock(arch_rwlock_t *rw)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
static inline int arch_read_trylock(arch_rwlock_t *rw)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline void arch_write_lock(arch_rwlock_t *rw)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
static inline int arch_write_trylock(arch_rwlock_t *rw)
static inline void arch_write_unlock(arch_rwlock_t *rw)
#define arch_spin_relax(lock)  	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
