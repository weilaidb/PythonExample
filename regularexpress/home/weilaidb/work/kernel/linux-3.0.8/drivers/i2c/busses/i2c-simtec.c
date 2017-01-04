struct simtec_i2c_data ;
#define CMD_SET_SDA	(1<<2)
#define CMD_SET_SCL	(1<<3)
#define STATE_SDA	(1<<0)
#define STATE_SCL	(1<<1)
static void simtec_i2c_setsda(void *pw, int state)
static void simtec_i2c_setscl(void *pw, int state)
static int simtec_i2c_getsda(void *pw)
static int simtec_i2c_getscl(void *pw)
static int simtec_i2c_probe(struct platform_device *dev)
static int simtec_i2c_remove(struct platform_device *dev)
MODULE_ALIAS("platform:simtec-i2c");
static struct platform_driver simtec_i2c_driver = ;
static int __init i2c_adap_simtec_init(void)
static void __exit i2c_adap_simtec_exit(void)
module_init(i2c_adap_simtec_init);
module_exit(i2c_adap_simtec_exit);
MODULE_DESCRIPTION("Simtec Generic I2C Bus driver");
MODULE_AUTHOR("Ben Dooks <ben@simtec.co.uk>");
MODULE_LICENSE("GPL");
