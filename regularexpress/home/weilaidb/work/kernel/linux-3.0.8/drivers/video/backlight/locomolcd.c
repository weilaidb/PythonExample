static struct backlight_device *locomolcd_bl_device;
static struct locomo_dev *locomolcd_dev;
static unsigned long locomolcd_flags;
#define LOCOMOLCD_SUSPENDED     0x01
static void locomolcd_on(int comadj)
static void locomolcd_off(int comadj)
void locomolcd_power(int on)
EXPORT_SYMBOL(locomolcd_power);
static int current_intensity;
static int locomolcd_set_intensity(struct backlight_device *bd)
static int locomolcd_get_intensity(struct backlight_device *bd)
static const struct backlight_ops locomobl_data = ;
static int locomolcd_suspend(struct locomo_dev *dev, pm_message_t state)
static int locomolcd_resume(struct locomo_dev *dev)
#define locomolcd_suspend	NULL
#define locomolcd_resume	NULL
static int locomolcd_probe(struct locomo_dev *ldev)
static int locomolcd_remove(struct locomo_dev *dev)
static struct locomo_driver poodle_lcd_driver = ;
static int __init locomolcd_init(void)
static void __exit locomolcd_exit(void)
module_init(locomolcd_init);
module_exit(locomolcd_exit);
MODULE_AUTHOR("John Lenz <lenz@cs.wisc.edu>, Pavel Machek <pavel@ucw.cz>");
MODULE_DESCRIPTION("Collie LCD driver");
MODULE_LICENSE("GPL");
