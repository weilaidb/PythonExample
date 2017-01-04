#define __LINUX_RT_MUTEX_H
extern int max_lock_depth;
struct rt_mutex ;
struct rt_mutex_waiter;
struct hrtimer_sleeper;
extern int rt_mutex_debug_check_no_locks_freed(const void *from,
unsigned long len);
extern void rt_mutex_debug_check_no_locks_held(struct task_struct *task);
static inline int rt_mutex_debug_check_no_locks_freed(const void *from,
unsigned long len)
# define rt_mutex_debug_check_no_locks_held(task)	do  while (0)
# define __DEBUG_RT_MUTEX_INITIALIZER(mutexname) \
, .name = #mutexname, .file = __FILE__, .line = __LINE__
# define rt_mutex_init(mutex)			__rt_mutex_init(mutex, __func__)
extern void rt_mutex_debug_task_free(struct task_struct *tsk);
# define __DEBUG_RT_MUTEX_INITIALIZER(mutexname)
# define rt_mutex_init(mutex)			__rt_mutex_init(mutex, NULL)
# define rt_mutex_debug_task_free(t)			do  while (0)
#define __RT_MUTEX_INITIALIZER(mutexname) \
#define DEFINE_RT_MUTEX(mutexname) \
struct rt_mutex mutexname = __RT_MUTEX_INITIALIZER(mutexname)
static inline int rt_mutex_is_locked(struct rt_mutex *lock)
extern void __rt_mutex_init(struct rt_mutex *lock, const char *name);
extern void rt_mutex_destroy(struct rt_mutex *lock);
extern void rt_mutex_lock(struct rt_mutex *lock);
extern int rt_mutex_lock_interruptible(struct rt_mutex *lock,
int detect_deadlock);
extern int rt_mutex_timed_lock(struct rt_mutex *lock,
struct hrtimer_sleeper *timeout,
int detect_deadlock);
extern int rt_mutex_trylock(struct rt_mutex *lock);
extern void rt_mutex_unlock(struct rt_mutex *lock);
# define INIT_RT_MUTEXES(tsk)						\
.pi_waiters	= PLIST_HEAD_INIT(tsk.pi_waiters, tsk.pi_lock),	\
INIT_RT_MUTEX_DEBUG(tsk)
# define INIT_RT_MUTEXES(tsk)
