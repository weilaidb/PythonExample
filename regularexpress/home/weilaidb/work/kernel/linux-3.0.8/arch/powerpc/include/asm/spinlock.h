#define __ASM_SPINLOCK_H
#define arch_spin_is_locked(x)		((x)->slock != 0)
#define LOCK_TOKEN	(*(u32 *)(&get_paca()->lock_token))
#define LOCK_TOKEN	1
#if defined(CONFIG_PPC64) && defined(CONFIG_SMP)
#define CLEAR_IO_SYNC	(get_paca()->io_sync = 0)
#define SYNC_IO		do  while (0)
#define CLEAR_IO_SYNC
#define SYNC_IO
static inline unsigned long __arch_spin_trylock(arch_spinlock_t *lock)
static inline int arch_spin_trylock(arch_spinlock_t *lock)
#if defined(CONFIG_PPC_SPLPAR) || defined(CONFIG_PPC_ISERIES)
#define SHARED_PROCESSOR (get_lppaca()->shared_proc)
extern void __spin_yield(arch_spinlock_t *lock);
extern void __rw_yield(arch_rwlock_t *lock);
#define __spin_yield(x)	barrier()
#define __rw_yield(x)	barrier()
#define SHARED_PROCESSOR	0
static inline void arch_spin_lock(arch_spinlock_t *lock)
static inline
void arch_spin_lock_flags(arch_spinlock_t *lock, unsigned long flags)
static inline void arch_spin_unlock(arch_spinlock_t *lock)
extern void arch_spin_unlock_wait(arch_spinlock_t *lock);
#define arch_spin_unlock_wait(lock) \
do  while (0)
#define arch_read_can_lock(rw)		((rw)->lock >= 0)
#define arch_write_can_lock(rw)	(!(rw)->lock)
#define __DO_SIGN_EXTEND	"extsw	%0,%0\n"
#define WRLOCK_TOKEN		LOCK_TOKEN
#define __DO_SIGN_EXTEND
#define WRLOCK_TOKEN		(-1)
static inline long __arch_read_trylock(arch_rwlock_t *rw)
static inline long __arch_write_trylock(arch_rwlock_t *rw)
static inline void arch_read_lock(arch_rwlock_t *rw)
static inline void arch_write_lock(arch_rwlock_t *rw)
static inline int arch_read_trylock(arch_rwlock_t *rw)
static inline int arch_write_trylock(arch_rwlock_t *rw)
static inline void arch_read_unlock(arch_rwlock_t *rw)
static inline void arch_write_unlock(arch_rwlock_t *rw)
#define arch_read_lock_flags(lock, flags) arch_read_lock(lock)
#define arch_write_lock_flags(lock, flags) arch_write_lock(lock)
#define arch_spin_relax(lock)	__spin_yield(lock)
#define arch_read_relax(lock)	__rw_yield(lock)
#define arch_write_relax(lock)	__rw_yield(lock)
