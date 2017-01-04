#define __SPARC_SPINLOCK_H
#define arch_spin_is_locked(lock) (*((volatile unsigned char *)(lock)) != 0)
#define arch_spin_unlock_wait(lock) \
do  while (0)
static inline void arch_spin_lock(arch_spinlock_t *lock)
static inline int arch_spin_trylock(arch_spinlock_t *lock)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
static inline void __arch_read_lock(arch_rwlock_t *rw)
#define arch_read_lock(lock) \
do  while(0)
static inline void __arch_read_unlock(arch_rwlock_t *rw)
#define arch_read_unlock(lock) \
do  while(0)
static inline void arch_write_lock(arch_rwlock_t *rw)
static void inline arch_write_unlock(arch_rwlock_t *lock)
static inline int arch_write_trylock(arch_rwlock_t *rw)
static inline int __arch_read_trylock(arch_rwlock_t *rw)
#define arch_read_trylock(lock) \
()
#define arch_spin_lock_flags(lock, flags) arch_spin_lock(lock)
#define arch_read_lock_flags(rw, flags)   arch_read_lock(rw)
#define arch_write_lock_flags(rw, flags)  arch_write_lock(rw)
#define arch_spin_relax(lock)	cpu_relax()
#define arch_read_relax(lock)	cpu_relax()
#define arch_write_relax(lock)	cpu_relax()
#define arch_read_can_lock(rw) (!((rw)->lock & 0xff))
#define arch_write_can_lock(rw) (!(rw)->lock)
