#define _linux_POSIX_TIMERS_H
union cpu_time_count ;
struct cpu_timer_list ;
#define CPUCLOCK_PID(clock)		((pid_t) ~((clock) >> 3))
#define CPUCLOCK_PERTHREAD(clock) \
(((clock) & (clockid_t) CPUCLOCK_PERTHREAD_MASK) != 0)
#define CPUCLOCK_PERTHREAD_MASK	4
#define CPUCLOCK_WHICH(clock)	((clock) & (clockid_t) CPUCLOCK_CLOCK_MASK)
#define CPUCLOCK_CLOCK_MASK	3
#define CPUCLOCK_PROF		0
#define CPUCLOCK_VIRT		1
#define CPUCLOCK_SCHED		2
#define CPUCLOCK_MAX		3
#define CLOCKFD			CPUCLOCK_MAX
#define CLOCKFD_MASK		(CPUCLOCK_PERTHREAD_MASK|CPUCLOCK_CLOCK_MASK)
#define MAKE_PROCESS_CPUCLOCK(pid, clock) \
((~(clockid_t) (pid) << 3) | (clockid_t) (clock))
#define MAKE_THREAD_CPUCLOCK(tid, clock) \
MAKE_PROCESS_CPUCLOCK((tid), (clock) | CPUCLOCK_PERTHREAD_MASK)
#define FD_TO_CLOCKID(fd)	((~(clockid_t) (fd) << 3) | CLOCKFD)
#define CLOCKID_TO_FD(clk)	((unsigned int) ~((clk) >> 3))
struct k_itimer ;
struct k_clock ;
extern struct k_clock clock_posix_cpu;
extern struct k_clock clock_posix_dynamic;
void posix_timers_register_clock(const clockid_t clock_id, struct k_clock *new_clock);
int posix_timer_event(struct k_itimer *timr, int si_private);
void posix_cpu_timer_schedule(struct k_itimer *timer);
void run_posix_cpu_timers(struct task_struct *task);
void posix_cpu_timers_exit(struct task_struct *task);
void posix_cpu_timers_exit_group(struct task_struct *task);
void set_process_cpu_timer(struct task_struct *task, unsigned int clock_idx,
cputime_t *newval, cputime_t *oldval);
long clock_nanosleep_restart(struct restart_block *restart_block);
void update_rlimit_cpu(struct task_struct *task, unsigned long rlim_new);
