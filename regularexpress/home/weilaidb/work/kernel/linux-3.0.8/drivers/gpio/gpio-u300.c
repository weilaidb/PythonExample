static struct clk *clk;
static struct resource *memres;
static void __iomem *virtbase;
static struct device *gpiodev;
struct u300_gpio_port ;
static struct u300_gpio_port gpio_ports[] = ;
#define DEFAULT_OUTPUT_LOW   0
#define DEFAULT_OUTPUT_HIGH  1
#define DISABLE_PULL_UP  0
#define ENABLE_PULL_UP  1
#define GPIO_NOT_USED 0
#define GPIO_IN       1
#define GPIO_OUT      2
struct u300_gpio_configuration_data ;
const struct u300_gpio_configuration_data
u300_gpio_config[U300_GPIO_NUM_PORTS][U300_GPIO_PINS_PER_PORT] = ;
static int gpio_users;
struct gpio_struct ;
static struct gpio_struct gpio_pin[U300_GPIO_MAX];
int gpio_register_callback(unsigned gpio, int (*func)(void *arg), void *data)
EXPORT_SYMBOL(gpio_register_callback);
int gpio_unregister_callback(unsigned gpio)
EXPORT_SYMBOL(gpio_unregister_callback);
int gpio_is_valid(int number)
EXPORT_SYMBOL(gpio_is_valid);
int gpio_request(unsigned gpio, const char *label)
EXPORT_SYMBOL(gpio_request);
void gpio_free(unsigned gpio)
EXPORT_SYMBOL(gpio_free);
int gpio_get_value(unsigned gpio)
EXPORT_SYMBOL(gpio_get_value);
void gpio_set_value(unsigned gpio, int value)
EXPORT_SYMBOL(gpio_set_value);
int gpio_direction_input(unsigned gpio)
EXPORT_SYMBOL(gpio_direction_input);
int gpio_direction_output(unsigned gpio, int value)
EXPORT_SYMBOL(gpio_direction_output);
void enable_irq_on_gpio_pin(unsigned gpio, int edge)
EXPORT_SYMBOL(enable_irq_on_gpio_pin);
void disable_irq_on_gpio_pin(unsigned gpio)
EXPORT_SYMBOL(disable_irq_on_gpio_pin);
void gpio_pullup(unsigned gpio, int value)
EXPORT_SYMBOL(gpio_pullup);
static irqreturn_t gpio_irq_handler(int irq, void *dev_id)
static void gpio_set_initial_values(void)
static int __init gpio_probe(struct platform_device *pdev)
static int __exit gpio_remove(struct platform_device *pdev)
static struct platform_driver gpio_driver = ;
static int __init u300_gpio_init(void)
static void __exit u300_gpio_exit(void)
arch_initcall(u300_gpio_init);
module_exit(u300_gpio_exit);
MODULE_AUTHOR("Linus Walleij <linus.walleij@stericsson.com>");
MODULE_DESCRIPTION("ST-Ericsson AB COH 901 571/3 GPIO driver");
MODULE_DESCRIPTION("ST-Ericsson AB COH 901 335 GPIO driver");
MODULE_LICENSE("GPL");
