static int compat_get_timeval(struct timespec *o,
struct compat_timeval __user *i)
static int compat_put_timeval(struct compat_timeval __user *o,
struct timeval *i)
static int compat_get_timex(struct timex *txc, struct compat_timex __user *utp)
static int compat_put_timex(struct compat_timex __user *utp, struct timex *txc)
asmlinkage long compat_sys_gettimeofday(struct compat_timeval __user *tv,
struct timezone __user *tz)
asmlinkage long compat_sys_settimeofday(struct compat_timeval __user *tv,
struct timezone __user *tz)
int get_compat_timespec(struct timespec *ts, const struct compat_timespec __user *cts)
int put_compat_timespec(const struct timespec *ts, struct compat_timespec __user *cts)
static long compat_nanosleep_restart(struct restart_block *restart)
asmlinkage long compat_sys_nanosleep(struct compat_timespec __user *rqtp,
struct compat_timespec __user *rmtp)
static inline long get_compat_itimerval(struct itimerval *o,
struct compat_itimerval __user *i)
static inline long put_compat_itimerval(struct compat_itimerval __user *o,
struct itimerval *i)
asmlinkage long compat_sys_getitimer(int which,
struct compat_itimerval __user *it)
asmlinkage long compat_sys_setitimer(int which,
struct compat_itimerval __user *in,
struct compat_itimerval __user *out)
static compat_clock_t clock_t_to_compat_clock_t(clock_t x)
asmlinkage long compat_sys_times(struct compat_tms __user *tbuf)
asmlinkage long compat_sys_sigpending(compat_old_sigset_t __user *set)
asmlinkage long compat_sys_sigprocmask(int how, compat_old_sigset_t __user *set,
compat_old_sigset_t __user *oset)
asmlinkage long compat_sys_setrlimit(unsigned int resource,
struct compat_rlimit __user *rlim)
asmlinkage long compat_sys_old_getrlimit(unsigned int resource,
struct compat_rlimit __user *rlim)
asmlinkage long compat_sys_getrlimit(unsigned int resource,
struct compat_rlimit __user *rlim)
int put_compat_rusage(const struct rusage *r, struct compat_rusage __user *ru)
asmlinkage long compat_sys_getrusage(int who, struct compat_rusage __user *ru)
asmlinkage long
compat_sys_wait4(compat_pid_t pid, compat_uint_t __user *stat_addr, int options,
struct compat_rusage __user *ru)
asmlinkage long compat_sys_waitid(int which, compat_pid_t pid,
struct compat_siginfo __user *uinfo, int options,
struct compat_rusage __user *uru)
static int compat_get_user_cpu_mask(compat_ulong_t __user *user_mask_ptr,
unsigned len, struct cpumask *new_mask)
asmlinkage long compat_sys_sched_setaffinity(compat_pid_t pid,
unsigned int len,
compat_ulong_t __user *user_mask_ptr)
asmlinkage long compat_sys_sched_getaffinity(compat_pid_t pid, unsigned int len,
compat_ulong_t __user *user_mask_ptr)
int get_compat_itimerspec(struct itimerspec *dst,
const struct compat_itimerspec __user *src)
int put_compat_itimerspec(struct compat_itimerspec __user *dst,
const struct itimerspec *src)
long compat_sys_timer_create(clockid_t which_clock,
struct compat_sigevent __user *timer_event_spec,
timer_t __user *created_timer_id)
long compat_sys_timer_settime(timer_t timer_id, int flags,
struct compat_itimerspec __user *new,
struct compat_itimerspec __user *old)
long compat_sys_timer_gettime(timer_t timer_id,
struct compat_itimerspec __user *setting)
long compat_sys_clock_settime(clockid_t which_clock,
struct compat_timespec __user *tp)
long compat_sys_clock_gettime(clockid_t which_clock,
struct compat_timespec __user *tp)
long compat_sys_clock_adjtime(clockid_t which_clock,
struct compat_timex __user *utp)
long compat_sys_clock_getres(clockid_t which_clock,
struct compat_timespec __user *tp)
static long compat_clock_nanosleep_restart(struct restart_block *restart)
long compat_sys_clock_nanosleep(clockid_t which_clock, int flags,
struct compat_timespec __user *rqtp,
struct compat_timespec __user *rmtp)
int get_compat_sigevent(struct sigevent *event,
const struct compat_sigevent __user *u_event)
long compat_get_bitmap(unsigned long *mask, const compat_ulong_t __user *umask,
unsigned long bitmap_size)
long compat_put_bitmap(compat_ulong_t __user *umask, unsigned long *mask,
unsigned long bitmap_size)
void
sigset_from_compat (sigset_t *set, compat_sigset_t *compat)
asmlinkage long
compat_sys_rt_sigtimedwait (compat_sigset_t __user *uthese,
struct compat_siginfo __user *uinfo,
struct compat_timespec __user *uts, compat_size_t sigsetsize)
asmlinkage long
compat_sys_rt_tgsigqueueinfo(compat_pid_t tgid, compat_pid_t pid, int sig,
struct compat_siginfo __user *uinfo)
asmlinkage long compat_sys_time(compat_time_t __user * tloc)
asmlinkage long compat_sys_stime(compat_time_t __user *tptr)
asmlinkage long compat_sys_rt_sigsuspend(compat_sigset_t __user *unewset, compat_size_t sigsetsize)
asmlinkage long compat_sys_adjtimex(struct compat_timex __user *utp)
asmlinkage long compat_sys_move_pages(pid_t pid, unsigned long nr_pages,
compat_uptr_t __user *pages32,
const int __user *nodes,
int __user *status,
int flags)
asmlinkage long compat_sys_migrate_pages(compat_pid_t pid,
compat_ulong_t maxnode,
const compat_ulong_t __user *old_nodes,
const compat_ulong_t __user *new_nodes)
struct compat_sysinfo ;
asmlinkage long
compat_sys_sysinfo(struct compat_sysinfo __user *info)
void __user *compat_alloc_user_space(unsigned long len)
EXPORT_SYMBOL_GPL(compat_alloc_user_space);
