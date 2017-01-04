static short poll_status(unsigned long bit)
static int xfer_read(struct i2c_adapter *adap, unsigned char *buf, int length)
static int xfer_write(struct i2c_adapter *adap, unsigned char *buf, int length)
static int puv3_i2c_xfer(struct i2c_adapter *adap, struct i2c_msg *pmsg,
int num)
static u32 puv3_i2c_func(struct i2c_adapter *adapter)
static struct i2c_algorithm puv3_i2c_algorithm = ;
static int __devinit puv3_i2c_probe(struct platform_device *pdev)
static int __devexit puv3_i2c_remove(struct platform_device *pdev)
static int puv3_i2c_suspend(struct platform_device *dev, pm_message_t state)
static int puv3_i2c_resume(struct platform_device *dev)
#define puv3_i2c_suspend NULL
#define puv3_i2c_resume NULL
MODULE_ALIAS("platform:puv3_i2c");
static struct platform_driver puv3_i2c_driver = ;
static int __init puv3_i2c_init(void)
static void __exit puv3_i2c_exit(void)
module_init(puv3_i2c_init);
module_exit(puv3_i2c_exit);
MODULE_DESCRIPTION("PKUnity v3 I2C driver");
MODULE_LICENSE("GPL v2");
