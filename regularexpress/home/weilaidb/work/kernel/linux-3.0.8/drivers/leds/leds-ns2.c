enum ns2_led_modes ;
struct ns2_led_mode_value ;
static struct ns2_led_mode_value ns2_led_modval[] = ;
struct ns2_led_data ;
static int ns2_led_get_mode(struct ns2_led_data *led_dat,
enum ns2_led_modes *mode)
static void ns2_led_set_mode(struct ns2_led_data *led_dat,
enum ns2_led_modes mode)
static void ns2_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static ssize_t ns2_led_sata_store(struct device *dev,
struct device_attribute *attr,
const char *buff, size_t count)
static ssize_t ns2_led_sata_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(sata, 0644, ns2_led_sata_show, ns2_led_sata_store);
static int __devinit
create_ns2_led(struct platform_device *pdev, struct ns2_led_data *led_dat,
const struct ns2_led *template)
static void __devexit delete_ns2_led(struct ns2_led_data *led_dat)
static int __devinit ns2_led_probe(struct platform_device *pdev)
static int __devexit ns2_led_remove(struct platform_device *pdev)
static struct platform_driver ns2_led_driver = ;
MODULE_ALIAS("platform:leds-ns2");
static int __init ns2_led_init(void)
static void __exit ns2_led_exit(void)
module_init(ns2_led_init);
module_exit(ns2_led_exit);
MODULE_AUTHOR("Simon Guinot <sguinot@lacie.com>");
MODULE_DESCRIPTION("Network Space v2 LED driver");
MODULE_LICENSE("GPL");
