static DEFINE_SPINLOCK(gpio_ext_lock);
static void gpio_ext_set_addr(struct netxbig_gpio_ext *gpio_ext, int addr)
static void gpio_ext_set_data(struct netxbig_gpio_ext *gpio_ext, int data)
static void gpio_ext_enable_select(struct netxbig_gpio_ext *gpio_ext)
static void gpio_ext_set_value(struct netxbig_gpio_ext *gpio_ext,
int addr, int value)
static int __devinit gpio_ext_init(struct netxbig_gpio_ext *gpio_ext)
static void __devexit gpio_ext_free(struct netxbig_gpio_ext *gpio_ext)
struct netxbig_led_data ;
static int netxbig_led_get_timer_mode(enum netxbig_led_mode *mode,
unsigned long delay_on,
unsigned long delay_off,
struct netxbig_led_timer *timer,
int num_timer)
static int netxbig_led_blink_set(struct led_classdev *led_cdev,
unsigned long *delay_on,
unsigned long *delay_off)
static void netxbig_led_set(struct led_classdev *led_cdev,
enum led_brightness value)
static ssize_t netxbig_led_sata_store(struct device *dev,
struct device_attribute *attr,
const char *buff, size_t count)
static ssize_t netxbig_led_sata_show(struct device *dev,
struct device_attribute *attr, char *buf)
static DEVICE_ATTR(sata, 0644, netxbig_led_sata_show, netxbig_led_sata_store);
static void __devexit delete_netxbig_led(struct netxbig_led_data *led_dat)
static int __devinit
create_netxbig_led(struct platform_device *pdev,
struct netxbig_led_data *led_dat,
const struct netxbig_led *template)
static int __devinit netxbig_led_probe(struct platform_device *pdev)
static int __devexit netxbig_led_remove(struct platform_device *pdev)
static struct platform_driver netxbig_led_driver = ;
MODULE_ALIAS("platform:leds-netxbig");
static int __init netxbig_led_init(void)
static void __exit netxbig_led_exit(void)
module_init(netxbig_led_init);
module_exit(netxbig_led_exit);
MODULE_AUTHOR("Simon Guinot <sguinot@lacie.com>");
MODULE_DESCRIPTION("LED driver for LaCie xBig Network boards");
MODULE_LICENSE("GPL");
