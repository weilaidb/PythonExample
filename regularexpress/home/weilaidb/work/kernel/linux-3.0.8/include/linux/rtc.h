#define _LINUX_RTC_H_
struct rtc_time ;
struct rtc_wkalrm ;
struct rtc_pll_info ;
#define RTC_AIE_ON	_IO('p', 0x01)
#define RTC_AIE_OFF	_IO('p', 0x02)
#define RTC_UIE_ON	_IO('p', 0x03)
#define RTC_UIE_OFF	_IO('p', 0x04)
#define RTC_PIE_ON	_IO('p', 0x05)
#define RTC_PIE_OFF	_IO('p', 0x06)
#define RTC_WIE_ON	_IO('p', 0x0f)
#define RTC_WIE_OFF	_IO('p', 0x10)
#define RTC_ALM_SET	_IOW('p', 0x07, struct rtc_time)
#define RTC_ALM_READ	_IOR('p', 0x08, struct rtc_time)
#define RTC_RD_TIME	_IOR('p', 0x09, struct rtc_time)
#define RTC_SET_TIME	_IOW('p', 0x0a, struct rtc_time)
#define RTC_IRQP_READ	_IOR('p', 0x0b, unsigned long)
#define RTC_IRQP_SET	_IOW('p', 0x0c, unsigned long)
#define RTC_EPOCH_READ	_IOR('p', 0x0d, unsigned long)
#define RTC_EPOCH_SET	_IOW('p', 0x0e, unsigned long)
#define RTC_WKALM_SET	_IOW('p', 0x0f, struct rtc_wkalrm)
#define RTC_WKALM_RD	_IOR('p', 0x10, struct rtc_wkalrm)
#define RTC_PLL_GET	_IOR('p', 0x11, struct rtc_pll_info)
#define RTC_PLL_SET	_IOW('p', 0x12, struct rtc_pll_info)
#define RTC_IRQF 0x80
#define RTC_PF 0x40
#define RTC_AF 0x20
#define RTC_UF 0x10
#define RTC_MAX_FREQ	8192
extern int rtc_month_days(unsigned int month, unsigned int year);
extern int rtc_year_days(unsigned int day, unsigned int month, unsigned int year);
extern int rtc_valid_tm(struct rtc_time *tm);
extern int rtc_tm_to_time(struct rtc_time *tm, unsigned long *time);
extern void rtc_time_to_tm(unsigned long time, struct rtc_time *tm);
ktime_t rtc_tm_to_ktime(struct rtc_time tm);
struct rtc_time rtc_ktime_to_tm(ktime_t kt);
extern struct class *rtc_class;
struct rtc_class_ops ;
#define RTC_DEVICE_NAME_SIZE 20
typedef struct rtc_task  rtc_task_t;
struct rtc_timer ;
#define RTC_DEV_BUSY 0
struct rtc_device
;
#define to_rtc_device(d) container_of(d, struct rtc_device, dev)
extern struct rtc_device *rtc_device_register(const char *name,
struct device *dev,
const struct rtc_class_ops *ops,
struct module *owner);
extern void rtc_device_unregister(struct rtc_device *rtc);
extern int rtc_read_time(struct rtc_device *rtc, struct rtc_time *tm);
extern int rtc_set_time(struct rtc_device *rtc, struct rtc_time *tm);
extern int rtc_set_mmss(struct rtc_device *rtc, unsigned long secs);
int __rtc_read_alarm(struct rtc_device *rtc, struct rtc_wkalrm *alarm);
extern int rtc_read_alarm(struct rtc_device *rtc,
struct rtc_wkalrm *alrm);
extern int rtc_set_alarm(struct rtc_device *rtc,
struct rtc_wkalrm *alrm);
extern int rtc_initialize_alarm(struct rtc_device *rtc,
struct rtc_wkalrm *alrm);
extern void rtc_update_irq(struct rtc_device *rtc,
unsigned long num, unsigned long events);
extern struct rtc_device *rtc_class_open(char *name);
extern void rtc_class_close(struct rtc_device *rtc);
extern int rtc_irq_register(struct rtc_device *rtc,
struct rtc_task *task);
extern void rtc_irq_unregister(struct rtc_device *rtc,
struct rtc_task *task);
extern int rtc_irq_set_state(struct rtc_device *rtc,
struct rtc_task *task, int enabled);
extern int rtc_irq_set_freq(struct rtc_device *rtc,
struct rtc_task *task, int freq);
extern int rtc_update_irq_enable(struct rtc_device *rtc, unsigned int enabled);
extern int rtc_alarm_irq_enable(struct rtc_device *rtc, unsigned int enabled);
extern int rtc_dev_update_irq_enable_emul(struct rtc_device *rtc,
unsigned int enabled);
void rtc_handle_legacy_irq(struct rtc_device *rtc, int num, int mode);
void rtc_aie_update_irq(void *private);
void rtc_uie_update_irq(void *private);
enum hrtimer_restart rtc_pie_update_irq(struct hrtimer *timer);
int rtc_register(rtc_task_t *task);
int rtc_unregister(rtc_task_t *task);
int rtc_control(rtc_task_t *t, unsigned int cmd, unsigned long arg);
void rtc_timer_init(struct rtc_timer *timer, void (*f)(void* p), void* data);
int rtc_timer_start(struct rtc_device *rtc, struct rtc_timer* timer,
ktime_t expires, ktime_t period);
int rtc_timer_cancel(struct rtc_device *rtc, struct rtc_timer* timer);
void rtc_timer_do_work(struct work_struct *work);
static inline bool is_leap_year(unsigned int year)
extern int rtc_hctosys_ret;
#define rtc_hctosys_ret -ENODEV
