#define I2C_CONTROL	0x00
#define I2C_CONTROLS	0x00
#define I2C_CONTROLC	0x04
#define SCL		(1 << 0)
#define SDA		(1 << 1)
struct i2c_versatile ;
static void i2c_versatile_setsda(void *data, int state)
static void i2c_versatile_setscl(void *data, int state)
static int i2c_versatile_getsda(void *data)
static int i2c_versatile_getscl(void *data)
static struct i2c_algo_bit_data i2c_versatile_algo = ;
static int i2c_versatile_probe(struct platform_device *dev)
static int i2c_versatile_remove(struct platform_device *dev)
static struct platform_driver i2c_versatile_driver = ;
static int __init i2c_versatile_init(void)
static void __exit i2c_versatile_exit(void)
subsys_initcall(i2c_versatile_init);
module_exit(i2c_versatile_exit);
MODULE_DESCRIPTION("ARM Versatile I2C bus driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:versatile-i2c");
