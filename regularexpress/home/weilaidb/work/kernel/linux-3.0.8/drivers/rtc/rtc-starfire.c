MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_DESCRIPTION("Starfire RTC driver");
MODULE_LICENSE("GPL");
static u32 starfire_get_time(void)
static int starfire_read_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops starfire_rtc_ops = ;
static int __init starfire_rtc_probe(struct platform_device *pdev)
static int __exit starfire_rtc_remove(struct platform_device *pdev)
static struct platform_driver starfire_rtc_driver = ;
static int __init starfire_rtc_init(void)
static void __exit starfire_rtc_exit(void)
module_init(starfire_rtc_init);
module_exit(starfire_rtc_exit);
