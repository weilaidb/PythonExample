#define LPC32XX_RTC_UCOUNT		0x00
#define LPC32XX_RTC_DCOUNT		0x04
#define LPC32XX_RTC_MATCH0		0x08
#define LPC32XX_RTC_MATCH1		0x0C
#define LPC32XX_RTC_CTRL		0x10
#define LPC32XX_RTC_INTSTAT		0x14
#define LPC32XX_RTC_KEY			0x18
#define LPC32XX_RTC_SRAM		0x80
#define LPC32XX_RTC_CTRL_MATCH0		(1 << 0)
#define LPC32XX_RTC_CTRL_MATCH1		(1 << 1)
#define LPC32XX_RTC_CTRL_ONSW_MATCH0	(1 << 2)
#define LPC32XX_RTC_CTRL_ONSW_MATCH1	(1 << 3)
#define LPC32XX_RTC_CTRL_SW_RESET	(1 << 4)
#define LPC32XX_RTC_CTRL_CNTR_DIS	(1 << 6)
#define LPC32XX_RTC_CTRL_ONSW_FORCE_HI	(1 << 7)
#define LPC32XX_RTC_INTSTAT_MATCH0	(1 << 0)
#define LPC32XX_RTC_INTSTAT_MATCH1	(1 << 1)
#define LPC32XX_RTC_INTSTAT_ONSW	(1 << 2)
#define LPC32XX_RTC_KEY_ONSW_LOADVAL	0xB5C13F27
#define RTC_NAME "rtc-lpc32xx"
#define rtc_readl(dev, reg) \
__raw_readl((dev)->rtc_base + (reg))
#define rtc_writel(dev, reg, val) \
__raw_writel((val), (dev)->rtc_base + (reg))
struct lpc32xx_rtc ;
static int lpc32xx_rtc_read_time(struct device *dev, struct rtc_time *time)
static int lpc32xx_rtc_set_mmss(struct device *dev, unsigned long secs)
static int lpc32xx_rtc_read_alarm(struct device *dev,
struct rtc_wkalrm *wkalrm)
static int lpc32xx_rtc_set_alarm(struct device *dev,
struct rtc_wkalrm *wkalrm)
static int lpc32xx_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static irqreturn_t lpc32xx_rtc_alarm_interrupt(int irq, void *dev)
static const struct rtc_class_ops lpc32xx_rtc_ops = ;
static int __devinit lpc32xx_rtc_probe(struct platform_device *pdev)
static int __devexit lpc32xx_rtc_remove(struct platform_device *pdev)
static int lpc32xx_rtc_suspend(struct device *dev)
static int lpc32xx_rtc_resume(struct device *dev)
static int lpc32xx_rtc_freeze(struct device *dev)
static int lpc32xx_rtc_thaw(struct device *dev)
static const struct dev_pm_ops lpc32xx_rtc_pm_ops = ;
#define LPC32XX_RTC_PM_OPS (&lpc32xx_rtc_pm_ops)
#define LPC32XX_RTC_PM_OPS NULL
static struct platform_driver lpc32xx_rtc_driver = ;
static int __init lpc32xx_rtc_init(void)
module_init(lpc32xx_rtc_init);
static void __exit lpc32xx_rtc_exit(void)
module_exit(lpc32xx_rtc_exit);
MODULE_AUTHOR("Kevin Wells <wellsk40@gmail.com");
MODULE_DESCRIPTION("RTC driver for the LPC32xx SoC");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rtc-lpc32xx");
