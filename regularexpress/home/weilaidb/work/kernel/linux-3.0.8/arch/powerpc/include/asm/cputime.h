#define __POWERPC_CPUTIME_H
static inline void setup_cputime_one_jiffy(void)
typedef u64 cputime_t;
typedef u64 cputime64_t;
#define cputime_zero			((cputime_t)0)
#define cputime_max			((~((cputime_t)0) >> 1) - 1)
#define cputime_add(__a, __b)		((__a) +  (__b))
#define cputime_sub(__a, __b)		((__a) -  (__b))
#define cputime_div(__a, __n)		((__a) /  (__n))
#define cputime_halve(__a)		((__a) >> 1)
#define cputime_eq(__a, __b)		((__a) == (__b))
#define cputime_gt(__a, __b)		((__a) >  (__b))
#define cputime_ge(__a, __b)		((__a) >= (__b))
#define cputime_lt(__a, __b)		((__a) <  (__b))
#define cputime_le(__a, __b)		((__a) <= (__b))
#define cputime64_zero			((cputime64_t)0)
#define cputime64_add(__a, __b)		((__a) + (__b))
#define cputime64_sub(__a, __b)		((__a) - (__b))
#define cputime_to_cputime64(__ct)	(__ct)
extern cputime_t cputime_one_jiffy;
extern u64 __cputime_jiffies_factor;
DECLARE_PER_CPU(unsigned long, cputime_last_delta);
DECLARE_PER_CPU(unsigned long, cputime_scaled_last_delta);
static inline unsigned long cputime_to_jiffies(const cputime_t ct)
static inline cputime_t cputime_to_scaled(const cputime_t ct)
static inline cputime_t jiffies_to_cputime(const unsigned long jif)
static inline void setup_cputime_one_jiffy(void)
static inline cputime64_t jiffies64_to_cputime64(const u64 jif)
static inline u64 cputime64_to_jiffies64(const cputime_t ct)
extern u64 __cputime_msec_factor;
static inline unsigned long cputime_to_usecs(const cputime_t ct)
static inline cputime_t usecs_to_cputime(const unsigned long us)
extern u64 __cputime_sec_factor;
static inline unsigned long cputime_to_secs(const cputime_t ct)
static inline cputime_t secs_to_cputime(const unsigned long sec)
static inline void cputime_to_timespec(const cputime_t ct, struct timespec *p)
static inline cputime_t timespec_to_cputime(const struct timespec *p)
static inline void cputime_to_timeval(const cputime_t ct, struct timeval *p)
static inline cputime_t timeval_to_cputime(const struct timeval *p)
extern u64 __cputime_clockt_factor;
static inline unsigned long cputime_to_clock_t(const cputime_t ct)
static inline cputime_t clock_t_to_cputime(const unsigned long clk)
#define cputime64_to_clock_t(ct)	cputime_to_clock_t((cputime_t)(ct))
