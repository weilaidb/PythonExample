#define WM8350_SET_ALM_RETRIES	5
#define WM8350_SET_TIME_RETRIES	5
#define WM8350_GET_TIME_RETRIES	5
#define to_wm8350_from_rtc_dev(d) container_of(d, struct wm8350, rtc.pdev.dev)
static int wm8350_rtc_readtime(struct device *dev, struct rtc_time *tm)
static int wm8350_rtc_settime(struct device *dev, struct rtc_time *tm)
static int wm8350_rtc_readalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int wm8350_rtc_stop_alarm(struct wm8350 *wm8350)
static int wm8350_rtc_start_alarm(struct wm8350 *wm8350)
static int wm8350_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static int wm8350_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static irqreturn_t wm8350_rtc_alarm_handler(int irq, void *data)
static irqreturn_t wm8350_rtc_update_handler(int irq, void *data)
static const struct rtc_class_ops wm8350_rtc_ops = ;
static int wm8350_rtc_suspend(struct device *dev)
static int wm8350_rtc_resume(struct device *dev)
#define wm8350_rtc_suspend NULL
#define wm8350_rtc_resume NULL
static int wm8350_rtc_probe(struct platform_device *pdev)
static int __devexit wm8350_rtc_remove(struct platform_device *pdev)
static struct dev_pm_ops wm8350_rtc_pm_ops = ;
static struct platform_driver wm8350_rtc_driver = ;
static int __init wm8350_rtc_init(void)
module_init(wm8350_rtc_init);
static void __exit wm8350_rtc_exit(void)
module_exit(wm8350_rtc_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("RTC driver for the WM8350");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm8350-rtc");
