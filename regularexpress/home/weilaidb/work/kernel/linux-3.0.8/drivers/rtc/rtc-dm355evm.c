union evm_time ;
static int dm355evm_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int dm355evm_rtc_set_time(struct device *dev, struct rtc_time *tm)
static struct rtc_class_ops dm355evm_rtc_ops = ;
static int __devinit dm355evm_rtc_probe(struct platform_device *pdev)
static int __devexit dm355evm_rtc_remove(struct platform_device *pdev)
static struct platform_driver rtc_dm355evm_driver = ;
static int __init dm355evm_rtc_init(void)
module_init(dm355evm_rtc_init);
static void __exit dm355evm_rtc_exit(void)
module_exit(dm355evm_rtc_exit);
MODULE_LICENSE("GPL");
