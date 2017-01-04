struct platform_lcd ;
static inline struct platform_lcd *to_our_lcd(struct lcd_device *lcd)
static int platform_lcd_get_power(struct lcd_device *lcd)
static int platform_lcd_set_power(struct lcd_device *lcd, int power)
static int platform_lcd_match(struct lcd_device *lcd, struct fb_info *info)
static struct lcd_ops platform_lcd_ops = ;
static int __devinit platform_lcd_probe(struct platform_device *pdev)
static int __devexit platform_lcd_remove(struct platform_device *pdev)
static int platform_lcd_suspend(struct platform_device *pdev, pm_message_t st)
static int platform_lcd_resume(struct platform_device *pdev)
#define platform_lcd_suspend NULL
#define platform_lcd_resume NULL
static struct platform_driver platform_lcd_driver = ;
static int __init platform_lcd_init(void)
static void __exit platform_lcd_cleanup(void)
module_init(platform_lcd_init);
module_exit(platform_lcd_cleanup);
MODULE_AUTHOR("Ben Dooks <ben-linux@fluff.org>");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("platform:platform-lcd");
