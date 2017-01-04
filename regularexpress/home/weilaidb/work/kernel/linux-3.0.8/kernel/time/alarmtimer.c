static struct alarm_base  alarm_bases[ALARM_NUMTYPE];
static ktime_t freezer_delta;
static DEFINE_SPINLOCK(freezer_delta_lock);
static struct rtc_timer		rtctimer;
static struct rtc_device	*rtcdev;
static DEFINE_SPINLOCK(rtcdev_lock);
static int has_wakealarm(struct device *dev, void *name_ptr)
static struct rtc_device *alarmtimer_get_rtcdev(void)
#define alarmtimer_get_rtcdev() (0)
#define rtcdev (0)
static void alarmtimer_enqueue(struct alarm_base *base, struct alarm *alarm)
static void alarmtimer_remove(struct alarm_base *base, struct alarm *alarm)
static enum hrtimer_restart alarmtimer_fired(struct hrtimer *timer)
static int alarmtimer_suspend(struct device *dev)
static int alarmtimer_suspend(struct device *dev)
static void alarmtimer_freezerset(ktime_t absexp, enum alarmtimer_type type)
void alarm_init(struct alarm *alarm, enum alarmtimer_type type,
void (*function)(struct alarm *))
void alarm_start(struct alarm *alarm, ktime_t start, ktime_t period)
void alarm_cancel(struct alarm *alarm)
static enum alarmtimer_type clock2alarm(clockid_t clockid)
static void alarm_handle_timer(struct alarm *alarm)
static int alarm_clock_getres(const clockid_t which_clock, struct timespec *tp)
static int alarm_clock_get(clockid_t which_clock, struct timespec *tp)
static int alarm_timer_create(struct k_itimer *new_timer)
static void alarm_timer_get(struct k_itimer *timr,
struct itimerspec *cur_setting)
static int alarm_timer_del(struct k_itimer *timr)
static int alarm_timer_set(struct k_itimer *timr, int flags,
struct itimerspec *new_setting,
struct itimerspec *old_setting)
static void alarmtimer_nsleep_wakeup(struct alarm *alarm)
static int alarmtimer_do_nsleep(struct alarm *alarm, ktime_t absexp)
static int update_rmtp(ktime_t exp, enum  alarmtimer_type type,
struct timespec __user *rmtp)
static long __sched alarm_timer_nsleep_restart(struct restart_block *restart)
static int alarm_timer_nsleep(const clockid_t which_clock, int flags,
struct timespec *tsreq, struct timespec __user *rmtp)
static const struct dev_pm_ops alarmtimer_pm_ops = ;
static struct platform_driver alarmtimer_driver = ;
static int __init alarmtimer_init(void)
device_initcall(alarmtimer_init);
