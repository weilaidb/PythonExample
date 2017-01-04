struct htcpld_chip ;
struct htcpld_data ;
static void htcpld_mask(struct irq_data *data)
static void htcpld_unmask(struct irq_data *data)
static int htcpld_set_type(struct irq_data *data, unsigned int flags)
static struct irq_chip htcpld_muxed_chip = ;
static irqreturn_t htcpld_handler(int irq, void *dev)
static void htcpld_chip_set(struct gpio_chip *chip, unsigned offset, int val)
static void htcpld_chip_set_ni(struct work_struct *work)
static int htcpld_chip_get(struct gpio_chip *chip, unsigned offset)
static int htcpld_direction_output(struct gpio_chip *chip,
unsigned offset, int value)
static int htcpld_direction_input(struct gpio_chip *chip,
unsigned offset)
static int htcpld_chip_to_irq(struct gpio_chip *chip, unsigned offset)
static void htcpld_chip_reset(struct i2c_client *client)
static int __devinit htcpld_setup_chip_irq(
struct platform_device *pdev,
int chip_index)
static int __devinit htcpld_register_chip_i2c(
struct platform_device *pdev,
int chip_index)
static void __devinit htcpld_unregister_chip_i2c(
struct platform_device *pdev,
int chip_index)
static int __devinit htcpld_register_chip_gpio(
struct platform_device *pdev,
int chip_index)
static int __devinit htcpld_setup_chips(struct platform_device *pdev)
static int __devinit htcpld_core_probe(struct platform_device *pdev)
static const struct i2c_device_id htcpld_chip_id[] = ;
MODULE_DEVICE_TABLE(i2c, htcpld_chip_id);
static struct i2c_driver htcpld_chip_driver = ;
static struct platform_driver htcpld_core_driver = ;
static int __init htcpld_core_init(void)
static void __exit htcpld_core_exit(void)
module_init(htcpld_core_init);
module_exit(htcpld_core_exit);
MODULE_AUTHOR("Cory Maccarrone <darkstar6262@gmail.com>");
MODULE_DESCRIPTION("I2C HTC PLD Driver");
MODULE_LICENSE("GPL");
