static int rtc_timer_enqueue(struct rtc_device *rtc, struct rtc_timer *timer);
static void rtc_timer_remove(struct rtc_device *rtc, struct rtc_timer *timer);
static int __rtc_read_time(struct rtc_device *rtc, struct rtc_time *tm)
int rtc_read_time(struct rtc_device *rtc, struct rtc_time *tm)
EXPORT_SYMBOL_GPL(rtc_read_time);
int rtc_set_time(struct rtc_device *rtc, struct rtc_time *tm)
EXPORT_SYMBOL_GPL(rtc_set_time);
int rtc_set_mmss(struct rtc_device *rtc, unsigned long secs)
EXPORT_SYMBOL_GPL(rtc_set_mmss);
static int rtc_read_alarm_internal(struct rtc_device *rtc, struct rtc_wkalrm *alarm)
int __rtc_read_alarm(struct rtc_device *rtc, struct rtc_wkalrm *alarm)
int rtc_read_alarm(struct rtc_device *rtc, struct rtc_wkalrm *alarm)
EXPORT_SYMBOL_GPL(rtc_read_alarm);
static int __rtc_set_alarm(struct rtc_device *rtc, struct rtc_wkalrm *alarm)
int rtc_set_alarm(struct rtc_device *rtc, struct rtc_wkalrm *alarm)
EXPORT_SYMBOL_GPL(rtc_set_alarm);
int rtc_initialize_alarm(struct rtc_device *rtc, struct rtc_wkalrm *alarm)
EXPORT_SYMBOL_GPL(rtc_initialize_alarm);
int rtc_alarm_irq_enable(struct rtc_device *rtc, unsigned int enabled)
EXPORT_SYMBOL_GPL(rtc_alarm_irq_enable);
int rtc_update_irq_enable(struct rtc_device *rtc, unsigned int enabled)
EXPORT_SYMBOL_GPL(rtc_update_irq_enable);
void rtc_handle_legacy_irq(struct rtc_device *rtc, int num, int mode)
void rtc_aie_update_irq(void *private)
void rtc_uie_update_irq(void *private)
enum hrtimer_restart rtc_pie_update_irq(struct hrtimer *timer)
void rtc_update_irq(struct rtc_device *rtc,
unsigned long num, unsigned long events)
EXPORT_SYMBOL_GPL(rtc_update_irq);
static int __rtc_match(struct device *dev, void *data)
struct rtc_device *rtc_class_open(char *name)
EXPORT_SYMBOL_GPL(rtc_class_open);
void rtc_class_close(struct rtc_device *rtc)
EXPORT_SYMBOL_GPL(rtc_class_close);
int rtc_irq_register(struct rtc_device *rtc, struct rtc_task *task)
EXPORT_SYMBOL_GPL(rtc_irq_register);
void rtc_irq_unregister(struct rtc_device *rtc, struct rtc_task *task)
EXPORT_SYMBOL_GPL(rtc_irq_unregister);
static int rtc_update_hrtimer(struct rtc_device *rtc, int enabled)
int rtc_irq_set_state(struct rtc_device *rtc, struct rtc_task *task, int enabled)
EXPORT_SYMBOL_GPL(rtc_irq_set_state);
int rtc_irq_set_freq(struct rtc_device *rtc, struct rtc_task *task, int freq)
EXPORT_SYMBOL_GPL(rtc_irq_set_freq);
static int rtc_timer_enqueue(struct rtc_device *rtc, struct rtc_timer *timer)
static void rtc_timer_remove(struct rtc_device *rtc, struct rtc_timer *timer)
void rtc_timer_do_work(struct work_struct *work)
void rtc_timer_init(struct rtc_timer *timer, void (*f)(void* p), void* data)
int rtc_timer_start(struct rtc_device *rtc, struct rtc_timer* timer,
ktime_t expires, ktime_t period)
int rtc_timer_cancel(struct rtc_device *rtc, struct rtc_timer* timer)
