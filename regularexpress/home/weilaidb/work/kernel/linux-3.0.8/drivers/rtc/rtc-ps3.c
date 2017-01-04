static u64 read_rtc(void)
static int ps3_get_time(struct device *dev, struct rtc_time *tm)
static int ps3_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops ps3_rtc_ops = ;
static int __init ps3_rtc_probe(struct platform_device *dev)
static int __exit ps3_rtc_remove(struct platform_device *dev)
static struct platform_driver ps3_rtc_driver = ;
static int __init ps3_rtc_init(void)
static void __exit ps3_rtc_fini(void)
module_init(ps3_rtc_init);
module_exit(ps3_rtc_fini);
MODULE_AUTHOR("Sony Corporation");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("ps3 RTC driver");
MODULE_ALIAS("platform:rtc-ps3");
