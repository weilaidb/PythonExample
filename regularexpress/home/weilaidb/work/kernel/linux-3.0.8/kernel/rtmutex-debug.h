extern void
rt_mutex_deadlock_account_lock(struct rt_mutex *lock, struct task_struct *task);
extern void rt_mutex_deadlock_account_unlock(struct task_struct *task);
extern void debug_rt_mutex_init_waiter(struct rt_mutex_waiter *waiter);
extern void debug_rt_mutex_free_waiter(struct rt_mutex_waiter *waiter);
extern void debug_rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void debug_rt_mutex_lock(struct rt_mutex *lock);
extern void debug_rt_mutex_unlock(struct rt_mutex *lock);
extern void debug_rt_mutex_proxy_lock(struct rt_mutex *lock,
struct task_struct *powner);
extern void debug_rt_mutex_proxy_unlock(struct rt_mutex *lock);
extern void debug_rt_mutex_deadlock(int detect, struct rt_mutex_waiter *waiter,
struct rt_mutex *lock);
extern void debug_rt_mutex_print_deadlock(struct rt_mutex_waiter *waiter);
# define debug_rt_mutex_reset_waiter(w)			\
do  while (0)
static inline int debug_rt_mutex_detect_deadlock(struct rt_mutex_waiter *waiter,
int detect)
