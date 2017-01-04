#define WM831X_RTC_WR_CNT_MASK                  0xFFFF
#define WM831X_RTC_WR_CNT_SHIFT                      0
#define WM831X_RTC_WR_CNT_WIDTH                     16
#define WM831X_RTC_TIME_MASK                    0xFFFF
#define WM831X_RTC_TIME_SHIFT                        0
#define WM831X_RTC_TIME_WIDTH                       16
#define WM831X_RTC_TIME_MASK                    0xFFFF
#define WM831X_RTC_TIME_SHIFT                        0
#define WM831X_RTC_TIME_WIDTH                       16
#define WM831X_RTC_ALM_MASK                     0xFFFF
#define WM831X_RTC_ALM_SHIFT                         0
#define WM831X_RTC_ALM_WIDTH                        16
#define WM831X_RTC_ALM_MASK                     0xFFFF
#define WM831X_RTC_ALM_SHIFT                         0
#define WM831X_RTC_ALM_WIDTH                        16
#define WM831X_RTC_VALID                        0x8000
#define WM831X_RTC_VALID_MASK                   0x8000
#define WM831X_RTC_VALID_SHIFT                      15
#define WM831X_RTC_VALID_WIDTH                       1
#define WM831X_RTC_SYNC_BUSY                    0x4000
#define WM831X_RTC_SYNC_BUSY_MASK               0x4000
#define WM831X_RTC_SYNC_BUSY_SHIFT                  14
#define WM831X_RTC_SYNC_BUSY_WIDTH                   1
#define WM831X_RTC_ALM_ENA                      0x0400
#define WM831X_RTC_ALM_ENA_MASK                 0x0400
#define WM831X_RTC_ALM_ENA_SHIFT                    10
#define WM831X_RTC_ALM_ENA_WIDTH                     1
#define WM831X_RTC_PINT_FREQ_MASK               0x0070
#define WM831X_RTC_PINT_FREQ_SHIFT                   4
#define WM831X_RTC_PINT_FREQ_WIDTH                   3
#define WM831X_RTC_TRIM_MASK                    0x03FF
#define WM831X_RTC_TRIM_SHIFT                        0
#define WM831X_RTC_TRIM_WIDTH                       10
#define WM831X_SET_TIME_RETRIES	5
#define WM831X_GET_TIME_RETRIES	5
struct wm831x_rtc ;
static int wm831x_rtc_readtime(struct device *dev, struct rtc_time *tm)
static int wm831x_rtc_set_mmss(struct device *dev, unsigned long time)
static int wm831x_rtc_readalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int wm831x_rtc_stop_alarm(struct wm831x_rtc *wm831x_rtc)
static int wm831x_rtc_start_alarm(struct wm831x_rtc *wm831x_rtc)
static int wm831x_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int wm831x_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static irqreturn_t wm831x_alm_irq(int irq, void *data)
static irqreturn_t wm831x_per_irq(int irq, void *data)
static const struct rtc_class_ops wm831x_rtc_ops = ;
static int wm831x_rtc_suspend(struct device *dev)
static int wm831x_rtc_resume(struct device *dev)
static int wm831x_rtc_freeze(struct device *dev)
#define wm831x_rtc_suspend NULL
#define wm831x_rtc_resume NULL
#define wm831x_rtc_freeze NULL
static int wm831x_rtc_probe(struct platform_device *pdev)
static int __devexit wm831x_rtc_remove(struct platform_device *pdev)
static const struct dev_pm_ops wm831x_rtc_pm_ops = ;
static struct platform_driver wm831x_rtc_driver = ;
static int __init wm831x_rtc_init(void)
module_init(wm831x_rtc_init);
static void __exit wm831x_rtc_exit(void)
module_exit(wm831x_rtc_exit);
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com>");
MODULE_DESCRIPTION("RTC driver for the WM831x series PMICs");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-rtc");
