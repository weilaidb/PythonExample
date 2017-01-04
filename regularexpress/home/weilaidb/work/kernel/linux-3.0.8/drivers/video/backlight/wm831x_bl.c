struct wm831x_backlight_data ;
static int wm831x_backlight_set(struct backlight_device *bl, int brightness)
static int wm831x_backlight_update_status(struct backlight_device *bl)
static int wm831x_backlight_get_brightness(struct backlight_device *bl)
static const struct backlight_ops wm831x_backlight_ops = ;
static int wm831x_backlight_probe(struct platform_device *pdev)
static int wm831x_backlight_remove(struct platform_device *pdev)
static struct platform_driver wm831x_backlight_driver = ;
static int __init wm831x_backlight_init(void)
module_init(wm831x_backlight_init);
static void __exit wm831x_backlight_exit(void)
module_exit(wm831x_backlight_exit);
MODULE_DESCRIPTION("Backlight Driver for WM831x PMICs");
MODULE_AUTHOR("Mark Brown <broonie@opensource.wolfsonmicro.com");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:wm831x-backlight");
