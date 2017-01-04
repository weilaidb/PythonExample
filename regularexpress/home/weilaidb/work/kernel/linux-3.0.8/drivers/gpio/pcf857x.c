static const struct i2c_device_id pcf857x_id[] = ;
MODULE_DEVICE_TABLE(i2c, pcf857x_id);
struct pcf857x ;
static int pcf857x_input8(struct gpio_chip *chip, unsigned offset)
static int pcf857x_get8(struct gpio_chip *chip, unsigned offset)
static int pcf857x_output8(struct gpio_chip *chip, unsigned offset, int value)
static void pcf857x_set8(struct gpio_chip *chip, unsigned offset, int value)
static int i2c_write_le16(struct i2c_client *client, u16 word)
static int i2c_read_le16(struct i2c_client *client)
static int pcf857x_input16(struct gpio_chip *chip, unsigned offset)
static int pcf857x_get16(struct gpio_chip *chip, unsigned offset)
static int pcf857x_output16(struct gpio_chip *chip, unsigned offset, int value)
static void pcf857x_set16(struct gpio_chip *chip, unsigned offset, int value)
static int pcf857x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int pcf857x_remove(struct i2c_client *client)
static struct i2c_driver pcf857x_driver = ;
static int __init pcf857x_init(void)
subsys_initcall(pcf857x_init);
static void __exit pcf857x_exit(void)
module_exit(pcf857x_exit);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("David Brownell");
