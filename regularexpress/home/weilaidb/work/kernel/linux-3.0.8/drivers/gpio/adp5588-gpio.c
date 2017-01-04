#define DRV_NAME	"adp5588-gpio"
#define WA_DELAYED_READOUT_REVID(rev)	((rev) < 4)
struct adp5588_gpio ;
static int adp5588_gpio_read(struct i2c_client *client, u8 reg)
static int adp5588_gpio_write(struct i2c_client *client, u8 reg, u8 val)
static int adp5588_gpio_get_value(struct gpio_chip *chip, unsigned off)
static void adp5588_gpio_set_value(struct gpio_chip *chip,
unsigned off, int val)
static int adp5588_gpio_direction_input(struct gpio_chip *chip, unsigned off)
static int adp5588_gpio_direction_output(struct gpio_chip *chip,
unsigned off, int val)
static int adp5588_gpio_to_irq(struct gpio_chip *chip, unsigned off)
static void adp5588_irq_bus_lock(struct irq_data *d)
static void adp5588_irq_bus_sync_unlock(struct irq_data *d)
static void adp5588_irq_mask(struct irq_data *d)
static void adp5588_irq_unmask(struct irq_data *d)
static int adp5588_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip adp5588_irq_chip = ;
static int adp5588_gpio_read_intstat(struct i2c_client *client, u8 *buf)
static irqreturn_t adp5588_irq_handler(int irq, void *devid)
static int adp5588_irq_setup(struct adp5588_gpio *dev)
static void adp5588_irq_teardown(struct adp5588_gpio *dev)
static int adp5588_irq_setup(struct adp5588_gpio *dev)
static void adp5588_irq_teardown(struct adp5588_gpio *dev)
static int __devinit adp5588_gpio_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit adp5588_gpio_remove(struct i2c_client *client)
static const struct i2c_device_id adp5588_gpio_id[] = ;
MODULE_DEVICE_TABLE(i2c, adp5588_gpio_id);
static struct i2c_driver adp5588_gpio_driver = ;
static int __init adp5588_gpio_init(void)
module_init(adp5588_gpio_init);
static void __exit adp5588_gpio_exit(void)
module_exit(adp5588_gpio_exit);
MODULE_AUTHOR("Michael Hennerich <hennerich@blackfin.uclinux.org>");
MODULE_DESCRIPTION("GPIO ADP5588 Driver");
MODULE_LICENSE("GPL");
