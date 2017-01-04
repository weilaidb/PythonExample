static DEFINE_MUTEX(ucb1x00_mutex);
static LIST_HEAD(ucb1x00_drivers);
static LIST_HEAD(ucb1x00_devices);
void ucb1x00_io_set_dir(struct ucb1x00 *ucb, unsigned int in, unsigned int out)
void ucb1x00_io_write(struct ucb1x00 *ucb, unsigned int set, unsigned int clear)
unsigned int ucb1x00_io_read(struct ucb1x00 *ucb)
static void ucb1x00_gpio_set(struct gpio_chip *chip, unsigned offset, int value)
static int ucb1x00_gpio_get(struct gpio_chip *chip, unsigned offset)
static int ucb1x00_gpio_direction_input(struct gpio_chip *chip, unsigned offset)
static int ucb1x00_gpio_direction_output(struct gpio_chip *chip, unsigned offset
, int value)
void ucb1x00_adc_enable(struct ucb1x00 *ucb)
unsigned int ucb1x00_adc_read(struct ucb1x00 *ucb, int adc_channel, int sync)
void ucb1x00_adc_disable(struct ucb1x00 *ucb)
static irqreturn_t ucb1x00_irq(int irqnr, void *devid)
int ucb1x00_hook_irq(struct ucb1x00 *ucb, unsigned int idx, void (*fn)(int, void *), void *devid)
void ucb1x00_enable_irq(struct ucb1x00 *ucb, unsigned int idx, int edges)
void ucb1x00_disable_irq(struct ucb1x00 *ucb, unsigned int idx, int edges)
int ucb1x00_free_irq(struct ucb1x00 *ucb, unsigned int idx, void *devid)
static int ucb1x00_add_dev(struct ucb1x00 *ucb, struct ucb1x00_driver *drv)
static void ucb1x00_remove_dev(struct ucb1x00_dev *dev)
static int ucb1x00_detect_irq(struct ucb1x00 *ucb)
static void ucb1x00_release(struct device *dev)
static struct class ucb1x00_class = ;
static int ucb1x00_probe(struct mcp *mcp)
static void ucb1x00_remove(struct mcp *mcp)
int ucb1x00_register_driver(struct ucb1x00_driver *drv)
void ucb1x00_unregister_driver(struct ucb1x00_driver *drv)
static int ucb1x00_suspend(struct mcp *mcp, pm_message_t state)
static int ucb1x00_resume(struct mcp *mcp)
static struct mcp_driver ucb1x00_driver = ;
static int __init ucb1x00_init(void)
static void __exit ucb1x00_exit(void)
module_init(ucb1x00_init);
module_exit(ucb1x00_exit);
EXPORT_SYMBOL(ucb1x00_io_set_dir);
EXPORT_SYMBOL(ucb1x00_io_write);
EXPORT_SYMBOL(ucb1x00_io_read);
EXPORT_SYMBOL(ucb1x00_adc_enable);
EXPORT_SYMBOL(ucb1x00_adc_read);
EXPORT_SYMBOL(ucb1x00_adc_disable);
EXPORT_SYMBOL(ucb1x00_hook_irq);
EXPORT_SYMBOL(ucb1x00_free_irq);
EXPORT_SYMBOL(ucb1x00_enable_irq);
EXPORT_SYMBOL(ucb1x00_disable_irq);
EXPORT_SYMBOL(ucb1x00_register_driver);
EXPORT_SYMBOL(ucb1x00_unregister_driver);
MODULE_AUTHOR("Russell King <rmk@arm.linux.org.uk>");
MODULE_DESCRIPTION("UCB1x00 core driver");
MODULE_LICENSE("GPL");
