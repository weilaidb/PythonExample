#define TIME_REG		0x00
#define DATE_REG		0x04
#define ALARM_TIME_REG		0x08
#define ALARM_DATE_REG		0x0C
#define CTRL_REG		0x10
#define STATUS_REG		0x14
#define SECONDS_UNITS		(0xf<<0)
#define SECONDS_TENS		(0x7<<4)
#define MINUTES_UNITS		(0xf<<8)
#define MINUTES_TENS		(0x7<<12)
#define HOURS_UNITS		(0xf<<16)
#define HOURS_TENS		(0x3<<20)
#define DAYS_UNITS		(0xf<<0)
#define DAYS_TENS		(0x3<<4)
#define MONTHS_UNITS		(0xf<<8)
#define MONTHS_TENS		(0x1<<12)
#define YEARS_UNITS		(0xf<<16)
#define YEARS_TENS		(0xf<<20)
#define YEARS_HUNDREDS		(0xf<<24)
#define YEARS_MILLENIUMS	(0xf<<28)
#define SECOND_SHIFT		0x00
#define MINUTE_SHIFT		0x08
#define HOUR_SHIFT		0x10
#define MDAY_SHIFT		0x00
#define MONTH_SHIFT		0x08
#define YEAR_SHIFT		0x10
#define SECOND_MASK		0x7F
#define MIN_MASK		0x7F
#define HOUR_MASK		0x3F
#define DAY_MASK		0x3F
#define MONTH_MASK		0x7F
#define YEAR_MASK		0xFFFF
#define TIME_BYP		(1<<9)
#define INT_ENABLE		(1<<31)
#define CLK_UNCONNECTED		(1<<0)
#define PEND_WR_TIME		(1<<2)
#define PEND_WR_DATE		(1<<3)
#define LOST_WR_TIME		(1<<4)
#define LOST_WR_DATE		(1<<5)
#define RTC_INT_MASK		(1<<31)
#define STATUS_BUSY		(PEND_WR_TIME | PEND_WR_DATE)
#define STATUS_FAIL		(LOST_WR_TIME | LOST_WR_DATE)
struct spear_rtc_config ;
static inline void spear_rtc_clear_interrupt(struct spear_rtc_config *config)
static inline void spear_rtc_enable_interrupt(struct spear_rtc_config *config)
static inline void spear_rtc_disable_interrupt(struct spear_rtc_config *config)
static inline int is_write_complete(struct spear_rtc_config *config)
static void rtc_wait_not_busy(struct spear_rtc_config *config)
static irqreturn_t spear_rtc_irq(int irq, void *dev_id)
static int tm2bcd(struct rtc_time *tm)
static void bcd2tm(struct rtc_time *tm)
static int spear_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int spear_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int spear_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int spear_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static struct rtc_class_ops spear_rtc_ops = ;
static int __devinit spear_rtc_probe(struct platform_device *pdev)
static int __devexit spear_rtc_remove(struct platform_device *pdev)
static int spear_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int spear_rtc_resume(struct platform_device *pdev)
#define spear_rtc_suspend	NULL
#define spear_rtc_resume	NULL
static void spear_rtc_shutdown(struct platform_device *pdev)
static struct platform_driver spear_rtc_driver = ;
static int __init rtc_init(void)
module_init(rtc_init);
static void __exit rtc_exit(void)
module_exit(rtc_exit);
MODULE_ALIAS("platform:rtc-spear");
MODULE_AUTHOR("Rajeev Kumar <rajeev-dlh.kumar@st.com>");
MODULE_DESCRIPTION("ST SPEAr Realtime Clock Driver (RTC)");
MODULE_LICENSE("GPL");
