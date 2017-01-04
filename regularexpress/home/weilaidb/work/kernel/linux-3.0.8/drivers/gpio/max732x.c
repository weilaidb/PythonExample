#define PORT_NONE	0x0
#define PORT_OUTPUT	0x1
#define PORT_INPUT	0x2
#define PORT_OPENDRAIN	0x3
#define IO_4I4O		0x5AA5
#define IO_4P4O		0x5FF5
#define IO_8I		0xAAAA
#define IO_8P		0xFFFF
#define IO_8O		0x5555
#define GROUP_A(x)	((x) & 0xffff)
#define GROUP_B(x)	((x) << 16)
#define INT_NONE	0x0
#define INT_NO_MASK	0x1
#define INT_INDEP_MASK	0x2
#define INT_MERGED_MASK 0x3
#define INT_CAPS(x)	(((uint64_t)(x)) << 32)
enum ;
static uint64_t max732x_features[] = ;
static const struct i2c_device_id max732x_id[] = ;
MODULE_DEVICE_TABLE(i2c, max732x_id);
struct max732x_chip ;
static int max732x_writeb(struct max732x_chip *chip, int group_a, uint8_t val)
static int max732x_readb(struct max732x_chip *chip, int group_a, uint8_t *val)
static inline int is_group_a(struct max732x_chip *chip, unsigned off)
static int max732x_gpio_get_value(struct gpio_chip *gc, unsigned off)
static void max732x_gpio_set_value(struct gpio_chip *gc, unsigned off, int val)
static int max732x_gpio_direction_input(struct gpio_chip *gc, unsigned off)
static int max732x_gpio_direction_output(struct gpio_chip *gc,
unsigned off, int val)
static int max732x_writew(struct max732x_chip *chip, uint16_t val)
static int max732x_readw(struct max732x_chip *chip, uint16_t *val)
static void max732x_irq_update_mask(struct max732x_chip *chip)
static int max732x_gpio_to_irq(struct gpio_chip *gc, unsigned off)
static void max732x_irq_mask(struct irq_data *d)
static void max732x_irq_unmask(struct irq_data *d)
static void max732x_irq_bus_lock(struct irq_data *d)
static void max732x_irq_bus_sync_unlock(struct irq_data *d)
static int max732x_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip max732x_irq_chip = ;
static uint8_t max732x_irq_pending(struct max732x_chip *chip)
static irqreturn_t max732x_irq_handler(int irq, void *devid)
static int max732x_irq_setup(struct max732x_chip *chip,
const struct i2c_device_id *id)
static void max732x_irq_teardown(struct max732x_chip *chip)
static int max732x_irq_setup(struct max732x_chip *chip,
const struct i2c_device_id *id)
static void max732x_irq_teardown(struct max732x_chip *chip)
static int __devinit max732x_setup_gpio(struct max732x_chip *chip,
const struct i2c_device_id *id,
unsigned gpio_start)
static int __devinit max732x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit max732x_remove(struct i2c_client *client)
static struct i2c_driver max732x_driver = ;
static int __init max732x_init(void)
subsys_initcall(max732x_init);
static void __exit max732x_exit(void)
module_exit(max732x_exit);
MODULE_AUTHOR("Eric Miao <eric.miao@marvell.com>");
MODULE_DESCRIPTION("GPIO expander driver for MAX732X");
MODULE_LICENSE("GPL");
