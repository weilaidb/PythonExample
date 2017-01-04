static inline int ixp2000_scl_pin(void *data)
static inline int ixp2000_sda_pin(void *data)
static void ixp2000_bit_setscl(void *data, int val)
static void ixp2000_bit_setsda(void *data, int val)
static int ixp2000_bit_getscl(void *data)
static int ixp2000_bit_getsda(void *data)
struct ixp2000_i2c_data ;
static int ixp2000_i2c_remove(struct platform_device *plat_dev)
static int ixp2000_i2c_probe(struct platform_device *plat_dev)
static struct platform_driver ixp2000_i2c_driver = ;
static int __init ixp2000_i2c_init(void)
static void __exit ixp2000_i2c_exit(void)
module_init(ixp2000_i2c_init);
module_exit(ixp2000_i2c_exit);
MODULE_AUTHOR ("Deepak Saxena <dsaxena@plexity.net>");
MODULE_DESCRIPTION("IXP2000 GPIO-based I2C bus driver");
MODULE_LICENSE("GPL");
MODULE_ALIAS("platform:IXP2000-I2C");
