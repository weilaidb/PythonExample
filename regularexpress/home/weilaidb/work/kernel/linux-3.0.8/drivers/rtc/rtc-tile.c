static struct platform_device *tile_rtc_platform_device;
static int read_rtc_time(struct device *dev, struct rtc_time *tm)
static int set_rtc_time(struct device *dev, struct rtc_time *tm)
static const struct rtc_class_ops tile_rtc_ops = ;
static int __devinit tile_rtc_probe(struct platform_device *dev)
static int __devexit tile_rtc_remove(struct platform_device *dev)
static struct platform_driver tile_rtc_platform_driver = ;
static int __init tile_rtc_driver_init(void)
static void __exit tile_rtc_driver_exit(void)
module_init(tile_rtc_driver_init);
module_exit(tile_rtc_driver_exit);
MODULE_DESCRIPTION("Tilera-specific Real Time Clock Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:rtc-tile");
