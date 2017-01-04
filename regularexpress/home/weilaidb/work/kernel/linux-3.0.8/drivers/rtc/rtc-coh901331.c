#define COH901331_ALARM		0x00U
#define COH901331_SET_TIME	0x04U
#define COH901331_VALID		0x08U
#define COH901331_CUR_TIME	0x0cU
#define COH901331_IRQ_EVENT	0x10U
#define COH901331_IRQ_MASK	0x14U
#define COH901331_IRQ_FORCE	0x18U
struct coh901331_port ;
static irqreturn_t coh901331_interrupt(int irq, void *data)
static int coh901331_read_time(struct device *dev, struct rtc_time *tm)
static int coh901331_set_mmss(struct device *dev, unsigned long secs)
static int coh901331_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int coh901331_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int coh901331_alarm_irq_enable(struct device *dev, unsigned int enabled)
static struct rtc_class_ops coh901331_ops = ;
static int __exit coh901331_remove(struct platform_device *pdev)
static int __init coh901331_probe(struct platform_device *pdev)
static int coh901331_suspend(struct platform_device *pdev, pm_message_t state)
static int coh901331_resume(struct platform_device *pdev)
#define coh901331_suspend NULL
#define coh901331_resume NULL
static void coh901331_shutdown(struct platform_device *pdev)
static struct platform_driver coh901331_driver = ;
static int __init coh901331_init(void)
static void __exit coh901331_exit(void)
module_init(coh901331_init);
module_exit(coh901331_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("ST-Ericsson AB COH 901 331 RTC Driver");
MODULE_LICENSE("GPL");
