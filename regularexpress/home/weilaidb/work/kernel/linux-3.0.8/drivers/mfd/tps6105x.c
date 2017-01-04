int tps6105x_set(struct tps6105x *tps6105x, u8 reg, u8 value)
EXPORT_SYMBOL(tps6105x_set);
int tps6105x_get(struct tps6105x *tps6105x, u8 reg, u8 *buf)
EXPORT_SYMBOL(tps6105x_get);
int tps6105x_mask_and_set(struct tps6105x *tps6105x, u8 reg,
u8 bitmask, u8 bitvalues)
EXPORT_SYMBOL(tps6105x_mask_and_set);
static int __devinit tps6105x_startup(struct tps6105x *tps6105x)
static struct mfd_cell tps6105x_cells[] = ;
static int __devinit tps6105x_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit tps6105x_remove(struct i2c_client *client)
static const struct i2c_device_id tps6105x_id[] = ;
MODULE_DEVICE_TABLE(i2c, tps6105x_id);
static struct i2c_driver tps6105x_driver = ;
static int __init tps6105x_init(void)
subsys_initcall(tps6105x_init);
static void __exit tps6105x_exit(void)
module_exit(tps6105x_exit);
MODULE_AUTHOR("Linus Walleij");
MODULE_DESCRIPTION("TPS6105x White LED Boost Converter Driver");
MODULE_LICENSE("GPL v2");
