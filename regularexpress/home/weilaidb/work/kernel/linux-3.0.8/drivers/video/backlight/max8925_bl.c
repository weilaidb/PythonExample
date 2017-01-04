#define MAX_BRIGHTNESS		(0xff)
#define MIN_BRIGHTNESS		(0)
#define LWX_FREQ(x)		(((x - 601) / 100) & 0x7)
struct max8925_backlight_data ;
static int max8925_backlight_set(struct backlight_device *bl, int brightness)
static int max8925_backlight_update_status(struct backlight_device *bl)
static int max8925_backlight_get_brightness(struct backlight_device *bl)
static const struct backlight_ops max8925_backlight_ops = ;
static int __devinit max8925_backlight_probe(struct platform_device *pdev)
static int __devexit max8925_backlight_remove(struct platform_device *pdev)
static struct platform_driver max8925_backlight_driver = ;
static int __init max8925_backlight_init(void)
module_init(max8925_backlight_init);
static void __exit max8925_backlight_exit(void)
;
module_exit(max8925_backlight_exit);
MODULE_DESCRIPTION("Backlight Driver for Maxim MAX8925");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:max8925-backlight");
