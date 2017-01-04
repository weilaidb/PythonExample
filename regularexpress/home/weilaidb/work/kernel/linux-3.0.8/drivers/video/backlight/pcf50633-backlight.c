struct pcf50633_bl ;
int pcf50633_bl_set_brightness_limit(struct pcf50633 *pcf, unsigned int limit)
static int pcf50633_bl_update_status(struct backlight_device *bl)
static int pcf50633_bl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops pcf50633_bl_ops = ;
static int __devinit pcf50633_bl_probe(struct platform_device *pdev)
static int __devexit pcf50633_bl_remove(struct platform_device *pdev)
static struct platform_driver pcf50633_bl_driver = ;
static int __init pcf50633_bl_init(void)
module_init(pcf50633_bl_init);
static void __exit pcf50633_bl_exit(void)
module_exit(pcf50633_bl_exit);
MODULE_AUTHOR("Lars-Peter Clausen <lars@metafoo.de>");
MODULE_DESCRIPTION("PCF50633 backlight driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:pcf50633-backlight");
