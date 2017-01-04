enum ;
#define MAX8925_RTC_SEC			0x00
#define MAX8925_RTC_MIN			0x01
#define MAX8925_RTC_HOUR		0x02
#define MAX8925_RTC_WEEKDAY		0x03
#define MAX8925_RTC_DATE		0x04
#define MAX8925_RTC_MONTH		0x05
#define MAX8925_RTC_YEAR1		0x06
#define MAX8925_RTC_YEAR2		0x07
#define MAX8925_ALARM0_SEC		0x08
#define MAX8925_ALARM0_MIN		0x09
#define MAX8925_ALARM0_HOUR		0x0a
#define MAX8925_ALARM0_WEEKDAY		0x0b
#define MAX8925_ALARM0_DATE		0x0c
#define MAX8925_ALARM0_MON		0x0d
#define MAX8925_ALARM0_YEAR1		0x0e
#define MAX8925_ALARM0_YEAR2		0x0f
#define MAX8925_ALARM1_SEC		0x10
#define MAX8925_ALARM1_MIN		0x11
#define MAX8925_ALARM1_HOUR		0x12
#define MAX8925_ALARM1_WEEKDAY		0x13
#define MAX8925_ALARM1_DATE		0x14
#define MAX8925_ALARM1_MON		0x15
#define MAX8925_ALARM1_YEAR1		0x16
#define MAX8925_ALARM1_YEAR2		0x17
#define MAX8925_RTC_CNTL		0x1b
#define MAX8925_RTC_STATUS		0x20
#define TIME_NUM			8
#define ALARM_1SEC			(1 << 7)
#define HOUR_12				(1 << 7)
#define HOUR_AM_PM			(1 << 5)
#define ALARM0_IRQ			(1 << 3)
#define ALARM1_IRQ			(1 << 2)
#define ALARM0_STATUS			(1 << 2)
#define ALARM1_STATUS			(1 << 1)
struct max8925_rtc_info ;
static irqreturn_t rtc_update_handler(int irq, void *data)
static int tm_calc(struct rtc_time *tm, unsigned char *buf, int len)
static int data_calc(unsigned char *buf, struct rtc_time *tm, int len)
static int max8925_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int max8925_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int max8925_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int max8925_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static const struct rtc_class_ops max8925_rtc_ops = ;
static int __devinit max8925_rtc_probe(struct platform_device *pdev)
static int __devexit max8925_rtc_remove(struct platform_device *pdev)
static struct platform_driver max8925_rtc_driver = ;
static int __init max8925_rtc_init(void)
module_init(max8925_rtc_init);
static void __exit max8925_rtc_exit(void)
module_exit(max8925_rtc_exit);
MODULE_DESCRIPTION("Maxim MAX8925 RTC driver");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
