#define spin_lock_mutex(lock, flags) \
do  while (0)
#define spin_unlock_mutex(lock, flags) \
do  while (0)
#define mutex_remove_waiter(lock, waiter, ti) \
__list_del((waiter)->list.prev, (waiter)->list.next)
static inline void mutex_set_owner(struct mutex *lock)
static inline void mutex_clear_owner(struct mutex *lock)
static inline void mutex_set_owner(struct mutex *lock)
static inline void mutex_clear_owner(struct mutex *lock)
#define debug_mutex_wake_waiter(lock, waiter)		do  while (0)
#define debug_mutex_free_waiter(waiter)			do  while (0)
#define debug_mutex_add_waiter(lock, waiter, ti)	do  while (0)
#define debug_mutex_unlock(lock)			do  while (0)
#define debug_mutex_init(lock, name, key)		do  while (0)
static inline void
debug_mutex_lock_common(struct mutex *lock, struct mutex_waiter *waiter)
