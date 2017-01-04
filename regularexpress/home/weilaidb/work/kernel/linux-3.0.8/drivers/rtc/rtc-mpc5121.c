struct mpc5121_rtc_regs ;
struct mpc5121_rtc_data ;
static void mpc5121_rtc_update_smh(struct mpc5121_rtc_regs __iomem *regs,
struct rtc_time *tm)
static int mpc5121_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int mpc5121_rtc_set_time(struct device *dev, struct rtc_time *tm)
static int mpc5121_rtc_read_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static int mpc5121_rtc_set_alarm(struct device *dev, struct rtc_wkalrm *alarm)
static irqreturn_t mpc5121_rtc_handler(int irq, void *dev)
static irqreturn_t mpc5121_rtc_handler_upd(int irq, void *dev)
static int mpc5121_rtc_alarm_irq_enable(struct device *dev,
unsigned int enabled)
static const struct rtc_class_ops mpc5121_rtc_ops = ;
static int __devinit mpc5121_rtc_probe(struct platform_device *op)
static int __devexit mpc5121_rtc_remove(struct platform_device *op)
static struct of_device_id mpc5121_rtc_match[] __devinitdata = ;
static struct platform_driver mpc5121_rtc_driver = ;
static int __init mpc5121_rtc_init(void)
module_init(mpc5121_rtc_init);
static void __exit mpc5121_rtc_exit(void)
module_exit(mpc5121_rtc_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("John Rigby <jcrigby@gmail.com>");
