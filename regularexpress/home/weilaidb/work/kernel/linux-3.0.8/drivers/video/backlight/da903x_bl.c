#define DA9030_WLED_CONTROL	0x25
#define DA9030_WLED_CP_EN	(1 << 6)
#define DA9030_WLED_TRIM(x)	((x) & 0x7)
#define DA9034_WLED_CONTROL1	0x3C
#define DA9034_WLED_CONTROL2	0x3D
#define DA9034_WLED_ISET(x)	((x) & 0x1f)
#define DA9034_WLED_BOOST_EN	(1 << 5)
#define DA9030_MAX_BRIGHTNESS	7
#define DA9034_MAX_BRIGHTNESS	0x7f
struct da903x_backlight_data ;
static int da903x_backlight_set(struct backlight_device *bl, int brightness)
static int da903x_backlight_update_status(struct backlight_device *bl)
static int da903x_backlight_get_brightness(struct backlight_device *bl)
static const struct backlight_ops da903x_backlight_ops = ;
static int da903x_backlight_probe(struct platform_device *pdev)
static int da903x_backlight_remove(struct platform_device *pdev)
static int da903x_backlight_suspend(struct device *dev)
static int da903x_backlight_resume(struct device *dev)
static const struct dev_pm_ops da903x_backlight_pm_ops = ;
static struct platform_driver da903x_backlight_driver = ;
static int __init da903x_backlight_init(void)
module_init(da903x_backlight_init);
static void __exit da903x_backlight_exit(void)
module_exit(da903x_backlight_exit);
MODULE_DESCRIPTION("Backlight Driver for Dialog Semiconductor DA9030/DA9034");
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>"
"Mike Rapoport <mike@compulab.co.il>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:da903x-backlight");
