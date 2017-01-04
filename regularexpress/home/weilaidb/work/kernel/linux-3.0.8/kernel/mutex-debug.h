extern void debug_mutex_lock_common(struct mutex *lock,
struct mutex_waiter *waiter);
extern void debug_mutex_wake_waiter(struct mutex *lock,
struct mutex_waiter *waiter);
extern void debug_mutex_free_waiter(struct mutex_waiter *waiter);
extern void debug_mutex_add_waiter(struct mutex *lock,
struct mutex_waiter *waiter,
struct thread_info *ti);
extern void mutex_remove_waiter(struct mutex *lock, struct mutex_waiter *waiter,
struct thread_info *ti);
extern void debug_mutex_unlock(struct mutex *lock);
extern void debug_mutex_init(struct mutex *lock, const char *name,
struct lock_class_key *key);
static inline void mutex_set_owner(struct mutex *lock)
static inline void mutex_clear_owner(struct mutex *lock)
#define spin_lock_mutex(lock, flags)			\
do  while (0)
#define spin_unlock_mutex(lock, flags)				\
do  while (0)
