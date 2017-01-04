#define AB8500_RTC_SOFF_STAT_REG	0x00
#define AB8500_RTC_CC_CONF_REG		0x01
#define AB8500_RTC_READ_REQ_REG		0x02
#define AB8500_RTC_WATCH_TSECMID_REG	0x03
#define AB8500_RTC_WATCH_TSECHI_REG	0x04
#define AB8500_RTC_WATCH_TMIN_LOW_REG	0x05
#define AB8500_RTC_WATCH_TMIN_MID_REG	0x06
#define AB8500_RTC_WATCH_TMIN_HI_REG	0x07
#define AB8500_RTC_ALRM_MIN_LOW_REG	0x08
#define AB8500_RTC_ALRM_MIN_MID_REG	0x09
#define AB8500_RTC_ALRM_MIN_HI_REG	0x0A
#define AB8500_RTC_STAT_REG		0x0B
#define AB8500_RTC_BKUP_CHG_REG		0x0C
#define AB8500_RTC_FORCE_BKUP_REG	0x0D
#define AB8500_RTC_CALIB_REG		0x0E
#define AB8500_RTC_SWITCH_STAT_REG	0x0F
#define RTC_READ_REQUEST		0x01
#define RTC_WRITE_REQUEST		0x02
#define RTC_ALARM_ENA			0x04
#define RTC_STATUS_DATA			0x01
#define COUNTS_PER_SEC			(0xF000 / 60)
#define AB8500_RTC_EPOCH		2000
static const u8 ab8500_rtc_time_regs[] = ;
static const u8 ab8500_rtc_alarm_regs[] = ;
static unsigned long get_elapsed_seconds(int year)
static int ab8500_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int ab8500_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int ab8500_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int ab8500_rtc_irq_enable(struct device *dev, unsigned int enabled)
static int ab8500_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static irqreturn_t rtc_alarm_handler(int irq, void *data)
static const struct rtc_class_ops ab8500_rtc_ops = ;
static int __devinit ab8500_rtc_probe(struct platform_device *pdev)
static int __devexit ab8500_rtc_remove(struct platform_device *pdev)
static struct platform_driver ab8500_rtc_driver = ;
static int __init ab8500_rtc_init(void)
static void __exit ab8500_rtc_exit(void)
module_init(ab8500_rtc_init);
module_exit(ab8500_rtc_exit);
MODULE_AUTHOR("Virupax Sadashivpetimath <virupax.sadashivpetimath@stericsson.com>");
MODULE_DESCRIPTION("AB8500 RTC Driver");
MODULE_LICENSE("GPL v2");
