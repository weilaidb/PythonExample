#define HP680_MAX_INTENSITY 255
#define HP680_DEFAULT_INTENSITY 10
static int hp680bl_suspended;
static int current_intensity = 0;
static DEFINE_SPINLOCK(bl_lock);
static void hp680bl_send_intensity(struct backlight_device *bd)
static int hp680bl_suspend(struct platform_device *pdev, pm_message_t state)
static int hp680bl_resume(struct platform_device *pdev)
#define hp680bl_suspend	NULL
#define hp680bl_resume	NULL
static int hp680bl_set_intensity(struct backlight_device *bd)
static int hp680bl_get_intensity(struct backlight_device *bd)
static const struct backlight_ops hp680bl_ops = ;
static int __devinit hp680bl_probe(struct platform_device *pdev)
static int hp680bl_remove(struct platform_device *pdev)
static struct platform_driver hp680bl_driver = ;
static struct platform_device *hp680bl_device;
static int __init hp680bl_init(void)
static void __exit hp680bl_exit(void)
module_init(hp680bl_init);
module_exit(hp680bl_exit);
MODULE_AUTHOR("Andriy Skulysh <askulysh@gmail.com>");
MODULE_DESCRIPTION("HP Jornada 680 Backlight Driver");
MODULE_LICENSE("GPL");
