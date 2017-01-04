static int ab8500_i2c_write(struct ab8500 *ab8500, u16 addr, u8 data)
static int ab8500_i2c_read(struct ab8500 *ab8500, u16 addr)
static int __devinit ab8500_i2c_probe(struct platform_device *plf)
static int __devexit ab8500_i2c_remove(struct platform_device *plf)
static struct platform_driver ab8500_i2c_driver = ;
static int __init ab8500_i2c_init(void)
static void __exit ab8500_i2c_exit(void)
arch_initcall(ab8500_i2c_init);
module_exit(ab8500_i2c_exit);
MODULE_AUTHOR("Mattias WALLIN <mattias.wallin@stericsson.com");
MODULE_DESCRIPTION("AB8500 Core access via PRCMU I2C");
MODULE_LICENSE("GPL v2");
