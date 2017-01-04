#define CLEVO_MAIL_LED_OFF		0x0084
#define CLEVO_MAIL_LED_BLINK_1HZ	0x008A
#define CLEVO_MAIL_LED_BLINK_0_5HZ	0x0083
MODULE_AUTHOR("Márton Németh <nm127@freemail.hu>");
MODULE_DESCRIPTION("Clevo mail LED driver");
MODULE_LICENSE("GPL");
static unsigned int __initdata nodetect;
module_param_named(nodetect, nodetect, bool, 0);
MODULE_PARM_DESC(nodetect, "Skip DMI hardware detection");
static struct platform_device *pdev;
static int __init clevo_mail_led_dmi_callback(const struct dmi_system_id *id)
static struct dmi_system_id __initdata mail_led_whitelist[] = ;
static void clevo_mail_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static int clevo_mail_led_blink(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static struct led_classdev clevo_mail_led = ;
static int __devinit clevo_mail_led_probe(struct platform_device *pdev)
static int clevo_mail_led_remove(struct platform_device *pdev)
static struct platform_driver clevo_mail_led_driver = ;
static int __init clevo_mail_led_init(void)
static void __exit clevo_mail_led_exit(void)
module_init(clevo_mail_led_init);
module_exit(clevo_mail_led_exit);
