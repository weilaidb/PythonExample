static struct i2c_gpio_platform_data nhk8815_i2c_data0 = ;
static struct i2c_gpio_platform_data nhk8815_i2c_data1 = ;
static struct platform_device nhk8815_i2c_dev0 = ;
static struct platform_device nhk8815_i2c_dev1 = ;
static int __init nhk8815_i2c_init(void)
static void __exit nhk8815_i2c_exit(void)
module_init(nhk8815_i2c_init);
module_exit(nhk8815_i2c_exit);
