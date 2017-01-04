static void
rt_mutex_set_owner(struct rt_mutex *lock, struct task_struct *owner)
static inline void clear_rt_mutex_waiters(struct rt_mutex *lock)
static void fixup_rt_mutex_waiters(struct rt_mutex *lock)
#if defined(__HAVE_ARCH_CMPXCHG) && !defined(CONFIG_DEBUG_RT_MUTEXES)
# define rt_mutex_cmpxchg(l,c,n)	(cmpxchg(&l->owner, c, n) == c)
static inline void mark_rt_mutex_waiters(struct rt_mutex *lock)
# define rt_mutex_cmpxchg(l,c,n)	(0)
static inline void mark_rt_mutex_waiters(struct rt_mutex *lock)
int rt_mutex_getprio(struct task_struct *task)
static void __rt_mutex_adjust_prio(struct task_struct *task)
static void rt_mutex_adjust_prio(struct task_struct *task)
int max_lock_depth = 1024;
static int rt_mutex_adjust_prio_chain(struct task_struct *task,
int deadlock_detect,
struct rt_mutex *orig_lock,
struct rt_mutex_waiter *orig_waiter,
struct task_struct *top_task)
static int try_to_take_rt_mutex(struct rt_mutex *lock, struct task_struct *task,
struct rt_mutex_waiter *waiter)
static int task_blocks_on_rt_mutex(struct rt_mutex *lock,
struct rt_mutex_waiter *waiter,
struct task_struct *task,
int detect_deadlock)
static void wakeup_next_waiter(struct rt_mutex *lock)
static void remove_waiter(struct rt_mutex *lock,
struct rt_mutex_waiter *waiter)
void rt_mutex_adjust_pi(struct task_struct *task)
static int __sched
__rt_mutex_slowlock(struct rt_mutex *lock, int state,
struct hrtimer_sleeper *timeout,
struct rt_mutex_waiter *waiter)
static int __sched
rt_mutex_slowlock(struct rt_mutex *lock, int state,
struct hrtimer_sleeper *timeout,
int detect_deadlock)
static inline int
rt_mutex_slowtrylock(struct rt_mutex *lock)
static void __sched
rt_mutex_slowunlock(struct rt_mutex *lock)
static inline int
rt_mutex_fastlock(struct rt_mutex *lock, int state,
int detect_deadlock,
int (*slowfn)(struct rt_mutex *lock, int state,
struct hrtimer_sleeper *timeout,
int detect_deadlock))
static inline int
rt_mutex_timed_fastlock(struct rt_mutex *lock, int state,
struct hrtimer_sleeper *timeout, int detect_deadlock,
int (*slowfn)(struct rt_mutex *lock, int state,
struct hrtimer_sleeper *timeout,
int detect_deadlock))
static inline int
rt_mutex_fasttrylock(struct rt_mutex *lock,
int (*slowfn)(struct rt_mutex *lock))
static inline void
rt_mutex_fastunlock(struct rt_mutex *lock,
void (*slowfn)(struct rt_mutex *lock))
void __sched rt_mutex_lock(struct rt_mutex *lock)
EXPORT_SYMBOL_GPL(rt_mutex_lock);
int __sched rt_mutex_lock_interruptible(struct rt_mutex *lock,
int detect_deadlock)
EXPORT_SYMBOL_GPL(rt_mutex_lock_interruptible);
int
rt_mutex_timed_lock(struct rt_mutex *lock, struct hrtimer_sleeper *timeout,
int detect_deadlock)
EXPORT_SYMBOL_GPL(rt_mutex_timed_lock);
int __sched rt_mutex_trylock(struct rt_mutex *lock)
EXPORT_SYMBOL_GPL(rt_mutex_trylock);
void __sched rt_mutex_unlock(struct rt_mutex *lock)
EXPORT_SYMBOL_GPL(rt_mutex_unlock);
void rt_mutex_destroy(struct rt_mutex *lock)
EXPORT_SYMBOL_GPL(rt_mutex_destroy);
void __rt_mutex_init(struct rt_mutex *lock, const char *name)
EXPORT_SYMBOL_GPL(__rt_mutex_init);
void rt_mutex_init_proxy_locked(struct rt_mutex *lock,
struct task_struct *proxy_owner)
void rt_mutex_proxy_unlock(struct rt_mutex *lock,
struct task_struct *proxy_owner)
int rt_mutex_start_proxy_lock(struct rt_mutex *lock,
struct rt_mutex_waiter *waiter,
struct task_struct *task, int detect_deadlock)
struct task_struct *rt_mutex_next_owner(struct rt_mutex *lock)
int rt_mutex_finish_proxy_lock(struct rt_mutex *lock,
struct hrtimer_sleeper *to,
struct rt_mutex_waiter *waiter,
int detect_deadlock)
