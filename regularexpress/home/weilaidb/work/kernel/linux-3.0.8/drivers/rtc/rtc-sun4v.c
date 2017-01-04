static unsigned long hypervisor_get_time(void)
static int sun4v_read_time(struct device *dev, struct rtc_time *tm)
static int hypervisor_set_time(unsigned long secs)
static int sun4v_set_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops sun4v_rtc_ops = ;
static int __init sun4v_rtc_probe(struct platform_device *pdev)
static int __exit sun4v_rtc_remove(struct platform_device *pdev)
static struct platform_driver sun4v_rtc_driver = ;
static int __init sun4v_rtc_init(void)
static void __exit sun4v_rtc_exit(void)
module_init(sun4v_rtc_init);
module_exit(sun4v_rtc_exit);
MODULE_AUTHOR("David S. Miller <davem@davemloft.net>");
MODULE_DESCRIPTION("SUN4V RTC driver");
MODULE_LICENSE("GPL");
