void debug_mutex_lock_common(struct mutex *lock, struct mutex_waiter *waiter)
void debug_mutex_wake_waiter(struct mutex *lock, struct mutex_waiter *waiter)
void debug_mutex_free_waiter(struct mutex_waiter *waiter)
void debug_mutex_add_waiter(struct mutex *lock, struct mutex_waiter *waiter,
struct thread_info *ti)
void mutex_remove_waiter(struct mutex *lock, struct mutex_waiter *waiter,
struct thread_info *ti)
void debug_mutex_unlock(struct mutex *lock)
void debug_mutex_init(struct mutex *lock, const char *name,
struct lock_class_key *key)
void mutex_destroy(struct mutex *lock)
EXPORT_SYMBOL_GPL(mutex_destroy);
