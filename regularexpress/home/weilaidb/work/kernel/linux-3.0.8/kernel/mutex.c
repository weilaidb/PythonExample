# include "mutex-debug.h"
# include <asm-generic/mutex-null.h>
# include "mutex.h"
# include <asm/mutex.h>
void
__mutex_init(struct mutex *lock, const char *name, struct lock_class_key *key)
EXPORT_SYMBOL(__mutex_init);
static __used noinline void __sched
__mutex_lock_slowpath(atomic_t *lock_count);
void __sched mutex_lock(struct mutex *lock)
EXPORT_SYMBOL(mutex_lock);
static __used noinline void __sched __mutex_unlock_slowpath(atomic_t *lock_count);
void __sched mutex_unlock(struct mutex *lock)
EXPORT_SYMBOL(mutex_unlock);
static inline int __sched
__mutex_lock_common(struct mutex *lock, long state, unsigned int subclass,
struct lockdep_map *nest_lock, unsigned long ip)
void __sched
mutex_lock_nested(struct mutex *lock, unsigned int subclass)
EXPORT_SYMBOL_GPL(mutex_lock_nested);
void __sched
_mutex_lock_nest_lock(struct mutex *lock, struct lockdep_map *nest)
EXPORT_SYMBOL_GPL(_mutex_lock_nest_lock);
int __sched
mutex_lock_killable_nested(struct mutex *lock, unsigned int subclass)
EXPORT_SYMBOL_GPL(mutex_lock_killable_nested);
int __sched
mutex_lock_interruptible_nested(struct mutex *lock, unsigned int subclass)
EXPORT_SYMBOL_GPL(mutex_lock_interruptible_nested);
static inline void
__mutex_unlock_common_slowpath(atomic_t *lock_count, int nested)
static __used noinline void
__mutex_unlock_slowpath(atomic_t *lock_count)
static noinline int __sched
__mutex_lock_killable_slowpath(atomic_t *lock_count);
static noinline int __sched
__mutex_lock_interruptible_slowpath(atomic_t *lock_count);
int __sched mutex_lock_interruptible(struct mutex *lock)
EXPORT_SYMBOL(mutex_lock_interruptible);
int __sched mutex_lock_killable(struct mutex *lock)
EXPORT_SYMBOL(mutex_lock_killable);
static __used noinline void __sched
__mutex_lock_slowpath(atomic_t *lock_count)
static noinline int __sched
__mutex_lock_killable_slowpath(atomic_t *lock_count)
static noinline int __sched
__mutex_lock_interruptible_slowpath(atomic_t *lock_count)
static inline int __mutex_trylock_slowpath(atomic_t *lock_count)
int __sched mutex_trylock(struct mutex *lock)
EXPORT_SYMBOL(mutex_trylock);
int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock)
EXPORT_SYMBOL(atomic_dec_and_mutex_lock);
