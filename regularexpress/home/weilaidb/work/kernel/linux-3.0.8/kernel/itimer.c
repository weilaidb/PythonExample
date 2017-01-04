static struct timeval itimer_get_remtime(struct hrtimer *timer)
static void get_cpu_itimer(struct task_struct *tsk, unsigned int clock_id,
struct itimerval *const value)
int do_getitimer(int which, struct itimerval *value)
SYSCALL_DEFINE2(getitimer, int, which, struct itimerval __user *, value)
enum hrtimer_restart it_real_fn(struct hrtimer *timer)
static inline u32 cputime_sub_ns(cputime_t ct, s64 real_ns)
static void set_cpu_itimer(struct task_struct *tsk, unsigned int clock_id,
const struct itimerval *const value,
struct itimerval *const ovalue)
#define timeval_valid(t) \
(((t)->tv_sec >= 0) && (((unsigned long) (t)->tv_usec) < USEC_PER_SEC))
int do_setitimer(int which, struct itimerval *value, struct itimerval *ovalue)
unsigned int alarm_setitimer(unsigned int seconds)
SYSCALL_DEFINE3(setitimer, int, which, struct itimerval __user *, value,
struct itimerval __user *, ovalue)
