#define DRVNAME "net48xx-led"
#define NET48XX_ERROR_LED_GPIO	20
static struct platform_device *pdev;
static void net48xx_error_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static struct led_classdev net48xx_error_led = ;
static int net48xx_led_probe(struct platform_device *pdev)
static int net48xx_led_remove(struct platform_device *pdev)
static struct platform_driver net48xx_led_driver = ;
static int __init net48xx_led_init(void)
static void __exit net48xx_led_exit(void)
module_init(net48xx_led_init);
module_exit(net48xx_led_exit);
MODULE_AUTHOR("Chris Boot <bootc@bootc.net>");
MODULE_DESCRIPTION("Soekris net48xx LED driver");
MODULE_LICENSE("GPL");
