static int genericbl_intensity;
static struct backlight_device *generic_backlight_device;
static struct generic_bl_info *bl_machinfo;
#define GENERICBL_BATTLOW       BL_CORE_DRIVER1
static int genericbl_send_intensity(struct backlight_device *bd)
static int genericbl_get_intensity(struct backlight_device *bd)
void corgibl_limit_intensity(int limit)
EXPORT_SYMBOL(corgibl_limit_intensity);
static const struct backlight_ops genericbl_ops = ;
static int genericbl_probe(struct platform_device *pdev)
static int genericbl_remove(struct platform_device *pdev)
static struct platform_driver genericbl_driver = ;
static int __init genericbl_init(void)
static void __exit genericbl_exit(void)
module_init(genericbl_init);
module_exit(genericbl_exit);
MODULE_AUTHOR("Richard Purdie <rpurdie@rpsys.net>");
MODULE_DESCRIPTION("Generic Backlight Driver");
MODULE_LICENSE("GPL");
