static int generic_get_time(struct device *dev, struct rtc_time *tm)
static int generic_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops generic_rtc_ops = ;
static int __init generic_rtc_probe(struct platform_device *dev)
static int __exit generic_rtc_remove(struct platform_device *dev)
static struct platform_driver generic_rtc_driver = ;
static int __init generic_rtc_init(void)
static void __exit generic_rtc_fini(void)
module_init(generic_rtc_init);
module_exit(generic_rtc_fini);
MODULE_AUTHOR("Kyle McMartin <kyle@mcmartin.ca>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Generic RTC driver");
MODULE_ALIAS("platform:rtc-generic");
