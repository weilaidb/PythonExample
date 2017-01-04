#define _S390_CPUTIME_H
typedef unsigned long long cputime_t;
typedef unsigned long long cputime64_t;
static inline unsigned int
__div(unsigned long long n, unsigned int base)
static inline unsigned int
__div(unsigned long long n, unsigned int base)
#define cputime_zero			(0ULL)
#define cputime_one_jiffy		jiffies_to_cputime(1)
#define cputime_max			((~0UL >> 1) - 1)
#define cputime_add(__a, __b)		((__a) +  (__b))
#define cputime_sub(__a, __b)		((__a) -  (__b))
#define cputime_div(__a, __n) ()
#define cputime_halve(__a)		((__a) >> 1)
#define cputime_eq(__a, __b)		((__a) == (__b))
#define cputime_gt(__a, __b)		((__a) >  (__b))
#define cputime_ge(__a, __b)		((__a) >= (__b))
#define cputime_lt(__a, __b)		((__a) <  (__b))
#define cputime_le(__a, __b)		((__a) <= (__b))
#define cputime_to_jiffies(__ct)	(__div((__ct), 4096000000ULL / HZ))
#define cputime_to_scaled(__ct)		(__ct)
#define jiffies_to_cputime(__hz)	((cputime_t)(__hz) * (4096000000ULL / HZ))
#define cputime64_zero			(0ULL)
#define cputime64_add(__a, __b)		((__a) + (__b))
#define cputime_to_cputime64(__ct)	(__ct)
static inline u64
cputime64_to_jiffies64(cputime64_t cputime)
static inline unsigned int
cputime_to_usecs(const cputime_t cputime)
static inline cputime_t
usecs_to_cputime(const unsigned int m)
static inline unsigned int
cputime_to_secs(const cputime_t cputime)
static inline cputime_t
secs_to_cputime(const unsigned int s)
static inline cputime_t
timespec_to_cputime(const struct timespec *value)
static inline void
cputime_to_timespec(const cputime_t cputime, struct timespec *value)
static inline cputime_t
timeval_to_cputime(const struct timeval *value)
static inline void
cputime_to_timeval(const cputime_t cputime, struct timeval *value)
static inline clock_t
cputime_to_clock_t(cputime_t cputime)
static inline cputime_t
clock_t_to_cputime(unsigned long x)
static inline clock_t
cputime64_to_clock_t(cputime64_t cputime)
struct s390_idle_data ;
DECLARE_PER_CPU(struct s390_idle_data, s390_idle);
void vtime_start_cpu(__u64 int_clock, __u64 enter_timer);
cputime64_t s390_get_idle_time(int cpu);
#define arch_idle_time(cpu) s390_get_idle_time(cpu)
static inline void s390_idle_check(struct pt_regs *regs, __u64 int_clock,
__u64 enter_timer)
static inline int s390_nohz_delay(int cpu)
#define arch_needs_cpu(cpu) s390_nohz_delay(cpu)
