MODULE_AUTHOR("Benjamin Herrenschmidt <benh@kernel.crashing.org>");
MODULE_DESCRIPTION("I2C driver for Apple PowerMac");
MODULE_LICENSE("GPL");
static s32 i2c_powermac_smbus_xfer(	struct i2c_adapter*	adap,
u16			addr,
unsigned short		flags,
char			read_write,
u8			command,
int			size,
union i2c_smbus_data*	data)
static int i2c_powermac_master_xfer(	struct i2c_adapter *adap,
struct i2c_msg *msgs,
int num)
static u32 i2c_powermac_func(struct i2c_adapter * adapter)
static const struct i2c_algorithm i2c_powermac_algorithm = ;
static int __devexit i2c_powermac_remove(struct platform_device *dev)
static int __devinit i2c_powermac_probe(struct platform_device *dev)
MODULE_ALIAS("platform:i2c-powermac");
static struct platform_driver i2c_powermac_driver = ;
static int __init i2c_powermac_init(void)
static void __exit i2c_powermac_cleanup(void)
module_init(i2c_powermac_init);
module_exit(i2c_powermac_cleanup);
