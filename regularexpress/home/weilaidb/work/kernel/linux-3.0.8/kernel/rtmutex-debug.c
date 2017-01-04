# define TRACE_WARN_ON(x)			WARN_ON(x)
# define TRACE_BUG_ON(x)			BUG_ON(x)
# define TRACE_OFF()						\
do  while (0)
# define TRACE_OFF_NOLOCK()					\
do  while (0)
# define TRACE_BUG_LOCKED()			\
do  while (0)
# define TRACE_WARN_ON_LOCKED(c)		\
do  while (0)
# define TRACE_BUG_ON_LOCKED(c)			\
do  while (0)
# define SMP_TRACE_BUG_ON_LOCKED(c)	TRACE_BUG_ON_LOCKED(c)
# define SMP_TRACE_BUG_ON_LOCKED(c)	do  while (0)
static int rt_trace_on = 1;
static void printk_task(struct task_struct *p)
static void printk_lock(struct rt_mutex *lock, int print_owner)
void rt_mutex_debug_task_free(struct task_struct *task)
void debug_rt_mutex_deadlock(int detect, struct rt_mutex_waiter *act_waiter,
struct rt_mutex *lock)
void debug_rt_mutex_print_deadlock(struct rt_mutex_waiter *waiter)
void debug_rt_mutex_lock(struct rt_mutex *lock)
void debug_rt_mutex_unlock(struct rt_mutex *lock)
void
debug_rt_mutex_proxy_lock(struct rt_mutex *lock, struct task_struct *powner)
void debug_rt_mutex_proxy_unlock(struct rt_mutex *lock)
void debug_rt_mutex_init_waiter(struct rt_mutex_waiter *waiter)
void debug_rt_mutex_free_waiter(struct rt_mutex_waiter *waiter)
void debug_rt_mutex_init(struct rt_mutex *lock, const char *name)
void
rt_mutex_deadlock_account_lock(struct rt_mutex *lock, struct task_struct *task)
void rt_mutex_deadlock_account_unlock(struct task_struct *task)
