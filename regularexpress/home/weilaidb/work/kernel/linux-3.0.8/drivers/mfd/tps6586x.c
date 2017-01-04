#define TPS6586X_GPIOSET1	0x5d
#define TPS6586X_GPIOSET2	0x5e
#define TPS6586X_INT_ACK1	0xb5
#define TPS6586X_INT_ACK2	0xb6
#define TPS6586X_INT_ACK3	0xb7
#define TPS6586X_INT_ACK4	0xb8
#define TPS6586X_INT_MASK1	0xb0
#define TPS6586X_INT_MASK2	0xb1
#define TPS6586X_INT_MASK3	0xb2
#define TPS6586X_INT_MASK4	0xb3
#define TPS6586X_INT_MASK5	0xb4
#define TPS6586X_VERSIONCRC	0xcd
struct tps6586x_irq_data ;
#define TPS6586X_IRQ(_reg, _mask)				\
static const struct tps6586x_irq_data tps6586x_irqs[] = ;
struct tps6586x ;
static inline int __tps6586x_read(struct i2c_client *client,
int reg, uint8_t *val)
static inline int __tps6586x_reads(struct i2c_client *client, int reg,
int len, uint8_t *val)
static inline int __tps6586x_write(struct i2c_client *client,
int reg, uint8_t val)
static inline int __tps6586x_writes(struct i2c_client *client, int reg,
int len, uint8_t *val)
int tps6586x_write(struct device *dev, int reg, uint8_t val)
EXPORT_SYMBOL_GPL(tps6586x_write);
int tps6586x_writes(struct device *dev, int reg, int len, uint8_t *val)
EXPORT_SYMBOL_GPL(tps6586x_writes);
int tps6586x_read(struct device *dev, int reg, uint8_t *val)
EXPORT_SYMBOL_GPL(tps6586x_read);
int tps6586x_reads(struct device *dev, int reg, int len, uint8_t *val)
EXPORT_SYMBOL_GPL(tps6586x_reads);
int tps6586x_set_bits(struct device *dev, int reg, uint8_t bit_mask)
EXPORT_SYMBOL_GPL(tps6586x_set_bits);
int tps6586x_clr_bits(struct device *dev, int reg, uint8_t bit_mask)
EXPORT_SYMBOL_GPL(tps6586x_clr_bits);
int tps6586x_update(struct device *dev, int reg, uint8_t val, uint8_t mask)
EXPORT_SYMBOL_GPL(tps6586x_update);
static int tps6586x_gpio_get(struct gpio_chip *gc, unsigned offset)
static void tps6586x_gpio_set(struct gpio_chip *chip, unsigned offset,
int value)
static int tps6586x_gpio_output(struct gpio_chip *gc, unsigned offset,
int value)
static int tps6586x_gpio_init(struct tps6586x *tps6586x, int gpio_base)
static int __remove_subdev(struct device *dev, void *unused)
static int tps6586x_remove_subdevs(struct tps6586x *tps6586x)
static void tps6586x_irq_lock(struct irq_data *data)
static void tps6586x_irq_enable(struct irq_data *irq_data)
static void tps6586x_irq_disable(struct irq_data *irq_data)
static void tps6586x_irq_sync_unlock(struct irq_data *data)
static irqreturn_t tps6586x_irq(int irq, void *data)
static int __devinit tps6586x_irq_init(struct tps6586x *tps6586x, int irq,
int irq_base)
static int __devinit tps6586x_add_subdevs(struct tps6586x *tps6586x,
struct tps6586x_platform_data *pdata)
static int __devinit tps6586x_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tps6586x_i2c_remove(struct i2c_client *client)
static const struct i2c_device_id tps6586x_id_table[] = ;
MODULE_DEVICE_TABLE(i2c, tps6586x_id_table);
static struct i2c_driver tps6586x_driver = ;
static int __init tps6586x_init(void)
subsys_initcall(tps6586x_init);
static void __exit tps6586x_exit(void)
module_exit(tps6586x_exit);
MODULE_DESCRIPTION("TPS6586X core driver");
MODULE_AUTHOR("Mike Rapoport <mike@compulab.co.il>");
MODULE_LICENSE("GPL");
