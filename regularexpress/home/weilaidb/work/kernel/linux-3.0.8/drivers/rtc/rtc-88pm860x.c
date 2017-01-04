#define VRTC_CALIBRATION
struct pm860x_rtc_info ;
#define REG_VRTC_MEAS1		0x7D
#define REG0_ADDR		0xB0
#define REG1_ADDR		0xB2
#define REG2_ADDR		0xB4
#define REG3_ADDR		0xB6
#define REG0_DATA		0xB1
#define REG1_DATA		0xB3
#define REG2_DATA		0xB5
#define REG3_DATA		0xB7
#define MEAS2_VRTC		(1 << 0)
#define ALARM_EN		(1 << 3)
#define ALARM_WAKEUP		(1 << 4)
#define ALARM			(1 << 5)
#define RTC1_USE_XO		(1 << 7)
#define VRTC_CALIB_INTERVAL	(HZ * 60 * 10)
static irqreturn_t rtc_update_handler(int irq, void *data)
static int pm860x_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static void rtc_next_alarm_time(struct rtc_time *next, struct rtc_time *now,
struct rtc_time *alrm)
static int pm860x_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int pm860x_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int pm860x_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int pm860x_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static const struct rtc_class_ops pm860x_rtc_ops = ;
static void calibrate_vrtc_work(struct work_struct *work)
static int __devinit pm860x_rtc_probe(struct platform_device *pdev)
static int __devexit pm860x_rtc_remove(struct platform_device *pdev)
static struct platform_driver pm860x_rtc_driver = ;
static int __init pm860x_rtc_init(void)
module_init(pm860x_rtc_init);
static void __exit pm860x_rtc_exit(void)
module_exit(pm860x_rtc_exit);
MODULE_DESCRIPTION("Marvell 88PM860x RTC driver");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
