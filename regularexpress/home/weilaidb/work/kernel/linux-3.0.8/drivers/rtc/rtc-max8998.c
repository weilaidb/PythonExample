#define MAX8998_RTC_SEC			0x00
#define MAX8998_RTC_MIN			0x01
#define MAX8998_RTC_HOUR		0x02
#define MAX8998_RTC_WEEKDAY		0x03
#define MAX8998_RTC_DATE		0x04
#define MAX8998_RTC_MONTH		0x05
#define MAX8998_RTC_YEAR1		0x06
#define MAX8998_RTC_YEAR2		0x07
#define MAX8998_ALARM0_SEC		0x08
#define MAX8998_ALARM0_MIN		0x09
#define MAX8998_ALARM0_HOUR		0x0a
#define MAX8998_ALARM0_WEEKDAY		0x0b
#define MAX8998_ALARM0_DATE		0x0c
#define MAX8998_ALARM0_MONTH		0x0d
#define MAX8998_ALARM0_YEAR1		0x0e
#define MAX8998_ALARM0_YEAR2		0x0f
#define MAX8998_ALARM1_SEC		0x10
#define MAX8998_ALARM1_MIN		0x11
#define MAX8998_ALARM1_HOUR		0x12
#define MAX8998_ALARM1_WEEKDAY		0x13
#define MAX8998_ALARM1_DATE		0x14
#define MAX8998_ALARM1_MONTH		0x15
#define MAX8998_ALARM1_YEAR1		0x16
#define MAX8998_ALARM1_YEAR2		0x17
#define MAX8998_ALARM0_CONF		0x18
#define MAX8998_ALARM1_CONF		0x19
#define MAX8998_RTC_STATUS		0x1a
#define MAX8998_WTSR_SMPL_CNTL		0x1b
#define MAX8998_TEST			0x1f
#define HOUR_12				(1 << 7)
#define HOUR_PM				(1 << 5)
#define ALARM0_STATUS			(1 << 1)
#define ALARM1_STATUS			(1 << 2)
enum ;
struct max8998_rtc_info ;
static void max8998_data_to_tm(u8 *data, struct rtc_time *tm)
static void max8998_tm_to_data(struct rtc_time *tm, u8 *data)
static int max8998_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int max8998_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int max8998_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int max8998_rtc_stop_alarm(struct max8998_rtc_info *info)
static int max8998_rtc_start_alarm(struct max8998_rtc_info *info)
static int max8998_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int max8998_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static irqreturn_t max8998_rtc_alarm_irq(int irq, void *data)
static const struct rtc_class_ops max8998_rtc_ops = ;
static int __devinit max8998_rtc_probe(struct platform_device *pdev)
static int __devexit max8998_rtc_remove(struct platform_device *pdev)
static const struct platform_device_id max8998_rtc_id[] = ;
static struct platform_driver max8998_rtc_driver = ;
static int __init max8998_rtc_init(void)
module_init(max8998_rtc_init);
static void __exit max8998_rtc_exit(void)
module_exit(max8998_rtc_exit);
MODULE_AUTHOR("Minkyu Kang <mk7.kang@samsung.com>");
MODULE_AUTHOR("Joonyoung Shim <jy0922.shim@samsung.com>");
MODULE_DESCRIPTION("Maxim MAX8998 RTC driver");
MODULE_LICENSE("GPL");
