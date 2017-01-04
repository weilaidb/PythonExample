#define BL_MAX_BRIGHT	255
#define BL_DEF_BRIGHT	25
static int jornada_bl_get_brightness(struct backlight_device *bd)
static int jornada_bl_update_status(struct backlight_device *bd)
static const struct backlight_ops jornada_bl_ops = ;
static int jornada_bl_probe(struct platform_device *pdev)
static int jornada_bl_remove(struct platform_device *pdev)
static struct platform_driver jornada_bl_driver = ;
static int __init jornada_bl_init(void)
static void __exit jornada_bl_exit(void)
MODULE_AUTHOR("Kristoffer Ericson <kristoffer.ericson>");
MODULE_DESCRIPTION("HP Jornada 710/720/728 Backlight driver");
MODULE_LICENSE("GPL");
module_init(jornada_bl_init);
module_exit(jornada_bl_exit);
