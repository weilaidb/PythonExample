static struct mfd_cell tps65910s[] = ;
static int tps65910_i2c_read(struct tps65910 *tps65910, u8 reg,
int bytes, void *dest)
static int tps65910_i2c_write(struct tps65910 *tps65910, u8 reg,
int bytes, void *src)
int tps65910_set_bits(struct tps65910 *tps65910, u8 reg, u8 mask)
EXPORT_SYMBOL_GPL(tps65910_set_bits);
int tps65910_clear_bits(struct tps65910 *tps65910, u8 reg, u8 mask)
EXPORT_SYMBOL_GPL(tps65910_clear_bits);
static int tps65910_i2c_probe(struct i2c_client *i2c,
const struct i2c_device_id *id)
static int tps65910_i2c_remove(struct i2c_client *i2c)
static const struct i2c_device_id tps65910_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, tps65910_i2c_id);
static struct i2c_driver tps65910_i2c_driver = ;
static int __init tps65910_i2c_init(void)
subsys_initcall(tps65910_i2c_init);
static void __exit tps65910_i2c_exit(void)
module_exit(tps65910_i2c_exit);
MODULE_AUTHOR("Graeme Gregory <gg@slimlogic.co.uk>");
MODULE_AUTHOR("Jorge Eduardo Candelaria <jedu@slimlogic.co.uk>");
MODULE_DESCRIPTION("TPS6591x chip family multi-function driver");
MODULE_LICENSE("GPL");
