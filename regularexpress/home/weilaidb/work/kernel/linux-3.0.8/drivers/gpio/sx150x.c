#define NO_UPDATE_PENDING	-1
struct sx150x_device_data ;
struct sx150x_chip ;
static const struct sx150x_device_data sx150x_devices[] = ;
static const struct i2c_device_id sx150x_id[] = ;
MODULE_DEVICE_TABLE(i2c, sx150x_id);
static s32 sx150x_i2c_write(struct i2c_client *client, u8 reg, u8 val)
static s32 sx150x_i2c_read(struct i2c_client *client, u8 reg, u8 *val)
static inline bool offset_is_oscio(struct sx150x_chip *chip, unsigned offset)
static inline void sx150x_find_cfg(u8 offset, u8 width,
u8 *reg, u8 *mask, u8 *shift)
static s32 sx150x_write_cfg(struct sx150x_chip *chip,
u8 offset, u8 width, u8 reg, u8 val)
static int sx150x_get_io(struct sx150x_chip *chip, unsigned offset)
static void sx150x_set_oscio(struct sx150x_chip *chip, int val)
static void sx150x_set_io(struct sx150x_chip *chip, unsigned offset, int val)
static int sx150x_io_input(struct sx150x_chip *chip, unsigned offset)
static int sx150x_io_output(struct sx150x_chip *chip, unsigned offset, int val)
static int sx150x_gpio_get(struct gpio_chip *gc, unsigned offset)
static void sx150x_gpio_set(struct gpio_chip *gc, unsigned offset, int val)
static int sx150x_gpio_direction_input(struct gpio_chip *gc, unsigned offset)
static int sx150x_gpio_direction_output(struct gpio_chip *gc,
unsigned offset,
int val)
static int sx150x_gpio_to_irq(struct gpio_chip *gc, unsigned offset)
static void sx150x_irq_mask(struct irq_data *d)
static void sx150x_irq_unmask(struct irq_data *d)
static int sx150x_irq_set_type(struct irq_data *d, unsigned int flow_type)
static irqreturn_t sx150x_irq_thread_fn(int irq, void *dev_id)
static void sx150x_irq_bus_lock(struct irq_data *d)
static void sx150x_irq_bus_sync_unlock(struct irq_data *d)
static void sx150x_init_chip(struct sx150x_chip *chip,
struct i2c_client *client,
kernel_ulong_t driver_data,
struct sx150x_platform_data *pdata)
static int sx150x_init_io(struct sx150x_chip *chip, u8 base, u16 cfg)
static int sx150x_reset(struct sx150x_chip *chip)
static int sx150x_init_hw(struct sx150x_chip *chip,
struct sx150x_platform_data *pdata)
static int sx150x_install_irq_chip(struct sx150x_chip *chip,
int irq_summary,
int irq_base)
static void sx150x_remove_irq_chip(struct sx150x_chip *chip)
static int __devinit sx150x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit sx150x_remove(struct i2c_client *client)
static struct i2c_driver sx150x_driver = ;
static int __init sx150x_init(void)
subsys_initcall(sx150x_init);
static void __exit sx150x_exit(void)
module_exit(sx150x_exit);
MODULE_AUTHOR("Gregory Bean <gbean@codeaurora.org>");
MODULE_DESCRIPTION("Driver for Semtech SX150X I2C GPIO Expanders");
MODULE_LICENSE("GPL v2");
MODULE_ALIAS("i2c:sx150x");
