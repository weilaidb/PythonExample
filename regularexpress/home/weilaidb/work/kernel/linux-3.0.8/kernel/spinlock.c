#if !defined(CONFIG_GENERIC_LOCKBREAK) || defined(CONFIG_DEBUG_LOCK_ALLOC)
#define raw_read_can_lock(l)	read_can_lock(l)
#define raw_write_can_lock(l)	write_can_lock(l)
#define BUILD_LOCK_OPS(op, locktype)					\
void __lockfunc __raw_##op##_lock(locktype##_t *lock)			\
\
\
unsigned long __lockfunc __raw_##op##_lock_irqsave(locktype##_t *lock)	\
\
\
void __lockfunc __raw_##op##_lock_irq(locktype##_t *lock)		\
\
\
void __lockfunc __raw_##op##_lock_bh(locktype##_t *lock)		\
\
BUILD_LOCK_OPS(spin, raw_spinlock);
BUILD_LOCK_OPS(read, rwlock);
BUILD_LOCK_OPS(write, rwlock);
int __lockfunc _raw_spin_trylock(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_trylock);
int __lockfunc _raw_spin_trylock_bh(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_trylock_bh);
void __lockfunc _raw_spin_lock(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_lock);
unsigned long __lockfunc _raw_spin_lock_irqsave(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_lock_irqsave);
void __lockfunc _raw_spin_lock_irq(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_lock_irq);
void __lockfunc _raw_spin_lock_bh(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_lock_bh);
void __lockfunc _raw_spin_unlock(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_unlock);
void __lockfunc _raw_spin_unlock_irqrestore(raw_spinlock_t *lock, unsigned long flags)
EXPORT_SYMBOL(_raw_spin_unlock_irqrestore);
void __lockfunc _raw_spin_unlock_irq(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_unlock_irq);
void __lockfunc _raw_spin_unlock_bh(raw_spinlock_t *lock)
EXPORT_SYMBOL(_raw_spin_unlock_bh);
int __lockfunc _raw_read_trylock(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_trylock);
void __lockfunc _raw_read_lock(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_lock);
unsigned long __lockfunc _raw_read_lock_irqsave(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_lock_irqsave);
void __lockfunc _raw_read_lock_irq(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_lock_irq);
void __lockfunc _raw_read_lock_bh(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_lock_bh);
void __lockfunc _raw_read_unlock(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_unlock);
void __lockfunc _raw_read_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
EXPORT_SYMBOL(_raw_read_unlock_irqrestore);
void __lockfunc _raw_read_unlock_irq(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_unlock_irq);
void __lockfunc _raw_read_unlock_bh(rwlock_t *lock)
EXPORT_SYMBOL(_raw_read_unlock_bh);
int __lockfunc _raw_write_trylock(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_trylock);
void __lockfunc _raw_write_lock(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_lock);
unsigned long __lockfunc _raw_write_lock_irqsave(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_lock_irqsave);
void __lockfunc _raw_write_lock_irq(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_lock_irq);
void __lockfunc _raw_write_lock_bh(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_lock_bh);
void __lockfunc _raw_write_unlock(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_unlock);
void __lockfunc _raw_write_unlock_irqrestore(rwlock_t *lock, unsigned long flags)
EXPORT_SYMBOL(_raw_write_unlock_irqrestore);
void __lockfunc _raw_write_unlock_irq(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_unlock_irq);
void __lockfunc _raw_write_unlock_bh(rwlock_t *lock)
EXPORT_SYMBOL(_raw_write_unlock_bh);
void __lockfunc _raw_spin_lock_nested(raw_spinlock_t *lock, int subclass)
EXPORT_SYMBOL(_raw_spin_lock_nested);
unsigned long __lockfunc _raw_spin_lock_irqsave_nested(raw_spinlock_t *lock,
int subclass)
EXPORT_SYMBOL(_raw_spin_lock_irqsave_nested);
void __lockfunc _raw_spin_lock_nest_lock(raw_spinlock_t *lock,
struct lockdep_map *nest_lock)
EXPORT_SYMBOL(_raw_spin_lock_nest_lock);
notrace int in_lock_functions(unsigned long addr)
EXPORT_SYMBOL(in_lock_functions);
