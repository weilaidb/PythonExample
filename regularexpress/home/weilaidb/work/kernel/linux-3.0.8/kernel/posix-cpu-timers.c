void update_rlimit_cpu(struct task_struct *task, unsigned long rlim_new)
static int check_clock(const clockid_t which_clock)
static inline union cpu_time_count
timespec_to_sample(const clockid_t which_clock, const struct timespec *tp)
static void sample_to_timespec(const clockid_t which_clock,
union cpu_time_count cpu,
struct timespec *tp)
static inline int cpu_time_before(const clockid_t which_clock,
union cpu_time_count now,
union cpu_time_count then)
static inline void cpu_time_add(const clockid_t which_clock,
union cpu_time_count *acc,
union cpu_time_count val)
static inline union cpu_time_count cpu_time_sub(const clockid_t which_clock,
union cpu_time_count a,
union cpu_time_count b)
static inline cputime_t cputime_div_non_zero(cputime_t time, unsigned long div)
static void bump_cpu_timer(struct k_itimer *timer,
union cpu_time_count now)
static inline cputime_t prof_ticks(struct task_struct *p)
static inline cputime_t virt_ticks(struct task_struct *p)
static int
posix_cpu_clock_getres(const clockid_t which_clock, struct timespec *tp)
static int
posix_cpu_clock_set(const clockid_t which_clock, const struct timespec *tp)
static int cpu_clock_sample(const clockid_t which_clock, struct task_struct *p,
union cpu_time_count *cpu)
void thread_group_cputime(struct task_struct *tsk, struct task_cputime *times)
static void update_gt_cputime(struct task_cputime *a, struct task_cputime *b)
void thread_group_cputimer(struct task_struct *tsk, struct task_cputime *times)
static int cpu_clock_sample_group(const clockid_t which_clock,
struct task_struct *p,
union cpu_time_count *cpu)
static int posix_cpu_clock_get(const clockid_t which_clock, struct timespec *tp)
static int posix_cpu_timer_create(struct k_itimer *new_timer)
static int posix_cpu_timer_del(struct k_itimer *timer)
static void cleanup_timers(struct list_head *head,
cputime_t utime, cputime_t stime,
unsigned long long sum_exec_runtime)
void posix_cpu_timers_exit(struct task_struct *tsk)
void posix_cpu_timers_exit_group(struct task_struct *tsk)
static void clear_dead_task(struct k_itimer *timer, union cpu_time_count now)
static inline int expires_gt(cputime_t expires, cputime_t new_exp)
static void arm_timer(struct k_itimer *timer)
static void cpu_timer_fire(struct k_itimer *timer)
static int cpu_timer_sample_group(const clockid_t which_clock,
struct task_struct *p,
union cpu_time_count *cpu)
static int posix_cpu_timer_set(struct k_itimer *timer, int flags,
struct itimerspec *new, struct itimerspec *old)
static void posix_cpu_timer_get(struct k_itimer *timer, struct itimerspec *itp)
static void check_thread_timers(struct task_struct *tsk,
struct list_head *firing)
static void stop_process_timers(struct signal_struct *sig)
static u32 onecputick;
static void check_cpu_itimer(struct task_struct *tsk, struct cpu_itimer *it,
cputime_t *expires, cputime_t cur_time, int signo)
static inline int task_cputime_zero(const struct task_cputime *cputime)
static void check_process_timers(struct task_struct *tsk,
struct list_head *firing)
void posix_cpu_timer_schedule(struct k_itimer *timer)
static inline int task_cputime_expired(const struct task_cputime *sample,
const struct task_cputime *expires)
static inline int fastpath_timer_check(struct task_struct *tsk)
void run_posix_cpu_timers(struct task_struct *tsk)
void set_process_cpu_timer(struct task_struct *tsk, unsigned int clock_idx,
cputime_t *newval, cputime_t *oldval)
static int do_cpu_nanosleep(const clockid_t which_clock, int flags,
struct timespec *rqtp, struct itimerspec *it)
static long posix_cpu_nsleep_restart(struct restart_block *restart_block);
static int posix_cpu_nsleep(const clockid_t which_clock, int flags,
struct timespec *rqtp, struct timespec __user *rmtp)
static long posix_cpu_nsleep_restart(struct restart_block *restart_block)
#define PROCESS_CLOCK	MAKE_PROCESS_CPUCLOCK(0, CPUCLOCK_SCHED)
#define THREAD_CLOCK	MAKE_THREAD_CPUCLOCK(0, CPUCLOCK_SCHED)
static int process_cpu_clock_getres(const clockid_t which_clock,
struct timespec *tp)
static int process_cpu_clock_get(const clockid_t which_clock,
struct timespec *tp)
static int process_cpu_timer_create(struct k_itimer *timer)
static int process_cpu_nsleep(const clockid_t which_clock, int flags,
struct timespec *rqtp,
struct timespec __user *rmtp)
static long process_cpu_nsleep_restart(struct restart_block *restart_block)
static int thread_cpu_clock_getres(const clockid_t which_clock,
struct timespec *tp)
static int thread_cpu_clock_get(const clockid_t which_clock,
struct timespec *tp)
static int thread_cpu_timer_create(struct k_itimer *timer)
struct k_clock clock_posix_cpu = ;
static __init int init_posix_cpu_timers(void)
__initcall(init_posix_cpu_timers);
