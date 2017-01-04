#define dev_dbg_stamp(dev) dev_dbg(dev, "%s:%i: here i am\n", __func__, __LINE__)
struct bfin_rtc ;
#define RTC_ISTAT_WRITE_COMPLETE  0x8000
#define RTC_ISTAT_WRITE_PENDING   0x4000
#define RTC_ISTAT_ALARM_DAY       0x0040
#define RTC_ISTAT_24HR            0x0020
#define RTC_ISTAT_HOUR            0x0010
#define RTC_ISTAT_MIN             0x0008
#define RTC_ISTAT_SEC             0x0004
#define RTC_ISTAT_ALARM           0x0002
#define RTC_ISTAT_STOPWATCH       0x0001
#define DAY_BITS_OFF    17
#define HOUR_BITS_OFF   12
#define MIN_BITS_OFF    6
#define SEC_BITS_OFF    0
static inline u32 rtc_time_to_bfin(unsigned long now)
static inline unsigned long rtc_bfin_to_time(u32 rtc_bfin)
static inline void rtc_bfin_to_tm(u32 rtc_bfin, struct rtc_time *tm)
static DECLARE_COMPLETION(bfin_write_complete);
static void bfin_rtc_sync_pending(struct device *dev)
static void bfin_rtc_reset(struct device *dev, u16 rtc_ictl)
static irqreturn_t bfin_rtc_interrupt(int irq, void *dev_id)
static void bfin_rtc_int_set(u16 rtc_int)
static void bfin_rtc_int_clear(u16 rtc_int)
static void bfin_rtc_int_set_alarm(struct bfin_rtc *rtc)
static int bfin_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int bfin_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int bfin_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int bfin_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int bfin_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int bfin_rtc_proc(struct device *dev, struct seq_file *seq)
static struct rtc_class_ops bfin_rtc_ops = ;
static int __devinit bfin_rtc_probe(struct platform_device *pdev)
static int __devexit bfin_rtc_remove(struct platform_device *pdev)
static int bfin_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int bfin_rtc_resume(struct platform_device *pdev)
# define bfin_rtc_suspend NULL
# define bfin_rtc_resume  NULL
static struct platform_driver bfin_rtc_driver = ;
static int __init bfin_rtc_init(void)
static void __exit bfin_rtc_exit(void)
module_init(bfin_rtc_init);
module_exit(bfin_rtc_exit);
MODULE_DESCRIPTION("Blackfin On-Chip Real Time Clock Driver");
MODULE_AUTHOR("Mike Frysinger <vapier@gentoo.org>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rtc-bfin");
