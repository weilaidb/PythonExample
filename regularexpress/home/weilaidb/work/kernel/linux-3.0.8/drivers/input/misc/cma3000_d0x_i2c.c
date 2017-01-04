static int cma3000_i2c_set(struct device *dev,
u8 reg, u8 val, char *msg)
static int cma3000_i2c_read(struct device *dev, u8 reg, char *msg)
static const struct cma3000_bus_ops cma3000_i2c_bops = ;
static int __devinit cma3000_i2c_probe(struct i2c_client *client,
const struct i2c_device_id *id)
static int __devexit cma3000_i2c_remove(struct i2c_client *client)
static int cma3000_i2c_suspend(struct device *dev)
static int cma3000_i2c_resume(struct device *dev)
static const struct dev_pm_ops cma3000_i2c_pm_ops = ;
static const struct i2c_device_id cma3000_i2c_id[] = ;
MODULE_DEVICE_TABLE(i2c, cma3000_i2c_id);
static struct i2c_driver cma3000_i2c_driver = ;
static int __init cma3000_i2c_init(void)
static void __exit cma3000_i2c_exit(void)
module_init(cma3000_i2c_init);
module_exit(cma3000_i2c_exit);
MODULE_DESCRIPTION("CMA3000-D0x Accelerometer I2C Driver");
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Hemanth V <hemanthv@ti.com>");
