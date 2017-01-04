#define __LINUX_MUTEX_H
struct mutex ;
struct mutex_waiter ;
# include <linux/mutex-debug.h>
# define __DEBUG_MUTEX_INITIALIZER(lockname)
# define mutex_init(mutex) \
do  while (0)
# define mutex_destroy(mutex)				do  while (0)
# define __DEP_MAP_MUTEX_INITIALIZER(lockname) \
, .dep_map =
# define __DEP_MAP_MUTEX_INITIALIZER(lockname)
#define __MUTEX_INITIALIZER(lockname) \
#define DEFINE_MUTEX(mutexname) \
struct mutex mutexname = __MUTEX_INITIALIZER(mutexname)
extern void __mutex_init(struct mutex *lock, const char *name,
struct lock_class_key *key);
static inline int mutex_is_locked(struct mutex *lock)
extern void mutex_lock_nested(struct mutex *lock, unsigned int subclass);
extern void _mutex_lock_nest_lock(struct mutex *lock, struct lockdep_map *nest_lock);
extern int __must_check mutex_lock_interruptible_nested(struct mutex *lock,
unsigned int subclass);
extern int __must_check mutex_lock_killable_nested(struct mutex *lock,
unsigned int subclass);
#define mutex_lock(lock) mutex_lock_nested(lock, 0)
#define mutex_lock_interruptible(lock) mutex_lock_interruptible_nested(lock, 0)
#define mutex_lock_killable(lock) mutex_lock_killable_nested(lock, 0)
#define mutex_lock_nest_lock(lock, nest_lock)				\
do  while (0)
extern void mutex_lock(struct mutex *lock);
extern int __must_check mutex_lock_interruptible(struct mutex *lock);
extern int __must_check mutex_lock_killable(struct mutex *lock);
# define mutex_lock_nested(lock, subclass) mutex_lock(lock)
# define mutex_lock_interruptible_nested(lock, subclass) mutex_lock_interruptible(lock)
# define mutex_lock_killable_nested(lock, subclass) mutex_lock_killable(lock)
# define mutex_lock_nest_lock(lock, nest_lock) mutex_lock(lock)
extern int mutex_trylock(struct mutex *lock);
extern void mutex_unlock(struct mutex *lock);
extern int atomic_dec_and_mutex_lock(atomic_t *cnt, struct mutex *lock);
#define arch_mutex_cpu_relax()	cpu_relax()
