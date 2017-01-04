#define RTC_CTRL		0x00
#define RTC_CTRL_EN		   0
#define RTC_CTRL_PCLR		   1
#define RTC_CTRL_TOPEN		   2
#define RTC_CTRL_PSEL		   8
#define RTC_VAL			0x04
#define RTC_TOP			0x08
#define RTC_IER			0x10
#define RTC_IER_TOPI		   0
#define RTC_IDR			0x14
#define RTC_IDR_TOPI		   0
#define RTC_IMR			0x18
#define RTC_IMR_TOPI		   0
#define RTC_ISR			0x1c
#define RTC_ISR_TOPI		   0
#define RTC_ICR			0x20
#define RTC_ICR_TOPI		   0
#define RTC_BIT(name)		(1 << RTC_##name)
#define RTC_BF(name, value)	((value) << RTC_##name)
#define rtc_readl(dev, reg)				\
__raw_readl((dev)->regs + RTC_##reg)
#define rtc_writel(dev, reg, value)			\
__raw_writel((value), (dev)->regs + RTC_##reg)
struct rtc_at32ap700x ;
static int at32_rtc_readtime(struct device *dev, struct rtc_time *tm)
static int at32_rtc_settime(struct device *dev, struct rtc_time *tm)
static int at32_rtc_readalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int at32_rtc_setalarm(struct device *dev, struct rtc_wkalrm *alrm)
static int at32_rtc_alarm_irq_enable(struct device *dev, unsigned int enabled)
static irqreturn_t at32_rtc_interrupt(int irq, void *dev_id)
static struct rtc_class_ops at32_rtc_ops = ;
static int __init at32_rtc_probe(struct platform_device *pdev)
static int __exit at32_rtc_remove(struct platform_device *pdev)
MODULE_ALIAS("platform:at32ap700x_rtc");
static struct platform_driver at32_rtc_driver = ;
static int __init at32_rtc_init(void)
module_init(at32_rtc_init);
static void __exit at32_rtc_exit(void)
module_exit(at32_rtc_exit);
MODULE_AUTHOR("Hans-Christian Egtvedt <hcegtvedt@atmel.com>");
MODULE_DESCRIPTION("Real time clock for AVR32 AT32AP700x");
MODULE_LICENSE("GPL");
