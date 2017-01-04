#define __LINUX_SPINLOCK_API_SMP_H
# error "please don't include this file directly"
int in_lock_functions(unsigned long addr);
#define assert_raw_spin_locked(x)	BUG_ON(!raw_spin_is_locked(x))
void __lockfunc _raw_spin_lock(raw_spinlock_t *lock)		__acquires(lock);
void __lockfunc _raw_spin_lock_nested(raw_spinlock_t *lock, int subclass)
__acquires(lock);
void __lockfunc
_raw_spin_lock_nest_lock(raw_spinlock_t *lock, struct lockdep_map *map)
__acquires(lock);
void __lockfunc _raw_spin_lock_bh(raw_spinlock_t *lock)		__acquires(lock);
void __lockfunc _raw_spin_lock_irq(raw_spinlock_t *lock)
__acquires(lock);
unsigned long __lockfunc _raw_spin_lock_irqsave(raw_spinlock_t *lock)
__acquires(lock);
unsigned long __lockfunc
_raw_spin_lock_irqsave_nested(raw_spinlock_t *lock, int subclass)
__acquires(lock);
int __lockfunc _raw_spin_trylock(raw_spinlock_t *lock);
int __lockfunc _raw_spin_trylock_bh(raw_spinlock_t *lock);
void __lockfunc _raw_spin_unlock(raw_spinlock_t *lock)		__releases(lock);
void __lockfunc _raw_spin_unlock_bh(raw_spinlock_t *lock)	__releases(lock);
void __lockfunc _raw_spin_unlock_irq(raw_spinlock_t *lock)	__releases(lock);
void __lockfunc
_raw_spin_unlock_irqrestore(raw_spinlock_t *lock, unsigned long flags)
__releases(lock);
#define _raw_spin_lock(lock) __raw_spin_lock(lock)
#define _raw_spin_lock_bh(lock) __raw_spin_lock_bh(lock)
#define _raw_spin_lock_irq(lock) __raw_spin_lock_irq(lock)
#define _raw_spin_lock_irqsave(lock) __raw_spin_lock_irqsave(lock)
#define _raw_spin_trylock(lock) __raw_spin_trylock(lock)
#define _raw_spin_trylock_bh(lock) __raw_spin_trylock_bh(lock)
#define _raw_spin_unlock(lock) __raw_spin_unlock(lock)
#define _raw_spin_unlock_bh(lock) __raw_spin_unlock_bh(lock)
#define _raw_spin_unlock_irq(lock) __raw_spin_unlock_irq(lock)
#define _raw_spin_unlock_irqrestore(lock, flags) __raw_spin_unlock_irqrestore(lock, flags)
static inline int __raw_spin_trylock(raw_spinlock_t *lock)
#if !defined(CONFIG_GENERIC_LOCKBREAK) || defined(CONFIG_DEBUG_LOCK_ALLOC)
static inline unsigned long __raw_spin_lock_irqsave(raw_spinlock_t *lock)
static inline void __raw_spin_lock_irq(raw_spinlock_t *lock)
static inline void __raw_spin_lock_bh(raw_spinlock_t *lock)
static inline void __raw_spin_lock(raw_spinlock_t *lock)
static inline void __raw_spin_unlock(raw_spinlock_t *lock)
static inline void __raw_spin_unlock_irqrestore(raw_spinlock_t *lock,
unsigned long flags)
static inline void __raw_spin_unlock_irq(raw_spinlock_t *lock)
static inline void __raw_spin_unlock_bh(raw_spinlock_t *lock)
static inline int __raw_spin_trylock_bh(raw_spinlock_t *lock)
