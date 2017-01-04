#define MAX_BRIGHTNESS		(0xFF)
#define MIN_BRIGHTNESS		(0)
#define CURRENT_BITMASK		(0x1F << 1)
struct pm860x_backlight_data ;
static inline int wled_a(int port)
static inline int wled_b(int port)
static inline int wled_idc(int port)
static int pm860x_backlight_set(struct backlight_device *bl, int brightness)
static int pm860x_backlight_update_status(struct backlight_device *bl)
static int pm860x_backlight_get_brightness(struct backlight_device *bl)
static const struct backlight_ops pm860x_backlight_ops = ;
static int pm860x_backlight_probe(struct platform_device *pdev)
static int pm860x_backlight_remove(struct platform_device *pdev)
static struct platform_driver pm860x_backlight_driver = ;
static int __init pm860x_backlight_init(void)
module_init(pm860x_backlight_init);
static void __exit pm860x_backlight_exit(void)
module_exit(pm860x_backlight_exit);
MODULE_DESCRIPTION("Backlight Driver for Marvell Semiconductor 88PM8606");
MODULE_AUTHOR("Haojian Zhuang <haojian.zhuang@marvell.com>");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:88pm860x-backlight");
