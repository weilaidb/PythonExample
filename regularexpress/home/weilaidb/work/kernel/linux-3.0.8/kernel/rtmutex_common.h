#define __KERNEL_RTMUTEX_COMMON_H
extern void schedule_rt_mutex_test(struct rt_mutex *lock);
#define schedule_rt_mutex(_lock)				\
do  while (0)
# define schedule_rt_mutex(_lock)			schedule()
struct rt_mutex_waiter ;
static inline int rt_mutex_has_waiters(struct rt_mutex *lock)
static inline struct rt_mutex_waiter *
rt_mutex_top_waiter(struct rt_mutex *lock)
static inline int task_has_pi_waiters(struct task_struct *p)
static inline struct rt_mutex_waiter *
task_top_pi_waiter(struct task_struct *p)
#define RT_MUTEX_HAS_WAITERS	1UL
#define RT_MUTEX_OWNER_MASKALL	1UL
static inline struct task_struct *rt_mutex_owner(struct rt_mutex *lock)
extern struct task_struct *rt_mutex_next_owner(struct rt_mutex *lock);
extern void rt_mutex_init_proxy_locked(struct rt_mutex *lock,
struct task_struct *proxy_owner);
extern void rt_mutex_proxy_unlock(struct rt_mutex *lock,
struct task_struct *proxy_owner);
extern int rt_mutex_start_proxy_lock(struct rt_mutex *lock,
struct rt_mutex_waiter *waiter,
struct task_struct *task,
int detect_deadlock);
extern int rt_mutex_finish_proxy_lock(struct rt_mutex *lock,
struct hrtimer_sleeper *to,
struct rt_mutex_waiter *waiter,
int detect_deadlock);
# include "rtmutex-debug.h"
# include "rtmutex.h"
