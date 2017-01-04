#define DRV_NAME	"gpio-keys-polled"
struct gpio_keys_button_data ;
struct gpio_keys_polled_dev ;
static void gpio_keys_polled_check_state(struct input_dev *input,
struct gpio_keys_button *button,
struct gpio_keys_button_data *bdata)
static void gpio_keys_polled_poll(struct input_polled_dev *dev)
static void gpio_keys_polled_open(struct input_polled_dev *dev)
static void gpio_keys_polled_close(struct input_polled_dev *dev)
static int __devinit gpio_keys_polled_probe(struct platform_device *pdev)
static int __devexit gpio_keys_polled_remove(struct platform_device *pdev)
static struct platform_driver gpio_keys_polled_driver = ;
static int __init gpio_keys_polled_init(void)
static void __exit gpio_keys_polled_exit(void)
module_init(gpio_keys_polled_init);
module_exit(gpio_keys_polled_exit);
MODULE_LICENSE("GPL v2");
MODULE_AUTHOR("Gabor Juhos <juhosg@openwrt.org>");
MODULE_DESCRIPTION("Polled GPIO Buttons driver");
MODULE_ALIAS("platform:" DRV_NAME);
