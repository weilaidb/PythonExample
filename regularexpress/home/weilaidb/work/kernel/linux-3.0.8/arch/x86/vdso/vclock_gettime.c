#define DISABLE_BRANCH_PROFILING
#define gtod (&VVAR(vsyscall_gtod_data))
notrace static long vdso_fallback_gettime(long clock, struct timespec *ts)
notrace static inline long vgetns(void)
notrace static noinline int do_realtime(struct timespec *ts)
notrace static noinline int do_monotonic(struct timespec *ts)
notrace static noinline int do_realtime_coarse(struct timespec *ts)
notrace static noinline int do_monotonic_coarse(struct timespec *ts)
notrace int __vdso_clock_gettime(clockid_t clock, struct timespec *ts)
int clock_gettime(clockid_t, struct timespec *)
__attribute__((weak, alias("__vdso_clock_gettime")));
notrace int __vdso_gettimeofday(struct timeval *tv, struct timezone *tz)
int gettimeofday(struct timeval *, struct timezone *)
__attribute__((weak, alias("__vdso_gettimeofday")));
static __always_inline long time_syscall(long *t)
notrace time_t __vdso_time(time_t *t)
int time(time_t *t)
__attribute__((weak, alias("__vdso_time")));
