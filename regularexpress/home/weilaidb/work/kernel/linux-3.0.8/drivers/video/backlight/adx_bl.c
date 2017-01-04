#define ADX_BACKLIGHT_CONTROL		0x00
#define ADX_BACKLIGHT_CONTROL_ENABLE	(1 << 0)
#define ADX_BACKLIGHT_BRIGHTNESS	0x08
#define ADX_BACKLIGHT_STATUS		0x10
#define ADX_BACKLIGHT_ERROR		0x18
struct adxbl ;
static int adx_backlight_update_status(struct backlight_device *bldev)
static int adx_backlight_get_brightness(struct backlight_device *bldev)
static int adx_backlight_check_fb(struct backlight_device *bldev, struct fb_info *fb)
static const struct backlight_ops adx_backlight_ops = ;
static int __devinit adx_backlight_probe(struct platform_device *pdev)
static int __devexit adx_backlight_remove(struct platform_device *pdev)
static int adx_backlight_suspend(struct platform_device *pdev,
pm_message_t state)
static int adx_backlight_resume(struct platform_device *pdev)
#define adx_backlight_suspend NULL
#define adx_backlight_resume NULL
static struct platform_driver adx_backlight_driver = ;
static int __init adx_backlight_init(void)
static void __exit adx_backlight_exit(void)
module_init(adx_backlight_init);
module_exit(adx_backlight_exit);
MODULE_AUTHOR("Thierry Reding <thierry.reding@avionic-design.de>");
MODULE_DESCRIPTION("Avionic Design Xanthos Backlight Driver");
MODULE_LICENSE("GPL v2");
