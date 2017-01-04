#define PCA953X_INPUT		0
#define PCA953X_OUTPUT		1
#define PCA953X_INVERT		2
#define PCA953X_DIRECTION	3
#define PCA957X_IN		0
#define PCA957X_INVRT		1
#define PCA957X_BKEN		2
#define PCA957X_PUPD		3
#define PCA957X_CFG		4
#define PCA957X_OUT		5
#define PCA957X_MSK		6
#define PCA957X_INTS		7
#define PCA_GPIO_MASK		0x00FF
#define PCA_INT			0x0100
#define PCA953X_TYPE		0x1000
#define PCA957X_TYPE		0x2000
static const struct i2c_device_id pca953x_id[] = ;
MODULE_DEVICE_TABLE(i2c, pca953x_id);
struct pca953x_chip ;
static int pca953x_write_reg(struct pca953x_chip *chip, int reg, uint16_t val)
static int pca953x_read_reg(struct pca953x_chip *chip, int reg, uint16_t *val)
static int pca953x_gpio_direction_input(struct gpio_chip *gc, unsigned off)
static int pca953x_gpio_direction_output(struct gpio_chip *gc,
unsigned off, int val)
static int pca953x_gpio_get_value(struct gpio_chip *gc, unsigned off)
static void pca953x_gpio_set_value(struct gpio_chip *gc, unsigned off, int val)
static void pca953x_setup_gpio(struct pca953x_chip *chip, int gpios)
static int pca953x_gpio_to_irq(struct gpio_chip *gc, unsigned off)
static void pca953x_irq_mask(struct irq_data *d)
static void pca953x_irq_unmask(struct irq_data *d)
static void pca953x_irq_bus_lock(struct irq_data *d)
static void pca953x_irq_bus_sync_unlock(struct irq_data *d)
static int pca953x_irq_set_type(struct irq_data *d, unsigned int type)
static struct irq_chip pca953x_irq_chip = ;
static uint16_t pca953x_irq_pending(struct pca953x_chip *chip)
static irqreturn_t pca953x_irq_handler(int irq, void *devid)
static int pca953x_irq_setup(struct pca953x_chip *chip,
const struct i2c_device_id *id)
static void pca953x_irq_teardown(struct pca953x_chip *chip)
static int pca953x_irq_setup(struct pca953x_chip *chip,
const struct i2c_device_id *id)
static void pca953x_irq_teardown(struct pca953x_chip *chip)
static struct pca953x_platform_data *
pca953x_get_alt_pdata(struct i2c_client *client)
static struct pca953x_platform_data *
pca953x_get_alt_pdata(struct i2c_client *client)
static int __devinit device_pca953x_init(struct pca953x_chip *chip, int invert)
static int __devinit device_pca957x_init(struct pca953x_chip *chip, int invert)
static int __devinit pca953x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pca953x_remove(struct i2c_client *client)
static struct i2c_driver pca953x_driver = ;
static int __init pca953x_init(void)
subsys_initcall(pca953x_init);
static void __exit pca953x_exit(void)
module_exit(pca953x_exit);
MODULE_AUTHOR("eric miao <eric.miao@marvell.com>");
MODULE_DESCRIPTION("GPIO expander driver for PCA953x");
MODULE_LICENSE("GPL");
