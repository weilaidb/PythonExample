#define JZ_REG_RTC_CTRL		0x00
#define JZ_REG_RTC_SEC		0x04
#define JZ_REG_RTC_SEC_ALARM	0x08
#define JZ_REG_RTC_REGULATOR	0x0C
#define JZ_REG_RTC_HIBERNATE	0x20
#define JZ_REG_RTC_SCRATCHPAD	0x34
#define JZ_RTC_CTRL_WRDY	BIT(7)
#define JZ_RTC_CTRL_1HZ		BIT(6)
#define JZ_RTC_CTRL_1HZ_IRQ	BIT(5)
#define JZ_RTC_CTRL_AF		BIT(4)
#define JZ_RTC_CTRL_AF_IRQ	BIT(3)
#define JZ_RTC_CTRL_AE		BIT(2)
#define JZ_RTC_CTRL_ENABLE	BIT(0)
struct jz4740_rtc ;
static inline uint32_t jz4740_rtc_reg_read(struct jz4740_rtc *rtc, size_t reg)
static int jz4740_rtc_wait_write_ready(struct jz4740_rtc *rtc)
static inline int jz4740_rtc_reg_write(struct jz4740_rtc *rtc, size_t reg,
uint32_t val)
static int jz4740_rtc_ctrl_set_bits(struct jz4740_rtc *rtc, uint32_t mask,
bool set)
static int jz4740_rtc_read_time(struct device *dev, struct rtc_time *time)
static int jz4740_rtc_set_mmss(struct device *dev, unsigned long secs)
static int jz4740_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int jz4740_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alrm)
static int jz4740_rtc_alarm_irq_enable(struct device *dev, unsigned int enable)
static struct rtc_class_ops jz4740_rtc_ops = ;
static irqreturn_t jz4740_rtc_irq(int irq, void *data)
void jz4740_rtc_poweroff(struct device *dev)
EXPORT_SYMBOL_GPL(jz4740_rtc_poweroff);
static int __devinit jz4740_rtc_probe(struct platform_device *pdev)
static int __devexit jz4740_rtc_remove(struct platform_device *pdev)
static int jz4740_rtc_suspend(struct device *dev)
static int jz4740_rtc_resume(struct device *dev)
static const struct dev_pm_ops jz4740_pm_ops = ;
#define JZ4740_RTC_PM_OPS (&jz4740_pm_ops)
#define JZ4740_RTC_PM_OPS NULL
struct platform_driver jz4740_rtc_driver = ;
static int __init jz4740_rtc_init(void)
module_init(jz4740_rtc_init);
static void __exit jz4740_rtc_exit(void)
module_exit(jz4740_rtc_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("RTC driver for the JZ4740 SoC\n");
MODULE_ALIAS("platform:jz4740-rtc");
