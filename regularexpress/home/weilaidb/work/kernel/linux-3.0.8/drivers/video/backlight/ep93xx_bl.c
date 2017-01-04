#define EP93XX_RASTER_REG(x)		(EP93XX_RASTER_BASE + (x))
#define EP93XX_RASTER_BRIGHTNESS	EP93XX_RASTER_REG(0x20)
#define EP93XX_MAX_COUNT		255
#define EP93XX_MAX_BRIGHT		255
#define EP93XX_DEF_BRIGHT		128
struct ep93xxbl ;
static int ep93xxbl_set(struct backlight_device *bl, int brightness)
static int ep93xxbl_update_status(struct backlight_device *bl)
static int ep93xxbl_get_brightness(struct backlight_device *bl)
static const struct backlight_ops ep93xxbl_ops = ;
static int __init ep93xxbl_probe(struct platform_device *dev)
static int ep93xxbl_remove(struct platform_device *dev)
static int ep93xxbl_suspend(struct platform_device *dev, pm_message_t state)
static int ep93xxbl_resume(struct platform_device *dev)
#define ep93xxbl_suspend	NULL
#define ep93xxbl_resume		NULL
static struct platform_driver ep93xxbl_driver = ;
static int __init ep93xxbl_init(void)
module_init(ep93xxbl_init);
static void __exit ep93xxbl_exit(void)
module_exit(ep93xxbl_exit);
MODULE_DESCRIPTION("EP93xx Backlight Driver");
MODULE_AUTHOR("H Hartley Sweeten <hsweeten@visionengravers.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:ep93xx-bl");
