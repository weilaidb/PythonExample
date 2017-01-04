#define OMAPBL_MAX_INTENSITY		0xff
struct omap_backlight ;
static void inline omapbl_send_intensity(int intensity)
static void inline omapbl_send_enable(int enable)
static void omapbl_blank(struct omap_backlight *bl, int mode)
static int omapbl_suspend(struct platform_device *pdev, pm_message_t state)
static int omapbl_resume(struct platform_device *pdev)
#define omapbl_suspend	NULL
#define omapbl_resume	NULL
static int omapbl_set_power(struct backlight_device *dev, int state)
static int omapbl_update_status(struct backlight_device *dev)
static int omapbl_get_intensity(struct backlight_device *dev)
static const struct backlight_ops omapbl_ops = ;
static int omapbl_probe(struct platform_device *pdev)
static int omapbl_remove(struct platform_device *pdev)
static struct platform_driver omapbl_driver = ;
static int __init omapbl_init(void)
static void __exit omapbl_exit(void)
module_init(omapbl_init);
module_exit(omapbl_exit);
MODULE_AUTHOR("Andrzej Zaborowski <balrog@zabor.org>");
MODULE_DESCRIPTION("OMAP LCD Backlight driver");
MODULE_LICENSE("GPL");
