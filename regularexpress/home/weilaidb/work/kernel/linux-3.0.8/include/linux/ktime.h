#define _LINUX_KTIME_H
union ktime ;
typedef union ktime ktime_t;
#define KTIME_MAX			((s64)~((u64)1 << 63))
#if (BITS_PER_LONG == 64)
# define KTIME_SEC_MAX			(KTIME_MAX / NSEC_PER_SEC)
# define KTIME_SEC_MAX			LONG_MAX
#if (BITS_PER_LONG == 64) || defined(CONFIG_KTIME_SCALAR)
static inline ktime_t ktime_set(const long secs, const unsigned long nsecs)
#define ktime_sub(lhs, rhs) \
()
#define ktime_add(lhs, rhs) \
()
#define ktime_add_ns(kt, nsval) \
()
#define ktime_sub_ns(kt, nsval) \
()
static inline ktime_t timespec_to_ktime(struct timespec ts)
static inline ktime_t timeval_to_ktime(struct timeval tv)
#define ktime_to_timespec(kt)		ns_to_timespec((kt).tv64)
#define ktime_to_timeval(kt)		ns_to_timeval((kt).tv64)
#define ktime_to_ns(kt)			((kt).tv64)
static inline ktime_t ktime_set(const long secs, const unsigned long nsecs)
static inline ktime_t ktime_sub(const ktime_t lhs, const ktime_t rhs)
static inline ktime_t ktime_add(const ktime_t add1, const ktime_t add2)
extern ktime_t ktime_add_ns(const ktime_t kt, u64 nsec);
extern ktime_t ktime_sub_ns(const ktime_t kt, u64 nsec);
static inline ktime_t timespec_to_ktime(const struct timespec ts)
static inline ktime_t timeval_to_ktime(const struct timeval tv)
static inline struct timespec ktime_to_timespec(const ktime_t kt)
static inline struct timeval ktime_to_timeval(const ktime_t kt)
static inline s64 ktime_to_ns(const ktime_t kt)
static inline int ktime_equal(const ktime_t cmp1, const ktime_t cmp2)
static inline s64 ktime_to_us(const ktime_t kt)
static inline s64 ktime_to_ms(const ktime_t kt)
static inline s64 ktime_us_delta(const ktime_t later, const ktime_t earlier)
static inline ktime_t ktime_add_us(const ktime_t kt, const u64 usec)
static inline ktime_t ktime_sub_us(const ktime_t kt, const u64 usec)
extern ktime_t ktime_add_safe(const ktime_t lhs, const ktime_t rhs);
#define LOW_RES_NSEC		TICK_NSEC
#define KTIME_LOW_RES		(ktime_t)
extern void ktime_get_ts(struct timespec *ts);
#define ktime_get_real_ts(ts)	getnstimeofday(ts)
static inline ktime_t ns_to_ktime(u64 ns)
