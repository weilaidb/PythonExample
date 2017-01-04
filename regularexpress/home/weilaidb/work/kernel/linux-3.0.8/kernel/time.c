struct timezone sys_tz;
EXPORT_SYMBOL(sys_tz);
SYSCALL_DEFINE1(time, time_t __user *, tloc)
SYSCALL_DEFINE1(stime, time_t __user *, tptr)
SYSCALL_DEFINE2(gettimeofday, struct timeval __user *, tv,
struct timezone __user *, tz)
static inline void warp_clock(void)
int do_sys_settimeofday(const struct timespec *tv, const struct timezone *tz)
SYSCALL_DEFINE2(settimeofday, struct timeval __user *, tv,
struct timezone __user *, tz)
SYSCALL_DEFINE1(adjtimex, struct timex __user *, txc_p)
struct timespec current_fs_time(struct super_block *sb)
EXPORT_SYMBOL(current_fs_time);
inline unsigned int jiffies_to_msecs(const unsigned long j)
EXPORT_SYMBOL(jiffies_to_msecs);
inline unsigned int jiffies_to_usecs(const unsigned long j)
EXPORT_SYMBOL(jiffies_to_usecs);
struct timespec timespec_trunc(struct timespec t, unsigned gran)
EXPORT_SYMBOL(timespec_trunc);
unsigned long
mktime(const unsigned int year0, const unsigned int mon0,
const unsigned int day, const unsigned int hour,
const unsigned int min, const unsigned int sec)
EXPORT_SYMBOL(mktime);
void set_normalized_timespec(struct timespec *ts, time_t sec, s64 nsec)
EXPORT_SYMBOL(set_normalized_timespec);
struct timespec ns_to_timespec(const s64 nsec)
EXPORT_SYMBOL(ns_to_timespec);
struct timeval ns_to_timeval(const s64 nsec)
EXPORT_SYMBOL(ns_to_timeval);
unsigned long msecs_to_jiffies(const unsigned int m)
EXPORT_SYMBOL(msecs_to_jiffies);
unsigned long usecs_to_jiffies(const unsigned int u)
EXPORT_SYMBOL(usecs_to_jiffies);
unsigned long
timespec_to_jiffies(const struct timespec *value)
EXPORT_SYMBOL(timespec_to_jiffies);
void
jiffies_to_timespec(const unsigned long jiffies, struct timespec *value)
EXPORT_SYMBOL(jiffies_to_timespec);
unsigned long
timeval_to_jiffies(const struct timeval *value)
EXPORT_SYMBOL(timeval_to_jiffies);
void jiffies_to_timeval(const unsigned long jiffies, struct timeval *value)
EXPORT_SYMBOL(jiffies_to_timeval);
clock_t jiffies_to_clock_t(long x)
EXPORT_SYMBOL(jiffies_to_clock_t);
unsigned long clock_t_to_jiffies(unsigned long x)
EXPORT_SYMBOL(clock_t_to_jiffies);
u64 jiffies_64_to_clock_t(u64 x)
EXPORT_SYMBOL(jiffies_64_to_clock_t);
u64 nsec_to_clock_t(u64 x)
u64 nsecs_to_jiffies64(u64 n)
unsigned long nsecs_to_jiffies(u64 n)
struct timespec timespec_add_safe(const struct timespec lhs,
const struct timespec rhs)
