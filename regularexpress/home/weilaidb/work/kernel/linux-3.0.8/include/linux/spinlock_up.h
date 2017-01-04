#define __LINUX_SPINLOCK_UP_H
# error "please don't include this file directly"
#define arch_spin_is_locked(x)		((x)->slock == 0)
static inline void arch_spin_lock(arch_spinlock_t *lock)
static inline void
arch_spin_lock_flags(arch_spinlock_t *lock, unsigned long flags)
static inline int arch_spin_trylock(arch_spinlock_t *lock)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
#define arch_read_lock(lock)		do  while (0)
#define arch_write_lock(lock)		do  while (0)
#define arch_read_trylock(lock)	()
#define arch_write_trylock(lock)	()
#define arch_read_unlock(lock)		do  while (0)
#define arch_write_unlock(lock)	do  while (0)
#define arch_spin_is_locked(lock)	((void)(lock), 0)
# define arch_spin_lock(lock)		do  while (0)
# define arch_spin_lock_flags(lock, flags)	do  while (0)
# define arch_spin_unlock(lock)	do  while (0)
# define arch_spin_trylock(lock)	()
#define arch_spin_is_contended(lock)	(((void)(lock), 0))
#define arch_read_can_lock(lock)	(((void)(lock), 1))
#define arch_write_can_lock(lock)	(((void)(lock), 1))
#define arch_spin_unlock_wait(lock) \
do  while (arch_spin_is_locked(lock))
