#define __LINUX_RWLOCK_API_SMP_H
# error "please don't include this file directly"
void __lockfunc _raw_read_lock(rwlock_t *lock)		__acquires(lock);
void __lockfunc _raw_write_lock(rwlock_t *lock)		__acquires(lock);
void __lockfunc _raw_read_lock_bh(rwlock_t *lock)	__acquires(lock);
void __lockfunc _raw_write_lock_bh(rwlock_t *lock)	__acquires(lock);
void __lockfunc _raw_read_lock_irq(rwlock_t *lock)	__acquires(lock);
void __lockfunc _raw_write_lock_irq(rwlock_t *lock)	__acquires(lock);
unsigned long __lockfunc _raw_read_lock_irqsave(rwlock_t *lock)
__acquires(lock);
unsigned long __lockfunc _raw_write_lock_irqsave(rwlock_t *lock)
__acquires(lock);
int __lockfunc _raw_read_trylock(rwlock_t *lock);
int __lockfunc _raw_write_trylock(rwlock_t *lock);
void __lockfunc _raw_read_unlock(rwlock_t *lock)	__releases(lock);
void __lockfunc _raw_write_unlock(rwlock_t *lock)	__releases(lock);
void __lockfunc _raw_read_unlock_bh(rwlock_t *lock)	__releases(lock);
void __lockfunc _raw_write_unlock_bh(rwlock_t *lock)	__releases(lock);
void __lockfunc _raw_read_unlock_irq(rwlock_t *lock)	__releases(lock);
void __lockfunc _raw_write_unlock_irq(rwlock_t *lock)	__releases(lock);
void __lockfunc
_raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
__releases(lock);
void __lockfunc
_raw_write_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
__releases(lock);
#define _raw_read_lock(lock) __raw_read_lock(lock)
#define _raw_write_lock(lock) __raw_write_lock(lock)
#define _raw_read_lock_bh(lock) __raw_read_lock_bh(lock)
#define _raw_write_lock_bh(lock) __raw_write_lock_bh(lock)
#define _raw_read_lock_irq(lock) __raw_read_lock_irq(lock)
#define _raw_write_lock_irq(lock) __raw_write_lock_irq(lock)
#define _raw_read_lock_irqsave(lock) __raw_read_lock_irqsave(lock)
#define _raw_write_lock_irqsave(lock) __raw_write_lock_irqsave(lock)
#define _raw_read_trylock(lock) __raw_read_trylock(lock)
#define _raw_write_trylock(lock) __raw_write_trylock(lock)
#define _raw_read_unlock(lock) __raw_read_unlock(lock)
#define _raw_write_unlock(lock) __raw_write_unlock(lock)
#define _raw_read_unlock_bh(lock) __raw_read_unlock_bh(lock)
#define _raw_write_unlock_bh(lock) __raw_write_unlock_bh(lock)
#define _raw_read_unlock_irq(lock) __raw_read_unlock_irq(lock)
#define _raw_write_unlock_irq(lock) __raw_write_unlock_irq(lock)
#define _raw_read_unlock_irqrestore(lock, flags) \
__raw_read_unlock_irqrestore(lock, flags)
#define _raw_write_unlock_irqrestore(lock, flags) \
__raw_write_unlock_irqrestore(lock, flags)
static inline int __raw_read_trylock(rwlock_t *lock)
static inline int __raw_write_trylock(rwlock_t *lock)
#if !defined(CONFIG_GENERIC_LOCKBREAK) || defined(CONFIG_DEBUG_LOCK_ALLOC)
static inline void __raw_read_lock(rwlock_t *lock)
static inline unsigned long __raw_read_lock_irqsave(rwlock_t *lock)
static inline void __raw_read_lock_irq(rwlock_t *lock)
static inline void __raw_read_lock_bh(rwlock_t *lock)
static inline unsigned long __raw_write_lock_irqsave(rwlock_t *lock)
static inline void __raw_write_lock_irq(rwlock_t *lock)
static inline void __raw_write_lock_bh(rwlock_t *lock)
static inline void __raw_write_lock(rwlock_t *lock)
static inline void __raw_write_unlock(rwlock_t *lock)
static inline void __raw_read_unlock(rwlock_t *lock)
static inline void
__raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
static inline void __raw_read_unlock_irq(rwlock_t *lock)
static inline void __raw_read_unlock_bh(rwlock_t *lock)
static inline void __raw_write_unlock_irqrestore(rwlock_t *lock,
unsigned long flags)
static inline void __raw_write_unlock_irq(rwlock_t *lock)
static inline void __raw_write_unlock_bh(rwlock_t *lock)
