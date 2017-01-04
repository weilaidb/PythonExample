#define OMAP_RTC_BASE			0xfffb4800
#define OMAP_RTC_SECONDS_REG		0x00
#define OMAP_RTC_MINUTES_REG		0x04
#define OMAP_RTC_HOURS_REG		0x08
#define OMAP_RTC_DAYS_REG		0x0C
#define OMAP_RTC_MONTHS_REG		0x10
#define OMAP_RTC_YEARS_REG		0x14
#define OMAP_RTC_WEEKS_REG		0x18
#define OMAP_RTC_ALARM_SECONDS_REG	0x20
#define OMAP_RTC_ALARM_MINUTES_REG	0x24
#define OMAP_RTC_ALARM_HOURS_REG	0x28
#define OMAP_RTC_ALARM_DAYS_REG		0x2c
#define OMAP_RTC_ALARM_MONTHS_REG	0x30
#define OMAP_RTC_ALARM_YEARS_REG	0x34
#define OMAP_RTC_CTRL_REG		0x40
#define OMAP_RTC_STATUS_REG		0x44
#define OMAP_RTC_INTERRUPTS_REG		0x48
#define OMAP_RTC_COMP_LSB_REG		0x4c
#define OMAP_RTC_COMP_MSB_REG		0x50
#define OMAP_RTC_OSC_REG		0x54
#define OMAP_RTC_CTRL_SPLIT		(1<<7)
#define OMAP_RTC_CTRL_DISABLE		(1<<6)
#define OMAP_RTC_CTRL_SET_32_COUNTER	(1<<5)
#define OMAP_RTC_CTRL_TEST		(1<<4)
#define OMAP_RTC_CTRL_MODE_12_24	(1<<3)
#define OMAP_RTC_CTRL_AUTO_COMP		(1<<2)
#define OMAP_RTC_CTRL_ROUND_30S		(1<<1)
#define OMAP_RTC_CTRL_STOP		(1<<0)
#define OMAP_RTC_STATUS_POWER_UP        (1<<7)
#define OMAP_RTC_STATUS_ALARM           (1<<6)
#define OMAP_RTC_STATUS_1D_EVENT        (1<<5)
#define OMAP_RTC_STATUS_1H_EVENT        (1<<4)
#define OMAP_RTC_STATUS_1M_EVENT        (1<<3)
#define OMAP_RTC_STATUS_1S_EVENT        (1<<2)
#define OMAP_RTC_STATUS_RUN             (1<<1)
#define OMAP_RTC_STATUS_BUSY            (1<<0)
#define OMAP_RTC_INTERRUPTS_IT_ALARM    (1<<3)
#define OMAP_RTC_INTERRUPTS_IT_TIMER    (1<<2)
static void __iomem	*rtc_base;
#define rtc_read(addr)		__raw_readb(rtc_base + (addr))
#define rtc_write(val, addr)	__raw_writeb(val, rtc_base + (addr))
static void rtc_wait_not_busy(void)
static irqreturn_t rtc_irq(int irq, void *rtc)
static int omap_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static int tm2bcd(struct rtc_time *tm)
static void bcd2tm(struct rtc_time *tm)
static int omap_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int omap_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int omap_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alm)
static int omap_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alm)
static struct rtc_class_ops omap_rtc_ops = ;
static int omap_rtc_alarm;
static int omap_rtc_timer;
static int __init omap_rtc_probe(struct platform_device *pdev)
static int __exit omap_rtc_remove(struct platform_device *pdev)
static u8 irqstat;
static int omap_rtc_suspend(struct platform_device *pdev, pm_message_t state)
static int omap_rtc_resume(struct platform_device *pdev)
#define omap_rtc_suspend NULL
#define omap_rtc_resume  NULL
static void omap_rtc_shutdown(struct platform_device *pdev)
MODULE_ALIAS("platform:omap_rtc");
static struct platform_driver omap_rtc_driver = ;
static int __init rtc_init(void)
module_init(rtc_init);
static void __exit rtc_exit(void)
module_exit(rtc_exit);
MODULE_AUTHOR("George G. Davis (and others)");
MODULE_LICENSE("GPL");
