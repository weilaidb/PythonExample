#define CNTR_OK (SYS_CNTRL_E0 | SYS_CNTRL_32S)
static int au1xtoy_rtc_read_time(struct device *dev, struct rtc_time *tm)
static int au1xtoy_rtc_set_time(struct device *dev, struct rtc_time *tm)
static struct rtc_class_ops au1xtoy_rtc_ops = ;
static int __devinit au1xtoy_rtc_probe(struct platform_device *pdev)
static int __devexit au1xtoy_rtc_remove(struct platform_device *pdev)
static struct platform_driver au1xrtc_driver = ;
static int __init au1xtoy_rtc_init(void)
static void __exit au1xtoy_rtc_exit(void)
module_init(au1xtoy_rtc_init);
module_exit(au1xtoy_rtc_exit);
MODULE_DESCRIPTION("Au1xxx TOY-counter-based RTC driver");
MODULE_AUTHOR("Manuel Lauss <manuel.lauss@gmail.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rtc-au1xxx");
