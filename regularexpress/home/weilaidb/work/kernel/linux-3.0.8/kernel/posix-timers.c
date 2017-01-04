static struct kmem_cache *posix_timers_cache;
static struct idr posix_timers_id;
static DEFINE_SPINLOCK(idr_lock);
#if SIGEV_THREAD_ID != (SIGEV_THREAD_ID & \
~(SIGEV_SIGNAL | SIGEV_NONE | SIGEV_THREAD))
#error "SIGEV_THREAD_ID must not share bit with other SIGEV values!"
# define ENANOSLEEP_NOTSUP EOPNOTSUPP
# define ENANOSLEEP_NOTSUP ENOTSUP
static struct k_clock posix_clocks[MAX_CLOCKS];
static int common_nsleep(const clockid_t, int flags, struct timespec *t,
struct timespec __user *rmtp);
static int common_timer_create(struct k_itimer *new_timer);
static void common_timer_get(struct k_itimer *, struct itimerspec *);
static int common_timer_set(struct k_itimer *, int,
struct itimerspec *, struct itimerspec *);
static int common_timer_del(struct k_itimer *timer);
static enum hrtimer_restart posix_timer_fn(struct hrtimer *data);
static struct k_itimer *__lock_timer(timer_t timer_id, unsigned long *flags);
#define lock_timer(tid, flags)						   \
()
static inline void unlock_timer(struct k_itimer *timr, unsigned long flags)
static int posix_clock_realtime_get(clockid_t which_clock, struct timespec *tp)
static int posix_clock_realtime_set(const clockid_t which_clock,
const struct timespec *tp)
static int posix_clock_realtime_adj(const clockid_t which_clock,
struct timex *t)
static int posix_ktime_get_ts(clockid_t which_clock, struct timespec *tp)
static int posix_get_monotonic_raw(clockid_t which_clock, struct timespec *tp)
static int posix_get_realtime_coarse(clockid_t which_clock, struct timespec *tp)
static int posix_get_monotonic_coarse(clockid_t which_clock,
struct timespec *tp)
static int posix_get_coarse_res(const clockid_t which_clock, struct timespec *tp)
static int posix_get_boottime(const clockid_t which_clock, struct timespec *tp)
static __init int init_posix_timers(void)
__initcall(init_posix_timers);
static void schedule_next_timer(struct k_itimer *timr)
void do_schedule_next_timer(struct siginfo *info)
int posix_timer_event(struct k_itimer *timr, int si_private)
EXPORT_SYMBOL_GPL(posix_timer_event);
static enum hrtimer_restart posix_timer_fn(struct hrtimer *timer)
static struct pid *good_sigevent(sigevent_t * event)
void posix_timers_register_clock(const clockid_t clock_id,
struct k_clock *new_clock)
EXPORT_SYMBOL_GPL(posix_timers_register_clock);
static struct k_itimer * alloc_posix_timer(void)
static void k_itimer_rcu_free(struct rcu_head *head)
#define IT_ID_SET	1
#define IT_ID_NOT_SET	0
static void release_posix_timer(struct k_itimer *tmr, int it_id_set)
static struct k_clock *clockid_to_kclock(const clockid_t id)
static int common_timer_create(struct k_itimer *new_timer)
SYSCALL_DEFINE3(timer_create, const clockid_t, which_clock,
struct sigevent __user *, timer_event_spec,
timer_t __user *, created_timer_id)
static struct k_itimer *__lock_timer(timer_t timer_id, unsigned long *flags)
static void
common_timer_get(struct k_itimer *timr, struct itimerspec *cur_setting)
SYSCALL_DEFINE2(timer_gettime, timer_t, timer_id,
struct itimerspec __user *, setting)
SYSCALL_DEFINE1(timer_getoverrun, timer_t, timer_id)
static int
common_timer_set(struct k_itimer *timr, int flags,
struct itimerspec *new_setting, struct itimerspec *old_setting)
SYSCALL_DEFINE4(timer_settime, timer_t, timer_id, int, flags,
const struct itimerspec __user *, new_setting,
struct itimerspec __user *, old_setting)
static int common_timer_del(struct k_itimer *timer)
static inline int timer_delete_hook(struct k_itimer *timer)
SYSCALL_DEFINE1(timer_delete, timer_t, timer_id)
static void itimer_delete(struct k_itimer *timer)
void exit_itimers(struct signal_struct *sig)
SYSCALL_DEFINE2(clock_settime, const clockid_t, which_clock,
const struct timespec __user *, tp)
SYSCALL_DEFINE2(clock_gettime, const clockid_t, which_clock,
struct timespec __user *,tp)
SYSCALL_DEFINE2(clock_adjtime, const clockid_t, which_clock,
struct timex __user *, utx)
SYSCALL_DEFINE2(clock_getres, const clockid_t, which_clock,
struct timespec __user *, tp)
static int common_nsleep(const clockid_t which_clock, int flags,
struct timespec *tsave, struct timespec __user *rmtp)
SYSCALL_DEFINE4(clock_nanosleep, const clockid_t, which_clock, int, flags,
const struct timespec __user *, rqtp,
struct timespec __user *, rmtp)
long clock_nanosleep_restart(struct restart_block *restart_block)
