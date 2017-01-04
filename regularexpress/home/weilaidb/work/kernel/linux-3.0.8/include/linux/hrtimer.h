#define _LINUX_HRTIMER_H
struct hrtimer_clock_base;
struct hrtimer_cpu_base;
enum hrtimer_mode ;
enum hrtimer_restart ;
#define HRTIMER_STATE_INACTIVE	0x00
#define HRTIMER_STATE_ENQUEUED	0x01
#define HRTIMER_STATE_CALLBACK	0x02
#define HRTIMER_STATE_MIGRATE	0x04
struct hrtimer ;
struct hrtimer_sleeper ;
struct hrtimer_clock_base ;
enum  hrtimer_base_type ;
struct hrtimer_cpu_base ;
static inline void hrtimer_set_expires(struct hrtimer *timer, ktime_t time)
static inline void hrtimer_set_expires_range(struct hrtimer *timer, ktime_t time, ktime_t delta)
static inline void hrtimer_set_expires_range_ns(struct hrtimer *timer, ktime_t time, unsigned long delta)
static inline void hrtimer_set_expires_tv64(struct hrtimer *timer, s64 tv64)
static inline void hrtimer_add_expires(struct hrtimer *timer, ktime_t time)
static inline void hrtimer_add_expires_ns(struct hrtimer *timer, u64 ns)
static inline ktime_t hrtimer_get_expires(const struct hrtimer *timer)
static inline ktime_t hrtimer_get_softexpires(const struct hrtimer *timer)
static inline s64 hrtimer_get_expires_tv64(const struct hrtimer *timer)
static inline s64 hrtimer_get_softexpires_tv64(const struct hrtimer *timer)
static inline s64 hrtimer_get_expires_ns(const struct hrtimer *timer)
static inline ktime_t hrtimer_expires_remaining(const struct hrtimer *timer)
struct clock_event_device;
extern void hrtimer_interrupt(struct clock_event_device *dev);
static inline ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
static inline int hrtimer_is_hres_active(struct hrtimer *timer)
extern void hrtimer_peek_ahead_timers(void);
# define HIGH_RES_NSEC		1
# define KTIME_HIGH_RES		(ktime_t)
# define MONOTONIC_RES_NSEC	HIGH_RES_NSEC
# define KTIME_MONOTONIC_RES	KTIME_HIGH_RES
# define MONOTONIC_RES_NSEC	LOW_RES_NSEC
# define KTIME_MONOTONIC_RES	KTIME_LOW_RES
static inline void hrtimer_peek_ahead_timers(void)
static inline ktime_t hrtimer_cb_get_time(struct hrtimer *timer)
static inline int hrtimer_is_hres_active(struct hrtimer *timer)
extern void clock_was_set(void);
extern void timerfd_clock_was_set(void);
static inline void timerfd_clock_was_set(void)
extern void hrtimers_resume(void);
extern ktime_t ktime_get(void);
extern ktime_t ktime_get_real(void);
extern ktime_t ktime_get_boottime(void);
extern ktime_t ktime_get_monotonic_offset(void);
DECLARE_PER_CPU(struct tick_device, tick_cpu_device);
extern void hrtimer_init(struct hrtimer *timer, clockid_t which_clock,
enum hrtimer_mode mode);
extern void hrtimer_init_on_stack(struct hrtimer *timer, clockid_t which_clock,
enum hrtimer_mode mode);
extern void destroy_hrtimer_on_stack(struct hrtimer *timer);
static inline void hrtimer_init_on_stack(struct hrtimer *timer,
clockid_t which_clock,
enum hrtimer_mode mode)
static inline void destroy_hrtimer_on_stack(struct hrtimer *timer)
extern int hrtimer_start(struct hrtimer *timer, ktime_t tim,
const enum hrtimer_mode mode);
extern int hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
unsigned long range_ns, const enum hrtimer_mode mode);
extern int
__hrtimer_start_range_ns(struct hrtimer *timer, ktime_t tim,
unsigned long delta_ns,
const enum hrtimer_mode mode, int wakeup);
extern int hrtimer_cancel(struct hrtimer *timer);
extern int hrtimer_try_to_cancel(struct hrtimer *timer);
static inline int hrtimer_start_expires(struct hrtimer *timer,
enum hrtimer_mode mode)
static inline int hrtimer_restart(struct hrtimer *timer)
extern ktime_t hrtimer_get_remaining(const struct hrtimer *timer);
extern int hrtimer_get_res(const clockid_t which_clock, struct timespec *tp);
extern ktime_t hrtimer_get_next_event(void);
static inline int hrtimer_active(const struct hrtimer *timer)
static inline int hrtimer_is_queued(struct hrtimer *timer)
static inline int hrtimer_callback_running(struct hrtimer *timer)
extern u64
hrtimer_forward(struct hrtimer *timer, ktime_t now, ktime_t interval);
static inline u64 hrtimer_forward_now(struct hrtimer *timer,
ktime_t interval)
extern long hrtimer_nanosleep(struct timespec *rqtp,
struct timespec __user *rmtp,
const enum hrtimer_mode mode,
const clockid_t clockid);
extern long hrtimer_nanosleep_restart(struct restart_block *restart_block);
extern void hrtimer_init_sleeper(struct hrtimer_sleeper *sl,
struct task_struct *tsk);
extern int schedule_hrtimeout_range(ktime_t *expires, unsigned long delta,
const enum hrtimer_mode mode);
extern int schedule_hrtimeout_range_clock(ktime_t *expires,
unsigned long delta, const enum hrtimer_mode mode, int clock);
extern int schedule_hrtimeout(ktime_t *expires, const enum hrtimer_mode mode);
extern void hrtimer_run_queues(void);
extern void hrtimer_run_pending(void);
extern void __init hrtimers_init(void);
#if BITS_PER_LONG < 64
extern u64 ktime_divns(const ktime_t kt, s64 div);
# define ktime_divns(kt, div)		(u64)((kt).tv64 / (div))
extern void sysrq_timer_list_show(void);
