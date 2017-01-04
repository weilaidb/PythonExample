#define KB3886_PARENT 0x64
#define KB3886_IO 0x60
#define KB3886_ADC_DAC_PWM 0xC4
#define KB3886_PWM0_WRITE 0x81
#define KB3886_PWM0_READ 0x41
static DEFINE_MUTEX(bl_mutex);
static void kb3886_bl_set_intensity(int intensity)
struct kb3886bl_machinfo ;
static struct kb3886bl_machinfo kb3886_bl_machinfo = ;
static struct platform_device kb3886bl_device = ;
static struct platform_device *devices[] __initdata = ;
static int kb3886bl_intensity;
static struct backlight_device *kb3886_backlight_device;
static struct kb3886bl_machinfo *bl_machinfo;
static unsigned long kb3886bl_flags;
#define KB3886BL_SUSPENDED     0x01
static struct dmi_system_id __initdata kb3886bl_device_table[] = ;
static int kb3886bl_send_intensity(struct backlight_device *bd)
static int kb3886bl_suspend(struct platform_device *pdev, pm_message_t state)
static int kb3886bl_resume(struct platform_device *pdev)
#define kb3886bl_suspend	NULL
#define kb3886bl_resume		NULL
static int kb3886bl_get_intensity(struct backlight_device *bd)
static const struct backlight_ops kb3886bl_ops = ;
static int kb3886bl_probe(struct platform_device *pdev)
static int kb3886bl_remove(struct platform_device *pdev)
static struct platform_driver kb3886bl_driver = ;
static int __init kb3886_init(void)
static void __exit kb3886_exit(void)
module_init(kb3886_init);
module_exit(kb3886_exit);
MODULE_AUTHOR("Claudio Nieder <private@claudio.ch>");
MODULE_DESCRIPTION("Tabletkiosk Sahara Touch-iT Backlight Driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("dmi:*:svnSDV:pniTouchT201:*");
